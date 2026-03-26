

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwgcache.idl:
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

#ifndef __vwgcache_h__
#define __vwgcache_h__

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

#ifndef __IVWGeometryCache_FWD_DEFINED__
#define __IVWGeometryCache_FWD_DEFINED__
typedef interface IVWGeometryCache IVWGeometryCache;

#endif 	/* __IVWGeometryCache_FWD_DEFINED__ */


/* header files for imported files */
#include "vwobject.h"
#include "vwrender.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwgcache_0000_0000 */
/* [local] */ 


#ifndef __D3DRM_H__
typedef int D3DRMIMAGE;

typedef int *LPDIRECT3DRMTEXTURE;

typedef int IDirect3DRMFrame;

typedef int IDirect3DRMFace;

#endif
#ifndef __d2d_h__
typedef IDispatch *LPDIRECT2DRMIMAGE;

#endif


extern RPC_IF_HANDLE __MIDL_itf_vwgcache_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwgcache_0000_0000_v0_0_s_ifspec;

#ifndef __IVWGeometryCache_INTERFACE_DEFINED__
#define __IVWGeometryCache_INTERFACE_DEFINED__

/* interface IVWGeometryCache */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWGeometryCache;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E2186710-116A-11D0-89A9-00A0C9054129")
    IVWGeometryCache : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IWorld *pWorld) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE LoadGeometry( 
            /* [in] */ BSTR bstrGeometry,
            /* [retval][out] */ IVWFrame **ppvwf) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ReleaseGeometry( 
            /* [in] */ IVWFrame *pvwf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetGeomCacheSize( 
            /* [in] */ long iCacheSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWGeometryCacheVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWGeometryCache * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWGeometryCache * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWGeometryCache * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWGeometryCache * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWGeometryCache * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWGeometryCache * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWGeometryCache * This,
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
        
        DECLSPEC_XFGVIRT(IVWGeometryCache, Init)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IVWGeometryCache * This,
            /* [in] */ IWorld *pWorld);
        
        DECLSPEC_XFGVIRT(IVWGeometryCache, LoadGeometry)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *LoadGeometry )( 
            IVWGeometryCache * This,
            /* [in] */ BSTR bstrGeometry,
            /* [retval][out] */ IVWFrame **ppvwf);
        
        DECLSPEC_XFGVIRT(IVWGeometryCache, ReleaseGeometry)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReleaseGeometry )( 
            IVWGeometryCache * This,
            /* [in] */ IVWFrame *pvwf);
        
        DECLSPEC_XFGVIRT(IVWGeometryCache, SetGeomCacheSize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetGeomCacheSize )( 
            IVWGeometryCache * This,
            /* [in] */ long iCacheSize);
        
        END_INTERFACE
    } IVWGeometryCacheVtbl;

    interface IVWGeometryCache
    {
        CONST_VTBL struct IVWGeometryCacheVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWGeometryCache_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWGeometryCache_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWGeometryCache_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWGeometryCache_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWGeometryCache_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWGeometryCache_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWGeometryCache_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWGeometryCache_Init(This,pWorld)	\
    ( (This)->lpVtbl -> Init(This,pWorld) ) 

#define IVWGeometryCache_LoadGeometry(This,bstrGeometry,ppvwf)	\
    ( (This)->lpVtbl -> LoadGeometry(This,bstrGeometry,ppvwf) ) 

#define IVWGeometryCache_ReleaseGeometry(This,pvwf)	\
    ( (This)->lpVtbl -> ReleaseGeometry(This,pvwf) ) 

#define IVWGeometryCache_SetGeomCacheSize(This,iCacheSize)	\
    ( (This)->lpVtbl -> SetGeomCacheSize(This,iCacheSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWGeometryCache_INTERFACE_DEFINED__ */


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


