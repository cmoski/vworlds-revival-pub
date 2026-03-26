

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/spritemn.idl:
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

#ifndef __spritemn_h__
#define __spritemn_h__

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

#ifndef __ISpriteManager_FWD_DEFINED__
#define __ISpriteManager_FWD_DEFINED__
typedef interface ISpriteManager ISpriteManager;

#endif 	/* __ISpriteManager_FWD_DEFINED__ */


#ifndef __SpriteManagerObject_FWD_DEFINED__
#define __SpriteManagerObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class SpriteManagerObject SpriteManagerObject;
#else
typedef struct SpriteManagerObject SpriteManagerObject;
#endif /* __cplusplus */

#endif 	/* __SpriteManagerObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "d2d.h"
#include "vwobject.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISpriteManager_INTERFACE_DEFINED__
#define __ISpriteManager_INTERFACE_DEFINED__

/* interface ISpriteManager */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISpriteManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70D07E0D-64C2-11D1-9888-006097C9A0E1")
    ISpriteManager : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReadSpriteFile( 
            /* [in] */ BSTR bstrSpriteFile,
            /* [retval][out] */ BSTR *pbstrError) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSpriteFileData( 
            /* [in] */ IDirect2DRMImage *pSpriteImage,
            /* [in] */ DWORD dwFrames) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CalcCurrentGestureFrame( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetImageFrame( 
            /* [in] */ float fAngle,
            /* [out] */ int *piImageFrame,
            /* [out] */ VARIANT_BOOL *pbShowAccessories) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentGesture( 
            /* [in] */ int iGesture) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentGesture( 
            /* [retval][out] */ int *piGesture) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ImageFile( 
            /* [retval][out] */ BSTR *pbstrImageFile) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NamedGesture( 
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ int *pGestureNum) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GestureText( 
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNamedGestures( 
            /* [in] */ IPropertyList *pGestureNameList) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ThumbNailImage( 
            /* [retval][out] */ BSTR *bstrThumbNailImage) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ThumbNailImage( 
            /* [in] */ BSTR bstrThumbNailImage) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ImageFile( 
            /* [in] */ BSTR bstrImageFile) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ImageFilePath( 
            /* [retval][out] */ BSTR *pbstrImageFile) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SprFilePath( 
            /* [retval][out] */ BSTR *pbstrImageFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteSpriteFile( 
            /* [in] */ BSTR bstrSpriteFile,
            /* [retval][out] */ BSTR *pbstrError) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CountGestureTables( 
            /* [retval][out] */ long *plNumGestures) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddGestureTable( 
            /* [retval][out] */ long *plNumGestures) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteGestureTable( 
            /* [in] */ long lWhichGesture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GestureTableDuration( 
            /* [in] */ long lWhichGesture,
            /* [retval][out] */ long *plDuration) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NextGestureTable( 
            /* [in] */ long lWhichGesture,
            /* [retval][out] */ long *plDuration) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NextGestureTable( 
            /* [in] */ long lWhichGesture,
            /* [in] */ long nNewValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CountGestureFrames( 
            /* [in] */ long lWhichGesture,
            /* [retval][out] */ long *plNumFrames) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddGestureFrame( 
            /* [in] */ long lWhichGesture,
            /* [retval][out] */ long *plNewFrame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteGestureFrame( 
            /* [in] */ long lWhichState,
            /* [in] */ long lWhichFrame) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GestureFrameDuration( 
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [retval][out] */ long *plDuration) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GestureFrameDuration( 
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [in] */ long nNewValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GestureFrameImage( 
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [retval][out] */ long *plImage) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GestureFrameImage( 
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [in] */ long nNewValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GestureFrameChance( 
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [retval][out] */ long *plChance) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GestureFrameChance( 
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [in] */ long nNewValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CountImageTables( 
            /* [retval][out] */ long *plNumImages) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddImageTable( 
            /* [retval][out] */ long *plNewTable) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteImageTable( 
            /* [in] */ long lWhichTable) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddImageEntry( 
            /* [in] */ long lWhichTable,
            /* [retval][out] */ long *plNewEntry) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteImageEntry( 
            /* [in] */ long lWhichTable,
            long lWhichImage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CountImageEntries( 
            /* [in] */ long lWhichTable,
            /* [retval][out] */ long *plNumEntries) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_ImageEntryStartAngle( 
            /* [in] */ long lWhichTable,
            long lWhichEntry,
            /* [retval][out] */ long *plStartAngle) = 0;
        
        virtual /* [propput][helpstring] */ HRESULT STDMETHODCALLTYPE put_ImageEntryStartAngle( 
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [in] */ long nNewValue) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_ImageEntryEndAngle( 
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [retval][out] */ long *plEndAngle) = 0;
        
        virtual /* [propput][helpstring] */ HRESULT STDMETHODCALLTYPE put_ImageEntryEndAngle( 
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [in] */ long nNewValue) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_ImageEntryBitmapIndex( 
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [retval][out] */ long *plIndex) = 0;
        
        virtual /* [propput][helpstring] */ HRESULT STDMETHODCALLTYPE put_ImageEntryBitmapIndex( 
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [in] */ long nNewValue) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_ImageEntryShowAcc( 
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [retval][out] */ VARIANT_BOOL *pbShow) = 0;
        
        virtual /* [propput][helpstring] */ HRESULT STDMETHODCALLTYPE put_ImageEntryShowAcc( 
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [in] */ VARIANT_BOOL bNewValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpriteManagerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpriteManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpriteManager * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpriteManager * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpriteManager * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpriteManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpriteManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpriteManager * This,
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
        
        DECLSPEC_XFGVIRT(ISpriteManager, ReadSpriteFile)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadSpriteFile )( 
            ISpriteManager * This,
            /* [in] */ BSTR bstrSpriteFile,
            /* [retval][out] */ BSTR *pbstrError);
        
        DECLSPEC_XFGVIRT(ISpriteManager, CreateSpriteFileData)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSpriteFileData )( 
            ISpriteManager * This,
            /* [in] */ IDirect2DRMImage *pSpriteImage,
            /* [in] */ DWORD dwFrames);
        
        DECLSPEC_XFGVIRT(ISpriteManager, CalcCurrentGestureFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CalcCurrentGestureFrame )( 
            ISpriteManager * This);
        
        DECLSPEC_XFGVIRT(ISpriteManager, GetImageFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetImageFrame )( 
            ISpriteManager * This,
            /* [in] */ float fAngle,
            /* [out] */ int *piImageFrame,
            /* [out] */ VARIANT_BOOL *pbShowAccessories);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_CurrentGesture)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentGesture )( 
            ISpriteManager * This,
            /* [in] */ int iGesture);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_CurrentGesture)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentGesture )( 
            ISpriteManager * This,
            /* [retval][out] */ int *piGesture);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_ImageFile)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFile )( 
            ISpriteManager * This,
            /* [retval][out] */ BSTR *pbstrImageFile);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_NamedGesture)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NamedGesture )( 
            ISpriteManager * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ int *pGestureNum);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_GestureText)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GestureText )( 
            ISpriteManager * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText);
        
        DECLSPEC_XFGVIRT(ISpriteManager, GetNamedGestures)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedGestures )( 
            ISpriteManager * This,
            /* [in] */ IPropertyList *pGestureNameList);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_ThumbNailImage)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThumbNailImage )( 
            ISpriteManager * This,
            /* [retval][out] */ BSTR *bstrThumbNailImage);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_ThumbNailImage)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ThumbNailImage )( 
            ISpriteManager * This,
            /* [in] */ BSTR bstrThumbNailImage);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_ImageFile)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ImageFile )( 
            ISpriteManager * This,
            /* [in] */ BSTR bstrImageFile);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_ImageFilePath)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFilePath )( 
            ISpriteManager * This,
            /* [retval][out] */ BSTR *pbstrImageFile);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_SprFilePath)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SprFilePath )( 
            ISpriteManager * This,
            /* [retval][out] */ BSTR *pbstrImageFile);
        
        DECLSPEC_XFGVIRT(ISpriteManager, WriteSpriteFile)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteSpriteFile )( 
            ISpriteManager * This,
            /* [in] */ BSTR bstrSpriteFile,
            /* [retval][out] */ BSTR *pbstrError);
        
        DECLSPEC_XFGVIRT(ISpriteManager, CountGestureTables)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CountGestureTables )( 
            ISpriteManager * This,
            /* [retval][out] */ long *plNumGestures);
        
        DECLSPEC_XFGVIRT(ISpriteManager, AddGestureTable)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddGestureTable )( 
            ISpriteManager * This,
            /* [retval][out] */ long *plNumGestures);
        
        DECLSPEC_XFGVIRT(ISpriteManager, DeleteGestureTable)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteGestureTable )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture);
        
        DECLSPEC_XFGVIRT(ISpriteManager, GestureTableDuration)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GestureTableDuration )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [retval][out] */ long *plDuration);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_NextGestureTable)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NextGestureTable )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [retval][out] */ long *plDuration);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_NextGestureTable)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NextGestureTable )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [in] */ long nNewValue);
        
        DECLSPEC_XFGVIRT(ISpriteManager, CountGestureFrames)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CountGestureFrames )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [retval][out] */ long *plNumFrames);
        
        DECLSPEC_XFGVIRT(ISpriteManager, AddGestureFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddGestureFrame )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [retval][out] */ long *plNewFrame);
        
        DECLSPEC_XFGVIRT(ISpriteManager, DeleteGestureFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteGestureFrame )( 
            ISpriteManager * This,
            /* [in] */ long lWhichState,
            /* [in] */ long lWhichFrame);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_GestureFrameDuration)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GestureFrameDuration )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [retval][out] */ long *plDuration);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_GestureFrameDuration)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GestureFrameDuration )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [in] */ long nNewValue);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_GestureFrameImage)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GestureFrameImage )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [retval][out] */ long *plImage);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_GestureFrameImage)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GestureFrameImage )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [in] */ long nNewValue);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_GestureFrameChance)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GestureFrameChance )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [retval][out] */ long *plChance);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_GestureFrameChance)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GestureFrameChance )( 
            ISpriteManager * This,
            /* [in] */ long lWhichGesture,
            /* [in] */ long lWhichFrame,
            /* [in] */ long nNewValue);
        
        DECLSPEC_XFGVIRT(ISpriteManager, CountImageTables)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CountImageTables )( 
            ISpriteManager * This,
            /* [retval][out] */ long *plNumImages);
        
        DECLSPEC_XFGVIRT(ISpriteManager, AddImageTable)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddImageTable )( 
            ISpriteManager * This,
            /* [retval][out] */ long *plNewTable);
        
        DECLSPEC_XFGVIRT(ISpriteManager, DeleteImageTable)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteImageTable )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable);
        
        DECLSPEC_XFGVIRT(ISpriteManager, AddImageEntry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddImageEntry )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            /* [retval][out] */ long *plNewEntry);
        
        DECLSPEC_XFGVIRT(ISpriteManager, DeleteImageEntry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteImageEntry )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            long lWhichImage);
        
        DECLSPEC_XFGVIRT(ISpriteManager, CountImageEntries)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CountImageEntries )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            /* [retval][out] */ long *plNumEntries);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_ImageEntryStartAngle)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_ImageEntryStartAngle )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            long lWhichEntry,
            /* [retval][out] */ long *plStartAngle);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_ImageEntryStartAngle)
        /* [propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_ImageEntryStartAngle )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [in] */ long nNewValue);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_ImageEntryEndAngle)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_ImageEntryEndAngle )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [retval][out] */ long *plEndAngle);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_ImageEntryEndAngle)
        /* [propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_ImageEntryEndAngle )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [in] */ long nNewValue);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_ImageEntryBitmapIndex)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_ImageEntryBitmapIndex )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [retval][out] */ long *plIndex);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_ImageEntryBitmapIndex)
        /* [propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_ImageEntryBitmapIndex )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [in] */ long nNewValue);
        
        DECLSPEC_XFGVIRT(ISpriteManager, get_ImageEntryShowAcc)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_ImageEntryShowAcc )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [retval][out] */ VARIANT_BOOL *pbShow);
        
        DECLSPEC_XFGVIRT(ISpriteManager, put_ImageEntryShowAcc)
        /* [propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_ImageEntryShowAcc )( 
            ISpriteManager * This,
            /* [in] */ long lWhichTable,
            /* [in] */ long lWhichEntry,
            /* [in] */ VARIANT_BOOL bNewValue);
        
        END_INTERFACE
    } ISpriteManagerVtbl;

    interface ISpriteManager
    {
        CONST_VTBL struct ISpriteManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpriteManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpriteManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpriteManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpriteManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpriteManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpriteManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpriteManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpriteManager_ReadSpriteFile(This,bstrSpriteFile,pbstrError)	\
    ( (This)->lpVtbl -> ReadSpriteFile(This,bstrSpriteFile,pbstrError) ) 

#define ISpriteManager_CreateSpriteFileData(This,pSpriteImage,dwFrames)	\
    ( (This)->lpVtbl -> CreateSpriteFileData(This,pSpriteImage,dwFrames) ) 

#define ISpriteManager_CalcCurrentGestureFrame(This)	\
    ( (This)->lpVtbl -> CalcCurrentGestureFrame(This) ) 

#define ISpriteManager_GetImageFrame(This,fAngle,piImageFrame,pbShowAccessories)	\
    ( (This)->lpVtbl -> GetImageFrame(This,fAngle,piImageFrame,pbShowAccessories) ) 

#define ISpriteManager_put_CurrentGesture(This,iGesture)	\
    ( (This)->lpVtbl -> put_CurrentGesture(This,iGesture) ) 

#define ISpriteManager_get_CurrentGesture(This,piGesture)	\
    ( (This)->lpVtbl -> get_CurrentGesture(This,piGesture) ) 

#define ISpriteManager_get_ImageFile(This,pbstrImageFile)	\
    ( (This)->lpVtbl -> get_ImageFile(This,pbstrImageFile) ) 

#define ISpriteManager_get_NamedGesture(This,bstrGesture,pGestureNum)	\
    ( (This)->lpVtbl -> get_NamedGesture(This,bstrGesture,pGestureNum) ) 

#define ISpriteManager_get_GestureText(This,bstrGesture,pbstrText)	\
    ( (This)->lpVtbl -> get_GestureText(This,bstrGesture,pbstrText) ) 

#define ISpriteManager_GetNamedGestures(This,pGestureNameList)	\
    ( (This)->lpVtbl -> GetNamedGestures(This,pGestureNameList) ) 

#define ISpriteManager_get_ThumbNailImage(This,bstrThumbNailImage)	\
    ( (This)->lpVtbl -> get_ThumbNailImage(This,bstrThumbNailImage) ) 

#define ISpriteManager_put_ThumbNailImage(This,bstrThumbNailImage)	\
    ( (This)->lpVtbl -> put_ThumbNailImage(This,bstrThumbNailImage) ) 

#define ISpriteManager_put_ImageFile(This,bstrImageFile)	\
    ( (This)->lpVtbl -> put_ImageFile(This,bstrImageFile) ) 

#define ISpriteManager_get_ImageFilePath(This,pbstrImageFile)	\
    ( (This)->lpVtbl -> get_ImageFilePath(This,pbstrImageFile) ) 

#define ISpriteManager_get_SprFilePath(This,pbstrImageFile)	\
    ( (This)->lpVtbl -> get_SprFilePath(This,pbstrImageFile) ) 

#define ISpriteManager_WriteSpriteFile(This,bstrSpriteFile,pbstrError)	\
    ( (This)->lpVtbl -> WriteSpriteFile(This,bstrSpriteFile,pbstrError) ) 

#define ISpriteManager_CountGestureTables(This,plNumGestures)	\
    ( (This)->lpVtbl -> CountGestureTables(This,plNumGestures) ) 

#define ISpriteManager_AddGestureTable(This,plNumGestures)	\
    ( (This)->lpVtbl -> AddGestureTable(This,plNumGestures) ) 

#define ISpriteManager_DeleteGestureTable(This,lWhichGesture)	\
    ( (This)->lpVtbl -> DeleteGestureTable(This,lWhichGesture) ) 

#define ISpriteManager_GestureTableDuration(This,lWhichGesture,plDuration)	\
    ( (This)->lpVtbl -> GestureTableDuration(This,lWhichGesture,plDuration) ) 

#define ISpriteManager_get_NextGestureTable(This,lWhichGesture,plDuration)	\
    ( (This)->lpVtbl -> get_NextGestureTable(This,lWhichGesture,plDuration) ) 

#define ISpriteManager_put_NextGestureTable(This,lWhichGesture,nNewValue)	\
    ( (This)->lpVtbl -> put_NextGestureTable(This,lWhichGesture,nNewValue) ) 

#define ISpriteManager_CountGestureFrames(This,lWhichGesture,plNumFrames)	\
    ( (This)->lpVtbl -> CountGestureFrames(This,lWhichGesture,plNumFrames) ) 

#define ISpriteManager_AddGestureFrame(This,lWhichGesture,plNewFrame)	\
    ( (This)->lpVtbl -> AddGestureFrame(This,lWhichGesture,plNewFrame) ) 

#define ISpriteManager_DeleteGestureFrame(This,lWhichState,lWhichFrame)	\
    ( (This)->lpVtbl -> DeleteGestureFrame(This,lWhichState,lWhichFrame) ) 

#define ISpriteManager_get_GestureFrameDuration(This,lWhichGesture,lWhichFrame,plDuration)	\
    ( (This)->lpVtbl -> get_GestureFrameDuration(This,lWhichGesture,lWhichFrame,plDuration) ) 

#define ISpriteManager_put_GestureFrameDuration(This,lWhichGesture,lWhichFrame,nNewValue)	\
    ( (This)->lpVtbl -> put_GestureFrameDuration(This,lWhichGesture,lWhichFrame,nNewValue) ) 

#define ISpriteManager_get_GestureFrameImage(This,lWhichGesture,lWhichFrame,plImage)	\
    ( (This)->lpVtbl -> get_GestureFrameImage(This,lWhichGesture,lWhichFrame,plImage) ) 

#define ISpriteManager_put_GestureFrameImage(This,lWhichGesture,lWhichFrame,nNewValue)	\
    ( (This)->lpVtbl -> put_GestureFrameImage(This,lWhichGesture,lWhichFrame,nNewValue) ) 

#define ISpriteManager_get_GestureFrameChance(This,lWhichGesture,lWhichFrame,plChance)	\
    ( (This)->lpVtbl -> get_GestureFrameChance(This,lWhichGesture,lWhichFrame,plChance) ) 

#define ISpriteManager_put_GestureFrameChance(This,lWhichGesture,lWhichFrame,nNewValue)	\
    ( (This)->lpVtbl -> put_GestureFrameChance(This,lWhichGesture,lWhichFrame,nNewValue) ) 

#define ISpriteManager_CountImageTables(This,plNumImages)	\
    ( (This)->lpVtbl -> CountImageTables(This,plNumImages) ) 

#define ISpriteManager_AddImageTable(This,plNewTable)	\
    ( (This)->lpVtbl -> AddImageTable(This,plNewTable) ) 

#define ISpriteManager_DeleteImageTable(This,lWhichTable)	\
    ( (This)->lpVtbl -> DeleteImageTable(This,lWhichTable) ) 

#define ISpriteManager_AddImageEntry(This,lWhichTable,plNewEntry)	\
    ( (This)->lpVtbl -> AddImageEntry(This,lWhichTable,plNewEntry) ) 

#define ISpriteManager_DeleteImageEntry(This,lWhichTable,lWhichImage)	\
    ( (This)->lpVtbl -> DeleteImageEntry(This,lWhichTable,lWhichImage) ) 

#define ISpriteManager_CountImageEntries(This,lWhichTable,plNumEntries)	\
    ( (This)->lpVtbl -> CountImageEntries(This,lWhichTable,plNumEntries) ) 

#define ISpriteManager_get_ImageEntryStartAngle(This,lWhichTable,lWhichEntry,plStartAngle)	\
    ( (This)->lpVtbl -> get_ImageEntryStartAngle(This,lWhichTable,lWhichEntry,plStartAngle) ) 

#define ISpriteManager_put_ImageEntryStartAngle(This,lWhichTable,lWhichEntry,nNewValue)	\
    ( (This)->lpVtbl -> put_ImageEntryStartAngle(This,lWhichTable,lWhichEntry,nNewValue) ) 

#define ISpriteManager_get_ImageEntryEndAngle(This,lWhichTable,lWhichEntry,plEndAngle)	\
    ( (This)->lpVtbl -> get_ImageEntryEndAngle(This,lWhichTable,lWhichEntry,plEndAngle) ) 

#define ISpriteManager_put_ImageEntryEndAngle(This,lWhichTable,lWhichEntry,nNewValue)	\
    ( (This)->lpVtbl -> put_ImageEntryEndAngle(This,lWhichTable,lWhichEntry,nNewValue) ) 

#define ISpriteManager_get_ImageEntryBitmapIndex(This,lWhichTable,lWhichEntry,plIndex)	\
    ( (This)->lpVtbl -> get_ImageEntryBitmapIndex(This,lWhichTable,lWhichEntry,plIndex) ) 

#define ISpriteManager_put_ImageEntryBitmapIndex(This,lWhichTable,lWhichEntry,nNewValue)	\
    ( (This)->lpVtbl -> put_ImageEntryBitmapIndex(This,lWhichTable,lWhichEntry,nNewValue) ) 

#define ISpriteManager_get_ImageEntryShowAcc(This,lWhichTable,lWhichEntry,pbShow)	\
    ( (This)->lpVtbl -> get_ImageEntryShowAcc(This,lWhichTable,lWhichEntry,pbShow) ) 

#define ISpriteManager_put_ImageEntryShowAcc(This,lWhichTable,lWhichEntry,bNewValue)	\
    ( (This)->lpVtbl -> put_ImageEntryShowAcc(This,lWhichTable,lWhichEntry,bNewValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpriteManager_INTERFACE_DEFINED__ */



#ifndef __SPRITEMNLib_LIBRARY_DEFINED__
#define __SPRITEMNLib_LIBRARY_DEFINED__

/* library SPRITEMNLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SPRITEMNLib;

EXTERN_C const CLSID CLSID_SpriteManagerObject;

#ifdef __cplusplus

class DECLSPEC_UUID("70D07E0E-64C2-11D1-9888-006097C9A0E1")
SpriteManagerObject;
#endif
#endif /* __SPRITEMNLib_LIBRARY_DEFINED__ */

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


