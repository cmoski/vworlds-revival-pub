

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/geomtool.idl:
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

#ifndef __geomtool_h__
#define __geomtool_h__

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

#ifndef __IVWScale3DTool_FWD_DEFINED__
#define __IVWScale3DTool_FWD_DEFINED__
typedef interface IVWScale3DTool IVWScale3DTool;

#endif 	/* __IVWScale3DTool_FWD_DEFINED__ */


#ifndef __IRotate3DTool_FWD_DEFINED__
#define __IRotate3DTool_FWD_DEFINED__
typedef interface IRotate3DTool IRotate3DTool;

#endif 	/* __IRotate3DTool_FWD_DEFINED__ */


#ifndef __IVWTranslate3DTool_FWD_DEFINED__
#define __IVWTranslate3DTool_FWD_DEFINED__
typedef interface IVWTranslate3DTool IVWTranslate3DTool;

#endif 	/* __IVWTranslate3DTool_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "vwuiobjs.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IVWScale3DTool_INTERFACE_DEFINED__
#define __IVWScale3DTool_INTERFACE_DEFINED__

/* interface IVWScale3DTool */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWScale3DTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B813D82-A148-11D0-89AB-00A0C9054129")
    IVWScale3DTool : public IVWUITool
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IVWScale3DToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWScale3DTool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWScale3DTool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWScale3DTool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWScale3DTool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWScale3DTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWScale3DTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWScale3DTool * This,
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
            IVWScale3DTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWScale3DTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ IWorld *pWorld,
            /* [in] */ IVWRenderRoot *pVWRenderRoot);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolActivate )( 
            IVWScale3DTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolChanging)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolChanging )( 
            IVWScale3DTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnMessage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMessage )( 
            IVWScale3DTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ unsigned int message,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IVWUITool, IsValid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IVWScale3DTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IVWUITool, SetCursor)
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *SetCursor )( 
            IVWScale3DTool * This,
            /* [in] */ IVWUIView *pVWUIView,
            /* [in] */ HCURSOR hCursor);
        
        DECLSPEC_XFGVIRT(IVWUITool, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IVWScale3DTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIEvent )( 
            IVWScale3DTool * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg,
            /* [in] */ BOOL bFromClient);
        
        END_INTERFACE
    } IVWScale3DToolVtbl;

    interface IVWScale3DTool
    {
        CONST_VTBL struct IVWScale3DToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWScale3DTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWScale3DTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWScale3DTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWScale3DTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWScale3DTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWScale3DTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWScale3DTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWScale3DTool_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWScale3DTool_Initialize(This,pVw,pWorld,pVWRenderRoot)	\
    ( (This)->lpVtbl -> Initialize(This,pVw,pWorld,pVWRenderRoot) ) 

#define IVWScale3DTool_OnToolActivate(This,varHint)	\
    ( (This)->lpVtbl -> OnToolActivate(This,varHint) ) 

#define IVWScale3DTool_OnToolChanging(This,varHint)	\
    ( (This)->lpVtbl -> OnToolChanging(This,varHint) ) 

#define IVWScale3DTool_OnMessage(This,pVw,message,wParam,lParam,pbHandled)	\
    ( (This)->lpVtbl -> OnMessage(This,pVw,message,wParam,lParam,pbHandled) ) 

#define IVWScale3DTool_IsValid(This,pVw,pbool)	\
    ( (This)->lpVtbl -> IsValid(This,pVw,pbool) ) 

#define IVWScale3DTool_SetCursor(This,pVWUIView,hCursor)	\
    ( (This)->lpVtbl -> SetCursor(This,pVWUIView,hCursor) ) 

#define IVWScale3DTool_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IVWScale3DTool_OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient)	\
    ( (This)->lpVtbl -> OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWScale3DTool_INTERFACE_DEFINED__ */


#ifndef __IRotate3DTool_INTERFACE_DEFINED__
#define __IRotate3DTool_INTERFACE_DEFINED__

/* interface IRotate3DTool */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRotate3DTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0A1D4362-A12B-11D0-89AB-00A0C9054129")
    IRotate3DTool : public IVWUITool
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ComputeEulerAngles( 
            /* [in] */ IVWFrame *pVWFrame,
            /* [in] */ IVector *vecAngles) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRotate3DToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRotate3DTool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRotate3DTool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRotate3DTool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRotate3DTool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRotate3DTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRotate3DTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRotate3DTool * This,
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
            IRotate3DTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IRotate3DTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ IWorld *pWorld,
            /* [in] */ IVWRenderRoot *pVWRenderRoot);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolActivate )( 
            IRotate3DTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolChanging)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolChanging )( 
            IRotate3DTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnMessage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMessage )( 
            IRotate3DTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ unsigned int message,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IVWUITool, IsValid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IRotate3DTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IVWUITool, SetCursor)
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *SetCursor )( 
            IRotate3DTool * This,
            /* [in] */ IVWUIView *pVWUIView,
            /* [in] */ HCURSOR hCursor);
        
        DECLSPEC_XFGVIRT(IVWUITool, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IRotate3DTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIEvent )( 
            IRotate3DTool * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg,
            /* [in] */ BOOL bFromClient);
        
        DECLSPEC_XFGVIRT(IRotate3DTool, ComputeEulerAngles)
        HRESULT ( STDMETHODCALLTYPE *ComputeEulerAngles )( 
            IRotate3DTool * This,
            /* [in] */ IVWFrame *pVWFrame,
            /* [in] */ IVector *vecAngles);
        
        END_INTERFACE
    } IRotate3DToolVtbl;

    interface IRotate3DTool
    {
        CONST_VTBL struct IRotate3DToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRotate3DTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRotate3DTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRotate3DTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRotate3DTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRotate3DTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRotate3DTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRotate3DTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRotate3DTool_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IRotate3DTool_Initialize(This,pVw,pWorld,pVWRenderRoot)	\
    ( (This)->lpVtbl -> Initialize(This,pVw,pWorld,pVWRenderRoot) ) 

#define IRotate3DTool_OnToolActivate(This,varHint)	\
    ( (This)->lpVtbl -> OnToolActivate(This,varHint) ) 

#define IRotate3DTool_OnToolChanging(This,varHint)	\
    ( (This)->lpVtbl -> OnToolChanging(This,varHint) ) 

#define IRotate3DTool_OnMessage(This,pVw,message,wParam,lParam,pbHandled)	\
    ( (This)->lpVtbl -> OnMessage(This,pVw,message,wParam,lParam,pbHandled) ) 

#define IRotate3DTool_IsValid(This,pVw,pbool)	\
    ( (This)->lpVtbl -> IsValid(This,pVw,pbool) ) 

#define IRotate3DTool_SetCursor(This,pVWUIView,hCursor)	\
    ( (This)->lpVtbl -> SetCursor(This,pVWUIView,hCursor) ) 

#define IRotate3DTool_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IRotate3DTool_OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient)	\
    ( (This)->lpVtbl -> OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient) ) 


