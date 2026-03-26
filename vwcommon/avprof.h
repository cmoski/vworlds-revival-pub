

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/avprof.idl:
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

#ifndef __avprof_h__
#define __avprof_h__

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

#ifndef __IAvatarProfile_FWD_DEFINED__
#define __IAvatarProfile_FWD_DEFINED__
typedef interface IAvatarProfile IAvatarProfile;

#endif 	/* __IAvatarProfile_FWD_DEFINED__ */


#ifndef __IAvatarProfileData_FWD_DEFINED__
#define __IAvatarProfileData_FWD_DEFINED__
typedef interface IAvatarProfileData IAvatarProfileData;

#endif 	/* __IAvatarProfileData_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwprop.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_avprof_0000_0000 */
/* [local] */ 

#define VWAVATARPROFILE_E_INVALIDKEYMAP				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0380)
#define VWAVATARPROFILE_E_INVALIDBANNEDOBJECTLIST	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0381)
#define VWAVATARPROFILE_E_KEYNOTEXIST				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0382)
#define VWAVATARPROFILE_E_KEYEXISTS					MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0383)
#define VWAVATARPROFILE_E_BANNEDOBJECT				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0384)
#define VWAVATARPROFILE_E_PERMISSIONDENIED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0385)
#define VWAVATARPROFILE_E_INVALIDOWNER				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0386)


extern RPC_IF_HANDLE __MIDL_itf_avprof_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_avprof_0000_0000_v0_0_s_ifspec;

#ifndef __IAvatarProfile_INTERFACE_DEFINED__
#define __IAvatarProfile_INTERFACE_DEFINED__

/* interface IAvatarProfile */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_AVATARPROFILE_ADDKEY	( 1 )

#define	DISPID_AVATARPROFILE_KEYVALUE	( 2 )

#define	DISPID_AVATARPROFILE_KEYGRAPHIC	( 3 )

#define	DISPID_AVATARPROFILE_KEYOWNER	( 4 )

#define	DISPID_AVATARPROFILE_KEYACCESS	( 5 )

#define	DISPID_AVATARPROFILE_REMOVEKEY	( 6 )

#define	DISPID_AVATARPROFILE_VERIFYKEY	( 7 )

#define	DISPID_AVATARPROFILE_AVATAR	( 8 )

#define	DISPID_AVATARPROFILE_BANOBJECT	( 9 )

#define	DISPID_AVATARPROFILE_UNBANOBJECT	( 10 )

#define	DISPID_AVATARPROFILE_WRITETODISK	( 11 )

#define	DISPID_AVATARPROFILE_READFROMDISK	( 12 )

#define	DISPID_AVATARPROFILE_KEYS	( 14 )

#define	DISPID_AVATARPROFILE_RESET	( 15 )


