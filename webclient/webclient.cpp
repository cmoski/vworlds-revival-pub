// webclient.cpp - Host the original VWorlds HTML client in a WebBrowser control
// Uses CWnd::CreateControl to host the WebBrowser OCX directly (no doc/view)

#ifndef _ATL_ALLOW_DEPRECATED_FUNCTIONS
#define _ATL_ALLOW_DEPRECATED_FUNCTIONS
#endif
#ifndef _AFXDLL
#define _AFXDLL
#endif

#include <afxwin.h>
#include <afxdisp.h>
#include <afxctl.h>
#include <atlbase.h>
#include <wininet.h>
#pragma comment(lib, "wininet.lib")
CComModule _Module;
#include <atlcom.h>
#include <exdisp.h>    // IWebBrowser2

// CLSID_WebBrowser comes from uuid.lib via exdisp.h

class CWebFrame : public CFrameWnd
{
public:
    CWnd m_browserWnd;
    CComPtr<IWebBrowser2> m_pBrowser;

    CString m_cookieUser, m_cookieWorld;

    BOOL CreateAndHost(const CString& clientPath = "Client\\Basic\\Client.htm",
                       const CString& user = "", const CString& server = "", const CString& world = "")
    {
        if (!world.IsEmpty()) {
            m_cookieUser = user;
            m_cookieWorld = server + "/" + world;
        }
        if (!Create(NULL, "Microsoft Virtual Worlds",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            CRect(50, 50, 1074, 818)))
            return FALSE;

        CRect rc;
        GetClientRect(&rc);

        BOOL bCreated = m_browserWnd.CreateControl(
            CLSID_WebBrowser,
            "WebBrowser",
            WS_CHILD | WS_VISIBLE,
            rc,
            this,
            100
        );

        if (!bCreated) {
            printf("FAIL: CreateControl(WebBrowser) failed\n");
            return FALSE;
        }
        printf("WebBrowser control created\n");

        LPUNKNOWN pUnk = m_browserWnd.GetControlUnknown();
        if (pUnk) {
            pUnk->QueryInterface(IID_IWebBrowser2, (void**)&m_pBrowser);
        }

        if (m_pBrowser) {
            // Don't suppress — needed for VBScript event dispatch
            // m_pBrowser->put_Silent(VARIANT_TRUE);

            // Navigate to the original client HTML
            // Try registry ContentPath first, fall back to paths relative to exe
            CComVariant vtEmpty;
            CString htmlPath;
            HKEY hKey = NULL;
            // Try HKCU first, fall back to HKLM
            HKEY wcRoots[] = { HKEY_CURRENT_USER, HKEY_LOCAL_MACHINE };
            for (int wr = 0; wr < 2 && htmlPath.IsEmpty(); wr++)
            if (RegOpenKeyExA(wcRoots[wr], "Software\\Microsoft\\V-Worlds\\Paths", 0, KEY_READ | KEY_WOW64_32KEY, &hKey) == ERROR_SUCCESS) {
                char buf[MAX_PATH] = {0};
                DWORD bufSize = sizeof(buf);
                if (RegQueryValueExA(hKey, "ContentPath", NULL, NULL, (LPBYTE)buf, &bufSize) == ERROR_SUCCESS) {
                    htmlPath = buf;
                    if (htmlPath.Right(1) != "\\") htmlPath += "\\";
                    htmlPath += clientPath;
                }
                RegCloseKey(hKey);
            }
            if (htmlPath.IsEmpty() || GetFileAttributesA(htmlPath) == INVALID_FILE_ATTRIBUTES) {
                // Fall back to relative paths
                char exePath[MAX_PATH];
                GetModuleFileNameA(NULL, exePath, MAX_PATH);
                CString exeDir(exePath);
                exeDir = exeDir.Left(exeDir.ReverseFind('\\'));
                // Try ../content/ (release layout)
                htmlPath = exeDir + "\\..\\content\\" + clientPath;
                if (GetFileAttributesA(htmlPath) == INVALID_FILE_ATTRIBUTES) {
                    // Try ../webclient/html/ (dev layout)
                    htmlPath = exeDir + "\\..\\webclient\\html\\Client.htm";
                }
            }
            CString fileUrl = "file:///" + htmlPath;
            fileUrl.Replace('\\', '/');

            // Set cookies for authoring client (reads sUser, sWorld from cookies)
            if (!m_cookieWorld.IsEmpty()) {
                InternetSetCookieA("file:///vworlds", "sUser", (LPCSTR)m_cookieUser);
                InternetSetCookieA("file:///vworlds", "sWorld", (LPCSTR)m_cookieWorld);
                InternetSetCookieA("file:///vworlds", "sLogoffURL", "vwStartClient.htm");
                printf("Set cookies: sUser=%s sWorld=%s\n", (LPCSTR)m_cookieUser, (LPCSTR)m_cookieWorld);
            }

            CComBSTR url(fileUrl);
            m_pBrowser->Navigate(url, &vtEmpty, &vtEmpty, &vtEmpty, &vtEmpty);
            printf("Navigating to %s\n", (LPCSTR)fileUrl);
        }

        return TRUE;
    }

