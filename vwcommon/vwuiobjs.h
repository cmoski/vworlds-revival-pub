

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwuiobjs.idl:
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

#ifndef __vwuiobjs_h__
#define __vwuiobjs_h__

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

#ifndef __IVWUITool_FWD_DEFINED__
#define __IVWUITool_FWD_DEFINED__
typedef interface IVWUITool IVWUITool;

#endif 	/* __IVWUITool_FWD_DEFINED__ */


#ifndef __IVWUIView_FWD_DEFINED__
#define __IVWUIView_FWD_DEFINED__
typedef interface IVWUIView IVWUIView;

#endif 	/* __IVWUIView_FWD_DEFINED__ */


#ifndef __IVWControlManager_FWD_DEFINED__
#define __IVWControlManager_FWD_DEFINED__
typedef interface IVWControlManager IVWControlManager;

#endif 	/* __IVWControlManager_FWD_DEFINED__ */


#ifndef __IVWUndoItem_FWD_DEFINED__
#define __IVWUndoItem_FWD_DEFINED__
typedef interface IVWUndoItem IVWUndoItem;

#endif 	/* __IVWUndoItem_FWD_DEFINED__ */


#ifndef __IVWUndoStacks_FWD_DEFINED__
#define __IVWUndoStacks_FWD_DEFINED__
typedef interface IVWUndoStacks IVWUndoStacks;

#endif 	/* __IVWUndoStacks_FWD_DEFINED__ */


#ifndef __IVWExecuteUndo_FWD_DEFINED__
#define __IVWExecuteUndo_FWD_DEFINED__
typedef interface IVWExecuteUndo IVWExecuteUndo;

#endif 	/* __IVWExecuteUndo_FWD_DEFINED__ */


#ifndef __IVWUIEvents_FWD_DEFINED__
#define __IVWUIEvents_FWD_DEFINED__
typedef interface IVWUIEvents IVWUIEvents;

#endif 	/* __IVWUIEvents_FWD_DEFINED__ */


/* header files for imported files */
#include "vwobject.h"
#include "vwrender.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwuiobjs_0000_0000 */
/* [local] */ 






#define HITTEST_RETURNALLPICKED 0x1
#define HITTEST_VERTEXSELECT 0x2


extern RPC_IF_HANDLE __MIDL_itf_vwuiobjs_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwuiobjs_0000_0000_v0_0_s_ifspec;

#ifndef __IVWUITool_INTERFACE_DEFINED__
#define __IVWUITool_INTERFACE_DEFINED__

