

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/webtools.idl:
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

#ifndef __webtools_h__
#define __webtools_h__

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

#ifndef __IWorldWizHelper_FWD_DEFINED__
#define __IWorldWizHelper_FWD_DEFINED__
typedef interface IWorldWizHelper IWorldWizHelper;

#endif 	/* __IWorldWizHelper_FWD_DEFINED__ */


#ifndef __IRoomWizHelper_FWD_DEFINED__
#define __IRoomWizHelper_FWD_DEFINED__
typedef interface IRoomWizHelper IRoomWizHelper;

#endif 	/* __IRoomWizHelper_FWD_DEFINED__ */


#ifndef __IVWFileAccessTool_FWD_DEFINED__
#define __IVWFileAccessTool_FWD_DEFINED__
typedef interface IVWFileAccessTool IVWFileAccessTool;

#endif 	/* __IVWFileAccessTool_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IWorldWizHelper_INTERFACE_DEFINED__
#define __IWorldWizHelper_INTERFACE_DEFINED__

/* interface IWorldWizHelper */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWorldWizHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("969AD684-5B00-11D1-88AE-00C04FC32EF3")
    IWorldWizHelper : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TypeNames( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE initialize( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWorldWizHelperVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWorldWizHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWorldWizHelper * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWorldWizHelper * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWorldWizHelper * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWorldWizHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWorldWizHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWorldWizHelper * This,
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
        
        DECLSPEC_XFGVIRT(IWorldWizHelper, get_TypeNames)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeNames )( 
            IWorldWizHelper * This,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IWorldWizHelper, initialize)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *initialize )( 
            IWorldWizHelper * This);
        
        END_INTERFACE
    } IWorldWizHelperVtbl;

    interface IWorldWizHelper
    {
        CONST_VTBL struct IWorldWizHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWorldWizHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWorldWizHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWorldWizHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWorldWizHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWorldWizHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWorldWizHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWorldWizHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWorldWizHelper_get_TypeNames(This,pVal)	\
    ( (This)->lpVtbl -> get_TypeNames(This,pVal) ) 

#define IWorldWizHelper_initialize(This)	\
    ( (This)->lpVtbl -> initialize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWorldWizHelper_INTERFACE_DEFINED__ */


#ifndef __IRoomWizHelper_INTERFACE_DEFINED__
#define __IRoomWizHelper_INTERFACE_DEFINED__

/* interface IRoomWizHelper */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRoomWizHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("969AD684-5B00-11D1-88AE-00C04FC32EF4")
    IRoomWizHelper : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TypeNames( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE initialize( 
            /* [in] */ BSTR bstrInitialDirectory) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRoomWizHelperVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRoomWizHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRoomWizHelper * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRoomWizHelper * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRoomWizHelper * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRoomWizHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRoomWizHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRoomWizHelper * This,
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
        
        DECLSPEC_XFGVIRT(IRoomWizHelper, get_TypeNames)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TypeNames )( 
            IRoomWizHelper * This,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IRoomWizHelper, initialize)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *initialize )( 
            IRoomWizHelper * This,
            /* [in] */ BSTR bstrInitialDirectory);
        
        END_INTERFACE
    } IRoomWizHelperVtbl;

    interface IRoomWizHelper
    {
        CONST_VTBL struct IRoomWizHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRoomWizHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRoomWizHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRoomWizHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRoomWizHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRoomWizHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRoomWizHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRoomWizHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRoomWizHelper_get_TypeNames(This,pVal)	\
    ( (This)->lpVtbl -> get_TypeNames(This,pVal) ) 

#define IRoomWizHelper_initialize(This,bstrInitialDirectory)	\
    ( (This)->lpVtbl -> initialize(This,bstrInitialDirectory) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRoomWizHelper_INTERFACE_DEFINED__ */


#ifndef __IVWFileAccessTool_INTERFACE_DEFINED__
#define __IVWFileAccessTool_INTERFACE_DEFINED__

/* interface IVWFileAccessTool */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVWFileAccessTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F5B9E8D2-74C4-11D1-B344-00C04FB6A5C8")
    IVWFileAccessTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadFile( 
            /* [in] */ BSTR bstrFilename,
            /* [retval][out] */ BSTR *bstrFileText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteFile( 
            /* [in] */ BSTR bstrFilename,
            /* [in] */ BSTR bstrFileText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectColor( 
            /* [in] */ long dwInitialColor,
            /* [retval][out] */ long *pdwPickedColor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenFileDialog( 
            /* [in] */ BSTR bstrDefaultFilename,
            /* [in] */ long dwFileFlags,
            /* [in] */ BSTR bstrFileFilter,
            /* [retval][out] */ BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveFileDialog( 
            /* [in] */ BSTR bstrDefaultFilename,
            /* [in] */ long dwFileFlags,
            /* [in] */ BSTR bstrFileFilter,
            /* [retval][out] */ BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FileExists( 
            /* [in] */ BSTR bstrFileName,
            /* [retval][out] */ VARIANT_BOOL *pbExists) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWorldPath( 
            /* [retval][out] */ BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHelpPath( 
            /* [retval][out] */ BSTR *pbstrPathName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWFileAccessToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWFileAccessTool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWFileAccessTool * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWFileAccessTool * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWFileAccessTool * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWFileAccessTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWFileAccessTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWFileAccessTool * This,
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
        
        DECLSPEC_XFGVIRT(IVWFileAccessTool, ReadFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadFile )( 
            IVWFileAccessTool * This,
            /* [in] */ BSTR bstrFilename,
            /* [retval][out] */ BSTR *bstrFileText);
        
        DECLSPEC_XFGVIRT(IVWFileAccessTool, WriteFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteFile )( 
            IVWFileAccessTool * This,
            /* [in] */ BSTR bstrFilename,
            /* [in] */ BSTR bstrFileText);
        
        DECLSPEC_XFGVIRT(IVWFileAccessTool, SelectColor)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectColor )( 
            IVWFileAccessTool * This,
            /* [in] */ long dwInitialColor,
            /* [retval][out] */ long *pdwPickedColor);
        
        DECLSPEC_XFGVIRT(IVWFileAccessTool, OpenFileDialog)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenFileDialog )( 
            IVWFileAccessTool * This,
            /* [in] */ BSTR bstrDefaultFilename,
            /* [in] */ long dwFileFlags,
            /* [in] */ BSTR bstrFileFilter,
            /* [retval][out] */ BSTR *pbstrFileName);
        
        DECLSPEC_XFGVIRT(IVWFileAccessTool, SaveFileDialog)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveFileDialog )( 
            IVWFileAccessTool * This,
            /* [in] */ BSTR bstrDefaultFilename,
            /* [in] */ long dwFileFlags,
            /* [in] */ BSTR bstrFileFilter,
            /* [retval][out] */ BSTR *pbstrFileName);
        
        DECLSPEC_XFGVIRT(IVWFileAccessTool, FileExists)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FileExists )( 
            IVWFileAccessTool * This,
            /* [in] */ BSTR bstrFileName,
            /* [retval][out] */ VARIANT_BOOL *pbExists);
        
        DECLSPEC_XFGVIRT(IVWFileAccessTool, GetWorldPath)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWorldPath )( 
            IVWFileAccessTool * This,
            /* [retval][out] */ BSTR *pbstrFileName);
        
        DECLSPEC_XFGVIRT(IVWFileAccessTool, GetHelpPath)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHelpPath )( 
            IVWFileAccessTool * This,
            /* [retval][out] */ BSTR *pbstrPathName);
        
        END_INTERFACE
    } IVWFileAccessToolVtbl;

    interface IVWFileAccessTool
    {
        CONST_VTBL struct IVWFileAccessToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWFileAccessTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWFileAccessTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWFileAccessTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWFileAccessTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWFileAccessTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWFileAccessTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWFileAccessTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWFileAccessTool_ReadFile(This,bstrFilename,bstrFileText)	\
    ( (This)->lpVtbl -> ReadFile(This,bstrFilename,bstrFileText) ) 

#define IVWFileAccessTool_WriteFile(This,bstrFilename,bstrFileText)	\
    ( (This)->lpVtbl -> WriteFile(This,bstrFilename,bstrFileText) ) 

#define IVWFileAccessTool_SelectColor(This,dwInitialColor,pdwPickedColor)	\
    ( (This)->lpVtbl -> SelectColor(This,dwInitialColor,pdwPickedColor) ) 

#define IVWFileAccessTool_OpenFileDialog(This,bstrDefaultFilename,dwFileFlags,bstrFileFilter,pbstrFileName)	\
    ( (This)->lpVtbl -> OpenFileDialog(This,bstrDefaultFilename,dwFileFlags,bstrFileFilter,pbstrFileName) ) 

#define IVWFileAccessTool_SaveFileDialog(This,bstrDefaultFilename,dwFileFlags,bstrFileFilter,pbstrFileName)	\
    ( (This)->lpVtbl -> SaveFileDialog(This,bstrDefaultFilename,dwFileFlags,bstrFileFilter,pbstrFileName) ) 

#define IVWFileAccessTool_FileExists(This,bstrFileName,pbExists)	\
    ( (This)->lpVtbl -> FileExists(This,bstrFileName,pbExists) ) 

#define IVWFileAccessTool_GetWorldPath(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetWorldPath(This,pbstrFileName) ) 

#define IVWFileAccessTool_GetHelpPath(This,pbstrPathName)	\
    ( (This)->lpVtbl -> GetHelpPath(This,pbstrPathName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWFileAccessTool_INTERFACE_DEFINED__ */


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


