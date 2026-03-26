

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwclient.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __vwclient_h__
#define __vwclient_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IVWClient_FWD_DEFINED__
#define __IVWClient_FWD_DEFINED__
typedef interface IVWClient IVWClient;

#endif 	/* __IVWClient_FWD_DEFINED__ */


#ifndef __IVWClientSite_FWD_DEFINED__
#define __IVWClientSite_FWD_DEFINED__
typedef interface IVWClientSite IVWClientSite;

#endif 	/* __IVWClientSite_FWD_DEFINED__ */


#ifndef __IVWClientOCX_FWD_DEFINED__
#define __IVWClientOCX_FWD_DEFINED__
typedef interface IVWClientOCX IVWClientOCX;

#endif 	/* __IVWClientOCX_FWD_DEFINED__ */


/* header files for imported files */
#include "vwobject.h"
#include "vwadmin.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwclient_0000_0000 */
/* [local] */ 

#define VWCLIENT_E_ALREADYCONNECTED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0301)
#define VWCLIENT_E_WINDOWCREATIONFAILURE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0302)
#define VWCLIENT_E_POSTMESSAGEFAILURE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0303)
#define VWCLIENT_E_INVALIDREPLYFROMSERVER	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0304)
#define VWCLIENT_E_INVALIDDATABASENAME		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0305)
#define VWCLIENT_E_CONNECTFAILED				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0306)




extern RPC_IF_HANDLE __MIDL_itf_vwclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwclient_0000_0000_v0_0_s_ifspec;

#ifndef __IVWClient_INTERFACE_DEFINED__
#define __IVWClient_INTERFACE_DEFINED__

