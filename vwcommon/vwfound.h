

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwfound.idl:
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

#ifndef __vwfound_h__
#define __vwfound_h__

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

#ifndef __IFoundationExemplars_FWD_DEFINED__
#define __IFoundationExemplars_FWD_DEFINED__
typedef interface IFoundationExemplars IFoundationExemplars;

#endif 	/* __IFoundationExemplars_FWD_DEFINED__ */


#ifndef __FoundationExemplars_FWD_DEFINED__
#define __FoundationExemplars_FWD_DEFINED__

#ifdef __cplusplus
typedef class FoundationExemplars FoundationExemplars;
#else
typedef struct FoundationExemplars FoundationExemplars;
#endif /* __cplusplus */

#endif 	/* __FoundationExemplars_FWD_DEFINED__ */


#ifndef __VWTransactionItem_FWD_DEFINED__
#define __VWTransactionItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWTransactionItem VWTransactionItem;
#else
typedef struct VWTransactionItem VWTransactionItem;
#endif /* __cplusplus */

#endif 	/* __VWTransactionItem_FWD_DEFINED__ */


/* header files for imported files */
#include "vwobject.h"
#include "vwgcache.h"
#include "menuitem.h"
#include "tranitem.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwfound_0000_0000 */
/* [local] */ 

#define VWFOUND_E_AVATARIGNOREDENIED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0f10)


extern RPC_IF_HANDLE __MIDL_itf_vwfound_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwfound_0000_0000_v0_0_s_ifspec;

#ifndef __IFoundationExemplars_INTERFACE_DEFINED__
#define __IFoundationExemplars_INTERFACE_DEFINED__

