

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwframe.idl:
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

#ifndef __vwframe_h__
#define __vwframe_h__

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

#ifndef __IVWFrame_FWD_DEFINED__
#define __IVWFrame_FWD_DEFINED__
typedef interface IVWFrame IVWFrame;

#endif 	/* __IVWFrame_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "cellprop.h"
#include "vwgeom.h"
#include "vwgcache.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwframe_0000_0000 */
/* [local] */ 

#define VWFRAME_E_MESHHASNOFACES				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e80)


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

typedef int *LPDIRECT3DRMANIMATION2;

typedef int *LPDIRECT3DRMANIMATIONSET2;

typedef int *LPDIRECT3DRMVIEWPORT;

typedef int *LPDIRECT3DRMUSERVISUAL;

#endif
#ifndef __D3DRM_H__
typedef int D3DRMCOMBINETYPE;

#endif
#define VWFRAME_ALLFRAME -1
#define VWFRAME_ALLHIERARCHY -2
#define AXIS_NONE 0
#define AXIS_X 1
#define AXIS_Y 2
#define AXIS_Z 4
#define AXIS_ALL 7
#define BOLD 1
#define ITALIC 2
#define UNDERLINE 4
#define STRIKETHROUGH 8
#define LABEL_CENTER 0
#define LABEL_ABOVE 1
#define LABEL_BELOW 2
#define LABEL_RIGHT 4
#define LABEL_LEFT 8
#define LEAVEMESHQUALITY "vwSelectionBox"


extern RPC_IF_HANDLE __MIDL_itf_vwframe_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwframe_0000_0000_v0_0_s_ifspec;

#ifndef __IVWFrame_INTERFACE_DEFINED__
#define __IVWFrame_INTERFACE_DEFINED__

