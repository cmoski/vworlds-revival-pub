

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/dirserv.idl:
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

#ifndef __dirserv_h__
#define __dirserv_h__

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

#ifndef __IDServ_FWD_DEFINED__
#define __IDServ_FWD_DEFINED__
typedef interface IDServ IDServ;

#endif 	/* __IDServ_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IDServ_INTERFACE_DEFINED__
#define __IDServ_INTERFACE_DEFINED__

/* interface IDServ */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDServ;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40A94350-9AE4-11D0-8587-00A0C90F2911")
    IDServ : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConnectEx2( 
            HWND hNotificationWindow,
            BSTR bstrLDAP) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConnectEx( 
            BSTR bstrLocation,
            BSTR bstrAdmin,
            BSTR bstrPasswd,
            HWND hNotificationWindow) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ BSTR *bstrMsg,
            /* [out] */ VARIANT_BOOL *pbIsDSConnected) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddWorld( 
            /* [in] */ BSTR bstrWorldGUID,
            /* [in] */ BSTR bstrWorldURL,
            /* [in] */ BSTR bstrWorldNoUsers,
            /* [in] */ BSTR bstrInfoURL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveWorld( 
            /* [in] */ BSTR bstrWorldGUID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddUser( 
            BSTR EmailName,
            BSTR InWorldAlias,
            BSTR ComputerName,
            BSTR Comment,
            BSTR bstrCurrentWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveUser( 
            /* [in] */ BSTR InWorldAlias) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LogUserOn( 
            /* [in] */ BSTR InWorldAlias) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LogUserOff( 
            /* [in] */ BSTR InWorldAlias) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindUser( 
            /* [in] */ BSTR inworldalias,
            /* [out] */ BSTR *emailname,
            /* [out] */ BSTR *computername,
            /* [out] */ BSTR *comment,
            /* [out] */ BSTR *bstrCurrentWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TestQueue( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumerateUsers( 
            HWND hNotificationWindow) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNextUser( 
            /* [out] */ BSTR *inworldalias,
            /* [out] */ BSTR *emailname,
            /* [out] */ BSTR *computername,
            /* [out] */ BSTR *comment,
            /* [out] */ BSTR *bstrCurrentWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsEnumerating( 
            /* [out] */ VARIANT_BOOL *bIsEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDServVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDServ * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDServ * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDServ * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDServ * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDServ * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDServ * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDServ * This,
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
        
        DECLSPEC_XFGVIRT(IDServ, ConnectEx2)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConnectEx2 )( 
            IDServ * This,
            HWND hNotificationWindow,
            BSTR bstrLDAP);
        
        DECLSPEC_XFGVIRT(IDServ, ConnectEx)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConnectEx )( 
            IDServ * This,
            BSTR bstrLocation,
            BSTR bstrAdmin,
            BSTR bstrPasswd,
            HWND hNotificationWindow);
        
        DECLSPEC_XFGVIRT(IDServ, Disconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IDServ * This);
        
        DECLSPEC_XFGVIRT(IDServ, GetStatus)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IDServ * This,
            /* [out] */ BSTR *bstrMsg,
            /* [out] */ VARIANT_BOOL *pbIsDSConnected);
        
        DECLSPEC_XFGVIRT(IDServ, AddWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddWorld )( 
            IDServ * This,
            /* [in] */ BSTR bstrWorldGUID,
            /* [in] */ BSTR bstrWorldURL,
            /* [in] */ BSTR bstrWorldNoUsers,
            /* [in] */ BSTR bstrInfoURL);
        
        DECLSPEC_XFGVIRT(IDServ, RemoveWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveWorld )( 
            IDServ * This,
            /* [in] */ BSTR bstrWorldGUID);
        
        DECLSPEC_XFGVIRT(IDServ, AddUser)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddUser )( 
            IDServ * This,
            BSTR EmailName,
            BSTR InWorldAlias,
            BSTR ComputerName,
            BSTR Comment,
            BSTR bstrCurrentWorld);
        
        DECLSPEC_XFGVIRT(IDServ, RemoveUser)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveUser )( 
            IDServ * This,
            /* [in] */ BSTR InWorldAlias);
        
        DECLSPEC_XFGVIRT(IDServ, LogUserOn)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LogUserOn )( 
            IDServ * This,
            /* [in] */ BSTR InWorldAlias);
        
        DECLSPEC_XFGVIRT(IDServ, LogUserOff)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LogUserOff )( 
            IDServ * This,
            /* [in] */ BSTR InWorldAlias);
        
        DECLSPEC_XFGVIRT(IDServ, FindUser)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindUser )( 
            IDServ * This,
            /* [in] */ BSTR inworldalias,
            /* [out] */ BSTR *emailname,
            /* [out] */ BSTR *computername,
            /* [out] */ BSTR *comment,
            /* [out] */ BSTR *bstrCurrentWorld);
        
        DECLSPEC_XFGVIRT(IDServ, TestQueue)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TestQueue )( 
            IDServ * This);
        
        DECLSPEC_XFGVIRT(IDServ, EnumerateUsers)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnumerateUsers )( 
            IDServ * This,
            HWND hNotificationWindow);
        
        DECLSPEC_XFGVIRT(IDServ, GetNextUser)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNextUser )( 
            IDServ * This,
            /* [out] */ BSTR *inworldalias,
            /* [out] */ BSTR *emailname,
            /* [out] */ BSTR *computername,
            /* [out] */ BSTR *comment,
            /* [out] */ BSTR *bstrCurrentWorld);
        
        DECLSPEC_XFGVIRT(IDServ, IsEnumerating)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsEnumerating )( 
            IDServ * This,
            /* [out] */ VARIANT_BOOL *bIsEnum);
        
        END_INTERFACE
    } IDServVtbl;

    interface IDServ
    {
        CONST_VTBL struct IDServVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDServ_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDServ_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDServ_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDServ_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDServ_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDServ_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDServ_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDServ_ConnectEx2(This,hNotificationWindow,bstrLDAP)	\
    ( (This)->lpVtbl -> ConnectEx2(This,hNotificationWindow,bstrLDAP) ) 

#define IDServ_ConnectEx(This,bstrLocation,bstrAdmin,bstrPasswd,hNotificationWindow)	\
    ( (This)->lpVtbl -> ConnectEx(This,bstrLocation,bstrAdmin,bstrPasswd,hNotificationWindow) ) 

#define IDServ_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IDServ_GetStatus(This,bstrMsg,pbIsDSConnected)	\
    ( (This)->lpVtbl -> GetStatus(This,bstrMsg,pbIsDSConnected) ) 

#define IDServ_AddWorld(This,bstrWorldGUID,bstrWorldURL,bstrWorldNoUsers,bstrInfoURL)	\
    ( (This)->lpVtbl -> AddWorld(This,bstrWorldGUID,bstrWorldURL,bstrWorldNoUsers,bstrInfoURL) ) 

#define IDServ_RemoveWorld(This,bstrWorldGUID)	\
    ( (This)->lpVtbl -> RemoveWorld(This,bstrWorldGUID) ) 

#define IDServ_AddUser(This,EmailName,InWorldAlias,ComputerName,Comment,bstrCurrentWorld)	\
    ( (This)->lpVtbl -> AddUser(This,EmailName,InWorldAlias,ComputerName,Comment,bstrCurrentWorld) ) 

#define IDServ_RemoveUser(This,InWorldAlias)	\
    ( (This)->lpVtbl -> RemoveUser(This,InWorldAlias) ) 

#define IDServ_LogUserOn(This,InWorldAlias)	\
    ( (This)->lpVtbl -> LogUserOn(This,InWorldAlias) ) 

#define IDServ_LogUserOff(This,InWorldAlias)	\
    ( (This)->lpVtbl -> LogUserOff(This,InWorldAlias) ) 

#define IDServ_FindUser(This,inworldalias,emailname,computername,comment,bstrCurrentWorld)	\
    ( (This)->lpVtbl -> FindUser(This,inworldalias,emailname,computername,comment,bstrCurrentWorld) ) 

#define IDServ_TestQueue(This)	\
    ( (This)->lpVtbl -> TestQueue(This) ) 

#define IDServ_EnumerateUsers(This,hNotificationWindow)	\
    ( (This)->lpVtbl -> EnumerateUsers(This,hNotificationWindow) ) 

#define IDServ_GetNextUser(This,inworldalias,emailname,computername,comment,bstrCurrentWorld)	\
    ( (This)->lpVtbl -> GetNextUser(This,inworldalias,emailname,computername,comment,bstrCurrentWorld) ) 

#define IDServ_IsEnumerating(This,bIsEnum)	\
    ( (This)->lpVtbl -> IsEnumerating(This,bIsEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDServ_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


