

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwprop.idl:
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

#ifndef __vwprop_h__
#define __vwprop_h__

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

#ifndef __IPropertySecurity_FWD_DEFINED__
#define __IPropertySecurity_FWD_DEFINED__
typedef interface IPropertySecurity IPropertySecurity;

#endif 	/* __IPropertySecurity_FWD_DEFINED__ */


#ifndef __IObjectProperty_FWD_DEFINED__
#define __IObjectProperty_FWD_DEFINED__
typedef interface IObjectProperty IObjectProperty;

#endif 	/* __IObjectProperty_FWD_DEFINED__ */


#ifndef __IPropertyCollection_FWD_DEFINED__
#define __IPropertyCollection_FWD_DEFINED__
typedef interface IPropertyCollection IPropertyCollection;

#endif 	/* __IPropertyCollection_FWD_DEFINED__ */


#ifndef __IPropertyList_FWD_DEFINED__
#define __IPropertyList_FWD_DEFINED__
typedef interface IPropertyList IPropertyList;

#endif 	/* __IPropertyList_FWD_DEFINED__ */


#ifndef __IPropertyMap_FWD_DEFINED__
#define __IPropertyMap_FWD_DEFINED__
typedef interface IPropertyMap IPropertyMap;

#endif 	/* __IPropertyMap_FWD_DEFINED__ */


#ifndef __IThing_FWD_DEFINED__
#define __IThing_FWD_DEFINED__
typedef interface IThing IThing;

#endif 	/* __IThing_FWD_DEFINED__ */


#ifndef __IModule_FWD_DEFINED__
#define __IModule_FWD_DEFINED__
typedef interface IModule IModule;

#endif 	/* __IModule_FWD_DEFINED__ */


#ifndef __ICOMModule_FWD_DEFINED__
#define __ICOMModule_FWD_DEFINED__
typedef interface ICOMModule ICOMModule;

#endif 	/* __ICOMModule_FWD_DEFINED__ */


#ifndef __IScriptModule_FWD_DEFINED__
#define __IScriptModule_FWD_DEFINED__
typedef interface IScriptModule IScriptModule;

#endif 	/* __IScriptModule_FWD_DEFINED__ */


#ifndef __IMethod_FWD_DEFINED__
#define __IMethod_FWD_DEFINED__
typedef interface IMethod IMethod;

#endif 	/* __IMethod_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwbuffer.h"
#include "vwobject.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwprop_0000_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_vwprop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwprop_0000_0000_v0_0_s_ifspec;

#ifndef __IPropertySecurity_INTERFACE_DEFINED__
#define __IPropertySecurity_INTERFACE_DEFINED__

/* interface IPropertySecurity */
/* [unique][helpstring][dual][uuid][object] */ 

#define	PSBIT_NONE	( 0 )

#define	PSBIT_COPYONGET	( 0x1 )

#define	PSBIT_VOLATILE	( 0x2 )

#define	PSBIT_LOCAL	( 0x4 )

#define	PSBIT_NOTLOGGED	( PSBIT_VOLATILE )

#define	PSBIT_NOTREMOTED	( PSBIT_LOCAL )

#define	PSBIT_BYVAL	( 0x8 )

#define	PSBIT_OWNERONLY	( 0x10 )

#define	PSBIT_NOTIFYONCHANGE	( 0x20 )

#define	PSBIT_NOTIFYONACCESS	( 0x40 )

#define	PSBIT_FRIENDLY	( 0x80 )

#define	PSBIT_HIDDEN	( 0x100 )

#define	PSBIT_CLIENTPROPERTY	( 0x200 )

#define	PSBIT_INTERNALLYADDED	( 0x400 )

#define	PSBIT_INTERNALLYSET	( 0x800 )

#define	PSBIT_CONSTANT	( 0x1000 )

#define	PSBIT_ENABLED	( 0x1000000 )

#define	PSMASK_ENABLED	( 0xff000000 )

#define	PSBIT_SYSTEMOVERRIDE	( 0x2000000 )

#define	PS_NONE	( 0 )

#define	PS_READ	( 0x1 )

#define	PS_WRITE	( 0x2 )

#define	PS_EXECUTE	( 0x4 )

#define	PS_ADD	( 0x8 )

#define	PS_OWNER	( 0x1 )

#define	PS_EXEMPLAR	( 0x2 )

#define	PS_ALL	( 0x4 )

#define	PS_OWNER_R	( PS_READ )

#define	PS_OWNER_RW	( ( PS_READ | PS_WRITE )  )

#define	PS_OWNER_RWA	( ( ( PS_READ | PS_WRITE )  | PS_ADD )  )

#define	PS_OWNER_E	( PS_EXECUTE )

#define	PS_EXEMPLAR_R	( ( PS_READ << 8 )  )

#define	PS_EXEMPLAR_RW	( ( ( PS_READ << 8 )  | ( PS_WRITE << 8 )  )  )

#define	PS_EXEMPLAR_RWA	( ( ( ( PS_READ << 8 )  | ( PS_WRITE << 8 )  )  | ( PS_ADD << 8 )  )  )

#define	PS_EXEMPLAR_E	( ( PS_EXECUTE << 8 )  )

#define	PS_ALL_R	( ( PS_READ << 16 )  )

#define	PS_ALL_RW	( ( ( PS_READ << 16 )  | ( PS_WRITE << 16 )  )  )

#define	PS_ALL_RWA	( ( ( ( PS_READ << 16 )  | ( PS_WRITE << 16 )  )  | ( PS_ADD << 16 )  )  )

#define	PS_ALL_E	( ( PS_EXECUTE << 16 )  )

#define	PS_ALLACCESSPROPERTY	( ( ( PS_OWNER_RW | PS_EXEMPLAR_RW )  | PS_ALL_RW )  )

#define	PS_NOACCESSPROPERTY	( PS_NONE )

#define	PS_ALLEXECUTEMETHOD	( ( ( ( ( ( PS_OWNER_RWA | PS_EXEMPLAR_RWA )  | PS_ALL_R )  | PS_OWNER_E )  | PS_EXEMPLAR_E )  | PS_ALL_E )  )

#define	PS_GLOBALSYSTEMCONSTANT	( PS_ALLACCESSPROPERTY )

#define	PSBIT_GLOBALSYSTEMCONSTANT	( ( ( PSBIT_COPYONGET | PSBIT_INTERNALLYADDED )  | PSBIT_CONSTANT )  )

#define	PS_GLOBALDEFAULTMETHOD	( ( ( ( ( ( PS_OWNER_RWA | PS_EXECUTE )  | PS_EXEMPLAR_RW )  | ( PS_EXECUTE << 8 )  )  | PS_ALL_R )  | PS_ALL_E )  )

#define	PSBIT_GLOBALDEFAULTMETHOD	( ( PSBIT_INTERNALLYADDED | PSBIT_INTERNALLYSET )  )

#define	PS_WORLDOWNERPROPERTY	( PS_ALLACCESSPROPERTY )

#define	PSBIT_WORLDOWNERPROPERTY	( ( PSBIT_COPYONGET | PSBIT_INTERNALLYADDED )  )

#define	PS_WORLDOWNERCOLLECTION	( ( ( PS_OWNER_RWA | ( PS_READ << 8 )  )  | ( PS_READ << 16 )  )  )

#define	PS_SYSTEMPROPERTY	( ( ( PS_OWNER_RW | PS_EXEMPLAR_RW )  | PS_ALL_R )  )

#define	PSBIT_SYSTEMPROPERTY	( ( PSBIT_COPYONGET | PSBIT_INTERNALLYADDED )  )

#define	PS_EVENTHANDLER	( ( ( ( ( PS_READ | PS_EXECUTE )  | ( PS_READ << 8 )  )  | ( PS_EXECUTE << 8 )  )  | PS_ALL_R )  )

#define	PSBIT_EVENTHANDLER	( PSBIT_INTERNALLYADDED )

#define	PSBIT_SYSTEMEVENTHANDLER	( ( ( PSBIT_INTERNALLYADDED | PSBIT_INTERNALLYSET )  | PSBIT_HIDDEN )  )

#define	PS_EXEMPLARDEFAULTCOLLECTION	( ( ( PS_OWNER_RWA | PS_EXEMPLAR_RWA )  | PS_ALL_R )  )

#define	PS_EXEMPLARDEFAULTPROPERTY	( ( ( PS_OWNER_RWA | PS_EXEMPLAR_RW )  | PS_ALL_R )  )

#define	PSBIT_EXEMPLARDEFAULTPROPERTY	( ( PSBIT_COPYONGET | PSBIT_INTERNALLYADDED )  )

#define	PS_EXEMPLARDEFAULTMETHOD	( ( ( ( ( PS_OWNER_RWA | PS_EXECUTE )  | PS_EXEMPLAR_RW )  | ( PS_EXECUTE << 8 )  )  | PS_ALL_R )  )

#define	PSBIT_EXEMPLARDEFAULTMETHOD	( PSBIT_INTERNALLYADDED )

#define	PS_SCRIPTDEFAULTCOLLECTION	( PS_EXEMPLARDEFAULTCOLLECTION )

#define	PS_SCRIPTDEFAULTPROPERTY	( PS_EXEMPLARDEFAULTPROPERTY )

#define	PSBIT_SCRIPTDEFAULTPROPERTY	( PSBIT_COPYONGET )

#define	PS_SCRIPTDEFAULTMETHOD	( PS_EXEMPLARDEFAULTMETHOD )

#define	PSBIT_SCRIPTDEFAULTMETHOD	( PSBIT_NONE )


