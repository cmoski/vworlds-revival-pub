// renderhost.cpp - Minimal VWorlds render host
// Uses MFC CWnd::CreateControl to host the VWRenderView OCX with full OLE support.

#define _ATL_ALLOW_DEPRECATED_FUNCTIONS
#define _AFXDLL

#include <afxwin.h>
#include <afxdisp.h>
#include <afxctl.h>
#include <atlbase.h>
CComModule _Module;
#include <atlcom.h>
#include <stdio.h>
#include <activscp.h>   // IActiveScript, IActiveScriptParse

// VWorlds COM interfaces
#include <vwobject.h>    // IWorld, IThing, IPropertyList
#include <vwuiobjs.h>    // IVWControlManager
#include <vwclient.h>    // IVWClientSite, IID_IVWClientSite
#include <vector.h>      // IVector
#include <math.h>

// Spuck demo (spuck.cpp)
void SetSpuckRenderer(IDispatch* pDisp);
void CreateSpuck(IWorld* pWorld);
void AnimateSpuck();

// VBScript engine CLSID
// {B54F3741-5B07-11cf-A4B0-00AA004A55E8}
static const CLSID CLSID_VBScript =
    { 0xb54f3741, 0x5b07, 0x11cf, { 0xa4, 0xb0, 0x00, 0xaa, 0x00, 0x4a, 0x55, 0xe8 } };

// VWRenderView CLSID
static const CLSID CLSID_VWRenderView =
    { 0x44fac783, 0x0ca4, 0x11d0, { 0x89, 0xa9, 0x00, 0xa0, 0xc9, 0x05, 0x41, 0x29 } };

// ThingTree (Object Explorer) CLSID
static const CLSID CLSID_ThingTree =
    { 0xef7d6571, 0x0161, 0x11d2, { 0x88, 0xbe, 0x00, 0xc0, 0x4f, 0xc3, 0x2e, 0xf3 } };

// TPList (Thing Property List) CLSID
static const CLSID CLSID_TPList =
    { 0xef7d655d, 0x0161, 0x11d2, { 0x88, 0xbe, 0x00, 0xc0, 0x4f, 0xc3, 0x2e, 0xf3 } };

// Vwsound (Sound playback) CLSID
static const CLSID CLSID_Vwsound =
    { 0x05769b8c, 0xa180, 0x11d1, { 0x83, 0xe9, 0x00, 0xc0, 0x4f, 0xb6, 0xfa, 0x46 } };

static const int EXPLORER_WIDTH = 250; // pixels for left panel

static FILE* g_logFile = NULL;
static bool g_trace = false;

void Log(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    char buf[2048];
    vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);

    OutputDebugStringA(buf);
    OutputDebugStringA("\n");
    if (g_trace) { printf("%s\n", buf); fflush(stdout); }
    if (g_logFile) { fprintf(g_logFile, "%s\n", buf); fflush(g_logFile); }
}

// Main frame window hosting the OCX
// =====================================================================
// Client Event Sink — receives OnTell, OnReport, OnUserConnect etc.
// Registered via connection point on VWClient IDispatch
// =====================================================================
class CRenderFrame; // forward decl
static CRenderFrame* g_pRenderFrame = NULL; // for event sink callback
static IWorld* g_pCullWorld = NULL; // for distance culling timer

class CClientEventSink : public IVWClientSite, public IDispatch
{
    ULONG m_cRef;
public:
    CClientEventSink() : m_cRef(1) {}

    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
        if (riid == IID_IUnknown) {
            *ppv = static_cast<IVWClientSite*>(this);
            AddRef(); return S_OK;
        }
        if (riid == IID_IVWClientSite) {
            *ppv = static_cast<IVWClientSite*>(this);
            AddRef(); return S_OK;
        }
        if (riid == IID_IDispatch) {
            *ppv = static_cast<IDispatch*>(this);
            AddRef(); return S_OK;
        }
        *ppv = NULL; return E_NOINTERFACE;
    }
    STDMETHOD_(ULONG, AddRef)() { return ++m_cRef; }
    STDMETHOD_(ULONG, Release)() { ULONG c = --m_cRef; if (!c) delete this; return c; }

    // IVWClientSite vtable methods (called directly by VWClient)
    STDMETHOD(OnConnect)(IWorld*) { return S_OK; }
    STDMETHOD(OnDisconnect)(IWorld*) { return S_OK; }
    STDMETHOD(OnUserConnect)(IThing* pThing);
    STDMETHOD(OnUserDisconnect)(IThing* pThing);
    STDMETHOD(OnUserReconnect)(IVWClient*, IWorld*, IThing*) { return S_OK; }
    STDMETHOD(OnTrace)(BSTR) { return S_OK; }
    STDMETHOD(OnReport)(BSTR bstr, long lType);
    STDMETHOD(OnUIEvent)(IThing* pThing, BSTR bstrEventName, VARIANT varArg);

    // IDispatch — some events also arrive by name
    STDMETHOD(GetTypeInfoCount)(UINT* p) { *p = 0; return S_OK; }
    STDMETHOD(GetTypeInfo)(UINT, LCID, ITypeInfo**) { return E_NOTIMPL; }
    STDMETHOD(GetIDsOfNames)(REFIID, LPOLESTR* names, UINT count, LCID, DISPID* ids) {
        for (UINT i = 0; i < count; i++) {
            if (_wcsicmp(names[i], L"OnTell") == 0) ids[i] = 1;
            else if (_wcsicmp(names[i], L"OnReport") == 0) ids[i] = 2;
            else if (_wcsicmp(names[i], L"OnUserConnect") == 0) ids[i] = 3;
            else if (_wcsicmp(names[i], L"OnUserDisconnect") == 0) ids[i] = 4;
            else if (_wcsicmp(names[i], L"OnTrace") == 0) ids[i] = 5;
            else if (_wcsicmp(names[i], L"OnConnect") == 0) ids[i] = 6;
            else if (_wcsicmp(names[i], L"OnDisconnect") == 0) ids[i] = 7;
            else if (_wcsicmp(names[i], L"OnUIEvent") == 0) ids[i] = 8;
            else if (_wcsicmp(names[i], L"OnUserReconnect") == 0) ids[i] = 9;
            else ids[i] = DISPID_UNKNOWN;
        }
        return S_OK;
    }
    STDMETHOD(Invoke)(DISPID id, REFIID, LCID, WORD, DISPPARAMS* dp, VARIANT*, EXCEPINFO*, UINT*);
};

// =====================================================================
// Command Window — VBScript console
// =====================================================================

