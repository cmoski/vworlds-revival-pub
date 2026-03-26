

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwocx/uictrl/uictrl.odl:
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


#ifndef __uictrl_h_h__
#define __uictrl_h_h__

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

#ifndef ___DVWSelfVw_FWD_DEFINED__
#define ___DVWSelfVw_FWD_DEFINED__
typedef interface _DVWSelfVw _DVWSelfVw;

#endif 	/* ___DVWSelfVw_FWD_DEFINED__ */


#ifndef ___DVWSelfVwEvents_FWD_DEFINED__
#define ___DVWSelfVwEvents_FWD_DEFINED__
typedef interface _DVWSelfVwEvents _DVWSelfVwEvents;

#endif 	/* ___DVWSelfVwEvents_FWD_DEFINED__ */


#ifndef __VWSelfVw_FWD_DEFINED__
#define __VWSelfVw_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWSelfVw VWSelfVw;
#else
typedef struct VWSelfVw VWSelfVw;
#endif /* __cplusplus */

#endif 	/* __VWSelfVw_FWD_DEFINED__ */


#ifndef ___DHistory_FWD_DEFINED__
#define ___DHistory_FWD_DEFINED__
typedef interface _DHistory _DHistory;

#endif 	/* ___DHistory_FWD_DEFINED__ */


#ifndef ___DHistoryEvents_FWD_DEFINED__
#define ___DHistoryEvents_FWD_DEFINED__
typedef interface _DHistoryEvents _DHistoryEvents;

#endif 	/* ___DHistoryEvents_FWD_DEFINED__ */


#ifndef __History_FWD_DEFINED__
#define __History_FWD_DEFINED__

#ifdef __cplusplus
typedef class History History;
#else
typedef struct History History;
#endif /* __cplusplus */

#endif 	/* __History_FWD_DEFINED__ */


#ifndef ___DScriptocx_FWD_DEFINED__
#define ___DScriptocx_FWD_DEFINED__
typedef interface _DScriptocx _DScriptocx;

#endif 	/* ___DScriptocx_FWD_DEFINED__ */


#ifndef ___DScriptocxEvents_FWD_DEFINED__
#define ___DScriptocxEvents_FWD_DEFINED__
typedef interface _DScriptocxEvents _DScriptocxEvents;

#endif 	/* ___DScriptocxEvents_FWD_DEFINED__ */


#ifndef __Scriptocx_FWD_DEFINED__
#define __Scriptocx_FWD_DEFINED__

#ifdef __cplusplus
typedef class Scriptocx Scriptocx;
#else
typedef struct Scriptocx Scriptocx;
#endif /* __cplusplus */

#endif 	/* __Scriptocx_FWD_DEFINED__ */


#ifndef ___DAvatarList_FWD_DEFINED__
#define ___DAvatarList_FWD_DEFINED__
typedef interface _DAvatarList _DAvatarList;

#endif 	/* ___DAvatarList_FWD_DEFINED__ */


#ifndef ___DAvatarListEvents_FWD_DEFINED__
#define ___DAvatarListEvents_FWD_DEFINED__
typedef interface _DAvatarListEvents _DAvatarListEvents;

#endif 	/* ___DAvatarListEvents_FWD_DEFINED__ */


#ifndef __AvatarList_FWD_DEFINED__
#define __AvatarList_FWD_DEFINED__

#ifdef __cplusplus
typedef class AvatarList AvatarList;
#else
typedef struct AvatarList AvatarList;
#endif /* __cplusplus */

#endif 	/* __AvatarList_FWD_DEFINED__ */


#ifndef ___DWebBrowserHelper_FWD_DEFINED__
#define ___DWebBrowserHelper_FWD_DEFINED__
typedef interface _DWebBrowserHelper _DWebBrowserHelper;

#endif 	/* ___DWebBrowserHelper_FWD_DEFINED__ */


#ifndef ___DWebBrowserHelperEvents_FWD_DEFINED__
#define ___DWebBrowserHelperEvents_FWD_DEFINED__
typedef interface _DWebBrowserHelperEvents _DWebBrowserHelperEvents;

#endif 	/* ___DWebBrowserHelperEvents_FWD_DEFINED__ */


