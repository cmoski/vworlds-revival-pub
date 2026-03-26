

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/cellprop.idl:
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

#ifndef __cellprop_h__
#define __cellprop_h__

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

#ifndef __IBoundary_FWD_DEFINED__
#define __IBoundary_FWD_DEFINED__
typedef interface IBoundary IBoundary;

#endif 	/* __IBoundary_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwtrans.h"
#include "vector.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cellprop_0000_0000 */
/* [local] */ 

typedef int VIndex;

typedef int EIndex;

#ifndef POINT_H
typedef int Point2;

typedef int Point3;

#endif
#define ATTR_PASSABLE 1
#define ATTR_PROXIMITY 2
#define ATTR_CCW	4
#define ATTR_CONVEXPOLY 8
#define ATTR_INVERSE 16
#define ATTR_AUTOSOLIDBOUNDARY 32
#define STR_CEILINGHEIGHT "CeilingHeight"
#define STR_FLOORHEIGHT "FloorHeight"
#define STR_PASSABLE "Passable"
#define NULL_EINDEX	-1
#define NULL_VINDEX	-1
#define S_INTERSECTION MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x0a01)
#define S_NONSIMPLEPOLYGON MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x0a02)
EXTERN_C const IID LIBID_CELLPROPLib;


extern RPC_IF_HANDLE __MIDL_itf_cellprop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cellprop_0000_0000_v0_0_s_ifspec;

#ifndef __IBoundary_INTERFACE_DEFINED__
#define __IBoundary_INTERFACE_DEFINED__

/* interface IBoundary */
/* [unique][helpstring][local][dual][uuid][object] */ 


