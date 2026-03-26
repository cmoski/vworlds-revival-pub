

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwgeomar.idl:
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

#ifndef __vwgeomar_h__
#define __vwgeomar_h__

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

#ifndef __IVWGeometryArticulated_FWD_DEFINED__
#define __IVWGeometryArticulated_FWD_DEFINED__
typedef interface IVWGeometryArticulated IVWGeometryArticulated;

#endif 	/* __IVWGeometryArticulated_FWD_DEFINED__ */


#ifndef __IJoint_FWD_DEFINED__
#define __IJoint_FWD_DEFINED__
typedef interface IJoint IJoint;

#endif 	/* __IJoint_FWD_DEFINED__ */


#ifndef __ICharacter_FWD_DEFINED__
#define __ICharacter_FWD_DEFINED__
typedef interface ICharacter ICharacter;

#endif 	/* __ICharacter_FWD_DEFINED__ */


#ifndef __IBehavior_FWD_DEFINED__
#define __IBehavior_FWD_DEFINED__
typedef interface IBehavior IBehavior;

#endif 	/* __IBehavior_FWD_DEFINED__ */


#ifndef __IPuppet_FWD_DEFINED__
#define __IPuppet_FWD_DEFINED__
typedef interface IPuppet IPuppet;

#endif 	/* __IPuppet_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwgeom.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwgeomar_0000_0000 */
/* [local] */ 

EXTERN_C const IID LIBID_VWGEOMARLib;






extern RPC_IF_HANDLE __MIDL_itf_vwgeomar_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwgeomar_0000_0000_v0_0_s_ifspec;

#ifndef __IVWGeometryArticulated_INTERFACE_DEFINED__
#define __IVWGeometryArticulated_INTERFACE_DEFINED__

