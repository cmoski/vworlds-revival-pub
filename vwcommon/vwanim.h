

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwanim.idl:
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

#ifndef __vwanim_h__
#define __vwanim_h__

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

#ifndef __IVWAnimator_FWD_DEFINED__
#define __IVWAnimator_FWD_DEFINED__
typedef interface IVWAnimator IVWAnimator;

#endif 	/* __IVWAnimator_FWD_DEFINED__ */


#ifndef __IVWAnimation_FWD_DEFINED__
#define __IVWAnimation_FWD_DEFINED__
typedef interface IVWAnimation IVWAnimation;

#endif 	/* __IVWAnimation_FWD_DEFINED__ */


#ifndef __IVWAnimationCallback_FWD_DEFINED__
#define __IVWAnimationCallback_FWD_DEFINED__
typedef interface IVWAnimationCallback IVWAnimationCallback;

#endif 	/* __IVWAnimationCallback_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwobject.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwanim_0000_0000 */
/* [local] */ 




#define VWANIM_E_ANIMATIONNOTEXIST			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0d81)


extern RPC_IF_HANDLE __MIDL_itf_vwanim_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwanim_0000_0000_v0_0_s_ifspec;

#ifndef __IVWAnimator_INTERFACE_DEFINED__
#define __IVWAnimator_INTERFACE_DEFINED__

