// Copyright (c) 2000 Microsoft Corporation.  All rights reserved.
// Microsoft Research Source License (MSRSL)

// DServ.cpp : Local directory service implementation
// Replaces the original ADSI/LDAP backend with an in-memory world store.
// The server calls AddWorld/RemoveWorld through the same COM interface;
// the data just stays in-process instead of going to an LDAP server.

#include "stdafx.h"
#include <winsock2.h>
#include <DirServ.h>
#include "DServ.h"

#pragma comment(lib, "ws2_32.lib")

/////////////////////////////////////////////////////////////////////////////
// CDServ

// HTTP directory listener thread
static UINT __cdecl HttpListenerThread(LPVOID pParam)
{
	CDServ* pDServ = (CDServ*)pParam;

	SOCKET listenSock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (listenSock == INVALID_SOCKET) return 1;

	// Allow port reuse
	int opt = 1;
	setsockopt(listenSock, SOL_SOCKET, SO_REUSEADDR, (char*)&opt, sizeof(opt));

	sockaddr_in addr = {0};
	addr.sin_family = AF_INET;
	addr.sin_port = htons(7002);
	addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);

	if (bind(listenSock, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR) {
		OutputDebugStringA("=== DSERV HTTP: bind failed on port 7002 ===\n");
		closesocket(listenSock);
		return 1;
	}
	listen(listenSock, 5);
	OutputDebugStringA("=== DSERV HTTP: listening on http://localhost:7002/ds ===\n");

	// Non-blocking so we can check shutdown flag
	u_long nonblock = 1;
	ioctlsocket(listenSock, FIONBIO, &nonblock);

	while (pDServ->m_bHttpRunning) {
		sockaddr_in clientAddr;
		int clientLen = sizeof(clientAddr);
		SOCKET clientSock = accept(listenSock, (sockaddr*)&clientAddr, &clientLen);

		if (clientSock == INVALID_SOCKET) {
			Sleep(100);
			continue;
		}

		// Read the HTTP request (we don't really parse it — any GET returns the world list)
		char reqBuf[1024];
		recv(clientSock, reqBuf, sizeof(reqBuf) - 1, 0);

		// Build tab-delimited world list (same format as the original ds.asp)
		// Format per line: URL\tFriendlyName\tUserCount\tInfoURL
		CString body;
		POSITION pos = pDServ->m_worldMap.GetStartPosition();
		while (pos) {
			CString key;
			WorldRecord rec;
			pDServ->m_worldMap.GetNextAssoc(pos, key, rec);

			// Extract friendly name from URL (e.g., "DESKTOP-IL0G24R/Gallery" -> "Gallery")
			CString friendlyName = rec.url;
			int slash = friendlyName.ReverseFind('/');
			if (slash >= 0) friendlyName = friendlyName.Mid(slash + 1);

			CString line;
			line.Format("%s\t%s\t%s\t%s\r\n",
				(LPCSTR)rec.url, (LPCSTR)friendlyName,
				(LPCSTR)rec.userCount, (LPCSTR)rec.infoURL);
			body += line;
		}

		// Send HTTP response
		CString response;
		response.Format(
			"HTTP/1.0 200 OK\r\n"
			"Content-Type: text/plain\r\n"
			"Content-Length: %d\r\n"
			"Connection: close\r\n"
			"\r\n%s",
			body.GetLength(), (LPCSTR)body);

		send(clientSock, (LPCSTR)response, response.GetLength(), 0);
		closesocket(clientSock);
	}

	closesocket(listenSock);
	OutputDebugStringA("=== DSERV HTTP: listener stopped ===\n");
	return 0;
}

CDServ::CDServ() : m_bConnected(false), m_bHttpRunning(false), m_pHttpThread(NULL)
{
}

CDServ::~CDServ()
{
	// Stop HTTP listener
	m_bHttpRunning = false;
	if (m_pHttpThread) {
		WaitForSingleObject(m_pHttpThread->m_hThread, 2000);
		m_pHttpThread = NULL;
	}
	m_worldMap.RemoveAll();
}