#ifndef __WebBrowserHelper_FWD_DEFINED__
#define __WebBrowserHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebBrowserHelper WebBrowserHelper;
#else
typedef struct WebBrowserHelper WebBrowserHelper;
#endif /* __cplusplus */

#endif 	/* __WebBrowserHelper_FWD_DEFINED__ */


#ifndef ___DVwsound_FWD_DEFINED__
#define ___DVwsound_FWD_DEFINED__
typedef interface _DVwsound _DVwsound;

#endif 	/* ___DVwsound_FWD_DEFINED__ */


#ifndef ___DVwsoundEvents_FWD_DEFINED__
#define ___DVwsoundEvents_FWD_DEFINED__
typedef interface _DVwsoundEvents _DVwsoundEvents;

#endif 	/* ___DVwsoundEvents_FWD_DEFINED__ */


#ifndef __Vwsound_FWD_DEFINED__
#define __Vwsound_FWD_DEFINED__

#ifdef __cplusplus
typedef class Vwsound Vwsound;
#else
typedef struct Vwsound Vwsound;
#endif /* __cplusplus */

#endif 	/* __Vwsound_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_uictrl_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_uictrl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uictrl_0000_0000_v0_0_s_ifspec;


#ifndef __UICTRLLib_LIBRARY_DEFINED__
#define __UICTRLLib_LIBRARY_DEFINED__

