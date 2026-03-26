

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/d2d.idl:
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

#ifndef __d2d_h__
#define __d2d_h__

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

#ifndef __IDirect2DRM_FWD_DEFINED__
#define __IDirect2DRM_FWD_DEFINED__
typedef interface IDirect2DRM IDirect2DRM;

#endif 	/* __IDirect2DRM_FWD_DEFINED__ */


#ifndef __IDirect2DRMObject_FWD_DEFINED__
#define __IDirect2DRMObject_FWD_DEFINED__
typedef interface IDirect2DRMObject IDirect2DRMObject;

#endif 	/* __IDirect2DRMObject_FWD_DEFINED__ */


#ifndef __IDirect2DRMArray_FWD_DEFINED__
#define __IDirect2DRMArray_FWD_DEFINED__
typedef interface IDirect2DRMArray IDirect2DRMArray;

#endif 	/* __IDirect2DRMArray_FWD_DEFINED__ */


#ifndef __IDirect2DRMDevice_FWD_DEFINED__
#define __IDirect2DRMDevice_FWD_DEFINED__
typedef interface IDirect2DRMDevice IDirect2DRMDevice;

#endif 	/* __IDirect2DRMDevice_FWD_DEFINED__ */


#ifndef __IDirect2DRMViewport_FWD_DEFINED__
#define __IDirect2DRMViewport_FWD_DEFINED__
typedef interface IDirect2DRMViewport IDirect2DRMViewport;

#endif 	/* __IDirect2DRMViewport_FWD_DEFINED__ */


#ifndef __IDirect2DRMVisual_FWD_DEFINED__
#define __IDirect2DRMVisual_FWD_DEFINED__
typedef interface IDirect2DRMVisual IDirect2DRMVisual;

#endif 	/* __IDirect2DRMVisual_FWD_DEFINED__ */


#ifndef __IDirect2DRMFrame_FWD_DEFINED__
#define __IDirect2DRMFrame_FWD_DEFINED__
typedef interface IDirect2DRMFrame IDirect2DRMFrame;

#endif 	/* __IDirect2DRMFrame_FWD_DEFINED__ */


#ifndef __IDirect2DRMImage_FWD_DEFINED__
#define __IDirect2DRMImage_FWD_DEFINED__
typedef interface IDirect2DRMImage IDirect2DRMImage;

#endif 	/* __IDirect2DRMImage_FWD_DEFINED__ */


#ifndef __IDirect2DRMHotSpot_FWD_DEFINED__
#define __IDirect2DRMHotSpot_FWD_DEFINED__
typedef interface IDirect2DRMHotSpot IDirect2DRMHotSpot;

#endif 	/* __IDirect2DRMHotSpot_FWD_DEFINED__ */


#ifndef __IDirect2DRMPick_FWD_DEFINED__
#define __IDirect2DRMPick_FWD_DEFINED__
typedef interface IDirect2DRMPick IDirect2DRMPick;

#endif 	/* __IDirect2DRMPick_FWD_DEFINED__ */


#ifndef __IDirect2DRMAnimation_FWD_DEFINED__
#define __IDirect2DRMAnimation_FWD_DEFINED__
typedef interface IDirect2DRMAnimation IDirect2DRMAnimation;

#endif 	/* __IDirect2DRMAnimation_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_d2d_0000_0000 */
/* [local] */ 

#include <d3drm.h>
#include <ocidl.h>
#ifndef __D3DRM_H__
typedef int *LPDIRECT3DRM;

typedef int *LPDIRECT3DRMTEXTURE;

typedef int *LPDIRECT3DRMMESHBUILDER;

#endif
#ifndef __DDRAW_INCLUDED__
typedef int *LPDIRECTDRAW;

typedef int *LPDIRECTDRAWSURFACE;

typedef int *LPDIRECTDRAWPALETTE;

typedef int *LPDDPIXELFORMAT;

#endif
typedef struct D2DPoint
    {
    float x;
    float y;
    } 	D2DPoint;

typedef struct D2DPoint *LPD2DPOINT;

typedef struct D2DVector
    {
    float x;
    float y;
    } 	D2DVector;

typedef struct D2DVector *LPD2DVECTOR;

typedef struct D2DCovector
    {
    float x;
    float y;
    } 	D2DCovector;

typedef struct D2DCovector *LPD2DCOVECTOR;

typedef struct D2DRect
    {
    float left;
    float top;
    float right;
    float bottom;
    } 	D2DRect;

typedef struct D2DRect *LPD2DRECT;

typedef struct D2DRMPickDesc
    {
    D2DVector vPos;
    } 	D2DRMPickDesc;

typedef struct D2DRMPickDesc *LPD2DRMPICKDESC;

typedef 
enum D2DRMObjectType
    {
        d2dotDevice	= 0,
        d2dotViewport	= ( d2dotDevice + 1 ) ,
        d2dotFrame	= ( d2dotViewport + 1 ) ,
        d2dotVisual	= ( d2dotFrame + 1 ) ,
        d2dotPick	= ( d2dotVisual + 1 ) 
    } 	D2DRMObjectType;

typedef IDirect2DRM *LPDIRECT2DRM;

typedef IDirect2DRMObject *LPDIRECT2DRMOBJECT;

typedef IDirect2DRMArray *LPDIRECT2DRMARRAY;

typedef IDirect2DRMDevice *LPDIRECT2DRMDEVICE;

typedef IDirect2DRMViewport *LPDIRECT2DRMVIEWPORT;

typedef IDirect2DRMVisual *LPDIRECT2DRMVISUAL;

typedef IDirect2DRMFrame *LPDIRECT2DRMFRAME;

typedef IDirect2DRMImage *LPDIRECT2DRMIMAGE;

typedef IDirect2DRMPick *LPDIRECT2DRMPICK;

typedef void ( *D2DRMOBJECTCALLBACK )( 
    LPDIRECT2DRMOBJECT pd2do,
    void *pvArg);

#define D2DRMERR_TOOMANYTILES	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x2001)
#define flagBLT_IGNORETRANSPARENCY 0x10
#define flagBLT_USEDYNAMICMAPPING 0x20
#define flagCREATE_TILED 0x100
#define flagCREATE_IGNOREANIMATION 0x200
#define flagTEXTURE_DONOTHING -1
#define flagTEXTURE_STRETCHNEAREST 0
#define flagTEXTURE_STRETCHNEXT 1
#define flagTEXTURE_BLTNEAREST 2
#define flagTEXTURE_BLTNEXT 3
#define flagTEXTURE_CENTERBLTNEXT 4


extern RPC_IF_HANDLE __MIDL_itf_d2d_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d2d_0000_0000_v0_0_s_ifspec;

#ifndef __IDirect2DRM_INTERFACE_DEFINED__
#define __IDirect2DRM_INTERFACE_DEFINED__

