

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/authntic.idl:
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

#ifndef __authntic_h__
#define __authntic_h__

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

#ifndef __IVWAuthenticate_FWD_DEFINED__
#define __IVWAuthenticate_FWD_DEFINED__
typedef interface IVWAuthenticate IVWAuthenticate;

#endif 	/* __IVWAuthenticate_FWD_DEFINED__ */


#ifndef __IAuthentication_FWD_DEFINED__
#define __IAuthentication_FWD_DEFINED__
typedef interface IAuthentication IAuthentication;

#endif 	/* __IAuthentication_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_authntic_0000_0000 */
/* [local] */ 


#define SECURITY_WIN32
#include "sspi.h"
#ifndef SECHANDLEDEFINED
#define SECHANDLEDEFINED
typedef struct _SECHANDLE
    {
    unsigned long dwLower;
    unsigned long dwUpper;
    } 	SECHANDLE;

#endif


extern RPC_IF_HANDLE __MIDL_itf_authntic_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_authntic_0000_0000_v0_0_s_ifspec;

#ifndef __IVWAuthenticate_INTERFACE_DEFINED__
#define __IVWAuthenticate_INTERFACE_DEFINED__

/* interface IVWAuthenticate */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWAuthenticate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("955A1319-731F-11D1-9082-00C04FD91EFE")
    IVWAuthenticate : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateClientContext( 
            /* [in] */ IAuthentication *pauth,
            /* [in] */ VARIANT_BOOL bShowDialog,
            /* [retval][out] */ VARIANT_BOOL *pbDone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateServerContext( 
            /* [in] */ IAuthentication *pauth,
            /* [retval][out] */ VARIANT_BOOL *pbDone) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Package( 
            /* [retval][out] */ BSTR *pbstrVal) = 0;
        
        virtual /* [restricted][helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Package( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [restricted][helpstring][id] */ HRESULT STDMETHODCALLTYPE Terminate( 
            /* [in] */ IAuthentication *pauth) = 0;
        
        virtual /* [restricted][helpstring][id] */ HRESULT STDMETHODCALLTYPE Impersonate( 
            /* [in] */ IAuthentication *pauth) = 0;
        
        virtual /* [restricted][helpstring][id] */ HRESULT STDMETHODCALLTYPE RevertContext( 
            /* [in] */ IAuthentication *pauth) = 0;
        
        virtual /* [restricted][helpstring][id] */ HRESULT STDMETHODCALLTYPE IsGroupMember( 
            /* [in] */ IAuthentication *pauth,
            /* [in] */ BSTR bstrGroup,
            /* [retval][out] */ VARIANT_BOOL *pbIsMember) = 0;
        
        virtual /* [restricted][helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUserInfo( 
            /* [in] */ IAuthentication *pauth,
            /* [out] */ BSTR *pstrDomainAndName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWAuthenticateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWAuthenticate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWAuthenticate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWAuthenticate * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWAuthenticate * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWAuthenticate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWAuthenticate * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWAuthenticate * This,
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
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, GenerateClientContext)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateClientContext )( 
            IVWAuthenticate * This,
            /* [in] */ IAuthentication *pauth,
            /* [in] */ VARIANT_BOOL bShowDialog,
            /* [retval][out] */ VARIANT_BOOL *pbDone);
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, GenerateServerContext)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateServerContext )( 
            IVWAuthenticate * This,
            /* [in] */ IAuthentication *pauth,
            /* [retval][out] */ VARIANT_BOOL *pbDone);
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, get_Package)
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Package )( 
            IVWAuthenticate * This,
            /* [retval][out] */ BSTR *pbstrVal);
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, put_Package)
        /* [restricted][helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Package )( 
            IVWAuthenticate * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, Initialize)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWAuthenticate * This);
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, Terminate)
        /* [restricted][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWAuthenticate * This,
            /* [in] */ IAuthentication *pauth);
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, Impersonate)
        /* [restricted][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Impersonate )( 
            IVWAuthenticate * This,
            /* [in] */ IAuthentication *pauth);
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, RevertContext)
        /* [restricted][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RevertContext )( 
            IVWAuthenticate * This,
            /* [in] */ IAuthentication *pauth);
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, IsGroupMember)
        /* [restricted][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsGroupMember )( 
            IVWAuthenticate * This,
            /* [in] */ IAuthentication *pauth,
            /* [in] */ BSTR bstrGroup,
            /* [retval][out] */ VARIANT_BOOL *pbIsMember);
        
        DECLSPEC_XFGVIRT(IVWAuthenticate, GetUserInfo)
        /* [restricted][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo )( 
            IVWAuthenticate * This,
            /* [in] */ IAuthentication *pauth,
            /* [out] */ BSTR *pstrDomainAndName);
        
        END_INTERFACE
    } IVWAuthenticateVtbl;

    interface IVWAuthenticate
    {
        CONST_VTBL struct IVWAuthenticateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWAuthenticate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWAuthenticate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWAuthenticate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWAuthenticate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWAuthenticate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWAuthenticate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWAuthenticate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWAuthenticate_GenerateClientContext(This,pauth,bShowDialog,pbDone)	\
    ( (This)->lpVtbl -> GenerateClientContext(This,pauth,bShowDialog,pbDone) ) 

#define IVWAuthenticate_GenerateServerContext(This,pauth,pbDone)	\
    ( (This)->lpVtbl -> GenerateServerContext(This,pauth,pbDone) ) 

#define IVWAuthenticate_get_Package(This,pbstrVal)	\
    ( (This)->lpVtbl -> get_Package(This,pbstrVal) ) 

#define IVWAuthenticate_put_Package(This,newVal)	\
    ( (This)->lpVtbl -> put_Package(This,newVal) ) 

#define IVWAuthenticate_Initialize(This)	\
    ( (This)->lpVtbl -> Initialize(This) ) 

#define IVWAuthenticate_Terminate(This,pauth)	\
    ( (This)->lpVtbl -> Terminate(This,pauth) ) 

#define IVWAuthenticate_Impersonate(This,pauth)	\
    ( (This)->lpVtbl -> Impersonate(This,pauth) ) 

#define IVWAuthenticate_RevertContext(This,pauth)	\
    ( (This)->lpVtbl -> RevertContext(This,pauth) ) 

#define IVWAuthenticate_IsGroupMember(This,pauth,bstrGroup,pbIsMember)	\
    ( (This)->lpVtbl -> IsGroupMember(This,pauth,bstrGroup,pbIsMember) ) 

#define IVWAuthenticate_GetUserInfo(This,pauth,pstrDomainAndName)	\
    ( (This)->lpVtbl -> GetUserInfo(This,pauth,pstrDomainAndName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWAuthenticate_INTERFACE_DEFINED__ */


#ifndef __IAuthentication_INTERFACE_DEFINED__
#define __IAuthentication_INTERFACE_DEFINED__

/* interface IAuthentication */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAuthentication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D3CE78F-7323-11D1-9082-00C04FD91EFE")
    IAuthentication : public IDispatch
    {
    public:
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Initialized( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Initialized( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Authenticated( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Authenticated( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Credentials( 
            /* [retval][out] */ SECHANDLE *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Credentials( 
            /* [in] */ SECHANDLE newVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Context( 
            /* [retval][out] */ SECHANDLE *pVal) = 0;
        
        virtual /* [restricted][helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Context( 
            /* [in] */ SECHANDLE newVal) = 0;
        
        virtual /* [restricted][helpstring][id] */ HRESULT STDMETHODCALLTYPE SetBlob( 
            /* [in] */ BYTE *pvBlob,
            /* [in] */ int cbBlob) = 0;
        
        virtual /* [restricted][helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBlobLength( 
            /* [out] */ int *pcbBlob) = 0;
        
        virtual /* [restricted][helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyBlob( 
            /* [in] */ BYTE *pbDest) = 0;
        
        virtual /* [restricted][helpstring][id] */ HRESULT STDMETHODCALLTYPE SetUserInfo( 
            /* [in] */ BSTR bstrUser,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ BSTR bstrDomain) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthenticationData( 
            /* [retval][out] */ BYTE **ppVal) = 0;
        
        virtual /* [restricted][helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Authenticate( 
            /* [in] */ IVWAuthenticate *newVal) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthenticationInfo( 
            /* [retval][out] */ BSTR *pbstrVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAuthenticationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAuthentication * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAuthentication * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAuthentication * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAuthentication * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAuthentication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAuthentication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAuthentication * This,
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
        
        DECLSPEC_XFGVIRT(IAuthentication, get_Initialized)
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Initialized )( 
            IAuthentication * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, put_Initialized)
        /* [restricted][helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Initialized )( 
            IAuthentication * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, get_Authenticated)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Authenticated )( 
            IAuthentication * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, put_Authenticated)
        /* [restricted][helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Authenticated )( 
            IAuthentication * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, get_Credentials)
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Credentials )( 
            IAuthentication * This,
            /* [retval][out] */ SECHANDLE *pVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, put_Credentials)
        /* [restricted][helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Credentials )( 
            IAuthentication * This,
            /* [in] */ SECHANDLE newVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, get_Context)
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Context )( 
            IAuthentication * This,
            /* [retval][out] */ SECHANDLE *pVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, put_Context)
        /* [restricted][helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Context )( 
            IAuthentication * This,
            /* [in] */ SECHANDLE newVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, SetBlob)
        /* [restricted][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetBlob )( 
            IAuthentication * This,
            /* [in] */ BYTE *pvBlob,
            /* [in] */ int cbBlob);
        
        DECLSPEC_XFGVIRT(IAuthentication, GetBlobLength)
        /* [restricted][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBlobLength )( 
            IAuthentication * This,
            /* [out] */ int *pcbBlob);
        
        DECLSPEC_XFGVIRT(IAuthentication, CopyBlob)
        /* [restricted][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyBlob )( 
            IAuthentication * This,
            /* [in] */ BYTE *pbDest);
        
        DECLSPEC_XFGVIRT(IAuthentication, SetUserInfo)
        /* [restricted][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetUserInfo )( 
            IAuthentication * This,
            /* [in] */ BSTR bstrUser,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ BSTR bstrDomain);
        
        DECLSPEC_XFGVIRT(IAuthentication, get_AuthenticationData)
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationData )( 
            IAuthentication * This,
            /* [retval][out] */ BYTE **ppVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, put_Authenticate)
        /* [restricted][helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Authenticate )( 
            IAuthentication * This,
            /* [in] */ IVWAuthenticate *newVal);
        
        DECLSPEC_XFGVIRT(IAuthentication, get_AuthenticationInfo)
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationInfo )( 
            IAuthentication * This,
            /* [retval][out] */ BSTR *pbstrVal);
        
        END_INTERFACE
    } IAuthenticationVtbl;

    interface IAuthentication
    {
        CONST_VTBL struct IAuthenticationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAuthentication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAuthentication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAuthentication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAuthentication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAuthentication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAuthentication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAuthentication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAuthentication_get_Initialized(This,pVal)	\
    ( (This)->lpVtbl -> get_Initialized(This,pVal) ) 

#define IAuthentication_put_Initialized(This,newVal)	\
    ( (This)->lpVtbl -> put_Initialized(This,newVal) ) 

#define IAuthentication_get_Authenticated(This,pVal)	\
    ( (This)->lpVtbl -> get_Authenticated(This,pVal) ) 

#define IAuthentication_put_Authenticated(This,newVal)	\
    ( (This)->lpVtbl -> put_Authenticated(This,newVal) ) 

#define IAuthentication_get_Credentials(This,pVal)	\
    ( (This)->lpVtbl -> get_Credentials(This,pVal) ) 

#define IAuthentication_put_Credentials(This,newVal)	\
    ( (This)->lpVtbl -> put_Credentials(This,newVal) ) 

#define IAuthentication_get_Context(This,pVal)	\
    ( (This)->lpVtbl -> get_Context(This,pVal) ) 

#define IAuthentication_put_Context(This,newVal)	\
    ( (This)->lpVtbl -> put_Context(This,newVal) ) 

#define IAuthentication_SetBlob(This,pvBlob,cbBlob)	\
    ( (This)->lpVtbl -> SetBlob(This,pvBlob,cbBlob) ) 

#define IAuthentication_GetBlobLength(This,pcbBlob)	\
    ( (This)->lpVtbl -> GetBlobLength(This,pcbBlob) ) 

#define IAuthentication_CopyBlob(This,pbDest)	\
    ( (This)->lpVtbl -> CopyBlob(This,pbDest) ) 

#define IAuthentication_SetUserInfo(This,bstrUser,bstrPassword,bstrDomain)	\
    ( (This)->lpVtbl -> SetUserInfo(This,bstrUser,bstrPassword,bstrDomain) ) 

#define IAuthentication_get_AuthenticationData(This,ppVal)	\
    ( (This)->lpVtbl -> get_AuthenticationData(This,ppVal) ) 

#define IAuthentication_put_Authenticate(This,newVal)	\
    ( (This)->lpVtbl -> put_Authenticate(This,newVal) ) 

#define IAuthentication_get_AuthenticationInfo(This,pbstrVal)	\
    ( (This)->lpVtbl -> get_AuthenticationInfo(This,pbstrVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAuthentication_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


