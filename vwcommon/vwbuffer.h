

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwbuffer.idl:
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

#ifndef __vwbuffer_h__
#define __vwbuffer_h__

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

#ifndef __IUnMarshallBuffer_FWD_DEFINED__
#define __IUnMarshallBuffer_FWD_DEFINED__
typedef interface IUnMarshallBuffer IUnMarshallBuffer;

#endif 	/* __IUnMarshallBuffer_FWD_DEFINED__ */


#ifndef __IMarshallBuffer_FWD_DEFINED__
#define __IMarshallBuffer_FWD_DEFINED__
typedef interface IMarshallBuffer IMarshallBuffer;

#endif 	/* __IMarshallBuffer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IUnMarshallBuffer_INTERFACE_DEFINED__
#define __IUnMarshallBuffer_INTERFACE_DEFINED__

/* interface IUnMarshallBuffer */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_IUnMarshallBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9830-A417-11CF-9BF0-0080C7A56A8A")
    IUnMarshallBuffer : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ClassID( 
            /* [out] */ CLSID *pclsid) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Byte( 
            /* [out] */ unsigned char *bval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Bytes( 
            /* [out] */ unsigned char *pbytes,
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Boolean( 
            /* [out] */ VARIANT_BOOL *boolval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_String( 
            /* [out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_UShort( 
            /* [out] */ unsigned short *pusval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Short( 
            /* [out] */ short *psval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Float( 
            /* [out] */ float *pfval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Double( 
            /* [out] */ double *pdval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_UInt( 
            /* [out] */ unsigned int *puival) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Int( 
            /* [out] */ int *pival) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ULong( 
            /* [out] */ unsigned long *pulval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Long( 
            /* [out] */ long *plval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_BLOB( 
            /* [out] */ BSTR *pblobval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyTo( 
            /* [in] */ unsigned char *pbytes,
            /* [in] */ DWORD lval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReadFromDisk( 
            /* [in] */ BSTR strFilename) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Attach( 
            /* [in] */ unsigned char *pbytes,
            /* [in] */ DWORD lval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [in] */ DWORD *lval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SeekToBegin( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Rewind( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUnMarshallBufferVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUnMarshallBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUnMarshallBuffer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUnMarshallBuffer * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUnMarshallBuffer * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUnMarshallBuffer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUnMarshallBuffer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUnMarshallBuffer * This,
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
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_ClassID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ClassID )( 
            IUnMarshallBuffer * This,
            /* [out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_Byte)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Byte )( 
            IUnMarshallBuffer * This,
            /* [out] */ unsigned char *bval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_Bytes)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Bytes )( 
            IUnMarshallBuffer * This,
            /* [out] */ unsigned char *pbytes,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_Boolean)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Boolean )( 
            IUnMarshallBuffer * This,
            /* [out] */ VARIANT_BOOL *boolval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_String)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_String )( 
            IUnMarshallBuffer * This,
            /* [out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_UShort)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_UShort )( 
            IUnMarshallBuffer * This,
            /* [out] */ unsigned short *pusval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_Short)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Short )( 
            IUnMarshallBuffer * This,
            /* [out] */ short *psval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_Float)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Float )( 
            IUnMarshallBuffer * This,
            /* [out] */ float *pfval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_Double)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Double )( 
            IUnMarshallBuffer * This,
            /* [out] */ double *pdval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_UInt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_UInt )( 
            IUnMarshallBuffer * This,
            /* [out] */ unsigned int *puival);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_Int)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Int )( 
            IUnMarshallBuffer * This,
            /* [out] */ int *pival);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_ULong)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ULong )( 
            IUnMarshallBuffer * This,
            /* [out] */ unsigned long *pulval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_Long)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Long )( 
            IUnMarshallBuffer * This,
            /* [out] */ long *plval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_BLOB)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_BLOB )( 
            IUnMarshallBuffer * This,
            /* [out] */ BSTR *pblobval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, CopyTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            IUnMarshallBuffer * This,
            /* [in] */ unsigned char *pbytes,
            /* [in] */ DWORD lval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, ReadFromDisk)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadFromDisk )( 
            IUnMarshallBuffer * This,
            /* [in] */ BSTR strFilename);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, Attach)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Attach )( 
            IUnMarshallBuffer * This,
            /* [in] */ unsigned char *pbytes,
            /* [in] */ DWORD lval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, get_Length)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IUnMarshallBuffer * This,
            /* [in] */ DWORD *lval);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, SeekToBegin)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SeekToBegin )( 
            IUnMarshallBuffer * This);
        
        DECLSPEC_XFGVIRT(IUnMarshallBuffer, Rewind)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Rewind )( 
            IUnMarshallBuffer * This);
        
        END_INTERFACE
    } IUnMarshallBufferVtbl;

    interface IUnMarshallBuffer
    {
        CONST_VTBL struct IUnMarshallBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUnMarshallBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUnMarshallBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUnMarshallBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUnMarshallBuffer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUnMarshallBuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUnMarshallBuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUnMarshallBuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUnMarshallBuffer_get_ClassID(This,pclsid)	\
    ( (This)->lpVtbl -> get_ClassID(This,pclsid) ) 

#define IUnMarshallBuffer_get_Byte(This,bval)	\
    ( (This)->lpVtbl -> get_Byte(This,bval) ) 

#define IUnMarshallBuffer_get_Bytes(This,pbytes,lval)	\
    ( (This)->lpVtbl -> get_Bytes(This,pbytes,lval) ) 

#define IUnMarshallBuffer_get_Boolean(This,boolval)	\
    ( (This)->lpVtbl -> get_Boolean(This,boolval) ) 

#define IUnMarshallBuffer_get_String(This,pbstr)	\
    ( (This)->lpVtbl -> get_String(This,pbstr) ) 

#define IUnMarshallBuffer_get_UShort(This,pusval)	\
    ( (This)->lpVtbl -> get_UShort(This,pusval) ) 

#define IUnMarshallBuffer_get_Short(This,psval)	\
    ( (This)->lpVtbl -> get_Short(This,psval) ) 

#define IUnMarshallBuffer_get_Float(This,pfval)	\
    ( (This)->lpVtbl -> get_Float(This,pfval) ) 

#define IUnMarshallBuffer_get_Double(This,pdval)	\
    ( (This)->lpVtbl -> get_Double(This,pdval) ) 

#define IUnMarshallBuffer_get_UInt(This,puival)	\
    ( (This)->lpVtbl -> get_UInt(This,puival) ) 

#define IUnMarshallBuffer_get_Int(This,pival)	\
    ( (This)->lpVtbl -> get_Int(This,pival) ) 

#define IUnMarshallBuffer_get_ULong(This,pulval)	\
    ( (This)->lpVtbl -> get_ULong(This,pulval) ) 

#define IUnMarshallBuffer_get_Long(This,plval)	\
    ( (This)->lpVtbl -> get_Long(This,plval) ) 

#define IUnMarshallBuffer_get_BLOB(This,pblobval)	\
    ( (This)->lpVtbl -> get_BLOB(This,pblobval) ) 

#define IUnMarshallBuffer_CopyTo(This,pbytes,lval)	\
    ( (This)->lpVtbl -> CopyTo(This,pbytes,lval) ) 

#define IUnMarshallBuffer_ReadFromDisk(This,strFilename)	\
    ( (This)->lpVtbl -> ReadFromDisk(This,strFilename) ) 

#define IUnMarshallBuffer_Attach(This,pbytes,lval)	\
    ( (This)->lpVtbl -> Attach(This,pbytes,lval) ) 

#define IUnMarshallBuffer_get_Length(This,lval)	\
    ( (This)->lpVtbl -> get_Length(This,lval) ) 

#define IUnMarshallBuffer_SeekToBegin(This)	\
    ( (This)->lpVtbl -> SeekToBegin(This) ) 

#define IUnMarshallBuffer_Rewind(This)	\
    ( (This)->lpVtbl -> Rewind(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUnMarshallBuffer_INTERFACE_DEFINED__ */


#ifndef __IMarshallBuffer_INTERFACE_DEFINED__
#define __IMarshallBuffer_INTERFACE_DEFINED__

/* interface IMarshallBuffer */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_IMarshallBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9832-A417-11CF-9BF0-0080C7A56A8A")
    IMarshallBuffer : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ClassID( 
            /* [in] */ REFCLSID clsid) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Byte( 
            /* [in] */ unsigned char bval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Bytes( 
            /* [in] */ unsigned char *pbytes,
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Boolean( 
            /* [in] */ VARIANT_BOOL boolval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_String( 
            /* [in] */ BSTR bstr,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL bCompress = -1) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Float( 
            /* [in] */ float fval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Double( 
            /* [in] */ double dval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_UShort( 
            /* [in] */ unsigned short usval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Short( 
            /* [in] */ short sval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_UInt( 
            /* [in] */ unsigned int uival) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Int( 
            /* [in] */ int ival) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ULong( 
            /* [in] */ unsigned long ulval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Long( 
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_BLOB( 
            /* [in] */ BSTR blobval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SeekToBegin( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Rewind( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyFrom( 
            /* [in] */ unsigned char *pbytes,
            /* [in] */ DWORD lval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Detach( 
            /* [out] */ unsigned char **ppbytes,
            /* [out] */ DWORD *plval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [in] */ DWORD *lval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteToDisk( 
            /* [in] */ BSTR strFilename) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMarshallBufferVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMarshallBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMarshallBuffer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMarshallBuffer * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMarshallBuffer * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMarshallBuffer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMarshallBuffer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMarshallBuffer * This,
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
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_ClassID)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ClassID )( 
            IMarshallBuffer * This,
            /* [in] */ REFCLSID clsid);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_Byte)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Byte )( 
            IMarshallBuffer * This,
            /* [in] */ unsigned char bval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_Bytes)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Bytes )( 
            IMarshallBuffer * This,
            /* [in] */ unsigned char *pbytes,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_Boolean)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Boolean )( 
            IMarshallBuffer * This,
            /* [in] */ VARIANT_BOOL boolval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_String)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_String )( 
            IMarshallBuffer * This,
            /* [in] */ BSTR bstr,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL bCompress);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_Float)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Float )( 
            IMarshallBuffer * This,
            /* [in] */ float fval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_Double)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Double )( 
            IMarshallBuffer * This,
            /* [in] */ double dval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_UShort)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_UShort )( 
            IMarshallBuffer * This,
            /* [in] */ unsigned short usval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_Short)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Short )( 
            IMarshallBuffer * This,
            /* [in] */ short sval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_UInt)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_UInt )( 
            IMarshallBuffer * This,
            /* [in] */ unsigned int uival);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_Int)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Int )( 
            IMarshallBuffer * This,
            /* [in] */ int ival);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_ULong)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ULong )( 
            IMarshallBuffer * This,
            /* [in] */ unsigned long ulval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_Long)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Long )( 
            IMarshallBuffer * This,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, put_BLOB)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_BLOB )( 
            IMarshallBuffer * This,
            /* [in] */ BSTR blobval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, SeekToBegin)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SeekToBegin )( 
            IMarshallBuffer * This);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, Rewind)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Rewind )( 
            IMarshallBuffer * This);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, CopyFrom)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyFrom )( 
            IMarshallBuffer * This,
            /* [in] */ unsigned char *pbytes,
            /* [in] */ DWORD lval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, Detach)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Detach )( 
            IMarshallBuffer * This,
            /* [out] */ unsigned char **ppbytes,
            /* [out] */ DWORD *plval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, get_Length)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IMarshallBuffer * This,
            /* [in] */ DWORD *lval);
        
        DECLSPEC_XFGVIRT(IMarshallBuffer, WriteToDisk)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteToDisk )( 
            IMarshallBuffer * This,
            /* [in] */ BSTR strFilename);
        
        END_INTERFACE
    } IMarshallBufferVtbl;

    interface IMarshallBuffer
    {
        CONST_VTBL struct IMarshallBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMarshallBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMarshallBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMarshallBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMarshallBuffer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMarshallBuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMarshallBuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMarshallBuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMarshallBuffer_put_ClassID(This,clsid)	\
    ( (This)->lpVtbl -> put_ClassID(This,clsid) ) 

#define IMarshallBuffer_put_Byte(This,bval)	\
    ( (This)->lpVtbl -> put_Byte(This,bval) ) 

#define IMarshallBuffer_put_Bytes(This,pbytes,lval)	\
    ( (This)->lpVtbl -> put_Bytes(This,pbytes,lval) ) 

#define IMarshallBuffer_put_Boolean(This,boolval)	\
    ( (This)->lpVtbl -> put_Boolean(This,boolval) ) 

#define IMarshallBuffer_put_String(This,bstr,bCompress)	\
    ( (This)->lpVtbl -> put_String(This,bstr,bCompress) ) 

#define IMarshallBuffer_put_Float(This,fval)	\
    ( (This)->lpVtbl -> put_Float(This,fval) ) 

#define IMarshallBuffer_put_Double(This,dval)	\
    ( (This)->lpVtbl -> put_Double(This,dval) ) 

#define IMarshallBuffer_put_UShort(This,usval)	\
    ( (This)->lpVtbl -> put_UShort(This,usval) ) 

#define IMarshallBuffer_put_Short(This,sval)	\
    ( (This)->lpVtbl -> put_Short(This,sval) ) 

#define IMarshallBuffer_put_UInt(This,uival)	\
    ( (This)->lpVtbl -> put_UInt(This,uival) ) 

#define IMarshallBuffer_put_Int(This,ival)	\
    ( (This)->lpVtbl -> put_Int(This,ival) ) 

#define IMarshallBuffer_put_ULong(This,ulval)	\
    ( (This)->lpVtbl -> put_ULong(This,ulval) ) 

#define IMarshallBuffer_put_Long(This,lval)	\
    ( (This)->lpVtbl -> put_Long(This,lval) ) 

#define IMarshallBuffer_put_BLOB(This,blobval)	\
    ( (This)->lpVtbl -> put_BLOB(This,blobval) ) 

#define IMarshallBuffer_SeekToBegin(This)	\
    ( (This)->lpVtbl -> SeekToBegin(This) ) 

#define IMarshallBuffer_Rewind(This)	\
    ( (This)->lpVtbl -> Rewind(This) ) 

#define IMarshallBuffer_CopyFrom(This,pbytes,lval)	\
    ( (This)->lpVtbl -> CopyFrom(This,pbytes,lval) ) 

#define IMarshallBuffer_Detach(This,ppbytes,plval)	\
    ( (This)->lpVtbl -> Detach(This,ppbytes,plval) ) 

#define IMarshallBuffer_get_Length(This,lval)	\
    ( (This)->lpVtbl -> get_Length(This,lval) ) 

#define IMarshallBuffer_WriteToDisk(This,strFilename)	\
    ( (This)->lpVtbl -> WriteToDisk(This,strFilename) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMarshallBuffer_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


