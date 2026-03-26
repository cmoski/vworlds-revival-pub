

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwcomm.idl:
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

#ifndef __vwcomm_h__
#define __vwcomm_h__

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

#ifndef __IVWComm_FWD_DEFINED__
#define __IVWComm_FWD_DEFINED__
typedef interface IVWComm IVWComm;

#endif 	/* __IVWComm_FWD_DEFINED__ */


#ifndef __IVWCommSite_FWD_DEFINED__
#define __IVWCommSite_FWD_DEFINED__
typedef interface IVWCommSite IVWCommSite;

#endif 	/* __IVWCommSite_FWD_DEFINED__ */


#ifndef __IVWCommConnection_FWD_DEFINED__
#define __IVWCommConnection_FWD_DEFINED__
typedef interface IVWCommConnection IVWCommConnection;

#endif 	/* __IVWCommConnection_FWD_DEFINED__ */


#ifndef __IVWCommMessage_FWD_DEFINED__
#define __IVWCommMessage_FWD_DEFINED__
typedef interface IVWCommMessage IVWCommMessage;

#endif 	/* __IVWCommMessage_FWD_DEFINED__ */


/* header files for imported files */
#include "vwbuffer.h"
#include "authntic.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwcomm_0000_0000 */
/* [local] */ 

#define VWCOMM_E_COULDNTCONNECT			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0501)
#define VWCOMM_E_COULDNTACCEPT			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0502)
#define VWCOMM_E_NOTINITIALIZED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0503)
#define VWCOMM_E_INVALIDCONFIGURATION	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0504)
#define VWCOMM_E_UNKNOWNERROR			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0505)
#define VWCOMM_E_INVALIDPARAMETER		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0506)
#define VWCOMM_E_INTERNALTIMEOUT			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0507)
#define VWCOMM_E_ERRORDURINGSYNCHWRITE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0508)
#define VWCOMM_E_NOMESSAGES				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0509)
#define VWCOMM_E_CONNECTIONNOTFOUND		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x050A)
#define VWCOMM_E_INVALIDSOCKET			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x050B)
#define VWCOMM_E_IMPROPERSTATE			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x050C)
#define VWCOMM_E_WINSOCKERROR			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x050D)
#define VWCOMM_E_COULDNTINITIALIZE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x050E)
#define VWCOMM_E_ALREADYINWRITESYNCH		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x050F)





extern RPC_IF_HANDLE __MIDL_itf_vwcomm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwcomm_0000_0000_v0_0_s_ifspec;

#ifndef __IVWComm_INTERFACE_DEFINED__
#define __IVWComm_INTERFACE_DEFINED__

