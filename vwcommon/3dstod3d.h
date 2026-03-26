

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/3dstod3d.idl:
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

#ifndef ___3dstod3d_h__
#define ___3dstod3d_h__

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

#ifndef __IConvert3DSGeometry_FWD_DEFINED__
#define __IConvert3DSGeometry_FWD_DEFINED__
typedef interface IConvert3DSGeometry IConvert3DSGeometry;

#endif 	/* __IConvert3DSGeometry_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "convgeom.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IConvert3DSGeometry_INTERFACE_DEFINED__
#define __IConvert3DSGeometry_INTERFACE_DEFINED__

/* interface IConvert3DSGeometry */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IConvert3DSGeometry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8639C43D-C5F0-11D0-811D-00C04FB6A5C8")
    IConvert3DSGeometry : public IConvertGeometry
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ LPDIRECT3DRM piD3DRMParam,
            /* [in] */ LPDIRECT2DRM piD2DRMParam,
            /* [in] */ IInternetFileManager *piInternetFileManagerParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadScene( 
            /* [in] */ BSTR bstr,
            /* [in] */ ITextureCallback *pCGTCallback,
            /* [retval][out] */ VARIANT *pvarFrame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Name( 
            /* [retval][out] */ BSTR *bstr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Extensions( 
            /* [retval][out] */ BSTR *bstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleFactor( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleFactor( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConvertAnimation( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConvertAnimation( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
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

    typedef struct IConvert3DSGeometryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConvert3DSGeometry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConvert3DSGeometry * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConvert3DSGeometry * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IConvert3DSGeometry * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IConvert3DSGeometry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IConvert3DSGeometry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IConvert3DSGeometry * This,
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
            IConvert3DSGeometry * This,
            /* [in] */ BSTR bstr,
            /* [in] */ ITextureCallback *pCGTCallback,
            /* [retval][out] */ VARIANT *pvarFrame);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, Init)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IConvert3DSGeometry * This,
            /* [in] */ LPDIRECT3DRM piD3DRMParam,
            /* [in] */ LPDIRECT2DRM piD2DRMParam,
            /* [in] */ IInternetFileManager *piInternetFileManagerParam);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, Name)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Name )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, Extensions)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Extensions )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, get_LoadTextures)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadTextures )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, put_LoadTextures)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadTextures )( 
            IConvert3DSGeometry * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, get_KeepCachedTextureNames)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeepCachedTextureNames )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IConvertGeometry, put_KeepCachedTextureNames)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeepCachedTextureNames )( 
            IConvert3DSGeometry * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, Init)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IConvert3DSGeometry * This,
            /* [in] */ LPDIRECT3DRM piD3DRMParam,
            /* [in] */ LPDIRECT2DRM piD2DRMParam,
            /* [in] */ IInternetFileManager *piInternetFileManagerParam);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, ReadScene)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadScene )( 
            IConvert3DSGeometry * This,
            /* [in] */ BSTR bstr,
            /* [in] */ ITextureCallback *pCGTCallback,
            /* [retval][out] */ VARIANT *pvarFrame);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, Name)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Name )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ BSTR *bstr);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, Extensions)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Extensions )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ BSTR *bstr);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, get_ScaleFactor)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleFactor )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ double *pVal);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, put_ScaleFactor)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleFactor )( 
            IConvert3DSGeometry * This,
            /* [in] */ double newVal);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, get_ConvertAnimation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConvertAnimation )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, put_ConvertAnimation)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConvertAnimation )( 
            IConvert3DSGeometry * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, get_LoadTextures)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadTextures )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, put_LoadTextures)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadTextures )( 
            IConvert3DSGeometry * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, get_KeepCachedTextureNames)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeepCachedTextureNames )( 
            IConvert3DSGeometry * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IConvert3DSGeometry, put_KeepCachedTextureNames)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeepCachedTextureNames )( 
            IConvert3DSGeometry * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IConvert3DSGeometryVtbl;

    interface IConvert3DSGeometry
    {
        CONST_VTBL struct IConvert3DSGeometryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConvert3DSGeometry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConvert3DSGeometry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConvert3DSGeometry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConvert3DSGeometry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IConvert3DSGeometry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IConvert3DSGeometry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IConvert3DSGeometry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IConvert3DSGeometry_ReadScene(This,bstr,pCGTCallback,pvarFrame)	\
    ( (This)->lpVtbl -> ReadScene(This,bstr,pCGTCallback,pvarFrame) ) 

#define IConvert3DSGeometry_Init(This,piD3DRMParam,piD2DRMParam,piInternetFileManagerParam)	\
    ( (This)->lpVtbl -> Init(This,piD3DRMParam,piD2DRMParam,piInternetFileManagerParam) ) 

#define IConvert3DSGeometry_Name(This,pbstr)	\
    ( (This)->lpVtbl -> Name(This,pbstr) ) 

#define IConvert3DSGeometry_Extensions(This,pbstr)	\
    ( (This)->lpVtbl -> Extensions(This,pbstr) ) 

#define IConvert3DSGeometry_get_LoadTextures(This,pVal)	\
    ( (This)->lpVtbl -> get_LoadTextures(This,pVal) ) 

#define IConvert3DSGeometry_put_LoadTextures(This,newVal)	\
    ( (This)->lpVtbl -> put_LoadTextures(This,newVal) ) 

#define IConvert3DSGeometry_get_KeepCachedTextureNames(This,pVal)	\
    ( (This)->lpVtbl -> get_KeepCachedTextureNames(This,pVal) ) 

#define IConvert3DSGeometry_put_KeepCachedTextureNames(This,newVal)	\
    ( (This)->lpVtbl -> put_KeepCachedTextureNames(This,newVal) ) 


#define IConvert3DSGeometry_Init(This,piD3DRMParam,piD2DRMParam,piInternetFileManagerParam)	\
    ( (This)->lpVtbl -> Init(This,piD3DRMParam,piD2DRMParam,piInternetFileManagerParam) ) 

#define IConvert3DSGeometry_ReadScene(This,bstr,pCGTCallback,pvarFrame)	\
    ( (This)->lpVtbl -> ReadScene(This,bstr,pCGTCallback,pvarFrame) ) 

#define IConvert3DSGeometry_Name(This,bstr)	\
    ( (This)->lpVtbl -> Name(This,bstr) ) 

#define IConvert3DSGeometry_Extensions(This,bstr)	\
    ( (This)->lpVtbl -> Extensions(This,bstr) ) 

#define IConvert3DSGeometry_get_ScaleFactor(This,pVal)	\
    ( (This)->lpVtbl -> get_ScaleFactor(This,pVal) ) 

#define IConvert3DSGeometry_put_ScaleFactor(This,newVal)	\
    ( (This)->lpVtbl -> put_ScaleFactor(This,newVal) ) 

#define IConvert3DSGeometry_get_ConvertAnimation(This,pVal)	\
    ( (This)->lpVtbl -> get_ConvertAnimation(This,pVal) ) 

#define IConvert3DSGeometry_put_ConvertAnimation(This,newVal)	\
    ( (This)->lpVtbl -> put_ConvertAnimation(This,newVal) ) 

#define IConvert3DSGeometry_get_LoadTextures(This,pVal)	\
    ( (This)->lpVtbl -> get_LoadTextures(This,pVal) ) 

#define IConvert3DSGeometry_put_LoadTextures(This,newVal)	\
    ( (This)->lpVtbl -> put_LoadTextures(This,newVal) ) 

#define IConvert3DSGeometry_get_KeepCachedTextureNames(This,pVal)	\
    ( (This)->lpVtbl -> get_KeepCachedTextureNames(This,pVal) ) 

#define IConvert3DSGeometry_put_KeepCachedTextureNames(This,newVal)	\
    ( (This)->lpVtbl -> put_KeepCachedTextureNames(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConvert3DSGeometry_INTERFACE_DEFINED__ */


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


