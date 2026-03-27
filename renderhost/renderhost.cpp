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

// VWorlds COM interfaces for ControlManager selection polling
#include <vwobject.h>    // IWorld, IThing, IPropertyList
#include <vwuiobjs.h>    // IVWControlManager

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

    BOOL CreateAndHost()
    {
        if (!Create(NULL, "VWorlds Render Host",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            CRect(50, 50, 850, 700)))
        {
            Log("FAIL: CFrameWnd::Create failed");
            return FALSE;
        }
        Log("Frame window created: %p", m_hWnd);

        CRect rc;
        GetClientRect(&rc);

        BOOL bCreated = m_ocxWnd.CreateControl(
            CLSID_VWRenderView,
            "VWRenderView",
            WS_CHILD | WS_VISIBLE,
            rc,
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
        if (m_ocxWnd.m_hWnd)
            m_ocxWnd.MoveWindow(0, 0, cx, cy);
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
    CComPtr<IWorld> m_pWorld;  // for SaveDatabase
    CString m_server, m_world, m_user, m_avatar;
    bool m_autoconnect, m_connectOnly, m_waitDebugger, m_editMode;

    CRenderApp() : m_pFrame(NULL), m_pExplorer(NULL), m_autoconnect(false),
        m_connectOnly(false), m_waitDebugger(false), m_editMode(false)
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
        if (cmdLine.Find("--edit") >= 0) m_editMode = true;

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

                        // Set avatar sprite if --avatar specified
                        if (SUCCEEDED(hr) && m_avatar.GetLength() > 0 &&
                            vUserObj.vt == VT_DISPATCH && vUserObj.pdispVal)
                        {
                            // Call InitializeSpriteGraphics(sprite, x, y, z, dx, dy, dz)
                            // This is a server-side method that properly creates sprite geometry
                            OLECHAR* initName = L"InitializeSpriteGraphics";
                            DISPID initDispid;
                            hr = vUserObj.pdispVal->GetIDsOfNames(IID_NULL, &initName, 1, LOCALE_USER_DEFAULT, &initDispid);
                            if (SUCCEEDED(hr)) {
                                // Args reversed for DISPPARAMS: dz, dy, dx, z, y, x, sprite
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
    return CFrameWnd::PreTranslateMessage(pMsg);
}
