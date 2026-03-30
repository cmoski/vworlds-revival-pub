// Copyright (c) 2000 Microsoft Corporation.  All rights reserved.
// Microsoft Research Source License (MSRSL)

// DServ.h : Declaration of the CDServ
// Modernized: ADSI/LDAP backend replaced with in-memory local store
#ifndef __DSERV_H_
#define __DSERV_H_

#include "resource.h"
#include <afxtempl.h>
#include <DirServ.h>  // MIDL-generated IDServ interface

EXTERN_C const CLSID CLSID_DServ;
EXTERN_C const IID LIBID_VWSYSTEMLib;

// World record stored in local directory
struct WorldRecord {
	CString guid;
	CString url;
	CString userCount;
	CString infoURL;
};

/////////////////////////////////////////////////////////////////////////////
// CDServ — local directory service (replaces ADSI/LDAP backend)
class ATL_NO_VTABLE CDServ :
	public IDispatchImpl<IDServ, &IID_IDServ, &LIBID_VWSYSTEMLib>,
	public ISupportErrorInfo,
	public IObjectSafetyImpl<CDServ, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CDServ, &CLSID_DServ>
{
DECLARE_AGGREGATABLE(CDServ)

public:
	CDServ();
	~CDServ();

DECLARE_REGISTRY_RESOURCEID(IDR_DSERV)

BEGIN_COM_MAP(CDServ)
	COM_INTERFACE_ENTRY(IDServ)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IObjectSafety)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CDServ)
END_CONNECTION_POINT_MAP()

	HRESULT FinalConstruct();

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IDServ
public:
	STDMETHOD(GetStatus)(BSTR *bstrMsg, VARIANT_BOOL *pbIsDSConnected);
	STDMETHOD(ConnectEx)(BSTR bstrLocation, BSTR bstrAdmin, BSTR bstrPasswd, HWND hNotificationWindow);
	STDMETHOD(ConnectEx2)(HWND hNotificationWindow, BSTR bstrLDAP);
	STDMETHOD(Disconnect)();
	STDMETHOD(TestQueue)();

	// World management
	STDMETHOD(AddWorld)(BSTR bstrWorldGUID, BSTR bstrWorldURL, BSTR bstrWorldNoUsers, BSTR bstrInfoURL);
	STDMETHOD(RemoveWorld)(BSTR bstrWorldGUID);

	// User management (stubs — never implemented in original)
	STDMETHOD(AddUser)(BSTR EmailName, BSTR InWorldAlias, BSTR ComputerName, BSTR Comment, BSTR computername);
	STDMETHOD(RemoveUser)(BSTR InWorldAlias);
	STDMETHOD(LogUserOn)(BSTR InWorldAlias);
	STDMETHOD(LogUserOff)(BSTR InWorldAlias);
	STDMETHOD(FindUser)(BSTR inworldalias, BSTR *emailname, BSTR *computername, BSTR *comment, BSTR *worldname);
	STDMETHOD(EnumerateUsers)(HWND hNotificationWindow);
	STDMETHOD(GetNextUser)(BSTR *inworldalias, BSTR *emailname, BSTR *computername, BSTR *comment, BSTR *worldname);
	STDMETHOD(IsEnumerating)(VARIANT_BOOL *pbool) { *pbool = VARIANT_FALSE; return S_OK; }

private:
	// In-memory world directory (replaces ADSI/LDAP)
	CMap<CString, LPCSTR, WorldRecord, WorldRecord&> m_worldMap;
	bool m_bConnected;
};

#endif //__DSERV_H_