/* interface IVWComm */
/* [unique][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVWComm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1918680-dbe4-11cf-a516-00aa00b595db")
    IVWComm : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IVWCommSite *pICommSite) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ LPSTR psz,
            /* [in] */ int iPort,
            /* [in] */ VARIANT_BOOL bTunnel,
            /* [out] */ IVWCommConnection **ppICommConnection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisconnectAll( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Accept( 
            /* [in] */ int iPort) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMessage( 
            /* [out] */ IVWCommMessage **pICommMessage) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HostName( 
            /* [retval][out] */ BSTR *pbstrVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE KeepAlive( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUsageStatistics( 
            /* [out] */ int *pcPacketsSent,
            /* [out] */ int *pcPacketsReceived,
            /* [out] */ int *pcBytesSent,
            /* [out] */ int *pcBytesReceived,
            /* [out] */ int *pcPacketsReceivedPerSecond,
            /* [out] */ int *pcBytesReceivedPerSecond,
            /* [out] */ int *pcPacketsSentPerSecond,
            /* [out] */ int *pcBytesSentPerSecond,
            /* [out] */ int *pcMeanPacketsInWriteQueue,
            /* [out] */ int *pcMeanMessagesInReadQueue,
            /* [out] */ int *pcMeanTimeInWriteQueue,
            /* [out] */ int *pcMeanTimeInReadQueue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWCommVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWComm * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWComm * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWComm * This);
        
        DECLSPEC_XFGVIRT(IVWComm, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWComm * This,
            /* [in] */ IVWCommSite *pICommSite);
        
        DECLSPEC_XFGVIRT(IVWComm, Terminate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWComm * This);
        
        DECLSPEC_XFGVIRT(IVWComm, Connect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IVWComm * This,
            /* [in] */ LPSTR psz,
            /* [in] */ int iPort,
            /* [in] */ VARIANT_BOOL bTunnel,
            /* [out] */ IVWCommConnection **ppICommConnection);
        
        DECLSPEC_XFGVIRT(IVWComm, DisconnectAll)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisconnectAll )( 
            IVWComm * This);
        
        DECLSPEC_XFGVIRT(IVWComm, Accept)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Accept )( 
            IVWComm * This,
            /* [in] */ int iPort);
        
        DECLSPEC_XFGVIRT(IVWComm, GetMessage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMessage )( 
            IVWComm * This,
            /* [out] */ IVWCommMessage **pICommMessage);
        
        DECLSPEC_XFGVIRT(IVWComm, get_HostName)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
            IVWComm * This,
            /* [retval][out] */ BSTR *pbstrVal);
        
        DECLSPEC_XFGVIRT(IVWComm, KeepAlive)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *KeepAlive )( 
            IVWComm * This);
        
        DECLSPEC_XFGVIRT(IVWComm, GetUsageStatistics)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUsageStatistics )( 
            IVWComm * This,
            /* [out] */ int *pcPacketsSent,
            /* [out] */ int *pcPacketsReceived,
            /* [out] */ int *pcBytesSent,
            /* [out] */ int *pcBytesReceived,
            /* [out] */ int *pcPacketsReceivedPerSecond,
            /* [out] */ int *pcBytesReceivedPerSecond,
            /* [out] */ int *pcPacketsSentPerSecond,
            /* [out] */ int *pcBytesSentPerSecond,
            /* [out] */ int *pcMeanPacketsInWriteQueue,
            /* [out] */ int *pcMeanMessagesInReadQueue,
            /* [out] */ int *pcMeanTimeInWriteQueue,
            /* [out] */ int *pcMeanTimeInReadQueue);
        
        END_INTERFACE
    } IVWCommVtbl;

    interface IVWComm
    {
        CONST_VTBL struct IVWCommVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWComm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWComm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWComm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWComm_Initialize(This,pICommSite)	\
    ( (This)->lpVtbl -> Initialize(This,pICommSite) ) 

#define IVWComm_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWComm_Connect(This,psz,iPort,bTunnel,ppICommConnection)	\
    ( (This)->lpVtbl -> Connect(This,psz,iPort,bTunnel,ppICommConnection) ) 

#define IVWComm_DisconnectAll(This)	\
    ( (This)->lpVtbl -> DisconnectAll(This) ) 

#define IVWComm_Accept(This,iPort)	\
    ( (This)->lpVtbl -> Accept(This,iPort) ) 

#define IVWComm_GetMessage(This,pICommMessage)	\
    ( (This)->lpVtbl -> GetMessage(This,pICommMessage) ) 

#define IVWComm_get_HostName(This,pbstrVal)	\
    ( (This)->lpVtbl -> get_HostName(This,pbstrVal) ) 

#define IVWComm_KeepAlive(This)	\
    ( (This)->lpVtbl -> KeepAlive(This) ) 

#define IVWComm_GetUsageStatistics(This,pcPacketsSent,pcPacketsReceived,pcBytesSent,pcBytesReceived,pcPacketsReceivedPerSecond,pcBytesReceivedPerSecond,pcPacketsSentPerSecond,pcBytesSentPerSecond,pcMeanPacketsInWriteQueue,pcMeanMessagesInReadQueue,pcMeanTimeInWriteQueue,pcMeanTimeInReadQueue)	\
    ( (This)->lpVtbl -> GetUsageStatistics(This,pcPacketsSent,pcPacketsReceived,pcBytesSent,pcBytesReceived,pcPacketsReceivedPerSecond,pcBytesReceivedPerSecond,pcPacketsSentPerSecond,pcBytesSentPerSecond,pcMeanPacketsInWriteQueue,pcMeanMessagesInReadQueue,pcMeanTimeInWriteQueue,pcMeanTimeInReadQueue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWComm_INTERFACE_DEFINED__ */


#ifndef __IVWCommSite_INTERFACE_DEFINED__
#define __IVWCommSite_INTERFACE_DEFINED__

/* interface IVWCommSite */
/* [unique][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVWCommSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1918682-dbe4-11cf-a516-00aa00b595db")
    IVWCommSite : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnMessageAvailable( 
            IVWComm *__MIDL__IVWCommSite0000) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnMessageAvailable_T2( 
            IVWComm *__MIDL__IVWCommSite0001) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWCommSiteVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWCommSite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWCommSite * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWCommSite * This);
        
        DECLSPEC_XFGVIRT(IVWCommSite, OnMessageAvailable)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMessageAvailable )( 
            IVWCommSite * This,
            IVWComm *__MIDL__IVWCommSite0000);
        
        DECLSPEC_XFGVIRT(IVWCommSite, OnMessageAvailable_T2)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMessageAvailable_T2 )( 
            IVWCommSite * This,
            IVWComm *__MIDL__IVWCommSite0001);
        
        END_INTERFACE
    } IVWCommSiteVtbl;

    interface IVWCommSite
    {
        CONST_VTBL struct IVWCommSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWCommSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWCommSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWCommSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWCommSite_OnMessageAvailable(This,__MIDL__IVWCommSite0000)	\
    ( (This)->lpVtbl -> OnMessageAvailable(This,__MIDL__IVWCommSite0000) ) 

#define IVWCommSite_OnMessageAvailable_T2(This,__MIDL__IVWCommSite0001)	\
    ( (This)->lpVtbl -> OnMessageAvailable_T2(This,__MIDL__IVWCommSite0001) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWCommSite_INTERFACE_DEFINED__ */


#ifndef __IVWCommConnection_INTERFACE_DEFINED__
#define __IVWCommConnection_INTERFACE_DEFINED__

/* interface IVWCommConnection */
/* [unique][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVWCommConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1918686-dbe4-11cf-a516-00aa00b595db")
    IVWCommConnection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendAsync( 
            /* [in] */ IMarshallBuffer *pcb) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendAsyncExt( 
            /* [in] */ IMarshallBuffer *pcb,
            /* [in] */ int cConnections,
            /* [size_is][in] */ IVWCommConnection *rgpconn[  ]) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendSync( 
            /* [in] */ IMarshallBuffer *pcb,
            /* [out] */ IUnMarshallBuffer **ppcbReply) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SocketAddress( 
            /* [retval][out] */ BSTR *pbstrVal) = 0;
        
        virtual /* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE put_Authentication( 
            /* [in] */ IAuthentication *pauth) = 0;
        
        virtual /* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE get_Authentication( 
            /* [retval][out] */ IAuthentication **ppauth) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsAuthenticated( 
            /* [retval][out] */ VARIANT_BOOL *pbAuthenticated) = 0;
        
        virtual /* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE put_UserData( 
            /* [in] */ void *pvData) = 0;
        
        virtual /* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE get_UserData( 
            /* [retval][out] */ void **ppvData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWCommConnectionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWCommConnection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWCommConnection * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWCommConnection * This);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, SendAsync)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendAsync )( 
            IVWCommConnection * This,
            /* [in] */ IMarshallBuffer *pcb);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, SendAsyncExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendAsyncExt )( 
            IVWCommConnection * This,
            /* [in] */ IMarshallBuffer *pcb,
            /* [in] */ int cConnections,
            /* [size_is][in] */ IVWCommConnection *rgpconn[  ]);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, SendSync)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendSync )( 
            IVWCommConnection * This,
            /* [in] */ IMarshallBuffer *pcb,
            /* [out] */ IUnMarshallBuffer **ppcbReply);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, Disconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IVWCommConnection * This);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, get_SocketAddress)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SocketAddress )( 
            IVWCommConnection * This,
            /* [retval][out] */ BSTR *pbstrVal);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, put_Authentication)
        /* [helpstring][restricted][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Authentication )( 
            IVWCommConnection * This,
            /* [in] */ IAuthentication *pauth);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, get_Authentication)
        /* [helpstring][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Authentication )( 
            IVWCommConnection * This,
            /* [retval][out] */ IAuthentication **ppauth);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, get_IsAuthenticated)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAuthenticated )( 
            IVWCommConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pbAuthenticated);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, put_UserData)
        /* [helpstring][restricted][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserData )( 
            IVWCommConnection * This,
            /* [in] */ void *pvData);
        
        DECLSPEC_XFGVIRT(IVWCommConnection, get_UserData)
        /* [helpstring][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserData )( 
            IVWCommConnection * This,
            /* [retval][out] */ void **ppvData);
        
        END_INTERFACE
    } IVWCommConnectionVtbl;

    interface IVWCommConnection
    {
        CONST_VTBL struct IVWCommConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWCommConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWCommConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWCommConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWCommConnection_SendAsync(This,pcb)	\
    ( (This)->lpVtbl -> SendAsync(This,pcb) ) 

#define IVWCommConnection_SendAsyncExt(This,pcb,cConnections,rgpconn)	\
    ( (This)->lpVtbl -> SendAsyncExt(This,pcb,cConnections,rgpconn) ) 

#define IVWCommConnection_SendSync(This,pcb,ppcbReply)	\
    ( (This)->lpVtbl -> SendSync(This,pcb,ppcbReply) ) 

#define IVWCommConnection_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IVWCommConnection_get_SocketAddress(This,pbstrVal)	\
    ( (This)->lpVtbl -> get_SocketAddress(This,pbstrVal) ) 

#define IVWCommConnection_put_Authentication(This,pauth)	\
    ( (This)->lpVtbl -> put_Authentication(This,pauth) ) 

#define IVWCommConnection_get_Authentication(This,ppauth)	\
    ( (This)->lpVtbl -> get_Authentication(This,ppauth) ) 

#define IVWCommConnection_get_IsAuthenticated(This,pbAuthenticated)	\
    ( (This)->lpVtbl -> get_IsAuthenticated(This,pbAuthenticated) ) 

#define IVWCommConnection_put_UserData(This,pvData)	\
    ( (This)->lpVtbl -> put_UserData(This,pvData) ) 

#define IVWCommConnection_get_UserData(This,ppvData)	\
    ( (This)->lpVtbl -> get_UserData(This,ppvData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWCommConnection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vwcomm_0000_0003 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("c191868A-dbe4-11cf-a516-00aa00b595db") 
enum MsgStatusConstant
    {
        mscOk	= 0,
        mscReadError	= 1,
        mscWriteError	= 2,
        mscAcceptError	= 3,
        mscConnect	= 4,
        mscDisconnect	= 5,
        mscDirtyDisconnect	= 6,
        mscOutOfMemory	= 7,
        mscEvilUser	= 8
    } 	MsgStatusConstant;



extern RPC_IF_HANDLE __MIDL_itf_vwcomm_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwcomm_0000_0003_v0_0_s_ifspec;

#ifndef __IVWCommMessage_INTERFACE_DEFINED__
#define __IVWCommMessage_INTERFACE_DEFINED__

/* interface IVWCommMessage */
/* [unique][local][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVWCommMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1918688-dbe4-11cf-a516-00aa00b595db")
    IVWCommMessage : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ int *pnStatus) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConnection( 
            /* [out] */ IVWCommConnection **ppIVWCommConnection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ IUnMarshallBuffer **ppbuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSynchronous( 
            /* [out] */ VARIANT_BOOL *pbSync) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reply( 
            /* [in] */ IMarshallBuffer *pbuffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWCommMessageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWCommMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWCommMessage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWCommMessage * This);
        
        DECLSPEC_XFGVIRT(IVWCommMessage, GetStatus)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IVWCommMessage * This,
            /* [out] */ int *pnStatus);
        
        DECLSPEC_XFGVIRT(IVWCommMessage, GetConnection)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConnection )( 
            IVWCommMessage * This,
            /* [out] */ IVWCommConnection **ppIVWCommConnection);
        
        DECLSPEC_XFGVIRT(IVWCommMessage, GetData)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetData )( 
            IVWCommMessage * This,
            /* [out] */ IUnMarshallBuffer **ppbuffer);
        
        DECLSPEC_XFGVIRT(IVWCommMessage, GetSynchronous)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSynchronous )( 
            IVWCommMessage * This,
            /* [out] */ VARIANT_BOOL *pbSync);
        
        DECLSPEC_XFGVIRT(IVWCommMessage, Reply)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reply )( 
            IVWCommMessage * This,
            /* [in] */ IMarshallBuffer *pbuffer);
        
        END_INTERFACE
    } IVWCommMessageVtbl;

    interface IVWCommMessage
    {
        CONST_VTBL struct IVWCommMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWCommMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWCommMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWCommMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWCommMessage_GetStatus(This,pnStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,pnStatus) ) 

#define IVWCommMessage_GetConnection(This,ppIVWCommConnection)	\
    ( (This)->lpVtbl -> GetConnection(This,ppIVWCommConnection) ) 

#define IVWCommMessage_GetData(This,ppbuffer)	\
    ( (This)->lpVtbl -> GetData(This,ppbuffer) ) 

#define IVWCommMessage_GetSynchronous(This,pbSync)	\
    ( (This)->lpVtbl -> GetSynchronous(This,pbSync) ) 

#define IVWCommMessage_Reply(This,pbuffer)	\
    ( (This)->lpVtbl -> Reply(This,pbuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWCommMessage_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


