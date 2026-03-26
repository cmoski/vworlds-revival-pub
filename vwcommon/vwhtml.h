

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwhtml.idl:
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

#ifndef __vwhtml_h__
#define __vwhtml_h__

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

#ifndef __IVWHtml_FWD_DEFINED__
#define __IVWHtml_FWD_DEFINED__
typedef interface IVWHtml IVWHtml;

#endif 	/* __IVWHtml_FWD_DEFINED__ */


#ifndef __IVWHtmlHelper_FWD_DEFINED__
#define __IVWHtmlHelper_FWD_DEFINED__
typedef interface IVWHtmlHelper IVWHtmlHelper;

#endif 	/* __IVWHtmlHelper_FWD_DEFINED__ */


/* header files for imported files */
#include "vwclient.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IVWHtml_INTERFACE_DEFINED__
#define __IVWHtml_INTERFACE_DEFINED__

/* interface IVWHtml */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWHtml;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E3832C9-4F4E-11D0-89AB-00A0C9054129")
    IVWHtml : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IVWClient *pclient) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RootURL( 
            /* [retval][out] */ BSTR *bstrRootURL) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RootURL( 
            /* [in] */ BSTR bstrRootURL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseAll( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowHTML( 
            /* [in] */ int nhwnd,
            /* [in] */ BSTR bstrHtml,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowHTMLEx( 
            /* [in] */ BSTR bstrName,
            /* [in] */ int nhwnd,
            /* [in] */ BSTR bstrHtml,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowURL( 
            /* [in] */ int nhwnd,
            /* [in] */ BSTR bstrURL,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowURLEx( 
            /* [in] */ BSTR bstrName,
            /* [in] */ int nhwnd,
            /* [in] */ BSTR bstrURL,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWHtmlVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWHtml * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWHtml * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWHtml * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWHtml * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWHtml * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWHtml * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWHtml * This,
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
        
        DECLSPEC_XFGVIRT(IVWHtml, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWHtml * This,
            /* [in] */ IVWClient *pclient);
        
        DECLSPEC_XFGVIRT(IVWHtml, get_RootURL)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootURL )( 
            IVWHtml * This,
            /* [retval][out] */ BSTR *bstrRootURL);
        
        DECLSPEC_XFGVIRT(IVWHtml, put_RootURL)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RootURL )( 
            IVWHtml * This,
            /* [in] */ BSTR bstrRootURL);
        
        DECLSPEC_XFGVIRT(IVWHtml, CloseAll)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloseAll )( 
            IVWHtml * This);
        
        DECLSPEC_XFGVIRT(IVWHtml, Close)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IVWHtml * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IVWHtml, ShowHTML)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowHTML )( 
            IVWHtml * This,
            /* [in] */ int nhwnd,
            /* [in] */ BSTR bstrHtml,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        DECLSPEC_XFGVIRT(IVWHtml, ShowHTMLEx)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowHTMLEx )( 
            IVWHtml * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ int nhwnd,
            /* [in] */ BSTR bstrHtml,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        DECLSPEC_XFGVIRT(IVWHtml, ShowURL)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowURL )( 
            IVWHtml * This,
            /* [in] */ int nhwnd,
            /* [in] */ BSTR bstrURL,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        DECLSPEC_XFGVIRT(IVWHtml, ShowURLEx)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowURLEx )( 
            IVWHtml * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ int nhwnd,
            /* [in] */ BSTR bstrURL,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        END_INTERFACE
    } IVWHtmlVtbl;

    interface IVWHtml
    {
        CONST_VTBL struct IVWHtmlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWHtml_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWHtml_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWHtml_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWHtml_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWHtml_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWHtml_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWHtml_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWHtml_Initialize(This,pclient)	\
    ( (This)->lpVtbl -> Initialize(This,pclient) ) 

#define IVWHtml_get_RootURL(This,bstrRootURL)	\
    ( (This)->lpVtbl -> get_RootURL(This,bstrRootURL) ) 

#define IVWHtml_put_RootURL(This,bstrRootURL)	\
    ( (This)->lpVtbl -> put_RootURL(This,bstrRootURL) ) 

#define IVWHtml_CloseAll(This)	\
    ( (This)->lpVtbl -> CloseAll(This) ) 

#define IVWHtml_Close(This,bstrName)	\
    ( (This)->lpVtbl -> Close(This,bstrName) ) 

#define IVWHtml_ShowHTML(This,nhwnd,bstrHtml,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy)	\
    ( (This)->lpVtbl -> ShowHTML(This,nhwnd,bstrHtml,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy) ) 

#define IVWHtml_ShowHTMLEx(This,bstrName,nhwnd,bstrHtml,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy)	\
    ( (This)->lpVtbl -> ShowHTMLEx(This,bstrName,nhwnd,bstrHtml,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy) ) 

#define IVWHtml_ShowURL(This,nhwnd,bstrURL,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy)	\
    ( (This)->lpVtbl -> ShowURL(This,nhwnd,bstrURL,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy) ) 

#define IVWHtml_ShowURLEx(This,bstrName,nhwnd,bstrURL,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy)	\
    ( (This)->lpVtbl -> ShowURLEx(This,bstrName,nhwnd,bstrURL,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWHtml_INTERFACE_DEFINED__ */


#ifndef __IVWHtmlHelper_INTERFACE_DEFINED__
#define __IVWHtmlHelper_INTERFACE_DEFINED__

/* interface IVWHtmlHelper */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWHtmlHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E3832CB-4F4E-11D0-89AB-00A0C9054129")
    IVWHtmlHelper : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Client( 
            /* [retval][out] */ IVWClient **ppclient) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Arg( 
            /* [retval][out] */ IDispatch **ppdispArg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseWindow( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetShortPathName( 
            /* [in] */ BSTR bstrLongName,
            /* [retval][out] */ BSTR *pbstrShortName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWHtmlHelperVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWHtmlHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWHtmlHelper * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWHtmlHelper * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWHtmlHelper * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWHtmlHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWHtmlHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWHtmlHelper * This,
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
        
        DECLSPEC_XFGVIRT(IVWHtmlHelper, get_Client)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Client )( 
            IVWHtmlHelper * This,
            /* [retval][out] */ IVWClient **ppclient);
        
        DECLSPEC_XFGVIRT(IVWHtmlHelper, get_Arg)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arg )( 
            IVWHtmlHelper * This,
            /* [retval][out] */ IDispatch **ppdispArg);
        
        DECLSPEC_XFGVIRT(IVWHtmlHelper, CloseWindow)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloseWindow )( 
            IVWHtmlHelper * This);
        
        DECLSPEC_XFGVIRT(IVWHtmlHelper, GetShortPathName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetShortPathName )( 
            IVWHtmlHelper * This,
            /* [in] */ BSTR bstrLongName,
            /* [retval][out] */ BSTR *pbstrShortName);
        
        END_INTERFACE
    } IVWHtmlHelperVtbl;

    interface IVWHtmlHelper
    {
        CONST_VTBL struct IVWHtmlHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWHtmlHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWHtmlHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWHtmlHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWHtmlHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWHtmlHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWHtmlHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWHtmlHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWHtmlHelper_get_Client(This,ppclient)	\
    ( (This)->lpVtbl -> get_Client(This,ppclient) ) 

#define IVWHtmlHelper_get_Arg(This,ppdispArg)	\
    ( (This)->lpVtbl -> get_Arg(This,ppdispArg) ) 

#define IVWHtmlHelper_CloseWindow(This)	\
    ( (This)->lpVtbl -> CloseWindow(This) ) 

#define IVWHtmlHelper_GetShortPathName(This,bstrLongName,pbstrShortName)	\
    ( (This)->lpVtbl -> GetShortPathName(This,bstrLongName,pbstrShortName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWHtmlHelper_INTERFACE_DEFINED__ */


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


