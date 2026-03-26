

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwrender.idl:
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

#ifndef __vwrender_h__
#define __vwrender_h__

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

#ifndef __IVWRender_FWD_DEFINED__
#define __IVWRender_FWD_DEFINED__
typedef interface IVWRender IVWRender;

#endif 	/* __IVWRender_FWD_DEFINED__ */


#ifndef __IVWRenderRoot_FWD_DEFINED__
#define __IVWRenderRoot_FWD_DEFINED__
typedef interface IVWRenderRoot IVWRenderRoot;

#endif 	/* __IVWRenderRoot_FWD_DEFINED__ */


#ifndef __IVWRender3D_FWD_DEFINED__
#define __IVWRender3D_FWD_DEFINED__
typedef interface IVWRender3D IVWRender3D;

#endif 	/* __IVWRender3D_FWD_DEFINED__ */


#ifndef __IVWRender2D_FWD_DEFINED__
#define __IVWRender2D_FWD_DEFINED__
typedef interface IVWRender2D IVWRender2D;

#endif 	/* __IVWRender2D_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwframe.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwrender_0000_0000 */
/* [local] */ 


#ifndef __DDRAW_INCLUDED__
typedef int *LPDIRECTDRAW;

typedef int *LPDIRECTDRAWSURFACE;

typedef int *LPDIRECTDRAWCLIPPER;

#endif
#ifndef __d2d_h__
typedef IDispatch *LPDIRECT2DRM;

typedef IDispatch *LPDIRECT2DRMFRAME;

typedef IDispatch *LPDIRECT2DRMIMAGE;

#endif
#ifndef __D3DRM_H__
typedef int *LPDIRECT3DRM;

typedef int *LPDIRECT3DRMFRAME;

typedef int *LPDIRECT3DRMVIEWPORT;

#endif
#define fBackClippingPlane 1000
#define fFrontClippingPlane 0.1
#define fDefaultField 0.07




extern RPC_IF_HANDLE __MIDL_itf_vwrender_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwrender_0000_0000_v0_0_s_ifspec;

#ifndef __IVWRender_INTERFACE_DEFINED__
#define __IVWRender_INTERFACE_DEFINED__