EXTERN_C const IID IID_IPropertySecurity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9842-A417-11CF-9BF0-0080C7A56A8A")
    IPropertySecurity : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWorld *pWorld,
            /* [in] */ IThing *pExemplar,
            /* [in] */ IPropertySecurity *pSecurity) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Cleanup( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_World( 
            /* [retval][out] */ IWorld **ppworld) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_World( 
            /* [in] */ IWorld *pworld) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Exemplar( 
            /* [retval][out] */ IThing **ppExemplar) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Exemplar( 
            /* [in] */ IThing *pExemplar) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Instance( 
            /* [retval][out] */ IThing **ppInstance) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Instance( 
            /* [in] */ IThing *pInstance) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Permissions( 
            /* [retval][out] */ long *ulFlags) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Permissions( 
            /* [in] */ long ulFlags) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Bits( 
            /* [retval][out] */ long *bits) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Bits( 
            /* [in] */ long bits) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BitState( 
            /* [in] */ long bits,
            /* [retval][out] */ VARIANT_BOOL *bSet) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_BitState( 
            /* [in] */ long bits,
            /* [in] */ VARIANT_BOOL bSet) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_vtType( 
            /* [retval][out] */ unsigned short *vartype) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_vtType( 
            /* [in] */ unsigned short vartype) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyIID( 
            /* [retval][out] */ BSTR *pbstrIID) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_PropertyIID( 
            /* [in] */ BSTR bstrIID) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_PropertyIIDExt( 
            /* [retval][out] */ IID *piid) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_PropertyIIDExt( 
            /* [in] */ REFIID riid) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyType( 
            /* [retval][out] */ BSTR *bstrType) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_PropertyType( 
            /* [in] */ BSTR bstrType) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Marshall( 
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE UnMarshall( 
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ChangeMode( 
            /* [in] */ BSTR bstrMode) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE QueryMode( 
            /* [in] */ BSTR bstrGroup,
            /* [in] */ BSTR bstrPermission,
            /* [retval][out] */ VARIANT_BOOL *bPermitted) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CheckSecurity( 
            /* [in] */ unsigned long ulFlags,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [retval][out] */ VARIANT_BOOL *pbSuccess) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CopyPermission( 
            /* [in] */ IPropertySecurity *pFrom) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Enable( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertySecurityVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertySecurity * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertySecurity * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertySecurity * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPropertySecurity * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPropertySecurity * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPropertySecurity * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPropertySecurity * This,
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
        
        DECLSPEC_XFGVIRT(IPropertySecurity, Initialize)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPropertySecurity * This,
            /* [in] */ IWorld *pWorld,
            /* [in] */ IThing *pExemplar,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, Cleanup)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Cleanup )( 
            IPropertySecurity * This);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IPropertySecurity * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IPropertySecurity * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_Exemplar)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exemplar )( 
            IPropertySecurity * This,
            /* [retval][out] */ IThing **ppExemplar);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_Exemplar)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Exemplar )( 
            IPropertySecurity * This,
            /* [in] */ IThing *pExemplar);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_Instance)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Instance )( 
            IPropertySecurity * This,
            /* [retval][out] */ IThing **ppInstance);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_Instance)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Instance )( 
            IPropertySecurity * This,
            /* [in] */ IThing *pInstance);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_Property)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            IPropertySecurity * This,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_Property)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Property )( 
            IPropertySecurity * This,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_Permissions)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Permissions )( 
            IPropertySecurity * This,
            /* [retval][out] */ long *ulFlags);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_Permissions)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Permissions )( 
            IPropertySecurity * This,
            /* [in] */ long ulFlags);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_Bits)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bits )( 
            IPropertySecurity * This,
            /* [retval][out] */ long *bits);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_Bits)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Bits )( 
            IPropertySecurity * This,
            /* [in] */ long bits);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_BitState)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitState )( 
            IPropertySecurity * This,
            /* [in] */ long bits,
            /* [retval][out] */ VARIANT_BOOL *bSet);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_BitState)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_BitState )( 
            IPropertySecurity * This,
            /* [in] */ long bits,
            /* [in] */ VARIANT_BOOL bSet);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_vtType)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_vtType )( 
            IPropertySecurity * This,
            /* [retval][out] */ unsigned short *vartype);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_vtType)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_vtType )( 
            IPropertySecurity * This,
            /* [in] */ unsigned short vartype);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_PropertyIID)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyIID )( 
            IPropertySecurity * This,
            /* [retval][out] */ BSTR *pbstrIID);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_PropertyIID)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyIID )( 
            IPropertySecurity * This,
            /* [in] */ BSTR bstrIID);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_PropertyIIDExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyIIDExt )( 
            IPropertySecurity * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_PropertyIIDExt)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyIIDExt )( 
            IPropertySecurity * This,
            /* [in] */ REFIID riid);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, get_PropertyType)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyType )( 
            IPropertySecurity * This,
            /* [retval][out] */ BSTR *bstrType);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, put_PropertyType)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyType )( 
            IPropertySecurity * This,
            /* [in] */ BSTR bstrType);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IPropertySecurity * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IPropertySecurity * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, ChangeMode)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ChangeMode )( 
            IPropertySecurity * This,
            /* [in] */ BSTR bstrMode);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, QueryMode)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *QueryMode )( 
            IPropertySecurity * This,
            /* [in] */ BSTR bstrGroup,
            /* [in] */ BSTR bstrPermission,
            /* [retval][out] */ VARIANT_BOOL *bPermitted);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, CheckSecurity)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CheckSecurity )( 
            IPropertySecurity * This,
            /* [in] */ unsigned long ulFlags,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [retval][out] */ VARIANT_BOOL *pbSuccess);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, CopyPermission)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CopyPermission )( 
            IPropertySecurity * This,
            /* [in] */ IPropertySecurity *pFrom);
        
        DECLSPEC_XFGVIRT(IPropertySecurity, Enable)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IPropertySecurity * This);
        
        END_INTERFACE
    } IPropertySecurityVtbl;

    interface IPropertySecurity
    {
        CONST_VTBL struct IPropertySecurityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertySecurity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertySecurity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertySecurity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertySecurity_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPropertySecurity_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPropertySecurity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPropertySecurity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPropertySecurity_Initialize(This,pWorld,pExemplar,pSecurity)	\
    ( (This)->lpVtbl -> Initialize(This,pWorld,pExemplar,pSecurity) ) 

#define IPropertySecurity_Cleanup(This)	\
    ( (This)->lpVtbl -> Cleanup(This) ) 

#define IPropertySecurity_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IPropertySecurity_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IPropertySecurity_get_Exemplar(This,ppExemplar)	\
    ( (This)->lpVtbl -> get_Exemplar(This,ppExemplar) ) 

#define IPropertySecurity_put_Exemplar(This,pExemplar)	\
    ( (This)->lpVtbl -> put_Exemplar(This,pExemplar) ) 

#define IPropertySecurity_get_Instance(This,ppInstance)	\
    ( (This)->lpVtbl -> get_Instance(This,ppInstance) ) 

#define IPropertySecurity_put_Instance(This,pInstance)	\
    ( (This)->lpVtbl -> put_Instance(This,pInstance) ) 

#define IPropertySecurity_get_Property(This,pvar)	\
    ( (This)->lpVtbl -> get_Property(This,pvar) ) 

#define IPropertySecurity_put_Property(This,var)	\
    ( (This)->lpVtbl -> put_Property(This,var) ) 

#define IPropertySecurity_get_Permissions(This,ulFlags)	\
    ( (This)->lpVtbl -> get_Permissions(This,ulFlags) ) 

#define IPropertySecurity_put_Permissions(This,ulFlags)	\
    ( (This)->lpVtbl -> put_Permissions(This,ulFlags) ) 

#define IPropertySecurity_get_Bits(This,bits)	\
    ( (This)->lpVtbl -> get_Bits(This,bits) ) 

#define IPropertySecurity_put_Bits(This,bits)	\
    ( (This)->lpVtbl -> put_Bits(This,bits) ) 

#define IPropertySecurity_get_BitState(This,bits,bSet)	\
    ( (This)->lpVtbl -> get_BitState(This,bits,bSet) ) 

#define IPropertySecurity_put_BitState(This,bits,bSet)	\
    ( (This)->lpVtbl -> put_BitState(This,bits,bSet) ) 

#define IPropertySecurity_get_vtType(This,vartype)	\
    ( (This)->lpVtbl -> get_vtType(This,vartype) ) 

#define IPropertySecurity_put_vtType(This,vartype)	\
    ( (This)->lpVtbl -> put_vtType(This,vartype) ) 

#define IPropertySecurity_get_PropertyIID(This,pbstrIID)	\
    ( (This)->lpVtbl -> get_PropertyIID(This,pbstrIID) ) 

#define IPropertySecurity_put_PropertyIID(This,bstrIID)	\
    ( (This)->lpVtbl -> put_PropertyIID(This,bstrIID) ) 

#define IPropertySecurity_get_PropertyIIDExt(This,piid)	\
    ( (This)->lpVtbl -> get_PropertyIIDExt(This,piid) ) 

#define IPropertySecurity_put_PropertyIIDExt(This,riid)	\
    ( (This)->lpVtbl -> put_PropertyIIDExt(This,riid) ) 

#define IPropertySecurity_get_PropertyType(This,bstrType)	\
    ( (This)->lpVtbl -> get_PropertyType(This,bstrType) ) 

#define IPropertySecurity_put_PropertyType(This,bstrType)	\
    ( (This)->lpVtbl -> put_PropertyType(This,bstrType) ) 

#define IPropertySecurity_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IPropertySecurity_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IPropertySecurity_ChangeMode(This,bstrMode)	\
    ( (This)->lpVtbl -> ChangeMode(This,bstrMode) ) 

#define IPropertySecurity_QueryMode(This,bstrGroup,bstrPermission,bPermitted)	\
    ( (This)->lpVtbl -> QueryMode(This,bstrGroup,bstrPermission,bPermitted) ) 

#define IPropertySecurity_CheckSecurity(This,ulFlags,bQuiet,pbSuccess)	\
    ( (This)->lpVtbl -> CheckSecurity(This,ulFlags,bQuiet,pbSuccess) ) 

#define IPropertySecurity_CopyPermission(This,pFrom)	\
    ( (This)->lpVtbl -> CopyPermission(This,pFrom) ) 

#define IPropertySecurity_Enable(This)	\
    ( (This)->lpVtbl -> Enable(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertySecurity_INTERFACE_DEFINED__ */


#ifndef __IObjectProperty_INTERFACE_DEFINED__
#define __IObjectProperty_INTERFACE_DEFINED__

/* interface IObjectProperty */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_PROPERTY_TYPE	( 100 )


EXTERN_C const IID IID_IObjectProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9840-A417-11CF-9BF0-0080C7A56A8A")
    IObjectProperty : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_RefCount( 
            /* [retval][out] */ DWORD *pdwRef) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_CLSID( 
            /* [retval][out] */ CLSID *pclsid) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_IID( 
            /* [retval][out] */ IID *piid) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_World( 
            /* [retval][out] */ IWorld **ppworld) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_World( 
            /* [in] */ IWorld *pworld) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Parent( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_PropertyName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_PropertyName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_Security( 
            /* [retval][out] */ IPropertySecurity **ppSecurity) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Security( 
            /* [in] */ IPropertySecurity *pSecurity) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsOfType( 
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ToAscii( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE Dump( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Marshall( 
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE UnMarshall( 
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE MarshallToScript( 
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectPropertyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectProperty * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectProperty * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectProperty * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IObjectProperty * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IObjectProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IObjectProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObjectProperty * This,
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
            IObjectProperty * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IObjectProperty * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IObjectProperty * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IObjectProperty * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IObjectProperty * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IObjectProperty * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IObjectProperty * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IObjectProperty * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IObjectProperty * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IObjectProperty * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IObjectProperty * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IObjectProperty * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IObjectProperty * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IObjectProperty * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IObjectProperty * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IObjectProperty * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IObjectProperty * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IObjectProperty * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IObjectProperty * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IObjectProperty * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IObjectProperty * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        END_INTERFACE
    } IObjectPropertyVtbl;

    interface IObjectProperty
    {
        CONST_VTBL struct IObjectPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObjectProperty_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IObjectProperty_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IObjectProperty_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IObjectProperty_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IObjectProperty_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IObjectProperty_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IObjectProperty_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IObjectProperty_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IObjectProperty_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IObjectProperty_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IObjectProperty_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IObjectProperty_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IObjectProperty_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IObjectProperty_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IObjectProperty_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IObjectProperty_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IObjectProperty_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IObjectProperty_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IObjectProperty_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IObjectProperty_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IObjectProperty_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectProperty_INTERFACE_DEFINED__ */


#ifndef __IPropertyCollection_INTERFACE_DEFINED__
#define __IPropertyCollection_INTERFACE_DEFINED__

/* interface IPropertyCollection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPropertyCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9844-A417-11CF-9BF0-0080C7A56A8A")
    IPropertyCollection : public IObjectProperty
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE FirstItem( 
            /* [out] */ BSTR *name,
            /* [out] */ VARIANT *pvar,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE NextItem( 
            /* [out] */ BSTR *name,
            /* [out] */ VARIANT *pvar,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_PropertyAtIndex( 
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [id][hidden][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppunk) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyCollectionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyCollection * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyCollection * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPropertyCollection * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPropertyCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPropertyCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPropertyCollection * This,
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
            IPropertyCollection * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IPropertyCollection * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IPropertyCollection * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IPropertyCollection * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IPropertyCollection * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IPropertyCollection * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IPropertyCollection * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IPropertyCollection * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IPropertyCollection * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IPropertyCollection * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IPropertyCollection * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IPropertyCollection * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IPropertyCollection * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IPropertyCollection * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IPropertyCollection * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IPropertyCollection * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IPropertyCollection * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IPropertyCollection * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IPropertyCollection * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IPropertyCollection * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IPropertyCollection * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get_IsEmpty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IPropertyCollection * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPropertyCollection * This,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, FirstItem)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *FirstItem )( 
            IPropertyCollection * This,
            /* [out] */ BSTR *name,
            /* [out] */ VARIANT *pvar,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, NextItem)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NextItem )( 
            IPropertyCollection * This,
            /* [out] */ BSTR *name,
            /* [out] */ VARIANT *pvar,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get_PropertyAtIndex)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyAtIndex )( 
            IPropertyCollection * This,
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get__NewEnum)
        /* [id][hidden][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IPropertyCollection * This,
            /* [retval][out] */ IUnknown **ppunk);
        
        END_INTERFACE
    } IPropertyCollectionVtbl;

    interface IPropertyCollection
    {
        CONST_VTBL struct IPropertyCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPropertyCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPropertyCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPropertyCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPropertyCollection_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IPropertyCollection_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IPropertyCollection_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IPropertyCollection_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IPropertyCollection_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IPropertyCollection_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IPropertyCollection_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IPropertyCollection_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IPropertyCollection_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IPropertyCollection_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IPropertyCollection_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IPropertyCollection_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IPropertyCollection_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IPropertyCollection_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IPropertyCollection_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IPropertyCollection_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IPropertyCollection_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IPropertyCollection_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IPropertyCollection_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IPropertyCollection_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IPropertyCollection_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IPropertyCollection_get_IsEmpty(This,pbool)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pbool) ) 

#define IPropertyCollection_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#define IPropertyCollection_FirstItem(This,name,pvar,pbool)	\
    ( (This)->lpVtbl -> FirstItem(This,name,pvar,pbool) ) 

#define IPropertyCollection_NextItem(This,name,pvar,pbool)	\
    ( (This)->lpVtbl -> NextItem(This,name,pvar,pbool) ) 

#define IPropertyCollection_get_PropertyAtIndex(This,index,pvar)	\
    ( (This)->lpVtbl -> get_PropertyAtIndex(This,index,pvar) ) 

#define IPropertyCollection_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyCollection_INTERFACE_DEFINED__ */


#ifndef __IPropertyList_INTERFACE_DEFINED__
#define __IPropertyList_INTERFACE_DEFINED__

/* interface IPropertyList */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_PROPERTYLIST_ADD	( 101 )

#define	DISPID_PROPERTYLIST_PROPERTY	( 102 )

#define	DISPID_PROPERTYLIST_REMOVE	( 103 )

#define	DISPID_PROPERTYLIST_REMOVEAT	( 104 )

#define	DISPID_PROPERTYLIST_REMOVEALL	( 105 )

#define	DISPID_PROPERTYLIST_INSERTAT	( 106 )


EXTERN_C const IID IID_IPropertyList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9846-A417-11CF-9BF0-0080C7A56A8A")
    IPropertyList : public IPropertyCollection
    {
    public:
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE InsertAt( 
            /* [in] */ long index,
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ long index,
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_PropertySecurity( 
            /* [in] */ long index,
            /* [retval][out] */ IPropertySecurity **ppSecurity) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ long index) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ VARIANT var,
            /* [retval][out] */ long *plval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddString( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddObjectProperty( 
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddObjectPropertyExt( 
            /* [in] */ REFIID iid,
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddThing( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddBOOL( 
            /* [in] */ VARIANT_BOOL boolVal) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddLong( 
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddShort( 
            /* [in] */ short sval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddDispatch( 
            /* [in] */ IDispatch *pdisp) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_String( 
            /* [in] */ long index,
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_String( 
            /* [in] */ long index,
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ObjectProperty( 
            /* [in] */ long index,
            /* [retval][out] */ IObjectProperty **ppobjectproperty) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ObjectProperty( 
            /* [in] */ long index,
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ObjectPropertyExt( 
            /* [in] */ long index,
            /* [in] */ REFIID iid,
            /* [retval][out] */ IObjectProperty **ppobjectproperty) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Thing( 
            /* [in] */ long index,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Thing( 
            /* [in] */ long index,
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_BOOL( 
            /* [in] */ long index,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_BOOL( 
            /* [in] */ long index,
            /* [in] */ VARIANT_BOOL boolVal) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Long( 
            /* [in] */ long index,
            /* [retval][out] */ long *plval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Long( 
            /* [in] */ long index,
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Dispatch( 
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **ppdisp) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Dispatch( 
            /* [in] */ long index,
            /* [in] */ IDispatch *pdisp) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InsertStringAt( 
            /* [in] */ long index,
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InsertObjectPropertyAt( 
            /* [in] */ long index,
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InsertThingAt( 
            /* [in] */ long index,
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InsertBOOLAt( 
            /* [in] */ long index,
            /* [in] */ VARIANT_BOOL boolVal) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InsertLongAt( 
            /* [in] */ long index,
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InsertShortAt( 
            /* [in] */ long index,
            /* [in] */ short sval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InsertDispatchAt( 
            /* [in] */ long index,
            /* [in] */ IDispatch *pdisp) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RemoveString( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RemoveObjectProperty( 
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RemoveThing( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RemoveBOOL( 
            /* [in] */ VARIANT_BOOL boolVal) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RemoveLong( 
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RemoveShort( 
            /* [in] */ short sval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RemoveDispatch( 
            /* [in] */ IDispatch *pdisp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyTo( 
            /* [in] */ IPropertyList *ppropertylist) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyListVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyList * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyList * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPropertyList * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPropertyList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPropertyList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPropertyList * This,
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
            IPropertyList * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IPropertyList * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IPropertyList * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IPropertyList * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IPropertyList * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IPropertyList * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IPropertyList * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IPropertyList * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IPropertyList * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IPropertyList * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IPropertyList * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IPropertyList * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IPropertyList * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IPropertyList * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IPropertyList * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IPropertyList * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IPropertyList * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IPropertyList * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IPropertyList * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IPropertyList * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IPropertyList * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get_IsEmpty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IPropertyList * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPropertyList * This,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, FirstItem)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *FirstItem )( 
            IPropertyList * This,
            /* [out] */ BSTR *name,
            /* [out] */ VARIANT *pvar,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, NextItem)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NextItem )( 
            IPropertyList * This,
            /* [out] */ BSTR *name,
            /* [out] */ VARIANT *pvar,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get_PropertyAtIndex)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyAtIndex )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get__NewEnum)
        /* [id][hidden][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IPropertyList * This,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IPropertyList, Add)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IPropertyList * This,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IPropertyList, InsertAt)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertAt )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IPropertyList, get_Property)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IPropertyList, put_Property)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Property )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IPropertyList, get_PropertySecurity)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_PropertySecurity )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IPropertyList, Remove)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IPropertyList * This,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IPropertyList, RemoveAt)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            IPropertyList * This,
            /* [in] */ long index);
        
        DECLSPEC_XFGVIRT(IPropertyList, RemoveAll)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IPropertyList * This);
        
        DECLSPEC_XFGVIRT(IPropertyList, Find)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IPropertyList * This,
            /* [in] */ VARIANT var,
            /* [retval][out] */ long *plval);
        
        DECLSPEC_XFGVIRT(IPropertyList, AddString)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddString )( 
            IPropertyList * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IPropertyList, AddObjectProperty)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddObjectProperty )( 
            IPropertyList * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyList, AddObjectPropertyExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddObjectPropertyExt )( 
            IPropertyList * This,
            /* [in] */ REFIID iid,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyList, AddThing)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddThing )( 
            IPropertyList * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IPropertyList, AddBOOL)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddBOOL )( 
            IPropertyList * This,
            /* [in] */ VARIANT_BOOL boolVal);
        
        DECLSPEC_XFGVIRT(IPropertyList, AddLong)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddLong )( 
            IPropertyList * This,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IPropertyList, AddShort)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddShort )( 
            IPropertyList * This,
            /* [in] */ short sval);
        
        DECLSPEC_XFGVIRT(IPropertyList, AddDispatch)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddDispatch )( 
            IPropertyList * This,
            /* [in] */ IDispatch *pdisp);
        
        DECLSPEC_XFGVIRT(IPropertyList, get_String)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_String )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IPropertyList, put_String)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_String )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IPropertyList, get_ObjectProperty)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectProperty )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [retval][out] */ IObjectProperty **ppobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyList, put_ObjectProperty)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ObjectProperty )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyList, get_ObjectPropertyExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectPropertyExt )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ REFIID iid,
            /* [retval][out] */ IObjectProperty **ppobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyList, get_Thing)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Thing )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IPropertyList, put_Thing)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Thing )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IPropertyList, get_BOOL)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IPropertyList, put_BOOL)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_BOOL )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ VARIANT_BOOL boolVal);
        
        DECLSPEC_XFGVIRT(IPropertyList, get_Long)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Long )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [retval][out] */ long *plval);
        
        DECLSPEC_XFGVIRT(IPropertyList, put_Long)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Long )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IPropertyList, get_Dispatch)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Dispatch )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [retval][out] */ IDispatch **ppdisp);
        
        DECLSPEC_XFGVIRT(IPropertyList, put_Dispatch)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Dispatch )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ IDispatch *pdisp);
        
        DECLSPEC_XFGVIRT(IPropertyList, InsertStringAt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InsertStringAt )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IPropertyList, InsertObjectPropertyAt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InsertObjectPropertyAt )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyList, InsertThingAt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InsertThingAt )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IPropertyList, InsertBOOLAt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InsertBOOLAt )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ VARIANT_BOOL boolVal);
        
        DECLSPEC_XFGVIRT(IPropertyList, InsertLongAt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InsertLongAt )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IPropertyList, InsertShortAt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InsertShortAt )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ short sval);
        
        DECLSPEC_XFGVIRT(IPropertyList, InsertDispatchAt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InsertDispatchAt )( 
            IPropertyList * This,
            /* [in] */ long index,
            /* [in] */ IDispatch *pdisp);
        
        DECLSPEC_XFGVIRT(IPropertyList, RemoveString)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RemoveString )( 
            IPropertyList * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IPropertyList, RemoveObjectProperty)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RemoveObjectProperty )( 
            IPropertyList * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyList, RemoveThing)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RemoveThing )( 
            IPropertyList * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IPropertyList, RemoveBOOL)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RemoveBOOL )( 
            IPropertyList * This,
            /* [in] */ VARIANT_BOOL boolVal);
        
        DECLSPEC_XFGVIRT(IPropertyList, RemoveLong)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RemoveLong )( 
            IPropertyList * This,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IPropertyList, RemoveShort)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RemoveShort )( 
            IPropertyList * This,
            /* [in] */ short sval);
        
        DECLSPEC_XFGVIRT(IPropertyList, RemoveDispatch)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RemoveDispatch )( 
            IPropertyList * This,
            /* [in] */ IDispatch *pdisp);
        
        DECLSPEC_XFGVIRT(IPropertyList, CopyTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            IPropertyList * This,
            /* [in] */ IPropertyList *ppropertylist);
        
        END_INTERFACE
    } IPropertyListVtbl;

    interface IPropertyList
    {
        CONST_VTBL struct IPropertyListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPropertyList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPropertyList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPropertyList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPropertyList_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IPropertyList_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IPropertyList_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IPropertyList_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IPropertyList_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IPropertyList_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IPropertyList_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IPropertyList_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IPropertyList_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IPropertyList_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IPropertyList_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IPropertyList_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IPropertyList_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IPropertyList_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IPropertyList_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IPropertyList_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IPropertyList_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IPropertyList_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IPropertyList_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IPropertyList_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IPropertyList_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IPropertyList_get_IsEmpty(This,pbool)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pbool) ) 

