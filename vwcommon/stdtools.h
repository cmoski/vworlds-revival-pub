

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/stdtools.idl:
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

#ifndef __stdtools_h__
#define __stdtools_h__

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

#ifndef __IVWErrorTool_FWD_DEFINED__
#define __IVWErrorTool_FWD_DEFINED__
typedef interface IVWErrorTool IVWErrorTool;

#endif 	/* __IVWErrorTool_FWD_DEFINED__ */


#ifndef __IVWSelectTool_FWD_DEFINED__
#define __IVWSelectTool_FWD_DEFINED__
typedef interface IVWSelectTool IVWSelectTool;

#endif 	/* __IVWSelectTool_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwuiobjs.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IVWErrorTool_INTERFACE_DEFINED__
#define __IVWErrorTool_INTERFACE_DEFINED__

/* interface IVWErrorTool */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWErrorTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77B43661-792E-11d0-89AB-00A0C9054129")
    IVWErrorTool : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisplayError( 
            /* [in] */ HRESULT hr,
            /* [retval][out] */ VARIANT_BOOL *pbHandled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWErrorToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWErrorTool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWErrorTool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWErrorTool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWErrorTool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWErrorTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWErrorTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWErrorTool * This,
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
        
        DECLSPEC_XFGVIRT(IVWErrorTool, DisplayError)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisplayError )( 
            IVWErrorTool * This,
            /* [in] */ HRESULT hr,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        END_INTERFACE
    } IVWErrorToolVtbl;

    interface IVWErrorTool
    {
        CONST_VTBL struct IVWErrorToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWErrorTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWErrorTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWErrorTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWErrorTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWErrorTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWErrorTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWErrorTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWErrorTool_DisplayError(This,hr,pbHandled)	\
    ( (This)->lpVtbl -> DisplayError(This,hr,pbHandled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWErrorTool_INTERFACE_DEFINED__ */


#ifndef __IVWSelectTool_INTERFACE_DEFINED__
#define __IVWSelectTool_INTERFACE_DEFINED__

/* interface IVWSelectTool */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWSelectTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3159FDB3-EF7F-11CF-89A9-00A0C9054129")
    IVWSelectTool : public IVWUITool
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DeluxeSelection( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DeluxeSelection( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VertexSelection( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VertexSelection( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWSelectToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWSelectTool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWSelectTool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWSelectTool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWSelectTool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWSelectTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWSelectTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWSelectTool * This,
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
        
        DECLSPEC_XFGVIRT(IVWUITool, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWSelectTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWSelectTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ IWorld *pWorld,
            /* [in] */ IVWRenderRoot *pVWRenderRoot);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolActivate )( 
            IVWSelectTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolChanging)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolChanging )( 
            IVWSelectTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnMessage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMessage )( 
            IVWSelectTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ unsigned int message,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IVWUITool, IsValid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IVWSelectTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IVWUITool, SetCursor)
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *SetCursor )( 
            IVWSelectTool * This,
            /* [in] */ IVWUIView *pVWUIView,
            /* [in] */ HCURSOR hCursor);
        
        DECLSPEC_XFGVIRT(IVWUITool, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IVWSelectTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIEvent )( 
            IVWSelectTool * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg,
            /* [in] */ BOOL bFromClient);
        
        DECLSPEC_XFGVIRT(IVWSelectTool, get_DeluxeSelection)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeluxeSelection )( 
            IVWSelectTool * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IVWSelectTool, put_DeluxeSelection)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeluxeSelection )( 
            IVWSelectTool * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IVWSelectTool, get_VertexSelection)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexSelection )( 
            IVWSelectTool * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IVWSelectTool, put_VertexSelection)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VertexSelection )( 
            IVWSelectTool * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IVWSelectToolVtbl;

    interface IVWSelectTool
    {
        CONST_VTBL struct IVWSelectToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWSelectTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWSelectTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWSelectTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWSelectTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWSelectTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWSelectTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWSelectTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWSelectTool_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWSelectTool_Initialize(This,pVw,pWorld,pVWRenderRoot)	\
    ( (This)->lpVtbl -> Initialize(This,pVw,pWorld,pVWRenderRoot) ) 

#define IVWSelectTool_OnToolActivate(This,varHint)	\
    ( (This)->lpVtbl -> OnToolActivate(This,varHint) ) 

#define IVWSelectTool_OnToolChanging(This,varHint)	\
    ( (This)->lpVtbl -> OnToolChanging(This,varHint) ) 

#define IVWSelectTool_OnMessage(This,pVw,message,wParam,lParam,pbHandled)	\
    ( (This)->lpVtbl -> OnMessage(This,pVw,message,wParam,lParam,pbHandled) ) 

#define IVWSelectTool_IsValid(This,pVw,pbool)	\
    ( (This)->lpVtbl -> IsValid(This,pVw,pbool) ) 

#define IVWSelectTool_SetCursor(This,pVWUIView,hCursor)	\
    ( (This)->lpVtbl -> SetCursor(This,pVWUIView,hCursor) ) 

#define IVWSelectTool_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IVWSelectTool_OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient)	\
    ( (This)->lpVtbl -> OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient) ) 


#define IVWSelectTool_get_DeluxeSelection(This,pVal)	\
    ( (This)->lpVtbl -> get_DeluxeSelection(This,pVal) ) 

#define IVWSelectTool_put_DeluxeSelection(This,newVal)	\
    ( (This)->lpVtbl -> put_DeluxeSelection(This,newVal) ) 

#define IVWSelectTool_get_VertexSelection(This,pVal)	\
    ( (This)->lpVtbl -> get_VertexSelection(This,pVal) ) 

#define IVWSelectTool_put_VertexSelection(This,newVal)	\
    ( (This)->lpVtbl -> put_VertexSelection(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWSelectTool_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


