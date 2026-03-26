

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vector.idl:
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

#ifndef __vector_h__
#define __vector_h__

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

#ifndef __IVector_FWD_DEFINED__
#define __IVector_FWD_DEFINED__
typedef interface IVector IVector;

#endif 	/* __IVector_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwprop.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vector_0000_0000 */
/* [local] */ 

EXTERN_C const IID LIBID_VECTORLib;


extern RPC_IF_HANDLE __MIDL_itf_vector_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vector_0000_0000_v0_0_s_ifspec;

#ifndef __IVector_INTERFACE_DEFINED__
#define __IVector_INTERFACE_DEFINED__

/* interface IVector */
/* [unique][helpstring][local][dual][uuid][object] */ 

#define	DISPID_VECTOR_X	( 101 )

#define	DISPID_VECTOR_Y	( 102 )

#define	DISPID_VECTOR_Z	( 103 )

#define	DISPID_VECTOR_SET	( 104 )

#define	DISPID_VECTOR_GET	( 105 )

#define	DISPID_VECTOR_ADD	( 106 )

#define	DISPID_VECTOR_SUBTRACT	( 107 )

#define	DISPID_VECTOR_NORM	( 108 )

#define	DISPID_VECTOR_SCALE	( 109 )

#define	DISPID_VECTOR_LENGTH	( 110 )

#define	DISPID_VECTOR_ROTATION	( 111 )

#define	DISPID_VECTOR_ROTATE	( 112 )

#define	DISPID_VECTOR_ROTATEABOUTAXIS	( 113 )

#define	DISPID_VECTOR_GETEULERANGLES	( 114 )