/* interface IVWClient */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9820-A417-11CF-9BF0-0080C7A56A8A")
    IVWClient : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ConnectLocalEx( 
            /* [in] */ BSTR bstr,
            /* [in] */ VARIANT_BOOL bOverwrite,
            /* [retval][out] */ IWorld **ppworld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConnectLocal( 
            /* [in] */ BSTR bstr,
            /* [retval][out] */ IWorld **ppworld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ IWorld **ppworld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConnectToServer( 
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL bAuthenticated,
            /* [retval][out] */ IVWAdmin **ppadmin) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateWorld( 
            /* [in] */ BSTR bstrWorldName,
            /* [retval][out] */ IWorld **ppworld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenWorld( 
            /* [in] */ BSTR bstrWorldName,
            /* [retval][out] */ IWorld **ppworld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_World( 
            /* [retval][out] */ IWorld **ppworld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Trace( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Report( 
            /* [in] */ BSTR bstr,
            /* [in] */ long lType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateTool( 
            /* [in] */ BSTR name,
            /* [in] */ REFCLSID clsid,
            /* [retval][out] */ IUnknown **ppunk) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateToolFromProgID( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR progid,
            /* [retval][out] */ IUnknown **ppunk) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveTool( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Tool( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IUnknown **ppunk) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Tools( 
            /* [retval][out] */ IPropertyMap **pppropmap) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWClientVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWClient * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWClient * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWClient * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWClient * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWClient * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWClient * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWClient * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVWClient, Initialize)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWClient * This);
        
        DECLSPEC_XFGVIRT(IVWClient, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWClient * This);
        
        DECLSPEC_XFGVIRT(IVWClient, ConnectLocalEx)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ConnectLocalEx )( 
            IVWClient * This,
            /* [in] */ BSTR bstr,
            /* [in] */ VARIANT_BOOL bOverwrite,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IVWClient, ConnectLocal)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConnectLocal )( 
            IVWClient * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IVWClient, Connect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IVWClient * This,
            /* [in] */ BSTR bstrURL,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IVWClient, ConnectToServer)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConnectToServer )( 
            IVWClient * This,
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL bAuthenticated,
            /* [retval][out] */ IVWAdmin **ppadmin);
        
        DECLSPEC_XFGVIRT(IVWClient, CreateWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateWorld )( 
            IVWClient * This,
            /* [in] */ BSTR bstrWorldName,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IVWClient, OpenWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenWorld )( 
            IVWClient * This,
            /* [in] */ BSTR bstrWorldName,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IVWClient, Disconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IVWClient * This);
        
        DECLSPEC_XFGVIRT(IVWClient, get_IsConnected)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            IVWClient * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IVWClient, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVWClient * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IVWClient, Trace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Trace )( 
            IVWClient * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IVWClient, Report)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Report )( 
            IVWClient * This,
            /* [in] */ BSTR bstr,
            /* [in] */ long lType);
        
        DECLSPEC_XFGVIRT(IVWClient, CreateTool)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTool )( 
            IVWClient * This,
            /* [in] */ BSTR name,
            /* [in] */ REFCLSID clsid,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IVWClient, CreateToolFromProgID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateToolFromProgID )( 
            IVWClient * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR progid,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IVWClient, RemoveTool)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveTool )( 
            IVWClient * This,
            /* [in] */ BSTR name);
        
        DECLSPEC_XFGVIRT(IVWClient, get_Tool)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tool )( 
            IVWClient * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IVWClient, get_Tools)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Tools )( 
            IVWClient * This,
            /* [retval][out] */ IPropertyMap **pppropmap);
        
        END_INTERFACE
    } IVWClientVtbl;

    interface IVWClient
    {
        CONST_VTBL struct IVWClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWClient_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWClient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWClient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWClient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWClient_Initialize(This)	\
    ( (This)->lpVtbl -> Initialize(This) ) 

#define IVWClient_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWClient_ConnectLocalEx(This,bstr,bOverwrite,ppworld)	\
    ( (This)->lpVtbl -> ConnectLocalEx(This,bstr,bOverwrite,ppworld) ) 

#define IVWClient_ConnectLocal(This,bstr,ppworld)	\
    ( (This)->lpVtbl -> ConnectLocal(This,bstr,ppworld) ) 

#define IVWClient_Connect(This,bstrURL,ppworld)	\
    ( (This)->lpVtbl -> Connect(This,bstrURL,ppworld) ) 

#define IVWClient_ConnectToServer(This,bstrURL,bAuthenticated,ppadmin)	\
    ( (This)->lpVtbl -> ConnectToServer(This,bstrURL,bAuthenticated,ppadmin) ) 

#define IVWClient_CreateWorld(This,bstrWorldName,ppworld)	\
    ( (This)->lpVtbl -> CreateWorld(This,bstrWorldName,ppworld) ) 

#define IVWClient_OpenWorld(This,bstrWorldName,ppworld)	\
    ( (This)->lpVtbl -> OpenWorld(This,bstrWorldName,ppworld) ) 

#define IVWClient_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IVWClient_get_IsConnected(This,pbool)	\
    ( (This)->lpVtbl -> get_IsConnected(This,pbool) ) 

#define IVWClient_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IVWClient_Trace(This,bstr)	\
    ( (This)->lpVtbl -> Trace(This,bstr) ) 

#define IVWClient_Report(This,bstr,lType)	\
    ( (This)->lpVtbl -> Report(This,bstr,lType) ) 

#define IVWClient_CreateTool(This,name,clsid,ppunk)	\
    ( (This)->lpVtbl -> CreateTool(This,name,clsid,ppunk) ) 

#define IVWClient_CreateToolFromProgID(This,name,progid,ppunk)	\
    ( (This)->lpVtbl -> CreateToolFromProgID(This,name,progid,ppunk) ) 

#define IVWClient_RemoveTool(This,name)	\
    ( (This)->lpVtbl -> RemoveTool(This,name) ) 

#define IVWClient_get_Tool(This,name,ppunk)	\
    ( (This)->lpVtbl -> get_Tool(This,name,ppunk) ) 

#define IVWClient_get_Tools(This,pppropmap)	\
    ( (This)->lpVtbl -> get_Tools(This,pppropmap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWClient_INTERFACE_DEFINED__ */


#ifndef __IVWClientSite_INTERFACE_DEFINED__
#define __IVWClientSite_INTERFACE_DEFINED__

/* interface IVWClientSite */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVWClientSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9822-A417-11CF-9BF0-0080C7A56A8A")
    IVWClientSite : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnConnect( 
            /* [in] */ IWorld *pWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnDisconnect( 
            /* [in] */ IWorld *pWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUserConnect( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUserDisconnect( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUserReconnect( 
            /* [in] */ IVWClient *pNewClient,
            /* [in] */ IWorld *pNewWorld,
            /* [in] */ IThing *pNewThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnTrace( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnReport( 
            /* [in] */ BSTR bstr,
            /* [in] */ long lVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUIEvent( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWClientSiteVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWClientSite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWClientSite * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWClientSite * This);
        
        DECLSPEC_XFGVIRT(IVWClientSite, OnConnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnConnect )( 
            IVWClientSite * This,
            /* [in] */ IWorld *pWorld);
        
        DECLSPEC_XFGVIRT(IVWClientSite, OnDisconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnDisconnect )( 
            IVWClientSite * This,
            /* [in] */ IWorld *pWorld);
        
        DECLSPEC_XFGVIRT(IVWClientSite, OnUserConnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUserConnect )( 
            IVWClientSite * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IVWClientSite, OnUserDisconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUserDisconnect )( 
            IVWClientSite * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IVWClientSite, OnUserReconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUserReconnect )( 
            IVWClientSite * This,
            /* [in] */ IVWClient *pNewClient,
            /* [in] */ IWorld *pNewWorld,
            /* [in] */ IThing *pNewThing);
        
        DECLSPEC_XFGVIRT(IVWClientSite, OnTrace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnTrace )( 
            IVWClientSite * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IVWClientSite, OnReport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnReport )( 
            IVWClientSite * This,
            /* [in] */ BSTR bstr,
            /* [in] */ long lVal);
        
        DECLSPEC_XFGVIRT(IVWClientSite, OnUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIEvent )( 
            IVWClientSite * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg);
        
        END_INTERFACE
    } IVWClientSiteVtbl;

    interface IVWClientSite
    {
        CONST_VTBL struct IVWClientSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWClientSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWClientSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWClientSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWClientSite_OnConnect(This,pWorld)	\
    ( (This)->lpVtbl -> OnConnect(This,pWorld) ) 

#define IVWClientSite_OnDisconnect(This,pWorld)	\
    ( (This)->lpVtbl -> OnDisconnect(This,pWorld) ) 

#define IVWClientSite_OnUserConnect(This,pthing)	\
    ( (This)->lpVtbl -> OnUserConnect(This,pthing) ) 

#define IVWClientSite_OnUserDisconnect(This,pthing)	\
    ( (This)->lpVtbl -> OnUserDisconnect(This,pthing) ) 

#define IVWClientSite_OnUserReconnect(This,pNewClient,pNewWorld,pNewThing)	\
    ( (This)->lpVtbl -> OnUserReconnect(This,pNewClient,pNewWorld,pNewThing) ) 

#define IVWClientSite_OnTrace(This,bstr)	\
    ( (This)->lpVtbl -> OnTrace(This,bstr) ) 

#define IVWClientSite_OnReport(This,bstr,lVal)	\
    ( (This)->lpVtbl -> OnReport(This,bstr,lVal) ) 

#define IVWClientSite_OnUIEvent(This,pthing,bstrEventName,varArg)	\
    ( (This)->lpVtbl -> OnUIEvent(This,pthing,bstrEventName,varArg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWClientSite_INTERFACE_DEFINED__ */


#ifndef __IVWClientOCX_INTERFACE_DEFINED__
#define __IVWClientOCX_INTERFACE_DEFINED__

/* interface IVWClientOCX */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWClientOCX;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4898801-20EF-11D0-8A96-00A0C9082583")
    IVWClientOCX : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VWClient( 
            /* [retval][out] */ IVWClient **pVWClient) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pbstrVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWClientOCXVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWClientOCX * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWClientOCX * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWClientOCX * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWClientOCX * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWClientOCX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWClientOCX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWClientOCX * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVWClientOCX, get_VWClient)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VWClient )( 
            IVWClientOCX * This,
            /* [retval][out] */ IVWClient **pVWClient);
        
        DECLSPEC_XFGVIRT(IVWClientOCX, get_Version)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IVWClientOCX * This,
            /* [retval][out] */ BSTR *pbstrVersion);
        
        END_INTERFACE
    } IVWClientOCXVtbl;

    interface IVWClientOCX
    {
        CONST_VTBL struct IVWClientOCXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWClientOCX_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWClientOCX_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWClientOCX_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWClientOCX_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWClientOCX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWClientOCX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWClientOCX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWClientOCX_get_VWClient(This,pVWClient)	\
    ( (This)->lpVtbl -> get_VWClient(This,pVWClient) ) 

#define IVWClientOCX_get_Version(This,pbstrVersion)	\
    ( (This)->lpVtbl -> get_Version(This,pbstrVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWClientOCX_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


