// renderhost.cpp - Minimal VWorlds render host
// Hosts the VWRenderView ActiveX control in a native window.
// Usage: renderhost.exe --server localhost --world TestWorld --user RenderUser --autoconnect

#define WIN32_LEAN_AND_MEAN
#define _ATL_APARTMENT_THREADED
#define _ATL_ALLOW_DEPRECATED_FUNCTIONS
#include <windows.h>
#include <atlbase.h>

// ATL module instance required for AtlAxWinInit
CComModule _Module;

#include <atlcom.h>
#include <atlwin.h>
#include <atlhost.h>
#include <stdio.h>
#include <string.h>

// VWRenderView CLSID: {44FAC783-0CA4-11D0-89A9-00A0C9054129}
static const CLSID CLSID_VWRenderView =
    { 0x44fac783, 0x0ca4, 0x11d0, { 0x89, 0xa9, 0x00, 0xa0, 0xc9, 0x05, 0x41, 0x29 } };

// VWClient CLSID (from vwsystem.dll)
static const CLSID CLSID_VWClient =
    { 0xd4898803, 0x20ef, 0x11d0, { 0x8a, 0x96, 0x00, 0xa0, 0xc9, 0x08, 0x25, 0x83 } };

// Config from command line
struct Config {
    char server[256];
    char world[256];
    char user[256];
    char logfile[512];
    int width;
    int height;
    bool autoconnect;
    bool connectOnly;
    bool noLogin;
    bool waitDebugger;
    bool trace;
};

static Config g_config = { "localhost", "TestWorld", "RenderUser", "", 800, 600,
                           false, false, false, false, false };
static FILE* g_logFile = NULL;

void Log(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    char buf[2048];
    vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);

    OutputDebugStringA(buf);
    OutputDebugStringA("\n");

    if (g_config.trace) {
        printf("%s\n", buf);
        fflush(stdout);
    }
    if (g_logFile) {
        fprintf(g_logFile, "%s\n", buf);
        fflush(g_logFile);
    }
}

// Helper: set IDispatch property by name
HRESULT SetDispatchProperty(IDispatch* pDisp, LPCWSTR name, VARIANT* pVal)
{
    DISPID dispid;
    HRESULT hr = pDisp->GetIDsOfNames(IID_NULL, (LPOLESTR*)&name, 1, LOCALE_USER_DEFAULT, &dispid);
    if (FAILED(hr)) return hr;

    DISPPARAMS dp = { pVal, &dispid, 1, 1 };
    DISPID putid = DISPID_PROPERTYPUT;
    dp.rgdispidNamedArgs = &putid;
    return pDisp->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_PROPERTYPUT, &dp, NULL, NULL, NULL);
}

// Helper: call IDispatch method by name with BSTR arg
HRESULT CallMethod1BSTR(IDispatch* pDisp, LPCWSTR name, LPCWSTR arg, VARIANT* pResult = NULL)
{
    DISPID dispid;
    HRESULT hr = pDisp->GetIDsOfNames(IID_NULL, (LPOLESTR*)&name, 1, LOCALE_USER_DEFAULT, &dispid);
    if (FAILED(hr)) return hr;

    CComBSTR bstrArg(arg);
    VARIANT varg;
    VariantInit(&varg);
    varg.vt = VT_BSTR;
    varg.bstrVal = bstrArg;

    DISPPARAMS dp = { &varg, NULL, 1, 0 };
    return pDisp->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dp, pResult, NULL, NULL);
}

