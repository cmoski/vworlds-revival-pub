

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwmmex.idl:
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

#ifndef __vwmmex_h__
#define __vwmmex_h__

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

#ifndef __IMultimediaExemplar_FWD_DEFINED__
#define __IMultimediaExemplar_FWD_DEFINED__
typedef interface IMultimediaExemplar IMultimediaExemplar;

#endif 	/* __IMultimediaExemplar_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "vwobject.h"
#include "vwgeom.h"
#include "vwgeomsp.h"
#include "vwadata.h"
#include "pickdata.h"
#include "isound.h"
#include "menuitem.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwmmex_0000_0000 */
/* [local] */ 

#define VWMM_E_NOTINCONTENTS			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e00)
#define VWMM_E_NOTINCONTAINER		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e01)
#define VWMM_E_NOTWEARABLE			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e02)
#define VWMM_E_NOTWORN				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e03)
#define VWMM_E_NOTANACCESSORY		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e04)
#define VWMM_E_INVALIDBOUNDARY		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e05)
#define VWMM_E_TAKEPERMISSIONDENIED	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e06)
#define VWMM_E_UNKNOWN				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e07)
#define VWMM_E_LABELFONTSIZE			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0e08)


extern RPC_IF_HANDLE __MIDL_itf_vwmmex_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwmmex_0000_0000_v0_0_s_ifspec;

#ifndef __IMultimediaExemplar_INTERFACE_DEFINED__
#define __IMultimediaExemplar_INTERFACE_DEFINED__