EXTERN_C const IID IID_IBoundary;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA6CB793-3663-11D0-8AC3-00A0C90A6BFC")
    IBoundary : public IObjectProperty
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Set( 
            /* [in] */ int nEdges,
            /* [in] */ Point2 *trgpntVerts,
            /* [in] */ unsigned char *trgEAttrs) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SetIncomplete( 
            /* [in] */ int nEdges,
            /* [in] */ Point2 *trgpntVerts,
            /* [in] */ unsigned char *trgEAttrs) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Intersect( 
            /* [in] */ IPropertyList *pBoundaryList,
            /* [in] */ int iBoundaryIndex,
            /* [in] */ float x1,
            /* [in] */ float y1,
            /* [in] */ float z1,
            /* [in] */ float x2,
            /* [in] */ float y2,
            /* [in] */ float z2,
            /* [retval][out] */ IPropertyList **ppIDataList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsWithin( 
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [retval][out] */ VARIANT_BOOL *pbInside) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IsWithinExt( 
            /* [in] */ Point2 *pnt,
            /* [retval][out] */ VARIANT_BOOL *pbInside) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_EdgeAttr( 
            /* [in] */ int index,
            /* [retval][out] */ unsigned char *pEdgeAttr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Vertex( 
            /* [in] */ int index,
            /* [retval][out] */ IVector **ppvertex) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE GetBoundingBox( 
            /* [out] */ VARIANT *pvertUpperLeft,
            /* [out] */ VARIANT *pvertLowerRight) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetBoundingBoxExt( 
            /* [out] */ IVector **ppvertUpperLeft,
            /* [out] */ IVector **ppvertLowerRight) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCenter( 
            /* [out] */ VARIANT *varfCenterX,
            /* [out] */ VARIANT *varfCenterY) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetCenterExt( 
            /* [out] */ float *fCenterX,
            /* [out] */ float *fCenterY) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HeightUpper( 
            /* [in] */ float fHeightUpper) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HeightUpper( 
            /* [retval][out] */ float *fHeightUpper) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HeightLower( 
            /* [in] */ float fHeightLower) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HeightLower( 
            /* [retval][out] */ float *fHeightLower) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsPassable( 
            /* [in] */ VARIANT_BOOL bPassable) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsPassable( 
            /* [retval][out] */ VARIANT_BOOL *pbPassable) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsProximity( 
            /* [in] */ VARIANT_BOOL bProximity) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsProximity( 
            /* [retval][out] */ VARIANT_BOOL *pbProximity) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsInverse( 
            /* [in] */ VARIANT_BOOL bInverse) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsInverse( 
            /* [retval][out] */ VARIANT_BOOL *pbInverse) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_VertexCount( 
            /* [retval][out] */ int *nEdges) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVertexXY( 
            /* [in] */ int nEdge,
            /* [out] */ VARIANT *pvarfX,
            /* [out] */ VARIANT *pvarfY) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE GetVertexXYExt( 
            /* [in] */ int index,
            /* [out] */ float *pfX,
            /* [out] */ float *pfY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVertexXY( 
            /* [in] */ int index,
            /* [in] */ float fX,
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Translate( 
            /* [in] */ float fX,
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Rotate( 
            /* [in] */ float fAngle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Scale( 
            /* [in] */ float fX,
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteVertexSafe( 
            /* [in] */ long nIndex,
            /* [retval][out] */ VARIANT_BOOL *pBool) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE DeleteVertex( 
            /* [in] */ long nIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TranslateVertexSafe( 
            /* [in] */ long nIndex,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [retval][out] */ VARIANT_BOOL *pBool) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE TranslateVertex( 
            /* [in] */ long nIndex,
            /* [in] */ float fX,
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InsertVertexSafe( 
            /* [in] */ long nIndex,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [retval][out] */ VARIANT_BOOL *pBool) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InsertVertex( 
            /* [in] */ long nIndex,
            /* [in] */ float fX,
            /* [in] */ float fY) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsClosed( 
            /* [retval][out] */ VARIANT_BOOL *pvbClose) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsClosed( 
            /* [in] */ VARIANT_BOOL vbClose) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AutoGenerate( 
            /* [in] */ IThing *pThing,
            /* [optional][in] */ int nSides,
            /* [optional][in] */ float fExtraRadius) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AutoGenerateFromBox( 
            /* [in] */ float fMinX,
            /* [in] */ float fMinY,
            /* [in] */ float fMinZ,
            /* [in] */ float fMaxX,
            /* [in] */ float fMaxY,
            /* [in] */ float fMaxZ,
            /* [optional][in] */ int nSides,
            /* [optional][in] */ float fExtraRadius) = 0;
        
        virtual /* [helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_IsAutoSolidBoundary( 
            /* [in] */ VARIANT_BOOL bAutoSolid) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_IsAutoSolidBoundary( 
            /* [retval][out] */ VARIANT_BOOL *pbInverse) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBoundaryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBoundary * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBoundary * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBoundary * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBoundary * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBoundary * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBoundary * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBoundary * This,
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
            IBoundary * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IBoundary * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IBoundary * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IBoundary * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IBoundary * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IBoundary * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IBoundary * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IBoundary * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IBoundary * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IBoundary * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IBoundary * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IBoundary * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IBoundary * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IBoundary * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IBoundary * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IBoundary * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IBoundary * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IBoundary * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IBoundary * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IBoundary * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IBoundary * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IBoundary, Set)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Set )( 
            IBoundary * This,
            /* [in] */ int nEdges,
            /* [in] */ Point2 *trgpntVerts,
            /* [in] */ unsigned char *trgEAttrs);
        
        DECLSPEC_XFGVIRT(IBoundary, SetIncomplete)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SetIncomplete )( 
            IBoundary * This,
            /* [in] */ int nEdges,
            /* [in] */ Point2 *trgpntVerts,
            /* [in] */ unsigned char *trgEAttrs);
        
        DECLSPEC_XFGVIRT(IBoundary, Intersect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Intersect )( 
            IBoundary * This,
            /* [in] */ IPropertyList *pBoundaryList,
            /* [in] */ int iBoundaryIndex,
            /* [in] */ float x1,
            /* [in] */ float y1,
            /* [in] */ float z1,
            /* [in] */ float x2,
            /* [in] */ float y2,
            /* [in] */ float z2,
            /* [retval][out] */ IPropertyList **ppIDataList);
        
        DECLSPEC_XFGVIRT(IBoundary, IsWithin)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsWithin )( 
            IBoundary * This,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [retval][out] */ VARIANT_BOOL *pbInside);
        
        DECLSPEC_XFGVIRT(IBoundary, IsWithinExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *IsWithinExt )( 
            IBoundary * This,
            /* [in] */ Point2 *pnt,
            /* [retval][out] */ VARIANT_BOOL *pbInside);
        
        DECLSPEC_XFGVIRT(IBoundary, get_EdgeAttr)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_EdgeAttr )( 
            IBoundary * This,
            /* [in] */ int index,
            /* [retval][out] */ unsigned char *pEdgeAttr);
        
        DECLSPEC_XFGVIRT(IBoundary, get_Vertex)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vertex )( 
            IBoundary * This,
            /* [in] */ int index,
            /* [retval][out] */ IVector **ppvertex);
        
        DECLSPEC_XFGVIRT(IBoundary, GetBoundingBox)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingBox )( 
            IBoundary * This,
            /* [out] */ VARIANT *pvertUpperLeft,
            /* [out] */ VARIANT *pvertLowerRight);
        
        DECLSPEC_XFGVIRT(IBoundary, GetBoundingBoxExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingBoxExt )( 
            IBoundary * This,
            /* [out] */ IVector **ppvertUpperLeft,
            /* [out] */ IVector **ppvertLowerRight);
        
        DECLSPEC_XFGVIRT(IBoundary, GetCenter)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCenter )( 
            IBoundary * This,
            /* [out] */ VARIANT *varfCenterX,
            /* [out] */ VARIANT *varfCenterY);
        
        DECLSPEC_XFGVIRT(IBoundary, GetCenterExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetCenterExt )( 
            IBoundary * This,
            /* [out] */ float *fCenterX,
            /* [out] */ float *fCenterY);
        
        DECLSPEC_XFGVIRT(IBoundary, put_HeightUpper)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HeightUpper )( 
            IBoundary * This,
            /* [in] */ float fHeightUpper);
        
        DECLSPEC_XFGVIRT(IBoundary, get_HeightUpper)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HeightUpper )( 
            IBoundary * This,
            /* [retval][out] */ float *fHeightUpper);
        
        DECLSPEC_XFGVIRT(IBoundary, put_HeightLower)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HeightLower )( 
            IBoundary * This,
            /* [in] */ float fHeightLower);
        
        DECLSPEC_XFGVIRT(IBoundary, get_HeightLower)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HeightLower )( 
            IBoundary * This,
            /* [retval][out] */ float *fHeightLower);
        
        DECLSPEC_XFGVIRT(IBoundary, put_IsPassable)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsPassable )( 
            IBoundary * This,
            /* [in] */ VARIANT_BOOL bPassable);
        
        DECLSPEC_XFGVIRT(IBoundary, get_IsPassable)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPassable )( 
            IBoundary * This,
            /* [retval][out] */ VARIANT_BOOL *pbPassable);
        
        DECLSPEC_XFGVIRT(IBoundary, put_IsProximity)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsProximity )( 
            IBoundary * This,
            /* [in] */ VARIANT_BOOL bProximity);
        
        DECLSPEC_XFGVIRT(IBoundary, get_IsProximity)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsProximity )( 
            IBoundary * This,
            /* [retval][out] */ VARIANT_BOOL *pbProximity);
        
        DECLSPEC_XFGVIRT(IBoundary, put_IsInverse)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsInverse )( 
            IBoundary * This,
            /* [in] */ VARIANT_BOOL bInverse);
        
        DECLSPEC_XFGVIRT(IBoundary, get_IsInverse)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInverse )( 
            IBoundary * This,
            /* [retval][out] */ VARIANT_BOOL *pbInverse);
        
        DECLSPEC_XFGVIRT(IBoundary, get_VertexCount)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VertexCount )( 
            IBoundary * This,
            /* [retval][out] */ int *nEdges);
        
        DECLSPEC_XFGVIRT(IBoundary, GetVertexXY)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVertexXY )( 
            IBoundary * This,
            /* [in] */ int nEdge,
            /* [out] */ VARIANT *pvarfX,
            /* [out] */ VARIANT *pvarfY);
        
        DECLSPEC_XFGVIRT(IBoundary, GetVertexXYExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *GetVertexXYExt )( 
            IBoundary * This,
            /* [in] */ int index,
            /* [out] */ float *pfX,
            /* [out] */ float *pfY);
        
        DECLSPEC_XFGVIRT(IBoundary, SetVertexXY)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVertexXY )( 
            IBoundary * This,
            /* [in] */ int index,
            /* [in] */ float fX,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IBoundary, Translate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Translate )( 
            IBoundary * This,
            /* [in] */ float fX,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IBoundary, Rotate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            IBoundary * This,
            /* [in] */ float fAngle);
        
        DECLSPEC_XFGVIRT(IBoundary, Scale)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Scale )( 
            IBoundary * This,
            /* [in] */ float fX,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IBoundary, DeleteVertexSafe)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteVertexSafe )( 
            IBoundary * This,
            /* [in] */ long nIndex,
            /* [retval][out] */ VARIANT_BOOL *pBool);
        
        DECLSPEC_XFGVIRT(IBoundary, DeleteVertex)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *DeleteVertex )( 
            IBoundary * This,
            /* [in] */ long nIndex);
        
        DECLSPEC_XFGVIRT(IBoundary, TranslateVertexSafe)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TranslateVertexSafe )( 
            IBoundary * This,
            /* [in] */ long nIndex,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [retval][out] */ VARIANT_BOOL *pBool);
        
        DECLSPEC_XFGVIRT(IBoundary, TranslateVertex)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *TranslateVertex )( 
            IBoundary * This,
            /* [in] */ long nIndex,
            /* [in] */ float fX,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IBoundary, InsertVertexSafe)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertVertexSafe )( 
            IBoundary * This,
            /* [in] */ long nIndex,
            /* [in] */ float fX,
            /* [in] */ float fY,
            /* [retval][out] */ VARIANT_BOOL *pBool);
        
        DECLSPEC_XFGVIRT(IBoundary, InsertVertex)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InsertVertex )( 
            IBoundary * This,
            /* [in] */ long nIndex,
            /* [in] */ float fX,
            /* [in] */ float fY);
        
        DECLSPEC_XFGVIRT(IBoundary, get_IsClosed)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsClosed )( 
            IBoundary * This,
            /* [retval][out] */ VARIANT_BOOL *pvbClose);
        
        DECLSPEC_XFGVIRT(IBoundary, put_IsClosed)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsClosed )( 
            IBoundary * This,
            /* [in] */ VARIANT_BOOL vbClose);
        
        DECLSPEC_XFGVIRT(IBoundary, AutoGenerate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AutoGenerate )( 
            IBoundary * This,
            /* [in] */ IThing *pThing,
            /* [optional][in] */ int nSides,
            /* [optional][in] */ float fExtraRadius);
        
        DECLSPEC_XFGVIRT(IBoundary, AutoGenerateFromBox)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AutoGenerateFromBox )( 
            IBoundary * This,
            /* [in] */ float fMinX,
            /* [in] */ float fMinY,
            /* [in] */ float fMinZ,
            /* [in] */ float fMaxX,
            /* [in] */ float fMaxY,
            /* [in] */ float fMaxZ,
            /* [optional][in] */ int nSides,
            /* [optional][in] */ float fExtraRadius);
        
        DECLSPEC_XFGVIRT(IBoundary, put_IsAutoSolidBoundary)
        /* [helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_IsAutoSolidBoundary )( 
            IBoundary * This,
            /* [in] */ VARIANT_BOOL bAutoSolid);
        
        DECLSPEC_XFGVIRT(IBoundary, get_IsAutoSolidBoundary)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_IsAutoSolidBoundary )( 
            IBoundary * This,
            /* [retval][out] */ VARIANT_BOOL *pbInverse);
        
        END_INTERFACE
    } IBoundaryVtbl;

    interface IBoundary
    {
        CONST_VTBL struct IBoundaryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBoundary_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBoundary_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBoundary_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBoundary_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBoundary_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBoundary_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBoundary_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBoundary_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IBoundary_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IBoundary_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IBoundary_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IBoundary_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IBoundary_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IBoundary_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IBoundary_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IBoundary_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IBoundary_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IBoundary_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IBoundary_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IBoundary_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IBoundary_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IBoundary_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IBoundary_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IBoundary_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IBoundary_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IBoundary_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IBoundary_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IBoundary_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IBoundary_Set(This,nEdges,trgpntVerts,trgEAttrs)	\
    ( (This)->lpVtbl -> Set(This,nEdges,trgpntVerts,trgEAttrs) ) 

#define IBoundary_SetIncomplete(This,nEdges,trgpntVerts,trgEAttrs)	\
    ( (This)->lpVtbl -> SetIncomplete(This,nEdges,trgpntVerts,trgEAttrs) ) 

#define IBoundary_Intersect(This,pBoundaryList,iBoundaryIndex,x1,y1,z1,x2,y2,z2,ppIDataList)	\
    ( (This)->lpVtbl -> Intersect(This,pBoundaryList,iBoundaryIndex,x1,y1,z1,x2,y2,z2,ppIDataList) ) 

#define IBoundary_IsWithin(This,fX,fY,pbInside)	\
    ( (This)->lpVtbl -> IsWithin(This,fX,fY,pbInside) ) 

#define IBoundary_IsWithinExt(This,pnt,pbInside)	\
    ( (This)->lpVtbl -> IsWithinExt(This,pnt,pbInside) ) 

#define IBoundary_get_EdgeAttr(This,index,pEdgeAttr)	\
    ( (This)->lpVtbl -> get_EdgeAttr(This,index,pEdgeAttr) ) 

#define IBoundary_get_Vertex(This,index,ppvertex)	\
    ( (This)->lpVtbl -> get_Vertex(This,index,ppvertex) ) 

#define IBoundary_GetBoundingBox(This,pvertUpperLeft,pvertLowerRight)	\
    ( (This)->lpVtbl -> GetBoundingBox(This,pvertUpperLeft,pvertLowerRight) ) 

#define IBoundary_GetBoundingBoxExt(This,ppvertUpperLeft,ppvertLowerRight)	\
    ( (This)->lpVtbl -> GetBoundingBoxExt(This,ppvertUpperLeft,ppvertLowerRight) ) 

#define IBoundary_GetCenter(This,varfCenterX,varfCenterY)	\
    ( (This)->lpVtbl -> GetCenter(This,varfCenterX,varfCenterY) ) 

#define IBoundary_GetCenterExt(This,fCenterX,fCenterY)	\
    ( (This)->lpVtbl -> GetCenterExt(This,fCenterX,fCenterY) ) 

#define IBoundary_put_HeightUpper(This,fHeightUpper)	\
    ( (This)->lpVtbl -> put_HeightUpper(This,fHeightUpper) ) 

#define IBoundary_get_HeightUpper(This,fHeightUpper)	\
    ( (This)->lpVtbl -> get_HeightUpper(This,fHeightUpper) ) 

#define IBoundary_put_HeightLower(This,fHeightLower)	\
    ( (This)->lpVtbl -> put_HeightLower(This,fHeightLower) ) 

#define IBoundary_get_HeightLower(This,fHeightLower)	\
    ( (This)->lpVtbl -> get_HeightLower(This,fHeightLower) ) 

#define IBoundary_put_IsPassable(This,bPassable)	\
    ( (This)->lpVtbl -> put_IsPassable(This,bPassable) ) 

#define IBoundary_get_IsPassable(This,pbPassable)	\
    ( (This)->lpVtbl -> get_IsPassable(This,pbPassable) ) 

#define IBoundary_put_IsProximity(This,bProximity)	\
    ( (This)->lpVtbl -> put_IsProximity(This,bProximity) ) 

#define IBoundary_get_IsProximity(This,pbProximity)	\
    ( (This)->lpVtbl -> get_IsProximity(This,pbProximity) ) 

#define IBoundary_put_IsInverse(This,bInverse)	\
    ( (This)->lpVtbl -> put_IsInverse(This,bInverse) ) 

#define IBoundary_get_IsInverse(This,pbInverse)	\
    ( (This)->lpVtbl -> get_IsInverse(This,pbInverse) ) 

#define IBoundary_get_VertexCount(This,nEdges)	\
    ( (This)->lpVtbl -> get_VertexCount(This,nEdges) ) 

#define IBoundary_GetVertexXY(This,nEdge,pvarfX,pvarfY)	\
    ( (This)->lpVtbl -> GetVertexXY(This,nEdge,pvarfX,pvarfY) ) 

#define IBoundary_GetVertexXYExt(This,index,pfX,pfY)	\
    ( (This)->lpVtbl -> GetVertexXYExt(This,index,pfX,pfY) ) 

#define IBoundary_SetVertexXY(This,index,fX,fY)	\
    ( (This)->lpVtbl -> SetVertexXY(This,index,fX,fY) ) 

#define IBoundary_Translate(This,fX,fY)	\
    ( (This)->lpVtbl -> Translate(This,fX,fY) ) 

#define IBoundary_Rotate(This,fAngle)	\
    ( (This)->lpVtbl -> Rotate(This,fAngle) ) 

#define IBoundary_Scale(This,fX,fY)	\
    ( (This)->lpVtbl -> Scale(This,fX,fY) ) 

#define IBoundary_DeleteVertexSafe(This,nIndex,pBool)	\
    ( (This)->lpVtbl -> DeleteVertexSafe(This,nIndex,pBool) ) 

#define IBoundary_DeleteVertex(This,nIndex)	\
    ( (This)->lpVtbl -> DeleteVertex(This,nIndex) ) 

#define IBoundary_TranslateVertexSafe(This,nIndex,fX,fY,pBool)	\
    ( (This)->lpVtbl -> TranslateVertexSafe(This,nIndex,fX,fY,pBool) ) 

#define IBoundary_TranslateVertex(This,nIndex,fX,fY)	\
    ( (This)->lpVtbl -> TranslateVertex(This,nIndex,fX,fY) ) 

#define IBoundary_InsertVertexSafe(This,nIndex,fX,fY,pBool)	\
    ( (This)->lpVtbl -> InsertVertexSafe(This,nIndex,fX,fY,pBool) ) 

#define IBoundary_InsertVertex(This,nIndex,fX,fY)	\
    ( (This)->lpVtbl -> InsertVertex(This,nIndex,fX,fY) ) 

#define IBoundary_get_IsClosed(This,pvbClose)	\
    ( (This)->lpVtbl -> get_IsClosed(This,pvbClose) ) 

#define IBoundary_put_IsClosed(This,vbClose)	\
    ( (This)->lpVtbl -> put_IsClosed(This,vbClose) ) 

#define IBoundary_AutoGenerate(This,pThing,nSides,fExtraRadius)	\
    ( (This)->lpVtbl -> AutoGenerate(This,pThing,nSides,fExtraRadius) ) 

#define IBoundary_AutoGenerateFromBox(This,fMinX,fMinY,fMinZ,fMaxX,fMaxY,fMaxZ,nSides,fExtraRadius)	\
    ( (This)->lpVtbl -> AutoGenerateFromBox(This,fMinX,fMinY,fMinZ,fMaxX,fMaxY,fMaxZ,nSides,fExtraRadius) ) 

#define IBoundary_put_IsAutoSolidBoundary(This,bAutoSolid)	\
    ( (This)->lpVtbl -> put_IsAutoSolidBoundary(This,bAutoSolid) ) 

#define IBoundary_get_IsAutoSolidBoundary(This,pbInverse)	\
    ( (This)->lpVtbl -> get_IsAutoSolidBoundary(This,pbInverse) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBoundary_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_cellprop_0000_0001 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9882-A417-11CF-9BF0-0080C7A56A8A") 
enum BoundaryListHint
    {
        clAddBoundary	= 0,
        clRemoveBoundary	= 1,
        clInsertBoundaryAt	= 2,
        clRemoveBoundaryAt	= 3
    } 	BoundaryListHint;



extern RPC_IF_HANDLE __MIDL_itf_cellprop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cellprop_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