void ParseCommandLine(LPSTR lpCmdLine)
{
    // Simple arg parsing
    char* p = lpCmdLine;
    while (p && *p) {
        while (*p == ' ') p++;
        if (!*p) break;

        if (strncmp(p, "--server", 8) == 0) {
            p += 8; while (*p == ' ') p++;
            sscanf(p, "%255s", g_config.server);
        } else if (strncmp(p, "--world", 7) == 0) {
            p += 7; while (*p == ' ') p++;
            sscanf(p, "%255s", g_config.world);
        } else if (strncmp(p, "--user", 6) == 0) {
            p += 6; while (*p == ' ') p++;
            sscanf(p, "%255s", g_config.user);
        } else if (strncmp(p, "--log", 5) == 0) {
            p += 5; while (*p == ' ') p++;
            sscanf(p, "%511s", g_config.logfile);
        } else if (strncmp(p, "--width", 7) == 0) {
            p += 7; while (*p == ' ') p++;
            sscanf(p, "%d", &g_config.width);
        } else if (strncmp(p, "--height", 8) == 0) {
            p += 8; while (*p == ' ') p++;
            sscanf(p, "%d", &g_config.height);
        } else if (strncmp(p, "--autoconnect", 13) == 0) {
            g_config.autoconnect = true;
        } else if (strncmp(p, "--connect-only", 14) == 0) {
            g_config.connectOnly = true;
            g_config.autoconnect = true;
        } else if (strncmp(p, "--no-login", 10) == 0) {
            g_config.noLogin = true;
        } else if (strncmp(p, "--wait-for-debugger", 19) == 0) {
            g_config.waitDebugger = true;
        } else if (strncmp(p, "--trace", 7) == 0) {
            g_config.trace = true;
        }
        // skip to next arg
        while (*p && *p != ' ') p++;
    }
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg) {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    case WM_SIZE: {
        HWND hChild = GetWindow(hWnd, GW_CHILD);
        if (hChild)
            MoveWindow(hChild, 0, 0, LOWORD(lParam), HIWORD(lParam), TRUE);
        return 0;
    }
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR lpCmdLine, int nCmdShow)
{
    // Allocate console for trace output
    AllocConsole();
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);

    ParseCommandLine(lpCmdLine);

    if (g_config.logfile[0]) {
        g_logFile = fopen(g_config.logfile, "w");
    }

    Log("=== VWorlds Render Host ===");
    Log("Server: %s, World: %s, User: %s", g_config.server, g_config.world, g_config.user);
    Log("Window: %dx%d, Autoconnect: %s, ConnectOnly: %s",
        g_config.width, g_config.height,
        g_config.autoconnect ? "yes" : "no",
        g_config.connectOnly ? "yes" : "no");

    if (g_config.waitDebugger) {
        Log("Waiting for debugger... (attach now, then press any key)");
        MessageBoxA(NULL, "Attach debugger now, then click OK", "renderhost", MB_OK);
    }

    // Initialize COM and ATL
    CoInitialize(NULL);
    _Module.Init(NULL, hInstance);
    BOOL bAxInit = AtlAxWinInit();
    Log("AtlAxWinInit: %s", bAxInit ? "TRUE" : "FALSE");

    // Check which AtlAxWin class name is registered (versioned vs unversioned)
    WNDCLASSEX wcex = { sizeof(WNDCLASSEX) };
    if (GetClassInfoEx(NULL, "AtlAxWin", &wcex))
        Log("Found window class: AtlAxWin");
    else if (GetClassInfoEx(NULL, "AtlAxWin140", &wcex))
        Log("Found window class: AtlAxWin140");
    else if (GetClassInfoEx(hInstance, "AtlAxWin", &wcex))
        Log("Found window class: AtlAxWin (hInstance)");
    else
        Log("WARNING: No AtlAxWin class found");

    // Register window class
    WNDCLASS wc = {};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszClassName = "VWorldsRenderHost";
    RegisterClass(&wc);

    // Create main window
    HWND hWnd = CreateWindow("VWorldsRenderHost", "VWorlds Render Host",
        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        CW_USEDEFAULT, CW_USEDEFAULT, g_config.width, g_config.height,
        NULL, NULL, hInstance, NULL);

    Log("Main window created: %p", hWnd);

    // Host VWRenderView OCX via AtlAxWin
    // Try multiple AtlAxWin class names (versioned for different ATL versions)
    const char* axClasses[] = { "AtlAxWin140", "AtlAxWin110", "AtlAxWin100", "AtlAxWin90", "AtlAxWin80", "AtlAxWin", NULL };
    HWND hOcx = NULL;
    for (int i = 0; axClasses[i] && !hOcx; i++) {
        hOcx = CreateWindowA(axClasses[i],
            "{44FAC783-0CA4-11D0-89A9-00A0C9054129}",
            WS_CHILD | WS_VISIBLE,
            0, 0, g_config.width, g_config.height,
            hWnd, NULL, hInstance, NULL);
        if (hOcx)
            Log("OCX hosted via class: %s", axClasses[i]);
    }

    Log("AtlAxWin created: %p (error: %lu)", hOcx, hOcx ? 0 : GetLastError());

    // Get IDispatch of the hosted control
    CComPtr<IDispatch> pRendererDisp;
    if (hOcx) {
        CComPtr<IUnknown> pUnk;
        HRESULT hr = AtlAxGetControl(hOcx, &pUnk);
        Log("AtlAxGetControl: hr=0x%08X, pUnk=%p", hr, (IUnknown*)pUnk);
        if (SUCCEEDED(hr) && pUnk) {
            hr = pUnk->QueryInterface(IID_IDispatch, (void**)&pRendererDisp);
            Log("QI(IDispatch): hr=0x%08X, pDisp=%p", hr, (IDispatch*)pRendererDisp);
        }
    }

    if (!pRendererDisp) {
        Log("FAIL: Could not get render control IDispatch");
        if (!g_config.autoconnect) goto msgloop;
    } else {
        Log("PASS: Render control created and IDispatch obtained");
    }

    // Connect to server if requested
    if (g_config.autoconnect && pRendererDisp) {
        HRESULT hr;

        // Create VWClient
        CComPtr<IDispatch> pClient;
        hr = CoCreateInstance(CLSID_VWClient, NULL, CLSCTX_INPROC_SERVER,
                              IID_IDispatch, (void**)&pClient);
        Log("CoCreateInstance(VWClient): hr=0x%08X", hr);

        if (SUCCEEDED(hr)) {
            // ConnectToServer
            wchar_t wServer[256];
            MultiByteToWideChar(CP_ACP, 0, g_config.server, -1, wServer, 256);

            VARIANT vTrue;
            VariantInit(&vTrue);
            vTrue.vt = VT_BOOL;
            vTrue.boolVal = VARIANT_TRUE;

            // Call ConnectToServer(server, true)
            DISPID dispid;
            LPCWSTR methodName = L"ConnectToServer";
            hr = pClient->GetIDsOfNames(IID_NULL, (LPOLESTR*)&methodName, 1, LOCALE_USER_DEFAULT, &dispid);
            Log("GetIDsOfNames(ConnectToServer): hr=0x%08X, dispid=%d", hr, dispid);

            if (SUCCEEDED(hr)) {
                CComBSTR bstrServer(wServer);
                VARIANT args[2];
                VariantInit(&args[0]); args[0] = vTrue;        // arg 1 (reversed)
                VariantInit(&args[1]); args[1].vt = VT_BSTR; args[1].bstrVal = bstrServer;
                DISPPARAMS dp = { args, NULL, 2, 0 };
                hr = pClient->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dp, NULL, NULL, NULL);
                Log("ConnectToServer('%s'): hr=0x%08X", g_config.server, hr);
            }

            // Connect to world
            wchar_t wWorld[512];
            char fullWorld[512];
            snprintf(fullWorld, sizeof(fullWorld), "%s/%s", g_config.server, g_config.world);
            MultiByteToWideChar(CP_ACP, 0, fullWorld, -1, wWorld, 512);

            CComPtr<IDispatch> pWorld;
            VARIANT vWorld;
            VariantInit(&vWorld);
            hr = CallMethod1BSTR(pClient, L"Connect", wWorld, &vWorld);
            Log("Connect('%s'): hr=0x%08X, vt=%d", fullWorld, hr, vWorld.vt);

            if (vWorld.vt == VT_DISPATCH && vWorld.pdispVal) {
                pWorld = vWorld.pdispVal;
                Log("PASS: World object obtained");

                // Login if not --no-login and not --connect-only
                if (!g_config.noLogin && !g_config.connectOnly) {
                    wchar_t wUser[256];
                    MultiByteToWideChar(CP_ACP, 0, g_config.user, -1, wUser, 256);

                    VARIANT vUser;
                    VariantInit(&vUser);
                    hr = CallMethod1BSTR(pWorld, L"Connect", wUser, &vUser);
                    Log("World.Connect('%s'): hr=0x%08X, vt=%d", g_config.user, hr, vUser.vt);
                    VariantClear(&vUser);
                }

                // Bind renderer if not --connect-only
                if (!g_config.connectOnly) {
                    Log("Binding VWClient to render control...");
                    VARIANT vClient;
                    VariantInit(&vClient);
                    vClient.vt = VT_DISPATCH;
                    vClient.pdispVal = pClient;

                    hr = SetDispatchProperty(pRendererDisp, L"VWClient", &vClient);
                    Log("Set VWClient: hr=0x%08X", hr);

                    // Don't clear vClient - it doesn't own the ref
                    vClient.vt = VT_EMPTY;
                    vClient.pdispVal = NULL;
                }
            }
            VariantClear(&vWorld);
        }
    }

msgloop:
    Log("Entering message loop...");

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    Log("Shutting down...");

    if (g_logFile) fclose(g_logFile);
    CoUninitialize();
    return 0;
}