/* interface IFoundationExemplars */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFoundationExemplars;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A46AFE21-784B-11d0-A00E-00A024A85A2C")
    IFoundationExemplars : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateTransactionItem( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [in] */ BSTR bstrGraphic,
            /* [in] */ BSTR bstrExemplarType,
            /* [retval][out] */ IVWTransactionItem **ppTransactionItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPortalIDs( 
            /* [in] */ long idRoom,
            /* [retval][out] */ IPropertyList **ppPortalList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetContainerID( 
            /* [in] */ long idObj,
            /* [retval][out] */ long *pidContainer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNamesFromIDs( 
            /* [in] */ VARIANT idOrList,
            /* [retval][out] */ IPropertyList **ppNameList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ThngInteractAt( 
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrSprFile,
            /* [in] */ BSTR bstrSoundURL,
            /* [in] */ BSTR bstrVerb) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ThngOnApproachDone( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ThngStartInteractSprite( 
            /* [in] */ BSTR bstrSprFile,
            /* [in] */ BSTR bstrSoundURL,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ThngMonitorInteractSprite( 
            /* [in] */ IThing *pInteractSprite,
            /* [in] */ DWORD dwTimeStarted) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ThngOnDropFile( 
            /* [in] */ long x,
            /* [in] */ long y,
            /* [in] */ BSTR bstrFilename,
            /* [retval][out] */ VARIANT_BOOL *pbHandled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaIgnoreAvatarMenu( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE AvaUpdateIgnore( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaUnIgnoreAvatar( 
            /* [in] */ IThing *pToUnIgnore) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaIgnoreAvatar( 
            /* [in] */ IThing *pToIgnore) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaBefriendAvatarMenu( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE AvaUpdateFriend( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaBefriendAvatar( 
            /* [in] */ IThing *pFriend) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaUnBefriendAvatar( 
            /* [in] */ IThing *pFriend) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaConfirmFriend( 
            /* [in] */ IThing *pOtherGuy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaFinalizeFriend( 
            /* [in] */ IThing *pNewFriend,
            /* [in] */ VARIANT_BOOL bFriend) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE AvaUpdateInteractions( 
            /* [in] */ IMenuItem *pMI) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaGetMenuItems( 
            /* [in] */ IThing *pPeer,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaGetPeerMenuItems( 
            /* [in] */ IThing *pPeer,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AvaOnPreComposeGeometry( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnLoadPainting( 
            /* [in] */ IVWFrame *pvwf) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnPaintingPropChanged( 
            long lHint,
            VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE RefreshPainting( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE PaintingUpdateMenu( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSelectPaintingCustomize( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnLoadSign( 
            /* [in] */ IVWFrame *pvwf) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSignPropChanged( 
            long lHint,
            VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE SetTextAttributes( 
            /* [in] */ VARIANT_BOOL bShadow,
            /* [in] */ short nWidth,
            /* [in] */ short nHeight,
            /* [in] */ short nPointSize) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE SignSetTextureFromText( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE RefreshSign( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE SignUpdateMenu( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSelectSignCustomize( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TMchOnCreate( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TMchSetCurrentIndex( 
            /* [in] */ short nIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TMchUpdateCurrentIndex( 
            /* [in] */ short nChangeAmt) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TMchOnCurrentIndexChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TMchGetCurrentItem( 
            /* [retval][out] */ IVWTransactionItem **pTransactionItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TMchCreateAndDispenseObject( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TMchPreviousButton_OnLButtonDown( 
            long hWnd,
            long x,
            long y) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TMchNextButton_OnLButtonDown( 
            long hWnd,
            long x,
            long y) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TMchSelectButton_OnLButtonDown( 
            long hWnd,
            long x,
            long y) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TMchDisplay_SetGraphic( 
            /* [in] */ BSTR bstrNewGraphicFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFoundationExemplarsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFoundationExemplars * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFoundationExemplars * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFoundationExemplars * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFoundationExemplars * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFoundationExemplars * This,
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
            IFoundationExemplars * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IFoundationExemplars * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, CreateTransactionItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTransactionItem )( 
            IFoundationExemplars * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrDescription,
            /* [in] */ BSTR bstrGraphic,
            /* [in] */ BSTR bstrExemplarType,
            /* [retval][out] */ IVWTransactionItem **ppTransactionItem);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, GetPortalIDs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPortalIDs )( 
            IFoundationExemplars * This,
            /* [in] */ long idRoom,
            /* [retval][out] */ IPropertyList **ppPortalList);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, GetContainerID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetContainerID )( 
            IFoundationExemplars * This,
            /* [in] */ long idObj,
            /* [retval][out] */ long *pidContainer);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, GetNamesFromIDs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamesFromIDs )( 
            IFoundationExemplars * This,
            /* [in] */ VARIANT idOrList,
            /* [retval][out] */ IPropertyList **ppNameList);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, ThngInteractAt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ThngInteractAt )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrSprFile,
            /* [in] */ BSTR bstrSoundURL,
            /* [in] */ BSTR bstrVerb);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, ThngOnApproachDone)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ThngOnApproachDone )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, ThngStartInteractSprite)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ThngStartInteractSprite )( 
            IFoundationExemplars * This,
            /* [in] */ BSTR bstrSprFile,
            /* [in] */ BSTR bstrSoundURL,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, ThngMonitorInteractSprite)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ThngMonitorInteractSprite )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pInteractSprite,
            /* [in] */ DWORD dwTimeStarted);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, ThngOnDropFile)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ThngOnDropFile )( 
            IFoundationExemplars * This,
            /* [in] */ long x,
            /* [in] */ long y,
            /* [in] */ BSTR bstrFilename,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaIgnoreAvatarMenu)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaIgnoreAvatarMenu )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaUpdateIgnore)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *AvaUpdateIgnore )( 
            IFoundationExemplars * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaUnIgnoreAvatar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaUnIgnoreAvatar )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pToUnIgnore);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaIgnoreAvatar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaIgnoreAvatar )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pToIgnore);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaBefriendAvatarMenu)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaBefriendAvatarMenu )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaUpdateFriend)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *AvaUpdateFriend )( 
            IFoundationExemplars * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaBefriendAvatar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaBefriendAvatar )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pFriend);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaUnBefriendAvatar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaUnBefriendAvatar )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pFriend);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaConfirmFriend)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaConfirmFriend )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pOtherGuy);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaFinalizeFriend)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaFinalizeFriend )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pNewFriend,
            /* [in] */ VARIANT_BOOL bFriend);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaUpdateInteractions)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *AvaUpdateInteractions )( 
            IFoundationExemplars * This,
            /* [in] */ IMenuItem *pMI);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaGetMenuItems)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaGetMenuItems )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pPeer,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaGetPeerMenuItems)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaGetPeerMenuItems )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pPeer,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, AvaOnPreComposeGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AvaOnPreComposeGeometry )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, OnLoadPainting)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnLoadPainting )( 
            IFoundationExemplars * This,
            /* [in] */ IVWFrame *pvwf);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, OnPaintingPropChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnPaintingPropChanged )( 
            IFoundationExemplars * This,
            long lHint,
            VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, RefreshPainting)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *RefreshPainting )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, PaintingUpdateMenu)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *PaintingUpdateMenu )( 
            IFoundationExemplars * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, OnSelectPaintingCustomize)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSelectPaintingCustomize )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, OnLoadSign)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnLoadSign )( 
            IFoundationExemplars * This,
            /* [in] */ IVWFrame *pvwf);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, OnSignPropChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSignPropChanged )( 
            IFoundationExemplars * This,
            long lHint,
            VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, SetTextAttributes)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *SetTextAttributes )( 
            IFoundationExemplars * This,
            /* [in] */ VARIANT_BOOL bShadow,
            /* [in] */ short nWidth,
            /* [in] */ short nHeight,
            /* [in] */ short nPointSize);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, SignSetTextureFromText)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *SignSetTextureFromText )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, RefreshSign)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *RefreshSign )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, SignUpdateMenu)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *SignUpdateMenu )( 
            IFoundationExemplars * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, OnSelectSignCustomize)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSelectSignCustomize )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchOnCreate)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TMchOnCreate )( 
            IFoundationExemplars * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchSetCurrentIndex)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TMchSetCurrentIndex )( 
            IFoundationExemplars * This,
            /* [in] */ short nIndex);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchUpdateCurrentIndex)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TMchUpdateCurrentIndex )( 
            IFoundationExemplars * This,
            /* [in] */ short nChangeAmt);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchOnCurrentIndexChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TMchOnCurrentIndexChanged )( 
            IFoundationExemplars * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchGetCurrentItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TMchGetCurrentItem )( 
            IFoundationExemplars * This,
            /* [retval][out] */ IVWTransactionItem **pTransactionItem);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchCreateAndDispenseObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TMchCreateAndDispenseObject )( 
            IFoundationExemplars * This);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchPreviousButton_OnLButtonDown)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TMchPreviousButton_OnLButtonDown )( 
            IFoundationExemplars * This,
            long hWnd,
            long x,
            long y);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchNextButton_OnLButtonDown)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TMchNextButton_OnLButtonDown )( 
            IFoundationExemplars * This,
            long hWnd,
            long x,
            long y);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchSelectButton_OnLButtonDown)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TMchSelectButton_OnLButtonDown )( 
            IFoundationExemplars * This,
            long hWnd,
            long x,
            long y);
        
        DECLSPEC_XFGVIRT(IFoundationExemplars, TMchDisplay_SetGraphic)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TMchDisplay_SetGraphic )( 
            IFoundationExemplars * This,
            /* [in] */ BSTR bstrNewGraphicFile);
        
        END_INTERFACE
    } IFoundationExemplarsVtbl;

    interface IFoundationExemplars
    {
        CONST_VTBL struct IFoundationExemplarsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFoundationExemplars_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFoundationExemplars_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFoundationExemplars_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFoundationExemplars_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFoundationExemplars_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFoundationExemplars_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFoundationExemplars_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFoundationExemplars_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IFoundationExemplars_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IFoundationExemplars_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IFoundationExemplars_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IFoundationExemplars_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IFoundationExemplars_CreateTransactionItem(This,bstrName,bstrDescription,bstrGraphic,bstrExemplarType,ppTransactionItem)	\
    ( (This)->lpVtbl -> CreateTransactionItem(This,bstrName,bstrDescription,bstrGraphic,bstrExemplarType,ppTransactionItem) ) 

#define IFoundationExemplars_GetPortalIDs(This,idRoom,ppPortalList)	\
    ( (This)->lpVtbl -> GetPortalIDs(This,idRoom,ppPortalList) ) 

#define IFoundationExemplars_GetContainerID(This,idObj,pidContainer)	\
    ( (This)->lpVtbl -> GetContainerID(This,idObj,pidContainer) ) 

#define IFoundationExemplars_GetNamesFromIDs(This,idOrList,ppNameList)	\
    ( (This)->lpVtbl -> GetNamesFromIDs(This,idOrList,ppNameList) ) 

#define IFoundationExemplars_ThngInteractAt(This,pThing,bstrSprFile,bstrSoundURL,bstrVerb)	\
    ( (This)->lpVtbl -> ThngInteractAt(This,pThing,bstrSprFile,bstrSoundURL,bstrVerb) ) 

#define IFoundationExemplars_ThngOnApproachDone(This)	\
    ( (This)->lpVtbl -> ThngOnApproachDone(This) ) 

#define IFoundationExemplars_ThngStartInteractSprite(This,bstrSprFile,bstrSoundURL,fPosX,fPosY,fPosZ)	\
    ( (This)->lpVtbl -> ThngStartInteractSprite(This,bstrSprFile,bstrSoundURL,fPosX,fPosY,fPosZ) ) 

#define IFoundationExemplars_ThngMonitorInteractSprite(This,pInteractSprite,dwTimeStarted)	\
    ( (This)->lpVtbl -> ThngMonitorInteractSprite(This,pInteractSprite,dwTimeStarted) ) 

#define IFoundationExemplars_ThngOnDropFile(This,x,y,bstrFilename,pbHandled)	\
    ( (This)->lpVtbl -> ThngOnDropFile(This,x,y,bstrFilename,pbHandled) ) 

#define IFoundationExemplars_AvaIgnoreAvatarMenu(This)	\
    ( (This)->lpVtbl -> AvaIgnoreAvatarMenu(This) ) 

#define IFoundationExemplars_AvaUpdateIgnore(This,pmi)	\
    ( (This)->lpVtbl -> AvaUpdateIgnore(This,pmi) ) 

#define IFoundationExemplars_AvaUnIgnoreAvatar(This,pToUnIgnore)	\
    ( (This)->lpVtbl -> AvaUnIgnoreAvatar(This,pToUnIgnore) ) 

#define IFoundationExemplars_AvaIgnoreAvatar(This,pToIgnore)	\
    ( (This)->lpVtbl -> AvaIgnoreAvatar(This,pToIgnore) ) 

#define IFoundationExemplars_AvaBefriendAvatarMenu(This)	\
    ( (This)->lpVtbl -> AvaBefriendAvatarMenu(This) ) 

#define IFoundationExemplars_AvaUpdateFriend(This,pmi)	\
    ( (This)->lpVtbl -> AvaUpdateFriend(This,pmi) ) 

#define IFoundationExemplars_AvaBefriendAvatar(This,pFriend)	\
    ( (This)->lpVtbl -> AvaBefriendAvatar(This,pFriend) ) 

#define IFoundationExemplars_AvaUnBefriendAvatar(This,pFriend)	\
    ( (This)->lpVtbl -> AvaUnBefriendAvatar(This,pFriend) ) 

#define IFoundationExemplars_AvaConfirmFriend(This,pOtherGuy)	\
    ( (This)->lpVtbl -> AvaConfirmFriend(This,pOtherGuy) ) 

#define IFoundationExemplars_AvaFinalizeFriend(This,pNewFriend,bFriend)	\
    ( (This)->lpVtbl -> AvaFinalizeFriend(This,pNewFriend,bFriend) ) 

#define IFoundationExemplars_AvaUpdateInteractions(This,pMI)	\
    ( (This)->lpVtbl -> AvaUpdateInteractions(This,pMI) ) 

#define IFoundationExemplars_AvaGetMenuItems(This,pPeer,ppMenuList)	\
    ( (This)->lpVtbl -> AvaGetMenuItems(This,pPeer,ppMenuList) ) 

#define IFoundationExemplars_AvaGetPeerMenuItems(This,pPeer,ppMenuList)	\
    ( (This)->lpVtbl -> AvaGetPeerMenuItems(This,pPeer,ppMenuList) ) 

#define IFoundationExemplars_AvaOnPreComposeGeometry(This)	\
    ( (This)->lpVtbl -> AvaOnPreComposeGeometry(This) ) 

#define IFoundationExemplars_OnLoadPainting(This,pvwf)	\
    ( (This)->lpVtbl -> OnLoadPainting(This,pvwf) ) 

#define IFoundationExemplars_OnPaintingPropChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnPaintingPropChanged(This,lHint,varHintData) ) 

#define IFoundationExemplars_RefreshPainting(This)	\
    ( (This)->lpVtbl -> RefreshPainting(This) ) 

#define IFoundationExemplars_PaintingUpdateMenu(This,pmi)	\
    ( (This)->lpVtbl -> PaintingUpdateMenu(This,pmi) ) 

#define IFoundationExemplars_OnSelectPaintingCustomize(This)	\
    ( (This)->lpVtbl -> OnSelectPaintingCustomize(This) ) 

#define IFoundationExemplars_OnLoadSign(This,pvwf)	\
    ( (This)->lpVtbl -> OnLoadSign(This,pvwf) ) 

#define IFoundationExemplars_OnSignPropChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnSignPropChanged(This,lHint,varHintData) ) 

#define IFoundationExemplars_SetTextAttributes(This,bShadow,nWidth,nHeight,nPointSize)	\
    ( (This)->lpVtbl -> SetTextAttributes(This,bShadow,nWidth,nHeight,nPointSize) ) 

#define IFoundationExemplars_SignSetTextureFromText(This)	\
    ( (This)->lpVtbl -> SignSetTextureFromText(This) ) 

#define IFoundationExemplars_RefreshSign(This)	\
    ( (This)->lpVtbl -> RefreshSign(This) ) 

#define IFoundationExemplars_SignUpdateMenu(This,pmi)	\
    ( (This)->lpVtbl -> SignUpdateMenu(This,pmi) ) 

#define IFoundationExemplars_OnSelectSignCustomize(This)	\
    ( (This)->lpVtbl -> OnSelectSignCustomize(This) ) 

#define IFoundationExemplars_TMchOnCreate(This,pThing)	\
    ( (This)->lpVtbl -> TMchOnCreate(This,pThing) ) 

#define IFoundationExemplars_TMchSetCurrentIndex(This,nIndex)	\
    ( (This)->lpVtbl -> TMchSetCurrentIndex(This,nIndex) ) 

#define IFoundationExemplars_TMchUpdateCurrentIndex(This,nChangeAmt)	\
    ( (This)->lpVtbl -> TMchUpdateCurrentIndex(This,nChangeAmt) ) 

#define IFoundationExemplars_TMchOnCurrentIndexChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> TMchOnCurrentIndexChanged(This,lHint,varHintData) ) 

#define IFoundationExemplars_TMchGetCurrentItem(This,pTransactionItem)	\
    ( (This)->lpVtbl -> TMchGetCurrentItem(This,pTransactionItem) ) 

#define IFoundationExemplars_TMchCreateAndDispenseObject(This)	\
    ( (This)->lpVtbl -> TMchCreateAndDispenseObject(This) ) 

#define IFoundationExemplars_TMchPreviousButton_OnLButtonDown(This,hWnd,x,y)	\
    ( (This)->lpVtbl -> TMchPreviousButton_OnLButtonDown(This,hWnd,x,y) ) 

#define IFoundationExemplars_TMchNextButton_OnLButtonDown(This,hWnd,x,y)	\
    ( (This)->lpVtbl -> TMchNextButton_OnLButtonDown(This,hWnd,x,y) ) 

#define IFoundationExemplars_TMchSelectButton_OnLButtonDown(This,hWnd,x,y)	\
    ( (This)->lpVtbl -> TMchSelectButton_OnLButtonDown(This,hWnd,x,y) ) 

#define IFoundationExemplars_TMchDisplay_SetGraphic(This,bstrNewGraphicFile)	\
    ( (This)->lpVtbl -> TMchDisplay_SetGraphic(This,bstrNewGraphicFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFoundationExemplars_INTERFACE_DEFINED__ */



#ifndef __VWFOUNDLib_LIBRARY_DEFINED__
#define __VWFOUNDLib_LIBRARY_DEFINED__

/* library VWFOUNDLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_VWFOUNDLib;

EXTERN_C const CLSID CLSID_FoundationExemplars;

#ifdef __cplusplus

class DECLSPEC_UUID("DEECC2C1-7866-11d0-A00E-00A024A85A2C")
FoundationExemplars;
#endif

EXTERN_C const CLSID CLSID_VWTransactionItem;

#ifdef __cplusplus

class DECLSPEC_UUID("BE47064B-E532-11d1-8119-00C04FC2A129")
VWTransactionItem;
#endif
#endif /* __VWFOUNDLib_LIBRARY_DEFINED__ */

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