/* interface IVWRender */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IVWRender;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60CE4B22-FFF0-11CF-89A9-00A0C9054129")
    IVWRender : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleActivate( 
            /* [in] */ WPARAM wParam) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandlePaint( 
            /* [in] */ HDC hDC) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Render( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HitTest( 
            /* [in] */ VARIANT varHitParams,
            /* [in] */ VARIANT_BOOL vbReturnAllPicked,
            /* [retval][out] */ VARIANT *pvarHitResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWRenderVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWRender * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWRender * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWRender * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWRender * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWRender * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWRender * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWRender * This,
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
        
        DECLSPEC_XFGVIRT(IVWRender, HandleActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleActivate )( 
            IVWRender * This,
            /* [in] */ WPARAM wParam);
        
        DECLSPEC_XFGVIRT(IVWRender, HandlePaint)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandlePaint )( 
            IVWRender * This,
            /* [in] */ HDC hDC);
        
        DECLSPEC_XFGVIRT(IVWRender, Render)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Render )( 
            IVWRender * This);
        
        DECLSPEC_XFGVIRT(IVWRender, HitTest)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HitTest )( 
            IVWRender * This,
            /* [in] */ VARIANT varHitParams,
            /* [in] */ VARIANT_BOOL vbReturnAllPicked,
            /* [retval][out] */ VARIANT *pvarHitResult);
        
        END_INTERFACE
    } IVWRenderVtbl;

    interface IVWRender
    {
        CONST_VTBL struct IVWRenderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWRender_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWRender_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWRender_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWRender_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWRender_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWRender_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWRender_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWRender_HandleActivate(This,wParam)	\
    ( (This)->lpVtbl -> HandleActivate(This,wParam) ) 

#define IVWRender_HandlePaint(This,hDC)	\
    ( (This)->lpVtbl -> HandlePaint(This,hDC) ) 

#define IVWRender_Render(This)	\
    ( (This)->lpVtbl -> Render(This) ) 

#define IVWRender_HitTest(This,varHitParams,vbReturnAllPicked,pvarHitResult)	\
    ( (This)->lpVtbl -> HitTest(This,varHitParams,vbReturnAllPicked,pvarHitResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWRender_INTERFACE_DEFINED__ */


#ifndef __IVWRenderRoot_INTERFACE_DEFINED__
#define __IVWRenderRoot_INTERFACE_DEFINED__

/* interface IVWRenderRoot */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IVWRenderRoot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA326BA1-0027-11d0-89A9-00A0C9054129")
    IVWRenderRoot : public IVWRender
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ HWND hWnd,
            /* [in] */ LPDIRECTDRAW pdd,
            /* [in] */ LPDIRECT3DRM pd3drm,
            /* [in] */ LPDIRECT2DRM pd2drm) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Scene( 
            /* [retval][out] */ IVWFrame **ppvwfScene) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Scene( 
            /* [in] */ IVWFrame *pvwfScene) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBackgroundColor( 
            /* [in] */ BYTE r,
            /* [in] */ BYTE g,
            /* [in] */ BYTE b) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VWRender3D( 
            /* [retval][out] */ IVWRender3D **ppVWRender3D) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VWRender2D( 
            /* [retval][out] */ IVWRender2D **ppVWRender2D) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Camera( 
            /* [retval][out] */ IVWFrame **ppvwfCamera) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleSize( 
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FastMode( 
            /* [retval][out] */ VARIANT_BOOL *bFastMode) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FastMode( 
            /* [in] */ VARIANT_BOOL bFastMode) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FastModeEnabled( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FastModeEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ColorModel( 
            /* [in] */ int d3drmColorModel) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UseHWAcceleration( 
            /* [in] */ VARIANT_BOOL bUseHWAcceleration) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseHWAcceleration( 
            /* [retval][out] */ VARIANT_BOOL *pbUseHWAcceleration) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UseBackBuffer( 
            /* [in] */ VARIANT_BOOL bUseBackBuffer) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseBackBuffer( 
            /* [retval][out] */ VARIANT_BOOL *pbUseBackBuffer) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ForceBackBuffer( 
            /* [in] */ VARIANT_BOOL bForceBackBuffer) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ForceBackBuffer( 
            /* [retval][out] */ VARIANT_BOOL *pbForceBackBuffer) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OverlayEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OverlayEnabled( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FPSecond( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FPSecond( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [helpstring][hidden][restricted] */ HRESULT STDMETHODCALLTYPE GetBackBuffer( 
            /* [retval][out] */ LPDIRECTDRAWSURFACE *ppddsBackBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RebuildDevice( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWRenderRootVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWRenderRoot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWRenderRoot * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWRenderRoot * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWRenderRoot * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWRenderRoot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWRenderRoot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWRenderRoot * This,
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
        
        DECLSPEC_XFGVIRT(IVWRender, HandleActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleActivate )( 
            IVWRenderRoot * This,
            /* [in] */ WPARAM wParam);
        
        DECLSPEC_XFGVIRT(IVWRender, HandlePaint)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandlePaint )( 
            IVWRenderRoot * This,
            /* [in] */ HDC hDC);
        
        DECLSPEC_XFGVIRT(IVWRender, Render)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Render )( 
            IVWRenderRoot * This);
        
        DECLSPEC_XFGVIRT(IVWRender, HitTest)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HitTest )( 
            IVWRenderRoot * This,
            /* [in] */ VARIANT varHitParams,
            /* [in] */ VARIANT_BOOL vbReturnAllPicked,
            /* [retval][out] */ VARIANT *pvarHitResult);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, Init)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IVWRenderRoot * This,
            /* [in] */ HWND hWnd,
            /* [in] */ LPDIRECTDRAW pdd,
            /* [in] */ LPDIRECT3DRM pd3drm,
            /* [in] */ LPDIRECT2DRM pd2drm);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_Scene)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scene )( 
            IVWRenderRoot * This,
            /* [retval][out] */ IVWFrame **ppvwfScene);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, put_Scene)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scene )( 
            IVWRenderRoot * This,
            /* [in] */ IVWFrame *pvwfScene);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, SetBackgroundColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )( 
            IVWRenderRoot * This,
            /* [in] */ BYTE r,
            /* [in] */ BYTE g,
            /* [in] */ BYTE b);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_VWRender3D)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VWRender3D )( 
            IVWRenderRoot * This,
            /* [retval][out] */ IVWRender3D **ppVWRender3D);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_VWRender2D)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VWRender2D )( 
            IVWRenderRoot * This,
            /* [retval][out] */ IVWRender2D **ppVWRender2D);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_Camera)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Camera )( 
            IVWRenderRoot * This,
            /* [retval][out] */ IVWFrame **ppvwfCamera);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, HandleSize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleSize )( 
            IVWRenderRoot * This,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_FastMode)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FastMode )( 
            IVWRenderRoot * This,
            /* [retval][out] */ VARIANT_BOOL *bFastMode);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, put_FastMode)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FastMode )( 
            IVWRenderRoot * This,
            /* [in] */ VARIANT_BOOL bFastMode);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, put_FastModeEnabled)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FastModeEnabled )( 
            IVWRenderRoot * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_FastModeEnabled)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FastModeEnabled )( 
            IVWRenderRoot * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, put_ColorModel)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorModel )( 
            IVWRenderRoot * This,
            /* [in] */ int d3drmColorModel);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, put_UseHWAcceleration)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseHWAcceleration )( 
            IVWRenderRoot * This,
            /* [in] */ VARIANT_BOOL bUseHWAcceleration);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_UseHWAcceleration)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseHWAcceleration )( 
            IVWRenderRoot * This,
            /* [retval][out] */ VARIANT_BOOL *pbUseHWAcceleration);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, put_UseBackBuffer)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseBackBuffer )( 
            IVWRenderRoot * This,
            /* [in] */ VARIANT_BOOL bUseBackBuffer);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_UseBackBuffer)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseBackBuffer )( 
            IVWRenderRoot * This,
            /* [retval][out] */ VARIANT_BOOL *pbUseBackBuffer);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, put_ForceBackBuffer)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ForceBackBuffer )( 
            IVWRenderRoot * This,
            /* [in] */ VARIANT_BOOL bForceBackBuffer);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_ForceBackBuffer)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ForceBackBuffer )( 
            IVWRenderRoot * This,
            /* [retval][out] */ VARIANT_BOOL *pbForceBackBuffer);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_OverlayEnabled)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverlayEnabled )( 
            IVWRenderRoot * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, put_OverlayEnabled)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverlayEnabled )( 
            IVWRenderRoot * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, get_FPSecond)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FPSecond )( 
            IVWRenderRoot * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, put_FPSecond)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FPSecond )( 
            IVWRenderRoot * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, GetBackBuffer)
        /* [helpstring][hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetBackBuffer )( 
            IVWRenderRoot * This,
            /* [retval][out] */ LPDIRECTDRAWSURFACE *ppddsBackBuffer);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IVWRenderRoot * This);
        
        DECLSPEC_XFGVIRT(IVWRenderRoot, RebuildDevice)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RebuildDevice )( 
            IVWRenderRoot * This);
        
        END_INTERFACE
    } IVWRenderRootVtbl;

    interface IVWRenderRoot
    {
        CONST_VTBL struct IVWRenderRootVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWRenderRoot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWRenderRoot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWRenderRoot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWRenderRoot_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWRenderRoot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWRenderRoot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWRenderRoot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWRenderRoot_HandleActivate(This,wParam)	\
    ( (This)->lpVtbl -> HandleActivate(This,wParam) ) 

#define IVWRenderRoot_HandlePaint(This,hDC)	\
    ( (This)->lpVtbl -> HandlePaint(This,hDC) ) 

#define IVWRenderRoot_Render(This)	\
    ( (This)->lpVtbl -> Render(This) ) 

#define IVWRenderRoot_HitTest(This,varHitParams,vbReturnAllPicked,pvarHitResult)	\
    ( (This)->lpVtbl -> HitTest(This,varHitParams,vbReturnAllPicked,pvarHitResult) ) 


#define IVWRenderRoot_Init(This,hWnd,pdd,pd3drm,pd2drm)	\
    ( (This)->lpVtbl -> Init(This,hWnd,pdd,pd3drm,pd2drm) ) 

#define IVWRenderRoot_get_Scene(This,ppvwfScene)	\
    ( (This)->lpVtbl -> get_Scene(This,ppvwfScene) ) 

#define IVWRenderRoot_put_Scene(This,pvwfScene)	\
    ( (This)->lpVtbl -> put_Scene(This,pvwfScene) ) 

#define IVWRenderRoot_SetBackgroundColor(This,r,g,b)	\
    ( (This)->lpVtbl -> SetBackgroundColor(This,r,g,b) ) 

#define IVWRenderRoot_get_VWRender3D(This,ppVWRender3D)	\
    ( (This)->lpVtbl -> get_VWRender3D(This,ppVWRender3D) ) 

#define IVWRenderRoot_get_VWRender2D(This,ppVWRender2D)	\
    ( (This)->lpVtbl -> get_VWRender2D(This,ppVWRender2D) ) 

#define IVWRenderRoot_get_Camera(This,ppvwfCamera)	\
    ( (This)->lpVtbl -> get_Camera(This,ppvwfCamera) ) 

#define IVWRenderRoot_HandleSize(This,cx,cy)	\
    ( (This)->lpVtbl -> HandleSize(This,cx,cy) ) 

#define IVWRenderRoot_get_FastMode(This,bFastMode)	\
    ( (This)->lpVtbl -> get_FastMode(This,bFastMode) ) 

#define IVWRenderRoot_put_FastMode(This,bFastMode)	\
    ( (This)->lpVtbl -> put_FastMode(This,bFastMode) ) 

#define IVWRenderRoot_put_FastModeEnabled(This,bEnabled)	\
    ( (This)->lpVtbl -> put_FastModeEnabled(This,bEnabled) ) 

#define IVWRenderRoot_get_FastModeEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_FastModeEnabled(This,pbEnabled) ) 

#define IVWRenderRoot_put_ColorModel(This,d3drmColorModel)	\
    ( (This)->lpVtbl -> put_ColorModel(This,d3drmColorModel) ) 

#define IVWRenderRoot_put_UseHWAcceleration(This,bUseHWAcceleration)	\
    ( (This)->lpVtbl -> put_UseHWAcceleration(This,bUseHWAcceleration) ) 

#define IVWRenderRoot_get_UseHWAcceleration(This,pbUseHWAcceleration)	\
    ( (This)->lpVtbl -> get_UseHWAcceleration(This,pbUseHWAcceleration) ) 

#define IVWRenderRoot_put_UseBackBuffer(This,bUseBackBuffer)	\
    ( (This)->lpVtbl -> put_UseBackBuffer(This,bUseBackBuffer) ) 

#define IVWRenderRoot_get_UseBackBuffer(This,pbUseBackBuffer)	\
    ( (This)->lpVtbl -> get_UseBackBuffer(This,pbUseBackBuffer) ) 

#define IVWRenderRoot_put_ForceBackBuffer(This,bForceBackBuffer)	\
    ( (This)->lpVtbl -> put_ForceBackBuffer(This,bForceBackBuffer) ) 

#define IVWRenderRoot_get_ForceBackBuffer(This,pbForceBackBuffer)	\
    ( (This)->lpVtbl -> get_ForceBackBuffer(This,pbForceBackBuffer) ) 

#define IVWRenderRoot_get_OverlayEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_OverlayEnabled(This,pbEnabled) ) 

#define IVWRenderRoot_put_OverlayEnabled(This,bEnabled)	\
    ( (This)->lpVtbl -> put_OverlayEnabled(This,bEnabled) ) 

#define IVWRenderRoot_get_FPSecond(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_FPSecond(This,pbEnabled) ) 

#define IVWRenderRoot_put_FPSecond(This,bEnabled)	\
    ( (This)->lpVtbl -> put_FPSecond(This,bEnabled) ) 

#define IVWRenderRoot_GetBackBuffer(This,ppddsBackBuffer)	\
    ( (This)->lpVtbl -> GetBackBuffer(This,ppddsBackBuffer) ) 

#define IVWRenderRoot_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IVWRenderRoot_RebuildDevice(This)	\
    ( (This)->lpVtbl -> RebuildDevice(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWRenderRoot_INTERFACE_DEFINED__ */


#ifndef __IVWRender3D_INTERFACE_DEFINED__
#define __IVWRender3D_INTERFACE_DEFINED__

/* interface IVWRender3D */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IVWRender3D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4295EBC0-07DE-11d0-89A9-00A0C9054129")
    IVWRender3D : public IVWRender
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ HWND hWnd,
            /* [in] */ LPDIRECTDRAW pdd,
            /* [in] */ LPDIRECT3DRM pd3drm) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Scene( 
            /* [retval][out] */ LPDIRECT3DRMFRAME *ppd3drmf) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Scene( 
            /* [in] */ LPDIRECT3DRMFRAME pd3drmf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBackgroundColor( 
            /* [in] */ BYTE r,
            /* [in] */ BYTE g,
            /* [in] */ BYTE b) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleSize( 
            /* [in] */ LPDIRECTDRAW pdd,
            /* [in] */ LPDIRECTDRAWSURFACE pddsBackBuffer,
            /* [in] */ LPDIRECTDRAWCLIPPER pddClipper,
            /* [in] */ int cx,
            /* [in] */ int cy,
            /* [in] */ DWORD dwDeviceType) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Direct3DRM( 
            /* [retval][out] */ LPDIRECT3DRM *ppd3drm) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Camera( 
            /* [retval][out] */ LPDIRECT3DRMFRAME *ppd3drm) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFastMode( 
            /* [in] */ VARIANT_BOOL bFastMode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_Viewport( 
            /* [retval][out] */ LPDIRECT3DRMVIEWPORT *ppd3drmVP) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ReleaseDevice( void) = 0;
        
        virtual /* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE put_ColorModel( 
            /* [in] */ int d3drmColorModel) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColorModel( 
            /* [retval][out] */ int *pd3drmColorModel) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_DeviceWidth( 
            /* [retval][out] */ DWORD *pdwDeviceWidth) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_DeviceHeight( 
            /* [retval][out] */ DWORD *pdwDeviceHeight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWRender3DVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWRender3D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWRender3D * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWRender3D * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWRender3D * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWRender3D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWRender3D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWRender3D * This,
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
        
        DECLSPEC_XFGVIRT(IVWRender, HandleActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleActivate )( 
            IVWRender3D * This,
            /* [in] */ WPARAM wParam);
        
        DECLSPEC_XFGVIRT(IVWRender, HandlePaint)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandlePaint )( 
            IVWRender3D * This,
            /* [in] */ HDC hDC);
        
        DECLSPEC_XFGVIRT(IVWRender, Render)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Render )( 
            IVWRender3D * This);
        
        DECLSPEC_XFGVIRT(IVWRender, HitTest)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HitTest )( 
            IVWRender3D * This,
            /* [in] */ VARIANT varHitParams,
            /* [in] */ VARIANT_BOOL vbReturnAllPicked,
            /* [retval][out] */ VARIANT *pvarHitResult);
        
        DECLSPEC_XFGVIRT(IVWRender3D, Init)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IVWRender3D * This,
            /* [in] */ HWND hWnd,
            /* [in] */ LPDIRECTDRAW pdd,
            /* [in] */ LPDIRECT3DRM pd3drm);
        
        DECLSPEC_XFGVIRT(IVWRender3D, get_Scene)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scene )( 
            IVWRender3D * This,
            /* [retval][out] */ LPDIRECT3DRMFRAME *ppd3drmf);
        
        DECLSPEC_XFGVIRT(IVWRender3D, put_Scene)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scene )( 
            IVWRender3D * This,
            /* [in] */ LPDIRECT3DRMFRAME pd3drmf);
        
        DECLSPEC_XFGVIRT(IVWRender3D, SetBackgroundColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )( 
            IVWRender3D * This,
            /* [in] */ BYTE r,
            /* [in] */ BYTE g,
            /* [in] */ BYTE b);
        
        DECLSPEC_XFGVIRT(IVWRender3D, HandleSize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleSize )( 
            IVWRender3D * This,
            /* [in] */ LPDIRECTDRAW pdd,
            /* [in] */ LPDIRECTDRAWSURFACE pddsBackBuffer,
            /* [in] */ LPDIRECTDRAWCLIPPER pddClipper,
            /* [in] */ int cx,
            /* [in] */ int cy,
            /* [in] */ DWORD dwDeviceType);
        
        DECLSPEC_XFGVIRT(IVWRender3D, get_Direct3DRM)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Direct3DRM )( 
            IVWRender3D * This,
            /* [retval][out] */ LPDIRECT3DRM *ppd3drm);
        
        DECLSPEC_XFGVIRT(IVWRender3D, get_Camera)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Camera )( 
            IVWRender3D * This,
            /* [retval][out] */ LPDIRECT3DRMFRAME *ppd3drm);
        
        DECLSPEC_XFGVIRT(IVWRender3D, SetFastMode)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFastMode )( 
            IVWRender3D * This,
            /* [in] */ VARIANT_BOOL bFastMode);
        
        DECLSPEC_XFGVIRT(IVWRender3D, Clear)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IVWRender3D * This);
        
        DECLSPEC_XFGVIRT(IVWRender3D, get_Viewport)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Viewport )( 
            IVWRender3D * This,
            /* [retval][out] */ LPDIRECT3DRMVIEWPORT *ppd3drmVP);
        
        DECLSPEC_XFGVIRT(IVWRender3D, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IVWRender3D * This);
        
        DECLSPEC_XFGVIRT(IVWRender3D, ReleaseDevice)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReleaseDevice )( 
            IVWRender3D * This);
        
        DECLSPEC_XFGVIRT(IVWRender3D, put_ColorModel)
        /* [helpstring][restricted][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorModel )( 
            IVWRender3D * This,
            /* [in] */ int d3drmColorModel);
        
        DECLSPEC_XFGVIRT(IVWRender3D, get_ColorModel)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorModel )( 
            IVWRender3D * This,
            /* [retval][out] */ int *pd3drmColorModel);
        
        DECLSPEC_XFGVIRT(IVWRender3D, get_DeviceWidth)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceWidth )( 
            IVWRender3D * This,
            /* [retval][out] */ DWORD *pdwDeviceWidth);
        
        DECLSPEC_XFGVIRT(IVWRender3D, get_DeviceHeight)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceHeight )( 
            IVWRender3D * This,
            /* [retval][out] */ DWORD *pdwDeviceHeight);
        
        END_INTERFACE
    } IVWRender3DVtbl;

    interface IVWRender3D
    {
        CONST_VTBL struct IVWRender3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWRender3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWRender3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWRender3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWRender3D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWRender3D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWRender3D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWRender3D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWRender3D_HandleActivate(This,wParam)	\
    ( (This)->lpVtbl -> HandleActivate(This,wParam) ) 

#define IVWRender3D_HandlePaint(This,hDC)	\
    ( (This)->lpVtbl -> HandlePaint(This,hDC) ) 

#define IVWRender3D_Render(This)	\
    ( (This)->lpVtbl -> Render(This) ) 

#define IVWRender3D_HitTest(This,varHitParams,vbReturnAllPicked,pvarHitResult)	\
    ( (This)->lpVtbl -> HitTest(This,varHitParams,vbReturnAllPicked,pvarHitResult) ) 


#define IVWRender3D_Init(This,hWnd,pdd,pd3drm)	\
    ( (This)->lpVtbl -> Init(This,hWnd,pdd,pd3drm) ) 

#define IVWRender3D_get_Scene(This,ppd3drmf)	\
    ( (This)->lpVtbl -> get_Scene(This,ppd3drmf) ) 

#define IVWRender3D_put_Scene(This,pd3drmf)	\
    ( (This)->lpVtbl -> put_Scene(This,pd3drmf) ) 

#define IVWRender3D_SetBackgroundColor(This,r,g,b)	\
    ( (This)->lpVtbl -> SetBackgroundColor(This,r,g,b) ) 

#define IVWRender3D_HandleSize(This,pdd,pddsBackBuffer,pddClipper,cx,cy,dwDeviceType)	\
    ( (This)->lpVtbl -> HandleSize(This,pdd,pddsBackBuffer,pddClipper,cx,cy,dwDeviceType) ) 

#define IVWRender3D_get_Direct3DRM(This,ppd3drm)	\
    ( (This)->lpVtbl -> get_Direct3DRM(This,ppd3drm) ) 

#define IVWRender3D_get_Camera(This,ppd3drm)	\
    ( (This)->lpVtbl -> get_Camera(This,ppd3drm) ) 

#define IVWRender3D_SetFastMode(This,bFastMode)	\
    ( (This)->lpVtbl -> SetFastMode(This,bFastMode) ) 

#define IVWRender3D_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IVWRender3D_get_Viewport(This,ppd3drmVP)	\
    ( (This)->lpVtbl -> get_Viewport(This,ppd3drmVP) ) 

#define IVWRender3D_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IVWRender3D_ReleaseDevice(This)	\
    ( (This)->lpVtbl -> ReleaseDevice(This) ) 

#define IVWRender3D_put_ColorModel(This,d3drmColorModel)	\
    ( (This)->lpVtbl -> put_ColorModel(This,d3drmColorModel) ) 

#define IVWRender3D_get_ColorModel(This,pd3drmColorModel)	\
    ( (This)->lpVtbl -> get_ColorModel(This,pd3drmColorModel) ) 

#define IVWRender3D_get_DeviceWidth(This,pdwDeviceWidth)	\
    ( (This)->lpVtbl -> get_DeviceWidth(This,pdwDeviceWidth) ) 

#define IVWRender3D_get_DeviceHeight(This,pdwDeviceHeight)	\
    ( (This)->lpVtbl -> get_DeviceHeight(This,pdwDeviceHeight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWRender3D_INTERFACE_DEFINED__ */


#ifndef __IVWRender2D_INTERFACE_DEFINED__
#define __IVWRender2D_INTERFACE_DEFINED__

/* interface IVWRender2D */
/* [unique][helpstring][dual][uuid][local][object] */ 


EXTERN_C const IID IID_IVWRender2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC6552C0-07DE-11d0-89A9-00A0C9054129")
    IVWRender2D : public IVWRender
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ HWND hWnd,
            /* [in] */ LPDIRECT2DRM pd2drm) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Scene( 
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppd2drmf) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Scene( 
            /* [in] */ LPDIRECT2DRMFRAME pd2drmf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBackgroundColor( 
            /* [in] */ BYTE r,
            /* [in] */ BYTE g,
            /* [in] */ BYTE b) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Camera( 
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppd2drm) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleSize( 
            /* [in] */ LPDIRECTDRAWSURFACE pddsBackBuffer) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Direct2DRM( 
            /* [retval][out] */ LPDIRECT2DRM *ppd2drm) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFastMode( 
            /* [in] */ VARIANT_BOOL bFastMode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BackgroundImage( 
            /* [in] */ LPDIRECT2DRMIMAGE piBackground) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ReleaseDevice( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWRender2DVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWRender2D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWRender2D * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWRender2D * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWRender2D * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWRender2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWRender2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWRender2D * This,
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
        
        DECLSPEC_XFGVIRT(IVWRender, HandleActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleActivate )( 
            IVWRender2D * This,
            /* [in] */ WPARAM wParam);
        
        DECLSPEC_XFGVIRT(IVWRender, HandlePaint)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandlePaint )( 
            IVWRender2D * This,
            /* [in] */ HDC hDC);
        
        DECLSPEC_XFGVIRT(IVWRender, Render)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Render )( 
            IVWRender2D * This);
        
        DECLSPEC_XFGVIRT(IVWRender, HitTest)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HitTest )( 
            IVWRender2D * This,
            /* [in] */ VARIANT varHitParams,
            /* [in] */ VARIANT_BOOL vbReturnAllPicked,
            /* [retval][out] */ VARIANT *pvarHitResult);
        
        DECLSPEC_XFGVIRT(IVWRender2D, Init)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IVWRender2D * This,
            /* [in] */ HWND hWnd,
            /* [in] */ LPDIRECT2DRM pd2drm);
        
        DECLSPEC_XFGVIRT(IVWRender2D, get_Scene)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Scene )( 
            IVWRender2D * This,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppd2drmf);
        
        DECLSPEC_XFGVIRT(IVWRender2D, put_Scene)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Scene )( 
            IVWRender2D * This,
            /* [in] */ LPDIRECT2DRMFRAME pd2drmf);
        
        DECLSPEC_XFGVIRT(IVWRender2D, SetBackgroundColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )( 
            IVWRender2D * This,
            /* [in] */ BYTE r,
            /* [in] */ BYTE g,
            /* [in] */ BYTE b);
        
        DECLSPEC_XFGVIRT(IVWRender2D, get_Camera)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Camera )( 
            IVWRender2D * This,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppd2drm);
        
        DECLSPEC_XFGVIRT(IVWRender2D, HandleSize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleSize )( 
            IVWRender2D * This,
            /* [in] */ LPDIRECTDRAWSURFACE pddsBackBuffer);
        
        DECLSPEC_XFGVIRT(IVWRender2D, get_Direct2DRM)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Direct2DRM )( 
            IVWRender2D * This,
            /* [retval][out] */ LPDIRECT2DRM *ppd2drm);
        
        DECLSPEC_XFGVIRT(IVWRender2D, SetFastMode)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFastMode )( 
            IVWRender2D * This,
            /* [in] */ VARIANT_BOOL bFastMode);
        
        DECLSPEC_XFGVIRT(IVWRender2D, Clear)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IVWRender2D * This);
        
        DECLSPEC_XFGVIRT(IVWRender2D, put_BackgroundImage)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundImage )( 
            IVWRender2D * This,
            /* [in] */ LPDIRECT2DRMIMAGE piBackground);
        
        DECLSPEC_XFGVIRT(IVWRender2D, ReleaseDevice)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReleaseDevice )( 
            IVWRender2D * This);
        
        END_INTERFACE
    } IVWRender2DVtbl;

    interface IVWRender2D
    {
        CONST_VTBL struct IVWRender2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWRender2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWRender2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWRender2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWRender2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWRender2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWRender2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWRender2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWRender2D_HandleActivate(This,wParam)	\
    ( (This)->lpVtbl -> HandleActivate(This,wParam) ) 

#define IVWRender2D_HandlePaint(This,hDC)	\
    ( (This)->lpVtbl -> HandlePaint(This,hDC) ) 

#define IVWRender2D_Render(This)	\
    ( (This)->lpVtbl -> Render(This) ) 

#define IVWRender2D_HitTest(This,varHitParams,vbReturnAllPicked,pvarHitResult)	\
    ( (This)->lpVtbl -> HitTest(This,varHitParams,vbReturnAllPicked,pvarHitResult) ) 


#define IVWRender2D_Init(This,hWnd,pd2drm)	\
    ( (This)->lpVtbl -> Init(This,hWnd,pd2drm) ) 

#define IVWRender2D_get_Scene(This,ppd2drmf)	\
    ( (This)->lpVtbl -> get_Scene(This,ppd2drmf) ) 

#define IVWRender2D_put_Scene(This,pd2drmf)	\
    ( (This)->lpVtbl -> put_Scene(This,pd2drmf) ) 

#define IVWRender2D_SetBackgroundColor(This,r,g,b)	\
    ( (This)->lpVtbl -> SetBackgroundColor(This,r,g,b) ) 

#define IVWRender2D_get_Camera(This,ppd2drm)	\
    ( (This)->lpVtbl -> get_Camera(This,ppd2drm) ) 

#define IVWRender2D_HandleSize(This,pddsBackBuffer)	\
    ( (This)->lpVtbl -> HandleSize(This,pddsBackBuffer) ) 

#define IVWRender2D_get_Direct2DRM(This,ppd2drm)	\
    ( (This)->lpVtbl -> get_Direct2DRM(This,ppd2drm) ) 

#define IVWRender2D_SetFastMode(This,bFastMode)	\
    ( (This)->lpVtbl -> SetFastMode(This,bFastMode) ) 

#define IVWRender2D_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IVWRender2D_put_BackgroundImage(This,piBackground)	\
    ( (This)->lpVtbl -> put_BackgroundImage(This,piBackground) ) 

#define IVWRender2D_ReleaseDevice(This)	\
    ( (This)->lpVtbl -> ReleaseDevice(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWRender2D_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