// Minimal IActiveScriptSite for hosting VBScript in renderhost
class CMinimalScriptSite : public IActiveScriptSite
{
    ULONG m_cRef;
    CString* m_pOutput;  // append output here
    CComPtr<IUnknown> m_pWorldUnk;
public:
    bool m_bSuppressErrors;  // suppress during expression-attempt
    CMinimalScriptSite(CString* pOutput, IUnknown* pWorldUnk)
        : m_cRef(1), m_pOutput(pOutput), m_pWorldUnk(pWorldUnk), m_bSuppressErrors(false) {}

    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
        if (riid == IID_IUnknown || riid == IID_IActiveScriptSite) {
            *ppv = static_cast<IActiveScriptSite*>(this);
            AddRef();
            return S_OK;
        }
        *ppv = NULL;
        return E_NOINTERFACE;
    }
    STDMETHOD_(ULONG, AddRef)() { return ++m_cRef; }
    STDMETHOD_(ULONG, Release)() {
        ULONG c = --m_cRef;
        if (c == 0) delete this;
        return c;
    }

    // IActiveScriptSite
    STDMETHOD(GetLCID)(LCID* plcid) { *plcid = LOCALE_USER_DEFAULT; return S_OK; }
    STDMETHOD(GetItemInfo)(LPCOLESTR pstrName, DWORD dwReturnMask, IUnknown** ppunkItem, ITypeInfo** ppti) {
        if (ppti) *ppti = NULL;
        if (ppunkItem) *ppunkItem = NULL;
        if (_wcsicmp(pstrName, L"World") == 0) {
            if (dwReturnMask & SCRIPTINFO_IUNKNOWN && ppunkItem && m_pWorldUnk) {
                *ppunkItem = m_pWorldUnk;
                (*ppunkItem)->AddRef();
                return S_OK;
            }
        }
        return TYPE_E_ELEMENTNOTFOUND;
    }
    STDMETHOD(GetDocVersionString)(BSTR* pbstrVersion) { *pbstrVersion = SysAllocString(L"1.0"); return S_OK; }
    STDMETHOD(OnScriptTerminate)(const VARIANT*, const EXCEPINFO*) { return S_OK; }
    STDMETHOD(OnStateChange)(SCRIPTSTATE) { return S_OK; }
    STDMETHOD(OnScriptError)(IActiveScriptError* pError) {
        if (m_bSuppressErrors) return S_OK;
        EXCEPINFO ei = {};
        pError->GetExceptionInfo(&ei);
        DWORD ctx; ULONG line; LONG ch;
        pError->GetSourcePosition(&ctx, &line, &ch);
        CString msg;
        if (ei.bstrDescription)
            msg.Format("Error: %S", ei.bstrDescription);
        else
            msg.Format("Error (line %d)", line + 1);
        if (m_pOutput) *m_pOutput += msg + "\r\n";
        SysFreeString(ei.bstrSource);
        SysFreeString(ei.bstrDescription);
        SysFreeString(ei.bstrHelpFile);
        return S_OK;
    }
    STDMETHOD(OnEnterScript)() { return S_OK; }
    STDMETHOD(OnLeaveScript)() { return S_OK; }
};

// Command Window frame
class CCommandFrame : public CFrameWnd
{
public:
    CEdit m_editOutput;
    CEdit m_editInput;
    CFont m_font;
    CString m_outputText;
    CComPtr<IActiveScript> m_pScript;
    CComPtr<IActiveScriptParse> m_pParse;
    CMinimalScriptSite* m_pSite;
    CComPtr<IDispatch> m_pWorldDisp;

    CCommandFrame() : m_pSite(NULL) {}

    BOOL CreateAndHost(IDispatch* pWorldDisp)
    {
        m_pWorldDisp = pWorldDisp;

        if (!Create(NULL, "VWorlds Command Window",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            CRect(100, 400, 560, 720)))
            return FALSE;

        CRect rc;
        GetClientRect(&rc);

        // Monospace font
        m_font.CreateFont(14, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE,
            DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
            DEFAULT_QUALITY, FIXED_PITCH | FF_MODERN, "Courier New");

        // Output pane (top ~85%)
        int inputH = 24;
        m_editOutput.Create(
            WS_CHILD | WS_VISIBLE | WS_VSCROLL | WS_BORDER |
            ES_MULTILINE | ES_READONLY | ES_AUTOVSCROLL,
            CRect(4, 4, rc.Width() - 4, rc.Height() - inputH - 8),
            this, 201);
        m_editOutput.SetFont(&m_font);

        // Input pane (bottom)
        m_editInput.Create(
            WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL,
            CRect(4, rc.Height() - inputH - 4, rc.Width() - 4, rc.Height() - 4),
            this, 202);
        m_editInput.SetFont(&m_font);
        m_editInput.SetFocus();

        // Initialize VBScript engine
        InitScriptEngine();

        m_outputText = "VWorlds Command Window\r\nType VBScript commands. World object is available.\r\n\r\n";
        m_editOutput.SetWindowText(m_outputText);

        return TRUE;
    }

    void InitScriptEngine()
    {
        HRESULT hr;

        // Create VBScript engine
        hr = CoCreateInstance(CLSID_VBScript, NULL, CLSCTX_INPROC_SERVER,
            IID_IActiveScript, (void**)&m_pScript);
        if (FAILED(hr)) { Log("CmdWin: CoCreateInstance(VBScript) failed hr=0x%08X", hr); return; }

        hr = m_pScript->QueryInterface(IID_IActiveScriptParse, (void**)&m_pParse);
        if (FAILED(hr)) { Log("CmdWin: QI(IActiveScriptParse) failed hr=0x%08X", hr); return; }

        // Create script site
        m_pSite = new CMinimalScriptSite(&m_outputText, m_pWorldDisp);
        hr = m_pScript->SetScriptSite(m_pSite);
        if (FAILED(hr)) { Log("CmdWin: SetScriptSite failed hr=0x%08X", hr); return; }

        hr = m_pParse->InitNew();
        if (FAILED(hr)) { Log("CmdWin: InitNew failed hr=0x%08X", hr); return; }

        // Add "World" as a named item
        hr = m_pScript->AddNamedItem(L"World", SCRIPTITEM_ISVISIBLE | SCRIPTITEM_GLOBALMEMBERS);
        if (FAILED(hr)) { Log("CmdWin: AddNamedItem(World) failed hr=0x%08X", hr); return; }

        // Start the engine
        hr = m_pScript->SetScriptState(SCRIPTSTATE_CONNECTED);
        if (FAILED(hr)) { Log("CmdWin: SetScriptState failed hr=0x%08X", hr); return; }

        Log("CmdWin: VBScript engine initialized OK");
    }

    void ExecuteCommand(const CString& cmd)
    {
        if (!m_pParse) return;

        // Show command in output
        m_outputText += ">> " + cmd + "\r\n";

        // Special commands
        if (cmd.CompareNoCase("spuck") == 0) {
            CComPtr<IWorld> pWorld;
            if (m_pWorldDisp)
                m_pWorldDisp->QueryInterface(IID_IWorld, (void**)&pWorld);
            CreateSpuck(pWorld);
            m_outputText += "Spuck created! Type 'animate' to wave.\r\n";
            m_editOutput.SetWindowText(m_outputText);
            m_editOutput.LineScroll(m_editOutput.GetLineCount());
            return;
        }
        if (cmd.CompareNoCase("animate") == 0) {
            AnimateSpuck();
            m_outputText += "Animating...\r\n";
            m_editOutput.SetWindowText(m_outputText);
            m_editOutput.LineScroll(m_editOutput.GetLineCount());
            return;
        }

        // Try as statement first (assignments like x.Fog = True must be statements)
        EXCEPINFO ei = {};
        CComVariant varResult;
        HRESULT hr = m_pParse->ParseScriptText(
            CComBSTR(cmd), NULL, NULL, NULL, 0, 0,
            0, NULL, &ei);

        if (SUCCEEDED(hr)) {
            // Statement worked — no result to show
            varResult.vt = VT_EMPTY;
        } else {
            // Statement failed — retry as expression (for World.Version etc.)
            m_pSite->m_bSuppressErrors = true;
            memset(&ei, 0, sizeof(ei));
            HRESULT hr2 = m_pParse->ParseScriptText(
                CComBSTR(cmd), NULL, NULL, NULL, 0, 0,
                SCRIPTTEXT_ISEXPRESSION,
                &varResult, &ei);
            m_pSite->m_bSuppressErrors = false;
            if (SUCCEEDED(hr2)) hr = hr2;  // expression succeeded
        }

        if (SUCCEEDED(hr)) {
            // Show result if expression returned a value
            if (varResult.vt != VT_EMPTY) {
                CComVariant varStr;
                if (SUCCEEDED(VariantChangeType(&varStr, &varResult, 0, VT_BSTR))) {
                    CString strResult(varStr.bstrVal);
                    m_outputText += strResult + "\r\n";
                }
            }
            m_outputText += "OK\r\n";
        }

        // Update display
        m_editOutput.SetWindowText(m_outputText);
        m_editOutput.LineScroll(m_editOutput.GetLineCount());
    }