/* interface IVWFrame */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FEADAC62-0B23-11D0-89A9-00A0C9054129")
    IVWFrame : public IVWTransform
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFrameByName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IVWFrame **ppvwfDst) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddChild( 
            /* [in] */ IVWFrame *pvwfChild) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteChild( 
            /* [in] */ IVWFrame *pvwfChild) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsChildOf( 
            /* [in] */ IVWFrame *pvwf,
            /* [retval][out] */ VARIANT_BOOL *pbIsChild) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetParent( 
            /* [retval][out] */ IVWFrame **ppvwfParent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChildren( 
            /* [retval][out] */ IPropertyList **ppChildren) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetVWFChildren( 
            /* [retval][out] */ IPropertyList **ppChildren) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetScene( 
            /* [retval][out] */ IVWFrame **ppvwfScene) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ IVWFrame **ppvwfDst) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Transform( 
            long nRotationAxis,
            float *pfDstX,
            float *pfDstY,
            float *pfDstZ,
            float fSrcX,
            float fSrcY,
            float fSrcZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InverseTransform( 
            long nRotationAxis,
            float *pfDstX,
            float *pfDstY,
            float *pfDstZ,
            float fSrcX,
            float fSrcY,
            float fSrcZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPositionEx( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetPositionEx( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *pfPosX,
            /* [out] */ float *pfPosY,
            /* [out] */ float *pfPosZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPosition( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *pfPosX,
            /* [out] */ VARIANT *pfPosY,
            /* [out] */ VARIANT *pfPosZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetOrientationEx( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fDirX,
            /* [in] */ float fDirY,
            /* [in] */ float fDirZ,
            /* [in] */ float fUpX,
            /* [in] */ float fUpY,
            /* [in] */ float fUpZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetOrientation( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fDirX,
            /* [in] */ float fDirY,
            /* [in] */ float fDirZ,
            /* [in] */ float fUpX,
            /* [in] */ float fUpY,
            /* [in] */ float fUpZ) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetOrientationEx( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *pfDirX,
            /* [out] */ float *pfDirY,
            /* [out] */ float *pfDirZ,
            /* [out] */ float *pfUpX,
            /* [out] */ float *pfUpY,
            /* [out] */ float *pfUpZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetOrientation( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *pfDirX,
            /* [out] */ VARIANT *pfDirY,
            /* [out] */ VARIANT *pfDirZ,
            /* [out] */ VARIANT *pfUpX,
            /* [out] */ VARIANT *pfUpY,
            /* [out] */ VARIANT *pfUpZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRotationRate( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float rvX,
            /* [in] */ float rvY,
            /* [in] */ float rvZ,
            /* [in] */ float rvTheta) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRotationRate( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *prvX,
            /* [out] */ VARIANT *prvY,
            /* [out] */ VARIANT *prvZ,
            /* [out] */ VARIANT *prvTheta) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetRotationRateEx( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *prvX,
            /* [out] */ float *prvY,
            /* [out] */ float *prvZ,
            /* [out] */ float *prvTheta) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVelocity( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float vX,
            /* [in] */ float vY,
            /* [in] */ float vZ) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetVelocityEx( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *pvX,
            /* [out] */ float *pvY,
            /* [out] */ float *pvZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVelocity( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *pvX,
            /* [out] */ VARIANT *pvY,
            /* [out] */ VARIANT *pvZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetScaleEx( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fScaleX,
            /* [in] */ float fScaleY,
            /* [in] */ float fScaleZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetScale( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fScaleX,
            /* [in] */ float fScaleY,
            /* [in] */ float fScaleZ) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetScaleEx( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *pfScaleX,
            /* [out] */ float *pfScaleY,
            /* [out] */ float *pfScaleZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetScale( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *pfScaleX,
            /* [out] */ VARIANT *pfScaleY,
            /* [out] */ VARIANT *pfScaleZ) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE MoveToPosition( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ,
            /* [in] */ VARIANT_BOOL bFireEvents,
            /* [retval][out] */ IPropertyList **ppIDataList) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE FindIntersections( 
            /* [in] */ float fStartPosX,
            /* [in] */ float fStartPosY,
            /* [in] */ float fStartPosZ,
            /* [in] */ float fEndPosX,
            /* [in] */ float fEndPosY,
            /* [in] */ float fEndPosZ,
            /* [retval][out] */ IPropertyList **ppIDataList) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetFloorHeight( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [retval][out] */ float *pfFloorHeight) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetCeilingHeight( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [retval][out] */ float *pfCeilingHeight) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetFloorHeightAtPosition( 
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ,
            /* [retval][out] */ float *pfFloorHeight) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetCeilingHeightAtPosition( 
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ,
            /* [retval][out] */ float *pfCeilingHeight) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBoundingBox( 
            /* [out] */ VARIANT *fminX,
            /* [out] */ VARIANT *fminY,
            /* [out] */ VARIANT *fminZ,
            /* [out] */ VARIANT *fmaxX,
            /* [out] */ VARIANT *fmaxY,
            /* [out] */ VARIANT *fmaxZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LookAt( 
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateLight( 
            /* [optional][in] */ VARIANT bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteLight( 
            /* [in] */ long nIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLightColor( 
            /* [in] */ long nIndex,
            /* [in] */ float fRed,
            /* [in] */ float fGreen,
            /* [in] */ float fBlue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLightAttenuation( 
            /* [in] */ long nIndex,
            /* [in] */ float fConst,
            /* [in] */ float fLinear,
            /* [in] */ float fQuadratic) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLightType( 
            /* [in] */ long nIndex,
            /* [in] */ int iType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLightRange( 
            /* [in] */ long nIndex,
            /* [in] */ float fRange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSpotLightRadii( 
            /* [in] */ long nIndex,
            /* [in] */ float fUmbra,
            /* [in] */ float fPenUmbra) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLightName( 
            /* [in] */ long nIndex,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLightName( 
            /* [in] */ long nIndex,
            /* [retval][out] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLightColor( 
            /* [in] */ long nIndex,
            /* [out] */ VARIANT *fRed,
            /* [out] */ VARIANT *fGreen,
            /* [out] */ VARIANT *fBlue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLightAttenuation( 
            /* [in] */ long nIndex,
            /* [out] */ VARIANT *fConst,
            /* [out] */ VARIANT *fLinear,
            /* [out] */ VARIANT *fQuadratic) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLightType( 
            /* [in] */ long nIndex,
            /* [retval][out] */ int *iType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLightRange( 
            /* [in] */ long nIndex,
            /* [retval][out] */ float *fRange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSpotLightRadii( 
            /* [in] */ long nIndex,
            /* [out] */ VARIANT *fUmbra,
            /* [out] */ VARIANT *fPenUmbra) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLightIndexByName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *nIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLightCount( 
            /* [retval][out] */ long *nCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVisualCount( 
            /* [retval][out] */ VARIANT *pvarCount) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetVisualCountByIID( 
            /* [in] */ REFIID ref,
            /* [retval][out] */ VARIANT *pvarCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVisualIndexByName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *nIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProgressiveMeshDetail( 
            /* [in] */ long nMeshIndex,
            /* [in] */ float detail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProgressiveMeshDetail( 
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ float *detail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProgressiveMeshFaceDetail( 
            /* [in] */ long nMeshIndex,
            /* [in] */ DWORD detail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProgressiveMeshFaceDetail( 
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ DWORD *detail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProgressiveMeshVertexDetail( 
            /* [in] */ long nMeshIndex,
            /* [in] */ DWORD detail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProgressiveMeshVertexDetail( 
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ DWORD *detail) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProgressiveMeshFaceDetailRange( 
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *min,
            /* [out] */ VARIANT *max) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProgressiveMeshVertexDetailRange( 
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *min,
            /* [out] */ VARIANT *max) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProgressiveMeshQuality( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int nQuality) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProgressiveMeshQuality( 
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ int *nQuality) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProgressiveMeshCount( 
            /* [retval][out] */ VARIANT *pvarCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProgressiveMeshIndexByName( 
            /* [in] */ BSTR bstrMeshName,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshName( 
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ BSTR *pbstrMeshName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshName( 
            /* [in] */ long nMeshIndex,
            /* [in] */ BSTR bstrMeshName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshIndexByName( 
            /* [in] */ BSTR bstrMeshName,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshColor( 
            /* [in] */ long nMeshIndex,
            /* [in] */ float fRed,
            /* [in] */ float fGreen,
            /* [in] */ float fBlue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshColor( 
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *fRed,
            /* [out] */ VARIANT *fGreen,
            /* [out] */ VARIANT *fBlue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshQuality( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int nQuality) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshQuality( 
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ int *nQuality) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshPerspective( 
            /* [in] */ long nMeshIndex,
            /* [in] */ VARIANT_BOOL vbPersp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshPerspective( 
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ VARIANT_BOOL *vbPersp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshMaterial( 
            /* [in] */ long nMeshIndex,
            /* [in] */ float fDiffuse,
            /* [in] */ float fSpecular,
            /* [in] */ float fPower) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshMaterial( 
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *fDiffuse,
            /* [out] */ VARIANT *fSpecular,
            /* [out] */ VARIANT *fPower) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshFaceVertex( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshFaceVertex( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [out] */ VARIANT *fX,
            /* [out] */ VARIANT *fY,
            /* [out] */ VARIANT *fZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddMeshFaceVertex( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshFaceVertexColor( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [in] */ float fRed,
            /* [in] */ float fGreen,
            /* [in] */ float fBlue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshFaceVertexColor( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [out] */ VARIANT *fRed,
            /* [out] */ VARIANT *fGreen,
            /* [out] */ VARIANT *fBlue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshFaceUV( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [in] */ float fU,
            /* [in] */ float fV) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshFaceUV( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [out] */ VARIANT *fU,
            /* [out] */ VARIANT *fV) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshFaceColor( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int index,
            /* [in] */ float fRed,
            /* [in] */ float fGreen,
            /* [in] */ float fBlue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshFaceColor( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int index,
            /* [out] */ VARIANT *fRed,
            /* [out] */ VARIANT *fGreen,
            /* [out] */ VARIANT *fBlue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshCount( 
            /* [retval][out] */ VARIANT *pvarCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WrapMesh( 
            /* [in] */ long nMeshIndex,
            /* [in] */ int type,
            /* [in] */ float scaleu,
            /* [in] */ float scalev) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMesh( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateUnitMesh( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMeshFace( 
            /* [in] */ long nMeshIndex,
            /* [in] */ VARIANT varArgs) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshFaceCount( 
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ VARIANT *varFaceCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshTextureFromURL( 
            /* [in] */ long nMeshIndex,
            /* [in] */ BSTR bstrTexture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMeshTextureFromText( 
            /* [in] */ long nMeshIndex,
            /* [in] */ BSTR bstrText,
            /* [in] */ VARIANT_BOOL bShadowed,
            /* [in] */ DWORD nWidth,
            /* [in] */ DWORD nHeight,
            /* [in] */ DWORD nPointHeight) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshTextureName( 
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ BSTR *bstrTexture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMeshFaceVertexCount( 
            /* [in] */ long nMeshIndex,
            /* [in] */ long nFaceIndex,
            /* [retval][out] */ long *nCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateDecalFromURL( 
            /* [in] */ BSTR bstrTexture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateDecalFromText( 
            /* [in] */ BSTR bstrText,
            /* [optional][in] */ VARIANT bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateDecalFromTextExt( 
            /* [in] */ BSTR bstrText,
            /* [in] */ long lPlacement,
            /* [in] */ BSTR bstrFontName,
            /* [in] */ long lFontSize,
            /* [in] */ long lLabelStyle,
            /* [in] */ IVector *pvFontColor,
            /* [in] */ IVector *pvShadowColor,
            /* [in] */ VARIANT bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDecalSize( 
            /* [in] */ long nMeshIndex,
            /* [in] */ float fHeight,
            /* [in] */ float fWidth,
            /* [in] */ VARIANT_BOOL bScale) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDecalOrigin( 
            /* [in] */ long nMeshIndex,
            /* [in] */ long lx,
            /* [in] */ long ly) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDecalSize( 
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *fHeight,
            /* [out] */ VARIANT *fWidth,
            /* [out] */ VARIANT *bScale) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDecalOrigin( 
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *lx,
            /* [out] */ VARIANT *ly) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteDecal( 
            /* [in] */ long nMeshIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDecalCount( 
            /* [retval][out] */ long *nCount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDecalIndexByName( 
            /* [in] */ BSTR bstrDecalName,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSceneFogColor( 
            /* [in] */ float red,
            /* [in] */ float green,
            /* [in] */ float blue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSceneFogEnable( 
            /* [in] */ VARIANT_BOOL fogEnable) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSceneFogParams( 
            /* [in] */ float start,
            /* [in] */ float end) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateShadow( 
            /* [in] */ int nMeshIndex,
            /* [in] */ IVWFrame *pvwfLightSrc,
            /* [in] */ int nIndex,
            /* [in] */ float ylevel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteShadow( 
            /* [in] */ int nMeshIndex,
            /* [in] */ IVWFrame *pvwfLightSrc,
            /* [in] */ int nIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PlayVideo( 
            /* [in] */ int nMeshIndex,
            /* [in] */ BSTR sfilename) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Explode( 
            DWORD dwTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetInternalScale( 
            /* [in] */ float fScaleX,
            /* [in] */ float fScaleY,
            /* [in] */ float fScaleZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartAnimation( 
            /* [in] */ float fTimeScale,
            /* [in] */ float fRangeStart,
            /* [in] */ float fRangeEnd,
            /* [in] */ BSTR bstrAnimationDoneMethod) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopAnimation( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AnimationSetTime( 
            /* [in] */ float fTime) = 0;
        
        virtual /* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE get_AnimationSet( 
            /* [retval][out] */ LPDIRECT3DRMANIMATIONSET2 *ppd3drmanimset) = 0;
        
        virtual /* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE put_AnimationSet( 
            /* [in] */ LPDIRECT3DRMANIMATIONSET2 ppd3drmanimset) = 0;
        
        virtual /* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE get_Frame3D( 
            /* [retval][out] */ LPDIRECT3DRMFRAME *ppd3drmf) = 0;
        
        virtual /* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE put_Frame3D( 
            /* [in] */ LPDIRECT3DRMFRAME pd3drmf) = 0;
        
        virtual /* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE get_Frame2D( 
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppd2drmf) = 0;
        
        virtual /* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE put_Frame2D( 
            /* [in] */ LPDIRECT2DRMFRAME pd2drmf) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Thing( 
            /* [retval][out] */ IThing **ppThing) = 0;
        
        virtual /* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE put_Thing( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE get_BoundaryList( 
            /* [retval][out] */ IPropertyList **ppBoundaryList) = 0;
        
        virtual /* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE put_BoundaryList( 
            /* [in] */ IPropertyList *pBoundaryList) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SetAppString( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetAppString( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_GeometryCache( 
            /* [in] */ IVWGeometryCache *pVWGeometryCache) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_GeometryObject( 
            /* [in] */ IVWGeometry *pVWGeometry) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_GeometryObject( 
            /* [retval][out] */ IVWGeometry **ppVWGeometry) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWFrameVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWFrame * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWFrame * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWFrame * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWFrame * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWFrame * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWFrame * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWFrame * This,
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
            IVWFrame * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IVWFrame * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IVWFrame * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IVWFrame * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVWFrame * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IVWFrame * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IVWFrame * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IVWFrame * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IVWFrame * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IVWFrame * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IVWFrame * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IVWFrame * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IVWFrame * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IVWFrame * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IVWFrame * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IVWFrame * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IVWFrame * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVWFrame * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IVWFrame * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IVWFrame * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IVWFrame * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetFrameByName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFrameByName )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IVWFrame **ppvwfDst);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IVWFrame * This,
            /* [retval][out] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(IVWFrame, AddChild)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddChild )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfChild);
        
        DECLSPEC_XFGVIRT(IVWFrame, DeleteChild)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteChild )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfChild);
        
        DECLSPEC_XFGVIRT(IVWFrame, IsChildOf)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsChildOf )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwf,
            /* [retval][out] */ VARIANT_BOOL *pbIsChild);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetParent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IVWFrame * This,
            /* [retval][out] */ IVWFrame **ppvwfParent);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetChildren)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            IVWFrame * This,
            /* [retval][out] */ IPropertyList **ppChildren);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetVWFChildren)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetVWFChildren )( 
            IVWFrame * This,
            /* [retval][out] */ IPropertyList **ppChildren);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetScene)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetScene )( 
            IVWFrame * This,
            /* [retval][out] */ IVWFrame **ppvwfScene);
        
        DECLSPEC_XFGVIRT(IVWFrame, Copy)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IVWFrame * This,
            /* [retval][out] */ IVWFrame **ppvwfDst);
        
        DECLSPEC_XFGVIRT(IVWFrame, Transform)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Transform )( 
            IVWFrame * This,
            long nRotationAxis,
            float *pfDstX,
            float *pfDstY,
            float *pfDstZ,
            float fSrcX,
            float fSrcY,
            float fSrcZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, InverseTransform)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InverseTransform )( 
            IVWFrame * This,
            long nRotationAxis,
            float *pfDstX,
            float *pfDstY,
            float *pfDstZ,
            float fSrcX,
            float fSrcY,
            float fSrcZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetPositionEx)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPositionEx )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetPosition)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetPositionEx)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetPositionEx )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *pfPosX,
            /* [out] */ float *pfPosY,
            /* [out] */ float *pfPosZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetPosition)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *pfPosX,
            /* [out] */ VARIANT *pfPosY,
            /* [out] */ VARIANT *pfPosZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetOrientationEx)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOrientationEx )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fDirX,
            /* [in] */ float fDirY,
            /* [in] */ float fDirZ,
            /* [in] */ float fUpX,
            /* [in] */ float fUpY,
            /* [in] */ float fUpZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetOrientation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOrientation )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fDirX,
            /* [in] */ float fDirY,
            /* [in] */ float fDirZ,
            /* [in] */ float fUpX,
            /* [in] */ float fUpY,
            /* [in] */ float fUpZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetOrientationEx)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetOrientationEx )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *pfDirX,
            /* [out] */ float *pfDirY,
            /* [out] */ float *pfDirZ,
            /* [out] */ float *pfUpX,
            /* [out] */ float *pfUpY,
            /* [out] */ float *pfUpZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetOrientation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOrientation )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *pfDirX,
            /* [out] */ VARIANT *pfDirY,
            /* [out] */ VARIANT *pfDirZ,
            /* [out] */ VARIANT *pfUpX,
            /* [out] */ VARIANT *pfUpY,
            /* [out] */ VARIANT *pfUpZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetRotationRate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRotationRate )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float rvX,
            /* [in] */ float rvY,
            /* [in] */ float rvZ,
            /* [in] */ float rvTheta);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetRotationRate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRotationRate )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *prvX,
            /* [out] */ VARIANT *prvY,
            /* [out] */ VARIANT *prvZ,
            /* [out] */ VARIANT *prvTheta);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetRotationRateEx)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetRotationRateEx )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *prvX,
            /* [out] */ float *prvY,
            /* [out] */ float *prvZ,
            /* [out] */ float *prvTheta);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetVelocity)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVelocity )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float vX,
            /* [in] */ float vY,
            /* [in] */ float vZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetVelocityEx)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetVelocityEx )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *pvX,
            /* [out] */ float *pvY,
            /* [out] */ float *pvZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetVelocity)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVelocity )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *pvX,
            /* [out] */ VARIANT *pvY,
            /* [out] */ VARIANT *pvZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetScaleEx)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetScaleEx )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fScaleX,
            /* [in] */ float fScaleY,
            /* [in] */ float fScaleZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetScale)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetScale )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fScaleX,
            /* [in] */ float fScaleY,
            /* [in] */ float fScaleZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetScaleEx)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetScaleEx )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ float *pfScaleX,
            /* [out] */ float *pfScaleY,
            /* [out] */ float *pfScaleZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetScale)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetScale )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [out] */ VARIANT *pfScaleX,
            /* [out] */ VARIANT *pfScaleY,
            /* [out] */ VARIANT *pfScaleZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, MoveToPosition)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MoveToPosition )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ,
            /* [in] */ VARIANT_BOOL bFireEvents,
            /* [retval][out] */ IPropertyList **ppIDataList);
        
        DECLSPEC_XFGVIRT(IVWFrame, FindIntersections)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *FindIntersections )( 
            IVWFrame * This,
            /* [in] */ float fStartPosX,
            /* [in] */ float fStartPosY,
            /* [in] */ float fStartPosZ,
            /* [in] */ float fEndPosX,
            /* [in] */ float fEndPosY,
            /* [in] */ float fEndPosZ,
            /* [retval][out] */ IPropertyList **ppIDataList);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetFloorHeight)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetFloorHeight )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [retval][out] */ float *pfFloorHeight);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetCeilingHeight)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetCeilingHeight )( 
            IVWFrame * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [retval][out] */ float *pfCeilingHeight);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetFloorHeightAtPosition)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetFloorHeightAtPosition )( 
            IVWFrame * This,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ,
            /* [retval][out] */ float *pfFloorHeight);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetCeilingHeightAtPosition)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetCeilingHeightAtPosition )( 
            IVWFrame * This,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ,
            /* [retval][out] */ float *pfCeilingHeight);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetBoundingBox)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )( 
            IVWFrame * This,
            /* [out] */ VARIANT *fminX,
            /* [out] */ VARIANT *fminY,
            /* [out] */ VARIANT *fminZ,
            /* [out] */ VARIANT *fmaxX,
            /* [out] */ VARIANT *fmaxY,
            /* [out] */ VARIANT *fmaxZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, LookAt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LookAt )( 
            IVWFrame * This,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, CreateLight)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateLight )( 
            IVWFrame * This,
            /* [optional][in] */ VARIANT bstrName);
        
        DECLSPEC_XFGVIRT(IVWFrame, DeleteLight)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteLight )( 
            IVWFrame * This,
            /* [in] */ long nIndex);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetLightColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLightColor )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [in] */ float fRed,
            /* [in] */ float fGreen,
            /* [in] */ float fBlue);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetLightAttenuation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLightAttenuation )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [in] */ float fConst,
            /* [in] */ float fLinear,
            /* [in] */ float fQuadratic);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetLightType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLightType )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [in] */ int iType);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetLightRange)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLightRange )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [in] */ float fRange);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetSpotLightRadii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSpotLightRadii )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [in] */ float fUmbra,
            /* [in] */ float fPenUmbra);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetLightName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLightName )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetLightName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLightName )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetLightColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLightColor )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [out] */ VARIANT *fRed,
            /* [out] */ VARIANT *fGreen,
            /* [out] */ VARIANT *fBlue);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetLightAttenuation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLightAttenuation )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [out] */ VARIANT *fConst,
            /* [out] */ VARIANT *fLinear,
            /* [out] */ VARIANT *fQuadratic);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetLightType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLightType )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ int *iType);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetLightRange)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLightRange )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ float *fRange);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetSpotLightRadii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSpotLightRadii )( 
            IVWFrame * This,
            /* [in] */ long nIndex,
            /* [out] */ VARIANT *fUmbra,
            /* [out] */ VARIANT *fPenUmbra);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetLightIndexByName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLightIndexByName )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *nIndex);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetLightCount)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLightCount )( 
            IVWFrame * This,
            /* [retval][out] */ long *nCount);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetVisualCount)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVisualCount )( 
            IVWFrame * This,
            /* [retval][out] */ VARIANT *pvarCount);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetVisualCountByIID)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetVisualCountByIID )( 
            IVWFrame * This,
            /* [in] */ REFIID ref,
            /* [retval][out] */ VARIANT *pvarCount);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetVisualIndexByName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVisualIndexByName )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *nIndex);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetProgressiveMeshDetail)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProgressiveMeshDetail )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ float detail);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetProgressiveMeshDetail)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProgressiveMeshDetail )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ float *detail);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetProgressiveMeshFaceDetail)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProgressiveMeshFaceDetail )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ DWORD detail);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetProgressiveMeshFaceDetail)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProgressiveMeshFaceDetail )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ DWORD *detail);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetProgressiveMeshVertexDetail)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProgressiveMeshVertexDetail )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ DWORD detail);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetProgressiveMeshVertexDetail)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProgressiveMeshVertexDetail )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ DWORD *detail);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetProgressiveMeshFaceDetailRange)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProgressiveMeshFaceDetailRange )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *min,
            /* [out] */ VARIANT *max);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetProgressiveMeshVertexDetailRange)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProgressiveMeshVertexDetailRange )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *min,
            /* [out] */ VARIANT *max);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetProgressiveMeshQuality)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProgressiveMeshQuality )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int nQuality);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetProgressiveMeshQuality)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProgressiveMeshQuality )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ int *nQuality);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetProgressiveMeshCount)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProgressiveMeshCount )( 
            IVWFrame * This,
            /* [retval][out] */ VARIANT *pvarCount);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetProgressiveMeshIndexByName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProgressiveMeshIndexByName )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrMeshName,
            /* [retval][out] */ long *plIndex);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshName )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ BSTR *pbstrMeshName);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshName )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ BSTR bstrMeshName);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshIndexByName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshIndexByName )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrMeshName,
            /* [retval][out] */ long *plIndex);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshColor )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ float fRed,
            /* [in] */ float fGreen,
            /* [in] */ float fBlue);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshColor )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *fRed,
            /* [out] */ VARIANT *fGreen,
            /* [out] */ VARIANT *fBlue);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshQuality)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshQuality )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int nQuality);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshQuality)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshQuality )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ int *nQuality);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshPerspective)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshPerspective )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ VARIANT_BOOL vbPersp);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshPerspective)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshPerspective )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ VARIANT_BOOL *vbPersp);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshMaterial)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshMaterial )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ float fDiffuse,
            /* [in] */ float fSpecular,
            /* [in] */ float fPower);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshMaterial)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshMaterial )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *fDiffuse,
            /* [out] */ VARIANT *fSpecular,
            /* [out] */ VARIANT *fPower);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshFaceVertex)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshFaceVertex )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshFaceVertex)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshFaceVertex )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [out] */ VARIANT *fX,
            /* [out] */ VARIANT *fY,
            /* [out] */ VARIANT *fZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, AddMeshFaceVertex)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddMeshFaceVertex )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshFaceVertexColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshFaceVertexColor )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [in] */ float fRed,
            /* [in] */ float fGreen,
            /* [in] */ float fBlue);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshFaceVertexColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshFaceVertexColor )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [out] */ VARIANT *fRed,
            /* [out] */ VARIANT *fGreen,
            /* [out] */ VARIANT *fBlue);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshFaceUV)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshFaceUV )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [in] */ float fU,
            /* [in] */ float fV);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshFaceUV)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshFaceUV )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int nFaceIndex,
            /* [in] */ int index,
            /* [out] */ VARIANT *fU,
            /* [out] */ VARIANT *fV);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshFaceColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshFaceColor )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int index,
            /* [in] */ float fRed,
            /* [in] */ float fGreen,
            /* [in] */ float fBlue);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshFaceColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshFaceColor )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int index,
            /* [out] */ VARIANT *fRed,
            /* [out] */ VARIANT *fGreen,
            /* [out] */ VARIANT *fBlue);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshCount)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshCount )( 
            IVWFrame * This,
            /* [retval][out] */ VARIANT *pvarCount);
        
        DECLSPEC_XFGVIRT(IVWFrame, WrapMesh)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WrapMesh )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ int type,
            /* [in] */ float scaleu,
            /* [in] */ float scalev);
        
        DECLSPEC_XFGVIRT(IVWFrame, CreateMesh)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMesh )( 
            IVWFrame * This);
        
        DECLSPEC_XFGVIRT(IVWFrame, CreateUnitMesh)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateUnitMesh )( 
            IVWFrame * This);
        
        DECLSPEC_XFGVIRT(IVWFrame, CreateMeshFace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMeshFace )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ VARIANT varArgs);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshFaceCount)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshFaceCount )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ VARIANT *varFaceCount);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshTextureFromURL)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshTextureFromURL )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ BSTR bstrTexture);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetMeshTextureFromText)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMeshTextureFromText )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ BSTR bstrText,
            /* [in] */ VARIANT_BOOL bShadowed,
            /* [in] */ DWORD nWidth,
            /* [in] */ DWORD nHeight,
            /* [in] */ DWORD nPointHeight);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshTextureName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshTextureName )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [retval][out] */ BSTR *bstrTexture);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetMeshFaceVertexCount)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMeshFaceVertexCount )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ long nFaceIndex,
            /* [retval][out] */ long *nCount);
        
        DECLSPEC_XFGVIRT(IVWFrame, CreateDecalFromURL)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDecalFromURL )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrTexture);
        
        DECLSPEC_XFGVIRT(IVWFrame, CreateDecalFromText)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDecalFromText )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrText,
            /* [optional][in] */ VARIANT bstrName);
        
        DECLSPEC_XFGVIRT(IVWFrame, CreateDecalFromTextExt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDecalFromTextExt )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrText,
            /* [in] */ long lPlacement,
            /* [in] */ BSTR bstrFontName,
            /* [in] */ long lFontSize,
            /* [in] */ long lLabelStyle,
            /* [in] */ IVector *pvFontColor,
            /* [in] */ IVector *pvShadowColor,
            /* [in] */ VARIANT bstrName);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetDecalSize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDecalSize )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ float fHeight,
            /* [in] */ float fWidth,
            /* [in] */ VARIANT_BOOL bScale);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetDecalOrigin)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDecalOrigin )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [in] */ long lx,
            /* [in] */ long ly);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetDecalSize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDecalSize )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *fHeight,
            /* [out] */ VARIANT *fWidth,
            /* [out] */ VARIANT *bScale);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetDecalOrigin)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDecalOrigin )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex,
            /* [out] */ VARIANT *lx,
            /* [out] */ VARIANT *ly);
        
        DECLSPEC_XFGVIRT(IVWFrame, DeleteDecal)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteDecal )( 
            IVWFrame * This,
            /* [in] */ long nMeshIndex);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetDecalCount)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDecalCount )( 
            IVWFrame * This,
            /* [retval][out] */ long *nCount);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetDecalIndexByName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDecalIndexByName )( 
            IVWFrame * This,
            /* [in] */ BSTR bstrDecalName,
            /* [retval][out] */ long *plIndex);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetSceneFogColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSceneFogColor )( 
            IVWFrame * This,
            /* [in] */ float red,
            /* [in] */ float green,
            /* [in] */ float blue);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetSceneFogEnable)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSceneFogEnable )( 
            IVWFrame * This,
            /* [in] */ VARIANT_BOOL fogEnable);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetSceneFogParams)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSceneFogParams )( 
            IVWFrame * This,
            /* [in] */ float start,
            /* [in] */ float end);
        
        DECLSPEC_XFGVIRT(IVWFrame, CreateShadow)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateShadow )( 
            IVWFrame * This,
            /* [in] */ int nMeshIndex,
            /* [in] */ IVWFrame *pvwfLightSrc,
            /* [in] */ int nIndex,
            /* [in] */ float ylevel);
        
        DECLSPEC_XFGVIRT(IVWFrame, DeleteShadow)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteShadow )( 
            IVWFrame * This,
            /* [in] */ int nMeshIndex,
            /* [in] */ IVWFrame *pvwfLightSrc,
            /* [in] */ int nIndex);
        
        DECLSPEC_XFGVIRT(IVWFrame, PlayVideo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PlayVideo )( 
            IVWFrame * This,
            /* [in] */ int nMeshIndex,
            /* [in] */ BSTR sfilename);
        
        DECLSPEC_XFGVIRT(IVWFrame, Explode)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Explode )( 
            IVWFrame * This,
            DWORD dwTime);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetInternalScale)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetInternalScale )( 
            IVWFrame * This,
            /* [in] */ float fScaleX,
            /* [in] */ float fScaleY,
            /* [in] */ float fScaleZ);
        
        DECLSPEC_XFGVIRT(IVWFrame, StartAnimation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartAnimation )( 
            IVWFrame * This,
            /* [in] */ float fTimeScale,
            /* [in] */ float fRangeStart,
            /* [in] */ float fRangeEnd,
            /* [in] */ BSTR bstrAnimationDoneMethod);
        
        DECLSPEC_XFGVIRT(IVWFrame, StopAnimation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StopAnimation )( 
            IVWFrame * This);
        
        DECLSPEC_XFGVIRT(IVWFrame, AnimationSetTime)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AnimationSetTime )( 
            IVWFrame * This,
            /* [in] */ float fTime);
        
        DECLSPEC_XFGVIRT(IVWFrame, get_AnimationSet)
        /* [helpstring][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AnimationSet )( 
            IVWFrame * This,
            /* [retval][out] */ LPDIRECT3DRMANIMATIONSET2 *ppd3drmanimset);
        
        DECLSPEC_XFGVIRT(IVWFrame, put_AnimationSet)
        /* [helpstring][restricted][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AnimationSet )( 
            IVWFrame * This,
            /* [in] */ LPDIRECT3DRMANIMATIONSET2 ppd3drmanimset);
        
        DECLSPEC_XFGVIRT(IVWFrame, get_Frame3D)
        /* [helpstring][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frame3D )( 
            IVWFrame * This,
            /* [retval][out] */ LPDIRECT3DRMFRAME *ppd3drmf);
        
        DECLSPEC_XFGVIRT(IVWFrame, put_Frame3D)
        /* [helpstring][restricted][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frame3D )( 
            IVWFrame * This,
            /* [in] */ LPDIRECT3DRMFRAME pd3drmf);
        
        DECLSPEC_XFGVIRT(IVWFrame, get_Frame2D)
        /* [helpstring][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frame2D )( 
            IVWFrame * This,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppd2drmf);
        
        DECLSPEC_XFGVIRT(IVWFrame, put_Frame2D)
        /* [helpstring][restricted][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frame2D )( 
            IVWFrame * This,
            /* [in] */ LPDIRECT2DRMFRAME pd2drmf);
        
        DECLSPEC_XFGVIRT(IVWFrame, get_Thing)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Thing )( 
            IVWFrame * This,
            /* [retval][out] */ IThing **ppThing);
        
        DECLSPEC_XFGVIRT(IVWFrame, put_Thing)
        /* [helpstring][restricted][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Thing )( 
            IVWFrame * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IVWFrame, get_BoundaryList)
        /* [helpstring][restricted][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoundaryList )( 
            IVWFrame * This,
            /* [retval][out] */ IPropertyList **ppBoundaryList);
        
        DECLSPEC_XFGVIRT(IVWFrame, put_BoundaryList)
        /* [helpstring][restricted][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoundaryList )( 
            IVWFrame * This,
            /* [in] */ IPropertyList *pBoundaryList);
        
        DECLSPEC_XFGVIRT(IVWFrame, SetAppString)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SetAppString )( 
            IVWFrame * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IVWFrame, GetAppString)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetAppString )( 
            IVWFrame * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IVWFrame, put_GeometryCache)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_GeometryCache )( 
            IVWFrame * This,
            /* [in] */ IVWGeometryCache *pVWGeometryCache);
        
        DECLSPEC_XFGVIRT(IVWFrame, put_GeometryObject)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_GeometryObject )( 
            IVWFrame * This,
            /* [in] */ IVWGeometry *pVWGeometry);
        
        DECLSPEC_XFGVIRT(IVWFrame, get_GeometryObject)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_GeometryObject )( 
            IVWFrame * This,
            /* [retval][out] */ IVWGeometry **ppVWGeometry);
        
        END_INTERFACE
    } IVWFrameVtbl;

    interface IVWFrame
    {
        CONST_VTBL struct IVWFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWFrame_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWFrame_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWFrame_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWFrame_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWFrame_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWFrame_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IVWFrame_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IVWFrame_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IVWFrame_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IVWFrame_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IVWFrame_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IVWFrame_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IVWFrame_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IVWFrame_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IVWFrame_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IVWFrame_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IVWFrame_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IVWFrame_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IVWFrame_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IVWFrame_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IVWFrame_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IVWFrame_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IVWFrame_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IVWFrame_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IVWFrame_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 



#define IVWFrame_GetFrameByName(This,bstrName,ppvwfDst)	\
    ( (This)->lpVtbl -> GetFrameByName(This,bstrName,ppvwfDst) ) 

#define IVWFrame_SetName(This,bstrName)	\
    ( (This)->lpVtbl -> SetName(This,bstrName) ) 

#define IVWFrame_GetName(This,bstrName)	\
    ( (This)->lpVtbl -> GetName(This,bstrName) ) 

#define IVWFrame_AddChild(This,pvwfChild)	\
    ( (This)->lpVtbl -> AddChild(This,pvwfChild) ) 

#define IVWFrame_DeleteChild(This,pvwfChild)	\
    ( (This)->lpVtbl -> DeleteChild(This,pvwfChild) ) 

#define IVWFrame_IsChildOf(This,pvwf,pbIsChild)	\
    ( (This)->lpVtbl -> IsChildOf(This,pvwf,pbIsChild) ) 

#define IVWFrame_GetParent(This,ppvwfParent)	\
    ( (This)->lpVtbl -> GetParent(This,ppvwfParent) ) 

#define IVWFrame_GetChildren(This,ppChildren)	\
    ( (This)->lpVtbl -> GetChildren(This,ppChildren) ) 

#define IVWFrame_GetVWFChildren(This,ppChildren)	\
    ( (This)->lpVtbl -> GetVWFChildren(This,ppChildren) ) 

#define IVWFrame_GetScene(This,ppvwfScene)	\
    ( (This)->lpVtbl -> GetScene(This,ppvwfScene) ) 

#define IVWFrame_Copy(This,ppvwfDst)	\
    ( (This)->lpVtbl -> Copy(This,ppvwfDst) ) 

#define IVWFrame_Transform(This,nRotationAxis,pfDstX,pfDstY,pfDstZ,fSrcX,fSrcY,fSrcZ)	\
    ( (This)->lpVtbl -> Transform(This,nRotationAxis,pfDstX,pfDstY,pfDstZ,fSrcX,fSrcY,fSrcZ) ) 

#define IVWFrame_InverseTransform(This,nRotationAxis,pfDstX,pfDstY,pfDstZ,fSrcX,fSrcY,fSrcZ)	\
    ( (This)->lpVtbl -> InverseTransform(This,nRotationAxis,pfDstX,pfDstY,pfDstZ,fSrcX,fSrcY,fSrcZ) ) 

#define IVWFrame_SetPositionEx(This,pvwfRef,fPosX,fPosY,fPosZ)	\
    ( (This)->lpVtbl -> SetPositionEx(This,pvwfRef,fPosX,fPosY,fPosZ) ) 

#define IVWFrame_SetPosition(This,pvwfRef,fPosX,fPosY,fPosZ)	\
    ( (This)->lpVtbl -> SetPosition(This,pvwfRef,fPosX,fPosY,fPosZ) ) 

#define IVWFrame_GetPositionEx(This,pvwfRef,pfPosX,pfPosY,pfPosZ)	\
    ( (This)->lpVtbl -> GetPositionEx(This,pvwfRef,pfPosX,pfPosY,pfPosZ) ) 

#define IVWFrame_GetPosition(This,pvwfRef,pfPosX,pfPosY,pfPosZ)	\
    ( (This)->lpVtbl -> GetPosition(This,pvwfRef,pfPosX,pfPosY,pfPosZ) ) 

#define IVWFrame_SetOrientationEx(This,pvwfRef,fDirX,fDirY,fDirZ,fUpX,fUpY,fUpZ)	\
    ( (This)->lpVtbl -> SetOrientationEx(This,pvwfRef,fDirX,fDirY,fDirZ,fUpX,fUpY,fUpZ) ) 

#define IVWFrame_SetOrientation(This,pvwfRef,fDirX,fDirY,fDirZ,fUpX,fUpY,fUpZ)	\
    ( (This)->lpVtbl -> SetOrientation(This,pvwfRef,fDirX,fDirY,fDirZ,fUpX,fUpY,fUpZ) ) 

#define IVWFrame_GetOrientationEx(This,pvwfRef,pfDirX,pfDirY,pfDirZ,pfUpX,pfUpY,pfUpZ)	\
    ( (This)->lpVtbl -> GetOrientationEx(This,pvwfRef,pfDirX,pfDirY,pfDirZ,pfUpX,pfUpY,pfUpZ) ) 

#define IVWFrame_GetOrientation(This,pvwfRef,pfDirX,pfDirY,pfDirZ,pfUpX,pfUpY,pfUpZ)	\
    ( (This)->lpVtbl -> GetOrientation(This,pvwfRef,pfDirX,pfDirY,pfDirZ,pfUpX,pfUpY,pfUpZ) ) 

#define IVWFrame_SetRotationRate(This,pvwfRef,rvX,rvY,rvZ,rvTheta)	\
    ( (This)->lpVtbl -> SetRotationRate(This,pvwfRef,rvX,rvY,rvZ,rvTheta) ) 

#define IVWFrame_GetRotationRate(This,pvwfRef,prvX,prvY,prvZ,prvTheta)	\
    ( (This)->lpVtbl -> GetRotationRate(This,pvwfRef,prvX,prvY,prvZ,prvTheta) ) 

#define IVWFrame_GetRotationRateEx(This,pvwfRef,prvX,prvY,prvZ,prvTheta)	\
    ( (This)->lpVtbl -> GetRotationRateEx(This,pvwfRef,prvX,prvY,prvZ,prvTheta) ) 

#define IVWFrame_SetVelocity(This,pvwfRef,vX,vY,vZ)	\
    ( (This)->lpVtbl -> SetVelocity(This,pvwfRef,vX,vY,vZ) ) 

#define IVWFrame_GetVelocityEx(This,pvwfRef,pvX,pvY,pvZ)	\
    ( (This)->lpVtbl -> GetVelocityEx(This,pvwfRef,pvX,pvY,pvZ) ) 

#define IVWFrame_GetVelocity(This,pvwfRef,pvX,pvY,pvZ)	\
    ( (This)->lpVtbl -> GetVelocity(This,pvwfRef,pvX,pvY,pvZ) ) 

#define IVWFrame_SetScaleEx(This,pvwfRef,fScaleX,fScaleY,fScaleZ)	\
    ( (This)->lpVtbl -> SetScaleEx(This,pvwfRef,fScaleX,fScaleY,fScaleZ) ) 

#define IVWFrame_SetScale(This,pvwfRef,fScaleX,fScaleY,fScaleZ)	\
    ( (This)->lpVtbl -> SetScale(This,pvwfRef,fScaleX,fScaleY,fScaleZ) ) 

#define IVWFrame_GetScaleEx(This,pvwfRef,pfScaleX,pfScaleY,pfScaleZ)	\
    ( (This)->lpVtbl -> GetScaleEx(This,pvwfRef,pfScaleX,pfScaleY,pfScaleZ) ) 

#define IVWFrame_GetScale(This,pvwfRef,pfScaleX,pfScaleY,pfScaleZ)	\
    ( (This)->lpVtbl -> GetScale(This,pvwfRef,pfScaleX,pfScaleY,pfScaleZ) ) 

#define IVWFrame_MoveToPosition(This,pvwfRef,fPosX,fPosY,fPosZ,bFireEvents,ppIDataList)	\
    ( (This)->lpVtbl -> MoveToPosition(This,pvwfRef,fPosX,fPosY,fPosZ,bFireEvents,ppIDataList) ) 

#define IVWFrame_FindIntersections(This,fStartPosX,fStartPosY,fStartPosZ,fEndPosX,fEndPosY,fEndPosZ,ppIDataList)	\
    ( (This)->lpVtbl -> FindIntersections(This,fStartPosX,fStartPosY,fStartPosZ,fEndPosX,fEndPosY,fEndPosZ,ppIDataList) ) 

#define IVWFrame_GetFloorHeight(This,pvwfRef,pfFloorHeight)	\
    ( (This)->lpVtbl -> GetFloorHeight(This,pvwfRef,pfFloorHeight) ) 

#define IVWFrame_GetCeilingHeight(This,pvwfRef,pfCeilingHeight)	\
    ( (This)->lpVtbl -> GetCeilingHeight(This,pvwfRef,pfCeilingHeight) ) 

#define IVWFrame_GetFloorHeightAtPosition(This,fX,fY,fZ,pfFloorHeight)	\
    ( (This)->lpVtbl -> GetFloorHeightAtPosition(This,fX,fY,fZ,pfFloorHeight) ) 

#define IVWFrame_GetCeilingHeightAtPosition(This,fX,fY,fZ,pfCeilingHeight)	\
    ( (This)->lpVtbl -> GetCeilingHeightAtPosition(This,fX,fY,fZ,pfCeilingHeight) ) 

#define IVWFrame_GetBoundingBox(This,fminX,fminY,fminZ,fmaxX,fmaxY,fmaxZ)	\
    ( (This)->lpVtbl -> GetBoundingBox(This,fminX,fminY,fminZ,fmaxX,fmaxY,fmaxZ) ) 

#define IVWFrame_LookAt(This,fPosX,fPosY,fPosZ)	\
    ( (This)->lpVtbl -> LookAt(This,fPosX,fPosY,fPosZ) ) 

#define IVWFrame_CreateLight(This,bstrName)	\
    ( (This)->lpVtbl -> CreateLight(This,bstrName) ) 

#define IVWFrame_DeleteLight(This,nIndex)	\
    ( (This)->lpVtbl -> DeleteLight(This,nIndex) ) 

#define IVWFrame_SetLightColor(This,nIndex,fRed,fGreen,fBlue)	\
    ( (This)->lpVtbl -> SetLightColor(This,nIndex,fRed,fGreen,fBlue) ) 

#define IVWFrame_SetLightAttenuation(This,nIndex,fConst,fLinear,fQuadratic)	\
    ( (This)->lpVtbl -> SetLightAttenuation(This,nIndex,fConst,fLinear,fQuadratic) ) 

#define IVWFrame_SetLightType(This,nIndex,iType)	\
    ( (This)->lpVtbl -> SetLightType(This,nIndex,iType) ) 

#define IVWFrame_SetLightRange(This,nIndex,fRange)	\
    ( (This)->lpVtbl -> SetLightRange(This,nIndex,fRange) ) 

#define IVWFrame_SetSpotLightRadii(This,nIndex,fUmbra,fPenUmbra)	\
    ( (This)->lpVtbl -> SetSpotLightRadii(This,nIndex,fUmbra,fPenUmbra) ) 

#define IVWFrame_SetLightName(This,nIndex,bstrName)	\
    ( (This)->lpVtbl -> SetLightName(This,nIndex,bstrName) ) 

#define IVWFrame_GetLightName(This,nIndex,bstrName)	\
    ( (This)->lpVtbl -> GetLightName(This,nIndex,bstrName) ) 

#define IVWFrame_GetLightColor(This,nIndex,fRed,fGreen,fBlue)	\
    ( (This)->lpVtbl -> GetLightColor(This,nIndex,fRed,fGreen,fBlue) ) 

#define IVWFrame_GetLightAttenuation(This,nIndex,fConst,fLinear,fQuadratic)	\
    ( (This)->lpVtbl -> GetLightAttenuation(This,nIndex,fConst,fLinear,fQuadratic) ) 

#define IVWFrame_GetLightType(This,nIndex,iType)	\
    ( (This)->lpVtbl -> GetLightType(This,nIndex,iType) ) 

#define IVWFrame_GetLightRange(This,nIndex,fRange)	\
    ( (This)->lpVtbl -> GetLightRange(This,nIndex,fRange) ) 

#define IVWFrame_GetSpotLightRadii(This,nIndex,fUmbra,fPenUmbra)	\
    ( (This)->lpVtbl -> GetSpotLightRadii(This,nIndex,fUmbra,fPenUmbra) ) 

#define IVWFrame_GetLightIndexByName(This,bstrName,nIndex)	\
    ( (This)->lpVtbl -> GetLightIndexByName(This,bstrName,nIndex) ) 

#define IVWFrame_GetLightCount(This,nCount)	\
    ( (This)->lpVtbl -> GetLightCount(This,nCount) ) 

#define IVWFrame_GetVisualCount(This,pvarCount)	\
    ( (This)->lpVtbl -> GetVisualCount(This,pvarCount) ) 

#define IVWFrame_GetVisualCountByIID(This,ref,pvarCount)	\
    ( (This)->lpVtbl -> GetVisualCountByIID(This,ref,pvarCount) ) 

#define IVWFrame_GetVisualIndexByName(This,bstrName,nIndex)	\
    ( (This)->lpVtbl -> GetVisualIndexByName(This,bstrName,nIndex) ) 

#define IVWFrame_SetProgressiveMeshDetail(This,nMeshIndex,detail)	\
    ( (This)->lpVtbl -> SetProgressiveMeshDetail(This,nMeshIndex,detail) ) 

#define IVWFrame_GetProgressiveMeshDetail(This,nMeshIndex,detail)	\
    ( (This)->lpVtbl -> GetProgressiveMeshDetail(This,nMeshIndex,detail) ) 

#define IVWFrame_SetProgressiveMeshFaceDetail(This,nMeshIndex,detail)	\
    ( (This)->lpVtbl -> SetProgressiveMeshFaceDetail(This,nMeshIndex,detail) ) 

#define IVWFrame_GetProgressiveMeshFaceDetail(This,nMeshIndex,detail)	\
    ( (This)->lpVtbl -> GetProgressiveMeshFaceDetail(This,nMeshIndex,detail) ) 

#define IVWFrame_SetProgressiveMeshVertexDetail(This,nMeshIndex,detail)	\
    ( (This)->lpVtbl -> SetProgressiveMeshVertexDetail(This,nMeshIndex,detail) ) 

#define IVWFrame_GetProgressiveMeshVertexDetail(This,nMeshIndex,detail)	\
    ( (This)->lpVtbl -> GetProgressiveMeshVertexDetail(This,nMeshIndex,detail) ) 

#define IVWFrame_GetProgressiveMeshFaceDetailRange(This,nMeshIndex,min,max)	\
    ( (This)->lpVtbl -> GetProgressiveMeshFaceDetailRange(This,nMeshIndex,min,max) ) 

#define IVWFrame_GetProgressiveMeshVertexDetailRange(This,nMeshIndex,min,max)	\
    ( (This)->lpVtbl -> GetProgressiveMeshVertexDetailRange(This,nMeshIndex,min,max) ) 

#define IVWFrame_SetProgressiveMeshQuality(This,nMeshIndex,nQuality)	\
    ( (This)->lpVtbl -> SetProgressiveMeshQuality(This,nMeshIndex,nQuality) ) 

#define IVWFrame_GetProgressiveMeshQuality(This,nMeshIndex,nQuality)	\
    ( (This)->lpVtbl -> GetProgressiveMeshQuality(This,nMeshIndex,nQuality) ) 

#define IVWFrame_GetProgressiveMeshCount(This,pvarCount)	\
    ( (This)->lpVtbl -> GetProgressiveMeshCount(This,pvarCount) ) 

#define IVWFrame_GetProgressiveMeshIndexByName(This,bstrMeshName,plIndex)	\
    ( (This)->lpVtbl -> GetProgressiveMeshIndexByName(This,bstrMeshName,plIndex) ) 

#define IVWFrame_GetMeshName(This,nMeshIndex,pbstrMeshName)	\
    ( (This)->lpVtbl -> GetMeshName(This,nMeshIndex,pbstrMeshName) ) 

#define IVWFrame_SetMeshName(This,nMeshIndex,bstrMeshName)	\
    ( (This)->lpVtbl -> SetMeshName(This,nMeshIndex,bstrMeshName) ) 

#define IVWFrame_GetMeshIndexByName(This,bstrMeshName,plIndex)	\
    ( (This)->lpVtbl -> GetMeshIndexByName(This,bstrMeshName,plIndex) ) 

#define IVWFrame_SetMeshColor(This,nMeshIndex,fRed,fGreen,fBlue)	\
    ( (This)->lpVtbl -> SetMeshColor(This,nMeshIndex,fRed,fGreen,fBlue) ) 

#define IVWFrame_GetMeshColor(This,nMeshIndex,fRed,fGreen,fBlue)	\
    ( (This)->lpVtbl -> GetMeshColor(This,nMeshIndex,fRed,fGreen,fBlue) ) 

#define IVWFrame_SetMeshQuality(This,nMeshIndex,nQuality)	\
    ( (This)->lpVtbl -> SetMeshQuality(This,nMeshIndex,nQuality) ) 

#define IVWFrame_GetMeshQuality(This,nMeshIndex,nQuality)	\
    ( (This)->lpVtbl -> GetMeshQuality(This,nMeshIndex,nQuality) ) 

#define IVWFrame_SetMeshPerspective(This,nMeshIndex,vbPersp)	\
    ( (This)->lpVtbl -> SetMeshPerspective(This,nMeshIndex,vbPersp) ) 

#define IVWFrame_GetMeshPerspective(This,nMeshIndex,vbPersp)	\
    ( (This)->lpVtbl -> GetMeshPerspective(This,nMeshIndex,vbPersp) ) 

#define IVWFrame_SetMeshMaterial(This,nMeshIndex,fDiffuse,fSpecular,fPower)	\
    ( (This)->lpVtbl -> SetMeshMaterial(This,nMeshIndex,fDiffuse,fSpecular,fPower) ) 

#define IVWFrame_GetMeshMaterial(This,nMeshIndex,fDiffuse,fSpecular,fPower)	\
    ( (This)->lpVtbl -> GetMeshMaterial(This,nMeshIndex,fDiffuse,fSpecular,fPower) ) 

#define IVWFrame_SetMeshFaceVertex(This,nMeshIndex,nFaceIndex,index,fX,fY,fZ)	\
    ( (This)->lpVtbl -> SetMeshFaceVertex(This,nMeshIndex,nFaceIndex,index,fX,fY,fZ) ) 

#define IVWFrame_GetMeshFaceVertex(This,nMeshIndex,nFaceIndex,index,fX,fY,fZ)	\
    ( (This)->lpVtbl -> GetMeshFaceVertex(This,nMeshIndex,nFaceIndex,index,fX,fY,fZ) ) 

#define IVWFrame_AddMeshFaceVertex(This,nMeshIndex,nFaceIndex,fX,fY,fZ)	\
    ( (This)->lpVtbl -> AddMeshFaceVertex(This,nMeshIndex,nFaceIndex,fX,fY,fZ) ) 

#define IVWFrame_SetMeshFaceVertexColor(This,nMeshIndex,nFaceIndex,index,fRed,fGreen,fBlue)	\
    ( (This)->lpVtbl -> SetMeshFaceVertexColor(This,nMeshIndex,nFaceIndex,index,fRed,fGreen,fBlue) ) 

#define IVWFrame_GetMeshFaceVertexColor(This,nMeshIndex,nFaceIndex,index,fRed,fGreen,fBlue)	\
    ( (This)->lpVtbl -> GetMeshFaceVertexColor(This,nMeshIndex,nFaceIndex,index,fRed,fGreen,fBlue) ) 

#define IVWFrame_SetMeshFaceUV(This,nMeshIndex,nFaceIndex,index,fU,fV)	\
    ( (This)->lpVtbl -> SetMeshFaceUV(This,nMeshIndex,nFaceIndex,index,fU,fV) ) 

#define IVWFrame_GetMeshFaceUV(This,nMeshIndex,nFaceIndex,index,fU,fV)	\
    ( (This)->lpVtbl -> GetMeshFaceUV(This,nMeshIndex,nFaceIndex,index,fU,fV) ) 

#define IVWFrame_SetMeshFaceColor(This,nMeshIndex,index,fRed,fGreen,fBlue)	\
    ( (This)->lpVtbl -> SetMeshFaceColor(This,nMeshIndex,index,fRed,fGreen,fBlue) ) 

#define IVWFrame_GetMeshFaceColor(This,nMeshIndex,index,fRed,fGreen,fBlue)	\
    ( (This)->lpVtbl -> GetMeshFaceColor(This,nMeshIndex,index,fRed,fGreen,fBlue) ) 

#define IVWFrame_GetMeshCount(This,pvarCount)	\
    ( (This)->lpVtbl -> GetMeshCount(This,pvarCount) ) 

#define IVWFrame_WrapMesh(This,nMeshIndex,type,scaleu,scalev)	\
    ( (This)->lpVtbl -> WrapMesh(This,nMeshIndex,type,scaleu,scalev) ) 

#define IVWFrame_CreateMesh(This)	\
    ( (This)->lpVtbl -> CreateMesh(This) ) 

#define IVWFrame_CreateUnitMesh(This)	\
    ( (This)->lpVtbl -> CreateUnitMesh(This) ) 

#define IVWFrame_CreateMeshFace(This,nMeshIndex,varArgs)	\
    ( (This)->lpVtbl -> CreateMeshFace(This,nMeshIndex,varArgs) ) 

#define IVWFrame_GetMeshFaceCount(This,nMeshIndex,varFaceCount)	\
    ( (This)->lpVtbl -> GetMeshFaceCount(This,nMeshIndex,varFaceCount) ) 

#define IVWFrame_SetMeshTextureFromURL(This,nMeshIndex,bstrTexture)	\
    ( (This)->lpVtbl -> SetMeshTextureFromURL(This,nMeshIndex,bstrTexture) ) 

#define IVWFrame_SetMeshTextureFromText(This,nMeshIndex,bstrText,bShadowed,nWidth,nHeight,nPointHeight)	\
    ( (This)->lpVtbl -> SetMeshTextureFromText(This,nMeshIndex,bstrText,bShadowed,nWidth,nHeight,nPointHeight) ) 

#define IVWFrame_GetMeshTextureName(This,nMeshIndex,bstrTexture)	\
    ( (This)->lpVtbl -> GetMeshTextureName(This,nMeshIndex,bstrTexture) ) 

#define IVWFrame_GetMeshFaceVertexCount(This,nMeshIndex,nFaceIndex,nCount)	\
    ( (This)->lpVtbl -> GetMeshFaceVertexCount(This,nMeshIndex,nFaceIndex,nCount) ) 

#define IVWFrame_CreateDecalFromURL(This,bstrTexture)	\
    ( (This)->lpVtbl -> CreateDecalFromURL(This,bstrTexture) ) 

#define IVWFrame_CreateDecalFromText(This,bstrText,bstrName)	\
    ( (This)->lpVtbl -> CreateDecalFromText(This,bstrText,bstrName) ) 

#define IVWFrame_CreateDecalFromTextExt(This,bstrText,lPlacement,bstrFontName,lFontSize,lLabelStyle,pvFontColor,pvShadowColor,bstrName)	\
    ( (This)->lpVtbl -> CreateDecalFromTextExt(This,bstrText,lPlacement,bstrFontName,lFontSize,lLabelStyle,pvFontColor,pvShadowColor,bstrName) ) 

#define IVWFrame_SetDecalSize(This,nMeshIndex,fHeight,fWidth,bScale)	\
    ( (This)->lpVtbl -> SetDecalSize(This,nMeshIndex,fHeight,fWidth,bScale) ) 

#define IVWFrame_SetDecalOrigin(This,nMeshIndex,lx,ly)	\
    ( (This)->lpVtbl -> SetDecalOrigin(This,nMeshIndex,lx,ly) ) 

#define IVWFrame_GetDecalSize(This,nMeshIndex,fHeight,fWidth,bScale)	\
    ( (This)->lpVtbl -> GetDecalSize(This,nMeshIndex,fHeight,fWidth,bScale) ) 

#define IVWFrame_GetDecalOrigin(This,nMeshIndex,lx,ly)	\
    ( (This)->lpVtbl -> GetDecalOrigin(This,nMeshIndex,lx,ly) ) 

#define IVWFrame_DeleteDecal(This,nMeshIndex)	\
    ( (This)->lpVtbl -> DeleteDecal(This,nMeshIndex) ) 

#define IVWFrame_GetDecalCount(This,nCount)	\
    ( (This)->lpVtbl -> GetDecalCount(This,nCount) ) 

#define IVWFrame_GetDecalIndexByName(This,bstrDecalName,plIndex)	\
    ( (This)->lpVtbl -> GetDecalIndexByName(This,bstrDecalName,plIndex) ) 

#define IVWFrame_SetSceneFogColor(This,red,green,blue)	\
    ( (This)->lpVtbl -> SetSceneFogColor(This,red,green,blue) ) 

#define IVWFrame_SetSceneFogEnable(This,fogEnable)	\
    ( (This)->lpVtbl -> SetSceneFogEnable(This,fogEnable) ) 

#define IVWFrame_SetSceneFogParams(This,start,end)	\
    ( (This)->lpVtbl -> SetSceneFogParams(This,start,end) ) 

#define IVWFrame_CreateShadow(This,nMeshIndex,pvwfLightSrc,nIndex,ylevel)	\
    ( (This)->lpVtbl -> CreateShadow(This,nMeshIndex,pvwfLightSrc,nIndex,ylevel) ) 

#define IVWFrame_DeleteShadow(This,nMeshIndex,pvwfLightSrc,nIndex)	\
    ( (This)->lpVtbl -> DeleteShadow(This,nMeshIndex,pvwfLightSrc,nIndex) ) 

#define IVWFrame_PlayVideo(This,nMeshIndex,sfilename)	\
    ( (This)->lpVtbl -> PlayVideo(This,nMeshIndex,sfilename) ) 

#define IVWFrame_Explode(This,dwTime)	\
    ( (This)->lpVtbl -> Explode(This,dwTime) ) 

#define IVWFrame_SetInternalScale(This,fScaleX,fScaleY,fScaleZ)	\
    ( (This)->lpVtbl -> SetInternalScale(This,fScaleX,fScaleY,fScaleZ) ) 

#define IVWFrame_StartAnimation(This,fTimeScale,fRangeStart,fRangeEnd,bstrAnimationDoneMethod)	\
    ( (This)->lpVtbl -> StartAnimation(This,fTimeScale,fRangeStart,fRangeEnd,bstrAnimationDoneMethod) ) 

#define IVWFrame_StopAnimation(This)	\
    ( (This)->lpVtbl -> StopAnimation(This) ) 

#define IVWFrame_AnimationSetTime(This,fTime)	\
    ( (This)->lpVtbl -> AnimationSetTime(This,fTime) ) 

#define IVWFrame_get_AnimationSet(This,ppd3drmanimset)	\
    ( (This)->lpVtbl -> get_AnimationSet(This,ppd3drmanimset) ) 

#define IVWFrame_put_AnimationSet(This,ppd3drmanimset)	\
    ( (This)->lpVtbl -> put_AnimationSet(This,ppd3drmanimset) ) 

#define IVWFrame_get_Frame3D(This,ppd3drmf)	\
    ( (This)->lpVtbl -> get_Frame3D(This,ppd3drmf) ) 

#define IVWFrame_put_Frame3D(This,pd3drmf)	\
    ( (This)->lpVtbl -> put_Frame3D(This,pd3drmf) ) 

#define IVWFrame_get_Frame2D(This,ppd2drmf)	\
    ( (This)->lpVtbl -> get_Frame2D(This,ppd2drmf) ) 

#define IVWFrame_put_Frame2D(This,pd2drmf)	\
    ( (This)->lpVtbl -> put_Frame2D(This,pd2drmf) ) 

#define IVWFrame_get_Thing(This,ppThing)	\
    ( (This)->lpVtbl -> get_Thing(This,ppThing) ) 

#define IVWFrame_put_Thing(This,pThing)	\
    ( (This)->lpVtbl -> put_Thing(This,pThing) ) 

#define IVWFrame_get_BoundaryList(This,ppBoundaryList)	\
    ( (This)->lpVtbl -> get_BoundaryList(This,ppBoundaryList) ) 

#define IVWFrame_put_BoundaryList(This,pBoundaryList)	\
    ( (This)->lpVtbl -> put_BoundaryList(This,pBoundaryList) ) 

#define IVWFrame_SetAppString(This,bstr)	\
    ( (This)->lpVtbl -> SetAppString(This,bstr) ) 

#define IVWFrame_GetAppString(This,pbstr)	\
    ( (This)->lpVtbl -> GetAppString(This,pbstr) ) 

#define IVWFrame_put_GeometryCache(This,pVWGeometryCache)	\
    ( (This)->lpVtbl -> put_GeometryCache(This,pVWGeometryCache) ) 

#define IVWFrame_put_GeometryObject(This,pVWGeometry)	\
    ( (This)->lpVtbl -> put_GeometryObject(This,pVWGeometry) ) 

#define IVWFrame_get_GeometryObject(This,ppVWGeometry)	\
    ( (This)->lpVtbl -> get_GeometryObject(This,ppVWGeometry) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_CreateDecalFromURL_Proxy( 
    IVWFrame * This,
    /* [in] */ BSTR bstrTexture);


void __RPC_STUB IVWFrame_CreateDecalFromURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_CreateDecalFromText_Proxy( 
    IVWFrame * This,
    /* [in] */ BSTR bstrText,
    /* [optional][in] */ VARIANT bstrName);


void __RPC_STUB IVWFrame_CreateDecalFromText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_CreateDecalFromTextExt_Proxy( 
    IVWFrame * This,
    /* [in] */ BSTR bstrText,
    /* [in] */ long lPlacement,
    /* [in] */ BSTR bstrFontName,
    /* [in] */ long lFontSize,
    /* [in] */ long lLabelStyle,
    /* [in] */ IVector *pvFontColor,
    /* [in] */ IVector *pvShadowColor,
    /* [in] */ VARIANT bstrName);


void __RPC_STUB IVWFrame_CreateDecalFromTextExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_SetDecalSize_Proxy( 
    IVWFrame * This,
    /* [in] */ long nMeshIndex,
    /* [in] */ float fHeight,
    /* [in] */ float fWidth,
    /* [in] */ VARIANT_BOOL bScale);


void __RPC_STUB IVWFrame_SetDecalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_SetDecalOrigin_Proxy( 
    IVWFrame * This,
    /* [in] */ long nMeshIndex,
    /* [in] */ long lx,
    /* [in] */ long ly);


void __RPC_STUB IVWFrame_SetDecalOrigin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_GetDecalSize_Proxy( 
    IVWFrame * This,
    /* [in] */ long nMeshIndex,
    /* [out] */ VARIANT *fHeight,
    /* [out] */ VARIANT *fWidth,
    /* [out] */ VARIANT *bScale);


void __RPC_STUB IVWFrame_GetDecalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_GetDecalOrigin_Proxy( 
    IVWFrame * This,
    /* [in] */ long nMeshIndex,
    /* [out] */ VARIANT *lx,
    /* [out] */ VARIANT *ly);


void __RPC_STUB IVWFrame_GetDecalOrigin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_DeleteDecal_Proxy( 
    IVWFrame * This,
    /* [in] */ long nMeshIndex);


void __RPC_STUB IVWFrame_DeleteDecal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_GetDecalCount_Proxy( 
    IVWFrame * This,
    /* [retval][out] */ long *nCount);


void __RPC_STUB IVWFrame_GetDecalCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_GetDecalIndexByName_Proxy( 
    IVWFrame * This,
    /* [in] */ BSTR bstrDecalName,
    /* [retval][out] */ long *plIndex);


void __RPC_STUB IVWFrame_GetDecalIndexByName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_SetSceneFogColor_Proxy( 
    IVWFrame * This,
    /* [in] */ float red,
    /* [in] */ float green,
    /* [in] */ float blue);


void __RPC_STUB IVWFrame_SetSceneFogColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_SetSceneFogEnable_Proxy( 
    IVWFrame * This,
    /* [in] */ VARIANT_BOOL fogEnable);


void __RPC_STUB IVWFrame_SetSceneFogEnable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_SetSceneFogParams_Proxy( 
    IVWFrame * This,
    /* [in] */ float start,
    /* [in] */ float end);


void __RPC_STUB IVWFrame_SetSceneFogParams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_CreateShadow_Proxy( 
    IVWFrame * This,
    /* [in] */ int nMeshIndex,
    /* [in] */ IVWFrame *pvwfLightSrc,
    /* [in] */ int nIndex,
    /* [in] */ float ylevel);


void __RPC_STUB IVWFrame_CreateShadow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_DeleteShadow_Proxy( 
    IVWFrame * This,
    /* [in] */ int nMeshIndex,
    /* [in] */ IVWFrame *pvwfLightSrc,
    /* [in] */ int nIndex);


void __RPC_STUB IVWFrame_DeleteShadow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_PlayVideo_Proxy( 
    IVWFrame * This,
    /* [in] */ int nMeshIndex,
    /* [in] */ BSTR sfilename);


void __RPC_STUB IVWFrame_PlayVideo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_Explode_Proxy( 
    IVWFrame * This,
    DWORD dwTime);


void __RPC_STUB IVWFrame_Explode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_SetInternalScale_Proxy( 
    IVWFrame * This,
    /* [in] */ float fScaleX,
    /* [in] */ float fScaleY,
    /* [in] */ float fScaleZ);


void __RPC_STUB IVWFrame_SetInternalScale_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_StartAnimation_Proxy( 
    IVWFrame * This,
    /* [in] */ float fTimeScale,
    /* [in] */ float fRangeStart,
    /* [in] */ float fRangeEnd,
    /* [in] */ BSTR bstrAnimationDoneMethod);


void __RPC_STUB IVWFrame_StartAnimation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_StopAnimation_Proxy( 
    IVWFrame * This);


void __RPC_STUB IVWFrame_StopAnimation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVWFrame_AnimationSetTime_Proxy( 
    IVWFrame * This,
    /* [in] */ float fTime);


void __RPC_STUB IVWFrame_AnimationSetTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE IVWFrame_get_AnimationSet_Proxy( 
    IVWFrame * This,
    /* [retval][out] */ LPDIRECT3DRMANIMATIONSET2 *ppd3drmanimset);


void __RPC_STUB IVWFrame_get_AnimationSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE IVWFrame_put_AnimationSet_Proxy( 
    IVWFrame * This,
    /* [in] */ LPDIRECT3DRMANIMATIONSET2 ppd3drmanimset);


void __RPC_STUB IVWFrame_put_AnimationSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE IVWFrame_get_Frame3D_Proxy( 
    IVWFrame * This,
    /* [retval][out] */ LPDIRECT3DRMFRAME *ppd3drmf);


void __RPC_STUB IVWFrame_get_Frame3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE IVWFrame_put_Frame3D_Proxy( 
    IVWFrame * This,
    /* [in] */ LPDIRECT3DRMFRAME pd3drmf);


void __RPC_STUB IVWFrame_put_Frame3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE IVWFrame_get_Frame2D_Proxy( 
    IVWFrame * This,
    /* [retval][out] */ LPDIRECT2DRMFRAME *ppd2drmf);


void __RPC_STUB IVWFrame_get_Frame2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE IVWFrame_put_Frame2D_Proxy( 
    IVWFrame * This,
    /* [in] */ LPDIRECT2DRMFRAME pd2drmf);


void __RPC_STUB IVWFrame_put_Frame2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IVWFrame_get_Thing_Proxy( 
    IVWFrame * This,
    /* [retval][out] */ IThing **ppThing);


void __RPC_STUB IVWFrame_get_Thing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE IVWFrame_put_Thing_Proxy( 
    IVWFrame * This,
    /* [in] */ IThing *pThing);


void __RPC_STUB IVWFrame_put_Thing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propget] */ HRESULT STDMETHODCALLTYPE IVWFrame_get_BoundaryList_Proxy( 
    IVWFrame * This,
    /* [retval][out] */ IPropertyList **ppBoundaryList);


void __RPC_STUB IVWFrame_get_BoundaryList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted][propput] */ HRESULT STDMETHODCALLTYPE IVWFrame_put_BoundaryList_Proxy( 
    IVWFrame * This,
    /* [in] */ IPropertyList *pBoundaryList);


void __RPC_STUB IVWFrame_put_BoundaryList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IVWFrame_SetAppString_Proxy( 
    IVWFrame * This,
    /* [in] */ BSTR bstr);


void __RPC_STUB IVWFrame_SetAppString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IVWFrame_GetAppString_Proxy( 
    IVWFrame * This,
    /* [retval][out] */ BSTR *pbstr);


void __RPC_STUB IVWFrame_GetAppString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IVWFrame_put_GeometryCache_Proxy( 
    IVWFrame * This,
    /* [in] */ IVWGeometryCache *pVWGeometryCache);


void __RPC_STUB IVWFrame_put_GeometryCache_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IVWFrame_put_GeometryObject_Proxy( 
    IVWFrame * This,
    /* [in] */ IVWGeometry *pVWGeometry);


void __RPC_STUB IVWFrame_put_GeometryObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE IVWFrame_get_GeometryObject_Proxy( 
    IVWFrame * This,
    /* [retval][out] */ IVWGeometry **ppVWGeometry);


void __RPC_STUB IVWFrame_get_GeometryObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVWFrame_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


