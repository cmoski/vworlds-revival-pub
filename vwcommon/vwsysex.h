

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwsysex.idl:
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

#ifndef __vwsysex_h__
#define __vwsysex_h__

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

#ifndef __ISystemExemplar_FWD_DEFINED__
#define __ISystemExemplar_FWD_DEFINED__
typedef interface ISystemExemplar ISystemExemplar;

#endif 	/* __ISystemExemplar_FWD_DEFINED__ */


#ifndef __IThingExemplar_FWD_DEFINED__
#define __IThingExemplar_FWD_DEFINED__
typedef interface IThingExemplar IThingExemplar;

#endif 	/* __IThingExemplar_FWD_DEFINED__ */


#ifndef __IArtifactExemplar_FWD_DEFINED__
#define __IArtifactExemplar_FWD_DEFINED__
typedef interface IArtifactExemplar IArtifactExemplar;

#endif 	/* __IArtifactExemplar_FWD_DEFINED__ */


#ifndef __IAvatarExemplar_FWD_DEFINED__
#define __IAvatarExemplar_FWD_DEFINED__
typedef interface IAvatarExemplar IAvatarExemplar;

#endif 	/* __IAvatarExemplar_FWD_DEFINED__ */


#ifndef __IHostExemplar_FWD_DEFINED__
#define __IHostExemplar_FWD_DEFINED__
typedef interface IHostExemplar IHostExemplar;

#endif 	/* __IHostExemplar_FWD_DEFINED__ */


#ifndef __IPortalExemplar_FWD_DEFINED__
#define __IPortalExemplar_FWD_DEFINED__
typedef interface IPortalExemplar IPortalExemplar;

#endif 	/* __IPortalExemplar_FWD_DEFINED__ */


#ifndef __IIWPortalExemplar_FWD_DEFINED__
#define __IIWPortalExemplar_FWD_DEFINED__
typedef interface IIWPortalExemplar IIWPortalExemplar;

#endif 	/* __IIWPortalExemplar_FWD_DEFINED__ */


#ifndef __IRoomExemplar_FWD_DEFINED__
#define __IRoomExemplar_FWD_DEFINED__
typedef interface IRoomExemplar IRoomExemplar;

#endif 	/* __IRoomExemplar_FWD_DEFINED__ */


#ifndef __IStateMachineExemplar_FWD_DEFINED__
#define __IStateMachineExemplar_FWD_DEFINED__
typedef interface IStateMachineExemplar IStateMachineExemplar;

#endif 	/* __IStateMachineExemplar_FWD_DEFINED__ */


#ifndef __IWebPageExemplar_FWD_DEFINED__
#define __IWebPageExemplar_FWD_DEFINED__
typedef interface IWebPageExemplar IWebPageExemplar;

#endif 	/* __IWebPageExemplar_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "vwobject.h"
#include "menuitem.h"
#include "ocxproxy.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwsysex_0000_0000 */
/* [local] */ 

#define VWPORTAL_E_NOTAVALIDINDEX			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c00)
#define VWPORTAL_E_NODESTINATIONS			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c01)
#define VWPORTAL_E_INVALIDDESTINATION		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c02)
#define VWPORTAL_E_UNKNOWN					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c03)
#define VWAVATAR_E_NODEFAULTROOMORPORTAL		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c10)
#define VWAVATAR_E_NOPROFILE					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c11)
#define VWAVATAR_E_WHISPERNOTALLOWED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c12)
#define VWHOST_E_NOTAHOST					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c20)
#define VWHOST_E_CANTLOGOFFWIZARD			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c21)
#define VWTHING_E_MOVEINTOPOLICYDENIED		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c30)
#define VWTHING_E_ACCEPTLEAVEDENIED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c31)
#define VWTHING_E_ALLOWLEAVEDENIED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c32)
#define VWTHING_E_ACCEPTENTERDENIED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c33)
#define VWTHING_E_ALLOWENTERDENIED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c34)
#define VWTHING_E_TAKENOTINCONTAINER			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c35)
#define VWTHING_E_DROPNOTINCONTENTS			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c36)
#define VWTHING_E_TAKEPERMISSIONDENIED		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c37)
#define VWTHING_E_UNKNOWN					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c38)
#define VWTHING_E_NOSECURITYONSERVER			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c39)
#define VWTHING_E_NOSECURITYFORUNKNOWNUSER	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c3a)
#define VWTHING_E_NOTACLIENTPROPERTY			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c3b)
#define VWIWPORTAL_E_NODESTINATION			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c50)
#define VWIWPORTAL_E_INVALIDDESTINATION		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c51)
#define VWIWPORTAL_E_RECONNECTFAILED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c52)
#define VWCORE_E_FILEUPLOADERROR				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c60)
#define VWCORE_E_NOTAWIZARD					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c61)
#define VWCORE_E_NOTANAVATAR					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c62)
#define VWCORE_E_NOTAHOST					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0c63)


extern RPC_IF_HANDLE __MIDL_itf_vwsysex_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwsysex_0000_0000_v0_0_s_ifspec;

#ifndef __ISystemExemplar_INTERFACE_DEFINED__
#define __ISystemExemplar_INTERFACE_DEFINED__

