// Copyright (c) 2000 Microsoft Corporation.  All rights reserved.
// Microsoft Research Source License (MSRSL)

// DServ.cpp : Local directory service implementation
// Replaces the original ADSI/LDAP backend with an in-memory world store.
// The server calls AddWorld/RemoveWorld through the same COM interface;
// the data just stays in-process instead of going to an LDAP server.

#include "stdafx.h"
#include <DirServ.h>
#include "DServ.h"

/////////////////////////////////////////////////////////////////////////////
// CDServ

CDServ::CDServ() : m_bConnected(false)
{
}

CDServ::~CDServ()
{
	m_worldMap.RemoveAll();
}

HRESULT CDServ::FinalConstruct()
{
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
	TRACE("CDServ::ConnectEx2: local mode (LDAP path ignored)\n");

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

	TRACE("CDServ::AddWorld: '%s' url='%s' users=%s\n",
		(LPCSTR)guid, (LPCSTR)rec.url, (LPCSTR)rec.userCount);

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
