

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwserver.idl:
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

#ifndef __vwserver_h__
#define __vwserver_h__

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

#ifndef __IVWServer_FWD_DEFINED__
#define __IVWServer_FWD_DEFINED__
typedef interface IVWServer IVWServer;

#endif 	/* __IVWServer_FWD_DEFINED__ */


#ifndef __DVWServerEvents_FWD_DEFINED__
#define __DVWServerEvents_FWD_DEFINED__
typedef interface DVWServerEvents DVWServerEvents;

#endif 	/* __DVWServerEvents_FWD_DEFINED__ */


/* header files for imported files */
#include "vwobject.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwserver_0000_0000 */
/* [local] */ 

#define VWSERVER_E_THREADCREATION            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0401)
#define VWSERVER_E_WORLDISOFFLINE            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0402)
#define VWSERVER_E_WORLDPREVIOUSLYREGISTERED	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0403)
#define VWSERVER_E_ERRORCREATINGWORLD		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0404)
#define VWSERVER_E_INVALIDWORLDNAME			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0405)
#define VWSERVER_E_AUTHENTICATIONREQUIRED	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0406)
#define VWSERVER_E_GROUPAUTHENTICATIONFAILURE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0407)
#define VWSERVER_E_TOOMANYCONNECTIONS		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0408)


extern RPC_IF_HANDLE __MIDL_itf_vwserver_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwserver_0000_0000_v0_0_s_ifspec;

#ifndef __IVWServer_INTERFACE_DEFINED__
#define __IVWServer_INTERFACE_DEFINED__