    afx_msg void OnSize(UINT nType, int cx, int cy)
    {
        CFrameWnd::OnSize(nType, cx, cy);
        if (m_browserWnd.m_hWnd)
            m_browserWnd.MoveWindow(0, 0, cx, cy);
    }

    DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CWebFrame, CFrameWnd)
    ON_WM_SIZE()
END_MESSAGE_MAP()

class CWebClientApp : public CWinApp
{
public:
    CWebFrame* m_pFrame;

    CWebClientApp() : m_pFrame(NULL) {}

    CString m_clientPath; // relative to ContentPath, e.g. "Client\html\client.htm"
    CString m_world, m_user, m_server;

    virtual BOOL InitInstance()
    {
        AllocConsole();
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);

        AfxEnableControlContainer();
        _Module.Init(NULL, m_hInstance);

        // Parse command line
        CString cmdLine(m_lpCmdLine);
        int pos;
        if ((pos = cmdLine.Find("--client ")) >= 0) {
            CString rest = cmdLine.Mid(pos + 9);
            rest.TrimLeft();
            if (rest.GetLength() > 0 && rest[0] == '"') {
                rest = rest.Mid(1);
                m_clientPath = rest.SpanExcluding("\"");
            } else {
                m_clientPath = rest.SpanExcluding(" ");
            }
        }
        if ((pos = cmdLine.Find("--world ")) >= 0) {
            CString rest = cmdLine.Mid(pos + 8);
            m_world = rest.SpanExcluding(" \"");
        }
        if ((pos = cmdLine.Find("--user ")) >= 0) {
            CString rest = cmdLine.Mid(pos + 7);
            m_user = rest.SpanExcluding(" \"");
        }
        if ((pos = cmdLine.Find("--server ")) >= 0) {
            CString rest = cmdLine.Mid(pos + 9);
            m_server = rest.SpanExcluding(" \"");
        }
        if (m_clientPath.IsEmpty())
            m_clientPath = "Client\\Basic\\Client.htm";
        if (m_server.IsEmpty()) m_server = "localhost";
        if (m_user.IsEmpty()) m_user = "Explorer";

        printf("=== VWorlds Web Client ===\n");
        printf("Client: %s\n", (LPCSTR)m_clientPath);

        m_pFrame = new CWebFrame();
        if (!m_pFrame->CreateAndHost(m_clientPath, m_user, m_server, m_world)) {
            printf("FAIL: Could not create web frame\n");
            return FALSE;
        }
        m_pMainWnd = m_pFrame;

        return TRUE;
    }

    virtual int ExitInstance()
    {
        _Module.Term();
        return CWinApp::ExitInstance();
    }
};

CWebClientApp theApp;