/* interface IVWUITool */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWUITool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B154135-E2E9-21CF-6299-445368617270")
    IVWUITool : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IVWUIView *pVw,
            /* [in] */ IWorld *pWorld,
            /* [in] */ IVWRenderRoot *pVWRenderRoot) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnToolActivate( 
            /* [in] */ VARIANT varHint) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnToolChanging( 
            /* [in] */ VARIANT varHint) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnMessage( 
            /* [in] */ IVWUIView *pVw,
            /* [in] */ unsigned int message,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ VARIANT_BOOL *pbHandled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValid( 
            /* [in] */ IVWUIView *pVw,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][local] */ HRESULT STDMETHODCALLTYPE SetCursor( 
            /* [in] */ IVWUIView *pVWUIView,
            /* [in] */ HCURSOR hCursor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUIEvent( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg,
            /* [in] */ BOOL bFromClient) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWUIToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWUITool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWUITool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWUITool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWUITool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWUITool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWUITool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWUITool * This,
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
            IVWUITool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWUITool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ IWorld *pWorld,
            /* [in] */ IVWRenderRoot *pVWRenderRoot);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolActivate )( 
            IVWUITool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolChanging)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolChanging )( 
            IVWUITool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnMessage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMessage )( 
            IVWUITool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ unsigned int message,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IVWUITool, IsValid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IVWUITool * This,
            /* [in] */ IVWUIView *pVw,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IVWUITool, SetCursor)
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *SetCursor )( 
            IVWUITool * This,
            /* [in] */ IVWUIView *pVWUIView,
            /* [in] */ HCURSOR hCursor);
        
        DECLSPEC_XFGVIRT(IVWUITool, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IVWUITool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIEvent )( 
            IVWUITool * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg,
            /* [in] */ BOOL bFromClient);
        
        END_INTERFACE
    } IVWUIToolVtbl;

    interface IVWUITool
    {
        CONST_VTBL struct IVWUIToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWUITool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWUITool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWUITool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWUITool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWUITool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWUITool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWUITool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWUITool_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWUITool_Initialize(This,pVw,pWorld,pVWRenderRoot)	\
    ( (This)->lpVtbl -> Initialize(This,pVw,pWorld,pVWRenderRoot) ) 

#define IVWUITool_OnToolActivate(This,varHint)	\
    ( (This)->lpVtbl -> OnToolActivate(This,varHint) ) 

#define IVWUITool_OnToolChanging(This,varHint)	\
    ( (This)->lpVtbl -> OnToolChanging(This,varHint) ) 

#define IVWUITool_OnMessage(This,pVw,message,wParam,lParam,pbHandled)	\
    ( (This)->lpVtbl -> OnMessage(This,pVw,message,wParam,lParam,pbHandled) ) 

#define IVWUITool_IsValid(This,pVw,pbool)	\
    ( (This)->lpVtbl -> IsValid(This,pVw,pbool) ) 

#define IVWUITool_SetCursor(This,pVWUIView,hCursor)	\
    ( (This)->lpVtbl -> SetCursor(This,pVWUIView,hCursor) ) 

#define IVWUITool_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IVWUITool_OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient)	\
    ( (This)->lpVtbl -> OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWUITool_INTERFACE_DEFINED__ */


#ifndef __IVWUIView_INTERFACE_DEFINED__
#define __IVWUIView_INTERFACE_DEFINED__

/* interface IVWUIView */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWUIView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B394145-C3E9-21EF-6299-445368617270")
    IVWUIView : public IDispatch
    {
    public:
        virtual /* [helpstring][local] */ HRESULT STDMETHODCALLTYPE LoadUIToolByCLSID( 
            /* [in] */ REFCLSID clsidUITool,
            /* [in] */ BSTR bstrUIToolName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadUIToolByProgID( 
            /* [in] */ BSTR bstrUITool,
            /* [in] */ BSTR bstrUIToolName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddCurrentUITool( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveCurrentUITool( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentUIToolList( 
            /* [retval][out] */ IPropertyList **ppPL) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LoadedUIToolMap( 
            /* [retval][out] */ IPropertyMap **ppPM) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LoadedUITool( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IVWUITool **ppUITool) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentUIToolNameList( 
            /* [retval][out] */ IPropertyList **ppPL) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentUIToolNameList( 
            /* [in] */ IPropertyList *pPL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HitTest( 
            /* [in] */ VARIANT varHitParams,
            /* [in] */ long nFlags,
            /* [out] */ VARIANT *pvarHitResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeviceToWorld( 
            /* [out][in] */ float *pflX,
            /* [out][in] */ float *pflY,
            /* [out][in] */ float *pflZ) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TargetObjectProperty( 
            /* [in] */ IObjectProperty *pOP) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TargetObjectProperty( 
            /* [retval][out] */ IObjectProperty **ppOP) = 0;
        
        virtual /* [helpstring][propget][local] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ HWND *pHWND) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ControlManager( 
            /* [retval][out] */ IVWControlManager **ppCM) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OptionalSelection( 
            /* [in] */ VARIANT varSelection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWUIViewVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWUIView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWUIView * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWUIView * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWUIView * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWUIView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWUIView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWUIView * This,
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
        
        DECLSPEC_XFGVIRT(IVWUIView, LoadUIToolByCLSID)
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *LoadUIToolByCLSID )( 
            IVWUIView * This,
            /* [in] */ REFCLSID clsidUITool,
            /* [in] */ BSTR bstrUIToolName);
        
        DECLSPEC_XFGVIRT(IVWUIView, LoadUIToolByProgID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadUIToolByProgID )( 
            IVWUIView * This,
            /* [in] */ BSTR bstrUITool,
            /* [in] */ BSTR bstrUIToolName);
        
        DECLSPEC_XFGVIRT(IVWUIView, AddCurrentUITool)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddCurrentUITool )( 
            IVWUIView * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IVWUIView, RemoveCurrentUITool)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveCurrentUITool )( 
            IVWUIView * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IVWUIView, get_CurrentUIToolList)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUIToolList )( 
            IVWUIView * This,
            /* [retval][out] */ IPropertyList **ppPL);
        
        DECLSPEC_XFGVIRT(IVWUIView, get_LoadedUIToolMap)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadedUIToolMap )( 
            IVWUIView * This,
            /* [retval][out] */ IPropertyMap **ppPM);
        
        DECLSPEC_XFGVIRT(IVWUIView, get_LoadedUITool)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadedUITool )( 
            IVWUIView * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IVWUITool **ppUITool);
        
        DECLSPEC_XFGVIRT(IVWUIView, get_CurrentUIToolNameList)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUIToolNameList )( 
            IVWUIView * This,
            /* [retval][out] */ IPropertyList **ppPL);
        
        DECLSPEC_XFGVIRT(IVWUIView, put_CurrentUIToolNameList)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentUIToolNameList )( 
            IVWUIView * This,
            /* [in] */ IPropertyList *pPL);
        
        DECLSPEC_XFGVIRT(IVWUIView, HitTest)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HitTest )( 
            IVWUIView * This,
            /* [in] */ VARIANT varHitParams,
            /* [in] */ long nFlags,
            /* [out] */ VARIANT *pvarHitResult);
        
        DECLSPEC_XFGVIRT(IVWUIView, DeviceToWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeviceToWorld )( 
            IVWUIView * This,
            /* [out][in] */ float *pflX,
            /* [out][in] */ float *pflY,
            /* [out][in] */ float *pflZ);
        
        DECLSPEC_XFGVIRT(IVWUIView, put_TargetObjectProperty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetObjectProperty )( 
            IVWUIView * This,
            /* [in] */ IObjectProperty *pOP);
        
        DECLSPEC_XFGVIRT(IVWUIView, get_TargetObjectProperty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetObjectProperty )( 
            IVWUIView * This,
            /* [retval][out] */ IObjectProperty **ppOP);
        
        DECLSPEC_XFGVIRT(IVWUIView, get_HWND)
        /* [helpstring][propget][local] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            IVWUIView * This,
            /* [retval][out] */ HWND *pHWND);
        
        DECLSPEC_XFGVIRT(IVWUIView, get_ControlManager)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlManager )( 
            IVWUIView * This,
            /* [retval][out] */ IVWControlManager **ppCM);
        
        DECLSPEC_XFGVIRT(IVWUIView, OptionalSelection)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OptionalSelection )( 
            IVWUIView * This,
            /* [in] */ VARIANT varSelection);
        
        END_INTERFACE
    } IVWUIViewVtbl;

    interface IVWUIView
    {
        CONST_VTBL struct IVWUIViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWUIView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWUIView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWUIView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWUIView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWUIView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWUIView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWUIView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWUIView_LoadUIToolByCLSID(This,clsidUITool,bstrUIToolName)	\
    ( (This)->lpVtbl -> LoadUIToolByCLSID(This,clsidUITool,bstrUIToolName) ) 

#define IVWUIView_LoadUIToolByProgID(This,bstrUITool,bstrUIToolName)	\
    ( (This)->lpVtbl -> LoadUIToolByProgID(This,bstrUITool,bstrUIToolName) ) 

#define IVWUIView_AddCurrentUITool(This,bstrName)	\
    ( (This)->lpVtbl -> AddCurrentUITool(This,bstrName) ) 

#define IVWUIView_RemoveCurrentUITool(This,bstrName)	\
    ( (This)->lpVtbl -> RemoveCurrentUITool(This,bstrName) ) 

#define IVWUIView_get_CurrentUIToolList(This,ppPL)	\
    ( (This)->lpVtbl -> get_CurrentUIToolList(This,ppPL) ) 

#define IVWUIView_get_LoadedUIToolMap(This,ppPM)	\
    ( (This)->lpVtbl -> get_LoadedUIToolMap(This,ppPM) ) 

#define IVWUIView_get_LoadedUITool(This,bstrName,ppUITool)	\
    ( (This)->lpVtbl -> get_LoadedUITool(This,bstrName,ppUITool) ) 

#define IVWUIView_get_CurrentUIToolNameList(This,ppPL)	\
    ( (This)->lpVtbl -> get_CurrentUIToolNameList(This,ppPL) ) 

#define IVWUIView_put_CurrentUIToolNameList(This,pPL)	\
    ( (This)->lpVtbl -> put_CurrentUIToolNameList(This,pPL) ) 

#define IVWUIView_HitTest(This,varHitParams,nFlags,pvarHitResult)	\
    ( (This)->lpVtbl -> HitTest(This,varHitParams,nFlags,pvarHitResult) ) 

#define IVWUIView_DeviceToWorld(This,pflX,pflY,pflZ)	\
    ( (This)->lpVtbl -> DeviceToWorld(This,pflX,pflY,pflZ) ) 

#define IVWUIView_put_TargetObjectProperty(This,pOP)	\
    ( (This)->lpVtbl -> put_TargetObjectProperty(This,pOP) ) 

#define IVWUIView_get_TargetObjectProperty(This,ppOP)	\
    ( (This)->lpVtbl -> get_TargetObjectProperty(This,ppOP) ) 

#define IVWUIView_get_HWND(This,pHWND)	\
    ( (This)->lpVtbl -> get_HWND(This,pHWND) ) 

#define IVWUIView_get_ControlManager(This,ppCM)	\
    ( (This)->lpVtbl -> get_ControlManager(This,ppCM) ) 

#define IVWUIView_OptionalSelection(This,varSelection)	\
    ( (This)->lpVtbl -> OptionalSelection(This,varSelection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWUIView_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vwuiobjs_0000_0002 */
/* [local] */ 

#define VWSTUDIO_E_INVALIDSELECTION			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0801)
#define VWSTUDIO_E_BADTOOLINITIALIZATION		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0803)
#define VWSTUDIO_E_BADCONTROLINITIALIZATION	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0804)
#define VWSTUDIO_E_UNDOSTACKSINVALID			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0805)
#define VWSTUDIO_E_CANTADDUNDOITEM			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0806)
#define VWSTUDIO_E_INVALIDMETHOD				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0808)
#define VWSTUDIO_E_INVALIDLOADEDUITOOLNAME	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0809)
#define VWSTUDIO_E_NOCURRENTUITOOL			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x080a)
#define VWSTUDIO_S_IGNORESELECTION			MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x080b)
#define VWSTUDIO_S_ALREADYSELECTED			MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x080c)


extern RPC_IF_HANDLE __MIDL_itf_vwuiobjs_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwuiobjs_0000_0002_v0_0_s_ifspec;

#ifndef __IVWControlManager_INTERFACE_DEFINED__
#define __IVWControlManager_INTERFACE_DEFINED__

/* interface IVWControlManager */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWControlManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C31AA440-9580-11d0-89A9-00A0C9054129")
    IVWControlManager : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SelectionList( 
            /* [retval][out] */ IPropertyList **ppPL) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UndoStack( 
            /* [retval][out] */ IVWUndoStacks **ppVWUndoStack) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_World( 
            /* [retval][out] */ IWorld **ppWorld) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_World( 
            /* [in] */ IWorld *pWorld) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddVWUndoItem( 
            /* [in] */ IVWUndoItem *pVWUndoItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Undo( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Redo( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisplayError( 
            HRESULT hr,
            VARIANT_BOOL *pbHandled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Select( 
            /* [in] */ VARIANT varSel) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddSelectionExt( 
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varSel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddSelection( 
            /* [in] */ VARIANT varSel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveSelectionExt( 
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varSel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveSelection( 
            /* [in] */ VARIANT varSel) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ToggleSelectionExt( 
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varSel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ToggleSelection( 
            /* [in] */ VARIANT varSel) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ClearSelectionsExt( 
            /* [in] */ IVWUIView *pVw) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearSelections( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RefreshObjects( 
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varRefresh) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RefreshObjectsInView( 
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varRefresh) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RefreshView( 
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varHint,
            /* [in] */ VARIANT_BOOL varRefreshAllViews) = 0;
        
        virtual /* [helpstring][local] */ HRESULT STDMETHODCALLTYPE GetSelectedCount( 
            /* [in] */ IID *pIID,
            /* [retval][out] */ long *nCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsSelected( 
            /* [in] */ IObjectProperty *pObjProp,
            /* [retval][out] */ VARIANT_BOOL *vbSelected) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsBoundarySelected( 
            /* [in] */ IThing *pThing,
            /* [in] */ int nBoundaryIndex,
            /* [retval][out] */ VARIANT_BOOL *vbSelected) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsVertexSelected( 
            /* [in] */ IObjectProperty *pObjProp,
            /* [in] */ int nIndex,
            /* [retval][out] */ VARIANT_BOOL *vbSelected) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsAnyVertexSelected( 
            /* [in] */ IObjectProperty *pObjProp,
            /* [retval][out] */ VARIANT_BOOL *vbSelected) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Clipboard( 
            /* [retval][out] */ IPropertyList **ppPL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [in] */ IObjectProperty *pObjProp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Paste( 
            /* [in] */ IObjectProperty *pObjProp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWControlManagerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWControlManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWControlManager * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWControlManager * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWControlManager * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWControlManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWControlManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWControlManager * This,
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
        
        DECLSPEC_XFGVIRT(IVWControlManager, get_SelectionList)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectionList )( 
            IVWControlManager * This,
            /* [retval][out] */ IPropertyList **ppPL);
        
        DECLSPEC_XFGVIRT(IVWControlManager, get_UndoStack)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UndoStack )( 
            IVWControlManager * This,
            /* [retval][out] */ IVWUndoStacks **ppVWUndoStack);
        
        DECLSPEC_XFGVIRT(IVWControlManager, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVWControlManager * This,
            /* [retval][out] */ IWorld **ppWorld);
        
        DECLSPEC_XFGVIRT(IVWControlManager, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IVWControlManager * This,
            /* [in] */ IWorld *pWorld);
        
        DECLSPEC_XFGVIRT(IVWControlManager, AddVWUndoItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddVWUndoItem )( 
            IVWControlManager * This,
            /* [in] */ IVWUndoItem *pVWUndoItem);
        
        DECLSPEC_XFGVIRT(IVWControlManager, Undo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Undo )( 
            IVWControlManager * This);
        
        DECLSPEC_XFGVIRT(IVWControlManager, Redo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Redo )( 
            IVWControlManager * This);
        
        DECLSPEC_XFGVIRT(IVWControlManager, DisplayError)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisplayError )( 
            IVWControlManager * This,
            HRESULT hr,
            VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IVWControlManager, Select)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            IVWControlManager * This,
            /* [in] */ VARIANT varSel);
        
        DECLSPEC_XFGVIRT(IVWControlManager, AddSelectionExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddSelectionExt )( 
            IVWControlManager * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varSel);
        
        DECLSPEC_XFGVIRT(IVWControlManager, AddSelection)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddSelection )( 
            IVWControlManager * This,
            /* [in] */ VARIANT varSel);
        
        DECLSPEC_XFGVIRT(IVWControlManager, RemoveSelectionExt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveSelectionExt )( 
            IVWControlManager * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varSel);
        
        DECLSPEC_XFGVIRT(IVWControlManager, RemoveSelection)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveSelection )( 
            IVWControlManager * This,
            /* [in] */ VARIANT varSel);
        
        DECLSPEC_XFGVIRT(IVWControlManager, ToggleSelectionExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ToggleSelectionExt )( 
            IVWControlManager * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varSel);
        
        DECLSPEC_XFGVIRT(IVWControlManager, ToggleSelection)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToggleSelection )( 
            IVWControlManager * This,
            /* [in] */ VARIANT varSel);
        
        DECLSPEC_XFGVIRT(IVWControlManager, ClearSelectionsExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ClearSelectionsExt )( 
            IVWControlManager * This,
            /* [in] */ IVWUIView *pVw);
        
        DECLSPEC_XFGVIRT(IVWControlManager, ClearSelections)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearSelections )( 
            IVWControlManager * This);
        
        DECLSPEC_XFGVIRT(IVWControlManager, RefreshObjects)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RefreshObjects )( 
            IVWControlManager * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varRefresh);
        
        DECLSPEC_XFGVIRT(IVWControlManager, RefreshObjectsInView)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RefreshObjectsInView )( 
            IVWControlManager * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varRefresh);
        
        DECLSPEC_XFGVIRT(IVWControlManager, RefreshView)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RefreshView )( 
            IVWControlManager * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ VARIANT varHint,
            /* [in] */ VARIANT_BOOL varRefreshAllViews);
        
        DECLSPEC_XFGVIRT(IVWControlManager, GetSelectedCount)
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *GetSelectedCount )( 
            IVWControlManager * This,
            /* [in] */ IID *pIID,
            /* [retval][out] */ long *nCount);
        
        DECLSPEC_XFGVIRT(IVWControlManager, IsSelected)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsSelected )( 
            IVWControlManager * This,
            /* [in] */ IObjectProperty *pObjProp,
            /* [retval][out] */ VARIANT_BOOL *vbSelected);
        
        DECLSPEC_XFGVIRT(IVWControlManager, IsBoundarySelected)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsBoundarySelected )( 
            IVWControlManager * This,
            /* [in] */ IThing *pThing,
            /* [in] */ int nBoundaryIndex,
            /* [retval][out] */ VARIANT_BOOL *vbSelected);
        
        DECLSPEC_XFGVIRT(IVWControlManager, IsVertexSelected)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsVertexSelected )( 
            IVWControlManager * This,
            /* [in] */ IObjectProperty *pObjProp,
            /* [in] */ int nIndex,
            /* [retval][out] */ VARIANT_BOOL *vbSelected);
        
        DECLSPEC_XFGVIRT(IVWControlManager, IsAnyVertexSelected)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsAnyVertexSelected )( 
            IVWControlManager * This,
            /* [in] */ IObjectProperty *pObjProp,
            /* [retval][out] */ VARIANT_BOOL *vbSelected);
        
        DECLSPEC_XFGVIRT(IVWControlManager, get_Clipboard)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Clipboard )( 
            IVWControlManager * This,
            /* [retval][out] */ IPropertyList **ppPL);
        
        DECLSPEC_XFGVIRT(IVWControlManager, Copy)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IVWControlManager * This,
            /* [in] */ IObjectProperty *pObjProp);
        
        DECLSPEC_XFGVIRT(IVWControlManager, Paste)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Paste )( 
            IVWControlManager * This,
            /* [in] */ IObjectProperty *pObjProp);
        
        END_INTERFACE
    } IVWControlManagerVtbl;

    interface IVWControlManager
    {
        CONST_VTBL struct IVWControlManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWControlManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWControlManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWControlManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWControlManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWControlManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWControlManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWControlManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWControlManager_get_SelectionList(This,ppPL)	\
    ( (This)->lpVtbl -> get_SelectionList(This,ppPL) ) 

#define IVWControlManager_get_UndoStack(This,ppVWUndoStack)	\
    ( (This)->lpVtbl -> get_UndoStack(This,ppVWUndoStack) ) 

#define IVWControlManager_get_World(This,ppWorld)	\
    ( (This)->lpVtbl -> get_World(This,ppWorld) ) 

#define IVWControlManager_put_World(This,pWorld)	\
    ( (This)->lpVtbl -> put_World(This,pWorld) ) 

#define IVWControlManager_AddVWUndoItem(This,pVWUndoItem)	\
    ( (This)->lpVtbl -> AddVWUndoItem(This,pVWUndoItem) ) 

#define IVWControlManager_Undo(This)	\
    ( (This)->lpVtbl -> Undo(This) ) 

#define IVWControlManager_Redo(This)	\
    ( (This)->lpVtbl -> Redo(This) ) 

#define IVWControlManager_DisplayError(This,hr,pbHandled)	\
    ( (This)->lpVtbl -> DisplayError(This,hr,pbHandled) ) 

#define IVWControlManager_Select(This,varSel)	\
    ( (This)->lpVtbl -> Select(This,varSel) ) 

#define IVWControlManager_AddSelectionExt(This,pVw,varSel)	\
    ( (This)->lpVtbl -> AddSelectionExt(This,pVw,varSel) ) 

#define IVWControlManager_AddSelection(This,varSel)	\
    ( (This)->lpVtbl -> AddSelection(This,varSel) ) 

#define IVWControlManager_RemoveSelectionExt(This,pVw,varSel)	\
    ( (This)->lpVtbl -> RemoveSelectionExt(This,pVw,varSel) ) 

#define IVWControlManager_RemoveSelection(This,varSel)	\
    ( (This)->lpVtbl -> RemoveSelection(This,varSel) ) 

#define IVWControlManager_ToggleSelectionExt(This,pVw,varSel)	\
    ( (This)->lpVtbl -> ToggleSelectionExt(This,pVw,varSel) ) 

#define IVWControlManager_ToggleSelection(This,varSel)	\
    ( (This)->lpVtbl -> ToggleSelection(This,varSel) ) 

#define IVWControlManager_ClearSelectionsExt(This,pVw)	\
    ( (This)->lpVtbl -> ClearSelectionsExt(This,pVw) ) 

#define IVWControlManager_ClearSelections(This)	\
    ( (This)->lpVtbl -> ClearSelections(This) ) 

#define IVWControlManager_RefreshObjects(This,pVw,varRefresh)	\
    ( (This)->lpVtbl -> RefreshObjects(This,pVw,varRefresh) ) 

#define IVWControlManager_RefreshObjectsInView(This,pVw,varRefresh)	\
    ( (This)->lpVtbl -> RefreshObjectsInView(This,pVw,varRefresh) ) 

#define IVWControlManager_RefreshView(This,pVw,varHint,varRefreshAllViews)	\
    ( (This)->lpVtbl -> RefreshView(This,pVw,varHint,varRefreshAllViews) ) 

#define IVWControlManager_GetSelectedCount(This,pIID,nCount)	\
    ( (This)->lpVtbl -> GetSelectedCount(This,pIID,nCount) ) 

#define IVWControlManager_IsSelected(This,pObjProp,vbSelected)	\
    ( (This)->lpVtbl -> IsSelected(This,pObjProp,vbSelected) ) 

#define IVWControlManager_IsBoundarySelected(This,pThing,nBoundaryIndex,vbSelected)	\
    ( (This)->lpVtbl -> IsBoundarySelected(This,pThing,nBoundaryIndex,vbSelected) ) 

#define IVWControlManager_IsVertexSelected(This,pObjProp,nIndex,vbSelected)	\
    ( (This)->lpVtbl -> IsVertexSelected(This,pObjProp,nIndex,vbSelected) ) 

#define IVWControlManager_IsAnyVertexSelected(This,pObjProp,vbSelected)	\
    ( (This)->lpVtbl -> IsAnyVertexSelected(This,pObjProp,vbSelected) ) 

#define IVWControlManager_get_Clipboard(This,ppPL)	\
    ( (This)->lpVtbl -> get_Clipboard(This,ppPL) ) 

#define IVWControlManager_Copy(This,pObjProp)	\
    ( (This)->lpVtbl -> Copy(This,pObjProp) ) 

#define IVWControlManager_Paste(This,pObjProp)	\
    ( (This)->lpVtbl -> Paste(This,pObjProp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWControlManager_INTERFACE_DEFINED__ */


#ifndef __IVWUndoItem_INTERFACE_DEFINED__
#define __IVWUndoItem_INTERFACE_DEFINED__

/* interface IVWUndoItem */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWUndoItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("90A54235-EAE9-21CF-6669-445348677270")
    IVWUndoItem : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Undo( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Redo( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Label( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Label( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UndoData( 
            /* [in] */ VARIANT varUndo) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UndoData( 
            /* [retval][out] */ VARIANT *pvarUndo) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RedoData( 
            /* [in] */ VARIANT varRedo) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RedoData( 
            /* [retval][out] */ VARIANT *pvarRedo) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UndoTarget( 
            /* [in] */ VARIANT varTarg) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UndoTarget( 
            /* [retval][out] */ VARIANT *pvarTarg) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExecuteUndo( 
            /* [in] */ IVWExecuteUndo *pexun) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExecuteUndo( 
            /* [retval][out] */ IVWExecuteUndo **ppexun) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UndoHints( 
            /* [retval][out] */ int *ival) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UndoHints( 
            /* [in] */ int ival) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWUndoItemVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWUndoItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWUndoItem * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWUndoItem * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWUndoItem * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWUndoItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWUndoItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWUndoItem * This,
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
        
        DECLSPEC_XFGVIRT(IVWUndoItem, Undo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Undo )( 
            IVWUndoItem * This);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, Redo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Redo )( 
            IVWUndoItem * This);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, put_Label)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Label )( 
            IVWUndoItem * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, get_Label)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Label )( 
            IVWUndoItem * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, put_UndoData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UndoData )( 
            IVWUndoItem * This,
            /* [in] */ VARIANT varUndo);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, get_UndoData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UndoData )( 
            IVWUndoItem * This,
            /* [retval][out] */ VARIANT *pvarUndo);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, put_RedoData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedoData )( 
            IVWUndoItem * This,
            /* [in] */ VARIANT varRedo);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, get_RedoData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedoData )( 
            IVWUndoItem * This,
            /* [retval][out] */ VARIANT *pvarRedo);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, put_UndoTarget)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UndoTarget )( 
            IVWUndoItem * This,
            /* [in] */ VARIANT varTarg);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, get_UndoTarget)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UndoTarget )( 
            IVWUndoItem * This,
            /* [retval][out] */ VARIANT *pvarTarg);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, put_ExecuteUndo)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExecuteUndo )( 
            IVWUndoItem * This,
            /* [in] */ IVWExecuteUndo *pexun);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, get_ExecuteUndo)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExecuteUndo )( 
            IVWUndoItem * This,
            /* [retval][out] */ IVWExecuteUndo **ppexun);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, get_UndoHints)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UndoHints )( 
            IVWUndoItem * This,
            /* [retval][out] */ int *ival);
        
        DECLSPEC_XFGVIRT(IVWUndoItem, put_UndoHints)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UndoHints )( 
            IVWUndoItem * This,
            /* [in] */ int ival);
        
        END_INTERFACE
    } IVWUndoItemVtbl;

    interface IVWUndoItem
    {
        CONST_VTBL struct IVWUndoItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWUndoItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWUndoItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWUndoItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWUndoItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWUndoItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWUndoItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWUndoItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWUndoItem_Undo(This)	\
    ( (This)->lpVtbl -> Undo(This) ) 

#define IVWUndoItem_Redo(This)	\
    ( (This)->lpVtbl -> Redo(This) ) 

#define IVWUndoItem_put_Label(This,bstr)	\
    ( (This)->lpVtbl -> put_Label(This,bstr) ) 

#define IVWUndoItem_get_Label(This,pbstr)	\
    ( (This)->lpVtbl -> get_Label(This,pbstr) ) 

#define IVWUndoItem_put_UndoData(This,varUndo)	\
    ( (This)->lpVtbl -> put_UndoData(This,varUndo) ) 

#define IVWUndoItem_get_UndoData(This,pvarUndo)	\
    ( (This)->lpVtbl -> get_UndoData(This,pvarUndo) ) 

#define IVWUndoItem_put_RedoData(This,varRedo)	\
    ( (This)->lpVtbl -> put_RedoData(This,varRedo) ) 

#define IVWUndoItem_get_RedoData(This,pvarRedo)	\
    ( (This)->lpVtbl -> get_RedoData(This,pvarRedo) ) 

#define IVWUndoItem_put_UndoTarget(This,varTarg)	\
    ( (This)->lpVtbl -> put_UndoTarget(This,varTarg) ) 

#define IVWUndoItem_get_UndoTarget(This,pvarTarg)	\
    ( (This)->lpVtbl -> get_UndoTarget(This,pvarTarg) ) 

#define IVWUndoItem_put_ExecuteUndo(This,pexun)	\
    ( (This)->lpVtbl -> put_ExecuteUndo(This,pexun) ) 

#define IVWUndoItem_get_ExecuteUndo(This,ppexun)	\
    ( (This)->lpVtbl -> get_ExecuteUndo(This,ppexun) ) 

#define IVWUndoItem_get_UndoHints(This,ival)	\
    ( (This)->lpVtbl -> get_UndoHints(This,ival) ) 

#define IVWUndoItem_put_UndoHints(This,ival)	\
    ( (This)->lpVtbl -> put_UndoHints(This,ival) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWUndoItem_INTERFACE_DEFINED__ */


#ifndef __IVWUndoStacks_INTERFACE_DEFINED__
#define __IVWUndoStacks_INTERFACE_DEFINED__

/* interface IVWUndoStacks */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWUndoStacks;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92A54231-EAE9-21CF-6669-441313677270")
    IVWUndoStacks : public IObjectProperty
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Redo( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Undo( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddVWUndoItem( 
            /* [in] */ IVWUndoItem *pVWUndoItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SizeUndoStack( 
            /* [in] */ unsigned int nItems) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SizeUndoStack( 
            /* [retval][out] */ unsigned int *pnItems) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UndoLabel( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RedoLabel( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWUndoStacksVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWUndoStacks * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWUndoStacks * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWUndoStacks * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWUndoStacks * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWUndoStacks * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWUndoStacks * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWUndoStacks * This,
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
        
        DECLSPEC_XFGVIRT(IObjectProperty, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWUndoStacks * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IVWUndoStacks * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IVWUndoStacks * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IVWUndoStacks * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVWUndoStacks * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IVWUndoStacks * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IVWUndoStacks * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IVWUndoStacks * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IVWUndoStacks * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IVWUndoStacks * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IVWUndoStacks * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IVWUndoStacks * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IVWUndoStacks * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IVWUndoStacks * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IVWUndoStacks * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IVWUndoStacks * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IVWUndoStacks * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVWUndoStacks * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IVWUndoStacks * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IVWUndoStacks * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IVWUndoStacks * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IVWUndoStacks, Redo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Redo )( 
            IVWUndoStacks * This);
        
        DECLSPEC_XFGVIRT(IVWUndoStacks, Undo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Undo )( 
            IVWUndoStacks * This);
        
        DECLSPEC_XFGVIRT(IVWUndoStacks, AddVWUndoItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddVWUndoItem )( 
            IVWUndoStacks * This,
            /* [in] */ IVWUndoItem *pVWUndoItem);
        
        DECLSPEC_XFGVIRT(IVWUndoStacks, Flush)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Flush )( 
            IVWUndoStacks * This);
        
        DECLSPEC_XFGVIRT(IVWUndoStacks, put_SizeUndoStack)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SizeUndoStack )( 
            IVWUndoStacks * This,
            /* [in] */ unsigned int nItems);
        
        DECLSPEC_XFGVIRT(IVWUndoStacks, get_SizeUndoStack)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeUndoStack )( 
            IVWUndoStacks * This,
            /* [retval][out] */ unsigned int *pnItems);
        
        DECLSPEC_XFGVIRT(IVWUndoStacks, get_UndoLabel)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UndoLabel )( 
            IVWUndoStacks * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IVWUndoStacks, get_RedoLabel)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedoLabel )( 
            IVWUndoStacks * This,
            /* [retval][out] */ BSTR *pbstr);
        
        END_INTERFACE
    } IVWUndoStacksVtbl;

    interface IVWUndoStacks
    {
        CONST_VTBL struct IVWUndoStacksVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWUndoStacks_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWUndoStacks_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWUndoStacks_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWUndoStacks_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWUndoStacks_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWUndoStacks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWUndoStacks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWUndoStacks_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWUndoStacks_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IVWUndoStacks_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IVWUndoStacks_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IVWUndoStacks_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IVWUndoStacks_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IVWUndoStacks_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IVWUndoStacks_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IVWUndoStacks_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IVWUndoStacks_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IVWUndoStacks_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IVWUndoStacks_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IVWUndoStacks_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IVWUndoStacks_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IVWUndoStacks_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IVWUndoStacks_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IVWUndoStacks_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IVWUndoStacks_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IVWUndoStacks_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IVWUndoStacks_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IVWUndoStacks_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IVWUndoStacks_Redo(This)	\
    ( (This)->lpVtbl -> Redo(This) ) 

#define IVWUndoStacks_Undo(This)	\
    ( (This)->lpVtbl -> Undo(This) ) 

#define IVWUndoStacks_AddVWUndoItem(This,pVWUndoItem)	\
    ( (This)->lpVtbl -> AddVWUndoItem(This,pVWUndoItem) ) 

#define IVWUndoStacks_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define IVWUndoStacks_put_SizeUndoStack(This,nItems)	\
    ( (This)->lpVtbl -> put_SizeUndoStack(This,nItems) ) 

#define IVWUndoStacks_get_SizeUndoStack(This,pnItems)	\
    ( (This)->lpVtbl -> get_SizeUndoStack(This,pnItems) ) 

#define IVWUndoStacks_get_UndoLabel(This,pbstr)	\
    ( (This)->lpVtbl -> get_UndoLabel(This,pbstr) ) 

#define IVWUndoStacks_get_RedoLabel(This,pbstr)	\
    ( (This)->lpVtbl -> get_RedoLabel(This,pbstr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWUndoStacks_INTERFACE_DEFINED__ */


#ifndef __IVWExecuteUndo_INTERFACE_DEFINED__
#define __IVWExecuteUndo_INTERFACE_DEFINED__

/* interface IVWExecuteUndo */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWExecuteUndo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92B54331-EA59-21CF-6669-443343477270")
    IVWExecuteUndo : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Undo( 
            /* [in] */ IVWUndoItem *pundo) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Redo( 
            /* [in] */ IVWUndoItem *predo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWExecuteUndoVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWExecuteUndo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWExecuteUndo * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWExecuteUndo * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWExecuteUndo * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWExecuteUndo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWExecuteUndo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWExecuteUndo * This,
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
        
        DECLSPEC_XFGVIRT(IVWExecuteUndo, Undo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Undo )( 
            IVWExecuteUndo * This,
            /* [in] */ IVWUndoItem *pundo);
        
        DECLSPEC_XFGVIRT(IVWExecuteUndo, Redo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Redo )( 
            IVWExecuteUndo * This,
            /* [in] */ IVWUndoItem *predo);
        
        END_INTERFACE
    } IVWExecuteUndoVtbl;

    interface IVWExecuteUndo
    {
        CONST_VTBL struct IVWExecuteUndoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWExecuteUndo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWExecuteUndo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWExecuteUndo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWExecuteUndo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWExecuteUndo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWExecuteUndo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWExecuteUndo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWExecuteUndo_Undo(This,pundo)	\
    ( (This)->lpVtbl -> Undo(This,pundo) ) 

#define IVWExecuteUndo_Redo(This,predo)	\
    ( (This)->lpVtbl -> Redo(This,predo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWExecuteUndo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vwuiobjs_0000_0006 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("01330D82-113F-11d0-89C9-01A1C9054129") 
enum enumVWUIEventTypes
    {
        VWUIT_ADDSELECTION	= 0,
        VWUIT_REMOVESELECTION	= 1,
        VWUIT_TOGGLESELECTION	= 2,
        VWUIT_CLEARSELECTIONS	= 3,
        VWUIT_REFRESHOBJECTS	= 4,
        VWUIT_REFRESHVIEW	= 5,
        VWUIT_UNDOSTACKCHANGED	= 6
    } 	enumVWUIEventTypes;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("10524604-459A-11d1-88A7-00C04FC32EF3") 
enum enumUndoHint
    {
        NONE	= 0,
        BEGIN_UNDO_GROUP	= 1,
        END_UNDO_GROUP	= 2
    } 	enumUndoHint;



extern RPC_IF_HANDLE __MIDL_itf_vwuiobjs_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwuiobjs_0000_0006_v0_0_s_ifspec;

#ifndef __IVWUIEvents_INTERFACE_DEFINED__
#define __IVWUIEvents_INTERFACE_DEFINED__

/* interface IVWUIEvents */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWUIEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E6FB8A0-995E-11d0-89A9-00A0C9054129")
    IVWUIEvents : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUIUpdate( 
            int iEventType,
            IVWUIView *pVw,
            VARIANT varHint,
            VARIANT_BOOL vbOnlyRefreshSource) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWUIEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWUIEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWUIEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWUIEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWUIEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWUIEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWUIEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWUIEvents * This,
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
        
        DECLSPEC_XFGVIRT(IVWUIEvents, OnUIUpdate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIUpdate )( 
            IVWUIEvents * This,
            int iEventType,
            IVWUIView *pVw,
            VARIANT varHint,
            VARIANT_BOOL vbOnlyRefreshSource);
        
        END_INTERFACE
    } IVWUIEventsVtbl;

    interface IVWUIEvents
    {
        CONST_VTBL struct IVWUIEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWUIEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWUIEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWUIEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWUIEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWUIEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWUIEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWUIEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWUIEvents_OnUIUpdate(This,iEventType,pVw,varHint,vbOnlyRefreshSource)	\
    ( (This)->lpVtbl -> OnUIUpdate(This,iEventType,pVw,varHint,vbOnlyRefreshSource) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWUIEvents_INTERFACE_DEFINED__ */


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