/* interface IVWServer */
/* [unique][local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVWServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F85848FE-00F4-11D0-A516-00AA00B595DB")
    IVWServer : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Accept( 
            /* [in] */ int iPort,
            /* [in] */ int iOptionalCallbackWindowHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE DisconnectWarning( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE DisconnectCancel( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShutDown( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TestQueue( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStatusInfo( 
            /* [out] */ DWORD *queuesize,
            /* [out] */ DWORD *totalRequests,
            /* [out] */ BSTR *bstrWorldsInfo,
            /* [out] */ DWORD *totalConnections,
            /* [out] */ VARIANT_BOOL *pbIsDSConnected) = 0;
        
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
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumerateWorlds( 
            /* [retval][out] */ IPropertyList **ppGUIDList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveWorld( 
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveWorldAs( 
            /* [in] */ BSTR bstrWorldName,
            /* [in] */ BSTR bstrNewWorldName,
            /* [out] */ BSTR *bstrHR) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveWorldScript( 
            /* [in] */ BSTR bstrWorldName,
            /* [in] */ BSTR bstrScriptName,
            /* [out] */ BSTR *bstrHR) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSimpleStatus( 
            /* [out] */ BSTR *bstrMsg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteWorldFromSystem( 
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TakeWorldOffline( 
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TakeWorldOnline( 
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReconnectToDS( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RefreshDS( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenWorld( 
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE PerformanceTest( 
            /* [in] */ BSTR bstrWorldName,
            /* [in] */ long iType,
            /* [out] */ BSTR *bstrHR) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearPerformanceCounters( void) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_UseAuthentication( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_UseAuthentication( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_AuthenticationGroup( 
            /* [retval][out] */ BSTR *bstrGroup) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_AuthenticationGroup( 
            /* [in] */ BSTR bstrGroup) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_RunningOnWinNT( 
            /* [retval][out] */ BOOL *pbRunningOnWinNT) = 0;
        
        virtual /* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionLimit( 
            /* [retval][out] */ DWORD *dwLimit) = 0;
        
        virtual /* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionLimit( 
            /* [in] */ DWORD dwLimit) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionCount( 
            /* [retval][out] */ long *pCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWServerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWServer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWServer * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWServer * This,
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
        
        DECLSPEC_XFGVIRT(IVWServer, Accept)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Accept )( 
            IVWServer * This,
            /* [in] */ int iPort,
            /* [in] */ int iOptionalCallbackWindowHandle);
        
        DECLSPEC_XFGVIRT(IVWServer, Disconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IVWServer, DisconnectWarning)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *DisconnectWarning )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IVWServer, DisconnectCancel)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *DisconnectCancel )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IVWServer, ShutDown)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShutDown )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IVWServer, TestQueue)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TestQueue )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IVWServer, GetStatusInfo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStatusInfo )( 
            IVWServer * This,
            /* [out] */ DWORD *queuesize,
            /* [out] */ DWORD *totalRequests,
            /* [out] */ BSTR *bstrWorldsInfo,
            /* [out] */ DWORD *totalConnections,
            /* [out] */ VARIANT_BOOL *pbIsDSConnected);
        
        DECLSPEC_XFGVIRT(IVWServer, CreateToolFromProgID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateToolFromProgID )( 
            IVWServer * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR progid,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IVWServer, RemoveTool)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveTool )( 
            IVWServer * This,
            /* [in] */ BSTR name);
        
        DECLSPEC_XFGVIRT(IVWServer, get_Tool)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tool )( 
            IVWServer * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IVWServer, get_Tools)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Tools )( 
            IVWServer * This,
            /* [retval][out] */ IPropertyMap **pppropmap);
        
        DECLSPEC_XFGVIRT(IVWServer, EnumerateWorlds)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnumerateWorlds )( 
            IVWServer * This,
            /* [retval][out] */ IPropertyList **ppGUIDList);
        
        DECLSPEC_XFGVIRT(IVWServer, SaveWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveWorld )( 
            IVWServer * This,
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR);
        
        DECLSPEC_XFGVIRT(IVWServer, SaveWorldAs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveWorldAs )( 
            IVWServer * This,
            /* [in] */ BSTR bstrWorldName,
            /* [in] */ BSTR bstrNewWorldName,
            /* [out] */ BSTR *bstrHR);
        
        DECLSPEC_XFGVIRT(IVWServer, SaveWorldScript)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveWorldScript )( 
            IVWServer * This,
            /* [in] */ BSTR bstrWorldName,
            /* [in] */ BSTR bstrScriptName,
            /* [out] */ BSTR *bstrHR);
        
        DECLSPEC_XFGVIRT(IVWServer, GetSimpleStatus)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSimpleStatus )( 
            IVWServer * This,
            /* [out] */ BSTR *bstrMsg);
        
        DECLSPEC_XFGVIRT(IVWServer, DeleteWorldFromSystem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteWorldFromSystem )( 
            IVWServer * This,
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR);
        
        DECLSPEC_XFGVIRT(IVWServer, TakeWorldOffline)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TakeWorldOffline )( 
            IVWServer * This,
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR);
        
        DECLSPEC_XFGVIRT(IVWServer, TakeWorldOnline)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TakeWorldOnline )( 
            IVWServer * This,
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR);
        
        DECLSPEC_XFGVIRT(IVWServer, ReconnectToDS)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReconnectToDS )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IVWServer, RefreshDS)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RefreshDS )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IVWServer, OpenWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenWorld )( 
            IVWServer * This,
            /* [in] */ BSTR bstrWorldName,
            /* [out] */ BSTR *bstrHR);
        
        DECLSPEC_XFGVIRT(IVWServer, PerformanceTest)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *PerformanceTest )( 
            IVWServer * This,
            /* [in] */ BSTR bstrWorldName,
            /* [in] */ long iType,
            /* [out] */ BSTR *bstrHR);
        
        DECLSPEC_XFGVIRT(IVWServer, ClearPerformanceCounters)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearPerformanceCounters )( 
            IVWServer * This);
        
        DECLSPEC_XFGVIRT(IVWServer, get_UseAuthentication)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_UseAuthentication )( 
            IVWServer * This,
            /* [retval][out] */ BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IVWServer, put_UseAuthentication)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_UseAuthentication )( 
            IVWServer * This,
            /* [in] */ BOOL newVal);
        
        DECLSPEC_XFGVIRT(IVWServer, get_AuthenticationGroup)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationGroup )( 
            IVWServer * This,
            /* [retval][out] */ BSTR *bstrGroup);
        
        DECLSPEC_XFGVIRT(IVWServer, put_AuthenticationGroup)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationGroup )( 
            IVWServer * This,
            /* [in] */ BSTR bstrGroup);
        
        DECLSPEC_XFGVIRT(IVWServer, get_RunningOnWinNT)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_RunningOnWinNT )( 
            IVWServer * This,
            /* [retval][out] */ BOOL *pbRunningOnWinNT);
        
        DECLSPEC_XFGVIRT(IVWServer, get_ConnectionLimit)
        /* [helpstring][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionLimit )( 
            IVWServer * This,
            /* [retval][out] */ DWORD *dwLimit);
        
        DECLSPEC_XFGVIRT(IVWServer, put_ConnectionLimit)
        /* [helpstring][restricted][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionLimit )( 
            IVWServer * This,
            /* [in] */ DWORD dwLimit);
        
        DECLSPEC_XFGVIRT(IVWServer, get_ConnectionCount)
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionCount )( 
            IVWServer * This,
            /* [retval][out] */ long *pCount);
        
        END_INTERFACE
    } IVWServerVtbl;

    interface IVWServer
    {
        CONST_VTBL struct IVWServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWServer_Accept(This,iPort,iOptionalCallbackWindowHandle)	\
    ( (This)->lpVtbl -> Accept(This,iPort,iOptionalCallbackWindowHandle) ) 

#define IVWServer_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IVWServer_DisconnectWarning(This)	\
    ( (This)->lpVtbl -> DisconnectWarning(This) ) 

#define IVWServer_DisconnectCancel(This)	\
    ( (This)->lpVtbl -> DisconnectCancel(This) ) 

#define IVWServer_ShutDown(This)	\
    ( (This)->lpVtbl -> ShutDown(This) ) 

#define IVWServer_TestQueue(This)	\
    ( (This)->lpVtbl -> TestQueue(This) ) 

#define IVWServer_GetStatusInfo(This,queuesize,totalRequests,bstrWorldsInfo,totalConnections,pbIsDSConnected)	\
    ( (This)->lpVtbl -> GetStatusInfo(This,queuesize,totalRequests,bstrWorldsInfo,totalConnections,pbIsDSConnected) ) 

#define IVWServer_CreateToolFromProgID(This,name,progid,ppunk)	\
    ( (This)->lpVtbl -> CreateToolFromProgID(This,name,progid,ppunk) ) 

#define IVWServer_RemoveTool(This,name)	\
    ( (This)->lpVtbl -> RemoveTool(This,name) ) 

#define IVWServer_get_Tool(This,name,ppunk)	\
    ( (This)->lpVtbl -> get_Tool(This,name,ppunk) ) 

#define IVWServer_get_Tools(This,pppropmap)	\
    ( (This)->lpVtbl -> get_Tools(This,pppropmap) ) 

#define IVWServer_EnumerateWorlds(This,ppGUIDList)	\
    ( (This)->lpVtbl -> EnumerateWorlds(This,ppGUIDList) ) 

#define IVWServer_SaveWorld(This,bstrWorldName,bstrHR)	\
    ( (This)->lpVtbl -> SaveWorld(This,bstrWorldName,bstrHR) ) 

#define IVWServer_SaveWorldAs(This,bstrWorldName,bstrNewWorldName,bstrHR)	\
    ( (This)->lpVtbl -> SaveWorldAs(This,bstrWorldName,bstrNewWorldName,bstrHR) ) 

#define IVWServer_SaveWorldScript(This,bstrWorldName,bstrScriptName,bstrHR)	\
    ( (This)->lpVtbl -> SaveWorldScript(This,bstrWorldName,bstrScriptName,bstrHR) ) 

#define IVWServer_GetSimpleStatus(This,bstrMsg)	\
    ( (This)->lpVtbl -> GetSimpleStatus(This,bstrMsg) ) 

#define IVWServer_DeleteWorldFromSystem(This,bstrWorldName,bstrHR)	\
    ( (This)->lpVtbl -> DeleteWorldFromSystem(This,bstrWorldName,bstrHR) ) 

#define IVWServer_TakeWorldOffline(This,bstrWorldName,bstrHR)	\
    ( (This)->lpVtbl -> TakeWorldOffline(This,bstrWorldName,bstrHR) ) 

#define IVWServer_TakeWorldOnline(This,bstrWorldName,bstrHR)	\
    ( (This)->lpVtbl -> TakeWorldOnline(This,bstrWorldName,bstrHR) ) 

#define IVWServer_ReconnectToDS(This)	\
    ( (This)->lpVtbl -> ReconnectToDS(This) ) 

#define IVWServer_RefreshDS(This)	\
    ( (This)->lpVtbl -> RefreshDS(This) ) 

#define IVWServer_OpenWorld(This,bstrWorldName,bstrHR)	\
    ( (This)->lpVtbl -> OpenWorld(This,bstrWorldName,bstrHR) ) 

#define IVWServer_PerformanceTest(This,bstrWorldName,iType,bstrHR)	\
    ( (This)->lpVtbl -> PerformanceTest(This,bstrWorldName,iType,bstrHR) ) 

#define IVWServer_ClearPerformanceCounters(This)	\
    ( (This)->lpVtbl -> ClearPerformanceCounters(This) ) 

#define IVWServer_get_UseAuthentication(This,pVal)	\
    ( (This)->lpVtbl -> get_UseAuthentication(This,pVal) ) 

#define IVWServer_put_UseAuthentication(This,newVal)	\
    ( (This)->lpVtbl -> put_UseAuthentication(This,newVal) ) 

#define IVWServer_get_AuthenticationGroup(This,bstrGroup)	\
    ( (This)->lpVtbl -> get_AuthenticationGroup(This,bstrGroup) ) 

#define IVWServer_put_AuthenticationGroup(This,bstrGroup)	\
    ( (This)->lpVtbl -> put_AuthenticationGroup(This,bstrGroup) ) 

#define IVWServer_get_RunningOnWinNT(This,pbRunningOnWinNT)	\
    ( (This)->lpVtbl -> get_RunningOnWinNT(This,pbRunningOnWinNT) ) 

#define IVWServer_get_ConnectionLimit(This,dwLimit)	\
    ( (This)->lpVtbl -> get_ConnectionLimit(This,dwLimit) ) 

#define IVWServer_put_ConnectionLimit(This,dwLimit)	\
    ( (This)->lpVtbl -> put_ConnectionLimit(This,dwLimit) ) 

#define IVWServer_get_ConnectionCount(This,pCount)	\
    ( (This)->lpVtbl -> get_ConnectionCount(This,pCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWServer_INTERFACE_DEFINED__ */


#ifndef __DVWServerEvents_INTERFACE_DEFINED__
#define __DVWServerEvents_INTERFACE_DEFINED__

/* interface DVWServerEvents */
/* [unique][local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_DVWServerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F8584900-00F4-11D0-A516-00AA00B595DB")
    DVWServerEvents : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnWorldLoaded( 
            /* [in] */ BSTR bstrWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnWorldUnloaded( 
            /* [in] */ BSTR bstrWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnConnect( 
            /* [in] */ DWORD hConnection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnDisconnect( 
            /* [in] */ DWORD hConnection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnEnterWorld( 
            /* [in] */ DWORD hConnection,
            /* [in] */ BSTR bstrWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLeaveWorld( 
            /* [in] */ DWORD hConnection,
            /* [in] */ BSTR bstrWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnCommError( 
            /* [in] */ DWORD hConnection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnCommMessage( 
            /* [in] */ DWORD hConnection,
            /* [in] */ BSTR bstrMessage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnReport( 
            /* [in] */ BSTR bstr,
            /* [in] */ long lType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnTrace( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnAvailableWorld( 
            /* [in] */ BSTR bstrName,
            /* [in] */ int iNoUsers) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct DVWServerEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DVWServerEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DVWServerEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DVWServerEvents * This);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnWorldLoaded)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnWorldLoaded )( 
            DVWServerEvents * This,
            /* [in] */ BSTR bstrWorld);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnWorldUnloaded)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnWorldUnloaded )( 
            DVWServerEvents * This,
            /* [in] */ BSTR bstrWorld);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnConnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnConnect )( 
            DVWServerEvents * This,
            /* [in] */ DWORD hConnection);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnDisconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnDisconnect )( 
            DVWServerEvents * This,
            /* [in] */ DWORD hConnection);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnEnterWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnEnterWorld )( 
            DVWServerEvents * This,
            /* [in] */ DWORD hConnection,
            /* [in] */ BSTR bstrWorld);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnLeaveWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLeaveWorld )( 
            DVWServerEvents * This,
            /* [in] */ DWORD hConnection,
            /* [in] */ BSTR bstrWorld);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnCommError)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnCommError )( 
            DVWServerEvents * This,
            /* [in] */ DWORD hConnection);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnCommMessage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnCommMessage )( 
            DVWServerEvents * This,
            /* [in] */ DWORD hConnection,
            /* [in] */ BSTR bstrMessage);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnReport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnReport )( 
            DVWServerEvents * This,
            /* [in] */ BSTR bstr,
            /* [in] */ long lType);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnTrace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnTrace )( 
            DVWServerEvents * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(DVWServerEvents, OnAvailableWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnAvailableWorld )( 
            DVWServerEvents * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ int iNoUsers);
        
        END_INTERFACE
    } DVWServerEventsVtbl;

    interface DVWServerEvents
    {
        CONST_VTBL struct DVWServerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DVWServerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define DVWServerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define DVWServerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define DVWServerEvents_OnWorldLoaded(This,bstrWorld)	\
    ( (This)->lpVtbl -> OnWorldLoaded(This,bstrWorld) ) 

#define DVWServerEvents_OnWorldUnloaded(This,bstrWorld)	\
    ( (This)->lpVtbl -> OnWorldUnloaded(This,bstrWorld) ) 

#define DVWServerEvents_OnConnect(This,hConnection)	\
    ( (This)->lpVtbl -> OnConnect(This,hConnection) ) 

#define DVWServerEvents_OnDisconnect(This,hConnection)	\
    ( (This)->lpVtbl -> OnDisconnect(This,hConnection) ) 

#define DVWServerEvents_OnEnterWorld(This,hConnection,bstrWorld)	\
    ( (This)->lpVtbl -> OnEnterWorld(This,hConnection,bstrWorld) ) 

#define DVWServerEvents_OnLeaveWorld(This,hConnection,bstrWorld)	\
    ( (This)->lpVtbl -> OnLeaveWorld(This,hConnection,bstrWorld) ) 

#define DVWServerEvents_OnCommError(This,hConnection)	\
    ( (This)->lpVtbl -> OnCommError(This,hConnection) ) 

#define DVWServerEvents_OnCommMessage(This,hConnection,bstrMessage)	\
    ( (This)->lpVtbl -> OnCommMessage(This,hConnection,bstrMessage) ) 

#define DVWServerEvents_OnReport(This,bstr,lType)	\
    ( (This)->lpVtbl -> OnReport(This,bstr,lType) ) 

#define DVWServerEvents_OnTrace(This,bstr)	\
    ( (This)->lpVtbl -> OnTrace(This,bstr) ) 

#define DVWServerEvents_OnAvailableWorld(This,bstrName,iNoUsers)	\
    ( (This)->lpVtbl -> OnAvailableWorld(This,bstrName,iNoUsers) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __DVWServerEvents_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