    afx_msg void OnSize(UINT nType, int cx, int cy)
    {
        CFrameWnd::OnSize(nType, cx, cy);
        int inputH = 24;
        if (m_editOutput.m_hWnd)
            m_editOutput.MoveWindow(4, 4, cx - 8, cy - inputH - 12);
        if (m_editInput.m_hWnd)
            m_editInput.MoveWindow(4, cy - inputH - 4, cx - 8, inputH);
    }

    virtual BOOL PreTranslateMessage(MSG* pMsg)
    {
        // Enter key in input = execute
        if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN &&
            pMsg->hwnd == m_editInput.m_hWnd)
        {
            CString cmd;
            m_editInput.GetWindowText(cmd);
            cmd.Trim();
            if (!cmd.IsEmpty()) {
                ExecuteCommand(cmd);
                m_editInput.SetWindowText("");
            }
            return TRUE;
        }
        return CFrameWnd::PreTranslateMessage(pMsg);
    }

    DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CCommandFrame, CFrameWnd)
    ON_WM_SIZE()
END_MESSAGE_MAP()

// Object Explorer in its own popout window
class CExplorerFrame : public CFrameWnd
{
public:
    CWnd m_treeWnd;     // ThingTree (top)
    CWnd m_propWnd;     // TPList property editor (bottom)
    CComPtr<IDispatch> m_pExplorerDisp;
    CComPtr<IDispatch> m_pPropDisp;
    CComPtr<IDispatch> m_pWorldDisp; // world for deferred Global lookup
    CComPtr<IVWControlManager> m_pControlMgr; // ControlManager for selection polling
    static const int MARGIN = 20;
    CComVariant m_lastTarget;

    CExplorerFrame() : m_targetDispid(0), m_targetDispidValid(false) {}

    BOOL CreateAndHost()
    {
        if (!Create(NULL, "VWorlds Object Explorer",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            CRect(820, 50, 1250, 750)))
            return FALSE;

        CRect rc;
        GetClientRect(&rc);
        int halfH = rc.Height() / 2;

        // ThingTree on top
        BOOL bTree = m_treeWnd.CreateControl(
            CLSID_ThingTree, "ThingTree",
            WS_CHILD | WS_VISIBLE,
            CRect(MARGIN, 0, rc.Width(), halfH),
            this, 101
        );
        if (bTree) {
            LPUNKNOWN pUnk = m_treeWnd.GetControlUnknown();
            if (pUnk)
                pUnk->QueryInterface(IID_IDispatch, (void**)&m_pExplorerDisp);
            Log("PASS: ThingTree created");
        }

        // TPList (property editor) on bottom
        BOOL bProp = m_propWnd.CreateControl(
            CLSID_TPList, "TPList",
            WS_CHILD | WS_VISIBLE | WS_BORDER,
            CRect(MARGIN, halfH, rc.Width(), rc.Height()),
            this, 103
        );
        if (bProp) {
            LPUNKNOWN pUnk = m_propWnd.GetControlUnknown();
            if (pUnk)
                pUnk->QueryInterface(IID_IDispatch, (void**)&m_pPropDisp);
            Log("PASS: TPList (property editor) created");
        }

        // Start polling timer for selection sync
        SetTimer(998, 500, NULL);

        return TRUE;
    }

    afx_msg void OnSize(UINT nType, int cx, int cy)
    {
        CFrameWnd::OnSize(nType, cx, cy);
        int halfH = cy / 2;
        if (m_treeWnd.m_hWnd)
            m_treeWnd.MoveWindow(MARGIN, 0, cx - MARGIN, halfH);
        if (m_propWnd.m_hWnd)
            m_propWnd.MoveWindow(MARGIN, halfH, cx - MARGIN, cy - halfH);
    }

    // Cache TPList's TargetObjectProperty dispid (looked up once)
    DISPID m_targetDispid;
    bool m_targetDispidValid;

    void SetTPListTarget(IDispatch* pThing)
    {
        if (!m_pPropDisp || !pThing) return;

        // Lookup TargetObjectProperty dispid once
        if (!m_targetDispidValid) {
            OLECHAR* targetName = L"TargetObjectProperty";
            HRESULT hr = m_pPropDisp->GetIDsOfNames(IID_NULL, &targetName, 1, LOCALE_USER_DEFAULT, &m_targetDispid);
            if (FAILED(hr)) { Log("TPList: GetIDsOfNames(TargetObjectProperty) failed hr=0x%08X", hr); return; }
            m_targetDispidValid = true;
        }

        CComVariant varThing(pThing);
        DISPID putid = DISPID_PROPERTYPUT;
        DISPPARAMS dpPut = { &varThing, &putid, 1, 1 };
        HRESULT hr = m_pPropDisp->Invoke(m_targetDispid, IID_NULL, LOCALE_USER_DEFAULT,
            DISPATCH_PROPERTYPUT, &dpPut, NULL, NULL, NULL);
        // Only log on change, not every poll
        static IDispatch* s_lastLogged = NULL;
        if (pThing != s_lastLogged) {
            Log("TPList: Set TargetObjectProperty: hr=0x%08X target=%p", hr, pThing);
            s_lastLogged = pThing;
        }
    }

    afx_msg void OnTimer(UINT_PTR nIDEvent)
    {
        // Timer 997: initial seed with Global object
        if (nIDEvent == 997 && m_pPropDisp && m_pWorldDisp)
        {
            KillTimer(997);

            OLECHAR* globalName = L"Global";
            DISPID globalDispid;
            HRESULT hr = m_pWorldDisp->GetIDsOfNames(IID_NULL, &globalName, 1, LOCALE_USER_DEFAULT, &globalDispid);
            if (SUCCEEDED(hr))
            {
                DISPPARAMS dpGet = { NULL, NULL, 0, 0 };
                CComVariant varGlobal;
                hr = m_pWorldDisp->Invoke(globalDispid, IID_NULL, LOCALE_USER_DEFAULT,
                    DISPATCH_PROPERTYGET, &dpGet, &varGlobal, NULL, NULL);
                if (SUCCEEDED(hr) && varGlobal.vt == VT_DISPATCH && varGlobal.pdispVal)
                {
                    SetTPListTarget(varGlobal.pdispVal);
                    Log("TPList: seeded with Global: hr=0x%08X", hr);
                }
                else
                    Log("TPList: Global get failed hr=0x%08X vt=%d", hr, varGlobal.vt);
            }
            else
                Log("TPList: Global lookup failed hr=0x%08X", hr);
        }

        // Timer 998: poll ControlManager's SelectionList and sync to TPList
        if (nIDEvent == 998 && m_pWorldDisp && m_pPropDisp)
        {
            // Get ControlManager via IWorld::get_Tool (proper COM, not IDispatch)
            if (!m_pControlMgr) {
                CComPtr<IWorld> pWorld;
                HRESULT hr = m_pWorldDisp->QueryInterface(IID_IWorld, (void**)&pWorld);
                if (SUCCEEDED(hr)) {
                    CComPtr<IUnknown> pToolUnk;
                    hr = pWorld->get_Tool(CComBSTR("ControlManager"), &pToolUnk);
                    if (SUCCEEDED(hr) && pToolUnk) {
                        hr = pToolUnk->QueryInterface(IID_IVWControlManager, (void**)&m_pControlMgr);
                        if (SUCCEEDED(hr))
                            Log("TPList: got ControlManager via IWorld: %p", (IVWControlManager*)m_pControlMgr);
                    }
                }
            }
            if (m_pControlMgr) {
                CComPtr<IPropertyList> pSelList;
                HRESULT hr = m_pControlMgr->get_SelectionList(&pSelList);
                if (SUCCEEDED(hr) && pSelList) {
                    long count = 0;
                    pSelList->get_Count(&count);
                    if (count > 0) {
                        CComPtr<IObjectProperty> pObj;
                        hr = pSelList->get_ObjectProperty(0, &pObj);
                        if (SUCCEEDED(hr) && pObj) {
                            CComPtr<IDispatch> pDisp;
                            pObj->QueryInterface(IID_IDispatch, (void**)&pDisp);
                            if (pDisp && pDisp.p != m_lastTarget.pdispVal) {
                                m_lastTarget = pDisp.p;
                                SetTPListTarget(pDisp);
                            }
                        }
                    }
                }
            }
        }

        CFrameWnd::OnTimer(nIDEvent);
    }

    DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CExplorerFrame, CFrameWnd)
    ON_WM_SIZE()
    ON_WM_TIMER()
END_MESSAGE_MAP()

class CRenderApp; // forward decl for Ctrl+S handler

// Main render window
class CRenderFrame : public CFrameWnd
{
public:
    CWnd m_ocxWnd;
    CWnd m_soundWnd;    // Vwsound OCX (1x1 hidden child for audio playback)
    CComPtr<IDispatch> m_pRendererDisp;
    CComPtr<IDispatch> m_pSoundDisp;
    CEdit m_chatHistory;   // Chat log (multiline readonly)
    CEdit m_chatInput;     // Chat input (single line)
    CFont m_chatFont;
    CString m_chatText;
    static const int CHAT_HEIGHT = 120;

    void AppendChat(const CString& text)
    {
        m_chatText += text + "\r\n";
        if (m_chatHistory.m_hWnd) {
            m_chatHistory.SetWindowText(m_chatText);
            m_chatHistory.LineScroll(m_chatHistory.GetLineCount());
        }
    }

    BOOL CreateAndHost()
    {
        if (!Create(NULL, "VWorlds Render Host",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            CRect(50, 50, 850, 750)))
        {
            Log("FAIL: CFrameWnd::Create failed");
            return FALSE;
        }
        Log("Frame window created: %p", m_hWnd);

        CRect rc;
        GetClientRect(&rc);
        int chatTop = rc.Height() - CHAT_HEIGHT;
        int inputH = 22;

        // 3D viewport (top portion)
        BOOL bCreated = m_ocxWnd.CreateControl(
            CLSID_VWRenderView,
            "VWRenderView",
            WS_CHILD | WS_VISIBLE,
            CRect(0, 0, rc.Width(), chatTop),
            this,
            100
        );

        if (!bCreated) {
            Log("FAIL: CreateControl(VWRenderView) failed, error %lu", GetLastError());
            return FALSE;
        }
        Log("PASS: VWRenderView OCX created");

        LPUNKNOWN pUnk = m_ocxWnd.GetControlUnknown();
        if (pUnk) {
            pUnk->QueryInterface(IID_IDispatch, (void**)&m_pRendererDisp);
            Log("PASS: Renderer IDispatch: %p", (IDispatch*)m_pRendererDisp);
        } else {
            Log("FAIL: GetControlUnknown returned NULL");
        }

        // Chat font
        m_chatFont.CreateFont(14, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE,
            DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
            DEFAULT_QUALITY, FIXED_PITCH | FF_MODERN, "Courier New");

        // Chat history (bottom, above input)
        m_chatHistory.Create(
            WS_CHILD | WS_VISIBLE | WS_VSCROLL | WS_BORDER |
            ES_MULTILINE | ES_READONLY | ES_AUTOVSCROLL,
            CRect(0, chatTop, rc.Width(), rc.Height() - inputH),
            this, 110);
        m_chatHistory.SetFont(&m_chatFont);

        // Chat input (very bottom)
        m_chatInput.Create(
            WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL,
            CRect(0, rc.Height() - inputH, rc.Width(), rc.Height()),
            this, 111);
        m_chatInput.SetFont(&m_chatFont);

        m_chatText = "*** Welcome to VWorlds ***\r\n";
        m_chatHistory.SetWindowText(m_chatText);

        // Host Vwsound OCX as 1x1 hidden child (audio only, no visual)
        BOOL bSound = m_soundWnd.CreateControl(
            CLSID_Vwsound,
            "Vwsound",
            WS_CHILD,  // not visible
            CRect(0, 0, 1, 1),
            this,
            102
        );
        if (bSound) {
            LPUNKNOWN pSndUnk = m_soundWnd.GetControlUnknown();
            if (pSndUnk)
                pSndUnk->QueryInterface(IID_IDispatch, (void**)&m_pSoundDisp);
            Log("PASS: Vwsound (DirectSound) control created");
        } else {
            Log("WARN: Vwsound control failed, no audio");
        }

        return TRUE;
    }

    afx_msg void OnSize(UINT nType, int cx, int cy)
    {
        CFrameWnd::OnSize(nType, cx, cy);
        int chatTop = cy - CHAT_HEIGHT;
        int inputH = 22;
        if (m_ocxWnd.m_hWnd)
            m_ocxWnd.MoveWindow(0, 0, cx, chatTop);
        if (m_chatHistory.m_hWnd)
            m_chatHistory.MoveWindow(0, chatTop, cx, CHAT_HEIGHT - inputH);
        if (m_chatInput.m_hWnd)
            m_chatInput.MoveWindow(0, cy - inputH, cx, inputH);
    }