#define IRotate3DTool_ComputeEulerAngles(This,pVWFrame,vecAngles)	\
    ( (This)->lpVtbl -> ComputeEulerAngles(This,pVWFrame,vecAngles) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRotate3DTool_INTERFACE_DEFINED__ */


#ifndef __IVWTranslate3DTool_INTERFACE_DEFINED__
#define __IVWTranslate3DTool_INTERFACE_DEFINED__

/* interface IVWTranslate3DTool */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWTranslate3DTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("86CD4C7F-9A10-11D0-89AB-00A0C9054129")
    IVWTranslate3DTool : public IVWUITool
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IVWTranslate3DToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWTranslate3DTool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWTranslate3DTool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWTranslate3DTool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWTranslate3DTool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWTranslate3DTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWTranslate3DTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWTranslate3DTool * This,
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
            IVWTranslate3DTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWTranslate3DTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ IWorld *pWorld,
            /* [in] */ IVWRenderRoot *pVWRenderRoot);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolActivate )( 
            IVWTranslate3DTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolChanging)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolChanging )( 
            IVWTranslate3DTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnMessage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMessage )( 
            IVWTranslate3DTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ unsigned int message,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IVWUITool, IsValid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IVWTranslate3DTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IVWUITool, SetCursor)
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *SetCursor )( 
            IVWTranslate3DTool * This,
            /* [in] */ IVWUIView *pVWUIView,
            /* [in] */ HCURSOR hCursor);
        
        DECLSPEC_XFGVIRT(IVWUITool, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IVWTranslate3DTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIEvent )( 
            IVWTranslate3DTool * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg,
            /* [in] */ BOOL bFromClient);
        
        END_INTERFACE
    } IVWTranslate3DToolVtbl;

    interface IVWTranslate3DTool
    {
        CONST_VTBL struct IVWTranslate3DToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWTranslate3DTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWTranslate3DTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWTranslate3DTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWTranslate3DTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWTranslate3DTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWTranslate3DTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWTranslate3DTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWTranslate3DTool_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWTranslate3DTool_Initialize(This,pVw,pWorld,pVWRenderRoot)	\
    ( (This)->lpVtbl -> Initialize(This,pVw,pWorld,pVWRenderRoot) ) 

#define IVWTranslate3DTool_OnToolActivate(This,varHint)	\
    ( (This)->lpVtbl -> OnToolActivate(This,varHint) ) 

#define IVWTranslate3DTool_OnToolChanging(This,varHint)	\
    ( (This)->lpVtbl -> OnToolChanging(This,varHint) ) 

#define IVWTranslate3DTool_OnMessage(This,pVw,message,wParam,lParam,pbHandled)	\
    ( (This)->lpVtbl -> OnMessage(This,pVw,message,wParam,lParam,pbHandled) ) 

#define IVWTranslate3DTool_IsValid(This,pVw,pbool)	\
    ( (This)->lpVtbl -> IsValid(This,pVw,pbool) ) 

#define IVWTranslate3DTool_SetCursor(This,pVWUIView,hCursor)	\
    ( (This)->lpVtbl -> SetCursor(This,pVWUIView,hCursor) ) 

#define IVWTranslate3DTool_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IVWTranslate3DTool_OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient)	\
    ( (This)->lpVtbl -> OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWTranslate3DTool_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


