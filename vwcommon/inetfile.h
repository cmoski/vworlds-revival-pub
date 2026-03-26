

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/inetfile.idl:
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

#ifndef __inetfile_h__
#define __inetfile_h__

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

#ifndef __IDLThread_FWD_DEFINED__
#define __IDLThread_FWD_DEFINED__
typedef interface IDLThread IDLThread;

#endif 	/* __IDLThread_FWD_DEFINED__ */


#ifndef __IInternetFileManager_FWD_DEFINED__
#define __IInternetFileManager_FWD_DEFINED__
typedef interface IInternetFileManager IInternetFileManager;

#endif 	/* __IInternetFileManager_FWD_DEFINED__ */


#ifndef __IIFMCallback_FWD_DEFINED__
#define __IIFMCallback_FWD_DEFINED__
typedef interface IIFMCallback IIFMCallback;

#endif 	/* __IIFMCallback_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_inetfile_0000_0000 */
/* [local] */ 

#define INETFILE_E_FILENOTFOUND			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0d01)
#define INETFILE_E_INVALIDROOTURL		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0d02)




extern RPC_IF_HANDLE __MIDL_itf_inetfile_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inetfile_0000_0000_v0_0_s_ifspec;

#ifndef __IDLThread_INTERFACE_DEFINED__
#define __IDLThread_INTERFACE_DEFINED__

