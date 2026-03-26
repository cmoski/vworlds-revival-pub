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

// VWRenderView CLSID
static const CLSID CLSID_VWRenderView =
    { 0x44fac783, 0x0ca4, 0x11d0, { 0x89, 0xa9, 0x00, 0xa0, 0xc9, 0x05, 0x41, 0x29 } };

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
class CRenderFrame : public CFrameWnd
{
public:
    CWnd m_ocxWnd;
    CComPtr<IDispatch> m_pRendererDisp;

    BOOL CreateAndHost()
    {
        // Create frame window
        if (!Create(NULL, "VWorlds Render Host",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            CRect(100, 100, 900, 700)))
        {
            Log("FAIL: CFrameWnd::Create failed");
            return FALSE;
        }
        Log("Frame window created: %p", m_hWnd);

        // Host VWRenderView OCX via MFC CreateControl
        CRect rc;
        GetClientRect(&rc);

        BOOL bCreated = m_ocxWnd.CreateControl(
            CLSID_VWRenderView,  // CLSID
            "VWRenderView",       // Window name
            WS_CHILD | WS_VISIBLE,
            rc,
            this,                 // Parent
            100                   // Control ID
        );

        if (!bCreated) {
            Log("FAIL: CreateControl(VWRenderView) failed, error %lu", GetLastError());
            return FALSE;
        }
        Log("PASS: VWRenderView OCX created via MFC CreateControl");

        // Get IDispatch
        LPUNKNOWN pUnk = m_ocxWnd.GetControlUnknown();
        if (pUnk) {
            pUnk->QueryInterface(IID_IDispatch, (void**)&m_pRendererDisp);
            Log("PASS: IDispatch obtained: %p", (IDispatch*)m_pRendererDisp);
        } else {
            Log("FAIL: GetControlUnknown returned NULL");
        }

        return TRUE;
    }

    afx_msg void OnSize(UINT nType, int cx, int cy)
    {
        CFrameWnd::OnSize(nType, cx, cy);
        if (m_ocxWnd.m_hWnd)
            m_ocxWnd.MoveWindow(0, 0, cx, cy);
    }

    DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CRenderFrame, CFrameWnd)
    ON_WM_SIZE()
END_MESSAGE_MAP()

// MFC App
class CRenderApp : public CWinApp
{
public:
    CRenderFrame* m_pFrame;
    CString m_server, m_world, m_user;
    bool m_autoconnect, m_connectOnly, m_waitDebugger;

    CRenderApp() : m_pFrame(NULL), m_autoconnect(false),
        m_connectOnly(false), m_waitDebugger(false)
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
                        Log("Set VWClient: hr=0x%08X", hr);
                    } else {
                        Log("GetIDsOfNames(VWClient): hr=0x%08X", hr);
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