/* library UICTRLLib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_UICTRLLib;

#ifndef ___DVWSelfVw_DISPINTERFACE_DEFINED__
#define ___DVWSelfVw_DISPINTERFACE_DEFINED__

/* dispinterface _DVWSelfVw */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DVWSelfVw;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("63FB7201-909E-11D0-89AA-00A0C9054129")
    _DVWSelfVw : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DVWSelfVwVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DVWSelfVw * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DVWSelfVw * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DVWSelfVw * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DVWSelfVw * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DVWSelfVw * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DVWSelfVw * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DVWSelfVw * This,
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
        
        END_INTERFACE
    } _DVWSelfVwVtbl;

    interface _DVWSelfVw
    {
        CONST_VTBL struct _DVWSelfVwVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DVWSelfVw_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DVWSelfVw_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DVWSelfVw_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DVWSelfVw_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DVWSelfVw_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DVWSelfVw_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DVWSelfVw_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DVWSelfVw_DISPINTERFACE_DEFINED__ */


#ifndef ___DVWSelfVwEvents_DISPINTERFACE_DEFINED__
#define ___DVWSelfVwEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DVWSelfVwEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DVWSelfVwEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("63FB7202-909E-11D0-89AA-00A0C9054129")
    _DVWSelfVwEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DVWSelfVwEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DVWSelfVwEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DVWSelfVwEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DVWSelfVwEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DVWSelfVwEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DVWSelfVwEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DVWSelfVwEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DVWSelfVwEvents * This,
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
        
        END_INTERFACE
    } _DVWSelfVwEventsVtbl;

    interface _DVWSelfVwEvents
    {
        CONST_VTBL struct _DVWSelfVwEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DVWSelfVwEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DVWSelfVwEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DVWSelfVwEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DVWSelfVwEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DVWSelfVwEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DVWSelfVwEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DVWSelfVwEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DVWSelfVwEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VWSelfVw;

#ifdef __cplusplus

class DECLSPEC_UUID("63FB7203-909E-11D0-89AA-00A0C9054129")
VWSelfVw;
#endif

#ifndef ___DHistory_DISPINTERFACE_DEFINED__
#define ___DHistory_DISPINTERFACE_DEFINED__

/* dispinterface _DHistory */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DHistory;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F5029F69-AF74-11D0-A78C-00A0C90AAA10")
    _DHistory : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DHistoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DHistory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DHistory * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DHistory * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DHistory * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DHistory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DHistory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DHistory * This,
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
        
        END_INTERFACE
    } _DHistoryVtbl;

    interface _DHistory
    {
        CONST_VTBL struct _DHistoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DHistory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DHistory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DHistory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DHistory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DHistory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DHistory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DHistory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DHistory_DISPINTERFACE_DEFINED__ */


#ifndef ___DHistoryEvents_DISPINTERFACE_DEFINED__
#define ___DHistoryEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DHistoryEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DHistoryEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F5029F6A-AF74-11D0-A78C-00A0C90AAA10")
    _DHistoryEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DHistoryEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DHistoryEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DHistoryEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DHistoryEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DHistoryEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DHistoryEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DHistoryEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DHistoryEvents * This,
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
        
        END_INTERFACE
    } _DHistoryEventsVtbl;

    interface _DHistoryEvents
    {
        CONST_VTBL struct _DHistoryEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DHistoryEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DHistoryEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DHistoryEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DHistoryEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DHistoryEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DHistoryEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DHistoryEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DHistoryEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_History;

#ifdef __cplusplus

class DECLSPEC_UUID("F5029F6B-AF74-11D0-A78C-00A0C90AAA10")
History;
#endif

#ifndef ___DScriptocx_DISPINTERFACE_DEFINED__
#define ___DScriptocx_DISPINTERFACE_DEFINED__

/* dispinterface _DScriptocx */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DScriptocx;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0E5D5944-020F-11D1-83AB-00C04FB6FA46")
    _DScriptocx : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DScriptocxVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DScriptocx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DScriptocx * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DScriptocx * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DScriptocx * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DScriptocx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DScriptocx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DScriptocx * This,
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
        
        END_INTERFACE
    } _DScriptocxVtbl;

    interface _DScriptocx
    {
        CONST_VTBL struct _DScriptocxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DScriptocx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DScriptocx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DScriptocx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DScriptocx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DScriptocx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DScriptocx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DScriptocx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DScriptocx_DISPINTERFACE_DEFINED__ */


#ifndef ___DScriptocxEvents_DISPINTERFACE_DEFINED__
#define ___DScriptocxEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DScriptocxEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DScriptocxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0E5D5945-020F-11D1-83AB-00C04FB6FA46")
    _DScriptocxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DScriptocxEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DScriptocxEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DScriptocxEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DScriptocxEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DScriptocxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DScriptocxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DScriptocxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DScriptocxEvents * This,
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
        
        END_INTERFACE
    } _DScriptocxEventsVtbl;

    interface _DScriptocxEvents
    {
        CONST_VTBL struct _DScriptocxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DScriptocxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DScriptocxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DScriptocxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DScriptocxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DScriptocxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DScriptocxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DScriptocxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DScriptocxEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Scriptocx;

#ifdef __cplusplus

class DECLSPEC_UUID("0E5D5946-020F-11D1-83AB-00C04FB6FA46")
Scriptocx;
#endif

#ifndef ___DAvatarList_DISPINTERFACE_DEFINED__
#define ___DAvatarList_DISPINTERFACE_DEFINED__

/* dispinterface _DAvatarList */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DAvatarList;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("AF0AD5CA-418B-11D1-BB2B-00C04FC2CAB1")
    _DAvatarList : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DAvatarListVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DAvatarList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DAvatarList * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DAvatarList * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DAvatarList * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DAvatarList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DAvatarList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DAvatarList * This,
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
        
        END_INTERFACE
    } _DAvatarListVtbl;

    interface _DAvatarList
    {
        CONST_VTBL struct _DAvatarListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DAvatarList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DAvatarList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DAvatarList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DAvatarList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DAvatarList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DAvatarList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DAvatarList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DAvatarList_DISPINTERFACE_DEFINED__ */


#ifndef ___DAvatarListEvents_DISPINTERFACE_DEFINED__
#define ___DAvatarListEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DAvatarListEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DAvatarListEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("AF0AD5CB-418B-11D1-BB2B-00C04FC2CAB1")
    _DAvatarListEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DAvatarListEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DAvatarListEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DAvatarListEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DAvatarListEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DAvatarListEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DAvatarListEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DAvatarListEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DAvatarListEvents * This,
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
        
        END_INTERFACE
    } _DAvatarListEventsVtbl;

    interface _DAvatarListEvents
    {
        CONST_VTBL struct _DAvatarListEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DAvatarListEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DAvatarListEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DAvatarListEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DAvatarListEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DAvatarListEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DAvatarListEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DAvatarListEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DAvatarListEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AvatarList;

#ifdef __cplusplus

class DECLSPEC_UUID("AF0AD5CC-418B-11D1-BB2B-00C04FC2CAB1")
AvatarList;
#endif

#ifndef ___DWebBrowserHelper_DISPINTERFACE_DEFINED__
#define ___DWebBrowserHelper_DISPINTERFACE_DEFINED__

/* dispinterface _DWebBrowserHelper */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DWebBrowserHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7886A634-606B-11d1-BB36-00C04FC2CAB1")
    _DWebBrowserHelper : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DWebBrowserHelperVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DWebBrowserHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DWebBrowserHelper * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DWebBrowserHelper * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DWebBrowserHelper * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DWebBrowserHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DWebBrowserHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DWebBrowserHelper * This,
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
        
        END_INTERFACE
    } _DWebBrowserHelperVtbl;

    interface _DWebBrowserHelper
    {
        CONST_VTBL struct _DWebBrowserHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DWebBrowserHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DWebBrowserHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DWebBrowserHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DWebBrowserHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DWebBrowserHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DWebBrowserHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DWebBrowserHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DWebBrowserHelper_DISPINTERFACE_DEFINED__ */


#ifndef ___DWebBrowserHelperEvents_DISPINTERFACE_DEFINED__
#define ___DWebBrowserHelperEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DWebBrowserHelperEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DWebBrowserHelperEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7886A635-606B-11d1-BB36-00C04FC2CAB1")
    _DWebBrowserHelperEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DWebBrowserHelperEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DWebBrowserHelperEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DWebBrowserHelperEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DWebBrowserHelperEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DWebBrowserHelperEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DWebBrowserHelperEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DWebBrowserHelperEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DWebBrowserHelperEvents * This,
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
        
        END_INTERFACE
    } _DWebBrowserHelperEventsVtbl;

    interface _DWebBrowserHelperEvents
    {
        CONST_VTBL struct _DWebBrowserHelperEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DWebBrowserHelperEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DWebBrowserHelperEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DWebBrowserHelperEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DWebBrowserHelperEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DWebBrowserHelperEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DWebBrowserHelperEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DWebBrowserHelperEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DWebBrowserHelperEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_WebBrowserHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("7886A636-606B-11d1-BB36-00C04FC2CAB1")
WebBrowserHelper;
#endif

#ifndef ___DVwsound_DISPINTERFACE_DEFINED__
#define ___DVwsound_DISPINTERFACE_DEFINED__

/* dispinterface _DVwsound */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DVwsound;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("05769B8A-A180-11D1-83E9-00C04FB6FA46")
    _DVwsound : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DVwsoundVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DVwsound * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DVwsound * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DVwsound * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DVwsound * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DVwsound * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DVwsound * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DVwsound * This,
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
        
        END_INTERFACE
    } _DVwsoundVtbl;

    interface _DVwsound
    {
        CONST_VTBL struct _DVwsoundVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DVwsound_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DVwsound_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DVwsound_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DVwsound_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DVwsound_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DVwsound_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DVwsound_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DVwsound_DISPINTERFACE_DEFINED__ */


#ifndef ___DVwsoundEvents_DISPINTERFACE_DEFINED__
#define ___DVwsoundEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DVwsoundEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DVwsoundEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("05769B8B-A180-11D1-83E9-00C04FB6FA46")
    _DVwsoundEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DVwsoundEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DVwsoundEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DVwsoundEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DVwsoundEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DVwsoundEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DVwsoundEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DVwsoundEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DVwsoundEvents * This,
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
        
        END_INTERFACE
    } _DVwsoundEventsVtbl;

    interface _DVwsoundEvents
    {
        CONST_VTBL struct _DVwsoundEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DVwsoundEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DVwsoundEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DVwsoundEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DVwsoundEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DVwsoundEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DVwsoundEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DVwsoundEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DVwsoundEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Vwsound;

#ifdef __cplusplus

class DECLSPEC_UUID("05769B8C-A180-11D1-83E9-00C04FB6FA46")
Vwsound;
#endif
#endif /* __UICTRLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