/* interface IDLThread */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDLThread;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E56BA8F-6B52-11D1-AFC7-00C04FB915AA")
    IDLThread : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Download( 
            /* [in] */ BSTR filename,
            /* [in] */ BSTR RootURL) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IInternetFileManager *pInetFile,
            /* [in] */ IIFMCallback *pCallback,
            /* [in] */ long lCookie) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDLThreadVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDLThread * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDLThread * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDLThread * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDLThread * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDLThread * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDLThread * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDLThread * This,
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
        
        DECLSPEC_XFGVIRT(IDLThread, Download)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Download )( 
            IDLThread * This,
            /* [in] */ BSTR filename,
            /* [in] */ BSTR RootURL);
        
        DECLSPEC_XFGVIRT(IDLThread, AddCallback)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IDLThread * This,
            /* [in] */ IInternetFileManager *pInetFile,
            /* [in] */ IIFMCallback *pCallback,
            /* [in] */ long lCookie);
        
        DECLSPEC_XFGVIRT(IDLThread, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IDLThread * This);
        
        END_INTERFACE
    } IDLThreadVtbl;

    interface IDLThread
    {
        CONST_VTBL struct IDLThreadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDLThread_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDLThread_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDLThread_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDLThread_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDLThread_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDLThread_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDLThread_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDLThread_Download(This,filename,RootURL)	\
    ( (This)->lpVtbl -> Download(This,filename,RootURL) ) 

#define IDLThread_AddCallback(This,pInetFile,pCallback,lCookie)	\
    ( (This)->lpVtbl -> AddCallback(This,pInetFile,pCallback,lCookie) ) 

#define IDLThread_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDLThread_INTERFACE_DEFINED__ */


#ifndef __IInternetFileManager_INTERFACE_DEFINED__
#define __IInternetFileManager_INTERFACE_DEFINED__

/* interface IInternetFileManager */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IInternetFileManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("120113DC-E936-11CF-87BD-00AA00B4DF93")
    IInternetFileManager : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RootURL( 
            /* [retval][out] */ BSTR *bstrRootURL) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RootURL( 
            /* [in] */ BSTR bstrRootURL) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetFileEx( 
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL bCheckCache,
            /* [out] */ BSTR *pbstrFinalURL,
            /* [retval][out] */ BSTR *pbstrFinalPath) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFile( 
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL bCheckCache,
            /* [retval][out] */ BSTR *pbstrFinalPath) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetFileAsync( 
            /* [in] */ BSTR bstrURL,
            /* [in] */ long lCookie,
            /* [in] */ IIFMCallback *pIFMCallback,
            VARIANT_BOOL bCheckCache) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CancelAllDownloads( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindCachedFile( 
            /* [in] */ BSTR bstrURL,
            /* [out] */ BSTR *pbstrFinalURL,
            /* [out] */ BSTR *pbstrFinalPath,
            /* [out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE FileDLDone( 
            /* [in] */ BSTR bstrFilename) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Test( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInternetFileManagerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInternetFileManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInternetFileManager * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInternetFileManager * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IInternetFileManager * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IInternetFileManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IInternetFileManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IInternetFileManager * This,
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
        
        DECLSPEC_XFGVIRT(IInternetFileManager, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IInternetFileManager * This);
        
        DECLSPEC_XFGVIRT(IInternetFileManager, get_RootURL)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootURL )( 
            IInternetFileManager * This,
            /* [retval][out] */ BSTR *bstrRootURL);
        
        DECLSPEC_XFGVIRT(IInternetFileManager, put_RootURL)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RootURL )( 
            IInternetFileManager * This,
            /* [in] */ BSTR bstrRootURL);
        
        DECLSPEC_XFGVIRT(IInternetFileManager, GetFileEx)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetFileEx )( 
            IInternetFileManager * This,
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL bCheckCache,
            /* [out] */ BSTR *pbstrFinalURL,
            /* [retval][out] */ BSTR *pbstrFinalPath);
        
        DECLSPEC_XFGVIRT(IInternetFileManager, GetFile)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFile )( 
            IInternetFileManager * This,
            /* [in] */ BSTR bstrURL,
            /* [in] */ VARIANT_BOOL bCheckCache,
            /* [retval][out] */ BSTR *pbstrFinalPath);
        
        DECLSPEC_XFGVIRT(IInternetFileManager, GetFileAsync)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetFileAsync )( 
            IInternetFileManager * This,
            /* [in] */ BSTR bstrURL,
            /* [in] */ long lCookie,
            /* [in] */ IIFMCallback *pIFMCallback,
            VARIANT_BOOL bCheckCache);
        
        DECLSPEC_XFGVIRT(IInternetFileManager, CancelAllDownloads)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CancelAllDownloads )( 
            IInternetFileManager * This);
        
        DECLSPEC_XFGVIRT(IInternetFileManager, FindCachedFile)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindCachedFile )( 
            IInternetFileManager * This,
            /* [in] */ BSTR bstrURL,
            /* [out] */ BSTR *pbstrFinalURL,
            /* [out] */ BSTR *pbstrFinalPath,
            /* [out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IInternetFileManager, FileDLDone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *FileDLDone )( 
            IInternetFileManager * This,
            /* [in] */ BSTR bstrFilename);
        
        DECLSPEC_XFGVIRT(IInternetFileManager, Test)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Test )( 
            IInternetFileManager * This);
        
        END_INTERFACE
    } IInternetFileManagerVtbl;

    interface IInternetFileManager
    {
        CONST_VTBL struct IInternetFileManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInternetFileManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInternetFileManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInternetFileManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInternetFileManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IInternetFileManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IInternetFileManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IInternetFileManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IInternetFileManager_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IInternetFileManager_get_RootURL(This,bstrRootURL)	\
    ( (This)->lpVtbl -> get_RootURL(This,bstrRootURL) ) 

#define IInternetFileManager_put_RootURL(This,bstrRootURL)	\
    ( (This)->lpVtbl -> put_RootURL(This,bstrRootURL) ) 

#define IInternetFileManager_GetFileEx(This,bstrURL,bCheckCache,pbstrFinalURL,pbstrFinalPath)	\
    ( (This)->lpVtbl -> GetFileEx(This,bstrURL,bCheckCache,pbstrFinalURL,pbstrFinalPath) ) 

#define IInternetFileManager_GetFile(This,bstrURL,bCheckCache,pbstrFinalPath)	\
    ( (This)->lpVtbl -> GetFile(This,bstrURL,bCheckCache,pbstrFinalPath) ) 

#define IInternetFileManager_GetFileAsync(This,bstrURL,lCookie,pIFMCallback,bCheckCache)	\
    ( (This)->lpVtbl -> GetFileAsync(This,bstrURL,lCookie,pIFMCallback,bCheckCache) ) 

#define IInternetFileManager_CancelAllDownloads(This)	\
    ( (This)->lpVtbl -> CancelAllDownloads(This) ) 

#define IInternetFileManager_FindCachedFile(This,bstrURL,pbstrFinalURL,pbstrFinalPath,pbool)	\
    ( (This)->lpVtbl -> FindCachedFile(This,bstrURL,pbstrFinalURL,pbstrFinalPath,pbool) ) 

#define IInternetFileManager_FileDLDone(This,bstrFilename)	\
    ( (This)->lpVtbl -> FileDLDone(This,bstrFilename) ) 

#define IInternetFileManager_Test(This)	\
    ( (This)->lpVtbl -> Test(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInternetFileManager_INTERFACE_DEFINED__ */


#ifndef __IIFMCallback_INTERFACE_DEFINED__
#define __IIFMCallback_INTERFACE_DEFINED__

/* interface IIFMCallback */
/* [unique][helpstring][uuid][local][object] */ 


EXTERN_C const IID IID_IIFMCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("120113DE-E936-11CF-87BD-00AA00B4DF93")
    IIFMCallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnProgress_T2( 
            /* [in] */ ULONG ulProgress,
            /* [in] */ ULONG ulProgressMax,
            /* [in] */ long lCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnDone_T2( 
            /* [in] */ HRESULT hresult,
            /* [in] */ BSTR bstrFinalPath,
            /* [in] */ long lCookie,
            /* [in] */ BSTR bstrFullURL) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIFMCallbackVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIFMCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIFMCallback * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIFMCallback * This);
        
        DECLSPEC_XFGVIRT(IIFMCallback, OnProgress_T2)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnProgress_T2 )( 
            IIFMCallback * This,
            /* [in] */ ULONG ulProgress,
            /* [in] */ ULONG ulProgressMax,
            /* [in] */ long lCookie);
        
        DECLSPEC_XFGVIRT(IIFMCallback, OnDone_T2)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnDone_T2 )( 
            IIFMCallback * This,
            /* [in] */ HRESULT hresult,
            /* [in] */ BSTR bstrFinalPath,
            /* [in] */ long lCookie,
            /* [in] */ BSTR bstrFullURL);
        
        END_INTERFACE
    } IIFMCallbackVtbl;

    interface IIFMCallback
    {
        CONST_VTBL struct IIFMCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIFMCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIFMCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIFMCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIFMCallback_OnProgress_T2(This,ulProgress,ulProgressMax,lCookie)	\
    ( (This)->lpVtbl -> OnProgress_T2(This,ulProgress,ulProgressMax,lCookie) ) 

#define IIFMCallback_OnDone_T2(This,hresult,bstrFinalPath,lCookie,bstrFullURL)	\
    ( (This)->lpVtbl -> OnDone_T2(This,hresult,bstrFinalPath,lCookie,bstrFullURL) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIFMCallback_INTERFACE_DEFINED__ */


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


