

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwstats.idl:
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

#ifndef __vwstats_h__
#define __vwstats_h__

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

#ifndef __IVWStatCol_FWD_DEFINED__
#define __IVWStatCol_FWD_DEFINED__
typedef interface IVWStatCol IVWStatCol;

#endif 	/* __IVWStatCol_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwobject.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwstats_0000_0000 */
/* [local] */ 

#define VWSTATS_INITIALIZED_TWICE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0951)
#define VWSTATS_NOT_INITIALIZED		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0952)
#define VWSTATS_WRONG_DATATYPE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0953)


extern RPC_IF_HANDLE __MIDL_itf_vwstats_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwstats_0000_0000_v0_0_s_ifspec;

#ifndef __IVWStatCol_INTERFACE_DEFINED__
#define __IVWStatCol_INTERFACE_DEFINED__

/* interface IVWStatCol */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWStatCol;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13B24363-3EEF-11D0-8587-00A0C90F2911")
    IVWStatCol : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWorld *pworld) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Item( 
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [retval][out] */ VARIANT *var) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveItem( 
            /* [in] */ BSTR category,
            /* [in] */ BSTR item) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyMap( 
            /* [in] */ BSTR category,
            /* [retval][out] */ IPropertyMap **ppmap) = 0;
        
        virtual /* [helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_LongItem( 
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [in] */ long var) = 0;
        
        virtual /* [helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_BSTRItem( 
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [in] */ BSTR var) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_LongItem( 
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [retval][out] */ long *var) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_BSTRItem( 
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [retval][out] */ BSTR *var) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWStatColVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWStatCol * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWStatCol * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWStatCol * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWStatCol * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWStatCol * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWStatCol * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWStatCol * This,
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
        
        DECLSPEC_XFGVIRT(IVWStatCol, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWStatCol * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWStatCol, put_Item)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Item )( 
            IVWStatCol * This,
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IVWStatCol, get_Item)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IVWStatCol * This,
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [retval][out] */ VARIANT *var);
        
        DECLSPEC_XFGVIRT(IVWStatCol, RemoveItem)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveItem )( 
            IVWStatCol * This,
            /* [in] */ BSTR category,
            /* [in] */ BSTR item);
        
        DECLSPEC_XFGVIRT(IVWStatCol, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IVWStatCol * This,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IVWStatCol, get_PropertyMap)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyMap )( 
            IVWStatCol * This,
            /* [in] */ BSTR category,
            /* [retval][out] */ IPropertyMap **ppmap);
        
        DECLSPEC_XFGVIRT(IVWStatCol, put_LongItem)
        /* [helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_LongItem )( 
            IVWStatCol * This,
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [in] */ long var);
        
        DECLSPEC_XFGVIRT(IVWStatCol, put_BSTRItem)
        /* [helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_BSTRItem )( 
            IVWStatCol * This,
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [in] */ BSTR var);
        
        DECLSPEC_XFGVIRT(IVWStatCol, get_LongItem)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_LongItem )( 
            IVWStatCol * This,
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [retval][out] */ long *var);
        
        DECLSPEC_XFGVIRT(IVWStatCol, get_BSTRItem)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_BSTRItem )( 
            IVWStatCol * This,
            /* [in] */ BSTR category,
            /* [in] */ BSTR item,
            /* [retval][out] */ BSTR *var);
        
        END_INTERFACE
    } IVWStatColVtbl;

    interface IVWStatCol
    {
        CONST_VTBL struct IVWStatColVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWStatCol_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWStatCol_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWStatCol_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWStatCol_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWStatCol_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWStatCol_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWStatCol_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWStatCol_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IVWStatCol_put_Item(This,category,item,var)	\
    ( (This)->lpVtbl -> put_Item(This,category,item,var) ) 

#define IVWStatCol_get_Item(This,category,item,var)	\
    ( (This)->lpVtbl -> get_Item(This,category,item,var) ) 

#define IVWStatCol_RemoveItem(This,category,item)	\
    ( (This)->lpVtbl -> RemoveItem(This,category,item) ) 

#define IVWStatCol_get_Count(This,retval)	\
    ( (This)->lpVtbl -> get_Count(This,retval) ) 

#define IVWStatCol_get_PropertyMap(This,category,ppmap)	\
    ( (This)->lpVtbl -> get_PropertyMap(This,category,ppmap) ) 

#define IVWStatCol_put_LongItem(This,category,item,var)	\
    ( (This)->lpVtbl -> put_LongItem(This,category,item,var) ) 

#define IVWStatCol_put_BSTRItem(This,category,item,var)	\
    ( (This)->lpVtbl -> put_BSTRItem(This,category,item,var) ) 

#define IVWStatCol_get_LongItem(This,category,item,var)	\
    ( (This)->lpVtbl -> get_LongItem(This,category,item,var) ) 

#define IVWStatCol_get_BSTRItem(This,category,item,var)	\
    ( (This)->lpVtbl -> get_BSTRItem(This,category,item,var) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWStatCol_INTERFACE_DEFINED__ */


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


