

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/convgeom.idl:
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

#ifndef __convgeom_h__
#define __convgeom_h__

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

#ifndef __ITextureCallback_FWD_DEFINED__
#define __ITextureCallback_FWD_DEFINED__
typedef interface ITextureCallback ITextureCallback;

#endif 	/* __ITextureCallback_FWD_DEFINED__ */


#ifndef __IConvertGeometry_FWD_DEFINED__
#define __IConvertGeometry_FWD_DEFINED__
typedef interface IConvertGeometry IConvertGeometry;

#endif 	/* __IConvertGeometry_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "d2d.h"
#include "inetfile.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITextureCallback_INTERFACE_DEFINED__
#define __ITextureCallback_INTERFACE_DEFINED__

/* interface ITextureCallback */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_ITextureCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F40634C0-1F05-11d1-811D-00C04FB6A5C8")
    ITextureCallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadTextureCallback( 
            BSTR bstr,
            LPDIRECT3DRMTEXTURE *ppD3DTexture) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITextureCallbackVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextureCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextureCallback * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextureCallback * This);
        
        DECLSPEC_XFGVIRT(ITextureCallback, LoadTextureCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadTextureCallback )( 
            ITextureCallback * This,
            BSTR bstr,
            LPDIRECT3DRMTEXTURE *ppD3DTexture);
        
        END_INTERFACE
    } ITextureCallbackVtbl;

    interface ITextureCallback
    {
        CONST_VTBL struct ITextureCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextureCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextureCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextureCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextureCallback_LoadTextureCallback(This,bstr,ppD3DTexture)	\
    ( (This)->lpVtbl -> LoadTextureCallback(This,bstr,ppD3DTexture) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextureCallback_INTERFACE_DEFINED__ */


#ifndef __IConvertGeometry_INTERFACE_DEFINED__
#define __IConvertGeometry_INTERFACE_DEFINED__

/* interface IConvertGeometry */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IConvertGeometry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9AF93F40-CABD-11d0-811D-00C04FB6A5C8")
    IConvertGeometry : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadScene( 
            /* [in] */ BSTR bstr,
            /* [in] */ ITextureCallback *pCGTCallback,
            /* [retval][out] */ VARIANT *pvarFrame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ LPDIRECT3DRM piD3DRMParam,
            /* [in] */ LPDIRECT2DRM piD2DRMParam,
            /* [in] */ IInternetFileManager *piInternetFileManagerParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Extensions( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LoadTextures( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LoadTextures( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeepCachedTextureNames( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_KeepCachedTextureNames( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConvertGeometryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConvertGeometry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConvertGeometry * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConvertGeometry * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IConvertGeometry * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IConvertGeometry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IConvertGeometry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IConvertGeometry * This,
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
        
        DECLSPEC_XFGVIRT(IConvertGeometry, ReadScene)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadScene )( 
            IConvertGeometry * This,
            /* [in] */ BSTR bstr,
            /* [in] */ ITextureCallback *pCGTCallback,
            /* [retval][out] */ VARIANT *pvarFrame);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, Init)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IConvertGeometry * This,
            /* [in] */ LPDIRECT3DRM piD3DRMParam,
            /* [in] */ LPDIRECT2DRM piD2DRMParam,
            /* [in] */ IInternetFileManager *piInternetFileManagerParam);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, Name)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Name )( 
            IConvertGeometry * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, Extensions)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Extensions )( 
            IConvertGeometry * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, get_LoadTextures)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadTextures )( 
            IConvertGeometry * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, put_LoadTextures)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadTextures )( 
            IConvertGeometry * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, get_KeepCachedTextureNames)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeepCachedTextureNames )( 
            IConvertGeometry * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, put_KeepCachedTextureNames)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeepCachedTextureNames )( 
            IConvertGeometry * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IConvertGeometryVtbl;

    interface IConvertGeometry
    {
        CONST_VTBL struct IConvertGeometryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConvertGeometry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConvertGeometry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConvertGeometry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConvertGeometry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IConvertGeometry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IConvertGeometry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IConvertGeometry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IConvertGeometry_ReadScene(This,bstr,pCGTCallback,pvarFrame)	\
    ( (This)->lpVtbl -> ReadScene(This,bstr,pCGTCallback,pvarFrame) ) 

#define IConvertGeometry_Init(This,piD3DRMParam,piD2DRMParam,piInternetFileManagerParam)	\
    ( (This)->lpVtbl -> Init(This,piD3DRMParam,piD2DRMParam,piInternetFileManagerParam) ) 

#define IConvertGeometry_Name(This,pbstr)	\
    ( (This)->lpVtbl -> Name(This,pbstr) ) 

#define IConvertGeometry_Extensions(This,pbstr)	\
    ( (This)->lpVtbl -> Extensions(This,pbstr) ) 

#define IConvertGeometry_get_LoadTextures(This,pVal)	\
    ( (This)->lpVtbl -> get_LoadTextures(This,pVal) ) 

#define IConvertGeometry_put_LoadTextures(This,newVal)	\
    ( (This)->lpVtbl -> put_LoadTextures(This,newVal) ) 

#define IConvertGeometry_get_KeepCachedTextureNames(This,pVal)	\
    ( (This)->lpVtbl -> get_KeepCachedTextureNames(This,pVal) ) 

#define IConvertGeometry_put_KeepCachedTextureNames(This,newVal)	\
    ( (This)->lpVtbl -> put_KeepCachedTextureNames(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConvertGeometry_INTERFACE_DEFINED__ */


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