/* interface IDirect2DRM */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA40-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRM : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ LPDIRECTDRAW pDD) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateDeviceFromSurface( 
            /* [in] */ LPGUID pGUID,
            /* [in] */ LPDIRECTDRAWSURFACE pDDSBackbuffer,
            /* [retval][out] */ LPDIRECT2DRMDEVICE *ppDevice) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateViewport( 
            /* [in] */ LPDIRECT2DRMDEVICE pDevice,
            /* [in] */ LPDIRECT2DRMFRAME pCamera,
            /* [in] */ LPRECT prDimensions,
            /* [retval][out] */ LPDIRECT2DRMVIEWPORT *ppViewport) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateImageFromSurface( 
            /* [in] */ LPDIRECTDRAWSURFACE pdds,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateImageFromImageFile( 
            /* [in] */ BSTR bstrFilename,
            /* [in] */ DWORD dwFlags,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateImageFromImageFileExt( 
            /* [in] */ BSTR bstrFilename,
            /* [in] */ DWORD dwFlags,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNamedImage( 
            /* [in] */ BSTR bstrFilename,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReleaseImage( 
            /* [in] */ BSTR bstrFilename) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateImageFromText( 
            /* [in] */ BSTR bstrText,
            /* [in] */ DWORD nPointHeight,
            /* [in] */ BOOL bShadowed,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateImageFromTextExt( 
            /* [in] */ BSTR bstrText,
            /* [in] */ IFont *pFont,
            /* [in] */ OLE_COLOR ocFontColor,
            /* [in] */ BOOL bShadowed,
            /* [in] */ OLE_COLOR ocShadowColor,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateImageFromWrappedTextExt( 
            /* [in] */ BSTR bstrText,
            /* [in] */ IFont *pFont,
            /* [in] */ BOOL bShadowed,
            /* [in] */ DWORD width,
            /* [in] */ DWORD height,
            /* [in] */ DWORD nPoint,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateFrame( 
            /* [in] */ LPDIRECT2DRMFRAME pParentFrame,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVideoMode( 
            /* [in] */ LPDDPIXELFORMAT pddpf,
            /* [in] */ LPDIRECTDRAWPALETTE pddp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Tick( 
            /* [in] */ DWORD nElapsedTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetImageCacheHardLimit( 
            /* [in] */ DWORD nSizeInBytes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddTextureForRelease( 
            /* [in] */ LPDIRECT3DRMTEXTURE pTexture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReleaseTextures( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRM * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRM * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRM * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRM * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRM * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRM * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRM * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRM, Init)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IDirect2DRM * This,
            /* [in] */ LPDIRECTDRAW pDD);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, CreateDeviceFromSurface)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDeviceFromSurface )( 
            IDirect2DRM * This,
            /* [in] */ LPGUID pGUID,
            /* [in] */ LPDIRECTDRAWSURFACE pDDSBackbuffer,
            /* [retval][out] */ LPDIRECT2DRMDEVICE *ppDevice);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, CreateViewport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateViewport )( 
            IDirect2DRM * This,
            /* [in] */ LPDIRECT2DRMDEVICE pDevice,
            /* [in] */ LPDIRECT2DRMFRAME pCamera,
            /* [in] */ LPRECT prDimensions,
            /* [retval][out] */ LPDIRECT2DRMVIEWPORT *ppViewport);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, CreateImageFromSurface)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateImageFromSurface )( 
            IDirect2DRM * This,
            /* [in] */ LPDIRECTDRAWSURFACE pdds,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, CreateImageFromImageFile)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateImageFromImageFile )( 
            IDirect2DRM * This,
            /* [in] */ BSTR bstrFilename,
            /* [in] */ DWORD dwFlags,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, CreateImageFromImageFileExt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateImageFromImageFileExt )( 
            IDirect2DRM * This,
            /* [in] */ BSTR bstrFilename,
            /* [in] */ DWORD dwFlags,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, GetNamedImage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedImage )( 
            IDirect2DRM * This,
            /* [in] */ BSTR bstrFilename,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, ReleaseImage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReleaseImage )( 
            IDirect2DRM * This,
            /* [in] */ BSTR bstrFilename);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, CreateImageFromText)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateImageFromText )( 
            IDirect2DRM * This,
            /* [in] */ BSTR bstrText,
            /* [in] */ DWORD nPointHeight,
            /* [in] */ BOOL bShadowed,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, CreateImageFromTextExt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateImageFromTextExt )( 
            IDirect2DRM * This,
            /* [in] */ BSTR bstrText,
            /* [in] */ IFont *pFont,
            /* [in] */ OLE_COLOR ocFontColor,
            /* [in] */ BOOL bShadowed,
            /* [in] */ OLE_COLOR ocShadowColor,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, CreateImageFromWrappedTextExt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateImageFromWrappedTextExt )( 
            IDirect2DRM * This,
            /* [in] */ BSTR bstrText,
            /* [in] */ IFont *pFont,
            /* [in] */ BOOL bShadowed,
            /* [in] */ DWORD width,
            /* [in] */ DWORD height,
            /* [in] */ DWORD nPoint,
            /* [retval][out] */ LPDIRECT2DRMIMAGE *ppImage);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, CreateFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateFrame )( 
            IDirect2DRM * This,
            /* [in] */ LPDIRECT2DRMFRAME pParentFrame,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppFrame);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, SetVideoMode)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVideoMode )( 
            IDirect2DRM * This,
            /* [in] */ LPDDPIXELFORMAT pddpf,
            /* [in] */ LPDIRECTDRAWPALETTE pddp);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, Tick)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Tick )( 
            IDirect2DRM * This,
            /* [in] */ DWORD nElapsedTime);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, SetImageCacheHardLimit)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetImageCacheHardLimit )( 
            IDirect2DRM * This,
            /* [in] */ DWORD nSizeInBytes);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, AddTextureForRelease)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddTextureForRelease )( 
            IDirect2DRM * This,
            /* [in] */ LPDIRECT3DRMTEXTURE pTexture);
        
        DECLSPEC_XFGVIRT(IDirect2DRM, ReleaseTextures)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReleaseTextures )( 
            IDirect2DRM * This);
        
        END_INTERFACE
    } IDirect2DRMVtbl;

    interface IDirect2DRM
    {
        CONST_VTBL struct IDirect2DRMVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRM_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRM_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRM_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRM_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRM_Init(This,pDD)	\
    ( (This)->lpVtbl -> Init(This,pDD) ) 

#define IDirect2DRM_CreateDeviceFromSurface(This,pGUID,pDDSBackbuffer,ppDevice)	\
    ( (This)->lpVtbl -> CreateDeviceFromSurface(This,pGUID,pDDSBackbuffer,ppDevice) ) 

#define IDirect2DRM_CreateViewport(This,pDevice,pCamera,prDimensions,ppViewport)	\
    ( (This)->lpVtbl -> CreateViewport(This,pDevice,pCamera,prDimensions,ppViewport) ) 

#define IDirect2DRM_CreateImageFromSurface(This,pdds,bstrName,ppImage)	\
    ( (This)->lpVtbl -> CreateImageFromSurface(This,pdds,bstrName,ppImage) ) 

#define IDirect2DRM_CreateImageFromImageFile(This,bstrFilename,dwFlags,ppImage)	\
    ( (This)->lpVtbl -> CreateImageFromImageFile(This,bstrFilename,dwFlags,ppImage) ) 

#define IDirect2DRM_CreateImageFromImageFileExt(This,bstrFilename,dwFlags,ppImage)	\
    ( (This)->lpVtbl -> CreateImageFromImageFileExt(This,bstrFilename,dwFlags,ppImage) ) 

#define IDirect2DRM_GetNamedImage(This,bstrFilename,ppImage)	\
    ( (This)->lpVtbl -> GetNamedImage(This,bstrFilename,ppImage) ) 

#define IDirect2DRM_ReleaseImage(This,bstrFilename)	\
    ( (This)->lpVtbl -> ReleaseImage(This,bstrFilename) ) 

#define IDirect2DRM_CreateImageFromText(This,bstrText,nPointHeight,bShadowed,ppImage)	\
    ( (This)->lpVtbl -> CreateImageFromText(This,bstrText,nPointHeight,bShadowed,ppImage) ) 

#define IDirect2DRM_CreateImageFromTextExt(This,bstrText,pFont,ocFontColor,bShadowed,ocShadowColor,ppImage)	\
    ( (This)->lpVtbl -> CreateImageFromTextExt(This,bstrText,pFont,ocFontColor,bShadowed,ocShadowColor,ppImage) ) 

#define IDirect2DRM_CreateImageFromWrappedTextExt(This,bstrText,pFont,bShadowed,width,height,nPoint,ppImage)	\
    ( (This)->lpVtbl -> CreateImageFromWrappedTextExt(This,bstrText,pFont,bShadowed,width,height,nPoint,ppImage) ) 

#define IDirect2DRM_CreateFrame(This,pParentFrame,ppFrame)	\
    ( (This)->lpVtbl -> CreateFrame(This,pParentFrame,ppFrame) ) 

#define IDirect2DRM_SetVideoMode(This,pddpf,pddp)	\
    ( (This)->lpVtbl -> SetVideoMode(This,pddpf,pddp) ) 

#define IDirect2DRM_Tick(This,nElapsedTime)	\
    ( (This)->lpVtbl -> Tick(This,nElapsedTime) ) 

#define IDirect2DRM_SetImageCacheHardLimit(This,nSizeInBytes)	\
    ( (This)->lpVtbl -> SetImageCacheHardLimit(This,nSizeInBytes) ) 

#define IDirect2DRM_AddTextureForRelease(This,pTexture)	\
    ( (This)->lpVtbl -> AddTextureForRelease(This,pTexture) ) 

#define IDirect2DRM_ReleaseTextures(This)	\
    ( (This)->lpVtbl -> ReleaseTextures(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRM_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMObject_INTERFACE_DEFINED__
#define __IDirect2DRMObject_INTERFACE_DEFINED__

/* interface IDirect2DRMObject */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA44-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMObject : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AppData( 
            /* [retval][out] */ DWORD *pdwData) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AppData( 
            /* [in] */ DWORD dwData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDestroyCallback( 
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDestroyCallback( 
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMObjectVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMObject * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMObject * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMObject * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMObject * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMObject * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMObject * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMObject * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMObject * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        END_INTERFACE
    } IDirect2DRMObjectVtbl;

    interface IDirect2DRMObject
    {
        CONST_VTBL struct IDirect2DRMObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMObject_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMObject_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMObject_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMObject_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMObject_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMArray_INTERFACE_DEFINED__
#define __IDirect2DRMArray_INTERFACE_DEFINED__

/* interface IDirect2DRMArray */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA48-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMArray : public IDirect2DRMObject
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ DWORD *pnSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetElement( 
            /* [in] */ DWORD i,
            /* [out] */ DWORD *pnType,
            /* [out] */ LPDIRECT2DRMOBJECT *ppD2DRMObject) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDevice( 
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMDEVICE *ppD2DRMDevice) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetViewport( 
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMVIEWPORT *ppD2DRMViewport) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVisual( 
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMVISUAL *ppD2DRMVisual) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFrame( 
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMFRAME *ppD2DRMFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPick( 
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMPICK *ppD2DRMPick) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMArrayVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMArray * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMArray * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMArray * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMArray * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMArray * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMArray * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMArray * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMArray * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMArray * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMArray * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMArray, get_Size)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IDirect2DRMArray * This,
            /* [retval][out] */ DWORD *pnSize);
        
        DECLSPEC_XFGVIRT(IDirect2DRMArray, GetElement)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetElement )( 
            IDirect2DRMArray * This,
            /* [in] */ DWORD i,
            /* [out] */ DWORD *pnType,
            /* [out] */ LPDIRECT2DRMOBJECT *ppD2DRMObject);
        
        DECLSPEC_XFGVIRT(IDirect2DRMArray, GetDevice)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDevice )( 
            IDirect2DRMArray * This,
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMDEVICE *ppD2DRMDevice);
        
        DECLSPEC_XFGVIRT(IDirect2DRMArray, GetViewport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetViewport )( 
            IDirect2DRMArray * This,
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMVIEWPORT *ppD2DRMViewport);
        
        DECLSPEC_XFGVIRT(IDirect2DRMArray, GetVisual)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVisual )( 
            IDirect2DRMArray * This,
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMVISUAL *ppD2DRMVisual);
        
        DECLSPEC_XFGVIRT(IDirect2DRMArray, GetFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFrame )( 
            IDirect2DRMArray * This,
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMFRAME *ppD2DRMFrame);
        
        DECLSPEC_XFGVIRT(IDirect2DRMArray, GetPick)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPick )( 
            IDirect2DRMArray * This,
            /* [in] */ DWORD nIndex,
            /* [out] */ LPDIRECT2DRMPICK *ppD2DRMPick);
        
        END_INTERFACE
    } IDirect2DRMArrayVtbl;

    interface IDirect2DRMArray
    {
        CONST_VTBL struct IDirect2DRMArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMArray_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMArray_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMArray_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMArray_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 


#define IDirect2DRMArray_get_Size(This,pnSize)	\
    ( (This)->lpVtbl -> get_Size(This,pnSize) ) 

#define IDirect2DRMArray_GetElement(This,i,pnType,ppD2DRMObject)	\
    ( (This)->lpVtbl -> GetElement(This,i,pnType,ppD2DRMObject) ) 

#define IDirect2DRMArray_GetDevice(This,nIndex,ppD2DRMDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,nIndex,ppD2DRMDevice) ) 

#define IDirect2DRMArray_GetViewport(This,nIndex,ppD2DRMViewport)	\
    ( (This)->lpVtbl -> GetViewport(This,nIndex,ppD2DRMViewport) ) 

#define IDirect2DRMArray_GetVisual(This,nIndex,ppD2DRMVisual)	\
    ( (This)->lpVtbl -> GetVisual(This,nIndex,ppD2DRMVisual) ) 

#define IDirect2DRMArray_GetFrame(This,nIndex,ppD2DRMFrame)	\
    ( (This)->lpVtbl -> GetFrame(This,nIndex,ppD2DRMFrame) ) 

#define IDirect2DRMArray_GetPick(This,nIndex,ppD2DRMPick)	\
    ( (This)->lpVtbl -> GetPick(This,nIndex,ppD2DRMPick) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMArray_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMDevice_INTERFACE_DEFINED__
#define __IDirect2DRMDevice_INTERFACE_DEFINED__

/* interface IDirect2DRMDevice */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA4C-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMDevice : public IDirect2DRMObject
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitFromSurface( 
            /* [in] */ LPDIRECTDRAWSURFACE pdds) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BufferCount( 
            /* [retval][out] */ DWORD *pnCount) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BufferCount( 
            /* [in] */ DWORD nCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddUpdateCallback( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteUpdateCallback( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Sampling( 
            /* [retval][out] */ WORD *pwSampling) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Sampling( 
            /* [in] */ WORD wSampling) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Dithering( 
            /* [retval][out] */ WORD *pwDither) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Dithering( 
            /* [in] */ WORD wDither) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColorModel( 
            /* [retval][out] */ WORD *pwColorModel) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Viewports( 
            /* [retval][out] */ LPDIRECT2DRMARRAY *ppViewports) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetViewport( 
            /* [in] */ DWORD iViewport,
            /* [out] */ LPDIRECT2DRMVIEWPORT *ppViewport) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ DWORD *pnWidth) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ DWORD *pnHeight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMDeviceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMDevice * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMDevice * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMDevice * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMDevice * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMDevice * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMDevice * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMDevice * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMDevice * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMDevice * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMDevice * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, InitFromSurface)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitFromSurface )( 
            IDirect2DRMDevice * This,
            /* [in] */ LPDIRECTDRAWSURFACE pdds);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, get_BufferCount)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BufferCount )( 
            IDirect2DRMDevice * This,
            /* [retval][out] */ DWORD *pnCount);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, put_BufferCount)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BufferCount )( 
            IDirect2DRMDevice * This,
            /* [in] */ DWORD nCount);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IDirect2DRMDevice * This);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, AddUpdateCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddUpdateCallback )( 
            IDirect2DRMDevice * This);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, DeleteUpdateCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteUpdateCallback )( 
            IDirect2DRMDevice * This);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, get_Sampling)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sampling )( 
            IDirect2DRMDevice * This,
            /* [retval][out] */ WORD *pwSampling);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, put_Sampling)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Sampling )( 
            IDirect2DRMDevice * This,
            /* [in] */ WORD wSampling);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, get_Dithering)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dithering )( 
            IDirect2DRMDevice * This,
            /* [retval][out] */ WORD *pwDither);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, put_Dithering)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Dithering )( 
            IDirect2DRMDevice * This,
            /* [in] */ WORD wDither);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, get_ColorModel)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorModel )( 
            IDirect2DRMDevice * This,
            /* [retval][out] */ WORD *pwColorModel);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, get_Viewports)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Viewports )( 
            IDirect2DRMDevice * This,
            /* [retval][out] */ LPDIRECT2DRMARRAY *ppViewports);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, GetViewport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetViewport )( 
            IDirect2DRMDevice * This,
            /* [in] */ DWORD iViewport,
            /* [out] */ LPDIRECT2DRMVIEWPORT *ppViewport);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, get_Width)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IDirect2DRMDevice * This,
            /* [retval][out] */ DWORD *pnWidth);
        
        DECLSPEC_XFGVIRT(IDirect2DRMDevice, get_Height)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IDirect2DRMDevice * This,
            /* [retval][out] */ DWORD *pnHeight);
        
        END_INTERFACE
    } IDirect2DRMDeviceVtbl;

    interface IDirect2DRMDevice
    {
        CONST_VTBL struct IDirect2DRMDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMDevice_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMDevice_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMDevice_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMDevice_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMDevice_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 


#define IDirect2DRMDevice_InitFromSurface(This,pdds)	\
    ( (This)->lpVtbl -> InitFromSurface(This,pdds) ) 

#define IDirect2DRMDevice_get_BufferCount(This,pnCount)	\
    ( (This)->lpVtbl -> get_BufferCount(This,pnCount) ) 

#define IDirect2DRMDevice_put_BufferCount(This,nCount)	\
    ( (This)->lpVtbl -> put_BufferCount(This,nCount) ) 

#define IDirect2DRMDevice_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IDirect2DRMDevice_AddUpdateCallback(This)	\
    ( (This)->lpVtbl -> AddUpdateCallback(This) ) 

#define IDirect2DRMDevice_DeleteUpdateCallback(This)	\
    ( (This)->lpVtbl -> DeleteUpdateCallback(This) ) 

#define IDirect2DRMDevice_get_Sampling(This,pwSampling)	\
    ( (This)->lpVtbl -> get_Sampling(This,pwSampling) ) 

#define IDirect2DRMDevice_put_Sampling(This,wSampling)	\
    ( (This)->lpVtbl -> put_Sampling(This,wSampling) ) 

#define IDirect2DRMDevice_get_Dithering(This,pwDither)	\
    ( (This)->lpVtbl -> get_Dithering(This,pwDither) ) 

#define IDirect2DRMDevice_put_Dithering(This,wDither)	\
    ( (This)->lpVtbl -> put_Dithering(This,wDither) ) 

#define IDirect2DRMDevice_get_ColorModel(This,pwColorModel)	\
    ( (This)->lpVtbl -> get_ColorModel(This,pwColorModel) ) 

#define IDirect2DRMDevice_get_Viewports(This,ppViewports)	\
    ( (This)->lpVtbl -> get_Viewports(This,ppViewports) ) 

#define IDirect2DRMDevice_GetViewport(This,iViewport,ppViewport)	\
    ( (This)->lpVtbl -> GetViewport(This,iViewport,ppViewport) ) 

#define IDirect2DRMDevice_get_Width(This,pnWidth)	\
    ( (This)->lpVtbl -> get_Width(This,pnWidth) ) 

#define IDirect2DRMDevice_get_Height(This,pnHeight)	\
    ( (This)->lpVtbl -> get_Height(This,pnHeight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMDevice_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMViewport_INTERFACE_DEFINED__
#define __IDirect2DRMViewport_INTERFACE_DEFINED__

/* interface IDirect2DRMViewport */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMViewport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA54-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMViewport : public IDirect2DRMObject
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ LPDIRECT2DRMDEVICE pDevice,
            /* [in] */ LPDIRECT2DRMFRAME pCamera,
            /* [in] */ LPRECT prDimensions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Configure( 
            /* [in] */ LPRECT prDimensions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBackgroundImage( 
            /* [in] */ LPDIRECT2DRMIMAGE pd2diBackground) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBackgroundColor( 
            /* [in] */ BYTE r,
            /* [in] */ BYTE g,
            /* [in] */ BYTE b) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Camera( 
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppCamera) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Camera( 
            /* [in] */ LPDIRECT2DRMFRAME pCamera) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Device( 
            /* [retval][out] */ LPDIRECT2DRMDEVICE *ppDevice) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ DWORD *pnWidth) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ DWORD *pnHeight) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_XOffset( 
            /* [retval][out] */ DWORD *pnXOffset) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_YOffset( 
            /* [retval][out] */ DWORD *pnYOffset) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( 
            DWORD dwFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Render( 
            /* [in] */ LPDIRECT2DRMFRAME pScene,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Pick( 
            /* [in] */ LPDIRECT2DRMFRAME pScene,
            /* [in] */ DWORD nX,
            /* [in] */ DWORD nY,
            /* [retval][out] */ LPDIRECT2DRMARRAY *ppPicks) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MovePicked( 
            /* [in] */ float dX,
            /* [in] */ float dY,
            /* [in] */ LPDIRECT2DRMPICK pPick) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMViewportVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMViewport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMViewport * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMViewport * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMViewport * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMViewport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMViewport * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMViewport * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMViewport * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMViewport * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMViewport * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMViewport * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, Init)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IDirect2DRMViewport * This,
            /* [in] */ LPDIRECT2DRMDEVICE pDevice,
            /* [in] */ LPDIRECT2DRMFRAME pCamera,
            /* [in] */ LPRECT prDimensions);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, Configure)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Configure )( 
            IDirect2DRMViewport * This,
            /* [in] */ LPRECT prDimensions);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, SetBackgroundImage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBackgroundImage )( 
            IDirect2DRMViewport * This,
            /* [in] */ LPDIRECT2DRMIMAGE pd2diBackground);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, SetBackgroundColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )( 
            IDirect2DRMViewport * This,
            /* [in] */ BYTE r,
            /* [in] */ BYTE g,
            /* [in] */ BYTE b);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, get_Camera)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Camera )( 
            IDirect2DRMViewport * This,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppCamera);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, put_Camera)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Camera )( 
            IDirect2DRMViewport * This,
            /* [in] */ LPDIRECT2DRMFRAME pCamera);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, get_Device)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Device )( 
            IDirect2DRMViewport * This,
            /* [retval][out] */ LPDIRECT2DRMDEVICE *ppDevice);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, get_Width)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IDirect2DRMViewport * This,
            /* [retval][out] */ DWORD *pnWidth);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, get_Height)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IDirect2DRMViewport * This,
            /* [retval][out] */ DWORD *pnHeight);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, get_XOffset)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XOffset )( 
            IDirect2DRMViewport * This,
            /* [retval][out] */ DWORD *pnXOffset);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, get_YOffset)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YOffset )( 
            IDirect2DRMViewport * This,
            /* [retval][out] */ DWORD *pnYOffset);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, Clear)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IDirect2DRMViewport * This,
            DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, Render)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Render )( 
            IDirect2DRMViewport * This,
            /* [in] */ LPDIRECT2DRMFRAME pScene,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, Pick)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Pick )( 
            IDirect2DRMViewport * This,
            /* [in] */ LPDIRECT2DRMFRAME pScene,
            /* [in] */ DWORD nX,
            /* [in] */ DWORD nY,
            /* [retval][out] */ LPDIRECT2DRMARRAY *ppPicks);
        
        DECLSPEC_XFGVIRT(IDirect2DRMViewport, MovePicked)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MovePicked )( 
            IDirect2DRMViewport * This,
            /* [in] */ float dX,
            /* [in] */ float dY,
            /* [in] */ LPDIRECT2DRMPICK pPick);
        
        END_INTERFACE
    } IDirect2DRMViewportVtbl;

    interface IDirect2DRMViewport
    {
        CONST_VTBL struct IDirect2DRMViewportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMViewport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMViewport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMViewport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMViewport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMViewport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMViewport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMViewport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMViewport_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMViewport_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMViewport_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMViewport_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 


#define IDirect2DRMViewport_Init(This,pDevice,pCamera,prDimensions)	\
    ( (This)->lpVtbl -> Init(This,pDevice,pCamera,prDimensions) ) 

#define IDirect2DRMViewport_Configure(This,prDimensions)	\
    ( (This)->lpVtbl -> Configure(This,prDimensions) ) 

#define IDirect2DRMViewport_SetBackgroundImage(This,pd2diBackground)	\
    ( (This)->lpVtbl -> SetBackgroundImage(This,pd2diBackground) ) 

#define IDirect2DRMViewport_SetBackgroundColor(This,r,g,b)	\
    ( (This)->lpVtbl -> SetBackgroundColor(This,r,g,b) ) 

#define IDirect2DRMViewport_get_Camera(This,ppCamera)	\
    ( (This)->lpVtbl -> get_Camera(This,ppCamera) ) 

#define IDirect2DRMViewport_put_Camera(This,pCamera)	\
    ( (This)->lpVtbl -> put_Camera(This,pCamera) ) 

#define IDirect2DRMViewport_get_Device(This,ppDevice)	\
    ( (This)->lpVtbl -> get_Device(This,ppDevice) ) 

#define IDirect2DRMViewport_get_Width(This,pnWidth)	\
    ( (This)->lpVtbl -> get_Width(This,pnWidth) ) 

#define IDirect2DRMViewport_get_Height(This,pnHeight)	\
    ( (This)->lpVtbl -> get_Height(This,pnHeight) ) 

#define IDirect2DRMViewport_get_XOffset(This,pnXOffset)	\
    ( (This)->lpVtbl -> get_XOffset(This,pnXOffset) ) 

#define IDirect2DRMViewport_get_YOffset(This,pnYOffset)	\
    ( (This)->lpVtbl -> get_YOffset(This,pnYOffset) ) 

#define IDirect2DRMViewport_Clear(This,dwFlags)	\
    ( (This)->lpVtbl -> Clear(This,dwFlags) ) 

#define IDirect2DRMViewport_Render(This,pScene,dwFlags)	\
    ( (This)->lpVtbl -> Render(This,pScene,dwFlags) ) 

#define IDirect2DRMViewport_Pick(This,pScene,nX,nY,ppPicks)	\
    ( (This)->lpVtbl -> Pick(This,pScene,nX,nY,ppPicks) ) 

#define IDirect2DRMViewport_MovePicked(This,dX,dY,pPick)	\
    ( (This)->lpVtbl -> MovePicked(This,dX,dY,pPick) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMViewport_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMVisual_INTERFACE_DEFINED__
#define __IDirect2DRMVisual_INTERFACE_DEFINED__

/* interface IDirect2DRMVisual */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMVisual;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA5C-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMVisual : public IDirect2DRMObject
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMVisualVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMVisual * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMVisual * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMVisual * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMVisual * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMVisual * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMVisual * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMVisual * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMVisual * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMVisual * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMVisual * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMVisual * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        END_INTERFACE
    } IDirect2DRMVisualVtbl;

    interface IDirect2DRMVisual
    {
        CONST_VTBL struct IDirect2DRMVisualVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMVisual_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMVisual_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMVisual_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMVisual_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMVisual_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMVisual_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMVisual_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMVisual_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMVisual_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMVisual_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMVisual_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMVisual_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMFrame_INTERFACE_DEFINED__
#define __IDirect2DRMFrame_INTERFACE_DEFINED__

/* interface IDirect2DRMFrame */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA64-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMFrame : public IDirect2DRMVisual
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddChild( 
            /* [in] */ LPDIRECT2DRMFRAME pChildFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteChild( 
            /* [in] */ LPDIRECT2DRMFRAME pChildFrame) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Children( 
            /* [retval][out] */ LPDIRECT2DRMARRAY *prgChildren) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppParentFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveChildToFront( 
            /* [in] */ LPDIRECT2DRMFRAME pChildFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveChildToBack( 
            /* [in] */ LPDIRECT2DRMFRAME pChildFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddVisual( 
            /* [in] */ LPDIRECT2DRMVISUAL pVisual) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteVisual( 
            /* [in] */ LPDIRECT2DRMVISUAL pVisual) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Visuals( 
            /* [retval][out] */ LPDIRECT2DRMARRAY *prgVisuals) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveVisualToFront( 
            /* [in] */ LPDIRECT2DRMVISUAL pVisual) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveVisualToBack( 
            /* [in] */ LPDIRECT2DRMVISUAL pVisual) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddTranslation( 
            /* [in] */ float fX,
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTranslation( 
            /* [in] */ float fX,
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddScale( 
            /* [in] */ float fX,
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetScale( 
            /* [in] */ float fX,
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddRotation( 
            /* [in] */ float fTheta) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_XOffset( 
            /* [retval][out] */ float *pfX) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_XOffset( 
            /* [in] */ float fX) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_YOffset( 
            /* [retval][out] */ float *pfY) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_YOffset( 
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE InverseTransform( 
            /* [in] */ LPD2DVECTOR pvSrc,
            /* [out] */ LPD2DVECTOR pvDst) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE Transform( 
            /* [in] */ LPD2DVECTOR pvSrc,
            /* [out] */ LPD2DVECTOR pvDst) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TransformPt( 
            /* [in] */ LPD2DPOINT ppt2Src,
            /* [out] */ LPD2DPOINT ppt2Dst) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE RenderToSurface( 
            /* [in] */ LPDIRECTDRAWSURFACE pdds,
            /* [in] */ LPD2DRECT prDst,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetScene( 
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppScene) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE GetPosition( 
            /* [in] */ LPDIRECT2DRMFRAME pRefFrame,
            /* [out] */ float *pfX,
            /* [out] */ float *pfY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMFrameVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMFrame * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMFrame * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMFrame * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMFrame * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMFrame * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMFrame * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMFrame * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMFrame * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMFrame * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMFrame * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMFrame * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, AddChild)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddChild )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECT2DRMFRAME pChildFrame);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, DeleteChild)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteChild )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECT2DRMFRAME pChildFrame);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, get_Children)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Children )( 
            IDirect2DRMFrame * This,
            /* [retval][out] */ LPDIRECT2DRMARRAY *prgChildren);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, get_Parent)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IDirect2DRMFrame * This,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppParentFrame);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, MoveChildToFront)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveChildToFront )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECT2DRMFRAME pChildFrame);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, MoveChildToBack)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveChildToBack )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECT2DRMFRAME pChildFrame);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, AddVisual)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddVisual )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECT2DRMVISUAL pVisual);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, DeleteVisual)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteVisual )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECT2DRMVISUAL pVisual);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, get_Visuals)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visuals )( 
            IDirect2DRMFrame * This,
            /* [retval][out] */ LPDIRECT2DRMARRAY *prgVisuals);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, MoveVisualToFront)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveVisualToFront )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECT2DRMVISUAL pVisual);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, MoveVisualToBack)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveVisualToBack )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECT2DRMVISUAL pVisual);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, AddTranslation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddTranslation )( 
            IDirect2DRMFrame * This,
            /* [in] */ float fX,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, SetTranslation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTranslation )( 
            IDirect2DRMFrame * This,
            /* [in] */ float fX,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, AddScale)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddScale )( 
            IDirect2DRMFrame * This,
            /* [in] */ float fX,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, SetScale)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetScale )( 
            IDirect2DRMFrame * This,
            /* [in] */ float fX,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, AddRotation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddRotation )( 
            IDirect2DRMFrame * This,
            /* [in] */ float fTheta);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, get_XOffset)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_XOffset )( 
            IDirect2DRMFrame * This,
            /* [retval][out] */ float *pfX);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, put_XOffset)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_XOffset )( 
            IDirect2DRMFrame * This,
            /* [in] */ float fX);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, get_YOffset)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_YOffset )( 
            IDirect2DRMFrame * This,
            /* [retval][out] */ float *pfY);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, put_YOffset)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_YOffset )( 
            IDirect2DRMFrame * This,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, InverseTransform)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *InverseTransform )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPD2DVECTOR pvSrc,
            /* [out] */ LPD2DVECTOR pvDst);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, Transform)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Transform )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPD2DVECTOR pvSrc,
            /* [out] */ LPD2DVECTOR pvDst);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, TransformPt)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TransformPt )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPD2DPOINT ppt2Src,
            /* [out] */ LPD2DPOINT ppt2Dst);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, RenderToSurface)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *RenderToSurface )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECTDRAWSURFACE pdds,
            /* [in] */ LPD2DRECT prDst,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, GetScene)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetScene )( 
            IDirect2DRMFrame * This,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppScene);
        
        DECLSPEC_XFGVIRT(IDirect2DRMFrame, GetPosition)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            IDirect2DRMFrame * This,
            /* [in] */ LPDIRECT2DRMFRAME pRefFrame,
            /* [out] */ float *pfX,
            /* [out] */ float *pfY);
        
        END_INTERFACE
    } IDirect2DRMFrameVtbl;

    interface IDirect2DRMFrame
    {
        CONST_VTBL struct IDirect2DRMFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMFrame_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMFrame_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMFrame_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMFrame_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMFrame_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMFrame_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMFrame_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMFrame_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 



#define IDirect2DRMFrame_AddChild(This,pChildFrame)	\
    ( (This)->lpVtbl -> AddChild(This,pChildFrame) ) 

#define IDirect2DRMFrame_DeleteChild(This,pChildFrame)	\
    ( (This)->lpVtbl -> DeleteChild(This,pChildFrame) ) 

#define IDirect2DRMFrame_get_Children(This,prgChildren)	\
    ( (This)->lpVtbl -> get_Children(This,prgChildren) ) 

#define IDirect2DRMFrame_get_Parent(This,ppParentFrame)	\
    ( (This)->lpVtbl -> get_Parent(This,ppParentFrame) ) 

#define IDirect2DRMFrame_MoveChildToFront(This,pChildFrame)	\
    ( (This)->lpVtbl -> MoveChildToFront(This,pChildFrame) ) 

#define IDirect2DRMFrame_MoveChildToBack(This,pChildFrame)	\
    ( (This)->lpVtbl -> MoveChildToBack(This,pChildFrame) ) 

#define IDirect2DRMFrame_AddVisual(This,pVisual)	\
    ( (This)->lpVtbl -> AddVisual(This,pVisual) ) 

#define IDirect2DRMFrame_DeleteVisual(This,pVisual)	\
    ( (This)->lpVtbl -> DeleteVisual(This,pVisual) ) 

#define IDirect2DRMFrame_get_Visuals(This,prgVisuals)	\
    ( (This)->lpVtbl -> get_Visuals(This,prgVisuals) ) 

#define IDirect2DRMFrame_MoveVisualToFront(This,pVisual)	\
    ( (This)->lpVtbl -> MoveVisualToFront(This,pVisual) ) 

#define IDirect2DRMFrame_MoveVisualToBack(This,pVisual)	\
    ( (This)->lpVtbl -> MoveVisualToBack(This,pVisual) ) 

#define IDirect2DRMFrame_AddTranslation(This,fX,fY)	\
    ( (This)->lpVtbl -> AddTranslation(This,fX,fY) ) 

#define IDirect2DRMFrame_SetTranslation(This,fX,fY)	\
    ( (This)->lpVtbl -> SetTranslation(This,fX,fY) ) 

#define IDirect2DRMFrame_AddScale(This,fX,fY)	\
    ( (This)->lpVtbl -> AddScale(This,fX,fY) ) 

#define IDirect2DRMFrame_SetScale(This,fX,fY)	\
    ( (This)->lpVtbl -> SetScale(This,fX,fY) ) 

#define IDirect2DRMFrame_AddRotation(This,fTheta)	\
    ( (This)->lpVtbl -> AddRotation(This,fTheta) ) 

#define IDirect2DRMFrame_get_XOffset(This,pfX)	\
    ( (This)->lpVtbl -> get_XOffset(This,pfX) ) 

#define IDirect2DRMFrame_put_XOffset(This,fX)	\
    ( (This)->lpVtbl -> put_XOffset(This,fX) ) 

#define IDirect2DRMFrame_get_YOffset(This,pfY)	\
    ( (This)->lpVtbl -> get_YOffset(This,pfY) ) 

#define IDirect2DRMFrame_put_YOffset(This,fY)	\
    ( (This)->lpVtbl -> put_YOffset(This,fY) ) 

#define IDirect2DRMFrame_InverseTransform(This,pvSrc,pvDst)	\
    ( (This)->lpVtbl -> InverseTransform(This,pvSrc,pvDst) ) 

#define IDirect2DRMFrame_Transform(This,pvSrc,pvDst)	\
    ( (This)->lpVtbl -> Transform(This,pvSrc,pvDst) ) 

#define IDirect2DRMFrame_TransformPt(This,ppt2Src,ppt2Dst)	\
    ( (This)->lpVtbl -> TransformPt(This,ppt2Src,ppt2Dst) ) 

#define IDirect2DRMFrame_RenderToSurface(This,pdds,prDst,dwFlags)	\
    ( (This)->lpVtbl -> RenderToSurface(This,pdds,prDst,dwFlags) ) 

#define IDirect2DRMFrame_GetScene(This,ppScene)	\
    ( (This)->lpVtbl -> GetScene(This,ppScene) ) 

#define IDirect2DRMFrame_GetPosition(This,pRefFrame,pfX,pfY)	\
    ( (This)->lpVtbl -> GetPosition(This,pRefFrame,pfX,pfY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMFrame_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMImage_INTERFACE_DEFINED__
#define __IDirect2DRMImage_INTERFACE_DEFINED__

/* interface IDirect2DRMImage */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA6C-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMImage : public IDirect2DRMVisual
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BltToSurface( 
            /* [in] */ LPD2DRECT pSrcRect,
            /* [in] */ LPDIRECTDRAWSURFACE pddsDst,
            /* [in] */ LPD2DRECT pDstRect,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetD3DTexture( 
            /* [in] */ LPDIRECT3DRM pD3DRM,
            /* [retval][out] */ LPDIRECT3DRMTEXTURE *ppTexture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ExportD3DTexture( 
            /* [in] */ LPDIRECT3DRM pD3DRM,
            /* [out] */ LPDIRECTDRAWSURFACE *ppddsTexture,
            /* [out] */ LPDIRECT3DRMTEXTURE *ppTexture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ExportD3DTextureEx( 
            /* [in] */ LPDIRECT3DRM pD3DRM,
            /* [out] */ LPDIRECTDRAWSURFACE *ppddsTexture,
            long fMode,
            /* [out] */ LPDIRECT3DRMTEXTURE *ppTexture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateFittedSurface( 
            /* [out] */ LPDIRECTDRAWSURFACE *ppdds) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NColors( 
            /* [retval][out] */ DWORD *pnColors) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NFrames( 
            /* [retval][out] */ DWORD *pnFrames) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFrameDelay( 
            /* [in] */ DWORD nIndex,
            /* [retval][out] */ DWORD *pnDelay) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_VisibleImage( 
            /* [in] */ DWORD nIndex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VisibleImage( 
            /* [retval][out] */ DWORD *pnIndex) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Tiled( 
            /* [in] */ BOOL bTiled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Tiled( 
            /* [retval][out] */ BOOL *pbTiled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transparent( 
            /* [retval][out] */ BOOL *pbTransparent) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Palettized( 
            /* [retval][out] */ BOOL *pb) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Animated( 
            /* [in] */ BOOL bAnimated) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Animated( 
            /* [retval][out] */ BOOL *pbAnimated) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ DWORD *pnWidth) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ DWORD *pnHeight) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Depth( 
            /* [retval][out] */ DWORD *pnDepth) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTileOffset( 
            /* [in] */ float x,
            /* [in] */ float y) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddTileOffset( 
            /* [in] */ float x,
            /* [in] */ float y) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTileScale( 
            /* [in] */ float x,
            /* [in] */ float y) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddTileScale( 
            /* [in] */ float x,
            /* [in] */ float y) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMImageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMImage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMImage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMImage * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMImage * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMImage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMImage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMImage * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMImage * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMImage * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMImage * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, BltToSurface)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BltToSurface )( 
            IDirect2DRMImage * This,
            /* [in] */ LPD2DRECT pSrcRect,
            /* [in] */ LPDIRECTDRAWSURFACE pddsDst,
            /* [in] */ LPD2DRECT pDstRect,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, GetD3DTexture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetD3DTexture )( 
            IDirect2DRMImage * This,
            /* [in] */ LPDIRECT3DRM pD3DRM,
            /* [retval][out] */ LPDIRECT3DRMTEXTURE *ppTexture);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, ExportD3DTexture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ExportD3DTexture )( 
            IDirect2DRMImage * This,
            /* [in] */ LPDIRECT3DRM pD3DRM,
            /* [out] */ LPDIRECTDRAWSURFACE *ppddsTexture,
            /* [out] */ LPDIRECT3DRMTEXTURE *ppTexture);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, ExportD3DTextureEx)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ExportD3DTextureEx )( 
            IDirect2DRMImage * This,
            /* [in] */ LPDIRECT3DRM pD3DRM,
            /* [out] */ LPDIRECTDRAWSURFACE *ppddsTexture,
            long fMode,
            /* [out] */ LPDIRECT3DRMTEXTURE *ppTexture);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, CreateFittedSurface)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateFittedSurface )( 
            IDirect2DRMImage * This,
            /* [out] */ LPDIRECTDRAWSURFACE *ppdds);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_NColors)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NColors )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ DWORD *pnColors);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_NFrames)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NFrames )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ DWORD *pnFrames);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, GetFrameDelay)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFrameDelay )( 
            IDirect2DRMImage * This,
            /* [in] */ DWORD nIndex,
            /* [retval][out] */ DWORD *pnDelay);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, put_VisibleImage)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VisibleImage )( 
            IDirect2DRMImage * This,
            /* [in] */ DWORD nIndex);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_VisibleImage)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisibleImage )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ DWORD *pnIndex);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, put_Tiled)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Tiled )( 
            IDirect2DRMImage * This,
            /* [in] */ BOOL bTiled);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_Tiled)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tiled )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ BOOL *pbTiled);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_Transparent)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transparent )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ BOOL *pbTransparent);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_Palettized)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Palettized )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ BOOL *pb);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, put_Animated)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Animated )( 
            IDirect2DRMImage * This,
            /* [in] */ BOOL bAnimated);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_Animated)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Animated )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ BOOL *pbAnimated);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_Width)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ DWORD *pnWidth);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_Height)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ DWORD *pnHeight);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, get_Depth)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Depth )( 
            IDirect2DRMImage * This,
            /* [retval][out] */ DWORD *pnDepth);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, SetTileOffset)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTileOffset )( 
            IDirect2DRMImage * This,
            /* [in] */ float x,
            /* [in] */ float y);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, AddTileOffset)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddTileOffset )( 
            IDirect2DRMImage * This,
            /* [in] */ float x,
            /* [in] */ float y);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, SetTileScale)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTileScale )( 
            IDirect2DRMImage * This,
            /* [in] */ float x,
            /* [in] */ float y);
        
        DECLSPEC_XFGVIRT(IDirect2DRMImage, AddTileScale)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddTileScale )( 
            IDirect2DRMImage * This,
            /* [in] */ float x,
            /* [in] */ float y);
        
        END_INTERFACE
    } IDirect2DRMImageVtbl;

    interface IDirect2DRMImage
    {
        CONST_VTBL struct IDirect2DRMImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMImage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMImage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMImage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMImage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMImage_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMImage_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMImage_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMImage_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 



#define IDirect2DRMImage_BltToSurface(This,pSrcRect,pddsDst,pDstRect,dwFlags)	\
    ( (This)->lpVtbl -> BltToSurface(This,pSrcRect,pddsDst,pDstRect,dwFlags) ) 

#define IDirect2DRMImage_GetD3DTexture(This,pD3DRM,ppTexture)	\
    ( (This)->lpVtbl -> GetD3DTexture(This,pD3DRM,ppTexture) ) 

#define IDirect2DRMImage_ExportD3DTexture(This,pD3DRM,ppddsTexture,ppTexture)	\
    ( (This)->lpVtbl -> ExportD3DTexture(This,pD3DRM,ppddsTexture,ppTexture) ) 

#define IDirect2DRMImage_ExportD3DTextureEx(This,pD3DRM,ppddsTexture,fMode,ppTexture)	\
    ( (This)->lpVtbl -> ExportD3DTextureEx(This,pD3DRM,ppddsTexture,fMode,ppTexture) ) 

#define IDirect2DRMImage_CreateFittedSurface(This,ppdds)	\
    ( (This)->lpVtbl -> CreateFittedSurface(This,ppdds) ) 

#define IDirect2DRMImage_get_NColors(This,pnColors)	\
    ( (This)->lpVtbl -> get_NColors(This,pnColors) ) 

#define IDirect2DRMImage_get_NFrames(This,pnFrames)	\
    ( (This)->lpVtbl -> get_NFrames(This,pnFrames) ) 

#define IDirect2DRMImage_GetFrameDelay(This,nIndex,pnDelay)	\
    ( (This)->lpVtbl -> GetFrameDelay(This,nIndex,pnDelay) ) 

#define IDirect2DRMImage_put_VisibleImage(This,nIndex)	\
    ( (This)->lpVtbl -> put_VisibleImage(This,nIndex) ) 

#define IDirect2DRMImage_get_VisibleImage(This,pnIndex)	\
    ( (This)->lpVtbl -> get_VisibleImage(This,pnIndex) ) 

#define IDirect2DRMImage_put_Tiled(This,bTiled)	\
    ( (This)->lpVtbl -> put_Tiled(This,bTiled) ) 

#define IDirect2DRMImage_get_Tiled(This,pbTiled)	\
    ( (This)->lpVtbl -> get_Tiled(This,pbTiled) ) 

#define IDirect2DRMImage_get_Transparent(This,pbTransparent)	\
    ( (This)->lpVtbl -> get_Transparent(This,pbTransparent) ) 

#define IDirect2DRMImage_get_Palettized(This,pb)	\
    ( (This)->lpVtbl -> get_Palettized(This,pb) ) 

#define IDirect2DRMImage_put_Animated(This,bAnimated)	\
    ( (This)->lpVtbl -> put_Animated(This,bAnimated) ) 

#define IDirect2DRMImage_get_Animated(This,pbAnimated)	\
    ( (This)->lpVtbl -> get_Animated(This,pbAnimated) ) 

#define IDirect2DRMImage_get_Width(This,pnWidth)	\
    ( (This)->lpVtbl -> get_Width(This,pnWidth) ) 

#define IDirect2DRMImage_get_Height(This,pnHeight)	\
    ( (This)->lpVtbl -> get_Height(This,pnHeight) ) 

#define IDirect2DRMImage_get_Depth(This,pnDepth)	\
    ( (This)->lpVtbl -> get_Depth(This,pnDepth) ) 

#define IDirect2DRMImage_SetTileOffset(This,x,y)	\
    ( (This)->lpVtbl -> SetTileOffset(This,x,y) ) 

#define IDirect2DRMImage_AddTileOffset(This,x,y)	\
    ( (This)->lpVtbl -> AddTileOffset(This,x,y) ) 

#define IDirect2DRMImage_SetTileScale(This,x,y)	\
    ( (This)->lpVtbl -> SetTileScale(This,x,y) ) 

#define IDirect2DRMImage_AddTileScale(This,x,y)	\
    ( (This)->lpVtbl -> AddTileScale(This,x,y) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMImage_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMHotSpot_INTERFACE_DEFINED__
#define __IDirect2DRMHotSpot_INTERFACE_DEFINED__

/* interface IDirect2DRMHotSpot */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMHotSpot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA70-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMHotSpot : public IDirect2DRMVisual
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMHotSpotVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMHotSpot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMHotSpot * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMHotSpot * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMHotSpot * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMHotSpot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMHotSpot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMHotSpot * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMHotSpot * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMHotSpot * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMHotSpot * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMHotSpot * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        END_INTERFACE
    } IDirect2DRMHotSpotVtbl;

    interface IDirect2DRMHotSpot
    {
        CONST_VTBL struct IDirect2DRMHotSpotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMHotSpot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMHotSpot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMHotSpot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMHotSpot_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMHotSpot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMHotSpot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMHotSpot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMHotSpot_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMHotSpot_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMHotSpot_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMHotSpot_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMHotSpot_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMPick_INTERFACE_DEFINED__
#define __IDirect2DRMPick_INTERFACE_DEFINED__

/* interface IDirect2DRMPick */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMPick;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA74-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMPick : public IDirect2DRMObject
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Visual( 
            /* [retval][out] */ LPDIRECT2DRMVISUAL *ppVisual) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Ancestory( 
            /* [retval][out] */ LPDIRECT2DRMARRAY *prgFrames) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ControlFrame( 
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppFrame) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_X( 
            /* [retval][out] */ float *pfX) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
            /* [retval][out] */ float *pfY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveToFront( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveVisual( 
            LPD2DVECTOR pvWorldDelta) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMPickVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMPick * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMPick * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMPick * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMPick * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMPick * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMPick * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMPick * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMPick * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMPick * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMPick * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMPick * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMPick, get_Visual)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Visual )( 
            IDirect2DRMPick * This,
            /* [retval][out] */ LPDIRECT2DRMVISUAL *ppVisual);
        
        DECLSPEC_XFGVIRT(IDirect2DRMPick, get_Ancestory)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ancestory )( 
            IDirect2DRMPick * This,
            /* [retval][out] */ LPDIRECT2DRMARRAY *prgFrames);
        
        DECLSPEC_XFGVIRT(IDirect2DRMPick, get_ControlFrame)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlFrame )( 
            IDirect2DRMPick * This,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppFrame);
        
        DECLSPEC_XFGVIRT(IDirect2DRMPick, get_X)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            IDirect2DRMPick * This,
            /* [retval][out] */ float *pfX);
        
        DECLSPEC_XFGVIRT(IDirect2DRMPick, get_Y)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            IDirect2DRMPick * This,
            /* [retval][out] */ float *pfY);
        
        DECLSPEC_XFGVIRT(IDirect2DRMPick, MoveToFront)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveToFront )( 
            IDirect2DRMPick * This);
        
        DECLSPEC_XFGVIRT(IDirect2DRMPick, MoveVisual)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveVisual )( 
            IDirect2DRMPick * This,
            LPD2DVECTOR pvWorldDelta);
        
        END_INTERFACE
    } IDirect2DRMPickVtbl;

    interface IDirect2DRMPick
    {
        CONST_VTBL struct IDirect2DRMPickVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMPick_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMPick_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMPick_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMPick_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMPick_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMPick_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMPick_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMPick_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMPick_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMPick_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMPick_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 


#define IDirect2DRMPick_get_Visual(This,ppVisual)	\
    ( (This)->lpVtbl -> get_Visual(This,ppVisual) ) 

#define IDirect2DRMPick_get_Ancestory(This,prgFrames)	\
    ( (This)->lpVtbl -> get_Ancestory(This,prgFrames) ) 

#define IDirect2DRMPick_get_ControlFrame(This,ppFrame)	\
    ( (This)->lpVtbl -> get_ControlFrame(This,ppFrame) ) 

#define IDirect2DRMPick_get_X(This,pfX)	\
    ( (This)->lpVtbl -> get_X(This,pfX) ) 

#define IDirect2DRMPick_get_Y(This,pfY)	\
    ( (This)->lpVtbl -> get_Y(This,pfY) ) 

#define IDirect2DRMPick_MoveToFront(This)	\
    ( (This)->lpVtbl -> MoveToFront(This) ) 

#define IDirect2DRMPick_MoveVisual(This,pvWorldDelta)	\
    ( (This)->lpVtbl -> MoveVisual(This,pvWorldDelta) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMPick_INTERFACE_DEFINED__ */


#ifndef __IDirect2DRMAnimation_INTERFACE_DEFINED__
#define __IDirect2DRMAnimation_INTERFACE_DEFINED__

/* interface IDirect2DRMAnimation */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IDirect2DRMAnimation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D32CA78-3CA9-11d0-6D69-6B656D617272")
    IDirect2DRMAnimation : public IDirect2DRMObject
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDirect2DRMAnimationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDirect2DRMAnimation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDirect2DRMAnimation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDirect2DRMAnimation * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDirect2DRMAnimation * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDirect2DRMAnimation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDirect2DRMAnimation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDirect2DRMAnimation * This,
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
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, get_AppData)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppData )( 
            IDirect2DRMAnimation * This,
            /* [retval][out] */ DWORD *pdwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, put_AppData)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppData )( 
            IDirect2DRMAnimation * This,
            /* [in] */ DWORD dwData);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, SetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestroyCallback )( 
            IDirect2DRMAnimation * This,
            /* [in] */ int *pCallback,
            /* [in] */ int *pvArg);
        
        DECLSPEC_XFGVIRT(IDirect2DRMObject, GetDestroyCallback)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDestroyCallback )( 
            IDirect2DRMAnimation * This,
            /* [out] */ int **ppCallback,
            /* [out] */ int **ppvArg);
        
        END_INTERFACE
    } IDirect2DRMAnimationVtbl;

    interface IDirect2DRMAnimation
    {
        CONST_VTBL struct IDirect2DRMAnimationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDirect2DRMAnimation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDirect2DRMAnimation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDirect2DRMAnimation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDirect2DRMAnimation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDirect2DRMAnimation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDirect2DRMAnimation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDirect2DRMAnimation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDirect2DRMAnimation_get_AppData(This,pdwData)	\
    ( (This)->lpVtbl -> get_AppData(This,pdwData) ) 

#define IDirect2DRMAnimation_put_AppData(This,dwData)	\
    ( (This)->lpVtbl -> put_AppData(This,dwData) ) 

#define IDirect2DRMAnimation_SetDestroyCallback(This,pCallback,pvArg)	\
    ( (This)->lpVtbl -> SetDestroyCallback(This,pCallback,pvArg) ) 

#define IDirect2DRMAnimation_GetDestroyCallback(This,ppCallback,ppvArg)	\
    ( (This)->lpVtbl -> GetDestroyCallback(This,ppCallback,ppvArg) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDirect2DRMAnimation_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


