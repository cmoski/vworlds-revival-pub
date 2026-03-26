

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwidata.idl:
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

#ifndef __vwidata_h__
#define __vwidata_h__

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

#ifndef __IVWIntersectData_FWD_DEFINED__
#define __IVWIntersectData_FWD_DEFINED__
typedef interface IVWIntersectData IVWIntersectData;

#endif 	/* __IVWIntersectData_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "cellprop.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwidata_0000_0000 */
/* [local] */ 

enum {eHit=0, ePassedOver=1, ePassedUnder=2};


extern RPC_IF_HANDLE __MIDL_itf_vwidata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwidata_0000_0000_v0_0_s_ifspec;

#ifndef __IVWIntersectData_INTERFACE_DEFINED__
#define __IVWIntersectData_INTERFACE_DEFINED__

/* interface IVWIntersectData */
/* [unique][helpstring][uuid][dual][local][object] */ 


EXTERN_C const IID IID_IVWIntersectData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91D38000-64C0-11d0-89AA-00A0C9054129")
    IVWIntersectData : public IObjectProperty
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BoundaryList( 
            /* [retval][out] */ IPropertyList **ppBoundaryList) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_BoundaryList( 
            /* [in] */ IPropertyList *pBoundaryList) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BoundaryIndex( 
            /* [retval][out] */ int *piBoundaryIndex) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_BoundaryIndex( 
            /* [in] */ int iBoundaryIndex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EdgeIndex( 
            /* [retval][out] */ int *piEdgeIndex) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_EdgeIndex( 
            /* [in] */ int iEdgeIndex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DistToIntersect( 
            /* [retval][out] */ float *pfDist) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_DistToIntersect( 
            /* [in] */ float fDist) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Passed( 
            /* [retval][out] */ BYTE *pbPassed) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Passed( 
            /* [in] */ BYTE bPassed) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Transition( 
            /* [retval][out] */ BYTE *pbTransition) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Transition( 
            /* [in] */ BYTE bTransition) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Projection( 
            /* [retval][out] */ IVector **ppvProjection) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Projection( 
            /* [in] */ IVector *pvProjection) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Get( 
            /* [out] */ IPropertyList **ppBoundaryList,
            /* [out] */ int *piBoundaryIndex,
            /* [out] */ int *piEdgeIndex,
            /* [out] */ float *pfDist,
            /* [out] */ BYTE *pbPassed,
            /* [out] */ BYTE *pbTransition,
            /* [out] */ IVector **ppvProjection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWIntersectDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWIntersectData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWIntersectData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWIntersectData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWIntersectData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWIntersectData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWIntersectData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWIntersectData * This,
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
            IVWIntersectData * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IVWIntersectData * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IVWIntersectData * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IVWIntersectData * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVWIntersectData * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IVWIntersectData * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IVWIntersectData * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IVWIntersectData * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IVWIntersectData * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IVWIntersectData * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IVWIntersectData * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IVWIntersectData * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IVWIntersectData * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IVWIntersectData * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IVWIntersectData * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IVWIntersectData * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IVWIntersectData * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVWIntersectData * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IVWIntersectData * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IVWIntersectData * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IVWIntersectData * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, get_BoundaryList)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoundaryList )( 
            IVWIntersectData * This,
            /* [retval][out] */ IPropertyList **ppBoundaryList);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, put_BoundaryList)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_BoundaryList )( 
            IVWIntersectData * This,
            /* [in] */ IPropertyList *pBoundaryList);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, get_BoundaryIndex)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoundaryIndex )( 
            IVWIntersectData * This,
            /* [retval][out] */ int *piBoundaryIndex);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, put_BoundaryIndex)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_BoundaryIndex )( 
            IVWIntersectData * This,
            /* [in] */ int iBoundaryIndex);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, get_EdgeIndex)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EdgeIndex )( 
            IVWIntersectData * This,
            /* [retval][out] */ int *piEdgeIndex);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, put_EdgeIndex)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_EdgeIndex )( 
            IVWIntersectData * This,
            /* [in] */ int iEdgeIndex);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, get_DistToIntersect)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DistToIntersect )( 
            IVWIntersectData * This,
            /* [retval][out] */ float *pfDist);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, put_DistToIntersect)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_DistToIntersect )( 
            IVWIntersectData * This,
            /* [in] */ float fDist);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, get_Passed)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Passed )( 
            IVWIntersectData * This,
            /* [retval][out] */ BYTE *pbPassed);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, put_Passed)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Passed )( 
            IVWIntersectData * This,
            /* [in] */ BYTE bPassed);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, get_Transition)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Transition )( 
            IVWIntersectData * This,
            /* [retval][out] */ BYTE *pbTransition);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, put_Transition)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Transition )( 
            IVWIntersectData * This,
            /* [in] */ BYTE bTransition);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, get_Projection)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Projection )( 
            IVWIntersectData * This,
            /* [retval][out] */ IVector **ppvProjection);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, put_Projection)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Projection )( 
            IVWIntersectData * This,
            /* [in] */ IVector *pvProjection);
        
        DECLSPEC_XFGVIRT(IVWIntersectData, Get)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Get )( 
            IVWIntersectData * This,
            /* [out] */ IPropertyList **ppBoundaryList,
            /* [out] */ int *piBoundaryIndex,
            /* [out] */ int *piEdgeIndex,
            /* [out] */ float *pfDist,
            /* [out] */ BYTE *pbPassed,
            /* [out] */ BYTE *pbTransition,
            /* [out] */ IVector **ppvProjection);
        
        END_INTERFACE
    } IVWIntersectDataVtbl;

    interface IVWIntersectData
    {
        CONST_VTBL struct IVWIntersectDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWIntersectData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWIntersectData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWIntersectData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWIntersectData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWIntersectData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWIntersectData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWIntersectData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWIntersectData_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWIntersectData_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IVWIntersectData_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IVWIntersectData_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IVWIntersectData_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IVWIntersectData_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IVWIntersectData_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IVWIntersectData_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IVWIntersectData_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IVWIntersectData_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IVWIntersectData_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IVWIntersectData_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IVWIntersectData_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IVWIntersectData_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IVWIntersectData_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IVWIntersectData_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IVWIntersectData_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IVWIntersectData_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IVWIntersectData_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IVWIntersectData_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IVWIntersectData_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IVWIntersectData_get_BoundaryList(This,ppBoundaryList)	\
    ( (This)->lpVtbl -> get_BoundaryList(This,ppBoundaryList) ) 

#define IVWIntersectData_put_BoundaryList(This,pBoundaryList)	\
    ( (This)->lpVtbl -> put_BoundaryList(This,pBoundaryList) ) 

#define IVWIntersectData_get_BoundaryIndex(This,piBoundaryIndex)	\
    ( (This)->lpVtbl -> get_BoundaryIndex(This,piBoundaryIndex) ) 

#define IVWIntersectData_put_BoundaryIndex(This,iBoundaryIndex)	\
    ( (This)->lpVtbl -> put_BoundaryIndex(This,iBoundaryIndex) ) 

#define IVWIntersectData_get_EdgeIndex(This,piEdgeIndex)	\
    ( (This)->lpVtbl -> get_EdgeIndex(This,piEdgeIndex) ) 

#define IVWIntersectData_put_EdgeIndex(This,iEdgeIndex)	\
    ( (This)->lpVtbl -> put_EdgeIndex(This,iEdgeIndex) ) 

#define IVWIntersectData_get_DistToIntersect(This,pfDist)	\
    ( (This)->lpVtbl -> get_DistToIntersect(This,pfDist) ) 

#define IVWIntersectData_put_DistToIntersect(This,fDist)	\
    ( (This)->lpVtbl -> put_DistToIntersect(This,fDist) ) 

#define IVWIntersectData_get_Passed(This,pbPassed)	\
    ( (This)->lpVtbl -> get_Passed(This,pbPassed) ) 

#define IVWIntersectData_put_Passed(This,bPassed)	\
    ( (This)->lpVtbl -> put_Passed(This,bPassed) ) 

#define IVWIntersectData_get_Transition(This,pbTransition)	\
    ( (This)->lpVtbl -> get_Transition(This,pbTransition) ) 

#define IVWIntersectData_put_Transition(This,bTransition)	\
    ( (This)->lpVtbl -> put_Transition(This,bTransition) ) 

#define IVWIntersectData_get_Projection(This,ppvProjection)	\
    ( (This)->lpVtbl -> get_Projection(This,ppvProjection) ) 

#define IVWIntersectData_put_Projection(This,pvProjection)	\
    ( (This)->lpVtbl -> put_Projection(This,pvProjection) ) 

#define IVWIntersectData_Get(This,ppBoundaryList,piBoundaryIndex,piEdgeIndex,pfDist,pbPassed,pbTransition,ppvProjection)	\
    ( (This)->lpVtbl -> Get(This,ppBoundaryList,piBoundaryIndex,piEdgeIndex,pfDist,pbPassed,pbTransition,ppvProjection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWIntersectData_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


