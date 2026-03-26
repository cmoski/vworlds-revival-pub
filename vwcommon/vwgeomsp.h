

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwgeomsp.idl:
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

#ifndef __vwgeomsp_h__
#define __vwgeomsp_h__

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

#ifndef __IVWGeometrySprite_FWD_DEFINED__
#define __IVWGeometrySprite_FWD_DEFINED__
typedef interface IVWGeometrySprite IVWGeometrySprite;

#endif 	/* __IVWGeometrySprite_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwgeom.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwgeomsp_0000_0000 */
/* [local] */ 

#ifndef __d2d_h__
typedef IDispatch *LPDIRECT2DRMFRAME;

#endif
#define	DISPID_GEOMETRYSPRITE_THUMBNAILNAME	( 202 )

#define	DISPID_GEOMETRYSPRITE_RELOADIMAGE	( 203 )

#define	DISPID_GEOMETRYSPRITE_ROTATIONAXIS	( 204 )

#define AXIS_NONE 0
#define AXIS_X 1
#define AXIS_Y 2
#define AXIS_Z 4
#define AXIS_ALL 7


extern RPC_IF_HANDLE __MIDL_itf_vwgeomsp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwgeomsp_0000_0000_v0_0_s_ifspec;

#ifndef __IVWGeometrySprite_INTERFACE_DEFINED__
#define __IVWGeometrySprite_INTERFACE_DEFINED__