/* interface IVWAnimator */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWAnimator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF08F5A2-2E6B-11D0-89AB-00A0C9054129")
    IVWAnimator : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWorld *pWorld) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateEvent( 
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateEventExt( 
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateUIEvent( 
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateExt( 
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateClosedExt( 
            /* [in] */ int msecPeriod,
            /* [in] */ int iInvokeMax,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSynchronized( 
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateSynchronizedExt( 
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSynchronizedEvent( 
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateSynchronizedEventExt( 
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSynchronizedUIEvent( 
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateCallbackExt( 
            /* [in] */ int msecPeriod,
            /* [in] */ IVWAnimationCallback *pacb,
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IVWAnimation *pAnimation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveThingAnimations( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAnimation( 
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWAnimatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWAnimator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWAnimator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWAnimator * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWAnimator * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWAnimator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWAnimator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWAnimator * This,
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
        
        DECLSPEC_XFGVIRT(IVWAnimator, Initialize)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWAnimator * This,
            /* [in] */ IWorld *pWorld);
        
        DECLSPEC_XFGVIRT(IVWAnimator, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWAnimator * This);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateEvent )( 
            IVWAnimator * This,
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateEventExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateEventExt )( 
            IVWAnimator * This,
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateUIEvent )( 
            IVWAnimator * This,
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, Create)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IVWAnimator * This,
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateExt )( 
            IVWAnimator * This,
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateClosedExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateClosedExt )( 
            IVWAnimator * This,
            /* [in] */ int msecPeriod,
            /* [in] */ int iInvokeMax,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateSynchronized)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSynchronized )( 
            IVWAnimator * This,
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateSynchronizedExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateSynchronizedExt )( 
            IVWAnimator * This,
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateSynchronizedEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSynchronizedEvent )( 
            IVWAnimator * This,
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateSynchronizedEventExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateSynchronizedEventExt )( 
            IVWAnimator * This,
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [in] */ DISPPARAMS *dispparams,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateSynchronizedUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSynchronizedUIEvent )( 
            IVWAnimator * This,
            /* [in] */ IVWAnimation *pAnimation,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, CreateCallbackExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateCallbackExt )( 
            IVWAnimator * This,
            /* [in] */ int msecPeriod,
            /* [in] */ IVWAnimationCallback *pacb,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, Remove)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IVWAnimator * This,
            /* [in] */ IVWAnimation *pAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimator, RemoveThingAnimations)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveThingAnimations )( 
            IVWAnimator * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IVWAnimator, RemoveAll)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IVWAnimator * This);
        
        DECLSPEC_XFGVIRT(IVWAnimator, get_CurrentAnimation)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAnimation )( 
            IVWAnimator * This,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        END_INTERFACE
    } IVWAnimatorVtbl;

    interface IVWAnimator
    {
        CONST_VTBL struct IVWAnimatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWAnimator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWAnimator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWAnimator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWAnimator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWAnimator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWAnimator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWAnimator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWAnimator_Initialize(This,pWorld)	\
    ( (This)->lpVtbl -> Initialize(This,pWorld) ) 

#define IVWAnimator_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWAnimator_CreateEvent(This,msecPeriod,pThing,bstrEvent,varArgs,ppAnimation)	\
    ( (This)->lpVtbl -> CreateEvent(This,msecPeriod,pThing,bstrEvent,varArgs,ppAnimation) ) 

#define IVWAnimator_CreateEventExt(This,msecPeriod,pThing,bstrEvent,dispparams,ppAnimation)	\
    ( (This)->lpVtbl -> CreateEventExt(This,msecPeriod,pThing,bstrEvent,dispparams,ppAnimation) ) 

#define IVWAnimator_CreateUIEvent(This,msecPeriod,pThing,bstrEvent,varArgs,ppAnimation)	\
    ( (This)->lpVtbl -> CreateUIEvent(This,msecPeriod,pThing,bstrEvent,varArgs,ppAnimation) ) 

#define IVWAnimator_Create(This,msecPeriod,pThing,bstrMethod,varArgs,ppAnimation)	\
    ( (This)->lpVtbl -> Create(This,msecPeriod,pThing,bstrMethod,varArgs,ppAnimation) ) 

#define IVWAnimator_CreateExt(This,msecPeriod,pThing,bstrMethod,dispparams,ppAnimation)	\
    ( (This)->lpVtbl -> CreateExt(This,msecPeriod,pThing,bstrMethod,dispparams,ppAnimation) ) 

#define IVWAnimator_CreateClosedExt(This,msecPeriod,iInvokeMax,pThing,bstrMethod,dispparams,ppAnimation)	\
    ( (This)->lpVtbl -> CreateClosedExt(This,msecPeriod,iInvokeMax,pThing,bstrMethod,dispparams,ppAnimation) ) 

#define IVWAnimator_CreateSynchronized(This,pAnimation,pThing,bstrMethod,varArgs,ppAnimation)	\
    ( (This)->lpVtbl -> CreateSynchronized(This,pAnimation,pThing,bstrMethod,varArgs,ppAnimation) ) 

#define IVWAnimator_CreateSynchronizedExt(This,pAnimation,pThing,bstrMethod,dispparams,ppAnimation)	\
    ( (This)->lpVtbl -> CreateSynchronizedExt(This,pAnimation,pThing,bstrMethod,dispparams,ppAnimation) ) 

#define IVWAnimator_CreateSynchronizedEvent(This,pAnimation,pThing,bstrEvent,varArgs,ppAnimation)	\
    ( (This)->lpVtbl -> CreateSynchronizedEvent(This,pAnimation,pThing,bstrEvent,varArgs,ppAnimation) ) 

#define IVWAnimator_CreateSynchronizedEventExt(This,pAnimation,pThing,bstrEvent,dispparams,ppAnimation)	\
    ( (This)->lpVtbl -> CreateSynchronizedEventExt(This,pAnimation,pThing,bstrEvent,dispparams,ppAnimation) ) 

#define IVWAnimator_CreateSynchronizedUIEvent(This,pAnimation,pThing,bstrEvent,varArgs,ppAnimation)	\
    ( (This)->lpVtbl -> CreateSynchronizedUIEvent(This,pAnimation,pThing,bstrEvent,varArgs,ppAnimation) ) 

#define IVWAnimator_CreateCallbackExt(This,msecPeriod,pacb,ppAnimation)	\
    ( (This)->lpVtbl -> CreateCallbackExt(This,msecPeriod,pacb,ppAnimation) ) 

#define IVWAnimator_Remove(This,pAnimation)	\
    ( (This)->lpVtbl -> Remove(This,pAnimation) ) 

#define IVWAnimator_RemoveThingAnimations(This,pThing)	\
    ( (This)->lpVtbl -> RemoveThingAnimations(This,pThing) ) 

#define IVWAnimator_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IVWAnimator_get_CurrentAnimation(This,ppAnimation)	\
    ( (This)->lpVtbl -> get_CurrentAnimation(This,ppAnimation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWAnimator_INTERFACE_DEFINED__ */


#ifndef __IVWAnimation_INTERFACE_DEFINED__
#define __IVWAnimation_INTERFACE_DEFINED__

/* interface IVWAnimation */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWAnimation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF08F5A4-2E6B-11D0-89AB-00A0C9054129")
    IVWAnimation : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWorld *pWorld) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ int msecNow) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IVWAnimation **ppAnimation) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TimeOfLastInvocation( 
            /* [retval][out] */ int *pmsec) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TimeOfCreation( 
            /* [retval][out] */ int *pmsec) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentTime( 
            /* [retval][out] */ int *pmsec) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TimesInvoked( 
            /* [retval][out] */ int *pcInvoked) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Period( 
            /* [in] */ int msecPeriod) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Period( 
            /* [retval][out] */ int *pmsecPeriod) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_InvokeMax( 
            /* [in] */ int iInvokeMax) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InvokeMax( 
            /* [retval][out] */ int *iInvokeMax) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Thing( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Thing( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_User( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_User( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Method( 
            /* [in] */ BSTR bstrMethod) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Method( 
            /* [retval][out] */ BSTR *pbstrMethod) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Event( 
            /* [in] */ BSTR bstrEvent) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Event( 
            /* [retval][out] */ BSTR *pbstrEvent) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_UIEvent( 
            /* [in] */ BSTR bstrEvent) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UIEvent( 
            /* [retval][out] */ BSTR *pbstrEvent) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Callback( 
            /* [in] */ IVWAnimationCallback *pacb) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Callback( 
            /* [retval][out] */ IVWAnimationCallback **ppacb) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ArgumentsExt( 
            /* [retval][out] */ DISPPARAMS **ppdispparams) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ArgumentsExt( 
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UIArguments( 
            /* [in] */ VARIANT var) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWAnimationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWAnimation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWAnimation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWAnimation * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWAnimation * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWAnimation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWAnimation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWAnimation * This,
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
        
        DECLSPEC_XFGVIRT(IVWAnimation, Initialize)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWAnimation * This,
            /* [in] */ IWorld *pWorld);
        
        DECLSPEC_XFGVIRT(IVWAnimation, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWAnimation * This);
        
        DECLSPEC_XFGVIRT(IVWAnimation, Invoke)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWAnimation * This,
            /* [in] */ int msecNow);
        
        DECLSPEC_XFGVIRT(IVWAnimation, Clone)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVWAnimation * This,
            /* [retval][out] */ IVWAnimation **ppAnimation);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_TimeOfLastInvocation)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeOfLastInvocation )( 
            IVWAnimation * This,
            /* [retval][out] */ int *pmsec);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_TimeOfCreation)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeOfCreation )( 
            IVWAnimation * This,
            /* [retval][out] */ int *pmsec);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_CurrentTime)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentTime )( 
            IVWAnimation * This,
            /* [retval][out] */ int *pmsec);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_TimesInvoked)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimesInvoked )( 
            IVWAnimation * This,
            /* [retval][out] */ int *pcInvoked);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_Period)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Period )( 
            IVWAnimation * This,
            /* [in] */ int msecPeriod);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_Period)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Period )( 
            IVWAnimation * This,
            /* [retval][out] */ int *pmsecPeriod);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_InvokeMax)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_InvokeMax )( 
            IVWAnimation * This,
            /* [in] */ int iInvokeMax);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_InvokeMax)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InvokeMax )( 
            IVWAnimation * This,
            /* [retval][out] */ int *iInvokeMax);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_Thing)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Thing )( 
            IVWAnimation * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_Thing)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Thing )( 
            IVWAnimation * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_User)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_User )( 
            IVWAnimation * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_User)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_User )( 
            IVWAnimation * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_Method)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Method )( 
            IVWAnimation * This,
            /* [in] */ BSTR bstrMethod);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_Method)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Method )( 
            IVWAnimation * This,
            /* [retval][out] */ BSTR *pbstrMethod);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_Event)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Event )( 
            IVWAnimation * This,
            /* [in] */ BSTR bstrEvent);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_Event)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Event )( 
            IVWAnimation * This,
            /* [retval][out] */ BSTR *pbstrEvent);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_UIEvent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_UIEvent )( 
            IVWAnimation * This,
            /* [in] */ BSTR bstrEvent);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_UIEvent)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIEvent )( 
            IVWAnimation * This,
            /* [retval][out] */ BSTR *pbstrEvent);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_Callback)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Callback )( 
            IVWAnimation * This,
            /* [in] */ IVWAnimationCallback *pacb);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_Callback)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Callback )( 
            IVWAnimation * This,
            /* [retval][out] */ IVWAnimationCallback **ppacb);
        
        DECLSPEC_XFGVIRT(IVWAnimation, get_ArgumentsExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ArgumentsExt )( 
            IVWAnimation * This,
            /* [retval][out] */ DISPPARAMS **ppdispparams);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_ArgumentsExt)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ArgumentsExt )( 
            IVWAnimation * This,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IVWAnimation, put_UIArguments)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIArguments )( 
            IVWAnimation * This,
            /* [in] */ VARIANT var);
        
        END_INTERFACE
    } IVWAnimationVtbl;

    interface IVWAnimation
    {
        CONST_VTBL struct IVWAnimationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWAnimation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWAnimation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWAnimation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWAnimation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWAnimation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWAnimation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWAnimation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWAnimation_Initialize(This,pWorld)	\
    ( (This)->lpVtbl -> Initialize(This,pWorld) ) 

#define IVWAnimation_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWAnimation_Invoke(This,msecNow)	\
    ( (This)->lpVtbl -> Invoke(This,msecNow) ) 

#define IVWAnimation_Clone(This,ppAnimation)	\
    ( (This)->lpVtbl -> Clone(This,ppAnimation) ) 

#define IVWAnimation_get_TimeOfLastInvocation(This,pmsec)	\
    ( (This)->lpVtbl -> get_TimeOfLastInvocation(This,pmsec) ) 

#define IVWAnimation_get_TimeOfCreation(This,pmsec)	\
    ( (This)->lpVtbl -> get_TimeOfCreation(This,pmsec) ) 

#define IVWAnimation_get_CurrentTime(This,pmsec)	\
    ( (This)->lpVtbl -> get_CurrentTime(This,pmsec) ) 

#define IVWAnimation_get_TimesInvoked(This,pcInvoked)	\
    ( (This)->lpVtbl -> get_TimesInvoked(This,pcInvoked) ) 

#define IVWAnimation_put_Period(This,msecPeriod)	\
    ( (This)->lpVtbl -> put_Period(This,msecPeriod) ) 

#define IVWAnimation_get_Period(This,pmsecPeriod)	\
    ( (This)->lpVtbl -> get_Period(This,pmsecPeriod) ) 

#define IVWAnimation_put_InvokeMax(This,iInvokeMax)	\
    ( (This)->lpVtbl -> put_InvokeMax(This,iInvokeMax) ) 

#define IVWAnimation_get_InvokeMax(This,iInvokeMax)	\
    ( (This)->lpVtbl -> get_InvokeMax(This,iInvokeMax) ) 

#define IVWAnimation_put_Thing(This,pthing)	\
    ( (This)->lpVtbl -> put_Thing(This,pthing) ) 

#define IVWAnimation_get_Thing(This,ppthing)	\
    ( (This)->lpVtbl -> get_Thing(This,ppthing) ) 

#define IVWAnimation_put_User(This,pthing)	\
    ( (This)->lpVtbl -> put_User(This,pthing) ) 

#define IVWAnimation_get_User(This,ppthing)	\
    ( (This)->lpVtbl -> get_User(This,ppthing) ) 

#define IVWAnimation_put_Method(This,bstrMethod)	\
    ( (This)->lpVtbl -> put_Method(This,bstrMethod) ) 

#define IVWAnimation_get_Method(This,pbstrMethod)	\
    ( (This)->lpVtbl -> get_Method(This,pbstrMethod) ) 

#define IVWAnimation_put_Event(This,bstrEvent)	\
    ( (This)->lpVtbl -> put_Event(This,bstrEvent) ) 

#define IVWAnimation_get_Event(This,pbstrEvent)	\
    ( (This)->lpVtbl -> get_Event(This,pbstrEvent) ) 

#define IVWAnimation_put_UIEvent(This,bstrEvent)	\
    ( (This)->lpVtbl -> put_UIEvent(This,bstrEvent) ) 

#define IVWAnimation_get_UIEvent(This,pbstrEvent)	\
    ( (This)->lpVtbl -> get_UIEvent(This,pbstrEvent) ) 

#define IVWAnimation_put_Callback(This,pacb)	\
    ( (This)->lpVtbl -> put_Callback(This,pacb) ) 

#define IVWAnimation_get_Callback(This,ppacb)	\
    ( (This)->lpVtbl -> get_Callback(This,ppacb) ) 

#define IVWAnimation_get_ArgumentsExt(This,ppdispparams)	\
    ( (This)->lpVtbl -> get_ArgumentsExt(This,ppdispparams) ) 

#define IVWAnimation_put_ArgumentsExt(This,pdispparams)	\
    ( (This)->lpVtbl -> put_ArgumentsExt(This,pdispparams) ) 

#define IVWAnimation_put_UIArguments(This,var)	\
    ( (This)->lpVtbl -> put_UIArguments(This,var) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWAnimation_INTERFACE_DEFINED__ */


#ifndef __IVWAnimationCallback_INTERFACE_DEFINED__
#define __IVWAnimationCallback_INTERFACE_DEFINED__

/* interface IVWAnimationCallback */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVWAnimationCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF08F5A6-2E6B-11D0-89AB-00A0C9054129")
    IVWAnimationCallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Invoke( 
            IVWAnimation *pani) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWAnimationCallbackVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWAnimationCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWAnimationCallback * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWAnimationCallback * This);
        
        DECLSPEC_XFGVIRT(IVWAnimationCallback, Invoke)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWAnimationCallback * This,
            IVWAnimation *pani);
        
        END_INTERFACE
    } IVWAnimationCallbackVtbl;

    interface IVWAnimationCallback
    {
        CONST_VTBL struct IVWAnimationCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWAnimationCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWAnimationCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWAnimationCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWAnimationCallback_Invoke(This,pani)	\
    ( (This)->lpVtbl -> Invoke(This,pani) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWAnimationCallback_INTERFACE_DEFINED__ */


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