EXTERN_C const IID IID_IAvatarProfile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4E7472B-2953-11D1-AFB6-00C04FB915AA")
    IAvatarProfile : public IObjectProperty
    {
    public:
        virtual /* [helpstring][id][restricted] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Keys( 
            /* [retval][out] */ IPropertyList **ppKeyList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValid( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT_BOOL *pbValid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddKey( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT varKeyVal,
            /* [optional][in] */ VARIANT varStrGraphic,
            /* [optional][in] */ VARIANT varAccess,
            /* [optional][in] */ VARIANT varOwner) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyValue( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT *pvarKeyVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyValue( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT varKeyVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyGraphic( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrGraphic) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyGraphic( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrGraphic) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyOwner( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ IThing **ppOwner) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyAccess( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ short *sAccess) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyAccess( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ short sAccess) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveKey( 
            /* [in] */ BSTR bstrKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BanObject( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnbanObject( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Avatar( 
            /* [retval][out] */ IThing **pThing) = 0;
        
        virtual /* [helpstring][id][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Avatar( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][id][restricted] */ HRESULT STDMETHODCALLTYPE WriteToDisk( 
            /* [in] */ BSTR bstrFilename) = 0;
        
        virtual /* [helpstring][id][restricted] */ HRESULT STDMETHODCALLTYPE ReadFromDisk( 
            /* [in] */ BSTR bstrFilename) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAvatarProfileVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvatarProfile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvatarProfile * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvatarProfile * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvatarProfile * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvatarProfile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvatarProfile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvatarProfile * This,
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
            IAvatarProfile * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IAvatarProfile * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IAvatarProfile * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IAvatarProfile * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IAvatarProfile * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IAvatarProfile * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IAvatarProfile * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IAvatarProfile * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IAvatarProfile * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAvatarProfile * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IAvatarProfile * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IAvatarProfile * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IAvatarProfile * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IAvatarProfile * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IAvatarProfile * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IAvatarProfile * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IAvatarProfile * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IAvatarProfile * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, Reset)
        /* [helpstring][id][restricted] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAvatarProfile * This);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, get_Keys)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Keys )( 
            IAvatarProfile * This,
            /* [retval][out] */ IPropertyList **ppKeyList);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, IsValid)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT_BOOL *pbValid);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, AddKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddKey )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT varKeyVal,
            /* [optional][in] */ VARIANT varStrGraphic,
            /* [optional][in] */ VARIANT varAccess,
            /* [optional][in] */ VARIANT varOwner);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, get_KeyValue)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyValue )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT *pvarKeyVal);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, put_KeyValue)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyValue )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT varKeyVal);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, get_KeyGraphic)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyGraphic )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrGraphic);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, put_KeyGraphic)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyGraphic )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ BSTR bstrGraphic);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, get_KeyOwner)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyOwner )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ IThing **ppOwner);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, get_KeyAccess)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyAccess )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ short *sAccess);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, put_KeyAccess)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyAccess )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ short sAccess);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, RemoveKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveKey )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrKey);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, BanObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BanObject )( 
            IAvatarProfile * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, UnbanObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnbanObject )( 
            IAvatarProfile * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, get_Avatar)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Avatar )( 
            IAvatarProfile * This,
            /* [retval][out] */ IThing **pThing);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, put_Avatar)
        /* [helpstring][id][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Avatar )( 
            IAvatarProfile * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, WriteToDisk)
        /* [helpstring][id][restricted] */ HRESULT ( STDMETHODCALLTYPE *WriteToDisk )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrFilename);
        
        DECLSPEC_XFGVIRT(IAvatarProfile, ReadFromDisk)
        /* [helpstring][id][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReadFromDisk )( 
            IAvatarProfile * This,
            /* [in] */ BSTR bstrFilename);
        
        END_INTERFACE
    } IAvatarProfileVtbl;

    interface IAvatarProfile
    {
        CONST_VTBL struct IAvatarProfileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvatarProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAvatarProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAvatarProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAvatarProfile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAvatarProfile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAvatarProfile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAvatarProfile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAvatarProfile_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IAvatarProfile_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IAvatarProfile_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IAvatarProfile_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IAvatarProfile_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IAvatarProfile_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IAvatarProfile_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IAvatarProfile_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IAvatarProfile_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IAvatarProfile_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IAvatarProfile_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IAvatarProfile_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IAvatarProfile_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IAvatarProfile_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IAvatarProfile_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IAvatarProfile_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IAvatarProfile_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IAvatarProfile_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IAvatarProfile_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IAvatarProfile_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IAvatarProfile_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IAvatarProfile_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IAvatarProfile_get_Keys(This,ppKeyList)	\
    ( (This)->lpVtbl -> get_Keys(This,ppKeyList) ) 

#define IAvatarProfile_IsValid(This,bstrKey,pbValid)	\
    ( (This)->lpVtbl -> IsValid(This,bstrKey,pbValid) ) 

#define IAvatarProfile_AddKey(This,bstrKey,varKeyVal,varStrGraphic,varAccess,varOwner)	\
    ( (This)->lpVtbl -> AddKey(This,bstrKey,varKeyVal,varStrGraphic,varAccess,varOwner) ) 

#define IAvatarProfile_get_KeyValue(This,bstrKey,pvarKeyVal)	\
    ( (This)->lpVtbl -> get_KeyValue(This,bstrKey,pvarKeyVal) ) 

#define IAvatarProfile_put_KeyValue(This,bstrKey,varKeyVal)	\
    ( (This)->lpVtbl -> put_KeyValue(This,bstrKey,varKeyVal) ) 

#define IAvatarProfile_get_KeyGraphic(This,bstrKey,pbstrGraphic)	\
    ( (This)->lpVtbl -> get_KeyGraphic(This,bstrKey,pbstrGraphic) ) 

#define IAvatarProfile_put_KeyGraphic(This,bstrKey,bstrGraphic)	\
    ( (This)->lpVtbl -> put_KeyGraphic(This,bstrKey,bstrGraphic) ) 

#define IAvatarProfile_get_KeyOwner(This,bstrKey,ppOwner)	\
    ( (This)->lpVtbl -> get_KeyOwner(This,bstrKey,ppOwner) ) 

#define IAvatarProfile_get_KeyAccess(This,bstrKey,sAccess)	\
    ( (This)->lpVtbl -> get_KeyAccess(This,bstrKey,sAccess) ) 

#define IAvatarProfile_put_KeyAccess(This,bstrKey,sAccess)	\
    ( (This)->lpVtbl -> put_KeyAccess(This,bstrKey,sAccess) ) 

#define IAvatarProfile_RemoveKey(This,bstrKey)	\
    ( (This)->lpVtbl -> RemoveKey(This,bstrKey) ) 

#define IAvatarProfile_BanObject(This,pThing)	\
    ( (This)->lpVtbl -> BanObject(This,pThing) ) 

#define IAvatarProfile_UnbanObject(This,pThing)	\
    ( (This)->lpVtbl -> UnbanObject(This,pThing) ) 

#define IAvatarProfile_get_Avatar(This,pThing)	\
    ( (This)->lpVtbl -> get_Avatar(This,pThing) ) 

#define IAvatarProfile_put_Avatar(This,pThing)	\
    ( (This)->lpVtbl -> put_Avatar(This,pThing) ) 

#define IAvatarProfile_WriteToDisk(This,bstrFilename)	\
    ( (This)->lpVtbl -> WriteToDisk(This,bstrFilename) ) 

#define IAvatarProfile_ReadFromDisk(This,bstrFilename)	\
    ( (This)->lpVtbl -> ReadFromDisk(This,bstrFilename) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAvatarProfile_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_avprof_0000_0001 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("08DE86DC-5C5E-11d1-BB35-00C04FC2CAB1") 
enum KeyAccessConstant
    {
        kKeyPublic	= 0,
        kKeyFriend	= 1,
        kKeyPrivate	= 2
    } 	KeyAccessConstant;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("8ED15F62-7275-11d1-BB39-00C04FC2CAB1") 
enum ProfileHint
    {
        profileAddKey	= 0,
        profileKeyValue	= 1,
        profileKeyGraphic	= 2,
        profileKeyOwner	= 3,
        profileKeyAccess	= 4,
        profileRemoveKey	= 5,
        profileBanObject	= 6,
        profileUnbanObject	= 7
    } 	ProfileHint;



extern RPC_IF_HANDLE __MIDL_itf_avprof_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_avprof_0000_0001_v0_0_s_ifspec;

#ifndef __IAvatarProfileData_INTERFACE_DEFINED__
#define __IAvatarProfileData_INTERFACE_DEFINED__

/* interface IAvatarProfileData */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_AVATARPROFILEDATA_VALUE	( 1 )

#define	DISPID_AVATARPROFILEDATA_GRAPHIC	( 2 )

#define	DISPID_AVATARPROFILEDATA_OWNER	( 3 )

#define	DISPID_AVATARPROFILEDATA_ACCESS	( 4 )


EXTERN_C const IID IID_IAvatarProfileData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4E7472D-2953-11D1-AFB6-00C04FB915AA")
    IAvatarProfileData : public IObjectProperty
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pvarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT varValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Graphic( 
            /* [retval][out] */ BSTR *pbstrGraphic) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Graphic( 
            /* [in] */ BSTR bstrGraphic) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Owner( 
            /* [retval][out] */ IThing **ppOwner) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Owner( 
            /* [in] */ IThing *pOwner) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Access( 
            /* [retval][out] */ short *sAccess) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Access( 
            /* [in] */ short sAccess) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAvatarProfileDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvatarProfileData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvatarProfileData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvatarProfileData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAvatarProfileData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAvatarProfileData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAvatarProfileData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAvatarProfileData * This,
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
            IAvatarProfileData * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IAvatarProfileData * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IAvatarProfileData * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IAvatarProfileData * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IAvatarProfileData * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IAvatarProfileData * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IAvatarProfileData * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IAvatarProfileData * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IAvatarProfileData * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IAvatarProfileData * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAvatarProfileData * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IAvatarProfileData * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IAvatarProfileData * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IAvatarProfileData * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IAvatarProfileData * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IAvatarProfileData * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IAvatarProfileData * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IAvatarProfileData * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IAvatarProfileData * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IAvatarProfileData * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IAvatarProfileData * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IAvatarProfileData, get_Value)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IAvatarProfileData * This,
            /* [retval][out] */ VARIANT *pvarValue);
        
        DECLSPEC_XFGVIRT(IAvatarProfileData, put_Value)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IAvatarProfileData * This,
            /* [in] */ VARIANT varValue);
        
        DECLSPEC_XFGVIRT(IAvatarProfileData, get_Graphic)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Graphic )( 
            IAvatarProfileData * This,
            /* [retval][out] */ BSTR *pbstrGraphic);
        
        DECLSPEC_XFGVIRT(IAvatarProfileData, put_Graphic)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Graphic )( 
            IAvatarProfileData * This,
            /* [in] */ BSTR bstrGraphic);
        
        DECLSPEC_XFGVIRT(IAvatarProfileData, get_Owner)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Owner )( 
            IAvatarProfileData * This,
            /* [retval][out] */ IThing **ppOwner);
        
        DECLSPEC_XFGVIRT(IAvatarProfileData, put_Owner)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Owner )( 
            IAvatarProfileData * This,
            /* [in] */ IThing *pOwner);
        
        DECLSPEC_XFGVIRT(IAvatarProfileData, get_Access)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Access )( 
            IAvatarProfileData * This,
            /* [retval][out] */ short *sAccess);
        
        DECLSPEC_XFGVIRT(IAvatarProfileData, put_Access)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Access )( 
            IAvatarProfileData * This,
            /* [in] */ short sAccess);
        
        END_INTERFACE
    } IAvatarProfileDataVtbl;

    interface IAvatarProfileData
    {
        CONST_VTBL struct IAvatarProfileDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvatarProfileData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAvatarProfileData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAvatarProfileData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAvatarProfileData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAvatarProfileData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAvatarProfileData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAvatarProfileData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAvatarProfileData_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IAvatarProfileData_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IAvatarProfileData_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IAvatarProfileData_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IAvatarProfileData_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IAvatarProfileData_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IAvatarProfileData_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IAvatarProfileData_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IAvatarProfileData_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IAvatarProfileData_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IAvatarProfileData_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IAvatarProfileData_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IAvatarProfileData_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IAvatarProfileData_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IAvatarProfileData_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IAvatarProfileData_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IAvatarProfileData_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IAvatarProfileData_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IAvatarProfileData_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IAvatarProfileData_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IAvatarProfileData_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IAvatarProfileData_get_Value(This,pvarValue)	\
    ( (This)->lpVtbl -> get_Value(This,pvarValue) ) 

#define IAvatarProfileData_put_Value(This,varValue)	\
    ( (This)->lpVtbl -> put_Value(This,varValue) ) 

#define IAvatarProfileData_get_Graphic(This,pbstrGraphic)	\
    ( (This)->lpVtbl -> get_Graphic(This,pbstrGraphic) ) 

#define IAvatarProfileData_put_Graphic(This,bstrGraphic)	\
    ( (This)->lpVtbl -> put_Graphic(This,bstrGraphic) ) 

#define IAvatarProfileData_get_Owner(This,ppOwner)	\
    ( (This)->lpVtbl -> get_Owner(This,ppOwner) ) 

#define IAvatarProfileData_put_Owner(This,pOwner)	\
    ( (This)->lpVtbl -> put_Owner(This,pOwner) ) 

#define IAvatarProfileData_get_Access(This,sAccess)	\
    ( (This)->lpVtbl -> get_Access(This,sAccess) ) 

#define IAvatarProfileData_put_Access(This,sAccess)	\
    ( (This)->lpVtbl -> put_Access(This,sAccess) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAvatarProfileData_INTERFACE_DEFINED__ */


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