    afx_msg void OnTimer(UINT_PTR nIDEvent)
    {
        if (nIDEvent == 999 && m_pRendererDisp)
        {
            KillTimer(999);
            OLECHAR* name = L"EditMode";
            DISPID dispid;
            HRESULT hr = m_pRendererDisp->GetIDsOfNames(IID_NULL, &name, 1, LOCALE_USER_DEFAULT, &dispid);
            if (SUCCEEDED(hr)) {
                CComVariant vMode((long)1);
                DISPID putid = DISPID_PROPERTYPUT;
                DISPPARAMS dp = { &vMode, &putid, 1, 1 };
                hr = m_pRendererDisp->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT,
                    DISPATCH_PROPERTYPUT, &dp, NULL, NULL, NULL);
                Log("Set EditMode=1 (Studio editing): hr=0x%08X", hr);
            }
        }
        // Timer 996: distance culling — hide objects far from camera
        // Processes 5 objects per tick to avoid event flood
        if (nIDEvent == 996 && g_pCullWorld)
        {
            static float cullDist = 40.0f;
            static long cullIdx = 0;
            static const long BATCH_SIZE = 5;

            CComPtr<IThing> pUser;
            g_pCullWorld->get_User(&pUser);
            if (pUser) {
                CComPtr<IObjectProperty> pPosObj;
                pUser->get_ObjectProperty(CComBSTR("Position"), &pPosObj);
                CComPtr<IVector> pCamPos;
                if (pPosObj) pPosObj->QueryInterface(__uuidof(IVector), (void**)&pCamPos);
                if (pCamPos) {
                    float cx, cy, cz;
                    pCamPos.p->get_x(&cx); pCamPos.p->get_y(&cy); pCamPos.p->get_z(&cz);

                    CComPtr<IThing> pGlobal;
                    g_pCullWorld->get_Global(&pGlobal);
                    CComPtr<IObjectProperty> pRoomObj;
                    if (pGlobal) pGlobal->get_ObjectProperty(CComBSTR("DefaultRoom"), &pRoomObj);
                    CComPtr<IThing> pRoom;
                    if (pRoomObj) pRoomObj->QueryInterface(IID_IThing, (void**)&pRoom);

                    if (pRoom) {
                        CComPtr<IPropertyList> pContents;
                        pRoom->get_Contents(&pContents);
                        if (pContents) {
                            long count = 0;
                            pContents->get_Count(&count);
                            if (cullIdx >= count) cullIdx = 0;

                            long end = cullIdx + BATCH_SIZE;
                            if (end > count) end = count;

                            for (long i = cullIdx; i < end; i++) {
                                CComPtr<IObjectProperty> pObj;
                                pContents->get_ObjectProperty(i, &pObj);
                                CComPtr<IThing> pThing;
                                if (pObj) pObj->QueryInterface(IID_IThing, (void**)&pThing);
                                if (!pThing) continue;

                                CComPtr<IObjectProperty> pTPosObj;
                                pThing->get_ObjectProperty(CComBSTR("Position"), &pTPosObj);
                                CComPtr<IVector> pTPos;
                                if (pTPosObj) pTPosObj->QueryInterface(__uuidof(IVector), (void**)&pTPos);
                                if (!pTPos) continue;

                                float tx, ty, tz;
                                pTPos.p->get_x(&tx); pTPos.p->get_y(&ty); pTPos.p->get_z(&tz);

                                float dx = tx-cx, dy = ty-cy, dz = tz-cz;
                                float dist = sqrtf(dx*dx + dy*dy + dz*dz);

                                VARIANT_BOOL bVis = (dist < cullDist) ? VARIANT_TRUE : VARIANT_FALSE;
                                VARIANT_BOOL bCurVis = VARIANT_TRUE;
                                pThing->get_BOOL(CComBSTR("IsVisible"), &bCurVis);
                                if (bCurVis != bVis)
                                    pThing->put_BOOL(CComBSTR("IsVisible"), bVis);
                            }
                            cullIdx = end;
                        }
                    }
                }
            }
        }

        CFrameWnd::OnTimer(nIDEvent);
    }

    virtual BOOL PreTranslateMessage(MSG* pMsg);

    DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CRenderFrame, CFrameWnd)
    ON_WM_SIZE()
    ON_WM_TIMER()
END_MESSAGE_MAP()

// MFC App
class CRenderApp : public CWinApp
{
public:
    CRenderFrame* m_pFrame;
    CExplorerFrame* m_pExplorer;
    CCommandFrame* m_pCmdWin;
    CComPtr<IWorld> m_pWorld;  // for SaveDatabase
    CString m_server, m_world, m_user, m_avatar, m_actorModel;
    bool m_autoconnect, m_connectOnly, m_waitDebugger, m_editMode, m_cmdWin;

    CRenderApp() : m_pFrame(NULL), m_pExplorer(NULL), m_pCmdWin(NULL),
        m_autoconnect(false), m_connectOnly(false), m_waitDebugger(false),
        m_editMode(false), m_cmdWin(false)
    {
        m_server = "localhost";
        m_world = "TestWorld";
        m_user = "RenderUser";
    }

    virtual BOOL InitInstance()
    {
        AllocConsole();
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);

        AfxEnableControlContainer();
        _Module.Init(NULL, m_hInstance);

        // Parse command line
        CString cmdLine = m_lpCmdLine;
        if (cmdLine.Find("--trace") >= 0) g_trace = true;
        if (cmdLine.Find("--autoconnect") >= 0) m_autoconnect = true;
        if (cmdLine.Find("--connect-only") >= 0) { m_connectOnly = true; m_autoconnect = true; }
        if (cmdLine.Find("--wait-for-debugger") >= 0) m_waitDebugger = true;

        // Simple arg extraction
        int pos;
        if ((pos = cmdLine.Find("--server ")) >= 0) {
            CString rest = cmdLine.Mid(pos + 9);
            m_server = rest.SpanExcluding(" ");
        }
        if ((pos = cmdLine.Find("--world ")) >= 0) {
            CString rest = cmdLine.Mid(pos + 8);
            m_world = rest.SpanExcluding(" ");
        }
        if ((pos = cmdLine.Find("--user ")) >= 0) {
            CString rest = cmdLine.Mid(pos + 7);
            m_user = rest.SpanExcluding(" ");
        }
        if ((pos = cmdLine.Find("--avatar ")) >= 0) {
            CString rest = cmdLine.Mid(pos + 9);
            m_avatar = rest.SpanExcluding(" ");
        }
        if ((pos = cmdLine.Find("--actor ")) >= 0) {
            CString rest = cmdLine.Mid(pos + 8);
            m_actorModel = rest.SpanExcluding(" \"");
            Log("Parsed --actor: '%s'", (LPCSTR)m_actorModel);
        }
        if (cmdLine.Find("--edit") >= 0) m_editMode = true;
        if (cmdLine.Find("--cmdwin") >= 0) m_cmdWin = true;

        Log("=== VWorlds Render Host (MFC) ===");
        Log("Server: %s, World: %s, User: %s", (LPCSTR)m_server, (LPCSTR)m_world, (LPCSTR)m_user);

        if (m_waitDebugger) {
            Log("Waiting for debugger...");
            MessageBoxA(NULL, "Attach debugger, then click OK", "renderhost", MB_OK);
        }

        // Create frame and host OCX
        m_pFrame = new CRenderFrame();
        if (!m_pFrame->CreateAndHost()) {
            Log("FAIL: Could not create render frame");
            return FALSE;
        }
        m_pMainWnd = m_pFrame;

        // Create Object Explorer popout window
        m_pExplorer = new CExplorerFrame();
        if (!m_pExplorer->CreateAndHost()) {
            Log("WARN: Object Explorer failed, continuing without it");
            delete m_pExplorer;
            m_pExplorer = NULL;
        }

        // Auto-connect if requested
        if (m_autoconnect && m_pFrame->m_pRendererDisp) {
            DoConnect();
        }