EXTERN_C const IID IID_IVector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27EB8909-1842-11D0-89A9-00A0C9054129")
    IVector : public IObjectProperty
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_x( 
            /* [retval][out] */ float *pfx) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_x( 
            /* [in] */ float fx) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_y( 
            /* [retval][out] */ float *pfy) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_y( 
            /* [in] */ float fy) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_z( 
            /* [retval][out] */ float *pfz) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_z( 
            /* [in] */ float fz) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE set( 
            /* [in] */ float fx,
            /* [in] */ float fy,
            /* [in] */ float fz) = 0;
        
        virtual /* [id][helpstring][restricted] */ HRESULT STDMETHODCALLTYPE get( 
            /* [out] */ float *pfx,
            /* [out] */ float *pfy,
            /* [out] */ float *pfz) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IVector *pv,
            /* [in] */ IVector *pvres) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Subtract( 
            /* [in] */ IVector *pv,
            /* [in] */ IVector *pvres) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Normalize( 
            /* [in] */ IVector *pvres) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Scale( 
            /* [in] */ float scale,
            /* [in] */ IVector *pvres) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Rotate( 
            /* [in] */ float fTheta,
            /* [in] */ IVector *pvres) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Length( 
            /* [retval][out] */ float *pfl) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation( 
            /* [retval][out] */ float *pfTheta) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE RotateAboutAxis( 
            /* [in] */ float fTheta,
            /* [in] */ float fAxisX,
            /* [in] */ float fAxisY,
            /* [in] */ float fAxisZ) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE GetEulerAngles( 
            /* [out] */ VARIANT *fAngleX,
            /* [out] */ VARIANT *fAngleY,
            /* [out] */ VARIANT *fAngleZ) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVectorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVector * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVector * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVector * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVector * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVector * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVector * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVector * This,
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
            IVector * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IVector * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IVector * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IVector * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVector * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IVector * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IVector * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IVector * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IVector * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IVector * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IVector * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IVector * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IVector * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IVector * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IVector * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IVector * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IVector * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVector * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IVector * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IVector * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IVector * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IVector, get_x)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_x )( 
            IVector * This,
            /* [retval][out] */ float *pfx);
        
        DECLSPEC_XFGVIRT(IVector, put_x)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_x )( 
            IVector * This,
            /* [in] */ float fx);
        
        DECLSPEC_XFGVIRT(IVector, get_y)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_y )( 
            IVector * This,
            /* [retval][out] */ float *pfy);
        
        DECLSPEC_XFGVIRT(IVector, put_y)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_y )( 
            IVector * This,
            /* [in] */ float fy);
        
        DECLSPEC_XFGVIRT(IVector, get_z)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_z )( 
            IVector * This,
            /* [retval][out] */ float *pfz);
        
        DECLSPEC_XFGVIRT(IVector, put_z)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_z )( 
            IVector * This,
            /* [in] */ float fz);
        
        DECLSPEC_XFGVIRT(IVector, set)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *set )( 
            IVector * This,
            /* [in] */ float fx,
            /* [in] */ float fy,
            /* [in] */ float fz);
        
        DECLSPEC_XFGVIRT(IVector, get)
        /* [id][helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *get )( 
            IVector * This,
            /* [out] */ float *pfx,
            /* [out] */ float *pfy,
            /* [out] */ float *pfz);
        
        DECLSPEC_XFGVIRT(IVector, Add)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IVector * This,
            /* [in] */ IVector *pv,
            /* [in] */ IVector *pvres);
        
        DECLSPEC_XFGVIRT(IVector, Subtract)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Subtract )( 
            IVector * This,
            /* [in] */ IVector *pv,
            /* [in] */ IVector *pvres);
        
        DECLSPEC_XFGVIRT(IVector, Normalize)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Normalize )( 
            IVector * This,
            /* [in] */ IVector *pvres);
        
        DECLSPEC_XFGVIRT(IVector, Scale)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Scale )( 
            IVector * This,
            /* [in] */ float scale,
            /* [in] */ IVector *pvres);
        
        DECLSPEC_XFGVIRT(IVector, Rotate)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            IVector * This,
            /* [in] */ float fTheta,
            /* [in] */ IVector *pvres);
        
        DECLSPEC_XFGVIRT(IVector, Length)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Length )( 
            IVector * This,
            /* [retval][out] */ float *pfl);
        
        DECLSPEC_XFGVIRT(IVector, get_Rotation)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rotation )( 
            IVector * This,
            /* [retval][out] */ float *pfTheta);
        
        DECLSPEC_XFGVIRT(IVector, RotateAboutAxis)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RotateAboutAxis )( 
            IVector * This,
            /* [in] */ float fTheta,
            /* [in] */ float fAxisX,
            /* [in] */ float fAxisY,
            /* [in] */ float fAxisZ);
        
        DECLSPEC_XFGVIRT(IVector, GetEulerAngles)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetEulerAngles )( 
            IVector * This,
            /* [out] */ VARIANT *fAngleX,
            /* [out] */ VARIANT *fAngleY,
            /* [out] */ VARIANT *fAngleZ);
        
        END_INTERFACE
    } IVectorVtbl;

    interface IVector
    {
        CONST_VTBL struct IVectorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVector_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVector_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVector_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVector_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVector_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVector_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IVector_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IVector_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IVector_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IVector_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IVector_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IVector_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IVector_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IVector_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IVector_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IVector_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IVector_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IVector_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IVector_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IVector_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IVector_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IVector_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IVector_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IVector_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IVector_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IVector_get_x(This,pfx)	\
    ( (This)->lpVtbl -> get_x(This,pfx) ) 

#define IVector_put_x(This,fx)	\
    ( (This)->lpVtbl -> put_x(This,fx) ) 

#define IVector_get_y(This,pfy)	\
    ( (This)->lpVtbl -> get_y(This,pfy) ) 

#define IVector_put_y(This,fy)	\
    ( (This)->lpVtbl -> put_y(This,fy) ) 

#define IVector_get_z(This,pfz)	\
    ( (This)->lpVtbl -> get_z(This,pfz) ) 

#define IVector_put_z(This,fz)	\
    ( (This)->lpVtbl -> put_z(This,fz) ) 

#define IVector_set(This,fx,fy,fz)	\
    ( (This)->lpVtbl -> set(This,fx,fy,fz) ) 

#define IVector_get(This,pfx,pfy,pfz)	\
    ( (This)->lpVtbl -> get(This,pfx,pfy,pfz) ) 

#define IVector_Add(This,pv,pvres)	\
    ( (This)->lpVtbl -> Add(This,pv,pvres) ) 

#define IVector_Subtract(This,pv,pvres)	\
    ( (This)->lpVtbl -> Subtract(This,pv,pvres) ) 

#define IVector_Normalize(This,pvres)	\
    ( (This)->lpVtbl -> Normalize(This,pvres) ) 

#define IVector_Scale(This,scale,pvres)	\
    ( (This)->lpVtbl -> Scale(This,scale,pvres) ) 

#define IVector_Rotate(This,fTheta,pvres)	\
    ( (This)->lpVtbl -> Rotate(This,fTheta,pvres) ) 

#define IVector_Length(This,pfl)	\
    ( (This)->lpVtbl -> Length(This,pfl) ) 

#define IVector_get_Rotation(This,pfTheta)	\
    ( (This)->lpVtbl -> get_Rotation(This,pfTheta) ) 

#define IVector_RotateAboutAxis(This,fTheta,fAxisX,fAxisY,fAxisZ)	\
    ( (This)->lpVtbl -> RotateAboutAxis(This,fTheta,fAxisX,fAxisY,fAxisZ) ) 

#define IVector_GetEulerAngles(This,fAngleX,fAngleY,fAngleZ)	\
    ( (This)->lpVtbl -> GetEulerAngles(This,fAngleX,fAngleY,fAngleZ) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVector_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vector_0000_0001 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9872-A417-11CF-9BF0-0080C7A56A8A") 
enum VectorHint
    {
        veX	= 0,
        veY	= 1,
        veZ	= 2,
        veSet	= 3
    } 	VectorHint;



extern RPC_IF_HANDLE __MIDL_itf_vector_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vector_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