/* interface IVWGeometryArticulated */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWGeometryArticulated;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4a197a40-27a0-11d2-b8e2-00104b72dba8")
    IVWGeometryArticulated : public IVWGeometry
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Character( 
            /* [retval][out] */ ICharacter **ch) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Character( 
            /* [in] */ ICharacter *ch) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MotionFile( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MotionFile( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateBehavior( 
            /* [in] */ BSTR progID,
            /* [retval][out] */ IBehavior **behavior) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWGeometryArticulatedVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWGeometryArticulated * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWGeometryArticulated * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWGeometryArticulated * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWGeometryArticulated * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWGeometryArticulated * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWGeometryArticulated * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWGeometryArticulated * This,
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
            IVWGeometryArticulated * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IVWGeometryArticulated * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IVWGeometryArticulated * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IVWGeometryArticulated * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IVWGeometryArticulated * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IVWGeometryArticulated * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IVWGeometryArticulated * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IVWGeometryArticulated * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVWGeometryArticulated * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IVWGeometryArticulated * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IVWGeometryArticulated * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IVWGeometryArticulated * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_GeometryName)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GeometryName )( 
            IVWGeometryArticulated * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_GeometryName)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GeometryName )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_GestureText)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GestureText )( 
            IVWGeometryArticulated * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_NamedGesture)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NamedGesture )( 
            IVWGeometryArticulated * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ int *pGestureNum);
        
        DECLSPEC_XFGVIRT(IVWGeometry, ComposeGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ComposeGeometry )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ IVWFrame **ppvwf);
        
        DECLSPEC_XFGVIRT(IVWGeometry, ReleaseGeometry)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReleaseGeometry )( 
            IVWGeometryArticulated * This);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_Frame)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frame )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ IVWFrame **ppVWFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_Frame)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frame )( 
            IVWGeometryArticulated * This,
            /* [in] */ IVWFrame *pVWFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_GeometryFrame)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GeometryFrame )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ IVWFrame **ppVWFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_Occluded)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Occluded )( 
            IVWGeometryArticulated * This,
            VARIANT_BOOL bOccluded);
        
        DECLSPEC_XFGVIRT(IVWGeometry, GetNamedGestures)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedGestures )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ IPropertyList **ppGestureNameList);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_CurrentGesture)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentGesture )( 
            IVWGeometryArticulated * This,
            /* [in] */ int iGesture);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_CurrentGesture)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentGesture )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ int *piGesture);
        
        DECLSPEC_XFGVIRT(IVWGeometryArticulated, get_Character)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Character )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ ICharacter **ch);
        
        DECLSPEC_XFGVIRT(IVWGeometryArticulated, put_Character)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Character )( 
            IVWGeometryArticulated * This,
            /* [in] */ ICharacter *ch);
        
        DECLSPEC_XFGVIRT(IVWGeometryArticulated, put_MotionFile)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MotionFile )( 
            IVWGeometryArticulated * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IVWGeometryArticulated, get_MotionFile)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MotionFile )( 
            IVWGeometryArticulated * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IVWGeometryArticulated, CreateBehavior)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateBehavior )( 
            IVWGeometryArticulated * This,
            /* [in] */ BSTR progID,
            /* [retval][out] */ IBehavior **behavior);
        
        END_INTERFACE
    } IVWGeometryArticulatedVtbl;

    interface IVWGeometryArticulated
    {
        CONST_VTBL struct IVWGeometryArticulatedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWGeometryArticulated_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWGeometryArticulated_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWGeometryArticulated_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWGeometryArticulated_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWGeometryArticulated_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWGeometryArticulated_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWGeometryArticulated_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWGeometryArticulated_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWGeometryArticulated_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IVWGeometryArticulated_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IVWGeometryArticulated_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IVWGeometryArticulated_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IVWGeometryArticulated_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IVWGeometryArticulated_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IVWGeometryArticulated_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IVWGeometryArticulated_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IVWGeometryArticulated_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IVWGeometryArticulated_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IVWGeometryArticulated_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IVWGeometryArticulated_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IVWGeometryArticulated_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IVWGeometryArticulated_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IVWGeometryArticulated_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IVWGeometryArticulated_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IVWGeometryArticulated_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IVWGeometryArticulated_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IVWGeometryArticulated_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IVWGeometryArticulated_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IVWGeometryArticulated_put_GeometryName(This,bstr)	\
    ( (This)->lpVtbl -> put_GeometryName(This,bstr) ) 

#define IVWGeometryArticulated_get_GeometryName(This,pbstr)	\
    ( (This)->lpVtbl -> get_GeometryName(This,pbstr) ) 

#define IVWGeometryArticulated_get_GestureText(This,bstrGesture,pbstrText)	\
    ( (This)->lpVtbl -> get_GestureText(This,bstrGesture,pbstrText) ) 

#define IVWGeometryArticulated_get_NamedGesture(This,bstrGesture,pGestureNum)	\
    ( (This)->lpVtbl -> get_NamedGesture(This,bstrGesture,pGestureNum) ) 

#define IVWGeometryArticulated_ComposeGeometry(This,ppvwf)	\
    ( (This)->lpVtbl -> ComposeGeometry(This,ppvwf) ) 

#define IVWGeometryArticulated_ReleaseGeometry(This)	\
    ( (This)->lpVtbl -> ReleaseGeometry(This) ) 

#define IVWGeometryArticulated_get_Frame(This,ppVWFrame)	\
    ( (This)->lpVtbl -> get_Frame(This,ppVWFrame) ) 

#define IVWGeometryArticulated_put_Frame(This,pVWFrame)	\
    ( (This)->lpVtbl -> put_Frame(This,pVWFrame) ) 

#define IVWGeometryArticulated_get_GeometryFrame(This,ppVWFrame)	\
    ( (This)->lpVtbl -> get_GeometryFrame(This,ppVWFrame) ) 

#define IVWGeometryArticulated_put_Occluded(This,bOccluded)	\
    ( (This)->lpVtbl -> put_Occluded(This,bOccluded) ) 

#define IVWGeometryArticulated_GetNamedGestures(This,ppGestureNameList)	\
    ( (This)->lpVtbl -> GetNamedGestures(This,ppGestureNameList) ) 

#define IVWGeometryArticulated_put_CurrentGesture(This,iGesture)	\
    ( (This)->lpVtbl -> put_CurrentGesture(This,iGesture) ) 

#define IVWGeometryArticulated_get_CurrentGesture(This,piGesture)	\
    ( (This)->lpVtbl -> get_CurrentGesture(This,piGesture) ) 


#define IVWGeometryArticulated_get_Character(This,ch)	\
    ( (This)->lpVtbl -> get_Character(This,ch) ) 

#define IVWGeometryArticulated_put_Character(This,ch)	\
    ( (This)->lpVtbl -> put_Character(This,ch) ) 

#define IVWGeometryArticulated_put_MotionFile(This,bstr)	\
    ( (This)->lpVtbl -> put_MotionFile(This,bstr) ) 

#define IVWGeometryArticulated_get_MotionFile(This,pbstr)	\
    ( (This)->lpVtbl -> get_MotionFile(This,pbstr) ) 

#define IVWGeometryArticulated_CreateBehavior(This,progID,behavior)	\
    ( (This)->lpVtbl -> CreateBehavior(This,progID,behavior) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWGeometryArticulated_INTERFACE_DEFINED__ */


#ifndef __IJoint_INTERFACE_DEFINED__
#define __IJoint_INTERFACE_DEFINED__

/* interface IJoint */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_IJoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30e14b80-fb03-11d1-b8e2-00104b72dba8")
    IJoint : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetID( 
            /* [in] */ int newID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetID( 
            /* [retval][out] */ int *curID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPosition( 
            /* [in] */ int DOF,
            /* [out] */ VARIANT *val) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ int DOF,
            /* [in] */ double position) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDOF( 
            /* [in] */ int DOF,
            /* [in] */ double position) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetState( 
            /* [in] */ double xt,
            /* [in] */ double yt,
            /* [in] */ double zt,
            /* [in] */ double xr,
            /* [in] */ double yr,
            /* [in] */ double zr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDOFLimit( 
            /* [in] */ int DOF,
            /* [in] */ double min,
            /* [in] */ double max) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDOFLimit( 
            /* [in] */ int DOF,
            /* [out] */ VARIANT *min,
            /* [out] */ VARIANT *max) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnconstrainDOF( 
            /* [in] */ int DOF) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddDOF( 
            /* [in] */ int DOF) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetParentOffset( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetParentOffset( 
            /* [out] */ VARIANT *x,
            /* [out] */ VARIANT *y,
            /* [out] */ VARIANT *z) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddChild( 
            /* [in] */ IJoint *ij) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ChildCount( 
            /* [retval][out] */ int *num) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChild( 
            /* [in] */ int jointID,
            /* [retval][out] */ IJoint **ij) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetParent( 
            /* [retval][out] */ IJoint *ij) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateGeometry( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAppData( 
            /* [retval][out] */ void **__MIDL__IJoint0000) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAppData( 
            /* [in] */ void *__MIDL__IJoint0001) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNumDOFs( 
            /* [retval][out] */ int *count) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDOFs( 
            /* [retval][out] */ int *dofs) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetOrderDOFs( 
            /* [retval][out] */ int **dofs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IJointVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IJoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IJoint * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IJoint * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IJoint * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IJoint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IJoint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IJoint * This,
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
        
        DECLSPEC_XFGVIRT(IJoint, SetID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetID )( 
            IJoint * This,
            /* [in] */ int newID);
        
        DECLSPEC_XFGVIRT(IJoint, GetID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetID )( 
            IJoint * This,
            /* [retval][out] */ int *curID);
        
        DECLSPEC_XFGVIRT(IJoint, GetPosition)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPosition )( 
            IJoint * This,
            /* [in] */ int DOF,
            /* [out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(IJoint, SetPosition)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            IJoint * This,
            /* [in] */ int DOF,
            /* [in] */ double position);
        
        DECLSPEC_XFGVIRT(IJoint, SetDOF)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDOF )( 
            IJoint * This,
            /* [in] */ int DOF,
            /* [in] */ double position);
        
        DECLSPEC_XFGVIRT(IJoint, SetState)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetState )( 
            IJoint * This,
            /* [in] */ double xt,
            /* [in] */ double yt,
            /* [in] */ double zt,
            /* [in] */ double xr,
            /* [in] */ double yr,
            /* [in] */ double zr);
        
        DECLSPEC_XFGVIRT(IJoint, SetDOFLimit)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDOFLimit )( 
            IJoint * This,
            /* [in] */ int DOF,
            /* [in] */ double min,
            /* [in] */ double max);
        
        DECLSPEC_XFGVIRT(IJoint, GetDOFLimit)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDOFLimit )( 
            IJoint * This,
            /* [in] */ int DOF,
            /* [out] */ VARIANT *min,
            /* [out] */ VARIANT *max);
        
        DECLSPEC_XFGVIRT(IJoint, UnconstrainDOF)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnconstrainDOF )( 
            IJoint * This,
            /* [in] */ int DOF);
        
        DECLSPEC_XFGVIRT(IJoint, AddDOF)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddDOF )( 
            IJoint * This,
            /* [in] */ int DOF);
        
        DECLSPEC_XFGVIRT(IJoint, SetParentOffset)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetParentOffset )( 
            IJoint * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z);
        
        DECLSPEC_XFGVIRT(IJoint, GetParentOffset)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParentOffset )( 
            IJoint * This,
            /* [out] */ VARIANT *x,
            /* [out] */ VARIANT *y,
            /* [out] */ VARIANT *z);
        
        DECLSPEC_XFGVIRT(IJoint, AddChild)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddChild )( 
            IJoint * This,
            /* [in] */ IJoint *ij);
        
        DECLSPEC_XFGVIRT(IJoint, ChildCount)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ChildCount )( 
            IJoint * This,
            /* [retval][out] */ int *num);
        
        DECLSPEC_XFGVIRT(IJoint, GetChild)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChild )( 
            IJoint * This,
            /* [in] */ int jointID,
            /* [retval][out] */ IJoint **ij);
        
        DECLSPEC_XFGVIRT(IJoint, SetParent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetParent )( 
            IJoint * This,
            /* [retval][out] */ IJoint *ij);
        
        DECLSPEC_XFGVIRT(IJoint, UpdateGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateGeometry )( 
            IJoint * This);
        
        DECLSPEC_XFGVIRT(IJoint, GetAppData)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAppData )( 
            IJoint * This,
            /* [retval][out] */ void **__MIDL__IJoint0000);
        
        DECLSPEC_XFGVIRT(IJoint, SetAppData)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAppData )( 
            IJoint * This,
            /* [in] */ void *__MIDL__IJoint0001);
        
        DECLSPEC_XFGVIRT(IJoint, Destroy)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IJoint * This);
        
        DECLSPEC_XFGVIRT(IJoint, GetNumDOFs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNumDOFs )( 
            IJoint * This,
            /* [retval][out] */ int *count);
        
        DECLSPEC_XFGVIRT(IJoint, GetDOFs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDOFs )( 
            IJoint * This,
            /* [retval][out] */ int *dofs);
        
        DECLSPEC_XFGVIRT(IJoint, GetOrderDOFs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOrderDOFs )( 
            IJoint * This,
            /* [retval][out] */ int **dofs);
        
        END_INTERFACE
    } IJointVtbl;

    interface IJoint
    {
        CONST_VTBL struct IJointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IJoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IJoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IJoint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IJoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IJoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IJoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IJoint_SetID(This,newID)	\
    ( (This)->lpVtbl -> SetID(This,newID) ) 

#define IJoint_GetID(This,curID)	\
    ( (This)->lpVtbl -> GetID(This,curID) ) 

#define IJoint_GetPosition(This,DOF,val)	\
    ( (This)->lpVtbl -> GetPosition(This,DOF,val) ) 

#define IJoint_SetPosition(This,DOF,position)	\
    ( (This)->lpVtbl -> SetPosition(This,DOF,position) ) 

#define IJoint_SetDOF(This,DOF,position)	\
    ( (This)->lpVtbl -> SetDOF(This,DOF,position) ) 

#define IJoint_SetState(This,xt,yt,zt,xr,yr,zr)	\
    ( (This)->lpVtbl -> SetState(This,xt,yt,zt,xr,yr,zr) ) 

#define IJoint_SetDOFLimit(This,DOF,min,max)	\
    ( (This)->lpVtbl -> SetDOFLimit(This,DOF,min,max) ) 

#define IJoint_GetDOFLimit(This,DOF,min,max)	\
    ( (This)->lpVtbl -> GetDOFLimit(This,DOF,min,max) ) 

#define IJoint_UnconstrainDOF(This,DOF)	\
    ( (This)->lpVtbl -> UnconstrainDOF(This,DOF) ) 

#define IJoint_AddDOF(This,DOF)	\
    ( (This)->lpVtbl -> AddDOF(This,DOF) ) 

#define IJoint_SetParentOffset(This,x,y,z)	\
    ( (This)->lpVtbl -> SetParentOffset(This,x,y,z) ) 

#define IJoint_GetParentOffset(This,x,y,z)	\
    ( (This)->lpVtbl -> GetParentOffset(This,x,y,z) ) 

#define IJoint_AddChild(This,ij)	\
    ( (This)->lpVtbl -> AddChild(This,ij) ) 

#define IJoint_ChildCount(This,num)	\
    ( (This)->lpVtbl -> ChildCount(This,num) ) 

#define IJoint_GetChild(This,jointID,ij)	\
    ( (This)->lpVtbl -> GetChild(This,jointID,ij) ) 

#define IJoint_SetParent(This,ij)	\
    ( (This)->lpVtbl -> SetParent(This,ij) ) 

#define IJoint_UpdateGeometry(This)	\
    ( (This)->lpVtbl -> UpdateGeometry(This) ) 

#define IJoint_GetAppData(This,__MIDL__IJoint0000)	\
    ( (This)->lpVtbl -> GetAppData(This,__MIDL__IJoint0000) ) 

#define IJoint_SetAppData(This,__MIDL__IJoint0001)	\
    ( (This)->lpVtbl -> SetAppData(This,__MIDL__IJoint0001) ) 

#define IJoint_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IJoint_GetNumDOFs(This,count)	\
    ( (This)->lpVtbl -> GetNumDOFs(This,count) ) 

#define IJoint_GetDOFs(This,dofs)	\
    ( (This)->lpVtbl -> GetDOFs(This,dofs) ) 

#define IJoint_GetOrderDOFs(This,dofs)	\
    ( (This)->lpVtbl -> GetOrderDOFs(This,dofs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IJoint_INTERFACE_DEFINED__ */


#ifndef __ICharacter_INTERFACE_DEFINED__
#define __ICharacter_INTERFACE_DEFINED__

/* interface ICharacter */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_ICharacter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f941cb00-fb02-11d1-b8e2-00104b72dba8")
    ICharacter : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR **bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE JointNameToID( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *jointID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ParameterNameToID( 
            /* [in] */ BSTR bstrName,
            /* [out] */ long *jointID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetJoint( 
            /* [in] */ long jointID,
            /* [retval][out] */ IJoint **ij) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddJoint( 
            /* [in] */ IJoint *ij) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE JointCount( 
            /* [retval][out] */ int *num) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteJoint( 
            /* [in] */ long jointID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutGuid( 
            /* [in] */ long guid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGUID( 
            /* [retval][out] */ long *guid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNumDOFs( 
            /* [out] */ int *num) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRoot( 
            /* [retval][out] */ IJoint **ij) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Behavior( 
            /* [retval][out] */ IBehavior **behave) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Behavior( 
            /* [in] */ IBehavior *behave) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICharacterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICharacter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICharacter * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICharacter * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICharacter * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICharacter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICharacter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICharacter * This,
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
        
        DECLSPEC_XFGVIRT(ICharacter, put_Name)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ICharacter * This,
            /* [in] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(ICharacter, get_Name)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICharacter * This,
            /* [retval][out] */ BSTR **bstrName);
        
        DECLSPEC_XFGVIRT(ICharacter, JointNameToID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *JointNameToID )( 
            ICharacter * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *jointID);
        
        DECLSPEC_XFGVIRT(ICharacter, ParameterNameToID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParameterNameToID )( 
            ICharacter * This,
            /* [in] */ BSTR bstrName,
            /* [out] */ long *jointID);
        
        DECLSPEC_XFGVIRT(ICharacter, GetJoint)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetJoint )( 
            ICharacter * This,
            /* [in] */ long jointID,
            /* [retval][out] */ IJoint **ij);
        
        DECLSPEC_XFGVIRT(ICharacter, AddJoint)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddJoint )( 
            ICharacter * This,
            /* [in] */ IJoint *ij);
        
        DECLSPEC_XFGVIRT(ICharacter, JointCount)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *JointCount )( 
            ICharacter * This,
            /* [retval][out] */ int *num);
        
        DECLSPEC_XFGVIRT(ICharacter, DeleteJoint)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteJoint )( 
            ICharacter * This,
            /* [in] */ long jointID);
        
        DECLSPEC_XFGVIRT(ICharacter, PutGuid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            ICharacter * This,
            /* [in] */ long guid);
        
        DECLSPEC_XFGVIRT(ICharacter, GetGUID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGUID )( 
            ICharacter * This,
            /* [retval][out] */ long *guid);
        
        DECLSPEC_XFGVIRT(ICharacter, GetNumDOFs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNumDOFs )( 
            ICharacter * This,
            /* [out] */ int *num);
        
        DECLSPEC_XFGVIRT(ICharacter, GetRoot)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRoot )( 
            ICharacter * This,
            /* [retval][out] */ IJoint **ij);
        
        DECLSPEC_XFGVIRT(ICharacter, get_Behavior)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Behavior )( 
            ICharacter * This,
            /* [retval][out] */ IBehavior **behave);
        
        DECLSPEC_XFGVIRT(ICharacter, put_Behavior)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Behavior )( 
            ICharacter * This,
            /* [in] */ IBehavior *behave);
        
        DECLSPEC_XFGVIRT(ICharacter, Destroy)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            ICharacter * This);
        
        END_INTERFACE
    } ICharacterVtbl;

    interface ICharacter
    {
        CONST_VTBL struct ICharacterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICharacter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICharacter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICharacter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICharacter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICharacter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICharacter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICharacter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICharacter_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define ICharacter_get_Name(This,bstrName)	\
    ( (This)->lpVtbl -> get_Name(This,bstrName) ) 

#define ICharacter_JointNameToID(This,bstrName,jointID)	\
    ( (This)->lpVtbl -> JointNameToID(This,bstrName,jointID) ) 

#define ICharacter_ParameterNameToID(This,bstrName,jointID)	\
    ( (This)->lpVtbl -> ParameterNameToID(This,bstrName,jointID) ) 

#define ICharacter_GetJoint(This,jointID,ij)	\
    ( (This)->lpVtbl -> GetJoint(This,jointID,ij) ) 

#define ICharacter_AddJoint(This,ij)	\
    ( (This)->lpVtbl -> AddJoint(This,ij) ) 

#define ICharacter_JointCount(This,num)	\
    ( (This)->lpVtbl -> JointCount(This,num) ) 

#define ICharacter_DeleteJoint(This,jointID)	\
    ( (This)->lpVtbl -> DeleteJoint(This,jointID) ) 

#define ICharacter_PutGuid(This,guid)	\
    ( (This)->lpVtbl -> PutGuid(This,guid) ) 

#define ICharacter_GetGUID(This,guid)	\
    ( (This)->lpVtbl -> GetGUID(This,guid) ) 

#define ICharacter_GetNumDOFs(This,num)	\
    ( (This)->lpVtbl -> GetNumDOFs(This,num) ) 

#define ICharacter_GetRoot(This,ij)	\
    ( (This)->lpVtbl -> GetRoot(This,ij) ) 

#define ICharacter_get_Behavior(This,behave)	\
    ( (This)->lpVtbl -> get_Behavior(This,behave) ) 

#define ICharacter_put_Behavior(This,behave)	\
    ( (This)->lpVtbl -> put_Behavior(This,behave) ) 

#define ICharacter_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICharacter_INTERFACE_DEFINED__ */


#ifndef __IBehavior_INTERFACE_DEFINED__
#define __IBehavior_INTERFACE_DEFINED__

/* interface IBehavior */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_IBehavior;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c4f48640-05d8-11d2-b8e2-00104b72dba8")
    IBehavior : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Character( 
            /* [in] */ ICharacter *ch) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Character( 
            /* [retval][out] */ ICharacter **ch) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTime( 
            /* [retval][out] */ float *t) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EvaluateToTime( 
            /* [in] */ float t) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Update( 
            /* [in] */ void *arg) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBehaviorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBehavior * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBehavior * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBehavior * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBehavior * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBehavior * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBehavior * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBehavior * This,
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
        
        DECLSPEC_XFGVIRT(IBehavior, put_Character)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Character )( 
            IBehavior * This,
            /* [in] */ ICharacter *ch);
        
        DECLSPEC_XFGVIRT(IBehavior, get_Character)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Character )( 
            IBehavior * This,
            /* [retval][out] */ ICharacter **ch);
        
        DECLSPEC_XFGVIRT(IBehavior, GetTime)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTime )( 
            IBehavior * This,
            /* [retval][out] */ float *t);
        
        DECLSPEC_XFGVIRT(IBehavior, EvaluateToTime)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EvaluateToTime )( 
            IBehavior * This,
            /* [in] */ float t);
        
        DECLSPEC_XFGVIRT(IBehavior, Reset)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IBehavior * This);
        
        DECLSPEC_XFGVIRT(IBehavior, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IBehavior * This,
            /* [in] */ void *arg);
        
        END_INTERFACE
    } IBehaviorVtbl;

    interface IBehavior
    {
        CONST_VTBL struct IBehaviorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBehavior_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBehavior_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBehavior_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBehavior_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBehavior_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBehavior_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBehavior_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBehavior_put_Character(This,ch)	\
    ( (This)->lpVtbl -> put_Character(This,ch) ) 

#define IBehavior_get_Character(This,ch)	\
    ( (This)->lpVtbl -> get_Character(This,ch) ) 

#define IBehavior_GetTime(This,t)	\
    ( (This)->lpVtbl -> GetTime(This,t) ) 

#define IBehavior_EvaluateToTime(This,t)	\
    ( (This)->lpVtbl -> EvaluateToTime(This,t) ) 

#define IBehavior_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IBehavior_Update(This,arg)	\
    ( (This)->lpVtbl -> Update(This,arg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBehavior_INTERFACE_DEFINED__ */


#ifndef __IPuppet_INTERFACE_DEFINED__
#define __IPuppet_INTERFACE_DEFINED__

/* interface IPuppet */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_IPuppet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c6a76660-05d8-11d2-b8e2-00104b72dba8")
    IPuppet : public IBehavior
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NextFrame( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFrame( 
            /* [in] */ float frameNum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddMotion( 
            /* [in] */ BSTR filename) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Animation( 
            /* [in] */ int animNum) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Animation( 
            /* [retval][out] */ int *animNum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFPS( 
            /* [in] */ float newFPS) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFPS( 
            /* [retval][out] */ float *oldFPS) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGestureIndex( 
            /* [in] */ BSTR gestureName,
            /* [retval][out] */ int *ind) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGestureText( 
            /* [in] */ int index,
            /* [retval][out] */ BSTR *text) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRestPose( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPuppetVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPuppet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPuppet * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPuppet * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPuppet * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPuppet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPuppet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPuppet * This,
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
        
        DECLSPEC_XFGVIRT(IBehavior, put_Character)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Character )( 
            IPuppet * This,
            /* [in] */ ICharacter *ch);
        
        DECLSPEC_XFGVIRT(IBehavior, get_Character)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Character )( 
            IPuppet * This,
            /* [retval][out] */ ICharacter **ch);
        
        DECLSPEC_XFGVIRT(IBehavior, GetTime)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTime )( 
            IPuppet * This,
            /* [retval][out] */ float *t);
        
        DECLSPEC_XFGVIRT(IBehavior, EvaluateToTime)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EvaluateToTime )( 
            IPuppet * This,
            /* [in] */ float t);
        
        DECLSPEC_XFGVIRT(IBehavior, Reset)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IPuppet * This);
        
        DECLSPEC_XFGVIRT(IBehavior, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IPuppet * This,
            /* [in] */ void *arg);
        
        DECLSPEC_XFGVIRT(IPuppet, NextFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NextFrame )( 
            IPuppet * This);
        
        DECLSPEC_XFGVIRT(IPuppet, Start)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IPuppet * This);
        
        DECLSPEC_XFGVIRT(IPuppet, Stop)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IPuppet * This);
        
        DECLSPEC_XFGVIRT(IPuppet, SetFrame)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFrame )( 
            IPuppet * This,
            /* [in] */ float frameNum);
        
        DECLSPEC_XFGVIRT(IPuppet, AddMotion)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddMotion )( 
            IPuppet * This,
            /* [in] */ BSTR filename);
        
        DECLSPEC_XFGVIRT(IPuppet, put_Animation)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Animation )( 
            IPuppet * This,
            /* [in] */ int animNum);
        
        DECLSPEC_XFGVIRT(IPuppet, get_Animation)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Animation )( 
            IPuppet * This,
            /* [retval][out] */ int *animNum);
        
        DECLSPEC_XFGVIRT(IPuppet, SetFPS)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFPS )( 
            IPuppet * This,
            /* [in] */ float newFPS);
        
        DECLSPEC_XFGVIRT(IPuppet, GetFPS)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFPS )( 
            IPuppet * This,
            /* [retval][out] */ float *oldFPS);
        
        DECLSPEC_XFGVIRT(IPuppet, GetGestureIndex)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGestureIndex )( 
            IPuppet * This,
            /* [in] */ BSTR gestureName,
            /* [retval][out] */ int *ind);
        
        DECLSPEC_XFGVIRT(IPuppet, GetGestureText)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGestureText )( 
            IPuppet * This,
            /* [in] */ int index,
            /* [retval][out] */ BSTR *text);
        
        DECLSPEC_XFGVIRT(IPuppet, SetRestPose)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRestPose )( 
            IPuppet * This);
        
        END_INTERFACE
    } IPuppetVtbl;

    interface IPuppet
    {
        CONST_VTBL struct IPuppetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPuppet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPuppet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPuppet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPuppet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPuppet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPuppet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPuppet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPuppet_put_Character(This,ch)	\
    ( (This)->lpVtbl -> put_Character(This,ch) ) 

#define IPuppet_get_Character(This,ch)	\
    ( (This)->lpVtbl -> get_Character(This,ch) ) 

#define IPuppet_GetTime(This,t)	\
    ( (This)->lpVtbl -> GetTime(This,t) ) 

#define IPuppet_EvaluateToTime(This,t)	\
    ( (This)->lpVtbl -> EvaluateToTime(This,t) ) 

#define IPuppet_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IPuppet_Update(This,arg)	\
    ( (This)->lpVtbl -> Update(This,arg) ) 


#define IPuppet_NextFrame(This)	\
    ( (This)->lpVtbl -> NextFrame(This) ) 

#define IPuppet_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IPuppet_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IPuppet_SetFrame(This,frameNum)	\
    ( (This)->lpVtbl -> SetFrame(This,frameNum) ) 

#define IPuppet_AddMotion(This,filename)	\
    ( (This)->lpVtbl -> AddMotion(This,filename) ) 

#define IPuppet_put_Animation(This,animNum)	\
    ( (This)->lpVtbl -> put_Animation(This,animNum) ) 

#define IPuppet_get_Animation(This,animNum)	\
    ( (This)->lpVtbl -> get_Animation(This,animNum) ) 

#define IPuppet_SetFPS(This,newFPS)	\
    ( (This)->lpVtbl -> SetFPS(This,newFPS) ) 

#define IPuppet_GetFPS(This,oldFPS)	\
    ( (This)->lpVtbl -> GetFPS(This,oldFPS) ) 

#define IPuppet_GetGestureIndex(This,gestureName,ind)	\
    ( (This)->lpVtbl -> GetGestureIndex(This,gestureName,ind) ) 

#define IPuppet_GetGestureText(This,index,text)	\
    ( (This)->lpVtbl -> GetGestureText(This,index,text) ) 

#define IPuppet_SetRestPose(This)	\
    ( (This)->lpVtbl -> SetRestPose(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPuppet_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