        return TRUE;
    }

    void DoConnect()
    {
        HRESULT hr;
        Log("Connecting to %s/%s as %s...", (LPCSTR)m_server, (LPCSTR)m_world, (LPCSTR)m_user);

        // Create VWClient via ProgID
        CComPtr<IDispatch> pClient;
        hr = pClient.CoCreateInstance(L"VWSYSTEM.Client.1");
        Log("CoCreateInstance(VWClient): hr=0x%08X", hr);
        if (FAILED(hr)) return;

        // ConnectToServer
        CComVariant vServer((LPCSTR)m_server);
        CComVariant vTrue(true);
        CComVariant vResult;

        DISPID dispid;
        OLECHAR* name;

        name = L"ConnectToServer";
        hr = pClient->GetIDsOfNames(IID_NULL, &name, 1, LOCALE_USER_DEFAULT, &dispid);
        if (SUCCEEDED(hr)) {
            CComVariant args[] = { vTrue, vServer };
            DISPPARAMS dp = { args, NULL, 2, 0 };
            hr = pClient->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dp, NULL, NULL, NULL);
            Log("ConnectToServer: hr=0x%08X", hr);
        }

        // Connect to world
        CString fullWorld;
        fullWorld.Format("%s/%s", (LPCSTR)m_server, (LPCSTR)m_world);
        CComVariant vWorld((LPCSTR)fullWorld);

        name = L"Connect";
        hr = pClient->GetIDsOfNames(IID_NULL, &name, 1, LOCALE_USER_DEFAULT, &dispid);
        if (SUCCEEDED(hr)) {
            DISPPARAMS dp = { &vWorld, NULL, 1, 0 };
            CComVariant vWorldObj;
            hr = pClient->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dp, &vWorldObj, NULL, NULL);
            Log("Connect('%s'): hr=0x%08X, vt=%d", (LPCSTR)fullWorld, hr, vWorldObj.vt);

            if (vWorldObj.vt == VT_DISPATCH && vWorldObj.pdispVal) {
                CComPtr<IDispatch> pWorld(vWorldObj.pdispVal);

                // Store IWorld for SaveDatabase (Ctrl+S)
                pWorld->QueryInterface(IID_IWorld, (void**)&m_pWorld);

                // Login (World.Connect takes username, password)
                if (!m_connectOnly) {
                    CComVariant vUser((LPCSTR)m_user);
                    CComVariant vPass("");
                    name = L"Connect";
                    hr = pWorld->GetIDsOfNames(IID_NULL, &name, 1, LOCALE_USER_DEFAULT, &dispid);
                    if (SUCCEEDED(hr)) {
                        CComVariant args2[] = { vPass, vUser }; // reversed for DISPPARAMS
                        DISPPARAMS dp2 = { args2, NULL, 2, 0 };
                        CComVariant vUserObj;
                        hr = pWorld->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dp2, &vUserObj, NULL, NULL);
                        Log("World.Connect('%s',''): hr=0x%08X", (LPCSTR)m_user, hr);

                        // Note: IsWizard on avatar would grant full access with security enabled.
                        // Property security is currently disabled at compile time for local editing.

                        // Set avatar graphics: --actor for 3D bone model, --avatar for sprite
                        if (SUCCEEDED(hr) && m_actorModel.GetLength() > 0 &&
                            vUserObj.vt == VT_DISPATCH && vUserObj.pdispVal)
                        {
                            // Call InitializeGraphics(geom, x, y, z, dx, dy, dz) for 3D model avatar
                            OLECHAR* initName = L"InitializeGraphics";
                            DISPID initDispid;
                            hr = vUserObj.pdispVal->GetIDsOfNames(IID_NULL, &initName, 1, LOCALE_USER_DEFAULT, &initDispid);
                            if (SUCCEEDED(hr)) {
                                CComVariant initArgs[] = {
                                    CComVariant(1.0f),    // dz
                                    CComVariant(0.0f),    // dy
                                    CComVariant(0.0f),    // dx
                                    CComVariant(0.0f),    // z
                                    CComVariant(0.0f),    // y
                                    CComVariant(0.0f),    // x
                                    CComVariant((LPCSTR)m_actorModel) // .x model path
                                };
                                DISPPARAMS dpInit = { initArgs, NULL, 7, 0 };
                                hr = vUserObj.pdispVal->Invoke(initDispid, IID_NULL, LOCALE_USER_DEFAULT,
                                    DISPATCH_METHOD, &dpInit, NULL, NULL, NULL);
                                Log("InitializeGraphics('%s') for actor avatar: hr=0x%08X", (LPCSTR)m_actorModel, hr);
                            }

                            // Call InitializeActor after a delay to let geometry load
                            // (will be called manually from Command Window for now)
                            Log("Actor avatar: use 'Set me = World.User' then 'me.InitializeActor' in Command Window");
                        }
                        else if (SUCCEEDED(hr) && m_avatar.GetLength() > 0 &&
                            vUserObj.vt == VT_DISPATCH && vUserObj.pdispVal)
                        {
                            // Call InitializeSpriteGraphics(sprite, x, y, z, dx, dy, dz)
                            OLECHAR* initName = L"InitializeSpriteGraphics";
                            DISPID initDispid;
                            hr = vUserObj.pdispVal->GetIDsOfNames(IID_NULL, &initName, 1, LOCALE_USER_DEFAULT, &initDispid);
                            if (SUCCEEDED(hr)) {
                                CComVariant initArgs[] = {
                                    CComVariant(1.0f),    // dz (direction)
                                    CComVariant(0.0f),    // dy
                                    CComVariant(0.0f),    // dx
                                    CComVariant(0.0f),    // z (position)
                                    CComVariant(1.0f),    // y
                                    CComVariant(0.0f),    // x
                                    CComVariant((LPCSTR)m_avatar) // sprite filename
                                };
                                DISPPARAMS dpInit = { initArgs, NULL, 7, 0 };
                                hr = vUserObj.pdispVal->Invoke(initDispid, IID_NULL, LOCALE_USER_DEFAULT,
                                    DISPATCH_METHOD, &dpInit, NULL, NULL, NULL);
                                Log("InitializeSpriteGraphics('%s'): hr=0x%08X", (LPCSTR)m_avatar, hr);
                            } else {
                                Log("InitializeSpriteGraphics not found: hr=0x%08X", hr);
                            }
                        }
                    }

                    // Set content path on the world's Inetfile tool
                    // so sprites/textures can be loaded from local files
                    {
                        CComVariant vTool;
                        OLECHAR* toolName = L"Tool";
                        hr = pWorld->GetIDsOfNames(IID_NULL, &toolName, 1, LOCALE_USER_DEFAULT, &dispid);
                        if (SUCCEEDED(hr)) {
                            CComVariant vToolName("Inetfile");
                            DISPPARAMS dpTool = { &vToolName, NULL, 1, 0 };
                            hr = pWorld->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT,
                                DISPATCH_METHOD, &dpTool, &vTool, NULL, NULL);
                        }
                        if (SUCCEEDED(hr) && vTool.vt == VT_DISPATCH && vTool.pdispVal) {
                            // Set RootURL on the Inetfile tool
                            OLECHAR* rootURLName = L"RootURL";
                            hr = vTool.pdispVal->GetIDsOfNames(IID_NULL, &rootURLName, 1, LOCALE_USER_DEFAULT, &dispid);
                            if (SUCCEEDED(hr)) {
                                CComVariant vURL("file://F:\\VWorlds\\Microsoft Virtual Worlds\\Local Content\\Client\\Shared\\;file://F:\\VWorlds\\Microsoft Virtual Worlds\\Local Content\\Avatar Graphics\\;file://F:\\VWorlds\\Microsoft Virtual Worlds\\Local Content\\");
                                DISPID putid2 = DISPID_PROPERTYPUT;
                                DISPPARAMS dpURL = { &vURL, &putid2, 1, 1 };
                                hr = vTool.pdispVal->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT,
                                    DISPATCH_PROPERTYPUT, &dpURL, NULL, NULL, NULL);
                                Log("Set Inetfile.RootURL: hr=0x%08X", hr);
                            }
                        } else {
                            Log("Get Tool(Inetfile): hr=0x%08X, vt=%d", hr, vTool.vt);
                        }
                    }

                    // Register event sink for chat/system messages
                    g_pRenderFrame = m_pFrame;
                    g_pCullWorld = m_pWorld; // for distance culling
                    SetSpuckRenderer(m_pFrame->m_pRendererDisp);
                    {
                        CComPtr<IConnectionPointContainer> pCPC;
                        hr = pClient->QueryInterface(IID_IConnectionPointContainer, (void**)&pCPC);
                        if (SUCCEEDED(hr)) {
                            CComPtr<IConnectionPoint> pCP;
                            hr = pCPC->FindConnectionPoint(IID_IVWClientSite, &pCP);
                            if (SUCCEEDED(hr)) {
                                CClientEventSink* pSink = new CClientEventSink();
                                DWORD dwCookie = 0;
                                hr = pCP->Advise(static_cast<IVWClientSite*>(pSink), &dwCookie);
                                Log("Event sink Advise: hr=0x%08X cookie=%d", hr, dwCookie);
                                // pSink intentionally leaked (lives for app lifetime)
                            } else {
                                Log("FindConnectionPoint(IVWClientSite) failed: hr=0x%08X", hr);
                            }
                        }
                    }

                    // Set VWClient on renderer
                    Log("Binding VWClient to render control...");
                    name = L"VWClient";
                    hr = m_pFrame->m_pRendererDisp->GetIDsOfNames(IID_NULL, &name, 1, LOCALE_USER_DEFAULT, &dispid);
                    if (SUCCEEDED(hr)) {
                        CComVariant vClient(pClient.p);
                        DISPID putid = DISPID_PROPERTYPUT;
                        DISPPARAMS dpPut = { &vClient, &putid, 1, 1 };
                        hr = m_pFrame->m_pRendererDisp->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT,
                            DISPATCH_PROPERTYPUT, &dpPut, NULL, NULL, NULL);
                        Log("Set VWClient on renderer: hr=0x%08X", hr);
                    }

                    // Set VWClient on Object Explorer (ThingTree + TPList)
                    if (m_pExplorer) {
                        // ThingTree VWClient
                        if (m_pExplorer->m_pExplorerDisp) {
                            CComVariant vClient2(pClient.p);
                            DISPID putid2 = DISPID_PROPERTYPUT;
                            DISPPARAMS dpPut2 = { &vClient2, &putid2, 1, 1 };
                            hr = m_pExplorer->m_pExplorerDisp->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT,
                                DISPATCH_PROPERTYPUT, &dpPut2, NULL, NULL, NULL);
                            Log("Set VWClient on tree: hr=0x%08X", hr);
                        }
                        // TPList: set VWClient (re-exposed in dispatch map) + defer Global seed
                        if (m_pExplorer->m_pPropDisp) {
                            OLECHAR* vwcName = L"VWClient";
                            DISPID vwcDispid;
                            hr = m_pExplorer->m_pPropDisp->GetIDsOfNames(IID_NULL, &vwcName, 1, LOCALE_USER_DEFAULT, &vwcDispid);
                            if (SUCCEEDED(hr)) {
                                CComVariant vClient2b(pClient.p);
                                DISPID putid2b = DISPID_PROPERTYPUT;
                                DISPPARAMS dpPut2b = { &vClient2b, &putid2b, 1, 1 };
                                hr = m_pExplorer->m_pPropDisp->Invoke(vwcDispid, IID_NULL, LOCALE_USER_DEFAULT,
                                    DISPATCH_PROPERTYPUT, &dpPut2b, NULL, NULL, NULL);
                                Log("Set VWClient on TPList (dispid=%d): hr=0x%08X", vwcDispid, hr);
                            } else {
                                Log("TPList: GetIDsOfNames(VWClient) still fails hr=0x%08X", hr);
                            }
                            m_pExplorer->m_pWorldDisp = pWorld;
                            m_pExplorer->SetTimer(997, 3000, NULL);
                            Log("TPList: deferred TargetObjectProperty binding (timer 997, 3s)");
                        }
                    }

                    // Set VWClient + RenderRoot on Vwsound control
                    if (m_pFrame->m_pSoundDisp) {
                        // VWClient — use dispid 1 directly (ODL: [id(1)] IDispatch* VWClient)
                        // GetIDsOfNames fails due to MFC dispatch map inheritance
                        {
                            CComVariant vClient3(pClient.p);
                            DISPID putid3 = DISPID_PROPERTYPUT;
                            DISPPARAMS dpPut3 = { &vClient3, &putid3, 1, 1 };
                            hr = m_pFrame->m_pSoundDisp->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT,
                                DISPATCH_PROPERTYPUT, &dpPut3, NULL, NULL, NULL);
                            Log("Set VWClient on sound (dispid=1): hr=0x%08X", hr);
                        }

                        // RenderRoot (render view OCX dispatch for 3D listener position)
                        name = L"RenderRoot";
                        hr = m_pFrame->m_pSoundDisp->GetIDsOfNames(IID_NULL, &name, 1, LOCALE_USER_DEFAULT, &dispid);
                        if (SUCCEEDED(hr)) {
                            CComVariant vRender(m_pFrame->m_pRendererDisp.p);
                            DISPID putid4 = DISPID_PROPERTYPUT;
                            DISPPARAMS dpPut4 = { &vRender, &putid4, 1, 1 };
                            hr = m_pFrame->m_pSoundDisp->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT,
                                DISPATCH_PROPERTYPUT, &dpPut4, NULL, NULL, NULL);
                            Log("Set RenderRoot on sound: hr=0x%08X", hr);
                        }

                        // Trigger sound refresh by toggling Enable
                        // (VWClient was set after connection, so OnUserConnect was missed)
                        name = L"Enable";
                        hr = m_pFrame->m_pSoundDisp->GetIDsOfNames(IID_NULL, &name, 1, LOCALE_USER_DEFAULT, &dispid);
                        if (SUCCEEDED(hr)) {
                            CComVariant vTrue((VARIANT_BOOL)VARIANT_TRUE);
                            DISPID putid5 = DISPID_PROPERTYPUT;
                            DISPPARAMS dpPut5 = { &vTrue, &putid5, 1, 1 };
                            hr = m_pFrame->m_pSoundDisp->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT,
                                DISPATCH_PROPERTYPUT, &dpPut5, NULL, NULL, NULL);
                            Log("Set Enable on sound (trigger refresh): hr=0x%08X", hr);
                        }
                    }

                    // Defer Studio editing mode — renderer needs to fully initialize first
                    if (m_editMode && m_pFrame) {
                        m_pFrame->SetTimer(999, 2000, NULL); // fire after 2 seconds
                        Log("Edit mode deferred (will activate in 2s)");
                    }

                    // Start distance culling timer
                    if (m_pFrame) {
                        m_pFrame->SetTimer(996, 2000, NULL); // every 2s
                        Log("Distance culling enabled (50 unit radius, 2s interval)");
                    }

                    // Create Command Window if requested
                    if (m_cmdWin && m_pWorld) {
                        m_pCmdWin = new CCommandFrame();
                        CComPtr<IDispatch> pWorldDisp;
                        m_pWorld->QueryInterface(IID_IDispatch, (void**)&pWorldDisp);
                        if (!m_pCmdWin->CreateAndHost(pWorldDisp)) {
                            Log("WARN: Command Window failed to create");
                            delete m_pCmdWin;
                            m_pCmdWin = NULL;
                        }
                    }
                }
            }
        }
    }

    virtual int ExitInstance()
    {
        _Module.Term();
        if (g_logFile) fclose(g_logFile);
        return CWinApp::ExitInstance();
    }
};