/* interface ISystemExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISystemExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("717B5A86-7267-11d1-959F-00C04FD91F4D")
    ISystemExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePropertyList( 
            /* [optional][in] */ VARIANT varInitialValue,
            /* [optional][in] */ VARIANT varOrphan,
            /* [retval][out] */ IPropertyList **pppropertylist) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePropertyMap( 
            /* [optional][in] */ VARIANT varOrphan,
            /* [retval][out] */ IPropertyMap **pppropertymap) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMenu( 
            /* [retval][out] */ IPropertyList **ppMenu) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMenuItem( 
            /* [in] */ BSTR bstrMenuText,
            /* [in] */ long lFlags,
            /* [in] */ IThing *pOwner,
            /* [in] */ BSTR bstrUpdateMethod,
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT var,
            /* [retval][out] */ IMenuItem **ppMenuItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMenuSeparator( 
            /* [in] */ IThing *pOwner,
            /* [retval][out] */ IMenuItem **ppMenuItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateOCXProxy( 
            /* [in] */ IDispatch *pOCX,
            /* [retval][out] */ IOCXProxy **ppOCXProxy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryAvatarNames( 
            /* [in] */ long lFalgs,
            /* [retval][out] */ IPropertyList **pNameList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InvokeRemoteClientMethod( 
            /* [in] */ IThing *pDispTarget,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varUserOrList,
            /* [in] */ VARIANT varParams) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HandleRemoteClientMethod( 
            /* [in] */ IThing *pDispTarget,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varUserOrList,
            /* [in] */ VARIANT varParams) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FireUIEvent( 
            /* [in] */ IPropertyList *pClientList,
            /* [in] */ IThing *pSource,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varParams) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FireRemoteUIEvent( 
            /* [in] */ VARIANT varClientList,
            /* [in] */ IThing *pSource,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varParams) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnRootURLChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UploadFile( 
            /* [in] */ BSTR bstrLocalName,
            /* [in] */ BSTR bstrRemoteName,
            /* [retval][out] */ BSTR *pbstrURL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MakeHost( 
            /* [in] */ IThing *pTarget) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnMakeHost( 
            /* [in] */ IThing *pTarget) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateTimer( 
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IDispatch **ppTimer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DestroyTimer( 
            /* [in] */ IDispatch *pTimer) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnCreateRoomClient( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ShowWelcomeMessage( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnWorldOwnerAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnGlobalConstantAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TraceExemplarInfo( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeGetProperty( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimePutProperty( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeInvokeMethod( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varArgs,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeGetMethod( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeGetPropertySecurity( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCheckPropertySecurity( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCheckMethodSecurity( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCheckPropertiesSecurity( 
            /* [in] */ IThing *pthing,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCheckMethodsSecurity( 
            /* [in] */ IThing *pthing,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeVTableInvokeMethod( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeAutomationInvokeMethod( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeScriptInvokeMethod( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeInterfaceInvokeMethod( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TimeNotifyInvokeMethod( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TimeNotifyPropertyChanged( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TimeSendThingCommand( 
            /* [in] */ long lFlags,
            /* [in] */ IThing *pthing,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TimeSendObjectPropertyCommand( 
            /* [in] */ long lFlags,
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TimeSendWorldCommand( 
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TimeProcessMessage( 
            /* [in] */ unsigned char ch,
            /* [in] */ IUnMarshallBuffer *pUbuffer,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCloneProperty( 
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCopyProperty( 
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimePutPropertySecurity( 
            /* [in] */ IPropertySecurity *pSecurity,
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeGetPropertyAll( 
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimePutPropertyAll( 
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeInvokeMethodAll( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeGetMethodAll( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeGetPropertySecurityAll( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCheckPropertySecurityAll( 
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCheckMethodSecurityAll( 
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCheckPropertiesSecurityAll( 
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeCheckMethodsSecurityAll( 
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TimeNotifyAll( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TimeSendCommandAll( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TimeProcessMessageAll( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE TimeAll( 
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE YYY( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnXXXChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnXXXAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISystemExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISystemExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISystemExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISystemExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISystemExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISystemExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISystemExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISystemExemplar * This,
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
            ISystemExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            ISystemExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            ISystemExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            ISystemExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            ISystemExemplar * This);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, CreatePropertyList)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePropertyList )( 
            ISystemExemplar * This,
            /* [optional][in] */ VARIANT varInitialValue,
            /* [optional][in] */ VARIANT varOrphan,
            /* [retval][out] */ IPropertyList **pppropertylist);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, CreatePropertyMap)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePropertyMap )( 
            ISystemExemplar * This,
            /* [optional][in] */ VARIANT varOrphan,
            /* [retval][out] */ IPropertyMap **pppropertymap);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, CreateMenu)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMenu )( 
            ISystemExemplar * This,
            /* [retval][out] */ IPropertyList **ppMenu);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, CreateMenuItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMenuItem )( 
            ISystemExemplar * This,
            /* [in] */ BSTR bstrMenuText,
            /* [in] */ long lFlags,
            /* [in] */ IThing *pOwner,
            /* [in] */ BSTR bstrUpdateMethod,
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT var,
            /* [retval][out] */ IMenuItem **ppMenuItem);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, CreateMenuSeparator)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMenuSeparator )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pOwner,
            /* [retval][out] */ IMenuItem **ppMenuItem);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, CreateOCXProxy)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateOCXProxy )( 
            ISystemExemplar * This,
            /* [in] */ IDispatch *pOCX,
            /* [retval][out] */ IOCXProxy **ppOCXProxy);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, QueryAvatarNames)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryAvatarNames )( 
            ISystemExemplar * This,
            /* [in] */ long lFalgs,
            /* [retval][out] */ IPropertyList **pNameList);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, InvokeRemoteClientMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InvokeRemoteClientMethod )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pDispTarget,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varUserOrList,
            /* [in] */ VARIANT varParams);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, HandleRemoteClientMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HandleRemoteClientMethod )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pDispTarget,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varUserOrList,
            /* [in] */ VARIANT varParams);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, FireUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FireUIEvent )( 
            ISystemExemplar * This,
            /* [in] */ IPropertyList *pClientList,
            /* [in] */ IThing *pSource,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varParams);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, FireRemoteUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FireRemoteUIEvent )( 
            ISystemExemplar * This,
            /* [in] */ VARIANT varClientList,
            /* [in] */ IThing *pSource,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varParams);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, OnRootURLChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnRootURLChanged )( 
            ISystemExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, UploadFile)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UploadFile )( 
            ISystemExemplar * This,
            /* [in] */ BSTR bstrLocalName,
            /* [in] */ BSTR bstrRemoteName,
            /* [retval][out] */ BSTR *pbstrURL);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, MakeHost)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MakeHost )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pTarget);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, UnMakeHost)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnMakeHost )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pTarget);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, CreateTimer)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTimer )( 
            ISystemExemplar * This,
            /* [in] */ int msecPeriod,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT varArgs,
            /* [retval][out] */ IDispatch **ppTimer);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, DestroyTimer)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyTimer )( 
            ISystemExemplar * This,
            /* [in] */ IDispatch *pTimer);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, OnCreateRoomClient)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnCreateRoomClient )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, ShowWelcomeMessage)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ShowWelcomeMessage )( 
            ISystemExemplar * This);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, OnWorldOwnerAccess)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnWorldOwnerAccess )( 
            ISystemExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, OnGlobalConstantAccess)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnGlobalConstantAccess )( 
            ISystemExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TraceExemplarInfo)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TraceExemplarInfo )( 
            ISystemExemplar * This);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeGetProperty)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeGetProperty )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimePutProperty)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimePutProperty )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeInvokeMethod)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeInvokeMethod )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ VARIANT varArgs,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeGetMethod)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeGetMethod )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeGetPropertySecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeGetPropertySecurity )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCheckPropertySecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCheckPropertySecurity )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCheckMethodSecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCheckMethodSecurity )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCheckPropertiesSecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCheckPropertiesSecurity )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCheckMethodsSecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCheckMethodsSecurity )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeVTableInvokeMethod)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeVTableInvokeMethod )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeAutomationInvokeMethod)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeAutomationInvokeMethod )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeScriptInvokeMethod)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeScriptInvokeMethod )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeInterfaceInvokeMethod)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeInterfaceInvokeMethod )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeNotifyInvokeMethod)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TimeNotifyInvokeMethod )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeNotifyPropertyChanged)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TimeNotifyPropertyChanged )( 
            ISystemExemplar * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeSendThingCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TimeSendThingCommand )( 
            ISystemExemplar * This,
            /* [in] */ long lFlags,
            /* [in] */ IThing *pthing,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeSendObjectPropertyCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TimeSendObjectPropertyCommand )( 
            ISystemExemplar * This,
            /* [in] */ long lFlags,
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeSendWorldCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TimeSendWorldCommand )( 
            ISystemExemplar * This,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeProcessMessage)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TimeProcessMessage )( 
            ISystemExemplar * This,
            /* [in] */ unsigned char ch,
            /* [in] */ IUnMarshallBuffer *pUbuffer,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCloneProperty)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCloneProperty )( 
            ISystemExemplar * This,
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCopyProperty)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCopyProperty )( 
            ISystemExemplar * This,
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimePutPropertySecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimePutPropertySecurity )( 
            ISystemExemplar * This,
            /* [in] */ IPropertySecurity *pSecurity,
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeGetPropertyAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeGetPropertyAll )( 
            ISystemExemplar * This,
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimePutPropertyAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimePutPropertyAll )( 
            ISystemExemplar * This,
            /* [in] */ VARIANT varData,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeInvokeMethodAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeInvokeMethodAll )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeGetMethodAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeGetMethodAll )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeGetPropertySecurityAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeGetPropertySecurityAll )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCheckPropertySecurityAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCheckPropertySecurityAll )( 
            ISystemExemplar * This,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCheckMethodSecurityAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCheckMethodSecurityAll )( 
            ISystemExemplar * This,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCheckPropertiesSecurityAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCheckPropertiesSecurityAll )( 
            ISystemExemplar * This,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeCheckMethodsSecurityAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeCheckMethodsSecurityAll )( 
            ISystemExemplar * This,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeNotifyAll)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TimeNotifyAll )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeSendCommandAll)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TimeSendCommandAll )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeProcessMessageAll)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TimeProcessMessageAll )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, TimeAll)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *TimeAll )( 
            ISystemExemplar * This,
            /* [in] */ long lRepeat,
            /* [retval][out] */ long *plElapsed);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, YYY)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *YYY )( 
            ISystemExemplar * This);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, OnXXXChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnXXXChanged )( 
            ISystemExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(ISystemExemplar, OnXXXAccess)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnXXXAccess )( 
            ISystemExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        END_INTERFACE
    } ISystemExemplarVtbl;

    interface ISystemExemplar
    {
        CONST_VTBL struct ISystemExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISystemExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISystemExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISystemExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISystemExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISystemExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISystemExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISystemExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISystemExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define ISystemExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define ISystemExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define ISystemExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define ISystemExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define ISystemExemplar_CreatePropertyList(This,varInitialValue,varOrphan,pppropertylist)	\
    ( (This)->lpVtbl -> CreatePropertyList(This,varInitialValue,varOrphan,pppropertylist) ) 

#define ISystemExemplar_CreatePropertyMap(This,varOrphan,pppropertymap)	\
    ( (This)->lpVtbl -> CreatePropertyMap(This,varOrphan,pppropertymap) ) 

#define ISystemExemplar_CreateMenu(This,ppMenu)	\
    ( (This)->lpVtbl -> CreateMenu(This,ppMenu) ) 

#define ISystemExemplar_CreateMenuItem(This,bstrMenuText,lFlags,pOwner,bstrUpdateMethod,bstrMethod,var,ppMenuItem)	\
    ( (This)->lpVtbl -> CreateMenuItem(This,bstrMenuText,lFlags,pOwner,bstrUpdateMethod,bstrMethod,var,ppMenuItem) ) 

#define ISystemExemplar_CreateMenuSeparator(This,pOwner,ppMenuItem)	\
    ( (This)->lpVtbl -> CreateMenuSeparator(This,pOwner,ppMenuItem) ) 

#define ISystemExemplar_CreateOCXProxy(This,pOCX,ppOCXProxy)	\
    ( (This)->lpVtbl -> CreateOCXProxy(This,pOCX,ppOCXProxy) ) 

#define ISystemExemplar_QueryAvatarNames(This,lFalgs,pNameList)	\
    ( (This)->lpVtbl -> QueryAvatarNames(This,lFalgs,pNameList) ) 

#define ISystemExemplar_InvokeRemoteClientMethod(This,pDispTarget,bstrMethodName,varUserOrList,varParams)	\
    ( (This)->lpVtbl -> InvokeRemoteClientMethod(This,pDispTarget,bstrMethodName,varUserOrList,varParams) ) 

#define ISystemExemplar_HandleRemoteClientMethod(This,pDispTarget,bstrMethodName,varUserOrList,varParams)	\
    ( (This)->lpVtbl -> HandleRemoteClientMethod(This,pDispTarget,bstrMethodName,varUserOrList,varParams) ) 

#define ISystemExemplar_FireUIEvent(This,pClientList,pSource,bstrMethodName,varParams)	\
    ( (This)->lpVtbl -> FireUIEvent(This,pClientList,pSource,bstrMethodName,varParams) ) 

#define ISystemExemplar_FireRemoteUIEvent(This,varClientList,pSource,bstrMethodName,varParams)	\
    ( (This)->lpVtbl -> FireRemoteUIEvent(This,varClientList,pSource,bstrMethodName,varParams) ) 

#define ISystemExemplar_OnRootURLChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnRootURLChanged(This,lHint,varHintData) ) 

#define ISystemExemplar_UploadFile(This,bstrLocalName,bstrRemoteName,pbstrURL)	\
    ( (This)->lpVtbl -> UploadFile(This,bstrLocalName,bstrRemoteName,pbstrURL) ) 

#define ISystemExemplar_MakeHost(This,pTarget)	\
    ( (This)->lpVtbl -> MakeHost(This,pTarget) ) 

#define ISystemExemplar_UnMakeHost(This,pTarget)	\
    ( (This)->lpVtbl -> UnMakeHost(This,pTarget) ) 

#define ISystemExemplar_CreateTimer(This,msecPeriod,pThing,bstrMethod,varArgs,ppTimer)	\
    ( (This)->lpVtbl -> CreateTimer(This,msecPeriod,pThing,bstrMethod,varArgs,ppTimer) ) 

#define ISystemExemplar_DestroyTimer(This,pTimer)	\
    ( (This)->lpVtbl -> DestroyTimer(This,pTimer) ) 

#define ISystemExemplar_OnCreateRoomClient(This,pThing)	\
    ( (This)->lpVtbl -> OnCreateRoomClient(This,pThing) ) 

#define ISystemExemplar_ShowWelcomeMessage(This)	\
    ( (This)->lpVtbl -> ShowWelcomeMessage(This) ) 

#define ISystemExemplar_OnWorldOwnerAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnWorldOwnerAccess(This,lPerms,bReturnValue) ) 

#define ISystemExemplar_OnGlobalConstantAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnGlobalConstantAccess(This,lPerms,bReturnValue) ) 

#define ISystemExemplar_TraceExemplarInfo(This)	\
    ( (This)->lpVtbl -> TraceExemplarInfo(This) ) 

#define ISystemExemplar_TimeGetProperty(This,pthing,bstrPropertyName,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeGetProperty(This,pthing,bstrPropertyName,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimePutProperty(This,pthing,bstrPropertyName,varData,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimePutProperty(This,pthing,bstrPropertyName,varData,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeInvokeMethod(This,pthing,bstrMethodName,varArgs,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeInvokeMethod(This,pthing,bstrMethodName,varArgs,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeGetMethod(This,pthing,bstrMethodName,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeGetMethod(This,pthing,bstrMethodName,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeGetPropertySecurity(This,pthing,bstrPropertyName,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeGetPropertySecurity(This,pthing,bstrPropertyName,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCheckPropertySecurity(This,pthing,bstrPropertyName,ulFlags,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCheckPropertySecurity(This,pthing,bstrPropertyName,ulFlags,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCheckMethodSecurity(This,pthing,bstrMethodName,ulFlags,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCheckMethodSecurity(This,pthing,bstrMethodName,ulFlags,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCheckPropertiesSecurity(This,pthing,ulFlags,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCheckPropertiesSecurity(This,pthing,ulFlags,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCheckMethodsSecurity(This,pthing,ulFlags,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCheckMethodsSecurity(This,pthing,ulFlags,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeVTableInvokeMethod(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeVTableInvokeMethod(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeAutomationInvokeMethod(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeAutomationInvokeMethod(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeScriptInvokeMethod(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeScriptInvokeMethod(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeInterfaceInvokeMethod(This,pthing,bstrMethodName,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeInterfaceInvokeMethod(This,pthing,bstrMethodName,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeNotifyInvokeMethod(This,pthing,bstrMethodName,pdispparams,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeNotifyInvokeMethod(This,pthing,bstrMethodName,pdispparams,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeNotifyPropertyChanged(This,pthing,bstrPropertyName,lHint,varHintData,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeNotifyPropertyChanged(This,pthing,bstrPropertyName,lHint,varHintData,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeSendThingCommand(This,lFlags,pthing,dispid,wFlags,pdispparams,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeSendThingCommand(This,lFlags,pthing,dispid,wFlags,pdispparams,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeSendObjectPropertyCommand(This,lFlags,pprop,dispid,wFlags,pdispparams,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeSendObjectPropertyCommand(This,lFlags,pprop,dispid,wFlags,pdispparams,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeSendWorldCommand(This,dispid,wFlags,pdispparams,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeSendWorldCommand(This,dispid,wFlags,pdispparams,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeProcessMessage(This,ch,pUbuffer,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeProcessMessage(This,ch,pUbuffer,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCloneProperty(This,varData,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCloneProperty(This,varData,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCopyProperty(This,varData,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCopyProperty(This,varData,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimePutPropertySecurity(This,pSecurity,varData,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimePutPropertySecurity(This,pSecurity,varData,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeGetPropertyAll(This,varData,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeGetPropertyAll(This,varData,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimePutPropertyAll(This,varData,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimePutPropertyAll(This,varData,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeInvokeMethodAll(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeInvokeMethodAll(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeGetMethodAll(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeGetMethodAll(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeGetPropertySecurityAll(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeGetPropertySecurityAll(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCheckPropertySecurityAll(This,ulFlags,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCheckPropertySecurityAll(This,ulFlags,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCheckMethodSecurityAll(This,ulFlags,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCheckMethodSecurityAll(This,ulFlags,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCheckPropertiesSecurityAll(This,ulFlags,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCheckPropertiesSecurityAll(This,ulFlags,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeCheckMethodsSecurityAll(This,ulFlags,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeCheckMethodsSecurityAll(This,ulFlags,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeNotifyAll(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeNotifyAll(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeSendCommandAll(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeSendCommandAll(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeProcessMessageAll(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeProcessMessageAll(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_TimeAll(This,lRepeat,plElapsed)	\
    ( (This)->lpVtbl -> TimeAll(This,lRepeat,plElapsed) ) 

#define ISystemExemplar_YYY(This)	\
    ( (This)->lpVtbl -> YYY(This) ) 

#define ISystemExemplar_OnXXXChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnXXXChanged(This,lHint,varHintData) ) 

#define ISystemExemplar_OnXXXAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnXXXAccess(This,lPerms,bReturnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISystemExemplar_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vwsysex_0000_0001 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("44F75556-8E02-11d1-BB42-00C04FC2CAB1") 
enum QueryAvatarNamesFlags
    {
        qanFlagAll	= 0,
        qanFlagConnected	= 1,
        qanFlagIgnored	= 2,
        qanFlagIgnoring	= 4,
        qanFlagFriend	= 8
    } 	QueryAvatarNamesFlags;



extern RPC_IF_HANDLE __MIDL_itf_vwsysex_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwsysex_0000_0001_v0_0_s_ifspec;

#ifndef __IThingExemplar_INTERFACE_DEFINED__
#define __IThingExemplar_INTERFACE_DEFINED__

/* interface IThingExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IThingExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99AD3618-AAB5-11D0-BAE3-00C04FC2CAB1")
    IThingExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Report( 
            /* [in] */ BSTR bstrReport) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Announce( 
            /* [in] */ BSTR bstrAnnounce) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemDestroyClient( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentSystemEnter( 
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWhat) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentSystemLeave( 
            /* [in] */ IThing *pOldWhere,
            /* [in] */ IThing *pWhat) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LookAt( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMenuList( 
            /* [retval][out] */ IPropertyList **pplistMenu) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMenuItems( 
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPeerMenuItems( 
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetContainerMenuItems( 
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetContentMenuItems( 
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSelfMenuItems( 
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetInventoryMenuItems( 
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEditMenuItems( 
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMenuItemsFromProperty( 
            /* [in] */ BSTR bstrMenuListProperty,
            /* [retval][out] */ IPropertyList **ppMenuList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateIsArtifact( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateIsAvatar( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateIsAvatarAndNotWizard( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateIsArtifactOrAvatar( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateIsTakeable( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdatePropertiesMenuItem( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateMenuItemName( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdatePropertyListMenu( 
            /* [in] */ IMenuItem *pmi,
            /* [in] */ IPropertyList *pList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateInventoryMenu( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateContentsMenu( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateRoomAvatarsMenu( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoGesture( 
            /* [in] */ int iGesture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoNamedGesture( 
            /* [in] */ BSTR bstrGestureName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoGestureServer( 
            /* [in] */ IThing *pThingOriginator,
            /* [in] */ int iGesture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoGestureClient( 
            /* [in] */ IThing *pThingOriginator,
            /* [in] */ int iGesture) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AllowEnter( 
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AllowLeave( 
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AcceptEnter( 
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AcceptLeave( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IThing **ppNewThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Emote( 
            /* [in] */ VARIANT varGesture,
            /* [optional][in] */ VARIANT varText) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GestureText( 
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveInto( 
            /* [in] */ IThing *pNewContainer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Say( 
            /* [in] */ BSTR strText,
            /* [optional][in] */ VARIANT userOrList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Shout( 
            /* [in] */ BSTR strText) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SayGesture( 
            /* [in] */ BSTR strText) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Whisper( 
            /* [in] */ BSTR strText,
            /* [optional][in] */ VARIANT userOrList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Take( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Drop( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnIsOpenChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditObject( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEditTabMap( 
            /* [retval][out] */ IPropertyList **pMap) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSortedEditTabMap( 
            /* [retval][out] */ IPropertyList **pMap) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddClientProperty( 
            /* [in] */ BSTR bstrName,
            /* [optional][in] */ VARIANT var) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveClientProperty( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnIsNoticeableAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnNameAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnOwnerOrWizardAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IThingExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThingExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThingExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThingExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IThingExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IThingExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IThingExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IThingExemplar * This,
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
            IThingExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IThingExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IThingExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IThingExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IThingExemplar * This);
        
        DECLSPEC_XFGVIRT(IThingExemplar, Report)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Report )( 
            IThingExemplar * This,
            /* [in] */ BSTR bstrReport);
        
        DECLSPEC_XFGVIRT(IThingExemplar, Announce)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Announce )( 
            IThingExemplar * This,
            /* [in] */ BSTR bstrAnnounce);
        
        DECLSPEC_XFGVIRT(IThingExemplar, OnSystemDestroyClient)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemDestroyClient )( 
            IThingExemplar * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IThingExemplar, OnContentSystemEnter)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentSystemEnter )( 
            IThingExemplar * This,
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWhat);
        
        DECLSPEC_XFGVIRT(IThingExemplar, OnContentSystemLeave)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentSystemLeave )( 
            IThingExemplar * This,
            /* [in] */ IThing *pOldWhere,
            /* [in] */ IThing *pWhat);
        
        DECLSPEC_XFGVIRT(IThingExemplar, LookAt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LookAt )( 
            IThingExemplar * This);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetMenuList)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMenuList )( 
            IThingExemplar * This,
            /* [retval][out] */ IPropertyList **pplistMenu);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetMenuItems)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMenuItems )( 
            IThingExemplar * This,
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetPeerMenuItems)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPeerMenuItems )( 
            IThingExemplar * This,
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetContainerMenuItems)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetContainerMenuItems )( 
            IThingExemplar * This,
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetContentMenuItems)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetContentMenuItems )( 
            IThingExemplar * This,
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetSelfMenuItems)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSelfMenuItems )( 
            IThingExemplar * This,
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetInventoryMenuItems)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetInventoryMenuItems )( 
            IThingExemplar * This,
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetEditMenuItems)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEditMenuItems )( 
            IThingExemplar * This,
            /* [in] */ IThing *pTarget,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetMenuItemsFromProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMenuItemsFromProperty )( 
            IThingExemplar * This,
            /* [in] */ BSTR bstrMenuListProperty,
            /* [retval][out] */ IPropertyList **ppMenuList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdateIsArtifact)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateIsArtifact )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdateIsAvatar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateIsAvatar )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdateIsAvatarAndNotWizard)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateIsAvatarAndNotWizard )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdateIsArtifactOrAvatar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateIsArtifactOrAvatar )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdateIsTakeable)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateIsTakeable )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdatePropertiesMenuItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdatePropertiesMenuItem )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdateMenuItemName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateMenuItemName )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdatePropertyListMenu)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdatePropertyListMenu )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi,
            /* [in] */ IPropertyList *pList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdateInventoryMenu)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateInventoryMenu )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdateContentsMenu)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateContentsMenu )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, UpdateRoomAvatarsMenu)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateRoomAvatarsMenu )( 
            IThingExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IThingExemplar, DoGesture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoGesture )( 
            IThingExemplar * This,
            /* [in] */ int iGesture);
        
        DECLSPEC_XFGVIRT(IThingExemplar, DoNamedGesture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoNamedGesture )( 
            IThingExemplar * This,
            /* [in] */ BSTR bstrGestureName);
        
        DECLSPEC_XFGVIRT(IThingExemplar, DoGestureServer)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoGestureServer )( 
            IThingExemplar * This,
            /* [in] */ IThing *pThingOriginator,
            /* [in] */ int iGesture);
        
        DECLSPEC_XFGVIRT(IThingExemplar, DoGestureClient)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoGestureClient )( 
            IThingExemplar * This,
            /* [in] */ IThing *pThingOriginator,
            /* [in] */ int iGesture);
        
        DECLSPEC_XFGVIRT(IThingExemplar, AllowEnter)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AllowEnter )( 
            IThingExemplar * This,
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThingExemplar, AllowLeave)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AllowLeave )( 
            IThingExemplar * This,
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThingExemplar, AcceptEnter)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AcceptEnter )( 
            IThingExemplar * This,
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThingExemplar, AcceptLeave)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AcceptLeave )( 
            IThingExemplar * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThingExemplar, Clone)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IThingExemplar * This,
            /* [retval][out] */ IThing **ppNewThing);
        
        DECLSPEC_XFGVIRT(IThingExemplar, Emote)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Emote )( 
            IThingExemplar * This,
            /* [in] */ VARIANT varGesture,
            /* [optional][in] */ VARIANT varText);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GestureText)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GestureText )( 
            IThingExemplar * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText);
        
        DECLSPEC_XFGVIRT(IThingExemplar, MoveInto)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveInto )( 
            IThingExemplar * This,
            /* [in] */ IThing *pNewContainer);
        
        DECLSPEC_XFGVIRT(IThingExemplar, Say)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Say )( 
            IThingExemplar * This,
            /* [in] */ BSTR strText,
            /* [optional][in] */ VARIANT userOrList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, Shout)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Shout )( 
            IThingExemplar * This,
            /* [in] */ BSTR strText);
        
        DECLSPEC_XFGVIRT(IThingExemplar, SayGesture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SayGesture )( 
            IThingExemplar * This,
            /* [in] */ BSTR strText);
        
        DECLSPEC_XFGVIRT(IThingExemplar, Whisper)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Whisper )( 
            IThingExemplar * This,
            /* [in] */ BSTR strText,
            /* [optional][in] */ VARIANT userOrList);
        
        DECLSPEC_XFGVIRT(IThingExemplar, Take)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Take )( 
            IThingExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IThingExemplar, Drop)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Drop )( 
            IThingExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IThingExemplar, OnIsOpenChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnIsOpenChanged )( 
            IThingExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IThingExemplar, EditObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditObject )( 
            IThingExemplar * This);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetEditTabMap)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEditTabMap )( 
            IThingExemplar * This,
            /* [retval][out] */ IPropertyList **pMap);
        
        DECLSPEC_XFGVIRT(IThingExemplar, GetSortedEditTabMap)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSortedEditTabMap )( 
            IThingExemplar * This,
            /* [retval][out] */ IPropertyList **pMap);
        
        DECLSPEC_XFGVIRT(IThingExemplar, AddClientProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddClientProperty )( 
            IThingExemplar * This,
            /* [in] */ BSTR bstrName,
            /* [optional][in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IThingExemplar, RemoveClientProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveClientProperty )( 
            IThingExemplar * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IThingExemplar, OnIsNoticeableAccess)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnIsNoticeableAccess )( 
            IThingExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        DECLSPEC_XFGVIRT(IThingExemplar, OnNameAccess)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnNameAccess )( 
            IThingExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        DECLSPEC_XFGVIRT(IThingExemplar, OnOwnerOrWizardAccess)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnOwnerOrWizardAccess )( 
            IThingExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        END_INTERFACE
    } IThingExemplarVtbl;

    interface IThingExemplar
    {
        CONST_VTBL struct IThingExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThingExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThingExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThingExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThingExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IThingExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IThingExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IThingExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IThingExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IThingExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IThingExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IThingExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IThingExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IThingExemplar_Report(This,bstrReport)	\
    ( (This)->lpVtbl -> Report(This,bstrReport) ) 

#define IThingExemplar_Announce(This,bstrAnnounce)	\
    ( (This)->lpVtbl -> Announce(This,bstrAnnounce) ) 

#define IThingExemplar_OnSystemDestroyClient(This,pthing)	\
    ( (This)->lpVtbl -> OnSystemDestroyClient(This,pthing) ) 

#define IThingExemplar_OnContentSystemEnter(This,pWhere,pWhat)	\
    ( (This)->lpVtbl -> OnContentSystemEnter(This,pWhere,pWhat) ) 

#define IThingExemplar_OnContentSystemLeave(This,pOldWhere,pWhat)	\
    ( (This)->lpVtbl -> OnContentSystemLeave(This,pOldWhere,pWhat) ) 

#define IThingExemplar_LookAt(This)	\
    ( (This)->lpVtbl -> LookAt(This) ) 

#define IThingExemplar_GetMenuList(This,pplistMenu)	\
    ( (This)->lpVtbl -> GetMenuList(This,pplistMenu) ) 

#define IThingExemplar_GetMenuItems(This,pTarget,ppMenuList)	\
    ( (This)->lpVtbl -> GetMenuItems(This,pTarget,ppMenuList) ) 

#define IThingExemplar_GetPeerMenuItems(This,pTarget,ppMenuList)	\
    ( (This)->lpVtbl -> GetPeerMenuItems(This,pTarget,ppMenuList) ) 

#define IThingExemplar_GetContainerMenuItems(This,pTarget,ppMenuList)	\
    ( (This)->lpVtbl -> GetContainerMenuItems(This,pTarget,ppMenuList) ) 

#define IThingExemplar_GetContentMenuItems(This,pTarget,ppMenuList)	\
    ( (This)->lpVtbl -> GetContentMenuItems(This,pTarget,ppMenuList) ) 

#define IThingExemplar_GetSelfMenuItems(This,pTarget,ppMenuList)	\
    ( (This)->lpVtbl -> GetSelfMenuItems(This,pTarget,ppMenuList) ) 

#define IThingExemplar_GetInventoryMenuItems(This,pTarget,ppMenuList)	\
    ( (This)->lpVtbl -> GetInventoryMenuItems(This,pTarget,ppMenuList) ) 

#define IThingExemplar_GetEditMenuItems(This,pTarget,ppMenuList)	\
    ( (This)->lpVtbl -> GetEditMenuItems(This,pTarget,ppMenuList) ) 

#define IThingExemplar_GetMenuItemsFromProperty(This,bstrMenuListProperty,ppMenuList)	\
    ( (This)->lpVtbl -> GetMenuItemsFromProperty(This,bstrMenuListProperty,ppMenuList) ) 

#define IThingExemplar_UpdateIsArtifact(This,pmi)	\
    ( (This)->lpVtbl -> UpdateIsArtifact(This,pmi) ) 

#define IThingExemplar_UpdateIsAvatar(This,pmi)	\
    ( (This)->lpVtbl -> UpdateIsAvatar(This,pmi) ) 

#define IThingExemplar_UpdateIsAvatarAndNotWizard(This,pmi)	\
    ( (This)->lpVtbl -> UpdateIsAvatarAndNotWizard(This,pmi) ) 

#define IThingExemplar_UpdateIsArtifactOrAvatar(This,pmi)	\
    ( (This)->lpVtbl -> UpdateIsArtifactOrAvatar(This,pmi) ) 

#define IThingExemplar_UpdateIsTakeable(This,pmi)	\
    ( (This)->lpVtbl -> UpdateIsTakeable(This,pmi) ) 

#define IThingExemplar_UpdatePropertiesMenuItem(This,pmi)	\
    ( (This)->lpVtbl -> UpdatePropertiesMenuItem(This,pmi) ) 

#define IThingExemplar_UpdateMenuItemName(This,pmi)	\
    ( (This)->lpVtbl -> UpdateMenuItemName(This,pmi) ) 

#define IThingExemplar_UpdatePropertyListMenu(This,pmi,pList)	\
    ( (This)->lpVtbl -> UpdatePropertyListMenu(This,pmi,pList) ) 

#define IThingExemplar_UpdateInventoryMenu(This,pmi)	\
    ( (This)->lpVtbl -> UpdateInventoryMenu(This,pmi) ) 

#define IThingExemplar_UpdateContentsMenu(This,pmi)	\
    ( (This)->lpVtbl -> UpdateContentsMenu(This,pmi) ) 

#define IThingExemplar_UpdateRoomAvatarsMenu(This,pmi)	\
    ( (This)->lpVtbl -> UpdateRoomAvatarsMenu(This,pmi) ) 

#define IThingExemplar_DoGesture(This,iGesture)	\
    ( (This)->lpVtbl -> DoGesture(This,iGesture) ) 

#define IThingExemplar_DoNamedGesture(This,bstrGestureName)	\
    ( (This)->lpVtbl -> DoNamedGesture(This,bstrGestureName) ) 

#define IThingExemplar_DoGestureServer(This,pThingOriginator,iGesture)	\
    ( (This)->lpVtbl -> DoGestureServer(This,pThingOriginator,iGesture) ) 

#define IThingExemplar_DoGestureClient(This,pThingOriginator,iGesture)	\
    ( (This)->lpVtbl -> DoGestureClient(This,pThingOriginator,iGesture) ) 

#define IThingExemplar_AllowEnter(This,pThing,pbool)	\
    ( (This)->lpVtbl -> AllowEnter(This,pThing,pbool) ) 

#define IThingExemplar_AllowLeave(This,pThing,pbool)	\
    ( (This)->lpVtbl -> AllowLeave(This,pThing,pbool) ) 

#define IThingExemplar_AcceptEnter(This,pThing,pbool)	\
    ( (This)->lpVtbl -> AcceptEnter(This,pThing,pbool) ) 

#define IThingExemplar_AcceptLeave(This,pbool)	\
    ( (This)->lpVtbl -> AcceptLeave(This,pbool) ) 

#define IThingExemplar_Clone(This,ppNewThing)	\
    ( (This)->lpVtbl -> Clone(This,ppNewThing) ) 

#define IThingExemplar_Emote(This,varGesture,varText)	\
    ( (This)->lpVtbl -> Emote(This,varGesture,varText) ) 

#define IThingExemplar_GestureText(This,bstrGesture,pbstrText)	\
    ( (This)->lpVtbl -> GestureText(This,bstrGesture,pbstrText) ) 

#define IThingExemplar_MoveInto(This,pNewContainer)	\
    ( (This)->lpVtbl -> MoveInto(This,pNewContainer) ) 

#define IThingExemplar_Say(This,strText,userOrList)	\
    ( (This)->lpVtbl -> Say(This,strText,userOrList) ) 

#define IThingExemplar_Shout(This,strText)	\
    ( (This)->lpVtbl -> Shout(This,strText) ) 

#define IThingExemplar_SayGesture(This,strText)	\
    ( (This)->lpVtbl -> SayGesture(This,strText) ) 

#define IThingExemplar_Whisper(This,strText,userOrList)	\
    ( (This)->lpVtbl -> Whisper(This,strText,userOrList) ) 

#define IThingExemplar_Take(This,pThing)	\
    ( (This)->lpVtbl -> Take(This,pThing) ) 

#define IThingExemplar_Drop(This,pThing)	\
    ( (This)->lpVtbl -> Drop(This,pThing) ) 

#define IThingExemplar_OnIsOpenChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnIsOpenChanged(This,lHint,varHintData) ) 

#define IThingExemplar_EditObject(This)	\
    ( (This)->lpVtbl -> EditObject(This) ) 

#define IThingExemplar_GetEditTabMap(This,pMap)	\
    ( (This)->lpVtbl -> GetEditTabMap(This,pMap) ) 

#define IThingExemplar_GetSortedEditTabMap(This,pMap)	\
    ( (This)->lpVtbl -> GetSortedEditTabMap(This,pMap) ) 

#define IThingExemplar_AddClientProperty(This,bstrName,var)	\
    ( (This)->lpVtbl -> AddClientProperty(This,bstrName,var) ) 

#define IThingExemplar_RemoveClientProperty(This,bstrName)	\
    ( (This)->lpVtbl -> RemoveClientProperty(This,bstrName) ) 

#define IThingExemplar_OnIsNoticeableAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnIsNoticeableAccess(This,lPerms,bReturnValue) ) 

#define IThingExemplar_OnNameAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnNameAccess(This,lPerms,bReturnValue) ) 

#define IThingExemplar_OnOwnerOrWizardAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnOwnerOrWizardAccess(This,lPerms,bReturnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThingExemplar_INTERFACE_DEFINED__ */


#ifndef __IArtifactExemplar_INTERFACE_DEFINED__
#define __IArtifactExemplar_INTERFACE_DEFINED__

/* interface IArtifactExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IArtifactExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99AD361C-AAB5-11D0-BAE3-00C04FC2CAB1")
    IArtifactExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WieldItem( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE UpdateWield( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnWieldItem( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE UpdateUnWield( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AcceptLeave( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AcceptEnter( 
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IArtifactExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IArtifactExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IArtifactExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IArtifactExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IArtifactExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IArtifactExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IArtifactExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IArtifactExemplar * This,
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
            IArtifactExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IArtifactExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IArtifactExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IArtifactExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IArtifactExemplar * This);
        
        DECLSPEC_XFGVIRT(IArtifactExemplar, WieldItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WieldItem )( 
            IArtifactExemplar * This);
        
        DECLSPEC_XFGVIRT(IArtifactExemplar, UpdateWield)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *UpdateWield )( 
            IArtifactExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IArtifactExemplar, UnWieldItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnWieldItem )( 
            IArtifactExemplar * This);
        
        DECLSPEC_XFGVIRT(IArtifactExemplar, UpdateUnWield)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *UpdateUnWield )( 
            IArtifactExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IArtifactExemplar, AcceptLeave)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AcceptLeave )( 
            IArtifactExemplar * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IArtifactExemplar, AcceptEnter)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AcceptEnter )( 
            IArtifactExemplar * This,
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        END_INTERFACE
    } IArtifactExemplarVtbl;

    interface IArtifactExemplar
    {
        CONST_VTBL struct IArtifactExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IArtifactExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IArtifactExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IArtifactExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IArtifactExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IArtifactExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IArtifactExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IArtifactExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IArtifactExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IArtifactExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IArtifactExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IArtifactExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IArtifactExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IArtifactExemplar_WieldItem(This)	\
    ( (This)->lpVtbl -> WieldItem(This) ) 

#define IArtifactExemplar_UpdateWield(This,pmi)	\
    ( (This)->lpVtbl -> UpdateWield(This,pmi) ) 

#define IArtifactExemplar_UnWieldItem(This)	\
    ( (This)->lpVtbl -> UnWieldItem(This) ) 

#define IArtifactExemplar_UpdateUnWield(This,pmi)	\
    ( (This)->lpVtbl -> UpdateUnWield(This,pmi) ) 

#define IArtifactExemplar_AcceptLeave(This,pbool)	\
    ( (This)->lpVtbl -> AcceptLeave(This,pbool) ) 

#define IArtifactExemplar_AcceptEnter(This,pThing,pbool)	\
    ( (This)->lpVtbl -> AcceptEnter(This,pThing,pbool) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IArtifactExemplar_INTERFACE_DEFINED__ */


#ifndef __IAvatarExemplar_INTERFACE_DEFINED__
#define __IAvatarExemplar_INTERFACE_DEFINED__

/* interface IAvatarExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAvatarExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99AD361E-AAB5-11D0-BAE3-00C04FC2CAB1")
    IAvatarExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoNamedGesture( 
            /* [in] */ BSTR bstrGestureName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GestureText( 
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LookAt( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WhisperTo( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateUserProfileList( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MenuUserProfileList( 
            /* [in] */ BSTR bstrKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddToUserProfileList( 
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveFromUserProfileList( 
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsInUserProfileList( 
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT_BOOL *pBool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateMenuItemName( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateWhisperMenuItem( 
            /* [in] */ IMenuItem *pmi) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditProfile( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Gesture( 
            /* [in] */ BSTR strGestureName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Wield( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnWield( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Teleport( 
            /* [in] */ IThing *pNewRoom) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Query( 
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrHTML,
            /* [in] */ BSTR bstrPrompt,
            /* [in] */ BSTR bstrDefault,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyObject,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyMethod,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyParam) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Alert( 
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyObject,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyMethod,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyParam) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Confirm( 
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyObject,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyMethod,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyParam) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Prompt( 
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrPrompt,
            /* [in] */ BSTR bstrDefault,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyObject,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyMethod,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyParam) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClientQuery( 
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrHTML,
            /* [in] */ BSTR bstrPrompt,
            /* [in] */ BSTR bstrDefault,
            /* [in] */ IThing *pNotifyObject,
            /* [in] */ BSTR bstrNotifyMethod,
            /* [in] */ IDispatch *pNotifyParam) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryReturn( 
            /* [in] */ IPropertyList *pArg,
            /* [in] */ VARIANT_BOOL boolOK,
            /* [in] */ BSTR bstrResult) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemCreate( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemConnect( 
            /* [in] */ IThing *pWho) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemDisconnect( 
            /* [in] */ IThing *pWho) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ThumbnailFileName( 
            /* [retval][out] */ BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContainerSystemTell( 
            /* [in] */ IThing *pfrom,
            /* [in] */ IPropertyList *pToList,
            /* [in] */ BSTR bstrSay,
            /* [in] */ long lval,
            /* [retval][out] */ BSTR *pbstrOut) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemTell( 
            /* [in] */ IThing *pfrom,
            /* [in] */ IPropertyList *pToList,
            /* [in] */ BSTR bstrSay,
            /* [in] */ long lval,
            /* [retval][out] */ BSTR *pbstrOut) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnPeerSystemTell( 
            /* [in] */ IThing *pfrom,
            /* [in] */ IPropertyList *pToList,
            /* [in] */ BSTR bstrSay,
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemPreCreate( 
            /* [in] */ IThing *pExemplar,
            /* [retval][out] */ VARIANT_BOOL *pbOkToCreate) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemPostCreate( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemPreDestroy( 
            /* [in] */ IThing *pthing,
            /* [retval][out] */ VARIANT_BOOL *pbOkToDestroy) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemPostDestroy( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetObjectQuota( 
            /* [in] */ long lQuota) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddDefaultKeys( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnAction( 
            /* [in] */ BSTR bstrAction,
            /* [in] */ BSTR bstrDescription,
            /* [in] */ IPropertyList *pParticipants) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnIsAuthorChanged( 
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnIsWizardOrIsAuthorAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnWizardAccess( 
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE FireConnectAvatar( 
            /* [in] */ IThing *pthing) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAvatarExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvatarExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvatarExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvatarExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvatarExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvatarExemplar * This,
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
            IAvatarExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IAvatarExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, DoNamedGesture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoNamedGesture )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR bstrGestureName);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, GestureText)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GestureText )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, LookAt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LookAt )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, WhisperTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WhisperTo )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, UpdateUserProfileList)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateUserProfileList )( 
            IAvatarExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, MenuUserProfileList)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MenuUserProfileList )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR bstrKey);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, AddToUserProfileList)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddToUserProfileList )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrKey);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, RemoveFromUserProfileList)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveFromUserProfileList )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrKey);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, IsInUserProfileList)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsInUserProfileList )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT_BOOL *pBool);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, UpdateMenuItemName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateMenuItemName )( 
            IAvatarExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, UpdateWhisperMenuItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateWhisperMenuItem )( 
            IAvatarExemplar * This,
            /* [in] */ IMenuItem *pmi);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, EditProfile)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditProfile )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, Gesture)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Gesture )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR strGestureName);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, Wield)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Wield )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, UnWield)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnWield )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, Teleport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Teleport )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pNewRoom);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, Query)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Query )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrHTML,
            /* [in] */ BSTR bstrPrompt,
            /* [in] */ BSTR bstrDefault,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyObject,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyMethod,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyParam);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, Alert)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Alert )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyObject,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyMethod,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyParam);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, Confirm)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Confirm )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyObject,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyMethod,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyParam);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, Prompt)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Prompt )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrPrompt,
            /* [in] */ BSTR bstrDefault,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyObject,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyMethod,
            /* [defaultvalue][optional][in] */ VARIANT varNotifyParam);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, ClientQuery)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClientQuery )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrHTML,
            /* [in] */ BSTR bstrPrompt,
            /* [in] */ BSTR bstrDefault,
            /* [in] */ IThing *pNotifyObject,
            /* [in] */ BSTR bstrNotifyMethod,
            /* [in] */ IDispatch *pNotifyParam);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, QueryReturn)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryReturn )( 
            IAvatarExemplar * This,
            /* [in] */ IPropertyList *pArg,
            /* [in] */ VARIANT_BOOL boolOK,
            /* [in] */ BSTR bstrResult);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnSystemCreate)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemCreate )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnSystemConnect)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemConnect )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pWho);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnSystemDisconnect)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemDisconnect )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pWho);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, ThumbnailFileName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ThumbnailFileName )( 
            IAvatarExemplar * This,
            /* [retval][out] */ BSTR *pbstrFileName);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnContainerSystemTell)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContainerSystemTell )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pfrom,
            /* [in] */ IPropertyList *pToList,
            /* [in] */ BSTR bstrSay,
            /* [in] */ long lval,
            /* [retval][out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnSystemTell)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemTell )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pfrom,
            /* [in] */ IPropertyList *pToList,
            /* [in] */ BSTR bstrSay,
            /* [in] */ long lval,
            /* [retval][out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnPeerSystemTell)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnPeerSystemTell )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pfrom,
            /* [in] */ IPropertyList *pToList,
            /* [in] */ BSTR bstrSay,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnSystemPreCreate)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemPreCreate )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pExemplar,
            /* [retval][out] */ VARIANT_BOOL *pbOkToCreate);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnSystemPostCreate)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemPostCreate )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnSystemPreDestroy)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemPreDestroy )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pthing,
            /* [retval][out] */ VARIANT_BOOL *pbOkToDestroy);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnSystemPostDestroy)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemPostDestroy )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, SetObjectQuota)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetObjectQuota )( 
            IAvatarExemplar * This,
            /* [in] */ long lQuota);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, AddDefaultKeys)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddDefaultKeys )( 
            IAvatarExemplar * This);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnAction)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnAction )( 
            IAvatarExemplar * This,
            /* [in] */ BSTR bstrAction,
            /* [in] */ BSTR bstrDescription,
            /* [in] */ IPropertyList *pParticipants);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnIsAuthorChanged)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnIsAuthorChanged )( 
            IAvatarExemplar * This,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnIsWizardOrIsAuthorAccess)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnIsWizardOrIsAuthorAccess )( 
            IAvatarExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, OnWizardAccess)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnWizardAccess )( 
            IAvatarExemplar * This,
            /* [in] */ long lPerms,
            /* [retval][out] */ VARIANT_BOOL *bReturnValue);
        
        DECLSPEC_XFGVIRT(IAvatarExemplar, FireConnectAvatar)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *FireConnectAvatar )( 
            IAvatarExemplar * This,
            /* [in] */ IThing *pthing);
        
        END_INTERFACE
    } IAvatarExemplarVtbl;

    interface IAvatarExemplar
    {
        CONST_VTBL struct IAvatarExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvatarExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAvatarExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAvatarExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAvatarExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAvatarExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAvatarExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAvatarExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAvatarExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IAvatarExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IAvatarExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IAvatarExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IAvatarExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IAvatarExemplar_DoNamedGesture(This,bstrGestureName)	\
    ( (This)->lpVtbl -> DoNamedGesture(This,bstrGestureName) ) 

#define IAvatarExemplar_GestureText(This,bstrGesture,pbstrText)	\
    ( (This)->lpVtbl -> GestureText(This,bstrGesture,pbstrText) ) 

#define IAvatarExemplar_LookAt(This)	\
    ( (This)->lpVtbl -> LookAt(This) ) 

#define IAvatarExemplar_WhisperTo(This)	\
    ( (This)->lpVtbl -> WhisperTo(This) ) 

#define IAvatarExemplar_UpdateUserProfileList(This,pmi)	\
    ( (This)->lpVtbl -> UpdateUserProfileList(This,pmi) ) 

#define IAvatarExemplar_MenuUserProfileList(This,bstrKey)	\
    ( (This)->lpVtbl -> MenuUserProfileList(This,bstrKey) ) 

#define IAvatarExemplar_AddToUserProfileList(This,pThing,bstrKey)	\
    ( (This)->lpVtbl -> AddToUserProfileList(This,pThing,bstrKey) ) 

#define IAvatarExemplar_RemoveFromUserProfileList(This,pThing,bstrKey)	\
    ( (This)->lpVtbl -> RemoveFromUserProfileList(This,pThing,bstrKey) ) 

#define IAvatarExemplar_IsInUserProfileList(This,pThing,bstrKey,pBool)	\
    ( (This)->lpVtbl -> IsInUserProfileList(This,pThing,bstrKey,pBool) ) 

#define IAvatarExemplar_UpdateMenuItemName(This,pmi)	\
    ( (This)->lpVtbl -> UpdateMenuItemName(This,pmi) ) 

#define IAvatarExemplar_UpdateWhisperMenuItem(This,pmi)	\
    ( (This)->lpVtbl -> UpdateWhisperMenuItem(This,pmi) ) 

#define IAvatarExemplar_EditProfile(This)	\
    ( (This)->lpVtbl -> EditProfile(This) ) 

#define IAvatarExemplar_Gesture(This,strGestureName)	\
    ( (This)->lpVtbl -> Gesture(This,strGestureName) ) 

#define IAvatarExemplar_Wield(This,pThing)	\
    ( (This)->lpVtbl -> Wield(This,pThing) ) 

#define IAvatarExemplar_UnWield(This)	\
    ( (This)->lpVtbl -> UnWield(This) ) 

#define IAvatarExemplar_Teleport(This,pNewRoom)	\
    ( (This)->lpVtbl -> Teleport(This,pNewRoom) ) 

#define IAvatarExemplar_Query(This,bstrTitle,bstrHTML,bstrPrompt,bstrDefault,varNotifyObject,varNotifyMethod,varNotifyParam)	\
    ( (This)->lpVtbl -> Query(This,bstrTitle,bstrHTML,bstrPrompt,bstrDefault,varNotifyObject,varNotifyMethod,varNotifyParam) ) 

#define IAvatarExemplar_Alert(This,bstrTitle,bstrText,varNotifyObject,varNotifyMethod,varNotifyParam)	\
    ( (This)->lpVtbl -> Alert(This,bstrTitle,bstrText,varNotifyObject,varNotifyMethod,varNotifyParam) ) 

#define IAvatarExemplar_Confirm(This,bstrTitle,bstrText,varNotifyObject,varNotifyMethod,varNotifyParam)	\
    ( (This)->lpVtbl -> Confirm(This,bstrTitle,bstrText,varNotifyObject,varNotifyMethod,varNotifyParam) ) 

#define IAvatarExemplar_Prompt(This,bstrTitle,bstrPrompt,bstrDefault,varNotifyObject,varNotifyMethod,varNotifyParam)	\
    ( (This)->lpVtbl -> Prompt(This,bstrTitle,bstrPrompt,bstrDefault,varNotifyObject,varNotifyMethod,varNotifyParam) ) 

#define IAvatarExemplar_ClientQuery(This,bstrTitle,bstrHTML,bstrPrompt,bstrDefault,pNotifyObject,bstrNotifyMethod,pNotifyParam)	\
    ( (This)->lpVtbl -> ClientQuery(This,bstrTitle,bstrHTML,bstrPrompt,bstrDefault,pNotifyObject,bstrNotifyMethod,pNotifyParam) ) 

#define IAvatarExemplar_QueryReturn(This,pArg,boolOK,bstrResult)	\
    ( (This)->lpVtbl -> QueryReturn(This,pArg,boolOK,bstrResult) ) 

#define IAvatarExemplar_OnSystemCreate(This,pthing)	\
    ( (This)->lpVtbl -> OnSystemCreate(This,pthing) ) 

#define IAvatarExemplar_OnSystemConnect(This,pWho)	\
    ( (This)->lpVtbl -> OnSystemConnect(This,pWho) ) 

#define IAvatarExemplar_OnSystemDisconnect(This,pWho)	\
    ( (This)->lpVtbl -> OnSystemDisconnect(This,pWho) ) 

#define IAvatarExemplar_ThumbnailFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> ThumbnailFileName(This,pbstrFileName) ) 

#define IAvatarExemplar_OnContainerSystemTell(This,pfrom,pToList,bstrSay,lval,pbstrOut)	\
    ( (This)->lpVtbl -> OnContainerSystemTell(This,pfrom,pToList,bstrSay,lval,pbstrOut) ) 

#define IAvatarExemplar_OnSystemTell(This,pfrom,pToList,bstrSay,lval,pbstrOut)	\
    ( (This)->lpVtbl -> OnSystemTell(This,pfrom,pToList,bstrSay,lval,pbstrOut) ) 

#define IAvatarExemplar_OnPeerSystemTell(This,pfrom,pToList,bstrSay,lval)	\
    ( (This)->lpVtbl -> OnPeerSystemTell(This,pfrom,pToList,bstrSay,lval) ) 

#define IAvatarExemplar_OnSystemPreCreate(This,pExemplar,pbOkToCreate)	\
    ( (This)->lpVtbl -> OnSystemPreCreate(This,pExemplar,pbOkToCreate) ) 

#define IAvatarExemplar_OnSystemPostCreate(This,pThing)	\
    ( (This)->lpVtbl -> OnSystemPostCreate(This,pThing) ) 

#define IAvatarExemplar_OnSystemPreDestroy(This,pthing,pbOkToDestroy)	\
    ( (This)->lpVtbl -> OnSystemPreDestroy(This,pthing,pbOkToDestroy) ) 

#define IAvatarExemplar_OnSystemPostDestroy(This,pthing)	\
    ( (This)->lpVtbl -> OnSystemPostDestroy(This,pthing) ) 

#define IAvatarExemplar_SetObjectQuota(This,lQuota)	\
    ( (This)->lpVtbl -> SetObjectQuota(This,lQuota) ) 

#define IAvatarExemplar_AddDefaultKeys(This)	\
    ( (This)->lpVtbl -> AddDefaultKeys(This) ) 

#define IAvatarExemplar_OnAction(This,bstrAction,bstrDescription,pParticipants)	\
    ( (This)->lpVtbl -> OnAction(This,bstrAction,bstrDescription,pParticipants) ) 

#define IAvatarExemplar_OnIsAuthorChanged(This,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnIsAuthorChanged(This,lHint,varHintData) ) 

#define IAvatarExemplar_OnIsWizardOrIsAuthorAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnIsWizardOrIsAuthorAccess(This,lPerms,bReturnValue) ) 

#define IAvatarExemplar_OnWizardAccess(This,lPerms,bReturnValue)	\
    ( (This)->lpVtbl -> OnWizardAccess(This,lPerms,bReturnValue) ) 

#define IAvatarExemplar_FireConnectAvatar(This,pthing)	\
    ( (This)->lpVtbl -> FireConnectAvatar(This,pthing) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAvatarExemplar_INTERFACE_DEFINED__ */


#ifndef __IHostExemplar_INTERFACE_DEFINED__
#define __IHostExemplar_INTERFACE_DEFINED__

/* interface IHostExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IHostExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44001330-1B82-11d2-AC71-00104B26A373")
    IHostExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowLogOffDialog( 
            /* [in] */ IThing *pTarget) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LogOff( 
            /* [in] */ IThing *pTarget,
            /* [in] */ BSTR bstrReason) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHostExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHostExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHostExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHostExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHostExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHostExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHostExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHostExemplar * This,
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
            IHostExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IHostExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IHostExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IHostExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IHostExemplar * This);
        
        DECLSPEC_XFGVIRT(IHostExemplar, ShowLogOffDialog)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowLogOffDialog )( 
            IHostExemplar * This,
            /* [in] */ IThing *pTarget);
        
        DECLSPEC_XFGVIRT(IHostExemplar, LogOff)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LogOff )( 
            IHostExemplar * This,
            /* [in] */ IThing *pTarget,
            /* [in] */ BSTR bstrReason);
        
        END_INTERFACE
    } IHostExemplarVtbl;

    interface IHostExemplar
    {
        CONST_VTBL struct IHostExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHostExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHostExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHostExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHostExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHostExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHostExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHostExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHostExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IHostExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IHostExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IHostExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IHostExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IHostExemplar_ShowLogOffDialog(This,pTarget)	\
    ( (This)->lpVtbl -> ShowLogOffDialog(This,pTarget) ) 

#define IHostExemplar_LogOff(This,pTarget,bstrReason)	\
    ( (This)->lpVtbl -> LogOff(This,pTarget,bstrReason) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHostExemplar_INTERFACE_DEFINED__ */


#ifndef __IPortalExemplar_INTERFACE_DEFINED__
#define __IPortalExemplar_INTERFACE_DEFINED__

/* interface IPortalExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPortalExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99AD3624-AAB5-11D0-BAE3-00C04FC2CAB1")
    IPortalExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowTransportDialog( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TransportMenu( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Transport( 
            /* [in] */ IThing *pThing,
            /* [defaultvalue][optional][in] */ int iIndex = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TransportTo( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AllowTransport( 
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AcceptTransport( 
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDestinationByID( 
            /* [in] */ long lNewID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPortalExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPortalExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPortalExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPortalExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPortalExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPortalExemplar * This,
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
            IPortalExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IPortalExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IPortalExemplar, ShowTransportDialog)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowTransportDialog )( 
            IPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IPortalExemplar, TransportMenu)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TransportMenu )( 
            IPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IPortalExemplar, Transport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Transport )( 
            IPortalExemplar * This,
            /* [in] */ IThing *pThing,
            /* [defaultvalue][optional][in] */ int iIndex);
        
        DECLSPEC_XFGVIRT(IPortalExemplar, TransportTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TransportTo )( 
            IPortalExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IPortalExemplar, AllowTransport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AllowTransport )( 
            IPortalExemplar * This,
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPortalExemplar, AcceptTransport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AcceptTransport )( 
            IPortalExemplar * This,
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPortalExemplar, SetDestinationByID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDestinationByID )( 
            IPortalExemplar * This,
            /* [in] */ long lNewID);
        
        END_INTERFACE
    } IPortalExemplarVtbl;

    interface IPortalExemplar
    {
        CONST_VTBL struct IPortalExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPortalExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPortalExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPortalExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPortalExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPortalExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPortalExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPortalExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPortalExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IPortalExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IPortalExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IPortalExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IPortalExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IPortalExemplar_ShowTransportDialog(This)	\
    ( (This)->lpVtbl -> ShowTransportDialog(This) ) 

#define IPortalExemplar_TransportMenu(This)	\
    ( (This)->lpVtbl -> TransportMenu(This) ) 

#define IPortalExemplar_Transport(This,pThing,iIndex)	\
    ( (This)->lpVtbl -> Transport(This,pThing,iIndex) ) 

#define IPortalExemplar_TransportTo(This,pThing)	\
    ( (This)->lpVtbl -> TransportTo(This,pThing) ) 

#define IPortalExemplar_AllowTransport(This,pThing,pbool)	\
    ( (This)->lpVtbl -> AllowTransport(This,pThing,pbool) ) 

#define IPortalExemplar_AcceptTransport(This,pThing,pbool)	\
    ( (This)->lpVtbl -> AcceptTransport(This,pThing,pbool) ) 

#define IPortalExemplar_SetDestinationByID(This,lNewID)	\
    ( (This)->lpVtbl -> SetDestinationByID(This,lNewID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPortalExemplar_INTERFACE_DEFINED__ */


#ifndef __IIWPortalExemplar_INTERFACE_DEFINED__
#define __IIWPortalExemplar_INTERFACE_DEFINED__

/* interface IIWPortalExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IIWPortalExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFA01B4F-9F4C-11d1-80E8-00C04FC2A129")
    IIWPortalExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Transport( 
            /* [in] */ IThing *pThing,
            /* [defaultvalue][optional][in] */ int iIndex = 0) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIWPortalExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIWPortalExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIWPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIWPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIWPortalExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIWPortalExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIWPortalExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIWPortalExemplar * This,
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
            IIWPortalExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IIWPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IIWPortalExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IIWPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IIWPortalExemplar * This);
        
        DECLSPEC_XFGVIRT(IIWPortalExemplar, Transport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Transport )( 
            IIWPortalExemplar * This,
            /* [in] */ IThing *pThing,
            /* [defaultvalue][optional][in] */ int iIndex);
        
        END_INTERFACE
    } IIWPortalExemplarVtbl;

    interface IIWPortalExemplar
    {
        CONST_VTBL struct IIWPortalExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIWPortalExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIWPortalExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIWPortalExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIWPortalExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIWPortalExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIWPortalExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIWPortalExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IIWPortalExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IIWPortalExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IIWPortalExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IIWPortalExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IIWPortalExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IIWPortalExemplar_Transport(This,pThing,iIndex)	\
    ( (This)->lpVtbl -> Transport(This,pThing,iIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIWPortalExemplar_INTERFACE_DEFINED__ */


#ifndef __IRoomExemplar_INTERFACE_DEFINED__
#define __IRoomExemplar_INTERFACE_DEFINED__

/* interface IRoomExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRoomExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99AD3626-AAB5-11D0-BAE3-00C04FC2CAB1")
    IRoomExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Expel( 
            /* [in] */ IThing *pThing,
            /* [in] */ IThing *pDoor,
            /* [retval][out] */ VARIANT_BOOL *pBool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TransmitWhisper( 
            /* [in] */ BSTR bstrMsg,
            /* [in] */ VARIANT varNameList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReceiveWhisper( 
            /* [in] */ BSTR bstrMsg,
            /* [in] */ IPropertyList *pTargetList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AllowEnter( 
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AllowLeave( 
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemCreate( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnSystemDestroy( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentSystemConnect( 
            /* [in] */ IThing *pWho) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentSystemDisconnect( 
            /* [in] */ IThing *pWho) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentSystemTell( 
            /* [in] */ IThing *pfrom,
            /* [in] */ IPropertyList *pToList,
            /* [in] */ BSTR bstrSay,
            /* [in] */ long lval,
            /* [retval][out] */ BSTR *pbstrOut) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentEnter( 
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWhat) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnContentLeave( 
            /* [in] */ IThing *pOldWhere,
            /* [in] */ IThing *pWhat) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRoomExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRoomExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRoomExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRoomExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRoomExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRoomExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRoomExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRoomExemplar * This,
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
            IRoomExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IRoomExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IRoomExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IRoomExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IRoomExemplar * This);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, Expel)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Expel )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pThing,
            /* [in] */ IThing *pDoor,
            /* [retval][out] */ VARIANT_BOOL *pBool);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, TransmitWhisper)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TransmitWhisper )( 
            IRoomExemplar * This,
            /* [in] */ BSTR bstrMsg,
            /* [in] */ VARIANT varNameList);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, ReceiveWhisper)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReceiveWhisper )( 
            IRoomExemplar * This,
            /* [in] */ BSTR bstrMsg,
            /* [in] */ IPropertyList *pTargetList);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, AllowEnter)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AllowEnter )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, AllowLeave)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AllowLeave )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pThing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, OnSystemCreate)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemCreate )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, OnSystemDestroy)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnSystemDestroy )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, OnContentSystemConnect)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentSystemConnect )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pWho);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, OnContentSystemDisconnect)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentSystemDisconnect )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pWho);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, OnContentSystemTell)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentSystemTell )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pfrom,
            /* [in] */ IPropertyList *pToList,
            /* [in] */ BSTR bstrSay,
            /* [in] */ long lval,
            /* [retval][out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, OnContentEnter)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentEnter )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pWhere,
            /* [in] */ IThing *pWhat);
        
        DECLSPEC_XFGVIRT(IRoomExemplar, OnContentLeave)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnContentLeave )( 
            IRoomExemplar * This,
            /* [in] */ IThing *pOldWhere,
            /* [in] */ IThing *pWhat);
        
        END_INTERFACE
    } IRoomExemplarVtbl;

    interface IRoomExemplar
    {
        CONST_VTBL struct IRoomExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRoomExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRoomExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRoomExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRoomExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRoomExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRoomExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRoomExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRoomExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IRoomExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IRoomExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IRoomExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IRoomExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IRoomExemplar_Expel(This,pThing,pDoor,pBool)	\
    ( (This)->lpVtbl -> Expel(This,pThing,pDoor,pBool) ) 

#define IRoomExemplar_TransmitWhisper(This,bstrMsg,varNameList)	\
    ( (This)->lpVtbl -> TransmitWhisper(This,bstrMsg,varNameList) ) 

#define IRoomExemplar_ReceiveWhisper(This,bstrMsg,pTargetList)	\
    ( (This)->lpVtbl -> ReceiveWhisper(This,bstrMsg,pTargetList) ) 

#define IRoomExemplar_AllowEnter(This,pThing,pbool)	\
    ( (This)->lpVtbl -> AllowEnter(This,pThing,pbool) ) 

#define IRoomExemplar_AllowLeave(This,pThing,pbool)	\
    ( (This)->lpVtbl -> AllowLeave(This,pThing,pbool) ) 

#define IRoomExemplar_OnSystemCreate(This,pThing)	\
    ( (This)->lpVtbl -> OnSystemCreate(This,pThing) ) 

#define IRoomExemplar_OnSystemDestroy(This,pThing)	\
    ( (This)->lpVtbl -> OnSystemDestroy(This,pThing) ) 

#define IRoomExemplar_OnContentSystemConnect(This,pWho)	\
    ( (This)->lpVtbl -> OnContentSystemConnect(This,pWho) ) 

#define IRoomExemplar_OnContentSystemDisconnect(This,pWho)	\
    ( (This)->lpVtbl -> OnContentSystemDisconnect(This,pWho) ) 

#define IRoomExemplar_OnContentSystemTell(This,pfrom,pToList,bstrSay,lval,pbstrOut)	\
    ( (This)->lpVtbl -> OnContentSystemTell(This,pfrom,pToList,bstrSay,lval,pbstrOut) ) 

#define IRoomExemplar_OnContentEnter(This,pWhere,pWhat)	\
    ( (This)->lpVtbl -> OnContentEnter(This,pWhere,pWhat) ) 

#define IRoomExemplar_OnContentLeave(This,pOldWhere,pWhat)	\
    ( (This)->lpVtbl -> OnContentLeave(This,pOldWhere,pWhat) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRoomExemplar_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vwsysex_0000_0008 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("0E240D82-113F-11d0-89A9-00A0C9054129") 
enum TellConstant
    {
        tcSay	= 0,
        tcEmote	= 1,
        tcThink	= 2,
        tcWhisper	= 3,
        tcAnnounce	= 4,
        tcGesture	= 5,
        tcShout	= 6,
        tcReport	= 7,
        tcAction	= 8
    } 	TellConstant;



extern RPC_IF_HANDLE __MIDL_itf_vwsysex_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwsysex_0000_0008_v0_0_s_ifspec;

#ifndef __IStateMachineExemplar_INTERFACE_DEFINED__
#define __IStateMachineExemplar_INTERFACE_DEFINED__

/* interface IStateMachineExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IStateMachineExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("69A2A200-F187-11d1-A392-0000F807558D")
    IStateMachineExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchAddStateMachine( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrInitialValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchSetState( 
            /* [in] */ BSTR bstrState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchSetStateMachineState( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchIsInState( 
            /* [in] */ BSTR bstrState,
            /* [retval][out] */ VARIANT_BOOL *pboolResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchIsStateMachineInState( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [retval][out] */ VARIANT_BOOL *pboolResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchSetIfState( 
            /* [in] */ BSTR bstrOldState,
            /* [in] */ BSTR bstrNewState) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchSetStateMachineIfState( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrOldState,
            /* [in] */ BSTR bstrNewState) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE SMchGetStateConcatName( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrOut) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE SMchGetCurrentStateConcatName( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrOut) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchGetStateProperty( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrPropertyName,
            /* [retval][out] */ VARIANT *var) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchPutStateProperty( 
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchPutStateMachineStateProperty( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchPutInlineStateMethod( 
            /* [in] */ long lFlags,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ BSTR bstrCode,
            /* [defaultvalue][optional][in] */ VARIANT varParams) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchPutStateMachineInlineStateMethod( 
            /* [in] */ long lFlags,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ BSTR bstrCode,
            /* [defaultvalue][optional][in] */ VARIANT varParams) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchGetInlineStateMethod( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName,
            /* [retval][out] */ BSTR *bstrCode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchAddStateMethod( 
            /* [in] */ long lFlags,
            /* [in] */ IModule *pModule,
            /* [in] */ BSTR bstrModuleMethodName,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SMchGetStateMethodFlags( 
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName,
            /* [retval][out] */ long *plFlags) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE SMchOnInvokeMethodFailed( 
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ IPropertyList *plistParams) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStateMachineExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStateMachineExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStateMachineExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStateMachineExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStateMachineExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStateMachineExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStateMachineExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStateMachineExemplar * This,
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
            IStateMachineExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IStateMachineExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IStateMachineExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IStateMachineExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IStateMachineExemplar * This);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchAddStateMachine)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchAddStateMachine )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrInitialValue);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchSetState)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchSetState )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrState);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchSetStateMachineState)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchSetStateMachineState )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchIsInState)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchIsInState )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrState,
            /* [retval][out] */ VARIANT_BOOL *pboolResult);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchIsStateMachineInState)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchIsStateMachineInState )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [retval][out] */ VARIANT_BOOL *pboolResult);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchSetIfState)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchSetIfState )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrOldState,
            /* [in] */ BSTR bstrNewState);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchSetStateMachineIfState)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchSetStateMachineIfState )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrOldState,
            /* [in] */ BSTR bstrNewState);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchGetStateConcatName)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *SMchGetStateConcatName )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchGetCurrentStateConcatName)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *SMchGetCurrentStateConcatName )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchGetStateProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchGetStateProperty )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrPropertyName,
            /* [retval][out] */ VARIANT *var);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchPutStateProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchPutStateProperty )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchPutStateMachineStateProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchPutStateMachineStateProperty )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchPutInlineStateMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchPutInlineStateMethod )( 
            IStateMachineExemplar * This,
            /* [in] */ long lFlags,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ BSTR bstrCode,
            /* [defaultvalue][optional][in] */ VARIANT varParams);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchPutStateMachineInlineStateMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchPutStateMachineInlineStateMethod )( 
            IStateMachineExemplar * This,
            /* [in] */ long lFlags,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ BSTR bstrCode,
            /* [defaultvalue][optional][in] */ VARIANT varParams);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchGetInlineStateMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchGetInlineStateMethod )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName,
            /* [retval][out] */ BSTR *bstrCode);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchAddStateMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchAddStateMethod )( 
            IStateMachineExemplar * This,
            /* [in] */ long lFlags,
            /* [in] */ IModule *pModule,
            /* [in] */ BSTR bstrModuleMethodName,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchGetStateMethodFlags)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SMchGetStateMethodFlags )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrStateMachineName,
            /* [in] */ BSTR bstrState,
            /* [in] */ BSTR bstrMethodName,
            /* [retval][out] */ long *plFlags);
        
        DECLSPEC_XFGVIRT(IStateMachineExemplar, SMchOnInvokeMethodFailed)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *SMchOnInvokeMethodFailed )( 
            IStateMachineExemplar * This,
            /* [in] */ BSTR bstrMethodName,
            /* [in] */ IPropertyList *plistParams);
        
        END_INTERFACE
    } IStateMachineExemplarVtbl;

    interface IStateMachineExemplar
    {
        CONST_VTBL struct IStateMachineExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStateMachineExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStateMachineExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStateMachineExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStateMachineExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStateMachineExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStateMachineExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStateMachineExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStateMachineExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IStateMachineExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IStateMachineExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IStateMachineExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IStateMachineExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IStateMachineExemplar_SMchAddStateMachine(This,bstrStateMachineName,bstrInitialValue)	\
    ( (This)->lpVtbl -> SMchAddStateMachine(This,bstrStateMachineName,bstrInitialValue) ) 

#define IStateMachineExemplar_SMchSetState(This,bstrState)	\
    ( (This)->lpVtbl -> SMchSetState(This,bstrState) ) 

#define IStateMachineExemplar_SMchSetStateMachineState(This,bstrStateMachineName,bstrState)	\
    ( (This)->lpVtbl -> SMchSetStateMachineState(This,bstrStateMachineName,bstrState) ) 

#define IStateMachineExemplar_SMchIsInState(This,bstrState,pboolResult)	\
    ( (This)->lpVtbl -> SMchIsInState(This,bstrState,pboolResult) ) 

#define IStateMachineExemplar_SMchIsStateMachineInState(This,bstrStateMachineName,bstrState,pboolResult)	\
    ( (This)->lpVtbl -> SMchIsStateMachineInState(This,bstrStateMachineName,bstrState,pboolResult) ) 

#define IStateMachineExemplar_SMchSetIfState(This,bstrOldState,bstrNewState)	\
    ( (This)->lpVtbl -> SMchSetIfState(This,bstrOldState,bstrNewState) ) 

#define IStateMachineExemplar_SMchSetStateMachineIfState(This,bstrStateMachineName,bstrOldState,bstrNewState)	\
    ( (This)->lpVtbl -> SMchSetStateMachineIfState(This,bstrStateMachineName,bstrOldState,bstrNewState) ) 

#define IStateMachineExemplar_SMchGetStateConcatName(This,bstrStateMachineName,bstrState,bstrName,pbstrOut)	\
    ( (This)->lpVtbl -> SMchGetStateConcatName(This,bstrStateMachineName,bstrState,bstrName,pbstrOut) ) 

#define IStateMachineExemplar_SMchGetCurrentStateConcatName(This,bstrStateMachineName,bstrName,pbstrOut)	\
    ( (This)->lpVtbl -> SMchGetCurrentStateConcatName(This,bstrStateMachineName,bstrName,pbstrOut) ) 

#define IStateMachineExemplar_SMchGetStateProperty(This,bstrStateMachineName,bstrState,bstrPropertyName,var)	\
    ( (This)->lpVtbl -> SMchGetStateProperty(This,bstrStateMachineName,bstrState,bstrPropertyName,var) ) 

#define IStateMachineExemplar_SMchPutStateProperty(This,bstrState,bstrPropertyName,var)	\
    ( (This)->lpVtbl -> SMchPutStateProperty(This,bstrState,bstrPropertyName,var) ) 

#define IStateMachineExemplar_SMchPutStateMachineStateProperty(This,bstrStateMachineName,bstrState,bstrPropertyName,var)	\
    ( (This)->lpVtbl -> SMchPutStateMachineStateProperty(This,bstrStateMachineName,bstrState,bstrPropertyName,var) ) 

#define IStateMachineExemplar_SMchPutInlineStateMethod(This,lFlags,bstrState,bstrMethodName,bstrCode,varParams)	\
    ( (This)->lpVtbl -> SMchPutInlineStateMethod(This,lFlags,bstrState,bstrMethodName,bstrCode,varParams) ) 

#define IStateMachineExemplar_SMchPutStateMachineInlineStateMethod(This,lFlags,bstrStateMachineName,bstrState,bstrMethodName,bstrCode,varParams)	\
    ( (This)->lpVtbl -> SMchPutStateMachineInlineStateMethod(This,lFlags,bstrStateMachineName,bstrState,bstrMethodName,bstrCode,varParams) ) 

#define IStateMachineExemplar_SMchGetInlineStateMethod(This,bstrStateMachineName,bstrState,bstrMethodName,bstrCode)	\
    ( (This)->lpVtbl -> SMchGetInlineStateMethod(This,bstrStateMachineName,bstrState,bstrMethodName,bstrCode) ) 

#define IStateMachineExemplar_SMchAddStateMethod(This,lFlags,pModule,bstrModuleMethodName,bstrStateMachineName,bstrState,bstrMethodName)	\
    ( (This)->lpVtbl -> SMchAddStateMethod(This,lFlags,pModule,bstrModuleMethodName,bstrStateMachineName,bstrState,bstrMethodName) ) 

#define IStateMachineExemplar_SMchGetStateMethodFlags(This,bstrStateMachineName,bstrState,bstrMethodName,plFlags)	\
    ( (This)->lpVtbl -> SMchGetStateMethodFlags(This,bstrStateMachineName,bstrState,bstrMethodName,plFlags) ) 

#define IStateMachineExemplar_SMchOnInvokeMethodFailed(This,bstrMethodName,plistParams)	\
    ( (This)->lpVtbl -> SMchOnInvokeMethodFailed(This,bstrMethodName,plistParams) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStateMachineExemplar_INTERFACE_DEFINED__ */


#ifndef __IWebPageExemplar_INTERFACE_DEFINED__
#define __IWebPageExemplar_INTERFACE_DEFINED__

/* interface IWebPageExemplar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebPageExemplar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("63CA06F6-5CC2-11d2-82F0-00104B26A373")
    IWebPageExemplar : public IVWDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Show( void) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE OnLButtonUp( 
            /* [in] */ int hWnd,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWebPageExemplarVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebPageExemplar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebPageExemplar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebPageExemplar * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebPageExemplar * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebPageExemplar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebPageExemplar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebPageExemplar * This,
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
            IWebPageExemplar * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IWebPageExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IWebPageExemplar * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IWebPageExemplar * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IWebPageExemplar * This);
        
        DECLSPEC_XFGVIRT(IWebPageExemplar, Show)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            IWebPageExemplar * This);
        
        DECLSPEC_XFGVIRT(IWebPageExemplar, OnLButtonUp)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *OnLButtonUp )( 
            IWebPageExemplar * This,
            /* [in] */ int hWnd,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        END_INTERFACE
    } IWebPageExemplarVtbl;

    interface IWebPageExemplar
    {
        CONST_VTBL struct IWebPageExemplarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebPageExemplar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebPageExemplar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebPageExemplar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebPageExemplar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWebPageExemplar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWebPageExemplar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWebPageExemplar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWebPageExemplar_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IWebPageExemplar_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IWebPageExemplar_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IWebPageExemplar_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IWebPageExemplar_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 


#define IWebPageExemplar_Show(This)	\
    ( (This)->lpVtbl -> Show(This) ) 

#define IWebPageExemplar_OnLButtonUp(This,hWnd,x,y,pbool)	\
    ( (This)->lpVtbl -> OnLButtonUp(This,hWnd,x,y,pbool) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebPageExemplar_INTERFACE_DEFINED__ */


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


