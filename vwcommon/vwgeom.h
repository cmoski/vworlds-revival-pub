

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwgeom.idl:
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

#ifndef __vwgeom_h__
#define __vwgeom_h__

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

#ifndef __IVWGeometry_FWD_DEFINED__
#define __IVWGeometry_FWD_DEFINED__
typedef interface IVWGeometry IVWGeometry;

#endif 	/* __IVWGeometry_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwframe.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IVWGeometry_INTERFACE_DEFINED__
#define __IVWGeometry_INTERFACE_DEFINED__

/* interface IVWGeometry */
/* [unique][helpstring][local][dual][uuid][object] */ 

#define	DISPID_GEOMETRY_GEOMETRYNAME	( 101 )


EXTERN_C const IID IID_IVWGeometry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3851C6A0-1DD4-11d0-8AC3-00A0C90A6BFC")
    IVWGeometry : public IObjectProperty
    {
    public:
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GeometryName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GeometryName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GestureText( 
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NamedGesture( 
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ int *pGestureNum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ComposeGeometry( 
            /* [retval][out] */ IVWFrame **ppvwf) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ReleaseGeometry( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Frame( 
            /* [retval][out] */ IVWFrame **ppVWFrame) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Frame( 
            /* [in] */ IVWFrame *pVWFrame) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GeometryFrame( 
            /* [retval][out] */ IVWFrame **ppVWFrame) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Occluded( 
            VARIANT_BOOL bOccluded) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNamedGestures( 
            /* [retval][out] */ IPropertyList **ppGestureNameList) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentGesture( 
            /* [in] */ int iGesture) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentGesture( 
            /* [retval][out] */ int *piGesture) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWGeometryVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWGeometry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWGeometry * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWGeometry * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWGeometry * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWGeometry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWGeometry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWGeometry * This,
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
            IVWGeometry * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IVWGeometry * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IVWGeometry * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IVWGeometry * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IVWGeometry * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IVWGeometry * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IVWGeometry * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IVWGeometry * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IVWGeometry * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IVWGeometry * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IVWGeometry * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IVWGeometry * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IVWGeometry * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IVWGeometry * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IVWGeometry * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IVWGeometry * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IVWGeometry * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IVWGeometry * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IVWGeometry * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IVWGeometry * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IVWGeometry * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_GeometryName)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GeometryName )( 
            IVWGeometry * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_GeometryName)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GeometryName )( 
            IVWGeometry * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_GestureText)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GestureText )( 
            IVWGeometry * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ BSTR *pbstrText);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_NamedGesture)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NamedGesture )( 
            IVWGeometry * This,
            /* [in] */ BSTR bstrGesture,
            /* [retval][out] */ int *pGestureNum);
        
        DECLSPEC_XFGVIRT(IVWGeometry, ComposeGeometry)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ComposeGeometry )( 
            IVWGeometry * This,
            /* [retval][out] */ IVWFrame **ppvwf);
        
        DECLSPEC_XFGVIRT(IVWGeometry, ReleaseGeometry)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReleaseGeometry )( 
            IVWGeometry * This);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_Frame)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Frame )( 
            IVWGeometry * This,
            /* [retval][out] */ IVWFrame **ppVWFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_Frame)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Frame )( 
            IVWGeometry * This,
            /* [in] */ IVWFrame *pVWFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_GeometryFrame)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GeometryFrame )( 
            IVWGeometry * This,
            /* [retval][out] */ IVWFrame **ppVWFrame);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_Occluded)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Occluded )( 
            IVWGeometry * This,
            VARIANT_BOOL bOccluded);
        
        DECLSPEC_XFGVIRT(IVWGeometry, GetNamedGestures)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedGestures )( 
            IVWGeometry * This,
            /* [retval][out] */ IPropertyList **ppGestureNameList);
        
        DECLSPEC_XFGVIRT(IVWGeometry, put_CurrentGesture)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentGesture )( 
            IVWGeometry * This,
            /* [in] */ int iGesture);
        
        DECLSPEC_XFGVIRT(IVWGeometry, get_CurrentGesture)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentGesture )( 
            IVWGeometry * This,
            /* [retval][out] */ int *piGesture);
        
        END_INTERFACE
    } IVWGeometryVtbl;

    interface IVWGeometry
    {
        CONST_VTBL struct IVWGeometryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWGeometry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWGeometry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWGeometry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWGeometry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWGeometry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWGeometry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWGeometry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWGeometry_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWGeometry_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IVWGeometry_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IVWGeometry_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IVWGeometry_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IVWGeometry_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IVWGeometry_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IVWGeometry_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IVWGeometry_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IVWGeometry_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IVWGeometry_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IVWGeometry_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IVWGeometry_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IVWGeometry_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IVWGeometry_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IVWGeometry_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IVWGeometry_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IVWGeometry_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IVWGeometry_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IVWGeometry_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IVWGeometry_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IVWGeometry_put_GeometryName(This,bstr)	\
    ( (This)->lpVtbl -> put_GeometryName(This,bstr) ) 

#define IVWGeometry_get_GeometryName(This,pbstr)	\
    ( (This)->lpVtbl -> get_GeometryName(This,pbstr) ) 

#define IVWGeometry_get_GestureText(This,bstrGesture,pbstrText)	\
    ( (This)->lpVtbl -> get_GestureText(This,bstrGesture,pbstrText) ) 

#define IVWGeometry_get_NamedGesture(This,bstrGesture,pGestureNum)	\
    ( (This)->lpVtbl -> get_NamedGesture(This,bstrGesture,pGestureNum) ) 

#define IVWGeometry_ComposeGeometry(This,ppvwf)	\
    ( (This)->lpVtbl -> ComposeGeometry(This,ppvwf) ) 

#define IVWGeometry_ReleaseGeometry(This)	\
    ( (This)->lpVtbl -> ReleaseGeometry(This) ) 

#define IVWGeometry_get_Frame(This,ppVWFrame)	\
    ( (This)->lpVtbl -> get_Frame(This,ppVWFrame) ) 

#define IVWGeometry_put_Frame(This,pVWFrame)	\
    ( (This)->lpVtbl -> put_Frame(This,pVWFrame) ) 

#define IVWGeometry_get_GeometryFrame(This,ppVWFrame)	\
    ( (This)->lpVtbl -> get_GeometryFrame(This,ppVWFrame) ) 

#define IVWGeometry_put_Occluded(This,bOccluded)	\
    ( (This)->lpVtbl -> put_Occluded(This,bOccluded) ) 

#define IVWGeometry_GetNamedGestures(This,ppGestureNameList)	\
    ( (This)->lpVtbl -> GetNamedGestures(This,ppGestureNameList) ) 

#define IVWGeometry_put_CurrentGesture(This,iGesture)	\
    ( (This)->lpVtbl -> put_CurrentGesture(This,iGesture) ) 

#define IVWGeometry_get_CurrentGesture(This,piGesture)	\
    ( (This)->lpVtbl -> get_CurrentGesture(This,piGesture) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWGeometry_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vwgeom_0000_0001 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("ECEF6E80-34BE-11d1-9888-006097C9A0E1") 
enum GeometryHint
    {
        glPutGeometryName	= 0,
        glPutThumbnailBackground	= 1,
        glPutThumbnailName	= 2
    } 	GeometryHint;



extern RPC_IF_HANDLE __MIDL_itf_vwgeom_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwgeom_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