CRenderApp theApp;

// Client event sink Invoke — dispatches events to chat panel
STDMETHODIMP CClientEventSink::Invoke(DISPID id, REFIID, LCID, WORD, DISPPARAMS* dp, VARIANT*, EXCEPINFO*, UINT*)
{
    if (!g_pRenderFrame) return S_OK;

    Log("EventSink::Invoke dispid=%d cArgs=%d", id, dp ? dp->cArgs : 0);

    switch (id) {
    case 1: // OnTell(BSTR)
        if (dp->cArgs >= 1 && dp->rgvarg[0].vt == VT_BSTR) {
            CString msg(dp->rgvarg[0].bstrVal);
            Log("OnTell: '%s'", (LPCSTR)msg);
            g_pRenderFrame->AppendChat(msg);
        }
        break;
    case 2: // OnReport(BSTR, long)
        if (dp->cArgs >= 2 && dp->rgvarg[1].vt == VT_BSTR) {
            long lType = (dp->rgvarg[0].vt == VT_I4) ? dp->rgvarg[0].lVal : 0;
            if (lType != 4) // skip perflog
                g_pRenderFrame->AppendChat("*** " + CString(dp->rgvarg[1].bstrVal));
        }
        break;
    case 3: // OnUserConnect(IThing)
        if (dp->cArgs >= 1 && dp->rgvarg[0].vt == VT_DISPATCH && dp->rgvarg[0].pdispVal) {
            CComPtr<IThing> pThing;
            dp->rgvarg[0].pdispVal->QueryInterface(IID_IThing, (void**)&pThing);
            if (pThing) {
                CComBSTR name;
                pThing->get_Name(&name);
                g_pRenderFrame->AppendChat(CString(name) + " has connected.");
            }
        }
        break;
    case 4: // OnUserDisconnect(IThing)
        if (dp->cArgs >= 1 && dp->rgvarg[0].vt == VT_DISPATCH && dp->rgvarg[0].pdispVal) {
            CComPtr<IThing> pThing;
            dp->rgvarg[0].pdispVal->QueryInterface(IID_IThing, (void**)&pThing);
            if (pThing) {
                CComBSTR name;
                pThing->get_Name(&name);
                g_pRenderFrame->AppendChat(CString(name) + " has disconnected.");
            }
        }
        break;
    case 5: // OnTrace(BSTR)
        // Don't show traces in chat — too noisy
        break;
    default:
        break;
    }
    return S_OK;
}

