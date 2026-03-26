

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwpktool.idl:
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

#ifndef __vwpktool_h__
#define __vwpktool_h__

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

#ifndef __IVWPickTool_FWD_DEFINED__
#define __IVWPickTool_FWD_DEFINED__
typedef interface IVWPickTool IVWPickTool;

#endif 	/* __IVWPickTool_FWD_DEFINED__ */


/* header files for imported files */
#include "vwuiobjs.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IVWPickTool_INTERFACE_DEFINED__
#define __IVWPickTool_INTERFACE_DEFINED__

/* interface IVWPickTool */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWPickTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B2A1B42-43A9-11D0-8AC3-00A0C90A6BFC")
    IVWPickTool : public IVWUITool
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IVWPickToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWPickTool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWPickTool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWPickTool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWPickTool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWPickTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWPickTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWPickTool * This,
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
            IVWPickTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWPickTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ IWorld *pWorld,
            /* [in] */ IVWRenderRoot *pVWRenderRoot);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolActivate )( 
            IVWPickTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolChanging)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolChanging )( 
            IVWPickTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnMessage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMessage )( 
            IVWPickTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ unsigned int message,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IVWUITool, IsValid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IVWPickTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IVWUITool, SetCursor)
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *SetCursor )( 
            IVWPickTool * This,
            /* [in] */ IVWUIView *pVWUIView,
            /* [in] */ HCURSOR hCursor);
        
        DECLSPEC_XFGVIRT(IVWUITool, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IVWPickTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIEvent )( 
            IVWPickTool * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg,
            /* [in] */ BOOL bFromClient);
        
        END_INTERFACE
    } IVWPickToolVtbl;

    interface IVWPickTool
    {
        CONST_VTBL struct IVWPickToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWPickTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWPickTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWPickTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWPickTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWPickTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWPickTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWPickTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWPickTool_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWPickTool_Initialize(This,pVw,pWorld,pVWRenderRoot)	\
    ( (This)->lpVtbl -> Initialize(This,pVw,pWorld,pVWRenderRoot) ) 

#define IVWPickTool_OnToolActivate(This,varHint)	\
    ( (This)->lpVtbl -> OnToolActivate(This,varHint) ) 

#define IVWPickTool_OnToolChanging(This,varHint)	\
    ( (This)->lpVtbl -> OnToolChanging(This,varHint) ) 

#define IVWPickTool_OnMessage(This,pVw,message,wParam,lParam,pbHandled)	\
    ( (This)->lpVtbl -> OnMessage(This,pVw,message,wParam,lParam,pbHandled) ) 

#define IVWPickTool_IsValid(This,pVw,pbool)	\
    ( (This)->lpVtbl -> IsValid(This,pVw,pbool) ) 

#define IVWPickTool_SetCursor(This,pVWUIView,hCursor)	\
    ( (This)->lpVtbl -> SetCursor(This,pVWUIView,hCursor) ) 

#define IVWPickTool_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IVWPickTool_OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient)	\
    ( (This)->lpVtbl -> OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWPickTool_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