/* interface IVWGeometrySprite */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWGeometrySprite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("90CB1800-93E4-11d0-89AA-00A0C9054129")
    IVWGeometrySprite : public IVWGeometry
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ImageFileName( 
            /* [retval][out] */ BSTR *pbstrImageFileName) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ThumbnailName( 
            /* [retval][out] */ BSTR *pbstrThumbnailName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DownloadFullImage( void) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE ReloadImage( void) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RotationAxis( 
            /* [in] */ int iAxis) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RotationAxis( 
            /* [retval][out] */ int *piAxis) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AccessoryScene( 
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddAccessory( 
            /* [in] */ BSTR bstrImageFileName,
            /* [in] */ long lID,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAccessory( 
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnAccessoriesChanged( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AccessoryIDFromFrame( 
            /* [in] */ LPDIRECT2DRMFRAME pFrame,
            /* [retval][out] */ long *plID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AccessoryFrameFromID( 
            /* [in] */ long lID,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppFrame) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWGeometrySpriteVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWGeometrySprite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWGeometrySprite * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWGeometrySprite * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWGeometrySprite * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWGeometrySprite * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWGeometrySprite * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWGeometrySprite * This,
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
            IVWGeometrySprite * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IVWGeometrySprite * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IVWGeometrySprite * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IVWGeometrySprite * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IVWGeometrySprite * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IVWGeometrySprite * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IVWGeometrySprite * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IVWGeometrySprite * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVWGeometrySprite * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IVWGeometrySprite * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IVWGeometrySprite * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IVWGeometrySprite * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_GeometryName)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GeometryName )( 
            IVWGeometrySprite * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_GeometryName)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GeometryName )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_GestureText)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GestureText )( 
            IVWGeometrySprite * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_NamedGesture)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NamedGesture )( 
            IVWGeometrySprite * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ int *pGestureNum);
        
        DECLSPEC_XFGVIRT(IVWGeometry, ComposeGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ComposeGeometry )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ IVWFrame **ppvwf);
        
        DECLSPEC_XFGVIRT(IVWGeometry, ReleaseGeometry)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReleaseGeometry )( 
            IVWGeometrySprite * This);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_Frame)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frame )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ IVWFrame **ppVWFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_Frame)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frame )( 
            IVWGeometrySprite * This,
            /* [in] */ IVWFrame *pVWFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_GeometryFrame)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GeometryFrame )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ IVWFrame **ppVWFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_Occluded)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Occluded )( 
            IVWGeometrySprite * This,
            VARIANT_BOOL bOccluded);
        
        DECLSPEC_XFGVIRT(IVWGeometry, GetNamedGestures)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedGestures )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ IPropertyList **ppGestureNameList);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_CurrentGesture)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentGesture )( 
            IVWGeometrySprite * This,
            /* [in] */ int iGesture);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_CurrentGesture)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentGesture )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ int *piGesture);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, get_ImageFileName)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFileName )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ BSTR *pbstrImageFileName);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, get_ThumbnailName)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThumbnailName )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ BSTR *pbstrThumbnailName);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, DownloadFullImage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DownloadFullImage )( 
            IVWGeometrySprite * This);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, ReloadImage)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReloadImage )( 
            IVWGeometrySprite * This);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, put_RotationAxis)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RotationAxis )( 
            IVWGeometrySprite * This,
            /* [in] */ int iAxis);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, get_RotationAxis)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RotationAxis )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ int *piAxis);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, get_AccessoryScene)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccessoryScene )( 
            IVWGeometrySprite * This,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, AddAccessory)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAccessory )( 
            IVWGeometrySprite * This,
            /* [in] */ BSTR bstrImageFileName,
            /* [in] */ long lID,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, RemoveAccessory)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAccessory )( 
            IVWGeometrySprite * This,
            /* [in] */ long lID);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, OnAccessoriesChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnAccessoriesChanged )( 
            IVWGeometrySprite * This);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, AccessoryIDFromFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AccessoryIDFromFrame )( 
            IVWGeometrySprite * This,
            /* [in] */ LPDIRECT2DRMFRAME pFrame,
            /* [retval][out] */ long *plID);
        
        DECLSPEC_XFGVIRT(IVWGeometrySprite, AccessoryFrameFromID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AccessoryFrameFromID )( 
            IVWGeometrySprite * This,
            /* [in] */ long lID,
            /* [retval][out] */ LPDIRECT2DRMFRAME *ppFrame);
        
        END_INTERFACE
    } IVWGeometrySpriteVtbl;

    interface IVWGeometrySprite
    {
        CONST_VTBL struct IVWGeometrySpriteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWGeometrySprite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWGeometrySprite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWGeometrySprite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWGeometrySprite_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWGeometrySprite_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWGeometrySprite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWGeometrySprite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWGeometrySprite_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWGeometrySprite_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IVWGeometrySprite_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IVWGeometrySprite_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IVWGeometrySprite_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IVWGeometrySprite_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IVWGeometrySprite_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IVWGeometrySprite_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IVWGeometrySprite_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IVWGeometrySprite_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IVWGeometrySprite_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IVWGeometrySprite_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IVWGeometrySprite_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IVWGeometrySprite_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IVWGeometrySprite_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IVWGeometrySprite_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IVWGeometrySprite_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IVWGeometrySprite_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IVWGeometrySprite_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IVWGeometrySprite_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IVWGeometrySprite_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IVWGeometrySprite_put_GeometryName(This,bstr)	\
    ( (This)->lpVtbl -> put_GeometryName(This,bstr) ) 

#define IVWGeometrySprite_get_GeometryName(This,pbstr)	\
    ( (This)->lpVtbl -> get_GeometryName(This,pbstr) ) 

#define IVWGeometrySprite_get_GestureText(This,bstrGesture,pbstrText)	\
    ( (This)->lpVtbl -> get_GestureText(This,bstrGesture,pbstrText) ) 

#define IVWGeometrySprite_get_NamedGesture(This,bstrGesture,pGestureNum)	\
    ( (This)->lpVtbl -> get_NamedGesture(This,bstrGesture,pGestureNum) ) 

#define IVWGeometrySprite_ComposeGeometry(This,ppvwf)	\
    ( (This)->lpVtbl -> ComposeGeometry(This,ppvwf) ) 

#define IVWGeometrySprite_ReleaseGeometry(This)	\
    ( (This)->lpVtbl -> ReleaseGeometry(This) ) 

#define IVWGeometrySprite_get_Frame(This,ppVWFrame)	\
    ( (This)->lpVtbl -> get_Frame(This,ppVWFrame) ) 

#define IVWGeometrySprite_put_Frame(This,pVWFrame)	\
    ( (This)->lpVtbl -> put_Frame(This,pVWFrame) ) 

#define IVWGeometrySprite_get_GeometryFrame(This,ppVWFrame)	\
    ( (This)->lpVtbl -> get_GeometryFrame(This,ppVWFrame) ) 

#define IVWGeometrySprite_put_Occluded(This,bOccluded)	\
    ( (This)->lpVtbl -> put_Occluded(This,bOccluded) ) 

#define IVWGeometrySprite_GetNamedGestures(This,ppGestureNameList)	\
    ( (This)->lpVtbl -> GetNamedGestures(This,ppGestureNameList) ) 

#define IVWGeometrySprite_put_CurrentGesture(This,iGesture)	\
    ( (This)->lpVtbl -> put_CurrentGesture(This,iGesture) ) 

#define IVWGeometrySprite_get_CurrentGesture(This,piGesture)	\
    ( (This)->lpVtbl -> get_CurrentGesture(This,piGesture) ) 


#define IVWGeometrySprite_get_ImageFileName(This,pbstrImageFileName)	\
    ( (This)->lpVtbl -> get_ImageFileName(This,pbstrImageFileName) ) 

#define IVWGeometrySprite_get_ThumbnailName(This,pbstrThumbnailName)	\
    ( (This)->lpVtbl -> get_ThumbnailName(This,pbstrThumbnailName) ) 

#define IVWGeometrySprite_DownloadFullImage(This)	\
    ( (This)->lpVtbl -> DownloadFullImage(This) ) 

#define IVWGeometrySprite_ReloadImage(This)	\
    ( (This)->lpVtbl -> ReloadImage(This) ) 

#define IVWGeometrySprite_put_RotationAxis(This,iAxis)	\
    ( (This)->lpVtbl -> put_RotationAxis(This,iAxis) ) 

#define IVWGeometrySprite_get_RotationAxis(This,piAxis)	\
    ( (This)->lpVtbl -> get_RotationAxis(This,piAxis) ) 

#define IVWGeometrySprite_get_AccessoryScene(This,ppFrame)	\
    ( (This)->lpVtbl -> get_AccessoryScene(This,ppFrame) ) 

#define IVWGeometrySprite_AddAccessory(This,bstrImageFileName,lID,fPosX,fPosY)	\
    ( (This)->lpVtbl -> AddAccessory(This,bstrImageFileName,lID,fPosX,fPosY) ) 

#define IVWGeometrySprite_RemoveAccessory(This,lID)	\
    ( (This)->lpVtbl -> RemoveAccessory(This,lID) ) 

#define IVWGeometrySprite_OnAccessoriesChanged(This)	\
    ( (This)->lpVtbl -> OnAccessoriesChanged(This) ) 

#define IVWGeometrySprite_AccessoryIDFromFrame(This,pFrame,plID)	\
    ( (This)->lpVtbl -> AccessoryIDFromFrame(This,pFrame,plID) ) 

#define IVWGeometrySprite_AccessoryFrameFromID(This,lID,ppFrame)	\
    ( (This)->lpVtbl -> AccessoryFrameFromID(This,lID,ppFrame) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWGeometrySprite_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