#define IPropertyList_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#define IPropertyList_FirstItem(This,name,pvar,pbool)	\
    ( (This)->lpVtbl -> FirstItem(This,name,pvar,pbool) ) 

#define IPropertyList_NextItem(This,name,pvar,pbool)	\
    ( (This)->lpVtbl -> NextItem(This,name,pvar,pbool) ) 

#define IPropertyList_get_PropertyAtIndex(This,index,pvar)	\
    ( (This)->lpVtbl -> get_PropertyAtIndex(This,index,pvar) ) 

#define IPropertyList_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 


#define IPropertyList_Add(This,var)	\
    ( (This)->lpVtbl -> Add(This,var) ) 

#define IPropertyList_InsertAt(This,index,var)	\
    ( (This)->lpVtbl -> InsertAt(This,index,var) ) 

#define IPropertyList_get_Property(This,index,pvar)	\
    ( (This)->lpVtbl -> get_Property(This,index,pvar) ) 

#define IPropertyList_put_Property(This,index,var)	\
    ( (This)->lpVtbl -> put_Property(This,index,var) ) 

#define IPropertyList_get_PropertySecurity(This,index,ppSecurity)	\
    ( (This)->lpVtbl -> get_PropertySecurity(This,index,ppSecurity) ) 

#define IPropertyList_Remove(This,var)	\
    ( (This)->lpVtbl -> Remove(This,var) ) 

#define IPropertyList_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define IPropertyList_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IPropertyList_Find(This,var,plval)	\
    ( (This)->lpVtbl -> Find(This,var,plval) ) 

#define IPropertyList_AddString(This,bstr)	\
    ( (This)->lpVtbl -> AddString(This,bstr) ) 

#define IPropertyList_AddObjectProperty(This,pobjectproperty)	\
    ( (This)->lpVtbl -> AddObjectProperty(This,pobjectproperty) ) 

#define IPropertyList_AddObjectPropertyExt(This,iid,pobjectproperty)	\
    ( (This)->lpVtbl -> AddObjectPropertyExt(This,iid,pobjectproperty) ) 

#define IPropertyList_AddThing(This,pthing)	\
    ( (This)->lpVtbl -> AddThing(This,pthing) ) 

#define IPropertyList_AddBOOL(This,boolVal)	\
    ( (This)->lpVtbl -> AddBOOL(This,boolVal) ) 

#define IPropertyList_AddLong(This,lval)	\
    ( (This)->lpVtbl -> AddLong(This,lval) ) 

#define IPropertyList_AddShort(This,sval)	\
    ( (This)->lpVtbl -> AddShort(This,sval) ) 

#define IPropertyList_AddDispatch(This,pdisp)	\
    ( (This)->lpVtbl -> AddDispatch(This,pdisp) ) 

#define IPropertyList_get_String(This,index,pbstr)	\
    ( (This)->lpVtbl -> get_String(This,index,pbstr) ) 

#define IPropertyList_put_String(This,index,bstr)	\
    ( (This)->lpVtbl -> put_String(This,index,bstr) ) 

#define IPropertyList_get_ObjectProperty(This,index,ppobjectproperty)	\
    ( (This)->lpVtbl -> get_ObjectProperty(This,index,ppobjectproperty) ) 

#define IPropertyList_put_ObjectProperty(This,index,pobjectproperty)	\
    ( (This)->lpVtbl -> put_ObjectProperty(This,index,pobjectproperty) ) 

#define IPropertyList_get_ObjectPropertyExt(This,index,iid,ppobjectproperty)	\
    ( (This)->lpVtbl -> get_ObjectPropertyExt(This,index,iid,ppobjectproperty) ) 

#define IPropertyList_get_Thing(This,index,ppthing)	\
    ( (This)->lpVtbl -> get_Thing(This,index,ppthing) ) 

#define IPropertyList_put_Thing(This,index,pthing)	\
    ( (This)->lpVtbl -> put_Thing(This,index,pthing) ) 

#define IPropertyList_get_BOOL(This,index,pboolVal)	\
    ( (This)->lpVtbl -> get_BOOL(This,index,pboolVal) ) 

#define IPropertyList_put_BOOL(This,index,boolVal)	\
    ( (This)->lpVtbl -> put_BOOL(This,index,boolVal) ) 

#define IPropertyList_get_Long(This,index,plval)	\
    ( (This)->lpVtbl -> get_Long(This,index,plval) ) 

#define IPropertyList_put_Long(This,index,lval)	\
    ( (This)->lpVtbl -> put_Long(This,index,lval) ) 

#define IPropertyList_get_Dispatch(This,index,ppdisp)	\
    ( (This)->lpVtbl -> get_Dispatch(This,index,ppdisp) ) 

#define IPropertyList_put_Dispatch(This,index,pdisp)	\
    ( (This)->lpVtbl -> put_Dispatch(This,index,pdisp) ) 

#define IPropertyList_InsertStringAt(This,index,bstr)	\
    ( (This)->lpVtbl -> InsertStringAt(This,index,bstr) ) 

#define IPropertyList_InsertObjectPropertyAt(This,index,pobjectproperty)	\
    ( (This)->lpVtbl -> InsertObjectPropertyAt(This,index,pobjectproperty) ) 

#define IPropertyList_InsertThingAt(This,index,pthing)	\
    ( (This)->lpVtbl -> InsertThingAt(This,index,pthing) ) 

#define IPropertyList_InsertBOOLAt(This,index,boolVal)	\
    ( (This)->lpVtbl -> InsertBOOLAt(This,index,boolVal) ) 

#define IPropertyList_InsertLongAt(This,index,lval)	\
    ( (This)->lpVtbl -> InsertLongAt(This,index,lval) ) 

#define IPropertyList_InsertShortAt(This,index,sval)	\
    ( (This)->lpVtbl -> InsertShortAt(This,index,sval) ) 

#define IPropertyList_InsertDispatchAt(This,index,pdisp)	\
    ( (This)->lpVtbl -> InsertDispatchAt(This,index,pdisp) ) 

#define IPropertyList_RemoveString(This,bstr)	\
    ( (This)->lpVtbl -> RemoveString(This,bstr) ) 

#define IPropertyList_RemoveObjectProperty(This,pobjectproperty)	\
    ( (This)->lpVtbl -> RemoveObjectProperty(This,pobjectproperty) ) 

#define IPropertyList_RemoveThing(This,pthing)	\
    ( (This)->lpVtbl -> RemoveThing(This,pthing) ) 

#define IPropertyList_RemoveBOOL(This,boolVal)	\
    ( (This)->lpVtbl -> RemoveBOOL(This,boolVal) ) 

#define IPropertyList_RemoveLong(This,lval)	\
    ( (This)->lpVtbl -> RemoveLong(This,lval) ) 

#define IPropertyList_RemoveShort(This,sval)	\
    ( (This)->lpVtbl -> RemoveShort(This,sval) ) 

#define IPropertyList_RemoveDispatch(This,pdisp)	\
    ( (This)->lpVtbl -> RemoveDispatch(This,pdisp) ) 

