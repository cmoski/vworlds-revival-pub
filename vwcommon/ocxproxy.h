

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/ocxproxy.idl:
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

#ifndef __ocxproxy_h__
#define __ocxproxy_h__

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

#ifndef __IOCXProxy_FWD_DEFINED__
#define __IOCXProxy_FWD_DEFINED__
typedef interface IOCXProxy IOCXProxy;

#endif 	/* __IOCXProxy_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwprop.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IOCXProxy_INTERFACE_DEFINED__
#define __IOCXProxy_INTERFACE_DEFINED__

/* interface IOCXProxy */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_OCXPROXY_OCX	( 101 )


EXTERN_C const IID IID_IOCXProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("09362218-2570-11D1-83BF-00C04FB6FA46")
    IOCXProxy : public IObjectProperty
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OCX( 
            /* [retval][out] */ LPDISPATCH *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OCX( 
            /* [in] */ LPDISPATCH newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOCXProxyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOCXProxy * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOCXProxy * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOCXProxy * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOCXProxy * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOCXProxy * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOCXProxy * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOCXProxy * This,
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
            IOCXProxy * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IOCXProxy * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IOCXProxy * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IOCXProxy * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IOCXProxy * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IOCXProxy * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IOCXProxy * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IOCXProxy * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IOCXProxy * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IOCXProxy * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IOCXProxy * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IOCXProxy * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IOCXProxy * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IOCXProxy * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IOCXProxy * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IOCXProxy * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IOCXProxy * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IOCXProxy * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IOCXProxy * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IOCXProxy * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IOCXProxy * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IOCXProxy, get_OCX)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OCX )( 
            IOCXProxy * This,
            /* [retval][out] */ LPDISPATCH *pVal);
        
        DECLSPEC_XFGVIRT(IOCXProxy, put_OCX)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OCX )( 
            IOCXProxy * This,
            /* [in] */ LPDISPATCH newVal);
        
        END_INTERFACE
    } IOCXProxyVtbl;

    interface IOCXProxy
    {
        CONST_VTBL struct IOCXProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOCXProxy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOCXProxy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOCXProxy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOCXProxy_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOCXProxy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOCXProxy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOCXProxy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOCXProxy_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IOCXProxy_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IOCXProxy_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IOCXProxy_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IOCXProxy_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IOCXProxy_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IOCXProxy_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IOCXProxy_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IOCXProxy_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IOCXProxy_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IOCXProxy_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IOCXProxy_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IOCXProxy_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IOCXProxy_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IOCXProxy_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IOCXProxy_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IOCXProxy_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IOCXProxy_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IOCXProxy_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IOCXProxy_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IOCXProxy_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IOCXProxy_get_OCX(This,pVal)	\
    ( (This)->lpVtbl -> get_OCX(This,pVal) ) 

#define IOCXProxy_put_OCX(This,newVal)	\
    ( (This)->lpVtbl -> put_OCX(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOCXProxy_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


