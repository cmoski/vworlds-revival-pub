// webclient.cpp - Host the original VWorlds HTML client in a WebBrowser control
// Uses CWnd::CreateControl to host the WebBrowser OCX directly (no doc/view)

#define _ATL_ALLOW_DEPRECATED_FUNCTIONS
#define _AFXDLL

#include <afxwin.h>
#include <afxdisp.h>
#include <afxctl.h>
#include <atlbase.h>
CComModule _Module;
#include <atlcom.h>
#include <exdisp.h>    // IWebBrowser2

// CLSID_WebBrowser comes from uuid.lib via exdisp.h

class CWebFrame : public CFrameWnd
{
public:
    CWnd m_browserWnd;
    CComPtr<IWebBrowser2> m_pBrowser;

    BOOL CreateAndHost()
    {
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
            // Suppress script error dialogs
            m_pBrowser->put_Silent(VARIANT_TRUE);

            // Navigate to the original client HTML
            CComVariant vtEmpty;
            CComBSTR url("file:///F:/VWorlds/src/webclient/html/Client.htm");
            m_pBrowser->Navigate(url, &vtEmpty, &vtEmpty, &vtEmpty, &vtEmpty);
            printf("Navigating to Client.htm\n");
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

    virtual BOOL InitInstance()
    {
        AllocConsole();
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);

        AfxEnableControlContainer();
        _Module.Init(NULL, m_hInstance);

        printf("=== VWorlds Web Client ===\n");

        m_pFrame = new CWebFrame();
        if (!m_pFrame->CreateAndHost()) {
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