#define IPropertyList_CopyTo(This,ppropertylist)	\
    ( (This)->lpVtbl -> CopyTo(This,ppropertylist) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyList_INTERFACE_DEFINED__ */


#ifndef __IPropertyMap_INTERFACE_DEFINED__
#define __IPropertyMap_INTERFACE_DEFINED__

/* interface IPropertyMap */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_PROPERTYMAP_PROPERTY	( 101 )

#define	DISPID_PROPERTYMAP_REMOVE	( 102 )

#define	DISPID_PROPERTYMAP_REMOVEALL	( 103 )


EXTERN_C const IID IID_IPropertyMap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9848-A417-11CF-9BF0-0080C7A56A8A")
    IPropertyMap : public IPropertyCollection
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_PropertyExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_PropertyInt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var,
            /* [in] */ IPropertySecurity *pSecurity) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_PropertySecurity( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IPropertySecurity **ppSecurity) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_PropertySecurityExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [retval][out] */ IPropertySecurity **ppSecurity) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE RemoveInt( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_String( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_String( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ObjectProperty( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IObjectProperty **ppobjectproperty) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ObjectProperty( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ObjectPropertyExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ REFIID iid,
            /* [retval][out] */ IObjectProperty **ppobjectproperty) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Thing( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Thing( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_BOOL( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_BOOL( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT_BOOL boolVal) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Long( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *plval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Long( 
            /* [in] */ BSTR bstrName,
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Short( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ short *psval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Short( 
            /* [in] */ BSTR bstrName,
            /* [in] */ short sval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Dispatch( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDispatch **ppdisp) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Dispatch( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IDispatch *pdisp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValid( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyTo( 
            /* [in] */ IPropertyMap *ppropertymap) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyMapVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyMap * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyMap * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyMap * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPropertyMap * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPropertyMap * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPropertyMap * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPropertyMap * This,
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
            IPropertyMap * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IPropertyMap * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IPropertyMap * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IPropertyMap * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IPropertyMap * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IPropertyMap * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IPropertyMap * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IPropertyMap * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IPropertyMap * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IPropertyMap * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IPropertyMap * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IPropertyMap * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IPropertyMap * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IPropertyMap * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IPropertyMap * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IPropertyMap * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IPropertyMap * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IPropertyMap * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get_IsEmpty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IPropertyMap * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPropertyMap * This,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, FirstItem)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *FirstItem )( 
            IPropertyMap * This,
            /* [out] */ BSTR *name,
            /* [out] */ VARIANT *pvar,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, NextItem)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NextItem )( 
            IPropertyMap * This,
            /* [out] */ BSTR *name,
            /* [out] */ VARIANT *pvar,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get_PropertyAtIndex)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyAtIndex )( 
            IPropertyMap * This,
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IPropertyCollection, get__NewEnum)
        /* [id][hidden][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IPropertyMap * This,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_Property)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IPropertyMap, put_Property)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Property )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_PropertyExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyExt )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IPropertyMap, put_PropertyInt)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyInt )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_PropertySecurity)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_PropertySecurity )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_PropertySecurityExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertySecurityExt )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IPropertyMap, Remove)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IPropertyMap, RemoveInt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *RemoveInt )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IPropertyMap, RemoveAll)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IPropertyMap * This);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_String)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_String )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IPropertyMap, put_String)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_String )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_ObjectProperty)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectProperty )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IObjectProperty **ppobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyMap, put_ObjectProperty)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ObjectProperty )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_ObjectPropertyExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectPropertyExt )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ REFIID iid,
            /* [retval][out] */ IObjectProperty **ppobjectproperty);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_Thing)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Thing )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IPropertyMap, put_Thing)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Thing )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_BOOL)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IPropertyMap, put_BOOL)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_BOOL )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT_BOOL boolVal);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_Long)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Long )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *plval);
        
        DECLSPEC_XFGVIRT(IPropertyMap, put_Long)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Long )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_Short)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Short )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ short *psval);
        
        DECLSPEC_XFGVIRT(IPropertyMap, put_Short)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Short )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ short sval);
        
        DECLSPEC_XFGVIRT(IPropertyMap, get_Dispatch)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Dispatch )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDispatch **ppdisp);
        
        DECLSPEC_XFGVIRT(IPropertyMap, put_Dispatch)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Dispatch )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IDispatch *pdisp);
        
        DECLSPEC_XFGVIRT(IPropertyMap, IsValid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IPropertyMap * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IPropertyMap, CopyTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            IPropertyMap * This,
            /* [in] */ IPropertyMap *ppropertymap);
        
        END_INTERFACE
    } IPropertyMapVtbl;

    interface IPropertyMap
    {
        CONST_VTBL struct IPropertyMapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyMap_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPropertyMap_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPropertyMap_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPropertyMap_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPropertyMap_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IPropertyMap_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IPropertyMap_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IPropertyMap_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IPropertyMap_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IPropertyMap_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IPropertyMap_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IPropertyMap_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IPropertyMap_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IPropertyMap_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IPropertyMap_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IPropertyMap_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IPropertyMap_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IPropertyMap_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IPropertyMap_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IPropertyMap_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IPropertyMap_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IPropertyMap_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IPropertyMap_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IPropertyMap_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IPropertyMap_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IPropertyMap_get_IsEmpty(This,pbool)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pbool) ) 

#define IPropertyMap_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#define IPropertyMap_FirstItem(This,name,pvar,pbool)	\
    ( (This)->lpVtbl -> FirstItem(This,name,pvar,pbool) ) 

#define IPropertyMap_NextItem(This,name,pvar,pbool)	\
    ( (This)->lpVtbl -> NextItem(This,name,pvar,pbool) ) 

#define IPropertyMap_get_PropertyAtIndex(This,index,pvar)	\
    ( (This)->lpVtbl -> get_PropertyAtIndex(This,index,pvar) ) 

#define IPropertyMap_get__NewEnum(This,ppunk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) ) 


#define IPropertyMap_get_Property(This,bstrName,pvar)	\
    ( (This)->lpVtbl -> get_Property(This,bstrName,pvar) ) 

#define IPropertyMap_put_Property(This,bstrName,var)	\
    ( (This)->lpVtbl -> put_Property(This,bstrName,var) ) 

#define IPropertyMap_get_PropertyExt(This,bstrName,nHashOrig,pvar)	\
    ( (This)->lpVtbl -> get_PropertyExt(This,bstrName,nHashOrig,pvar) ) 

#define IPropertyMap_put_PropertyInt(This,bstrName,var,pSecurity)	\
    ( (This)->lpVtbl -> put_PropertyInt(This,bstrName,var,pSecurity) ) 

#define IPropertyMap_get_PropertySecurity(This,bstrName,ppSecurity)	\
    ( (This)->lpVtbl -> get_PropertySecurity(This,bstrName,ppSecurity) ) 

#define IPropertyMap_get_PropertySecurityExt(This,bstrName,nHashOrig,ppSecurity)	\
    ( (This)->lpVtbl -> get_PropertySecurityExt(This,bstrName,nHashOrig,ppSecurity) ) 

#define IPropertyMap_Remove(This,bstrName)	\
    ( (This)->lpVtbl -> Remove(This,bstrName) ) 

#define IPropertyMap_RemoveInt(This,bstrName)	\
    ( (This)->lpVtbl -> RemoveInt(This,bstrName) ) 

#define IPropertyMap_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IPropertyMap_get_String(This,bstrName,pbstr)	\
    ( (This)->lpVtbl -> get_String(This,bstrName,pbstr) ) 

#define IPropertyMap_put_String(This,bstrName,bstr)	\
    ( (This)->lpVtbl -> put_String(This,bstrName,bstr) ) 

#define IPropertyMap_get_ObjectProperty(This,bstrName,ppobjectproperty)	\
    ( (This)->lpVtbl -> get_ObjectProperty(This,bstrName,ppobjectproperty) ) 

#define IPropertyMap_put_ObjectProperty(This,bstrName,pobjectproperty)	\
    ( (This)->lpVtbl -> put_ObjectProperty(This,bstrName,pobjectproperty) ) 

#define IPropertyMap_get_ObjectPropertyExt(This,bstrName,iid,ppobjectproperty)	\
    ( (This)->lpVtbl -> get_ObjectPropertyExt(This,bstrName,iid,ppobjectproperty) ) 

#define IPropertyMap_get_Thing(This,bstrName,ppthing)	\
    ( (This)->lpVtbl -> get_Thing(This,bstrName,ppthing) ) 

#define IPropertyMap_put_Thing(This,bstrName,pthing)	\
    ( (This)->lpVtbl -> put_Thing(This,bstrName,pthing) ) 

#define IPropertyMap_get_BOOL(This,bstrName,pboolVal)	\
    ( (This)->lpVtbl -> get_BOOL(This,bstrName,pboolVal) ) 

#define IPropertyMap_put_BOOL(This,bstrName,boolVal)	\
    ( (This)->lpVtbl -> put_BOOL(This,bstrName,boolVal) ) 

#define IPropertyMap_get_Long(This,bstrName,plval)	\
    ( (This)->lpVtbl -> get_Long(This,bstrName,plval) ) 

#define IPropertyMap_put_Long(This,bstrName,lval)	\
    ( (This)->lpVtbl -> put_Long(This,bstrName,lval) ) 

#define IPropertyMap_get_Short(This,bstrName,psval)	\
    ( (This)->lpVtbl -> get_Short(This,bstrName,psval) ) 

#define IPropertyMap_put_Short(This,bstrName,sval)	\
    ( (This)->lpVtbl -> put_Short(This,bstrName,sval) ) 

#define IPropertyMap_get_Dispatch(This,bstrName,ppdisp)	\
    ( (This)->lpVtbl -> get_Dispatch(This,bstrName,ppdisp) ) 

#define IPropertyMap_put_Dispatch(This,bstrName,pdisp)	\
    ( (This)->lpVtbl -> put_Dispatch(This,bstrName,pdisp) ) 

#define IPropertyMap_IsValid(This,bstrName,pbool)	\
    ( (This)->lpVtbl -> IsValid(This,bstrName,pbool) ) 