// IVWClientSite vtable implementations
STDMETHODIMP CClientEventSink::OnUserConnect(IThing* pThing)
{
    if (!g_pRenderFrame || !pThing) return S_OK;
    CComBSTR name;
    pThing->get_Name(&name);
    g_pRenderFrame->AppendChat(CString(name) + " has connected.");
    return S_OK;
}

STDMETHODIMP CClientEventSink::OnUserDisconnect(IThing* pThing)
{
    if (!g_pRenderFrame || !pThing) return S_OK;
    CComBSTR name;
    pThing->get_Name(&name);
    g_pRenderFrame->AppendChat(CString(name) + " has disconnected.");
    return S_OK;
}

STDMETHODIMP CClientEventSink::OnReport(BSTR bstr, long lType)
{
    if (!g_pRenderFrame) return S_OK;
    if (lType != 4) // skip perflog
        g_pRenderFrame->AppendChat("*** " + CString(bstr));
    return S_OK;
}

STDMETHODIMP CClientEventSink::OnUIEvent(IThing* pThing, BSTR bstrEventName, VARIANT varArg)
{
    if (!g_pRenderFrame) return S_OK;
    CString evName(bstrEventName);
    Log("OnUIEvent: source=%p event='%s'", pThing, (LPCSTR)evName);

    if (evName == "OnTell") {
        // varArg is a PropertyList with: [0]=Speaker, [1]=Targets, [2]=Text, [3]=Type
        if (varArg.vt == VT_DISPATCH && varArg.pdispVal) {
            CComPtr<IPropertyList> pList;
            varArg.pdispVal->QueryInterface(IID_IPropertyList, (void**)&pList);
            if (pList) {
                long count = 0;
                pList->get_Count(&count);
                if (count >= 4) {
                    // Get speaker (index 0)
                    CComPtr<IObjectProperty> pSpeakerObj;
                    pList->get_ObjectProperty(0, &pSpeakerObj);
                    CString speakerName = "Someone";
                    if (pSpeakerObj) {
                        CComPtr<IThing> pSpeaker;
                        pSpeakerObj->QueryInterface(IID_IThing, (void**)&pSpeaker);
                        if (pSpeaker) {
                            CComBSTR bstrName;
                            pSpeaker->get_Name(&bstrName);
                            speakerName = CString(bstrName);
                        }
                    }
                    // Get text (index 2)
                    CComVariant varText;
                    pList->get_Property(2, &varText);
                    CString text;
                    if (varText.vt == VT_BSTR)
                        text = CString(varText.bstrVal);

                    // Get type (index 3)
                    CComVariant varType;
                    pList->get_Property(3, &varType);
                    long talkType = (varType.vt == VT_I4) ? varType.lVal : 0;

                    if (!text.IsEmpty()) {
                        CString msg;
                        switch (talkType) {
                        case 0: msg.Format("%s says, \"%s\"", (LPCSTR)speakerName, (LPCSTR)text); break;
                        case 1: msg.Format("%s %s", (LPCSTR)speakerName, (LPCSTR)text); break; // emote
                        case 3: msg.Format("%s whispers, \"%s\"", (LPCSTR)speakerName, (LPCSTR)text); break;
                        case 6: msg.Format("%s shouts, \"%s\"", (LPCSTR)speakerName, (LPCSTR)text); break;
                        default: msg.Format("%s: %s", (LPCSTR)speakerName, (LPCSTR)text); break;
                        }
                        g_pRenderFrame->AppendChat(msg);
                    }
                }
            }
        }
    }
    return S_OK;
}

BOOL CRenderFrame::PreTranslateMessage(MSG* pMsg)
{
    // Ctrl+S = SaveDatabase
    if (pMsg->message == WM_KEYDOWN && pMsg->wParam == 'S' &&
        (GetKeyState(VK_CONTROL) & 0x8000))
    {
        if (theApp.m_pWorld) {
            HRESULT hr = theApp.m_pWorld->SaveDatabase();
            Log("SaveDatabase (Ctrl+S): hr=0x%08X", hr);
            if (SUCCEEDED(hr))
                SetWindowText("VWorlds Render Host [Saved]");
        }
        return TRUE;
    }
    // Enter in chat input = Say
    if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN &&
        m_chatInput.m_hWnd && pMsg->hwnd == m_chatInput.m_hWnd)
    {
        CString text;
        m_chatInput.GetWindowText(text);
        text.Trim();
        if (!text.IsEmpty() && theApp.m_pWorld) {
            // Get user avatar and call Say
            CComPtr<IThing> pUser;
            theApp.m_pWorld->get_User(&pUser);
            if (pUser) {
                CComBSTR bstrText(text);
                // Call Say method on user
                OLECHAR* sayName = L"Say";
                DISPID sayDispid;
                CComPtr<IDispatch> pUserDisp;
                pUser->QueryInterface(IID_IDispatch, (void**)&pUserDisp);
                if (pUserDisp) {
                    HRESULT hr = pUserDisp->GetIDsOfNames(IID_NULL, &sayName, 1, LOCALE_USER_DEFAULT, &sayDispid);
                    if (SUCCEEDED(hr)) {
                        CComVariant vText(bstrText);
                        DISPPARAMS dp = { &vText, NULL, 1, 0 };
                        hr = pUserDisp->Invoke(sayDispid, IID_NULL, LOCALE_USER_DEFAULT,
                            DISPATCH_METHOD, &dp, NULL, NULL, NULL);
                    }
                }
            }
            // Don't echo locally — OnTell event will show it
            m_chatInput.SetWindowText("");
        }
        return TRUE;
    }
    return CFrameWnd::PreTranslateMessage(pMsg);
}
