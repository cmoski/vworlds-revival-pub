

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwnvtool.idl:
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

#ifndef __vwnvtool_h__
#define __vwnvtool_h__

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

#ifndef __IVWNavigationTool_FWD_DEFINED__
#define __IVWNavigationTool_FWD_DEFINED__
typedef interface IVWNavigationTool IVWNavigationTool;

#endif 	/* __IVWNavigationTool_FWD_DEFINED__ */


/* header files for imported files */
#include "vwuiobjs.h"
#include "vwpktool.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwnvtool_0000_0000 */
/* [local] */ 

#define nPixelsOfStillArea 40 // zero movement radius around mouse anchor point
typedef /* [helpstring][uuid] */  DECLSPEC_UUID("6CBA3205-3919-11d1-83C7-00C04FB6FA46") 
enum KeyConstant
    {
        kbCamera	= 0,
        kbGravity	= 1,
        kbTiltUp	= 2,
        kbTiltDown	= 3,
        kbZoomIn	= 4,
        kbZoomOut	= 5,
        kbReset	= 6,
        kbRight	= 7,
        kbNext	= 8,
        kbPrior	= 9,
        kbLeft	= 10,
        kbHome	= 11,
        kbEnd	= 12,
        kbUp	= 13,
        kbDown	= 14,
        kbMax	= 15
    } 	KeyConstant;



extern RPC_IF_HANDLE __MIDL_itf_vwnvtool_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwnvtool_0000_0000_v0_0_s_ifspec;

#ifndef __IVWNavigationTool_INTERFACE_DEFINED__
#define __IVWNavigationTool_INTERFACE_DEFINED__

