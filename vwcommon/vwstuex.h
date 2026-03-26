

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwstuex.idl:
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

#ifndef __vwstuex_h__
#define __vwstuex_h__

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

#ifndef __IStudioExemplar_FWD_DEFINED__
#define __IStudioExemplar_FWD_DEFINED__
typedef interface IStudioExemplar IStudioExemplar;

#endif 	/* __IStudioExemplar_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "vwobject.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IStudioExemplar_INTERFACE_DEFINED__
#define __IStudioExemplar_INTERFACE_DEFINED__

/* interface IStudioExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IStudioExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("717B5AA6-7267-11d1-959F-00C04FD91F4D")
    IStudioExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnCameraFollowsObjectChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnSelectionLockChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnGravityChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnCollisionDetectionChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnEditingModeChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTypeFromProperty( 
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrPropName,
            /* [retval][out] */ BSTR *bstrType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIIDFromType( 
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ BSTR *bstrIID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStudioExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStudioExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStudioExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStudioExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStudioExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStudioExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStudioExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStudioExemplar * This,
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
        
        DECLSPEC_XFGVIRT(IVWDispatch, Initialize)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IStudioExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IStudioExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IStudioExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IStudioExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IStudioExemplar * This);
        
        DECLSPEC_XFGVIRT(IStudioExemplar, OnCameraFollowsObjectChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnCameraFollowsObjectChanged )( 
            IStudioExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IStudioExemplar, OnSelectionLockChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionLockChanged )( 
            IStudioExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IStudioExemplar, OnGravityChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnGravityChanged )( 
            IStudioExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IStudioExemplar, OnCollisionDetectionChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnCollisionDetectionChanged )( 
            IStudioExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IStudioExemplar, OnEditingModeChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnEditingModeChanged )( 
            IStudioExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IStudioExemplar, GetTypeFromProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeFromProperty )( 
            IStudioExemplar * This,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrPropName,
            /* [retval][out] */ BSTR *bstrType);
        
        DECLSPEC_XFGVIRT(IStudioExemplar, GetIIDFromType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIIDFromType )( 
            IStudioExemplar * This,
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ BSTR *bstrIID);
        
        END_INTERFACE
    } IStudioExemplarVtbl;

    interface IStudioExemplar
    {
        CONST_VTBL struct IStudioExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStudioExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStudioExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStudioExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStudioExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStudioExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStudioExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStudioExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStudioExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IStudioExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IStudioExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IStudioExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IStudioExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IStudioExemplar_OnCameraFollowsObjectChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnCameraFollowsObjectChanged(This,lHint,varHintData) ) 

#define IStudioExemplar_OnSelectionLockChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnSelectionLockChanged(This,lHint,varHintData) ) 

#define IStudioExemplar_OnGravityChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnGravityChanged(This,lHint,varHintData) ) 

#define IStudioExemplar_OnCollisionDetectionChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnCollisionDetectionChanged(This,lHint,varHintData) ) 

#define IStudioExemplar_OnEditingModeChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnEditingModeChanged(This,lHint,varHintData) ) 

#define IStudioExemplar_GetTypeFromProperty(This,pThing,bstrPropName,bstrType)	\
    ( (This)->lpVtbl -> GetTypeFromProperty(This,pThing,bstrPropName,bstrType) ) 

#define IStudioExemplar_GetIIDFromType(This,bstrType,bstrIID)	\
    ( (This)->lpVtbl -> GetIIDFromType(This,bstrType,bstrIID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStudioExemplar_INTERFACE_DEFINED__ */


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


