

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/pickdata.idl:
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

#ifndef __pickdata_h__
#define __pickdata_h__

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

#ifndef __IVWPickData_FWD_DEFINED__
#define __IVWPickData_FWD_DEFINED__
typedef interface IVWPickData IVWPickData;

#endif 	/* __IVWPickData_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "cellprop.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_pickdata_0000_0000 */
/* [local] */ 

enum {ePickedThing=0, ePickedBoundary=1};


extern RPC_IF_HANDLE __MIDL_itf_pickdata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pickdata_0000_0000_v0_0_s_ifspec;

#ifndef __IVWPickData_INTERFACE_DEFINED__
#define __IVWPickData_INTERFACE_DEFINED__

/* interface IVWPickData */
/* [unique][helpstring][uuid][dual][local][object] */ 


EXTERN_C const IID IID_IVWPickData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DE671B90-A01D-11d1-84F3-00C04FB6A5C8")
    IVWPickData : public IObjectProperty
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BoundaryList( 
            /* [retval][out] */ IPropertyList **ppBoundaryList) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BoundaryList( 
            /* [in] */ IPropertyList *pBoundaryList) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Thing( 
            /* [retval][out] */ IThing **ppThing) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Thing( 
            /* [in] */ IThing *pThing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Boundary( 
            /* [retval][out] */ IBoundary **ppBoundary) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Boundary( 
            /* [in] */ IBoundary *pBoundary) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BoundaryIndex( 
            /* [retval][out] */ int *piBoundaryIndex) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BoundaryIndex( 
            /* [in] */ int iBoundaryIndex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EdgeIndex( 
            /* [retval][out] */ int *piEdgeIndex) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EdgeIndex( 
            /* [in] */ int iEdgeIndex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DataType( 
            /* [retval][out] */ int *piDataType) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DataType( 
            /* [in] */ int iDataType) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VertexPicked( 
            /* [in] */ int nIndex,
            /* [retval][out] */ VARIANT_BOOL *vbPicked) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_VertexPicked( 
            /* [in] */ int nIndex,
            /* [in] */ VARIANT_BOOL vbPicked) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsAnyVertexPicked( 
            /* [retval][out] */ VARIANT_BOOL *pvbPicked) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *bstrName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWPickDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWPickData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWPickData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWPickData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWPickData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWPickData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWPickData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWPickData * This,
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
            IVWPickData * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IVWPickData * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IVWPickData * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IVWPickData * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVWPickData * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IVWPickData * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IVWPickData * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IVWPickData * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IVWPickData * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IVWPickData * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IVWPickData * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IVWPickData * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IVWPickData * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IVWPickData * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IVWPickData * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IVWPickData * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IVWPickData * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVWPickData * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IVWPickData * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IVWPickData * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IVWPickData * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IVWPickData, get_BoundaryList)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoundaryList )( 
            IVWPickData * This,
            /* [retval][out] */ IPropertyList **ppBoundaryList);
        
        DECLSPEC_XFGVIRT(IVWPickData, put_BoundaryList)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoundaryList )( 
            IVWPickData * This,
            /* [in] */ IPropertyList *pBoundaryList);
        
        DECLSPEC_XFGVIRT(IVWPickData, get_Thing)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Thing )( 
            IVWPickData * This,
            /* [retval][out] */ IThing **ppThing);
        
        DECLSPEC_XFGVIRT(IVWPickData, put_Thing)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Thing )( 
            IVWPickData * This,
            /* [in] */ IThing *pThing);
        
        DECLSPEC_XFGVIRT(IVWPickData, get_Boundary)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Boundary )( 
            IVWPickData * This,
            /* [retval][out] */ IBoundary **ppBoundary);
        
        DECLSPEC_XFGVIRT(IVWPickData, put_Boundary)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Boundary )( 
            IVWPickData * This,
            /* [in] */ IBoundary *pBoundary);
        
        DECLSPEC_XFGVIRT(IVWPickData, get_BoundaryIndex)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoundaryIndex )( 
            IVWPickData * This,
            /* [retval][out] */ int *piBoundaryIndex);
        
        DECLSPEC_XFGVIRT(IVWPickData, put_BoundaryIndex)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoundaryIndex )( 
            IVWPickData * This,
            /* [in] */ int iBoundaryIndex);
        
        DECLSPEC_XFGVIRT(IVWPickData, get_EdgeIndex)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EdgeIndex )( 
            IVWPickData * This,
            /* [retval][out] */ int *piEdgeIndex);
        
        DECLSPEC_XFGVIRT(IVWPickData, put_EdgeIndex)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EdgeIndex )( 
            IVWPickData * This,
            /* [in] */ int iEdgeIndex);
        
        DECLSPEC_XFGVIRT(IVWPickData, get_DataType)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataType )( 
            IVWPickData * This,
            /* [retval][out] */ int *piDataType);
        
        DECLSPEC_XFGVIRT(IVWPickData, put_DataType)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataType )( 
            IVWPickData * This,
            /* [in] */ int iDataType);
        
        DECLSPEC_XFGVIRT(IVWPickData, get_VertexPicked)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexPicked )( 
            IVWPickData * This,
            /* [in] */ int nIndex,
            /* [retval][out] */ VARIANT_BOOL *vbPicked);
        
        DECLSPEC_XFGVIRT(IVWPickData, put_VertexPicked)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VertexPicked )( 
            IVWPickData * This,
            /* [in] */ int nIndex,
            /* [in] */ VARIANT_BOOL vbPicked);
        
        DECLSPEC_XFGVIRT(IVWPickData, IsAnyVertexPicked)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsAnyVertexPicked )( 
            IVWPickData * This,
            /* [retval][out] */ VARIANT_BOOL *pvbPicked);
        
        DECLSPEC_XFGVIRT(IVWPickData, get_Name)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IVWPickData * This,
            /* [retval][out] */ BSTR *bstrName);
        
        END_INTERFACE
    } IVWPickDataVtbl;

    interface IVWPickData
    {
        CONST_VTBL struct IVWPickDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWPickData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWPickData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWPickData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWPickData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWPickData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWPickData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWPickData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWPickData_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWPickData_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IVWPickData_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IVWPickData_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IVWPickData_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IVWPickData_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IVWPickData_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IVWPickData_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IVWPickData_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IVWPickData_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IVWPickData_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IVWPickData_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IVWPickData_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IVWPickData_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IVWPickData_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IVWPickData_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IVWPickData_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IVWPickData_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IVWPickData_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IVWPickData_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IVWPickData_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IVWPickData_get_BoundaryList(This,ppBoundaryList)	\
    ( (This)->lpVtbl -> get_BoundaryList(This,ppBoundaryList) ) 

#define IVWPickData_put_BoundaryList(This,pBoundaryList)	\
    ( (This)->lpVtbl -> put_BoundaryList(This,pBoundaryList) ) 

#define IVWPickData_get_Thing(This,ppThing)	\
    ( (This)->lpVtbl -> get_Thing(This,ppThing) ) 

#define IVWPickData_put_Thing(This,pThing)	\
    ( (This)->lpVtbl -> put_Thing(This,pThing) ) 

#define IVWPickData_get_Boundary(This,ppBoundary)	\
    ( (This)->lpVtbl -> get_Boundary(This,ppBoundary) ) 

#define IVWPickData_put_Boundary(This,pBoundary)	\
    ( (This)->lpVtbl -> put_Boundary(This,pBoundary) ) 

#define IVWPickData_get_BoundaryIndex(This,piBoundaryIndex)	\
    ( (This)->lpVtbl -> get_BoundaryIndex(This,piBoundaryIndex) ) 

#define IVWPickData_put_BoundaryIndex(This,iBoundaryIndex)	\
    ( (This)->lpVtbl -> put_BoundaryIndex(This,iBoundaryIndex) ) 

#define IVWPickData_get_EdgeIndex(This,piEdgeIndex)	\
    ( (This)->lpVtbl -> get_EdgeIndex(This,piEdgeIndex) ) 

#define IVWPickData_put_EdgeIndex(This,iEdgeIndex)	\
    ( (This)->lpVtbl -> put_EdgeIndex(This,iEdgeIndex) ) 

#define IVWPickData_get_DataType(This,piDataType)	\
    ( (This)->lpVtbl -> get_DataType(This,piDataType) ) 

#define IVWPickData_put_DataType(This,iDataType)	\
    ( (This)->lpVtbl -> put_DataType(This,iDataType) ) 

#define IVWPickData_get_VertexPicked(This,nIndex,vbPicked)	\
    ( (This)->lpVtbl -> get_VertexPicked(This,nIndex,vbPicked) ) 

#define IVWPickData_put_VertexPicked(This,nIndex,vbPicked)	\
    ( (This)->lpVtbl -> put_VertexPicked(This,nIndex,vbPicked) ) 

#define IVWPickData_IsAnyVertexPicked(This,pvbPicked)	\
    ( (This)->lpVtbl -> IsAnyVertexPicked(This,pvbPicked) ) 

#define IVWPickData_get_Name(This,bstrName)	\
    ( (This)->lpVtbl -> get_Name(This,bstrName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWPickData_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