/* interface IVWNavigationTool */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWNavigationTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60CE4B6D-FFF0-11CF-89A9-00A0C9054129")
    IVWNavigationTool : public IVWUITool
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NavigationTarget( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNavigationPath( 
            /* [in] */ IPropertyMap *pmapPositions,
            /* [in] */ IPropertyMap *pmapDirections,
            /* [in] */ BSTR bstrDoneEvent) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Moving( 
            /* [retval][out] */ VARIANT_BOOL *bMoving) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OrthogonalMode( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TopOrthogonalMode( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FrontOrthogonalMode( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RightOrthogonalMode( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_KeyboardNavEnabled( 
            /* [in] */ VARIANT_BOOL bEnable) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_KeyboardNavEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnable) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllNavigationDisabled( 
            /* [in] */ VARIANT_BOOL bDisable) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllNavigationDisabled( 
            /* [retval][out] */ VARIANT_BOOL *pbDisable) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CameraOnlyNavigationMode( 
            /* [in] */ VARIANT_BOOL bEnable) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CameraOnlyNavigationMode( 
            /* [retval][out] */ VARIANT_BOOL *pbEnable) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_KeyBinding( 
            /* [in] */ KeyConstant index,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_KeyBinding( 
            /* [in] */ KeyConstant index,
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CollisionDetection( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CollisionDetection( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Gravity( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Gravity( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWNavigationToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWNavigationTool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWNavigationTool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWNavigationTool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWNavigationTool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWNavigationTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWNavigationTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWNavigationTool * This,
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
        
        DECLSPEC_XFGVIRT(IVWUITool, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWNavigationTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWNavigationTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ IWorld *pWorld,
            /* [in] */ IVWRenderRoot *pVWRenderRoot);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolActivate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolActivate )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnToolChanging)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnToolChanging )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT varHint);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnMessage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMessage )( 
            IVWNavigationTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [in] */ unsigned int message,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam,
            /* [retval][out] */ VARIANT_BOOL *pbHandled);
        
        DECLSPEC_XFGVIRT(IVWUITool, IsValid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IVWNavigationTool * This,
            /* [in] */ IVWUIView *pVw,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IVWUITool, SetCursor)
        /* [helpstring][local] */ HRESULT ( STDMETHODCALLTYPE *SetCursor )( 
            IVWNavigationTool * This,
            /* [in] */ IVWUIView *pVWUIView,
            /* [in] */ HCURSOR hCursor);
        
        DECLSPEC_XFGVIRT(IVWUITool, Update)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IVWNavigationTool * This);
        
        DECLSPEC_XFGVIRT(IVWUITool, OnUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIEvent )( 
            IVWNavigationTool * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg,
            /* [in] */ BOOL bFromClient);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_NavigationTarget)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NavigationTarget )( 
            IVWNavigationTool * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, SetNavigationPath)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNavigationPath )( 
            IVWNavigationTool * This,
            /* [in] */ IPropertyMap *pmapPositions,
            /* [in] */ IPropertyMap *pmapDirections,
            /* [in] */ BSTR bstrDoneEvent);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, get_Moving)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Moving )( 
            IVWNavigationTool * This,
            /* [retval][out] */ VARIANT_BOOL *bMoving);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_OrthogonalMode)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OrthogonalMode )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_TopOrthogonalMode)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TopOrthogonalMode )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_FrontOrthogonalMode)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FrontOrthogonalMode )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_RightOrthogonalMode)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RightOrthogonalMode )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_KeyboardNavEnabled)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardNavEnabled )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT_BOOL bEnable);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, get_KeyboardNavEnabled)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardNavEnabled )( 
            IVWNavigationTool * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnable);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_AllNavigationDisabled)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllNavigationDisabled )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT_BOOL bDisable);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, get_AllNavigationDisabled)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllNavigationDisabled )( 
            IVWNavigationTool * This,
            /* [retval][out] */ VARIANT_BOOL *pbDisable);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_CameraOnlyNavigationMode)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CameraOnlyNavigationMode )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT_BOOL bEnable);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, get_CameraOnlyNavigationMode)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CameraOnlyNavigationMode )( 
            IVWNavigationTool * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnable);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, get_KeyBinding)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyBinding )( 
            IVWNavigationTool * This,
            /* [in] */ KeyConstant index,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_KeyBinding)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBinding )( 
            IVWNavigationTool * This,
            /* [in] */ KeyConstant index,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, get_CollisionDetection)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CollisionDetection )( 
            IVWNavigationTool * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_CollisionDetection)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CollisionDetection )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, get_Gravity)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gravity )( 
            IVWNavigationTool * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IVWNavigationTool, put_Gravity)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Gravity )( 
            IVWNavigationTool * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IVWNavigationToolVtbl;

    interface IVWNavigationTool
    {
        CONST_VTBL struct IVWNavigationToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWNavigationTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWNavigationTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWNavigationTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWNavigationTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWNavigationTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWNavigationTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWNavigationTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWNavigationTool_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWNavigationTool_Initialize(This,pVw,pWorld,pVWRenderRoot)	\
    ( (This)->lpVtbl -> Initialize(This,pVw,pWorld,pVWRenderRoot) ) 

#define IVWNavigationTool_OnToolActivate(This,varHint)	\
    ( (This)->lpVtbl -> OnToolActivate(This,varHint) ) 

#define IVWNavigationTool_OnToolChanging(This,varHint)	\
    ( (This)->lpVtbl -> OnToolChanging(This,varHint) ) 

#define IVWNavigationTool_OnMessage(This,pVw,message,wParam,lParam,pbHandled)	\
    ( (This)->lpVtbl -> OnMessage(This,pVw,message,wParam,lParam,pbHandled) ) 

#define IVWNavigationTool_IsValid(This,pVw,pbool)	\
    ( (This)->lpVtbl -> IsValid(This,pVw,pbool) ) 

#define IVWNavigationTool_SetCursor(This,pVWUIView,hCursor)	\
    ( (This)->lpVtbl -> SetCursor(This,pVWUIView,hCursor) ) 

#define IVWNavigationTool_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IVWNavigationTool_OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient)	\
    ( (This)->lpVtbl -> OnUIEvent(This,pthing,bstrEventName,varArg,bFromClient) ) 


#define IVWNavigationTool_put_NavigationTarget(This,pThing)	\
    ( (This)->lpVtbl -> put_NavigationTarget(This,pThing) ) 

#define IVWNavigationTool_SetNavigationPath(This,pmapPositions,pmapDirections,bstrDoneEvent)	\
    ( (This)->lpVtbl -> SetNavigationPath(This,pmapPositions,pmapDirections,bstrDoneEvent) ) 

#define IVWNavigationTool_get_Moving(This,bMoving)	\
    ( (This)->lpVtbl -> get_Moving(This,bMoving) ) 

#define IVWNavigationTool_put_OrthogonalMode(This,newVal)	\
    ( (This)->lpVtbl -> put_OrthogonalMode(This,newVal) ) 

#define IVWNavigationTool_put_TopOrthogonalMode(This,newVal)	\
    ( (This)->lpVtbl -> put_TopOrthogonalMode(This,newVal) ) 

#define IVWNavigationTool_put_FrontOrthogonalMode(This,newVal)	\
    ( (This)->lpVtbl -> put_FrontOrthogonalMode(This,newVal) ) 

#define IVWNavigationTool_put_RightOrthogonalMode(This,newVal)	\
    ( (This)->lpVtbl -> put_RightOrthogonalMode(This,newVal) ) 

#define IVWNavigationTool_put_KeyboardNavEnabled(This,bEnable)	\
    ( (This)->lpVtbl -> put_KeyboardNavEnabled(This,bEnable) ) 

#define IVWNavigationTool_get_KeyboardNavEnabled(This,pbEnable)	\
    ( (This)->lpVtbl -> get_KeyboardNavEnabled(This,pbEnable) ) 

#define IVWNavigationTool_put_AllNavigationDisabled(This,bDisable)	\
    ( (This)->lpVtbl -> put_AllNavigationDisabled(This,bDisable) ) 

#define IVWNavigationTool_get_AllNavigationDisabled(This,pbDisable)	\
    ( (This)->lpVtbl -> get_AllNavigationDisabled(This,pbDisable) ) 

#define IVWNavigationTool_put_CameraOnlyNavigationMode(This,bEnable)	\
    ( (This)->lpVtbl -> put_CameraOnlyNavigationMode(This,bEnable) ) 

#define IVWNavigationTool_get_CameraOnlyNavigationMode(This,pbEnable)	\
    ( (This)->lpVtbl -> get_CameraOnlyNavigationMode(This,pbEnable) ) 

#define IVWNavigationTool_get_KeyBinding(This,index,pvar)	\
    ( (This)->lpVtbl -> get_KeyBinding(This,index,pvar) ) 

#define IVWNavigationTool_put_KeyBinding(This,index,var)	\
    ( (This)->lpVtbl -> put_KeyBinding(This,index,var) ) 

#define IVWNavigationTool_get_CollisionDetection(This,pVal)	\
    ( (This)->lpVtbl -> get_CollisionDetection(This,pVal) ) 

#define IVWNavigationTool_put_CollisionDetection(This,newVal)	\
    ( (This)->lpVtbl -> put_CollisionDetection(This,newVal) ) 

#define IVWNavigationTool_get_Gravity(This,pVal)	\
    ( (This)->lpVtbl -> get_Gravity(This,pVal) ) 

#define IVWNavigationTool_put_Gravity(This,newVal)	\
    ( (This)->lpVtbl -> put_Gravity(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWNavigationTool_INTERFACE_DEFINED__ */


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


