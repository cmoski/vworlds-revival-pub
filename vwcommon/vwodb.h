

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwodb.idl:
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

#ifndef __vwodb_h__
#define __vwodb_h__

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

#ifndef __IVWObjectRepository_FWD_DEFINED__
#define __IVWObjectRepository_FWD_DEFINED__
typedef interface IVWObjectRepository IVWObjectRepository;

#endif 	/* __IVWObjectRepository_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwobject.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwodb_0000_0000 */
/* [local] */ 

#define VWODB_E_ALREADYOPEN			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0601)
#define VWODB_E_DBCREATEERROR		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0602)
#define VWODB_E_DBNOTEXIST			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0603)
#define VWODB_E_DBREADERROR			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0604)
#define VWODB_E_DBOPENERROR			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0605)
#define VWODB_E_INVALIDDBSIGNATURE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0606)
#define VWODB_E_OBJECTNOTEXIST		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0607)
#define VWODB_E_INVALIDDBRECORD		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0608)
#define VWODB_E_NOTPERSISTMODE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0609)
#define VWODB_E_BACKUPFAILED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x060A)
#define VWODB_E_LOGRECORDTOOLARGE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x060B)
#define VWODB_E_NOTOPEN				MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x060C)
#define VWODB_E_INVALIDDBNAME		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x060D)
#define VWODB_E_DBALREADYEXIST		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x060E)


extern RPC_IF_HANDLE __MIDL_itf_vwodb_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwodb_0000_0000_v0_0_s_ifspec;

#ifndef __IVWObjectRepository_INTERFACE_DEFINED__
#define __IVWObjectRepository_INTERFACE_DEFINED__

/* interface IVWObjectRepository */
/* [unique][local][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVWObjectRepository;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D20B9CA-E963-11CF-A516-00AA00B595DB")
    IVWObjectRepository : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWorld *pWorld,
            /* [in] */ BSTR bstrConnection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenWorld( 
            /* [in] */ VARIANT_BOOL bCreate,
            /* [in] */ VARIANT_BOOL bOverwrite) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseWorld( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteObject( 
            /* [in] */ int id) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetObject( 
            /* [in] */ int id,
            /* [out] */ IThing **ppThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetObjectByName( 
            /* [in] */ BSTR bstrName,
            /* [out] */ IThing **ppThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutObject( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteLogRecord( 
            /* [in] */ int id,
            /* [in] */ IMarshallBuffer *pbuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CommitAs( 
            BSTR bstrFileName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RenameAs( 
            BSTR bstrFileName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Open( 
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Persist( 
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DumpObjects( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWObjectRepositoryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWObjectRepository * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWObjectRepository * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWObjectRepository * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWObjectRepository * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWObjectRepository * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWObjectRepository * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWObjectRepository * This,
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
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWObjectRepository * This,
            /* [in] */ IWorld *pWorld,
            /* [in] */ BSTR bstrConnection);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, OpenWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenWorld )( 
            IVWObjectRepository * This,
            /* [in] */ VARIANT_BOOL bCreate,
            /* [in] */ VARIANT_BOOL bOverwrite);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, CloseWorld)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloseWorld )( 
            IVWObjectRepository * This);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, CreateObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            IVWObjectRepository * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, DeleteObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteObject )( 
            IVWObjectRepository * This,
            /* [in] */ int id);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, GetObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObject )( 
            IVWObjectRepository * This,
            /* [in] */ int id,
            /* [out] */ IThing **ppThing);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, GetObjectByName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByName )( 
            IVWObjectRepository * This,
            /* [in] */ BSTR bstrName,
            /* [out] */ IThing **ppThing);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, PutObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutObject )( 
            IVWObjectRepository * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, WriteLogRecord)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteLogRecord )( 
            IVWObjectRepository * This,
            /* [in] */ int id,
            /* [in] */ IMarshallBuffer *pbuffer);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, Commit)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IVWObjectRepository * This);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, CommitAs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CommitAs )( 
            IVWObjectRepository * This,
            BSTR bstrFileName);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, RenameAs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RenameAs )( 
            IVWObjectRepository * This,
            BSTR bstrFileName);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, get_Open)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Open )( 
            IVWObjectRepository * This,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, get_Persist)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Persist )( 
            IVWObjectRepository * This,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IVWObjectRepository, DumpObjects)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DumpObjects )( 
            IVWObjectRepository * This);
        
        END_INTERFACE
    } IVWObjectRepositoryVtbl;

    interface IVWObjectRepository
    {
        CONST_VTBL struct IVWObjectRepositoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWObjectRepository_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWObjectRepository_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWObjectRepository_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWObjectRepository_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWObjectRepository_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWObjectRepository_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWObjectRepository_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWObjectRepository_Initialize(This,pWorld,bstrConnection)	\
    ( (This)->lpVtbl -> Initialize(This,pWorld,bstrConnection) ) 

#define IVWObjectRepository_OpenWorld(This,bCreate,bOverwrite)	\
    ( (This)->lpVtbl -> OpenWorld(This,bCreate,bOverwrite) ) 

#define IVWObjectRepository_CloseWorld(This)	\
    ( (This)->lpVtbl -> CloseWorld(This) ) 

#define IVWObjectRepository_CreateObject(This,pThing)	\
    ( (This)->lpVtbl -> CreateObject(This,pThing) ) 

#define IVWObjectRepository_DeleteObject(This,id)	\
    ( (This)->lpVtbl -> DeleteObject(This,id) ) 

#define IVWObjectRepository_GetObject(This,id,ppThing)	\
    ( (This)->lpVtbl -> GetObject(This,id,ppThing) ) 

#define IVWObjectRepository_GetObjectByName(This,bstrName,ppThing)	\
    ( (This)->lpVtbl -> GetObjectByName(This,bstrName,ppThing) ) 

#define IVWObjectRepository_PutObject(This,pThing)	\
    ( (This)->lpVtbl -> PutObject(This,pThing) ) 

#define IVWObjectRepository_WriteLogRecord(This,id,pbuffer)	\
    ( (This)->lpVtbl -> WriteLogRecord(This,id,pbuffer) ) 

#define IVWObjectRepository_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#define IVWObjectRepository_CommitAs(This,bstrFileName)	\
    ( (This)->lpVtbl -> CommitAs(This,bstrFileName) ) 

#define IVWObjectRepository_RenameAs(This,bstrFileName)	\
    ( (This)->lpVtbl -> RenameAs(This,bstrFileName) ) 

#define IVWObjectRepository_get_Open(This,pboolVal)	\
    ( (This)->lpVtbl -> get_Open(This,pboolVal) ) 

#define IVWObjectRepository_get_Persist(This,pboolVal)	\
    ( (This)->lpVtbl -> get_Persist(This,pboolVal) ) 

#define IVWObjectRepository_DumpObjects(This)	\
    ( (This)->lpVtbl -> DumpObjects(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWObjectRepository_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