HRESULT CDServ::FinalConstruct()
{
	// Start HTTP directory listener
	WSADATA wsaData;
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) == 0) {
		m_bHttpRunning = true;
		m_pHttpThread = AfxBeginThread(HttpListenerThread, this, THREAD_PRIORITY_BELOW_NORMAL, 0, 0, NULL);
	}
	return S_OK;
}

STDMETHODIMP CDServ::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = { &IID_IDServ };
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i], riid))
			return S_OK;
	}
	return S_FALSE;
}

/////////////////////////////////////////////////////////////////////////////
// Connection — no-ops for local mode

STDMETHODIMP CDServ::ConnectEx2(HWND hNotificationWindow, BSTR bstrLDAP)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	m_bConnected = true;
	OutputDebugStringA("=== DSERV ConnectEx2: local mode active ===\n");

	// Post notification if window provided (original contract)
	if (hNotificationWindow)
		::PostMessage(hNotificationWindow, WM_USER + 100, 0, 0);

	return S_OK;
}

STDMETHODIMP CDServ::ConnectEx(BSTR bstrLocation, BSTR bstrAdmin, BSTR bstrPasswd, HWND hNotificationWindow)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())
	m_bConnected = true;
	return S_OK;
}

STDMETHODIMP CDServ::Disconnect()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())
	m_bConnected = false;
	return S_OK;
}

STDMETHODIMP CDServ::TestQueue()
{
	return S_OK;
}

/////////////////////////////////////////////////////////////////////////////
// World management — in-memory store

STDMETHODIMP CDServ::AddWorld(BSTR bstrWorldGUID, BSTR bstrWorldURL, BSTR bstrWorldNoUsers, BSTR bstrInfoURL)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	CString guid(bstrWorldGUID);
	WorldRecord rec;
	rec.guid = guid;
	rec.url = CString(bstrWorldURL);
	rec.userCount = CString(bstrWorldNoUsers);
	rec.infoURL = CString(bstrInfoURL);

	m_worldMap.SetAt(guid, rec);

	{
		CString msg;
		msg.Format("=== DSERV AddWorld: guid='%s' url='%s' users=%s ===\n",
			(LPCSTR)guid, (LPCSTR)rec.url, (LPCSTR)rec.userCount);
		OutputDebugStringA((LPCSTR)msg);
		TRACE("%s", (LPCSTR)msg);  // also goes to server's debug output
	}

	return S_OK;
}

STDMETHODIMP CDServ::RemoveWorld(BSTR bstrWorldGUID)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	CString guid(bstrWorldGUID);
	m_worldMap.RemoveKey(guid);

	TRACE("CDServ::RemoveWorld: '%s'\n", (LPCSTR)guid);

	return S_OK;
}

/////////////////////////////////////////////////////////////////////////////
// Status

STDMETHODIMP CDServ::GetStatus(BSTR *bstrMsg, VARIANT_BOOL *pbIsDSConnected)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	CString status;
	status.Format("Local directory: %d world(s) registered", m_worldMap.GetCount());

	*bstrMsg = status.AllocSysString();
	*pbIsDSConnected = m_bConnected ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

/////////////////////////////////////////////////////////////////////////////
// User management — stubs (never implemented in original)

STDMETHODIMP CDServ::AddUser(BSTR, BSTR, BSTR, BSTR, BSTR) { return S_OK; }
STDMETHODIMP CDServ::RemoveUser(BSTR) { return S_OK; }
STDMETHODIMP CDServ::LogUserOn(BSTR) { return S_OK; }
STDMETHODIMP CDServ::LogUserOff(BSTR) { return S_OK; }
STDMETHODIMP CDServ::FindUser(BSTR, BSTR*, BSTR*, BSTR*, BSTR*) { return E_NOTIMPL; }
STDMETHODIMP CDServ::EnumerateUsers(HWND) { return S_OK; }
STDMETHODIMP CDServ::GetNextUser(BSTR*, BSTR*, BSTR*, BSTR*, BSTR*) { return E_FAIL; }