#define IPropertyMap_CopyTo(This,ppropertymap)	\
    ( (This)->lpVtbl -> CopyTo(This,ppropertymap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyMap_INTERFACE_DEFINED__ */


#ifndef __IThing_INTERFACE_DEFINED__
#define __IThing_INTERFACE_DEFINED__

/* interface IThing */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_THING_ADDPROPERTYINT	( 101 )

#define	DISPID_THING_REMOVEPROPERTY	( 102 )

#define	DISPID_THING_PROPERTY	( 103 )

#define	DISPID_THING_ADDMETHODINT	( 104 )

#define	DISPID_THING_REMOVEMETHOD	( 105 )

#define	DISPID_THING_METHOD	( 106 )

#define	DISPID_THING_INVOKEMETHODINT	( 107 )

#define	DISPID_THING_FIREEVENTINT	( 108 )

#define	DISPID_THING_EXEMPLARINT	( 110 )

#define	DISPID_THING_MOVEINTOINT	( 111 )

#define	DISPID_THING_REMOTEPROPERTY	( 112 )

#define	DISPID_THING_INSTANCEPROPERTY	( 113 )

#define	DISPID_THING_TYPEINT	( 114 )

#define	DISPID_THING_OWNERINT	( 115 )

#define	DISPID_THING_ISSTUBINT	( 116 )

#define	FIREEVENT_SELF	( 0x1 )

#define	FIREEVENT_CONTAINER	( 0x2 )

#define	FIREEVENT_CONTENT	( 0x4 )

#define	FIREEVENT_PEER	( 0x8 )

#define	FIREEVENT_DEFAULT	( 0xf )


EXTERN_C const IID IID_IThing;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9852-A417-11CF-9BF0-0080C7A56A8A")
    IThing : public IObjectProperty
    {
    public:
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ long *id) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ long id) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_InstanceType( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsExemplar( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_IsWizard( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_TypeInt( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_OwnerInt( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsStub( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_IsStubInt( 
            /* [in] */ VARIANT_BOOL boolval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Exemplar( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_ExemplarInt( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindWithin( 
            /* [in] */ BSTR bstrName,
            /* [defaultvalue][optional][in] */ VARIANT varQuiet,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE MoveIntoExt( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE MoveIntoInt( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValidProperty( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValidInstanceProperty( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateAndAddProperty( 
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrName,
            /* [optional][in] */ VARIANT var) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddProperty( 
            /* [in] */ BSTR bstrName,
            /* [optional][in] */ VARIANT var,
            /* [defaultvalue][optional][in] */ VARIANT flags,
            /* [defaultvalue][optional][in] */ VARIANT permission,
            /* [defaultvalue][optional][in] */ VARIANT type,
            /* [defaultvalue][optional][in] */ BSTR bstrIID,
            /* [defaultvalue][optional][in] */ BSTR bstrType) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddPropertyExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var,
            /* [in] */ long flags,
            /* [in] */ long perms,
            /* [in] */ long type,
            /* [in] */ REFIID riid,
            /* [in] */ BSTR bstrType) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE AddPropertyInt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var,
            /* [in] */ IThing *pExemplar,
            /* [in] */ long psbits,
            /* [in] */ long perms,
            /* [in] */ long type,
            /* [in] */ BSTR bstrIID,
            /* [in] */ BSTR bstrType) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveProperty( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [id][helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_RemoteProperty( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Property( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_PropertyExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [out] */ IThing **ppexemplar,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE InstanceProperty( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pExemplar) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_PropertySecurity( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IPropertySecurity **ppSecurity) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_PropertySecurityExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [out] */ IThing **ppexemplar,
            /* [out] */ VARIANT_BOOL *pfInstance,
            /* [retval][out] */ IPropertySecurity **ppSecurity) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_InstanceProperties( 
            /* [retval][out] */ IPropertyMap **pppropertymap) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Properties( 
            /* [retval][out] */ IPropertyMap **pppropertymap) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CopyPropertiesTo( 
            /* [in] */ IPropertyMap *ppropertymap) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValidMethod( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValidInstanceMethod( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateAndAddMethod( 
            /* [in] */ long lFlags,
            /* [in] */ IModule *pmodule,
            /* [in] */ BSTR bstrName,
            /* [defaultvalue][optional][in] */ VARIANT varFuncName,
            /* [defaultvalue][optional][in] */ VARIANT varPsbits,
            /* [defaultvalue][optional][in] */ VARIANT varPermissions) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateAndAddMethodExt( 
            /* [in] */ long lFlags,
            /* [in] */ IModule *pmodule,
            /* [in] */ BSTR bstrFuncName,
            /* [in] */ BSTR bstrMethName,
            /* [in] */ long psbits,
            /* [in] */ long permissions) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddMethod( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IMethod *pmethod,
            /* [defaultvalue][optional][in] */ VARIANT varPsbits,
            /* [defaultvalue][optional][in] */ VARIANT varPermissions) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddMethodExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IMethod *pmethod,
            /* [in] */ long psbits,
            /* [in] */ long permissions) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE AddMethodInt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IMethod *pmethod,
            /* [in] */ IThing *pExemplar,
            /* [in] */ long psbits,
            /* [in] */ long permissions) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveMethod( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Method( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IMethod **ppmethod) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Method( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IMethod *pmethod) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_MethodExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [out] */ IThing **ppexemplar,
            /* [retval][out] */ IMethod **ppmethod) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_MethodSecurity( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IPropertySecurity **ppSecurity) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_MethodSecurityExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [out] */ IThing **ppexemplar,
            /* [out] */ VARIANT_BOOL *pfInstance,
            /* [retval][out] */ IPropertySecurity **ppSecurity) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_InstanceMethods( 
            /* [retval][out] */ IPropertyMap **pppropertymap) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Methods( 
            /* [retval][out] */ IPropertyMap **pppropertymap) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CopyMethodsTo( 
            /* [in] */ IPropertyMap *ppropertymap) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FireEvent( 
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE FireEventExt( 
            /* [in] */ BSTR bstrEvent,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lFlags) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE FireEventInt( 
            /* [in] */ BSTR bstrEvent,
            /* [in] */ IPropertyList *pproplist,
            /* [in] */ long lFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InvokeMethod( 
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT var,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE InvokeMethodInt( 
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [in] */ IPropertyList *pproplist,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InvokeMethodExt( 
            /* [in] */ BSTR bstrMethod,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InvokeSuperMethod( 
            /* [optional][in] */ VARIANT var,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InvokeSuperMethodExt( 
            /* [optional][in] */ DISPPARAMS *pdispparams,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_CurrentMethodName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_CurrentMethodName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Contents( 
            /* [retval][out] */ IPropertyList **ppproplist) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Container( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Container( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Owner( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CheckPropertiesSecurity( 
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CheckMethodsSecurity( 
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CheckPropertiesSecurityExt( 
            /* [in] */ unsigned long ulFlags) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CheckMethodsSecurityExt( 
            /* [in] */ unsigned long ulFlags) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CheckPropertySecurity( 
            /* [in] */ BSTR bstrName,
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CheckMethodSecurity( 
            /* [in] */ BSTR bstrName,
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CheckPropertySecurityExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ unsigned long ulFlags) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CheckMethodSecurityExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ unsigned long ulFlags) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE NotifyObjectPropertyChanged( 
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE NotifyMethodChanged( 
            /* [in] */ IMethod *pmethod,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddString( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddObjectProperty( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddObjectPropertyExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ REFIID iid,
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddThing( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddBOOL( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT_BOOL boolVal) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddLong( 
            /* [in] */ BSTR bstrName,
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddShort( 
            /* [in] */ BSTR bstrName,
            /* [in] */ short sval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddDispatch( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IDispatch *pdisp) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_String( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_String( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ObjectProperty( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IObjectProperty **ppobjectproperty) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ObjectProperty( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IObjectProperty *pobjectproperty) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ObjectPropertyExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ REFIID iid,
            /* [retval][out] */ IObjectProperty **ppobjectproperty) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Thing( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Thing( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_BOOL( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_BOOL( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT_BOOL boolVal) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Long( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *plval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Long( 
            /* [in] */ BSTR bstrName,
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Short( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ short *psval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Short( 
            /* [in] */ BSTR bstrName,
            /* [in] */ short sval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Dispatch( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDispatch **ppdisp) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Dispatch( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IDispatch *pdisp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IThingVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThing * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThing * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThing * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IThing * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IThing * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IThing * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IThing * This,
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
            IThing * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IThing * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IThing * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IThing * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IThing * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IThing * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IThing * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IThing * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IThing * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IThing * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IThing * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IThing * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IThing * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IThing * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IThing * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IThing * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IThing * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IThing * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IThing * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IThing * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IThing * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IThing, get_ID)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IThing * This,
            /* [retval][out] */ long *id);
        
        DECLSPEC_XFGVIRT(IThing, put_ID)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IThing * This,
            /* [in] */ long id);
        
        DECLSPEC_XFGVIRT(IThing, get_InstanceType)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_InstanceType )( 
            IThing * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IThing, get_IsExemplar)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsExemplar )( 
            IThing * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThing, get_IsWizard)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IsWizard )( 
            IThing * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThing, put_TypeInt)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_TypeInt )( 
            IThing * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IThing, put_OwnerInt)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_OwnerInt )( 
            IThing * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IThing, get_IsStub)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsStub )( 
            IThing * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThing, put_IsStubInt)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_IsStubInt )( 
            IThing * This,
            /* [in] */ VARIANT_BOOL boolval);
        
        DECLSPEC_XFGVIRT(IThing, get_Exemplar)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exemplar )( 
            IThing * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IThing, put_ExemplarInt)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_ExemplarInt )( 
            IThing * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IThing, FindWithin)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindWithin )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [defaultvalue][optional][in] */ VARIANT varQuiet,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IThing, MoveIntoExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MoveIntoExt )( 
            IThing * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IThing, MoveIntoInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *MoveIntoInt )( 
            IThing * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IThing, IsValidProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValidProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThing, IsValidInstanceProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValidInstanceProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThing, CreateAndAddProperty)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateAndAddProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ BSTR bstrName,
            /* [optional][in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IThing, AddProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [optional][in] */ VARIANT var,
            /* [defaultvalue][optional][in] */ VARIANT flags,
            /* [defaultvalue][optional][in] */ VARIANT permission,
            /* [defaultvalue][optional][in] */ VARIANT type,
            /* [defaultvalue][optional][in] */ BSTR bstrIID,
            /* [defaultvalue][optional][in] */ BSTR bstrType);
        
        DECLSPEC_XFGVIRT(IThing, AddPropertyExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddPropertyExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var,
            /* [in] */ long flags,
            /* [in] */ long perms,
            /* [in] */ long type,
            /* [in] */ REFIID riid,
            /* [in] */ BSTR bstrType);
        
        DECLSPEC_XFGVIRT(IThing, AddPropertyInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *AddPropertyInt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var,
            /* [in] */ IThing *pExemplar,
            /* [in] */ long psbits,
            /* [in] */ long perms,
            /* [in] */ long type,
            /* [in] */ BSTR bstrIID,
            /* [in] */ BSTR bstrType);
        
        DECLSPEC_XFGVIRT(IThing, RemoveProperty)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IThing, get_RemoteProperty)
        /* [id][helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IThing, get_Property)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IThing, put_Property)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Property )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IThing, get_PropertyExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [out] */ IThing **ppexemplar,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IThing, InstanceProperty)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *InstanceProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pExemplar);
        
        DECLSPEC_XFGVIRT(IThing, get_PropertySecurity)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_PropertySecurity )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IThing, get_PropertySecurityExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertySecurityExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [out] */ IThing **ppexemplar,
            /* [out] */ VARIANT_BOOL *pfInstance,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IThing, get_InstanceProperties)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_InstanceProperties )( 
            IThing * This,
            /* [retval][out] */ IPropertyMap **pppropertymap);
        
        DECLSPEC_XFGVIRT(IThing, get_Properties)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Properties )( 
            IThing * This,
            /* [retval][out] */ IPropertyMap **pppropertymap);
        
        DECLSPEC_XFGVIRT(IThing, CopyPropertiesTo)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CopyPropertiesTo )( 
            IThing * This,
            /* [in] */ IPropertyMap *ppropertymap);
        
        DECLSPEC_XFGVIRT(IThing, IsValidMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValidMethod )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThing, IsValidInstanceMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValidInstanceMethod )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IThing, CreateAndAddMethod)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateAndAddMethod )( 
            IThing * This,
            /* [in] */ long lFlags,
            /* [in] */ IModule *pmodule,
            /* [in] */ BSTR bstrName,
            /* [defaultvalue][optional][in] */ VARIANT varFuncName,
            /* [defaultvalue][optional][in] */ VARIANT varPsbits,
            /* [defaultvalue][optional][in] */ VARIANT varPermissions);
        
        DECLSPEC_XFGVIRT(IThing, CreateAndAddMethodExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateAndAddMethodExt )( 
            IThing * This,
            /* [in] */ long lFlags,
            /* [in] */ IModule *pmodule,
            /* [in] */ BSTR bstrFuncName,
            /* [in] */ BSTR bstrMethName,
            /* [in] */ long psbits,
            /* [in] */ long permissions);
        
        DECLSPEC_XFGVIRT(IThing, AddMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddMethod )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IMethod *pmethod,
            /* [defaultvalue][optional][in] */ VARIANT varPsbits,
            /* [defaultvalue][optional][in] */ VARIANT varPermissions);
        
        DECLSPEC_XFGVIRT(IThing, AddMethodExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddMethodExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IMethod *pmethod,
            /* [in] */ long psbits,
            /* [in] */ long permissions);
        
        DECLSPEC_XFGVIRT(IThing, AddMethodInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *AddMethodInt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IMethod *pmethod,
            /* [in] */ IThing *pExemplar,
            /* [in] */ long psbits,
            /* [in] */ long permissions);
        
        DECLSPEC_XFGVIRT(IThing, RemoveMethod)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveMethod )( 
            IThing * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IThing, get_Method)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Method )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IMethod **ppmethod);
        
        DECLSPEC_XFGVIRT(IThing, put_Method)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Method )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IMethod *pmethod);
        
        DECLSPEC_XFGVIRT(IThing, get_MethodExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_MethodExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [out] */ IThing **ppexemplar,
            /* [retval][out] */ IMethod **ppmethod);
        
        DECLSPEC_XFGVIRT(IThing, get_MethodSecurity)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_MethodSecurity )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IThing, get_MethodSecurityExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_MethodSecurityExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ UINT nHashOrig,
            /* [out] */ IThing **ppexemplar,
            /* [out] */ VARIANT_BOOL *pfInstance,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IThing, get_InstanceMethods)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_InstanceMethods )( 
            IThing * This,
            /* [retval][out] */ IPropertyMap **pppropertymap);
        
        DECLSPEC_XFGVIRT(IThing, get_Methods)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Methods )( 
            IThing * This,
            /* [retval][out] */ IPropertyMap **pppropertymap);
        
        DECLSPEC_XFGVIRT(IThing, CopyMethodsTo)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CopyMethodsTo )( 
            IThing * This,
            /* [in] */ IPropertyMap *ppropertymap);
        
        DECLSPEC_XFGVIRT(IThing, FireEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FireEvent )( 
            IThing * This,
            /* [in] */ BSTR bstrEvent,
            /* [optional][in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IThing, FireEventExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *FireEventExt )( 
            IThing * This,
            /* [in] */ BSTR bstrEvent,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ long lFlags);
        
        DECLSPEC_XFGVIRT(IThing, FireEventInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *FireEventInt )( 
            IThing * This,
            /* [in] */ BSTR bstrEvent,
            /* [in] */ IPropertyList *pproplist,
            /* [in] */ long lFlags);
        
        DECLSPEC_XFGVIRT(IThing, InvokeMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InvokeMethod )( 
            IThing * This,
            /* [in] */ BSTR bstrMethod,
            /* [optional][in] */ VARIANT var,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IThing, InvokeMethodInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *InvokeMethodInt )( 
            IThing * This,
            /* [in] */ IThing *pThing,
            /* [in] */ BSTR bstrMethod,
            /* [in] */ IPropertyList *pproplist,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IThing, InvokeMethodExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InvokeMethodExt )( 
            IThing * This,
            /* [in] */ BSTR bstrMethod,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IThing, InvokeSuperMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InvokeSuperMethod )( 
            IThing * This,
            /* [optional][in] */ VARIANT var,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IThing, InvokeSuperMethodExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InvokeSuperMethodExt )( 
            IThing * This,
            /* [optional][in] */ DISPPARAMS *pdispparams,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IThing, get_CurrentMethodName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMethodName )( 
            IThing * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IThing, put_CurrentMethodName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentMethodName )( 
            IThing * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IThing, get_Name)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IThing * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IThing, put_Name)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IThing * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IThing, get_Description)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IThing * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IThing, put_Description)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IThing * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IThing, get_Contents)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Contents )( 
            IThing * This,
            /* [retval][out] */ IPropertyList **ppproplist);
        
        DECLSPEC_XFGVIRT(IThing, get_Container)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Container )( 
            IThing * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IThing, put_Container)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Container )( 
            IThing * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IThing, get_Owner)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Owner )( 
            IThing * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IThing, CheckPropertiesSecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CheckPropertiesSecurity )( 
            IThing * This,
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IThing, CheckMethodsSecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CheckMethodsSecurity )( 
            IThing * This,
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IThing, CheckPropertiesSecurityExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CheckPropertiesSecurityExt )( 
            IThing * This,
            /* [in] */ unsigned long ulFlags);
        
        DECLSPEC_XFGVIRT(IThing, CheckMethodsSecurityExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CheckMethodsSecurityExt )( 
            IThing * This,
            /* [in] */ unsigned long ulFlags);
        
        DECLSPEC_XFGVIRT(IThing, CheckPropertySecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CheckPropertySecurity )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IThing, CheckMethodSecurity)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CheckMethodSecurity )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IThing, CheckPropertySecurityExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CheckPropertySecurityExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ unsigned long ulFlags);
        
        DECLSPEC_XFGVIRT(IThing, CheckMethodSecurityExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CheckMethodSecurityExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ unsigned long ulFlags);
        
        DECLSPEC_XFGVIRT(IThing, NotifyObjectPropertyChanged)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NotifyObjectPropertyChanged )( 
            IThing * This,
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IThing, NotifyMethodChanged)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NotifyMethodChanged )( 
            IThing * This,
            /* [in] */ IMethod *pmethod,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IThing, AddString)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddString )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IThing, AddObjectProperty)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddObjectProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IThing, AddObjectPropertyExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddObjectPropertyExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ REFIID iid,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IThing, AddThing)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddThing )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IThing, AddBOOL)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddBOOL )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT_BOOL boolVal);
        
        DECLSPEC_XFGVIRT(IThing, AddLong)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddLong )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IThing, AddShort)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddShort )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ short sval);
        
        DECLSPEC_XFGVIRT(IThing, AddDispatch)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddDispatch )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IDispatch *pdisp);
        
        DECLSPEC_XFGVIRT(IThing, get_String)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_String )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IThing, put_String)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_String )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IThing, get_ObjectProperty)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IObjectProperty **ppobjectproperty);
        
        DECLSPEC_XFGVIRT(IThing, put_ObjectProperty)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ObjectProperty )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IThing, get_ObjectPropertyExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectPropertyExt )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ REFIID iid,
            /* [retval][out] */ IObjectProperty **ppobjectproperty);
        
        DECLSPEC_XFGVIRT(IThing, get_Thing)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Thing )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IThing, put_Thing)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Thing )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IThing, get_BOOL)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_BOOL )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IThing, put_BOOL)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_BOOL )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT_BOOL boolVal);
        
        DECLSPEC_XFGVIRT(IThing, get_Long)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Long )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ long *plval);
        
        DECLSPEC_XFGVIRT(IThing, put_Long)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Long )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IThing, get_Short)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Short )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ short *psval);
        
        DECLSPEC_XFGVIRT(IThing, put_Short)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Short )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ short sval);
        
        DECLSPEC_XFGVIRT(IThing, get_Dispatch)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Dispatch )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IDispatch **ppdisp);
        
        DECLSPEC_XFGVIRT(IThing, put_Dispatch)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Dispatch )( 
            IThing * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IDispatch *pdisp);
        
        END_INTERFACE
    } IThingVtbl;

    interface IThing
    {
        CONST_VTBL struct IThingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThing_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThing_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThing_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThing_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IThing_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IThing_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IThing_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IThing_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IThing_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IThing_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IThing_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IThing_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IThing_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IThing_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IThing_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IThing_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IThing_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IThing_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IThing_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IThing_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IThing_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IThing_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IThing_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IThing_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IThing_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IThing_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IThing_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IThing_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IThing_get_ID(This,id)	\
    ( (This)->lpVtbl -> get_ID(This,id) ) 

#define IThing_put_ID(This,id)	\
    ( (This)->lpVtbl -> put_ID(This,id) ) 

#define IThing_get_InstanceType(This,pbstr)	\
    ( (This)->lpVtbl -> get_InstanceType(This,pbstr) ) 

#define IThing_get_IsExemplar(This,pbool)	\
    ( (This)->lpVtbl -> get_IsExemplar(This,pbool) ) 

#define IThing_get_IsWizard(This,pbool)	\
    ( (This)->lpVtbl -> get_IsWizard(This,pbool) ) 

#define IThing_put_TypeInt(This,bstr)	\
    ( (This)->lpVtbl -> put_TypeInt(This,bstr) ) 

#define IThing_put_OwnerInt(This,pThing)	\
    ( (This)->lpVtbl -> put_OwnerInt(This,pThing) ) 

#define IThing_get_IsStub(This,pbool)	\
    ( (This)->lpVtbl -> get_IsStub(This,pbool) ) 

#define IThing_put_IsStubInt(This,boolval)	\
    ( (This)->lpVtbl -> put_IsStubInt(This,boolval) ) 

#define IThing_get_Exemplar(This,ppthing)	\
    ( (This)->lpVtbl -> get_Exemplar(This,ppthing) ) 

#define IThing_put_ExemplarInt(This,pthing)	\
    ( (This)->lpVtbl -> put_ExemplarInt(This,pthing) ) 

#define IThing_FindWithin(This,bstrName,varQuiet,ppthing)	\
    ( (This)->lpVtbl -> FindWithin(This,bstrName,varQuiet,ppthing) ) 

#define IThing_MoveIntoExt(This,pthing)	\
    ( (This)->lpVtbl -> MoveIntoExt(This,pthing) ) 

#define IThing_MoveIntoInt(This,pthing)	\
    ( (This)->lpVtbl -> MoveIntoInt(This,pthing) ) 

#define IThing_IsValidProperty(This,bstrName,pbool)	\
    ( (This)->lpVtbl -> IsValidProperty(This,bstrName,pbool) ) 

#define IThing_IsValidInstanceProperty(This,bstrName,pbool)	\
    ( (This)->lpVtbl -> IsValidInstanceProperty(This,bstrName,pbool) ) 

#define IThing_CreateAndAddProperty(This,bstrProgID,bstrName,var)	\
    ( (This)->lpVtbl -> CreateAndAddProperty(This,bstrProgID,bstrName,var) ) 

#define IThing_AddProperty(This,bstrName,var,flags,permission,type,bstrIID,bstrType)	\
    ( (This)->lpVtbl -> AddProperty(This,bstrName,var,flags,permission,type,bstrIID,bstrType) ) 

#define IThing_AddPropertyExt(This,bstrName,var,flags,perms,type,riid,bstrType)	\
    ( (This)->lpVtbl -> AddPropertyExt(This,bstrName,var,flags,perms,type,riid,bstrType) ) 

#define IThing_AddPropertyInt(This,bstrName,var,pExemplar,psbits,perms,type,bstrIID,bstrType)	\
    ( (This)->lpVtbl -> AddPropertyInt(This,bstrName,var,pExemplar,psbits,perms,type,bstrIID,bstrType) ) 

#define IThing_RemoveProperty(This,bstrName)	\
    ( (This)->lpVtbl -> RemoveProperty(This,bstrName) ) 

#define IThing_get_RemoteProperty(This,bstrName,pvar)	\
    ( (This)->lpVtbl -> get_RemoteProperty(This,bstrName,pvar) ) 

#define IThing_get_Property(This,bstrName,pvar)	\
    ( (This)->lpVtbl -> get_Property(This,bstrName,pvar) ) 

#define IThing_put_Property(This,bstrName,var)	\
    ( (This)->lpVtbl -> put_Property(This,bstrName,var) ) 

#define IThing_get_PropertyExt(This,bstrName,nHashOrig,ppexemplar,pvar)	\
    ( (This)->lpVtbl -> get_PropertyExt(This,bstrName,nHashOrig,ppexemplar,pvar) ) 

#define IThing_InstanceProperty(This,bstrName,pExemplar)	\
    ( (This)->lpVtbl -> InstanceProperty(This,bstrName,pExemplar) ) 

#define IThing_get_PropertySecurity(This,bstrName,ppSecurity)	\
    ( (This)->lpVtbl -> get_PropertySecurity(This,bstrName,ppSecurity) ) 

#define IThing_get_PropertySecurityExt(This,bstrName,nHashOrig,ppexemplar,pfInstance,ppSecurity)	\
    ( (This)->lpVtbl -> get_PropertySecurityExt(This,bstrName,nHashOrig,ppexemplar,pfInstance,ppSecurity) ) 

#define IThing_get_InstanceProperties(This,pppropertymap)	\
    ( (This)->lpVtbl -> get_InstanceProperties(This,pppropertymap) ) 

#define IThing_get_Properties(This,pppropertymap)	\
    ( (This)->lpVtbl -> get_Properties(This,pppropertymap) ) 

#define IThing_CopyPropertiesTo(This,ppropertymap)	\
    ( (This)->lpVtbl -> CopyPropertiesTo(This,ppropertymap) ) 

#define IThing_IsValidMethod(This,bstrName,pbool)	\
    ( (This)->lpVtbl -> IsValidMethod(This,bstrName,pbool) ) 

#define IThing_IsValidInstanceMethod(This,bstrName,pbool)	\
    ( (This)->lpVtbl -> IsValidInstanceMethod(This,bstrName,pbool) ) 

#define IThing_CreateAndAddMethod(This,lFlags,pmodule,bstrName,varFuncName,varPsbits,varPermissions)	\
    ( (This)->lpVtbl -> CreateAndAddMethod(This,lFlags,pmodule,bstrName,varFuncName,varPsbits,varPermissions) ) 

#define IThing_CreateAndAddMethodExt(This,lFlags,pmodule,bstrFuncName,bstrMethName,psbits,permissions)	\
    ( (This)->lpVtbl -> CreateAndAddMethodExt(This,lFlags,pmodule,bstrFuncName,bstrMethName,psbits,permissions) ) 

#define IThing_AddMethod(This,bstrName,pmethod,varPsbits,varPermissions)	\
    ( (This)->lpVtbl -> AddMethod(This,bstrName,pmethod,varPsbits,varPermissions) ) 

#define IThing_AddMethodExt(This,bstrName,pmethod,psbits,permissions)	\
    ( (This)->lpVtbl -> AddMethodExt(This,bstrName,pmethod,psbits,permissions) ) 

#define IThing_AddMethodInt(This,bstrName,pmethod,pExemplar,psbits,permissions)	\
    ( (This)->lpVtbl -> AddMethodInt(This,bstrName,pmethod,pExemplar,psbits,permissions) ) 

#define IThing_RemoveMethod(This,bstrName)	\
    ( (This)->lpVtbl -> RemoveMethod(This,bstrName) ) 

#define IThing_get_Method(This,bstrName,ppmethod)	\
    ( (This)->lpVtbl -> get_Method(This,bstrName,ppmethod) ) 

#define IThing_put_Method(This,bstrName,pmethod)	\
    ( (This)->lpVtbl -> put_Method(This,bstrName,pmethod) ) 

#define IThing_get_MethodExt(This,bstrName,nHashOrig,ppexemplar,ppmethod)	\
    ( (This)->lpVtbl -> get_MethodExt(This,bstrName,nHashOrig,ppexemplar,ppmethod) ) 

#define IThing_get_MethodSecurity(This,bstrName,ppSecurity)	\
    ( (This)->lpVtbl -> get_MethodSecurity(This,bstrName,ppSecurity) ) 

#define IThing_get_MethodSecurityExt(This,bstrName,nHashOrig,ppexemplar,pfInstance,ppSecurity)	\
    ( (This)->lpVtbl -> get_MethodSecurityExt(This,bstrName,nHashOrig,ppexemplar,pfInstance,ppSecurity) ) 

#define IThing_get_InstanceMethods(This,pppropertymap)	\
    ( (This)->lpVtbl -> get_InstanceMethods(This,pppropertymap) ) 

#define IThing_get_Methods(This,pppropertymap)	\
    ( (This)->lpVtbl -> get_Methods(This,pppropertymap) ) 

#define IThing_CopyMethodsTo(This,ppropertymap)	\
    ( (This)->lpVtbl -> CopyMethodsTo(This,ppropertymap) ) 

#define IThing_FireEvent(This,bstrEvent,var)	\
    ( (This)->lpVtbl -> FireEvent(This,bstrEvent,var) ) 

#define IThing_FireEventExt(This,bstrEvent,pdispparams,lFlags)	\
    ( (This)->lpVtbl -> FireEventExt(This,bstrEvent,pdispparams,lFlags) ) 

#define IThing_FireEventInt(This,bstrEvent,pproplist,lFlags)	\
    ( (This)->lpVtbl -> FireEventInt(This,bstrEvent,pproplist,lFlags) ) 

#define IThing_InvokeMethod(This,bstrMethod,var,pvar)	\
    ( (This)->lpVtbl -> InvokeMethod(This,bstrMethod,var,pvar) ) 

#define IThing_InvokeMethodInt(This,pThing,bstrMethod,pproplist,pvar)	\
    ( (This)->lpVtbl -> InvokeMethodInt(This,pThing,bstrMethod,pproplist,pvar) ) 

#define IThing_InvokeMethodExt(This,bstrMethod,pdispparams,pvar)	\
    ( (This)->lpVtbl -> InvokeMethodExt(This,bstrMethod,pdispparams,pvar) ) 

#define IThing_InvokeSuperMethod(This,var,pvar)	\
    ( (This)->lpVtbl -> InvokeSuperMethod(This,var,pvar) ) 

#define IThing_InvokeSuperMethodExt(This,pdispparams,pvar)	\
    ( (This)->lpVtbl -> InvokeSuperMethodExt(This,pdispparams,pvar) ) 

#define IThing_get_CurrentMethodName(This,pbstr)	\
    ( (This)->lpVtbl -> get_CurrentMethodName(This,pbstr) ) 

#define IThing_put_CurrentMethodName(This,bstr)	\
    ( (This)->lpVtbl -> put_CurrentMethodName(This,bstr) ) 

#define IThing_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IThing_put_Name(This,bstr)	\
    ( (This)->lpVtbl -> put_Name(This,bstr) ) 

#define IThing_get_Description(This,pbstr)	\
    ( (This)->lpVtbl -> get_Description(This,pbstr) ) 

#define IThing_put_Description(This,bstr)	\
    ( (This)->lpVtbl -> put_Description(This,bstr) ) 

#define IThing_get_Contents(This,ppproplist)	\
    ( (This)->lpVtbl -> get_Contents(This,ppproplist) ) 

#define IThing_get_Container(This,ppthing)	\
    ( (This)->lpVtbl -> get_Container(This,ppthing) ) 

#define IThing_put_Container(This,pthing)	\
    ( (This)->lpVtbl -> put_Container(This,pthing) ) 

#define IThing_get_Owner(This,ppthing)	\
    ( (This)->lpVtbl -> get_Owner(This,ppthing) ) 

#define IThing_CheckPropertiesSecurity(This,ulFlags,pboolVal)	\
    ( (This)->lpVtbl -> CheckPropertiesSecurity(This,ulFlags,pboolVal) ) 

#define IThing_CheckMethodsSecurity(This,ulFlags,pboolVal)	\
    ( (This)->lpVtbl -> CheckMethodsSecurity(This,ulFlags,pboolVal) ) 

#define IThing_CheckPropertiesSecurityExt(This,ulFlags)	\
    ( (This)->lpVtbl -> CheckPropertiesSecurityExt(This,ulFlags) ) 

#define IThing_CheckMethodsSecurityExt(This,ulFlags)	\
    ( (This)->lpVtbl -> CheckMethodsSecurityExt(This,ulFlags) ) 

#define IThing_CheckPropertySecurity(This,bstrName,ulFlags,pboolVal)	\
    ( (This)->lpVtbl -> CheckPropertySecurity(This,bstrName,ulFlags,pboolVal) ) 

#define IThing_CheckMethodSecurity(This,bstrName,ulFlags,pboolVal)	\
    ( (This)->lpVtbl -> CheckMethodSecurity(This,bstrName,ulFlags,pboolVal) ) 

#define IThing_CheckPropertySecurityExt(This,bstrName,ulFlags)	\
    ( (This)->lpVtbl -> CheckPropertySecurityExt(This,bstrName,ulFlags) ) 

#define IThing_CheckMethodSecurityExt(This,bstrName,ulFlags)	\
    ( (This)->lpVtbl -> CheckMethodSecurityExt(This,bstrName,ulFlags) ) 

#define IThing_NotifyObjectPropertyChanged(This,pprop,lHint,varHintData)	\
    ( (This)->lpVtbl -> NotifyObjectPropertyChanged(This,pprop,lHint,varHintData) ) 

#define IThing_NotifyMethodChanged(This,pmethod,lHint,varHintData)	\
    ( (This)->lpVtbl -> NotifyMethodChanged(This,pmethod,lHint,varHintData) ) 

#define IThing_AddString(This,bstrName,bstr)	\
    ( (This)->lpVtbl -> AddString(This,bstrName,bstr) ) 

#define IThing_AddObjectProperty(This,bstrName,pobjectproperty)	\
    ( (This)->lpVtbl -> AddObjectProperty(This,bstrName,pobjectproperty) ) 

#define IThing_AddObjectPropertyExt(This,bstrName,iid,pobjectproperty)	\
    ( (This)->lpVtbl -> AddObjectPropertyExt(This,bstrName,iid,pobjectproperty) ) 

#define IThing_AddThing(This,bstrName,pthing)	\
    ( (This)->lpVtbl -> AddThing(This,bstrName,pthing) ) 

#define IThing_AddBOOL(This,bstrName,boolVal)	\
    ( (This)->lpVtbl -> AddBOOL(This,bstrName,boolVal) ) 

#define IThing_AddLong(This,bstrName,lval)	\
    ( (This)->lpVtbl -> AddLong(This,bstrName,lval) ) 

#define IThing_AddShort(This,bstrName,sval)	\
    ( (This)->lpVtbl -> AddShort(This,bstrName,sval) ) 

#define IThing_AddDispatch(This,bstrName,pdisp)	\
    ( (This)->lpVtbl -> AddDispatch(This,bstrName,pdisp) ) 

#define IThing_get_String(This,bstrName,pbstr)	\
    ( (This)->lpVtbl -> get_String(This,bstrName,pbstr) ) 

#define IThing_put_String(This,bstrName,bstr)	\
    ( (This)->lpVtbl -> put_String(This,bstrName,bstr) ) 

#define IThing_get_ObjectProperty(This,bstrName,ppobjectproperty)	\
    ( (This)->lpVtbl -> get_ObjectProperty(This,bstrName,ppobjectproperty) ) 

#define IThing_put_ObjectProperty(This,bstrName,pobjectproperty)	\
    ( (This)->lpVtbl -> put_ObjectProperty(This,bstrName,pobjectproperty) ) 

#define IThing_get_ObjectPropertyExt(This,bstrName,iid,ppobjectproperty)	\
    ( (This)->lpVtbl -> get_ObjectPropertyExt(This,bstrName,iid,ppobjectproperty) ) 

#define IThing_get_Thing(This,bstrName,ppthing)	\
    ( (This)->lpVtbl -> get_Thing(This,bstrName,ppthing) ) 

#define IThing_put_Thing(This,bstrName,pthing)	\
    ( (This)->lpVtbl -> put_Thing(This,bstrName,pthing) ) 

#define IThing_get_BOOL(This,bstrName,pboolVal)	\
    ( (This)->lpVtbl -> get_BOOL(This,bstrName,pboolVal) ) 

#define IThing_put_BOOL(This,bstrName,boolVal)	\
    ( (This)->lpVtbl -> put_BOOL(This,bstrName,boolVal) ) 

#define IThing_get_Long(This,bstrName,plval)	\
    ( (This)->lpVtbl -> get_Long(This,bstrName,plval) ) 

#define IThing_put_Long(This,bstrName,lval)	\
    ( (This)->lpVtbl -> put_Long(This,bstrName,lval) ) 

#define IThing_get_Short(This,bstrName,psval)	\
    ( (This)->lpVtbl -> get_Short(This,bstrName,psval) ) 

#define IThing_put_Short(This,bstrName,sval)	\
    ( (This)->lpVtbl -> put_Short(This,bstrName,sval) ) 

#define IThing_get_Dispatch(This,bstrName,ppdisp)	\
    ( (This)->lpVtbl -> get_Dispatch(This,bstrName,ppdisp) ) 

#define IThing_put_Dispatch(This,bstrName,pdisp)	\
    ( (This)->lpVtbl -> put_Dispatch(This,bstrName,pdisp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThing_INTERFACE_DEFINED__ */


#ifndef __IModule_INTERFACE_DEFINED__
#define __IModule_INTERFACE_DEFINED__

/* interface IModule */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_MODULE_FLAGS	( 101 )

#define	DISPID_MODULE_MODULENAME	( 102 )

#define	DISPID_MODULE_RELOAD	( 103 )


EXTERN_C const IID IID_IModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D984A-A417-11CF-9BF0-0080C7A56A8A")
    IModule : public IObjectProperty
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ModuleName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_ModuleType( 
            /* [retval][out] */ long *plval) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ long *plVal) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_Flags( 
            /* [in] */ long lVal) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Install( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InvokeByName( 
            /* [in] */ BSTR bstrSubName,
            /* [in] */ WORD wFlags,
            /* [out] */ DISPID *pdispid,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [out] */ VARIANT *pvar,
            /* [out] */ HRESULT *phr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InvokeByDispID( 
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [out] */ VARIANT *pvar,
            /* [out] */ HRESULT *phr) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Dispatch( 
            /* [retval][out] */ IDispatch **ppdispatch) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE Reload( 
            /* [in] */ VARIANT_BOOL bReinstall) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Unload( 
            /* [in] */ VARIANT_BOOL bShutdown) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Validate( 
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_IsShutdown( 
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IModuleVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IModule * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IModule * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IModule * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IModule * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IModule * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IModule * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IModule * This,
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
            IModule * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IModule * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IModule * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IModule * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IModule * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IModule * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IModule * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IModule * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IModule * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IModule * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IModule * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IModule * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IModule * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IModule * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IModule * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IModule * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IModule * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IModule * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IModule, get_ModuleName)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleName )( 
            IModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IModule, get_ModuleType)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleType )( 
            IModule * This,
            /* [retval][out] */ long *plval);
        
        DECLSPEC_XFGVIRT(IModule, get_Flags)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            IModule * This,
            /* [retval][out] */ long *plVal);
        
        DECLSPEC_XFGVIRT(IModule, put_Flags)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_Flags )( 
            IModule * This,
            /* [in] */ long lVal);
        
        DECLSPEC_XFGVIRT(IModule, Install)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IModule * This);
        
        DECLSPEC_XFGVIRT(IModule, InvokeByName)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InvokeByName )( 
            IModule * This,
            /* [in] */ BSTR bstrSubName,
            /* [in] */ WORD wFlags,
            /* [out] */ DISPID *pdispid,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [out] */ VARIANT *pvar,
            /* [out] */ HRESULT *phr);
        
        DECLSPEC_XFGVIRT(IModule, InvokeByDispID)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InvokeByDispID )( 
            IModule * This,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [out] */ VARIANT *pvar,
            /* [out] */ HRESULT *phr);
        
        DECLSPEC_XFGVIRT(IModule, get_Dispatch)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Dispatch )( 
            IModule * This,
            /* [retval][out] */ IDispatch **ppdispatch);
        
        DECLSPEC_XFGVIRT(IModule, Reload)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Reload )( 
            IModule * This,
            /* [in] */ VARIANT_BOOL bReinstall);
        
        DECLSPEC_XFGVIRT(IModule, Unload)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Unload )( 
            IModule * This,
            /* [in] */ VARIANT_BOOL bShutdown);
        
        DECLSPEC_XFGVIRT(IModule, Validate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            IModule * This,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IModule, get_IsShutdown)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_IsShutdown )( 
            IModule * This,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        END_INTERFACE
    } IModuleVtbl;

    interface IModule
    {
        CONST_VTBL struct IModuleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IModule_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IModule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IModule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IModule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IModule_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IModule_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IModule_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IModule_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IModule_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IModule_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IModule_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IModule_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IModule_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IModule_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IModule_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IModule_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IModule_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IModule_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IModule_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IModule_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IModule_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IModule_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IModule_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IModule_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IModule_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IModule_get_ModuleName(This,pbstr)	\
    ( (This)->lpVtbl -> get_ModuleName(This,pbstr) ) 

#define IModule_get_ModuleType(This,plval)	\
    ( (This)->lpVtbl -> get_ModuleType(This,plval) ) 

#define IModule_get_Flags(This,plVal)	\
    ( (This)->lpVtbl -> get_Flags(This,plVal) ) 

#define IModule_put_Flags(This,lVal)	\
    ( (This)->lpVtbl -> put_Flags(This,lVal) ) 

#define IModule_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IModule_InvokeByName(This,bstrSubName,wFlags,pdispid,pdispparams,bQuiet,pvar,phr)	\
    ( (This)->lpVtbl -> InvokeByName(This,bstrSubName,wFlags,pdispid,pdispparams,bQuiet,pvar,phr) ) 

#define IModule_InvokeByDispID(This,dispid,wFlags,pdispparams,bQuiet,pvar,phr)	\
    ( (This)->lpVtbl -> InvokeByDispID(This,dispid,wFlags,pdispparams,bQuiet,pvar,phr) ) 

#define IModule_get_Dispatch(This,ppdispatch)	\
    ( (This)->lpVtbl -> get_Dispatch(This,ppdispatch) ) 

#define IModule_Reload(This,bReinstall)	\
    ( (This)->lpVtbl -> Reload(This,bReinstall) ) 

#define IModule_Unload(This,bShutdown)	\
    ( (This)->lpVtbl -> Unload(This,bShutdown) ) 

#define IModule_Validate(This,pboolVal)	\
    ( (This)->lpVtbl -> Validate(This,pboolVal) ) 

#define IModule_get_IsShutdown(This,pboolVal)	\
    ( (This)->lpVtbl -> get_IsShutdown(This,pboolVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IModule_INTERFACE_DEFINED__ */


#ifndef __ICOMModule_INTERFACE_DEFINED__
#define __ICOMModule_INTERFACE_DEFINED__

/* interface ICOMModule */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_COMMODULE_MODULECLSID	( 205 )

#define	DISPID_COMMODULE_MODULEPROGID	( 206 )


EXTERN_C const IID IID_ICOMModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D984C-A417-11CF-9BF0-0080C7A56A8A")
    ICOMModule : public IModule
    {
    public:
        virtual /* [id][helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ModuleCLSID( 
            /* [retval][out] */ CLSID *pclsid) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_ModuleProgID( 
            /* [in] */ BSTR bstr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICOMModuleVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICOMModule * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICOMModule * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICOMModule * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICOMModule * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICOMModule * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICOMModule * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICOMModule * This,
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
            ICOMModule * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            ICOMModule * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            ICOMModule * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            ICOMModule * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            ICOMModule * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            ICOMModule * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ICOMModule * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            ICOMModule * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            ICOMModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            ICOMModule * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICOMModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ICOMModule * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            ICOMModule * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            ICOMModule * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            ICOMModule * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            ICOMModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            ICOMModule * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ICOMModule * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            ICOMModule * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            ICOMModule * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            ICOMModule * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IModule, get_ModuleName)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleName )( 
            ICOMModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IModule, get_ModuleType)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleType )( 
            ICOMModule * This,
            /* [retval][out] */ long *plval);
        
        DECLSPEC_XFGVIRT(IModule, get_Flags)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICOMModule * This,
            /* [retval][out] */ long *plVal);
        
        DECLSPEC_XFGVIRT(IModule, put_Flags)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_Flags )( 
            ICOMModule * This,
            /* [in] */ long lVal);
        
        DECLSPEC_XFGVIRT(IModule, Install)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            ICOMModule * This);
        
        DECLSPEC_XFGVIRT(IModule, InvokeByName)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InvokeByName )( 
            ICOMModule * This,
            /* [in] */ BSTR bstrSubName,
            /* [in] */ WORD wFlags,
            /* [out] */ DISPID *pdispid,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [out] */ VARIANT *pvar,
            /* [out] */ HRESULT *phr);
        
        DECLSPEC_XFGVIRT(IModule, InvokeByDispID)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InvokeByDispID )( 
            ICOMModule * This,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [out] */ VARIANT *pvar,
            /* [out] */ HRESULT *phr);
        
        DECLSPEC_XFGVIRT(IModule, get_Dispatch)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Dispatch )( 
            ICOMModule * This,
            /* [retval][out] */ IDispatch **ppdispatch);
        
        DECLSPEC_XFGVIRT(IModule, Reload)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Reload )( 
            ICOMModule * This,
            /* [in] */ VARIANT_BOOL bReinstall);
        
        DECLSPEC_XFGVIRT(IModule, Unload)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Unload )( 
            ICOMModule * This,
            /* [in] */ VARIANT_BOOL bShutdown);
        
        DECLSPEC_XFGVIRT(IModule, Validate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            ICOMModule * This,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IModule, get_IsShutdown)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_IsShutdown )( 
            ICOMModule * This,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(ICOMModule, get_ModuleCLSID)
        /* [id][helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleCLSID )( 
            ICOMModule * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(ICOMModule, put_ModuleProgID)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_ModuleProgID )( 
            ICOMModule * This,
            /* [in] */ BSTR bstr);
        
        END_INTERFACE
    } ICOMModuleVtbl;

    interface ICOMModule
    {
        CONST_VTBL struct ICOMModuleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICOMModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICOMModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICOMModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICOMModule_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICOMModule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICOMModule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICOMModule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICOMModule_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define ICOMModule_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define ICOMModule_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define ICOMModule_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define ICOMModule_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define ICOMModule_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define ICOMModule_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define ICOMModule_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define ICOMModule_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define ICOMModule_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define ICOMModule_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define ICOMModule_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define ICOMModule_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define ICOMModule_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define ICOMModule_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define ICOMModule_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define ICOMModule_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define ICOMModule_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define ICOMModule_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define ICOMModule_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define ICOMModule_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define ICOMModule_get_ModuleName(This,pbstr)	\
    ( (This)->lpVtbl -> get_ModuleName(This,pbstr) ) 

#define ICOMModule_get_ModuleType(This,plval)	\
    ( (This)->lpVtbl -> get_ModuleType(This,plval) ) 

#define ICOMModule_get_Flags(This,plVal)	\
    ( (This)->lpVtbl -> get_Flags(This,plVal) ) 

#define ICOMModule_put_Flags(This,lVal)	\
    ( (This)->lpVtbl -> put_Flags(This,lVal) ) 

#define ICOMModule_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define ICOMModule_InvokeByName(This,bstrSubName,wFlags,pdispid,pdispparams,bQuiet,pvar,phr)	\
    ( (This)->lpVtbl -> InvokeByName(This,bstrSubName,wFlags,pdispid,pdispparams,bQuiet,pvar,phr) ) 

#define ICOMModule_InvokeByDispID(This,dispid,wFlags,pdispparams,bQuiet,pvar,phr)	\
    ( (This)->lpVtbl -> InvokeByDispID(This,dispid,wFlags,pdispparams,bQuiet,pvar,phr) ) 

#define ICOMModule_get_Dispatch(This,ppdispatch)	\
    ( (This)->lpVtbl -> get_Dispatch(This,ppdispatch) ) 

#define ICOMModule_Reload(This,bReinstall)	\
    ( (This)->lpVtbl -> Reload(This,bReinstall) ) 

#define ICOMModule_Unload(This,bShutdown)	\
    ( (This)->lpVtbl -> Unload(This,bShutdown) ) 

#define ICOMModule_Validate(This,pboolVal)	\
    ( (This)->lpVtbl -> Validate(This,pboolVal) ) 

#define ICOMModule_get_IsShutdown(This,pboolVal)	\
    ( (This)->lpVtbl -> get_IsShutdown(This,pboolVal) ) 


#define ICOMModule_get_ModuleCLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_ModuleCLSID(This,pclsid) ) 

#define ICOMModule_put_ModuleProgID(This,bstr)	\
    ( (This)->lpVtbl -> put_ModuleProgID(This,bstr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICOMModule_INTERFACE_DEFINED__ */


#ifndef __IScriptModule_INTERFACE_DEFINED__
#define __IScriptModule_INTERFACE_DEFINED__

/* interface IScriptModule */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_SCRIPTMODULE_SCRIPTPATH	( 205 )


EXTERN_C const IID IID_IScriptModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D984E-A417-11CF-9BF0-0080C7A56A8A")
    IScriptModule : public IModule
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptPath( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_ScriptPath( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddScriptlet( 
            /* [in] */ BSTR bstrCode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptModuleVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptModule * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptModule * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptModule * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptModule * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptModule * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptModule * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptModule * This,
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
            IScriptModule * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IScriptModule * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IScriptModule * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IScriptModule * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IScriptModule * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IScriptModule * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IScriptModule * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IScriptModule * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IScriptModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IScriptModule * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IScriptModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IScriptModule * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IScriptModule * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IScriptModule * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IScriptModule * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IScriptModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IScriptModule * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IScriptModule * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IScriptModule * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IScriptModule * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IScriptModule * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IModule, get_ModuleName)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleName )( 
            IScriptModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IModule, get_ModuleType)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_ModuleType )( 
            IScriptModule * This,
            /* [retval][out] */ long *plval);
        
        DECLSPEC_XFGVIRT(IModule, get_Flags)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            IScriptModule * This,
            /* [retval][out] */ long *plVal);
        
        DECLSPEC_XFGVIRT(IModule, put_Flags)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_Flags )( 
            IScriptModule * This,
            /* [in] */ long lVal);
        
        DECLSPEC_XFGVIRT(IModule, Install)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IScriptModule * This);
        
        DECLSPEC_XFGVIRT(IModule, InvokeByName)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InvokeByName )( 
            IScriptModule * This,
            /* [in] */ BSTR bstrSubName,
            /* [in] */ WORD wFlags,
            /* [out] */ DISPID *pdispid,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [out] */ VARIANT *pvar,
            /* [out] */ HRESULT *phr);
        
        DECLSPEC_XFGVIRT(IModule, InvokeByDispID)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InvokeByDispID )( 
            IScriptModule * This,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ VARIANT_BOOL bQuiet,
            /* [out] */ VARIANT *pvar,
            /* [out] */ HRESULT *phr);
        
        DECLSPEC_XFGVIRT(IModule, get_Dispatch)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Dispatch )( 
            IScriptModule * This,
            /* [retval][out] */ IDispatch **ppdispatch);
        
        DECLSPEC_XFGVIRT(IModule, Reload)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Reload )( 
            IScriptModule * This,
            /* [in] */ VARIANT_BOOL bReinstall);
        
        DECLSPEC_XFGVIRT(IModule, Unload)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Unload )( 
            IScriptModule * This,
            /* [in] */ VARIANT_BOOL bShutdown);
        
        DECLSPEC_XFGVIRT(IModule, Validate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            IScriptModule * This,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IModule, get_IsShutdown)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_IsShutdown )( 
            IScriptModule * This,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IScriptModule, get_ScriptPath)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptPath )( 
            IScriptModule * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IScriptModule, put_ScriptPath)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptPath )( 
            IScriptModule * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IScriptModule, AddScriptlet)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddScriptlet )( 
            IScriptModule * This,
            /* [in] */ BSTR bstrCode);
        
        END_INTERFACE
    } IScriptModuleVtbl;

    interface IScriptModule
    {
        CONST_VTBL struct IScriptModuleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptModule_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptModule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptModule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptModule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptModule_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IScriptModule_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IScriptModule_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IScriptModule_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IScriptModule_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IScriptModule_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IScriptModule_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IScriptModule_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IScriptModule_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IScriptModule_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IScriptModule_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IScriptModule_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IScriptModule_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IScriptModule_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IScriptModule_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IScriptModule_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IScriptModule_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IScriptModule_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IScriptModule_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IScriptModule_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IScriptModule_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IScriptModule_get_ModuleName(This,pbstr)	\
    ( (This)->lpVtbl -> get_ModuleName(This,pbstr) ) 

#define IScriptModule_get_ModuleType(This,plval)	\
    ( (This)->lpVtbl -> get_ModuleType(This,plval) ) 

#define IScriptModule_get_Flags(This,plVal)	\
    ( (This)->lpVtbl -> get_Flags(This,plVal) ) 

#define IScriptModule_put_Flags(This,lVal)	\
    ( (This)->lpVtbl -> put_Flags(This,lVal) ) 

#define IScriptModule_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IScriptModule_InvokeByName(This,bstrSubName,wFlags,pdispid,pdispparams,bQuiet,pvar,phr)	\
    ( (This)->lpVtbl -> InvokeByName(This,bstrSubName,wFlags,pdispid,pdispparams,bQuiet,pvar,phr) ) 

#define IScriptModule_InvokeByDispID(This,dispid,wFlags,pdispparams,bQuiet,pvar,phr)	\
    ( (This)->lpVtbl -> InvokeByDispID(This,dispid,wFlags,pdispparams,bQuiet,pvar,phr) ) 

#define IScriptModule_get_Dispatch(This,ppdispatch)	\
    ( (This)->lpVtbl -> get_Dispatch(This,ppdispatch) ) 

#define IScriptModule_Reload(This,bReinstall)	\
    ( (This)->lpVtbl -> Reload(This,bReinstall) ) 

#define IScriptModule_Unload(This,bShutdown)	\
    ( (This)->lpVtbl -> Unload(This,bShutdown) ) 

#define IScriptModule_Validate(This,pboolVal)	\
    ( (This)->lpVtbl -> Validate(This,pboolVal) ) 

#define IScriptModule_get_IsShutdown(This,pboolVal)	\
    ( (This)->lpVtbl -> get_IsShutdown(This,pboolVal) ) 


#define IScriptModule_get_ScriptPath(This,pbstr)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,pbstr) ) 

#define IScriptModule_put_ScriptPath(This,bstr)	\
    ( (This)->lpVtbl -> put_ScriptPath(This,bstr) ) 

#define IScriptModule_AddScriptlet(This,bstrCode)	\
    ( (This)->lpVtbl -> AddScriptlet(This,bstrCode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptModule_INTERFACE_DEFINED__ */


#ifndef __IMethod_INTERFACE_DEFINED__
#define __IMethod_INTERFACE_DEFINED__

/* interface IMethod */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_METHOD_FLAGS	( 101 )

#define	DISPID_METHOD_MODULE	( 102 )

#define	DISPID_METHOD_DISPID	( 103 )

#define	DISPID_METHOD_METHODNAME	( 104 )

#define	DISPID_METHOD_ARGUMENTSINT	( 105 )

#define	DISPID_METHOD_CODE	( 106 )


EXTERN_C const IID IID_IMethod;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9850-A417-11CF-9BF0-0080C7A56A8A")
    IMethod : public IObjectProperty
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ long *plVal) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_Flags( 
            /* [in] */ long lVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [retval][out] */ IModule **ppmodule) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_Module( 
            /* [in] */ IModule *pmodule) = 0;
        
        virtual /* [id][helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_DispID( 
            /* [retval][out] */ DISPID *pdispid) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_DispID( 
            /* [in] */ DISPID dispid) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MethodName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_MethodName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Code( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_Code( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_IsInline( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InvokeMethodExt( 
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *phr,
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_ArgumentsInt( 
            /* [in] */ IPropertyList *pproplist) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ArgumentsExt( 
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_Arguments( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Validate( 
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMethodVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMethod * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMethod * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMethod * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMethod * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMethod * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMethod * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMethod * This,
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
            IMethod * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IMethod * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IMethod * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IMethod * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IMethod * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IMethod * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IMethod * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IMethod * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IMethod * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IMethod * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMethod * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IMethod * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IMethod * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IMethod * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IMethod * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IMethod * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IMethod * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IMethod * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IMethod * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IMethod * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IMethod * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IMethod, get_Flags)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            IMethod * This,
            /* [retval][out] */ long *plVal);
        
        DECLSPEC_XFGVIRT(IMethod, put_Flags)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_Flags )( 
            IMethod * This,
            /* [in] */ long lVal);
        
        DECLSPEC_XFGVIRT(IMethod, get_Module)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IMethod * This,
            /* [retval][out] */ IModule **ppmodule);
        
        DECLSPEC_XFGVIRT(IMethod, put_Module)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_Module )( 
            IMethod * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IMethod, get_DispID)
        /* [id][helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_DispID )( 
            IMethod * This,
            /* [retval][out] */ DISPID *pdispid);
        
        DECLSPEC_XFGVIRT(IMethod, put_DispID)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_DispID )( 
            IMethod * This,
            /* [in] */ DISPID dispid);
        
        DECLSPEC_XFGVIRT(IMethod, get_MethodName)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MethodName )( 
            IMethod * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IMethod, put_MethodName)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_MethodName )( 
            IMethod * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IMethod, get_Code)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Code )( 
            IMethod * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IMethod, put_Code)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_Code )( 
            IMethod * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IMethod, get_IsInline)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_IsInline )( 
            IMethod * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IMethod, InvokeMethodExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InvokeMethodExt )( 
            IMethod * This,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *phr,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IMethod, put_ArgumentsInt)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_ArgumentsInt )( 
            IMethod * This,
            /* [in] */ IPropertyList *pproplist);
        
        DECLSPEC_XFGVIRT(IMethod, put_ArgumentsExt)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ArgumentsExt )( 
            IMethod * This,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IMethod, put_Arguments)
        /* [helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_Arguments )( 
            IMethod * This,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IMethod, Validate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            IMethod * This,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        END_INTERFACE
    } IMethodVtbl;

    interface IMethod
    {
        CONST_VTBL struct IMethodVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMethod_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMethod_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMethod_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMethod_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMethod_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMethod_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMethod_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMethod_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IMethod_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IMethod_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IMethod_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IMethod_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IMethod_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IMethod_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IMethod_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IMethod_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IMethod_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IMethod_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IMethod_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IMethod_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IMethod_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IMethod_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IMethod_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IMethod_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IMethod_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IMethod_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IMethod_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IMethod_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IMethod_get_Flags(This,plVal)	\
    ( (This)->lpVtbl -> get_Flags(This,plVal) ) 

#define IMethod_put_Flags(This,lVal)	\
    ( (This)->lpVtbl -> put_Flags(This,lVal) ) 

#define IMethod_get_Module(This,ppmodule)	\
    ( (This)->lpVtbl -> get_Module(This,ppmodule) ) 

#define IMethod_put_Module(This,pmodule)	\
    ( (This)->lpVtbl -> put_Module(This,pmodule) ) 

#define IMethod_get_DispID(This,pdispid)	\
    ( (This)->lpVtbl -> get_DispID(This,pdispid) ) 

#define IMethod_put_DispID(This,dispid)	\
    ( (This)->lpVtbl -> put_DispID(This,dispid) ) 

#define IMethod_get_MethodName(This,pbstr)	\
    ( (This)->lpVtbl -> get_MethodName(This,pbstr) ) 

#define IMethod_put_MethodName(This,bstr)	\
    ( (This)->lpVtbl -> put_MethodName(This,bstr) ) 

#define IMethod_get_Code(This,pbstr)	\
    ( (This)->lpVtbl -> get_Code(This,pbstr) ) 

#define IMethod_put_Code(This,bstr)	\
    ( (This)->lpVtbl -> put_Code(This,bstr) ) 

#define IMethod_get_IsInline(This,pbool)	\
    ( (This)->lpVtbl -> get_IsInline(This,pbool) ) 

#define IMethod_InvokeMethodExt(This,pdispparams,phr,pvar)	\
    ( (This)->lpVtbl -> InvokeMethodExt(This,pdispparams,phr,pvar) ) 

#define IMethod_put_ArgumentsInt(This,pproplist)	\
    ( (This)->lpVtbl -> put_ArgumentsInt(This,pproplist) ) 

#define IMethod_put_ArgumentsExt(This,pdispparams)	\
    ( (This)->lpVtbl -> put_ArgumentsExt(This,pdispparams) ) 

#define IMethod_put_Arguments(This,var)	\
    ( (This)->lpVtbl -> put_Arguments(This,var) ) 

#define IMethod_Validate(This,pboolVal)	\
    ( (This)->lpVtbl -> Validate(This,pboolVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMethod_INTERFACE_DEFINED__ */


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