/* interface IMultimediaExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMultimediaExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("717B5A96-7267-11d1-959F-00C04FD91F4D")
    IMultimediaExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateGeometry( 
            /* [in] */ BSTR bstrGeometryName,
            /* [retval][out] */ IVWGeometry **ppgeometry) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateFrame( 
            /* [retval][out] */ IVWFrame **ppframe) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSpritedGeometry( 
            /* [in] */ BSTR bstrGeometryName,
            /* [retval][out] */ IVWGeometrySprite **ppgeometry) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateVector( 
            /* [in] */ float x,
            /* [in] */ float y,
            /* [in] */ float z,
            /* [retval][out] */ IVector **ppvector) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateAccessoryData( 
            /* [in] */ BSTR bstrAccessoryGraphic,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [retval][out] */ IVWAccessoryData **ppaccessorydata) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSound( 
            /* [in] */ BSTR SoundURL,
            /* [in] */ VARIANT_BOOL bIs3D,
            /* [in] */ VARIANT_BOOL bIsLooping,
            /* [retval][out] */ ISound **ppSound) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateBoundaryList( 
            /* [retval][out] */ IPropertyList **ppBoundaryList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateBoundary( 
            /* [optional][in] */ VARIANT varInitialValue,
            /* [retval][out] */ IBoundary **ppBoundary) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreatePickData( 
            /* [retval][out] */ IVWPickData **ppPickData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnAutoDownloadAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNamedMeshes( 
            /* [retval][out] */ IPropertyList **ppMeshList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNamedMeshTexture( 
            /* [in] */ BSTR bstrMeshName,
            /* [retval][out] */ BSTR *pbstrTextureURL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNamedMeshTexture( 
            /* [in] */ BSTR bstrMeshName,
            /* [in] */ BSTR bstrTextureURL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNamedMeshTextureClient( 
            /* [in] */ BSTR bstrMeshName,
            /* [in] */ BSTR bstrTextureURL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNamedMeshColor( 
            /* [in] */ BSTR bstrMeshName,
            /* [retval][out] */ OLE_COLOR *pNewColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNamedMeshColor( 
            /* [in] */ BSTR bstrMeshName,
            /* [in] */ OLE_COLOR newColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNamedMeshColorClient( 
            /* [in] */ BSTR bstrMeshName,
            /* [in] */ OLE_COLOR newColor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLoadGeometry( 
            /* [in] */ IVWFrame *pNewFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ComposeScene( 
            /* [in] */ IThing *pContext,
            /* [retval][out] */ IVWFrame **ppvwf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFrame( 
            /* [retval][out] */ IVWFrame **ppvwf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGeometryFrame( 
            /* [retval][out] */ IVWFrame **ppvwf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetCamera( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Approach( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnApproachDone( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ApproachLocation( 
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ,
            /* [in] */ float fDirX,
            /* [in] */ float fDirY,
            /* [in] */ float fDirZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateIsApproachable( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE PositionOrientationHeartbeat( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnPositionChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnScaleChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnUpChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnDirectionChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAnimationFileKeys( 
            /* [retval][out] */ IPropertyList **ppKeyList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetClientSystemTime( 
            /* [in] */ long lSystemTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartAnimation( 
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varPathMap,
            /* [optional][in] */ VARIANT varCallBack,
            /* [optional][in] */ VARIANT varOptions,
            /* [optional][in] */ VARIANT varTimeScale,
            /* [optional][in] */ VARIANT varStartRange,
            /* [optional][in] */ VARIANT varEndRange,
            /* [optional][in] */ VARIANT varIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopAnimation( 
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varOptions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAnimationIndex( 
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varIndex,
            /* [optional][in] */ VARIANT varOptions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartAnimationServer( 
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varPathMap,
            /* [optional][in] */ VARIANT varCallBack,
            /* [optional][in] */ VARIANT varOptions,
            /* [optional][in] */ VARIANT varTimeScale,
            /* [optional][in] */ VARIANT varStartRange,
            /* [optional][in] */ VARIANT varEndRange,
            /* [optional][in] */ VARIANT varIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopAnimationServer( 
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varValue,
            /* [optional][in] */ VARIANT varOptions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FinishAnimation( 
            /* [in] */ VARIANT varSetProp,
            /* [in] */ VARIANT varCompleted,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ BSTR bstrCallBack,
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAnimationPropertyRequest( 
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varStartTime,
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAnimationIndexServer( 
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varIndex,
            /* [optional][in] */ VARIANT varOptions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleStartAnimation( 
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varPathMap,
            /* [optional][in] */ VARIANT varCallBack,
            /* [optional][in] */ VARIANT varOptions,
            /* [optional][in] */ VARIANT varTimeScale,
            /* [optional][in] */ VARIANT varStartRange,
            /* [optional][in] */ VARIANT varEndRange,
            /* [optional][in] */ VARIANT varIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleStopAnimation( 
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varOptions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleStopAnimationWithRequest( 
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varOptions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleSetAnimationIndex( 
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varIndex,
            /* [optional][in] */ VARIANT varOptions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAnimationSystemTime( 
            /* [retval][out] */ long *lCurrentAnimTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAnimationStartTime( 
            /* [in] */ BSTR bstrPropertyName,
            /* [retval][out] */ long *AnimStartTime) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnBoundaryListChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnIsConnectedChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnVisibleChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnIsMoveableChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnRotationRateChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnRotationAxisChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnRenderQualityChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnGeometryChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnGeometryNameChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentsVisibleChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE FireIntersectEvent( 
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fSrcX,
            /* [in] */ float fSrcY,
            /* [in] */ float fSrcZ,
            /* [in] */ float fDestX,
            /* [in] */ float fDestY,
            /* [in] */ float fDestZ,
            /* [in] */ IPropertyList *pIDataList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoGesture( 
            /* [in] */ int iGesture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoNamedGesture( 
            /* [in] */ BSTR bstrGestureName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GestureText( 
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoGestureClient( 
            /* [in] */ IThing *pThingOriginator,
            /* [in] */ int iGesture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNamedGestures( 
            /* [retval][out] */ IPropertyList **ppGestureNameList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitializeGraphics( 
            /* [in] */ BSTR bstrGeometry,
            /* [in] */ float fXPos,
            /* [in] */ float fYPos,
            /* [in] */ float fZPos,
            /* [in] */ float fXDir,
            /* [in] */ float fYDir,
            /* [in] */ float fZDir,
            /* [defaultvalue][optional][in] */ VARIANT varXScale,
            /* [defaultvalue][optional][in] */ VARIANT varYScale,
            /* [defaultvalue][optional][in] */ VARIANT varZScale) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitializeSpriteGraphics( 
            /* [in] */ BSTR bstrSprite,
            /* [in] */ float fXPos,
            /* [in] */ float fYPos,
            /* [in] */ float fZPos,
            /* [in] */ float fXDir,
            /* [in] */ float fYDir,
            /* [in] */ float fZDir,
            /* [defaultvalue][optional][in] */ VARIANT varXScale,
            /* [defaultvalue][optional][in] */ VARIANT varYScale,
            /* [defaultvalue][optional][in] */ VARIANT varZScale) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSound( 
            /* [in] */ BSTR bstrWaveURL,
            /* [in] */ VARIANT bIsLooping,
            /* [defaultvalue][optional][in] */ VARIANT lVolume,
            /* [defaultvalue][optional][in] */ VARIANT lFrequency,
            /* [defaultvalue][optional][in] */ VARIANT lPan) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Set3DSound( 
            /* [in] */ BSTR bstrWaveURL,
            /* [in] */ VARIANT bIsLooping,
            /* [defaultvalue][optional][in] */ VARIANT dwInsideConeAngle,
            /* [defaultvalue][optional][in] */ VARIANT dwOutsideConeAngle,
            /* [defaultvalue][optional][in] */ VARIANT lConeOutsideVolume,
            /* [defaultvalue][optional][in] */ VARIANT flMinDistance,
            /* [defaultvalue][optional][in] */ VARIANT flMaxDistance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetClientSound( 
            /* [in] */ BSTR bstrWaveURL,
            /* [in] */ VARIANT bIsLooping,
            /* [defaultvalue][optional][in] */ VARIANT lVolume,
            /* [defaultvalue][optional][in] */ VARIANT lFrequency,
            /* [defaultvalue][optional][in] */ VARIANT lPan) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetClient3DSound( 
            /* [in] */ BSTR bstrWaveURL,
            /* [in] */ VARIANT bIsLooping,
            /* [defaultvalue][optional][in] */ VARIANT dwInsideConeAngle,
            /* [defaultvalue][optional][in] */ VARIANT dwOutsideConeAngle,
            /* [defaultvalue][optional][in] */ VARIANT lConeOutsideVolume,
            /* [defaultvalue][optional][in] */ VARIANT flMinDistance,
            /* [defaultvalue][optional][in] */ VARIANT flMaxDistance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Take( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Drop( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Fall( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DurationReset( 
            /* [in] */ BSTR bstrProperty,
            /* [in] */ long nLastDuration) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnSolidChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE UpdateSolidBoundary( 
            /* [in] */ float fMinX,
            /* [in] */ float fMinY,
            /* [in] */ float fMinZ,
            /* [in] */ float fMaxX,
            /* [in] */ float fMaxY,
            /* [in] */ float fMaxZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnPosDirScaleAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentSystemEnter( 
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWho) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentSystemLeave( 
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWho) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnLabelPropertyChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnCreate( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnWornAccessoriesChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LookToward( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectInView( 
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFieldOfView( 
            /* [in] */ int newView) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnWear( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Wear( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnIsAccessoryChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnConnect( 
            IThing *pAvatar) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentLeave( 
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWhat) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddDefaultKeys( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Teleport( 
            /* [in] */ IThing *pNewRoom) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ThumbnailFileName( 
            /* [retval][out] */ BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE UpdateWear( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE UpdateUnWear( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ValidatePosition( 
            /* [in] */ IThing *pObject,
            /* [in] */ IVector *pPosition,
            /* [retval][out] */ IVector **ppNewPos) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindFloorHeight( 
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ,
            /* [retval][out] */ float *fFloorHeight) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnFogChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnFogColorChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnFogStartChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnFogEndChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnRoomLoadGeometry( 
            /* [in] */ IVWFrame *pNewFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnActivate( 
            /* [in] */ IThing *pRoom) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnDeactivate( 
            /* [in] */ IThing *pRoom) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TransportTo( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnIntersectee( 
            /* [in] */ IThing *pIntersector,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ,
            /* [in] */ int iEdgeCycIndex,
            /* [in] */ int iEdgeIndex,
            /* [in] */ VARIANT_BOOL bTransition) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLightTypeChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLightColorChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLightUmbraChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLightPenumbraChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLightRangeChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLightEnabledChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLightAttenuationChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnLightLoadGeometry( 
            /* [in] */ IVWFrame *pNewFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ActorInitialize( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ActorSetJointRotation( 
            /* [in] */ BSTR bstrJointName,
            /* [in] */ double angle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ActorPlayAnimation( 
            /* [in] */ BSTR bstrAnimFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ActorPlayAllAnimations( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMultimediaExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMultimediaExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMultimediaExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMultimediaExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMultimediaExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMultimediaExemplar * This,
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
            IMultimediaExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IMultimediaExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, CreateGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateGeometry )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrGeometryName,
            /* [retval][out] */ IVWGeometry **ppgeometry);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, CreateFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateFrame )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ IVWFrame **ppframe);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, CreateSpritedGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSpritedGeometry )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrGeometryName,
            /* [retval][out] */ IVWGeometrySprite **ppgeometry);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, CreateVector)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateVector )( 
            IMultimediaExemplar * This,
            /* [in] */ float x,
            /* [in] */ float y,
            /* [in] */ float z,
            /* [retval][out] */ IVector **ppvector);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, CreateAccessoryData)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateAccessoryData )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrAccessoryGraphic,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [retval][out] */ IVWAccessoryData **ppaccessorydata);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, CreateSound)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSound )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR SoundURL,
            /* [in] */ VARIANT_BOOL bIs3D,
            /* [in] */ VARIANT_BOOL bIsLooping,
            /* [retval][out] */ ISound **ppSound);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, CreateBoundaryList)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateBoundaryList )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ IPropertyList **ppBoundaryList);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, CreateBoundary)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateBoundary )( 
            IMultimediaExemplar * This,
            /* [optional][in] */ VARIANT varInitialValue,
            /* [retval][out] */ IBoundary **ppBoundary);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, CreatePickData)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreatePickData )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ IVWPickData **ppPickData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnAutoDownloadAccess)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnAutoDownloadAccess )( 
            IMultimediaExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GetNamedMeshes)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedMeshes )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ IPropertyList **ppMeshList);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GetNamedMeshTexture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedMeshTexture )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrMeshName,
            /* [retval][out] */ BSTR *pbstrTextureURL);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetNamedMeshTexture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNamedMeshTexture )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrMeshName,
            /* [in] */ BSTR bstrTextureURL);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetNamedMeshTextureClient)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNamedMeshTextureClient )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrMeshName,
            /* [in] */ BSTR bstrTextureURL);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GetNamedMeshColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedMeshColor )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrMeshName,
            /* [retval][out] */ OLE_COLOR *pNewColor);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetNamedMeshColor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNamedMeshColor )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrMeshName,
            /* [in] */ OLE_COLOR newColor);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetNamedMeshColorClient)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNamedMeshColorClient )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrMeshName,
            /* [in] */ OLE_COLOR newColor);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLoadGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoadGeometry )( 
            IMultimediaExemplar * This,
            /* [in] */ IVWFrame *pNewFrame);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, ComposeScene)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ComposeScene )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pContext,
            /* [retval][out] */ IVWFrame **ppvwf);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GetFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFrame )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ IVWFrame **ppvwf);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GetGeometryFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGeometryFrame )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ IVWFrame **ppvwf);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetCamera)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetCamera )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, Approach)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Approach )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnApproachDone)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnApproachDone )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, ApproachLocation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ApproachLocation )( 
            IMultimediaExemplar * This,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ,
            /* [in] */ float fDirX,
            /* [in] */ float fDirY,
            /* [in] */ float fDirZ);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, UpdateIsApproachable)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateIsApproachable )( 
            IMultimediaExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, PositionOrientationHeartbeat)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *PositionOrientationHeartbeat )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnPositionChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnPositionChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnScaleChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnScaleChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnUpChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnUpChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnDirectionChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnDirectionChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GetAnimationFileKeys)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAnimationFileKeys )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ IPropertyList **ppKeyList);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetClientSystemTime)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetClientSystemTime )( 
            IMultimediaExemplar * This,
            /* [in] */ long lSystemTime);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, StartAnimation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartAnimation )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varPathMap,
            /* [optional][in] */ VARIANT varCallBack,
            /* [optional][in] */ VARIANT varOptions,
            /* [optional][in] */ VARIANT varTimeScale,
            /* [optional][in] */ VARIANT varStartRange,
            /* [optional][in] */ VARIANT varEndRange,
            /* [optional][in] */ VARIANT varIndex);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, StopAnimation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StopAnimation )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varOptions);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetAnimationIndex)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAnimationIndex )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varIndex,
            /* [optional][in] */ VARIANT varOptions);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, StartAnimationServer)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartAnimationServer )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varPathMap,
            /* [optional][in] */ VARIANT varCallBack,
            /* [optional][in] */ VARIANT varOptions,
            /* [optional][in] */ VARIANT varTimeScale,
            /* [optional][in] */ VARIANT varStartRange,
            /* [optional][in] */ VARIANT varEndRange,
            /* [optional][in] */ VARIANT varIndex);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, StopAnimationServer)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StopAnimationServer )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varValue,
            /* [optional][in] */ VARIANT varOptions);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, FinishAnimation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FinishAnimation )( 
            IMultimediaExemplar * This,
            /* [in] */ VARIANT varSetProp,
            /* [in] */ VARIANT varCompleted,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ BSTR bstrCallBack,
            /* [in] */ VARIANT varValue);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetAnimationPropertyRequest)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAnimationPropertyRequest )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varStartTime,
            /* [in] */ VARIANT varValue);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetAnimationIndexServer)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAnimationIndexServer )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varIndex,
            /* [optional][in] */ VARIANT varOptions);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, HandleStartAnimation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleStartAnimation )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varPathMap,
            /* [optional][in] */ VARIANT varCallBack,
            /* [optional][in] */ VARIANT varOptions,
            /* [optional][in] */ VARIANT varTimeScale,
            /* [optional][in] */ VARIANT varStartRange,
            /* [optional][in] */ VARIANT varEndRange,
            /* [optional][in] */ VARIANT varIndex);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, HandleStopAnimation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleStopAnimation )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [optional][in] */ VARIANT varOptions);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, HandleStopAnimationWithRequest)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleStopAnimationWithRequest )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varOptions);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, HandleSetAnimationIndex)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleSetAnimationIndex )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varIndex,
            /* [optional][in] */ VARIANT varOptions);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GetAnimationSystemTime)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAnimationSystemTime )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ long *lCurrentAnimTime);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GetAnimationStartTime)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAnimationStartTime )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrPropertyName,
            /* [retval][out] */ long *AnimStartTime);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnBoundaryListChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnBoundaryListChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnIsConnectedChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnIsConnectedChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnVisibleChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnVisibleChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnIsMoveableChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnIsMoveableChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnRotationRateChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnRotationRateChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnRotationAxisChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnRotationAxisChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnRenderQualityChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnRenderQualityChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnGeometryChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnGeometryChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnGeometryNameChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnGeometryNameChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnContentsVisibleChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentsVisibleChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, FireIntersectEvent)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *FireIntersectEvent )( 
            IMultimediaExemplar * This,
            /* [in] */ IVWFrame *pvwfRef,
            /* [in] */ float fSrcX,
            /* [in] */ float fSrcY,
            /* [in] */ float fSrcZ,
            /* [in] */ float fDestX,
            /* [in] */ float fDestY,
            /* [in] */ float fDestZ,
            /* [in] */ IPropertyList *pIDataList);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, DoGesture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoGesture )( 
            IMultimediaExemplar * This,
            /* [in] */ int iGesture);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, DoNamedGesture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoNamedGesture )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrGestureName);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GestureText)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GestureText )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, DoGestureClient)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoGestureClient )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThingOriginator,
            /* [in] */ int iGesture);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, GetNamedGestures)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedGestures )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ IPropertyList **ppGestureNameList);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, InitializeGraphics)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitializeGraphics )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrGeometry,
            /* [in] */ float fXPos,
            /* [in] */ float fYPos,
            /* [in] */ float fZPos,
            /* [in] */ float fXDir,
            /* [in] */ float fYDir,
            /* [in] */ float fZDir,
            /* [defaultvalue][optional][in] */ VARIANT varXScale,
            /* [defaultvalue][optional][in] */ VARIANT varYScale,
            /* [defaultvalue][optional][in] */ VARIANT varZScale);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, InitializeSpriteGraphics)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitializeSpriteGraphics )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrSprite,
            /* [in] */ float fXPos,
            /* [in] */ float fYPos,
            /* [in] */ float fZPos,
            /* [in] */ float fXDir,
            /* [in] */ float fYDir,
            /* [in] */ float fZDir,
            /* [defaultvalue][optional][in] */ VARIANT varXScale,
            /* [defaultvalue][optional][in] */ VARIANT varYScale,
            /* [defaultvalue][optional][in] */ VARIANT varZScale);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetSound)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSound )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrWaveURL,
            /* [in] */ VARIANT bIsLooping,
            /* [defaultvalue][optional][in] */ VARIANT lVolume,
            /* [defaultvalue][optional][in] */ VARIANT lFrequency,
            /* [defaultvalue][optional][in] */ VARIANT lPan);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, Set3DSound)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Set3DSound )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrWaveURL,
            /* [in] */ VARIANT bIsLooping,
            /* [defaultvalue][optional][in] */ VARIANT dwInsideConeAngle,
            /* [defaultvalue][optional][in] */ VARIANT dwOutsideConeAngle,
            /* [defaultvalue][optional][in] */ VARIANT lConeOutsideVolume,
            /* [defaultvalue][optional][in] */ VARIANT flMinDistance,
            /* [defaultvalue][optional][in] */ VARIANT flMaxDistance);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetClientSound)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetClientSound )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrWaveURL,
            /* [in] */ VARIANT bIsLooping,
            /* [defaultvalue][optional][in] */ VARIANT lVolume,
            /* [defaultvalue][optional][in] */ VARIANT lFrequency,
            /* [defaultvalue][optional][in] */ VARIANT lPan);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetClient3DSound)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetClient3DSound )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrWaveURL,
            /* [in] */ VARIANT bIsLooping,
            /* [defaultvalue][optional][in] */ VARIANT dwInsideConeAngle,
            /* [defaultvalue][optional][in] */ VARIANT dwOutsideConeAngle,
            /* [defaultvalue][optional][in] */ VARIANT lConeOutsideVolume,
            /* [defaultvalue][optional][in] */ VARIANT flMinDistance,
            /* [defaultvalue][optional][in] */ VARIANT flMaxDistance);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, Take)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Take )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, Drop)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Drop )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, Fall)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Fall )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, DurationReset)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DurationReset )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrProperty,
            /* [in] */ long nLastDuration);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnSolidChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnSolidChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, UpdateSolidBoundary)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *UpdateSolidBoundary )( 
            IMultimediaExemplar * This,
            /* [in] */ float fMinX,
            /* [in] */ float fMinY,
            /* [in] */ float fMinZ,
            /* [in] */ float fMaxX,
            /* [in] */ float fMaxY,
            /* [in] */ float fMaxZ);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnPosDirScaleAccess)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnPosDirScaleAccess )( 
            IMultimediaExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnContentSystemEnter)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentSystemEnter )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWho);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnContentSystemLeave)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentSystemLeave )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWho);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLabelPropertyChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnLabelPropertyChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnCreate)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnCreate )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnWornAccessoriesChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnWornAccessoriesChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, LookToward)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LookToward )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, ObjectInView)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ObjectInView )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, SetFieldOfView)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFieldOfView )( 
            IMultimediaExemplar * This,
            /* [in] */ int newView);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, UnWear)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnWear )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, Wear)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Wear )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnIsAccessoryChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnIsAccessoryChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnConnect)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnConnect )( 
            IMultimediaExemplar * This,
            IThing *pAvatar);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnContentLeave)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentLeave )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWhat);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, AddDefaultKeys)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddDefaultKeys )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, Teleport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Teleport )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pNewRoom);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, ThumbnailFileName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ThumbnailFileName )( 
            IMultimediaExemplar * This,
            /* [retval][out] */ BSTR *pbstrFileName);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, UpdateWear)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *UpdateWear )( 
            IMultimediaExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, UpdateUnWear)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *UpdateUnWear )( 
            IMultimediaExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, ValidatePosition)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ValidatePosition )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pObject,
            /* [in] */ IVector *pPosition,
            /* [retval][out] */ IVector **ppNewPos);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, FindFloorHeight)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindFloorHeight )( 
            IMultimediaExemplar * This,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ,
            /* [retval][out] */ float *fFloorHeight);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnFogChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnFogChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnFogColorChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnFogColorChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnFogStartChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnFogStartChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnFogEndChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnFogEndChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnRoomLoadGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnRoomLoadGeometry )( 
            IMultimediaExemplar * This,
            /* [in] */ IVWFrame *pNewFrame);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnActivate )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pRoom);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnDeactivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnDeactivate )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pRoom);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, TransportTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TransportTo )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnIntersectee)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnIntersectee )( 
            IMultimediaExemplar * This,
            /* [in] */ IThing *pIntersector,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [in] */ float fZ,
            /* [in] */ int iEdgeCycIndex,
            /* [in] */ int iEdgeIndex,
            /* [in] */ VARIANT_BOOL bTransition);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLightTypeChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLightTypeChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLightColorChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLightColorChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLightUmbraChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLightUmbraChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLightPenumbraChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLightPenumbraChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLightRangeChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLightRangeChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLightEnabledChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLightEnabledChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLightAttenuationChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLightAttenuationChanged )( 
            IMultimediaExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, OnLightLoadGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLightLoadGeometry )( 
            IMultimediaExemplar * This,
            /* [in] */ IVWFrame *pNewFrame);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, ActorInitialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ActorInitialize )( 
            IMultimediaExemplar * This);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, ActorSetJointRotation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ActorSetJointRotation )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrJointName,
            /* [in] */ double angle);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, ActorPlayAnimation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ActorPlayAnimation )( 
            IMultimediaExemplar * This,
            /* [in] */ BSTR bstrAnimFile);
        
        DECLSPEC_XFGVIRT(IMultimediaExemplar, ActorPlayAllAnimations)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ActorPlayAllAnimations )( 
            IMultimediaExemplar * This);
        
        END_INTERFACE
    } IMultimediaExemplarVtbl;

    interface IMultimediaExemplar
    {
        CONST_VTBL struct IMultimediaExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMultimediaExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMultimediaExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMultimediaExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMultimediaExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMultimediaExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMultimediaExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMultimediaExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMultimediaExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IMultimediaExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IMultimediaExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IMultimediaExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IMultimediaExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IMultimediaExemplar_CreateGeometry(This,bstrGeometryName,ppgeometry)	\
    ( (This)->lpVtbl -> CreateGeometry(This,bstrGeometryName,ppgeometry) ) 

#define IMultimediaExemplar_CreateFrame(This,ppframe)	\
    ( (This)->lpVtbl -> CreateFrame(This,ppframe) ) 

#define IMultimediaExemplar_CreateSpritedGeometry(This,bstrGeometryName,ppgeometry)	\
    ( (This)->lpVtbl -> CreateSpritedGeometry(This,bstrGeometryName,ppgeometry) ) 

#define IMultimediaExemplar_CreateVector(This,x,y,z,ppvector)	\
    ( (This)->lpVtbl -> CreateVector(This,x,y,z,ppvector) ) 

#define IMultimediaExemplar_CreateAccessoryData(This,bstrAccessoryGraphic,fPosX,fPosY,ppaccessorydata)	\
    ( (This)->lpVtbl -> CreateAccessoryData(This,bstrAccessoryGraphic,fPosX,fPosY,ppaccessorydata) ) 

#define IMultimediaExemplar_CreateSound(This,SoundURL,bIs3D,bIsLooping,ppSound)	\
    ( (This)->lpVtbl -> CreateSound(This,SoundURL,bIs3D,bIsLooping,ppSound) ) 

#define IMultimediaExemplar_CreateBoundaryList(This,ppBoundaryList)	\
    ( (This)->lpVtbl -> CreateBoundaryList(This,ppBoundaryList) ) 

#define IMultimediaExemplar_CreateBoundary(This,varInitialValue,ppBoundary)	\
    ( (This)->lpVtbl -> CreateBoundary(This,varInitialValue,ppBoundary) ) 

#define IMultimediaExemplar_CreatePickData(This,ppPickData)	\
    ( (This)->lpVtbl -> CreatePickData(This,ppPickData) ) 

#define IMultimediaExemplar_OnAutoDownloadAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnAutoDownloadAccess(This,lPerms,bReturnValue) ) 

#define IMultimediaExemplar_GetNamedMeshes(This,ppMeshList)	\
    ( (This)->lpVtbl -> GetNamedMeshes(This,ppMeshList) ) 

#define IMultimediaExemplar_GetNamedMeshTexture(This,bstrMeshName,pbstrTextureURL)	\
    ( (This)->lpVtbl -> GetNamedMeshTexture(This,bstrMeshName,pbstrTextureURL) ) 

#define IMultimediaExemplar_SetNamedMeshTexture(This,bstrMeshName,bstrTextureURL)	\
    ( (This)->lpVtbl -> SetNamedMeshTexture(This,bstrMeshName,bstrTextureURL) ) 

#define IMultimediaExemplar_SetNamedMeshTextureClient(This,bstrMeshName,bstrTextureURL)	\
    ( (This)->lpVtbl -> SetNamedMeshTextureClient(This,bstrMeshName,bstrTextureURL) ) 

#define IMultimediaExemplar_GetNamedMeshColor(This,bstrMeshName,pNewColor)	\
    ( (This)->lpVtbl -> GetNamedMeshColor(This,bstrMeshName,pNewColor) ) 

#define IMultimediaExemplar_SetNamedMeshColor(This,bstrMeshName,newColor)	\
    ( (This)->lpVtbl -> SetNamedMeshColor(This,bstrMeshName,newColor) ) 

#define IMultimediaExemplar_SetNamedMeshColorClient(This,bstrMeshName,newColor)	\
    ( (This)->lpVtbl -> SetNamedMeshColorClient(This,bstrMeshName,newColor) ) 

#define IMultimediaExemplar_OnLoadGeometry(This,pNewFrame)	\
    ( (This)->lpVtbl -> OnLoadGeometry(This,pNewFrame) ) 

#define IMultimediaExemplar_ComposeScene(This,pContext,ppvwf)	\
    ( (This)->lpVtbl -> ComposeScene(This,pContext,ppvwf) ) 

#define IMultimediaExemplar_GetFrame(This,ppvwf)	\
    ( (This)->lpVtbl -> GetFrame(This,ppvwf) ) 

#define IMultimediaExemplar_GetGeometryFrame(This,ppvwf)	\
    ( (This)->lpVtbl -> GetGeometryFrame(This,ppvwf) ) 

#define IMultimediaExemplar_SetCamera(This)	\
    ( (This)->lpVtbl -> SetCamera(This) ) 

#define IMultimediaExemplar_Approach(This,pThing)	\
    ( (This)->lpVtbl -> Approach(This,pThing) ) 

#define IMultimediaExemplar_OnApproachDone(This)	\
    ( (This)->lpVtbl -> OnApproachDone(This) ) 

#define IMultimediaExemplar_ApproachLocation(This,fPosX,fPosY,fPosZ,fDirX,fDirY,fDirZ)	\
    ( (This)->lpVtbl -> ApproachLocation(This,fPosX,fPosY,fPosZ,fDirX,fDirY,fDirZ) ) 

#define IMultimediaExemplar_UpdateIsApproachable(This,pmi)	\
    ( (This)->lpVtbl -> UpdateIsApproachable(This,pmi) ) 

#define IMultimediaExemplar_PositionOrientationHeartbeat(This,pThing)	\
    ( (This)->lpVtbl -> PositionOrientationHeartbeat(This,pThing) ) 

#define IMultimediaExemplar_OnPositionChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnPositionChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnScaleChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnScaleChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnUpChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnUpChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnDirectionChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnDirectionChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_GetAnimationFileKeys(This,ppKeyList)	\
    ( (This)->lpVtbl -> GetAnimationFileKeys(This,ppKeyList) ) 

#define IMultimediaExemplar_SetClientSystemTime(This,lSystemTime)	\
    ( (This)->lpVtbl -> SetClientSystemTime(This,lSystemTime) ) 

#define IMultimediaExemplar_StartAnimation(This,bstrPropertyName,varPathMap,varCallBack,varOptions,varTimeScale,varStartRange,varEndRange,varIndex)	\
    ( (This)->lpVtbl -> StartAnimation(This,bstrPropertyName,varPathMap,varCallBack,varOptions,varTimeScale,varStartRange,varEndRange,varIndex) ) 

#define IMultimediaExemplar_StopAnimation(This,bstrPropertyName,varOptions)	\
    ( (This)->lpVtbl -> StopAnimation(This,bstrPropertyName,varOptions) ) 

#define IMultimediaExemplar_SetAnimationIndex(This,bstrPropertyName,varIndex,varOptions)	\
    ( (This)->lpVtbl -> SetAnimationIndex(This,bstrPropertyName,varIndex,varOptions) ) 

#define IMultimediaExemplar_StartAnimationServer(This,bstrPropertyName,varPathMap,varCallBack,varOptions,varTimeScale,varStartRange,varEndRange,varIndex)	\
    ( (This)->lpVtbl -> StartAnimationServer(This,bstrPropertyName,varPathMap,varCallBack,varOptions,varTimeScale,varStartRange,varEndRange,varIndex) ) 

#define IMultimediaExemplar_StopAnimationServer(This,bstrPropertyName,varValue,varOptions)	\
    ( (This)->lpVtbl -> StopAnimationServer(This,bstrPropertyName,varValue,varOptions) ) 

#define IMultimediaExemplar_FinishAnimation(This,varSetProp,varCompleted,bstrPropertyName,bstrCallBack,varValue)	\
    ( (This)->lpVtbl -> FinishAnimation(This,varSetProp,varCompleted,bstrPropertyName,bstrCallBack,varValue) ) 

#define IMultimediaExemplar_SetAnimationPropertyRequest(This,bstrPropertyName,varStartTime,varValue)	\
    ( (This)->lpVtbl -> SetAnimationPropertyRequest(This,bstrPropertyName,varStartTime,varValue) ) 

#define IMultimediaExemplar_SetAnimationIndexServer(This,bstrPropertyName,varIndex,varOptions)	\
    ( (This)->lpVtbl -> SetAnimationIndexServer(This,bstrPropertyName,varIndex,varOptions) ) 

#define IMultimediaExemplar_HandleStartAnimation(This,bstrPropertyName,varPathMap,varCallBack,varOptions,varTimeScale,varStartRange,varEndRange,varIndex)	\
    ( (This)->lpVtbl -> HandleStartAnimation(This,bstrPropertyName,varPathMap,varCallBack,varOptions,varTimeScale,varStartRange,varEndRange,varIndex) ) 

#define IMultimediaExemplar_HandleStopAnimation(This,bstrPropertyName,varOptions)	\
    ( (This)->lpVtbl -> HandleStopAnimation(This,bstrPropertyName,varOptions) ) 

#define IMultimediaExemplar_HandleStopAnimationWithRequest(This,bstrPropertyName,varOptions)	\
    ( (This)->lpVtbl -> HandleStopAnimationWithRequest(This,bstrPropertyName,varOptions) ) 

#define IMultimediaExemplar_HandleSetAnimationIndex(This,bstrPropertyName,varIndex,varOptions)	\
    ( (This)->lpVtbl -> HandleSetAnimationIndex(This,bstrPropertyName,varIndex,varOptions) ) 

#define IMultimediaExemplar_GetAnimationSystemTime(This,lCurrentAnimTime)	\
    ( (This)->lpVtbl -> GetAnimationSystemTime(This,lCurrentAnimTime) ) 

#define IMultimediaExemplar_GetAnimationStartTime(This,bstrPropertyName,AnimStartTime)	\
    ( (This)->lpVtbl -> GetAnimationStartTime(This,bstrPropertyName,AnimStartTime) ) 

#define IMultimediaExemplar_OnBoundaryListChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnBoundaryListChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnIsConnectedChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnIsConnectedChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnVisibleChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnVisibleChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnIsMoveableChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnIsMoveableChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnRotationRateChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnRotationRateChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnRotationAxisChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnRotationAxisChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnRenderQualityChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnRenderQualityChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnGeometryChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnGeometryChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnGeometryNameChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnGeometryNameChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnContentsVisibleChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnContentsVisibleChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_FireIntersectEvent(This,pvwfRef,fSrcX,fSrcY,fSrcZ,fDestX,fDestY,fDestZ,pIDataList)	\
    ( (This)->lpVtbl -> FireIntersectEvent(This,pvwfRef,fSrcX,fSrcY,fSrcZ,fDestX,fDestY,fDestZ,pIDataList) ) 

#define IMultimediaExemplar_DoGesture(This,iGesture)	\
    ( (This)->lpVtbl -> DoGesture(This,iGesture) ) 

#define IMultimediaExemplar_DoNamedGesture(This,bstrGestureName)	\
    ( (This)->lpVtbl -> DoNamedGesture(This,bstrGestureName) ) 

#define IMultimediaExemplar_GestureText(This,bstrGesture,pbstrText)	\
    ( (This)->lpVtbl -> GestureText(This,bstrGesture,pbstrText) ) 

#define IMultimediaExemplar_DoGestureClient(This,pThingOriginator,iGesture)	\
    ( (This)->lpVtbl -> DoGestureClient(This,pThingOriginator,iGesture) ) 

#define IMultimediaExemplar_GetNamedGestures(This,ppGestureNameList)	\
    ( (This)->lpVtbl -> GetNamedGestures(This,ppGestureNameList) ) 

#define IMultimediaExemplar_InitializeGraphics(This,bstrGeometry,fXPos,fYPos,fZPos,fXDir,fYDir,fZDir,varXScale,varYScale,varZScale)	\
    ( (This)->lpVtbl -> InitializeGraphics(This,bstrGeometry,fXPos,fYPos,fZPos,fXDir,fYDir,fZDir,varXScale,varYScale,varZScale) ) 

#define IMultimediaExemplar_InitializeSpriteGraphics(This,bstrSprite,fXPos,fYPos,fZPos,fXDir,fYDir,fZDir,varXScale,varYScale,varZScale)	\
    ( (This)->lpVtbl -> InitializeSpriteGraphics(This,bstrSprite,fXPos,fYPos,fZPos,fXDir,fYDir,fZDir,varXScale,varYScale,varZScale) ) 

#define IMultimediaExemplar_SetSound(This,bstrWaveURL,bIsLooping,lVolume,lFrequency,lPan)	\
    ( (This)->lpVtbl -> SetSound(This,bstrWaveURL,bIsLooping,lVolume,lFrequency,lPan) ) 

#define IMultimediaExemplar_Set3DSound(This,bstrWaveURL,bIsLooping,dwInsideConeAngle,dwOutsideConeAngle,lConeOutsideVolume,flMinDistance,flMaxDistance)	\
    ( (This)->lpVtbl -> Set3DSound(This,bstrWaveURL,bIsLooping,dwInsideConeAngle,dwOutsideConeAngle,lConeOutsideVolume,flMinDistance,flMaxDistance) ) 

#define IMultimediaExemplar_SetClientSound(This,bstrWaveURL,bIsLooping,lVolume,lFrequency,lPan)	\
    ( (This)->lpVtbl -> SetClientSound(This,bstrWaveURL,bIsLooping,lVolume,lFrequency,lPan) ) 

#define IMultimediaExemplar_SetClient3DSound(This,bstrWaveURL,bIsLooping,dwInsideConeAngle,dwOutsideConeAngle,lConeOutsideVolume,flMinDistance,flMaxDistance)	\
    ( (This)->lpVtbl -> SetClient3DSound(This,bstrWaveURL,bIsLooping,dwInsideConeAngle,dwOutsideConeAngle,lConeOutsideVolume,flMinDistance,flMaxDistance) ) 

#define IMultimediaExemplar_Take(This,pThing)	\
    ( (This)->lpVtbl -> Take(This,pThing) ) 

#define IMultimediaExemplar_Drop(This,pThing)	\
    ( (This)->lpVtbl -> Drop(This,pThing) ) 

#define IMultimediaExemplar_Fall(This)	\
    ( (This)->lpVtbl -> Fall(This) ) 

#define IMultimediaExemplar_DurationReset(This,bstrProperty,nLastDuration)	\
    ( (This)->lpVtbl -> DurationReset(This,bstrProperty,nLastDuration) ) 

#define IMultimediaExemplar_OnSolidChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnSolidChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_UpdateSolidBoundary(This,fMinX,fMinY,fMinZ,fMaxX,fMaxY,fMaxZ)	\
    ( (This)->lpVtbl -> UpdateSolidBoundary(This,fMinX,fMinY,fMinZ,fMaxX,fMaxY,fMaxZ) ) 

#define IMultimediaExemplar_OnPosDirScaleAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnPosDirScaleAccess(This,lPerms,bReturnValue) ) 

#define IMultimediaExemplar_OnContentSystemEnter(This,pWhere,pWho)	\
    ( (This)->lpVtbl -> OnContentSystemEnter(This,pWhere,pWho) ) 

#define IMultimediaExemplar_OnContentSystemLeave(This,pWhere,pWho)	\
    ( (This)->lpVtbl -> OnContentSystemLeave(This,pWhere,pWho) ) 

#define IMultimediaExemplar_OnLabelPropertyChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnLabelPropertyChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnCreate(This,pthing)	\
    ( (This)->lpVtbl -> OnCreate(This,pthing) ) 

#define IMultimediaExemplar_OnWornAccessoriesChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnWornAccessoriesChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_LookToward(This,pThing)	\
    ( (This)->lpVtbl -> LookToward(This,pThing) ) 

#define IMultimediaExemplar_ObjectInView(This,pThing,pbool)	\
    ( (This)->lpVtbl -> ObjectInView(This,pThing,pbool) ) 

#define IMultimediaExemplar_SetFieldOfView(This,newView)	\
    ( (This)->lpVtbl -> SetFieldOfView(This,newView) ) 

#define IMultimediaExemplar_UnWear(This,pThing)	\
    ( (This)->lpVtbl -> UnWear(This,pThing) ) 

#define IMultimediaExemplar_Wear(This,pThing)	\
    ( (This)->lpVtbl -> Wear(This,pThing) ) 

#define IMultimediaExemplar_OnIsAccessoryChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnIsAccessoryChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnConnect(This,pAvatar)	\
    ( (This)->lpVtbl -> OnConnect(This,pAvatar) ) 

#define IMultimediaExemplar_OnContentLeave(This,pWhere,pWhat)	\
    ( (This)->lpVtbl -> OnContentLeave(This,pWhere,pWhat) ) 

#define IMultimediaExemplar_AddDefaultKeys(This)	\
    ( (This)->lpVtbl -> AddDefaultKeys(This) ) 

#define IMultimediaExemplar_Teleport(This,pNewRoom)	\
    ( (This)->lpVtbl -> Teleport(This,pNewRoom) ) 

#define IMultimediaExemplar_ThumbnailFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> ThumbnailFileName(This,pbstrFileName) ) 

#define IMultimediaExemplar_UpdateWear(This,pmi)	\
    ( (This)->lpVtbl -> UpdateWear(This,pmi) ) 

#define IMultimediaExemplar_UpdateUnWear(This,pmi)	\
    ( (This)->lpVtbl -> UpdateUnWear(This,pmi) ) 

#define IMultimediaExemplar_ValidatePosition(This,pObject,pPosition,ppNewPos)	\
    ( (This)->lpVtbl -> ValidatePosition(This,pObject,pPosition,ppNewPos) ) 

#define IMultimediaExemplar_FindFloorHeight(This,fPosX,fPosY,fPosZ,fFloorHeight)	\
    ( (This)->lpVtbl -> FindFloorHeight(This,fPosX,fPosY,fPosZ,fFloorHeight) ) 

#define IMultimediaExemplar_OnFogChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnFogChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnFogColorChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnFogColorChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnFogStartChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnFogStartChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnFogEndChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnFogEndChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnRoomLoadGeometry(This,pNewFrame)	\
    ( (This)->lpVtbl -> OnRoomLoadGeometry(This,pNewFrame) ) 

#define IMultimediaExemplar_OnActivate(This,pRoom)	\
    ( (This)->lpVtbl -> OnActivate(This,pRoom) ) 

#define IMultimediaExemplar_OnDeactivate(This,pRoom)	\
    ( (This)->lpVtbl -> OnDeactivate(This,pRoom) ) 

#define IMultimediaExemplar_TransportTo(This,pThing)	\
    ( (This)->lpVtbl -> TransportTo(This,pThing) ) 

#define IMultimediaExemplar_OnIntersectee(This,pIntersector,fX,fY,fZ,iEdgeCycIndex,iEdgeIndex,bTransition)	\
    ( (This)->lpVtbl -> OnIntersectee(This,pIntersector,fX,fY,fZ,iEdgeCycIndex,iEdgeIndex,bTransition) ) 

#define IMultimediaExemplar_OnLightTypeChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnLightTypeChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnLightColorChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnLightColorChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnLightUmbraChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnLightUmbraChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnLightPenumbraChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnLightPenumbraChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnLightRangeChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnLightRangeChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnLightEnabledChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnLightEnabledChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnLightAttenuationChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnLightAttenuationChanged(This,lHint,varHintData) ) 

#define IMultimediaExemplar_OnLightLoadGeometry(This,pNewFrame)	\
    ( (This)->lpVtbl -> OnLightLoadGeometry(This,pNewFrame) ) 

#define IMultimediaExemplar_ActorInitialize(This)	\
    ( (This)->lpVtbl -> ActorInitialize(This) ) 

#define IMultimediaExemplar_ActorSetJointRotation(This,bstrJointName,angle)	\
    ( (This)->lpVtbl -> ActorSetJointRotation(This,bstrJointName,angle) ) 

#define IMultimediaExemplar_ActorPlayAnimation(This,bstrAnimFile)	\
    ( (This)->lpVtbl -> ActorPlayAnimation(This,bstrAnimFile) ) 

#define IMultimediaExemplar_ActorPlayAllAnimations(This)	\
    ( (This)->lpVtbl -> ActorPlayAllAnimations(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMultimediaExemplar_ActorPlayAllAnimations_Proxy( 
    IMultimediaExemplar * This);


void __RPC_STUB IMultimediaExemplar_ActorPlayAllAnimations_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMultimediaExemplar_INTERFACE_DEFINED__ */


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


