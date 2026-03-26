

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/isound.idl:
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

#ifndef __isound_h__
#define __isound_h__

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

#ifndef __ISound_FWD_DEFINED__
#define __ISound_FWD_DEFINED__
typedef interface ISound ISound;

#endif 	/* __ISound_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwprop.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISound_INTERFACE_DEFINED__
#define __ISound_INTERFACE_DEFINED__

/* interface ISound */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_SOUND_URL	( 101 )

#define	DISPID_SOUND_ISLOOPING	( 102 )

#define	DISPID_SOUND_IS3D	( 103 )

#define	DISPID_SOUND_SET2DDATA	( 104 )

#define	DISPID_SOUND_SET3DDATA	( 105 )


EXTERN_C const IID IID_ISound;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF0BD16D-AE3E-11D1-83F0-00C04FB6FA46")
    ISound : public IObjectProperty
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SoundURL( 
            /* [retval][out] */ BSTR *pbstrURL) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SoundURL( 
            /* [in] */ BSTR bstrURL) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsLooping( 
            /* [retval][out] */ VARIANT_BOOL *pbIsLooping) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsLooping( 
            /* [in] */ VARIANT_BOOL bIsLooping) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Is3D( 
            /* [retval][out] */ VARIANT_BOOL *pbIs3D) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Is3D( 
            /* [in] */ VARIANT_BOOL bIs3D) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Set2DData( 
            /* [in] */ long lVolume,
            /* [in] */ long lFrequency,
            /* [in] */ long lPan) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get2DData( 
            /* [out] */ VARIANT *pvarlVolume,
            /* [out] */ VARIANT *pvarlFrequency,
            /* [out] */ VARIANT *pvarlPan) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Get2DDataExt( 
            /* [out] */ long *plVolume,
            /* [out] */ long *plFrequency,
            /* [out] */ long *plPan) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Set3DData( 
            /* [in] */ long dwInsideConeAngle,
            /* [in] */ long dwOutsideConeAngle,
            /* [in] */ long lConeOutsideVolume,
            /* [in] */ float flMinDistance,
            /* [in] */ float flMaxDistance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Get3DData( 
            /* [out] */ VARIANT *pvardwInsideConeAngle,
            /* [out] */ VARIANT *pvardwOutsideConeAngle,
            /* [out] */ VARIANT *pvarlConeOutsideVolume,
            /* [out] */ VARIANT *pvarflMinDistance,
            /* [out] */ VARIANT *pvarflMaxDistance) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Get3DDataExt( 
            /* [out] */ long *pdwInsideConeAngle,
            /* [out] */ long *pdwOutsideConeAngle,
            /* [out] */ long *plConeOutsideVolume,
            /* [out] */ float *pflMinDistance,
            /* [out] */ float *pflMaxDistance) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISoundVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISound * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISound * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISound * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISound * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISound * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISound * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISound * This,
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
            ISound * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            ISound * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            ISound * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            ISound * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            ISound * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            ISound * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ISound * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            ISound * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            ISound * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            ISound * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ISound * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            ISound * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            ISound * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            ISound * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            ISound * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            ISound * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            ISound * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ISound * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            ISound * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            ISound * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            ISound * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(ISound, get_SoundURL)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SoundURL )( 
            ISound * This,
            /* [retval][out] */ BSTR *pbstrURL);
        
        DECLSPEC_XFGVIRT(ISound, put_SoundURL)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SoundURL )( 
            ISound * This,
            /* [in] */ BSTR bstrURL);
        
        DECLSPEC_XFGVIRT(ISound, get_IsLooping)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLooping )( 
            ISound * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsLooping);
        
        DECLSPEC_XFGVIRT(ISound, put_IsLooping)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsLooping )( 
            ISound * This,
            /* [in] */ VARIANT_BOOL bIsLooping);
        
        DECLSPEC_XFGVIRT(ISound, get_Is3D)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Is3D )( 
            ISound * This,
            /* [retval][out] */ VARIANT_BOOL *pbIs3D);
        
        DECLSPEC_XFGVIRT(ISound, put_Is3D)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Is3D )( 
            ISound * This,
            /* [in] */ VARIANT_BOOL bIs3D);
        
        DECLSPEC_XFGVIRT(ISound, Set2DData)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Set2DData )( 
            ISound * This,
            /* [in] */ long lVolume,
            /* [in] */ long lFrequency,
            /* [in] */ long lPan);
        
        DECLSPEC_XFGVIRT(ISound, Get2DData)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get2DData )( 
            ISound * This,
            /* [out] */ VARIANT *pvarlVolume,
            /* [out] */ VARIANT *pvarlFrequency,
            /* [out] */ VARIANT *pvarlPan);
        
        DECLSPEC_XFGVIRT(ISound, Get2DDataExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Get2DDataExt )( 
            ISound * This,
            /* [out] */ long *plVolume,
            /* [out] */ long *plFrequency,
            /* [out] */ long *plPan);
        
        DECLSPEC_XFGVIRT(ISound, Set3DData)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Set3DData )( 
            ISound * This,
            /* [in] */ long dwInsideConeAngle,
            /* [in] */ long dwOutsideConeAngle,
            /* [in] */ long lConeOutsideVolume,
            /* [in] */ float flMinDistance,
            /* [in] */ float flMaxDistance);
        
        DECLSPEC_XFGVIRT(ISound, Get3DData)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Get3DData )( 
            ISound * This,
            /* [out] */ VARIANT *pvardwInsideConeAngle,
            /* [out] */ VARIANT *pvardwOutsideConeAngle,
            /* [out] */ VARIANT *pvarlConeOutsideVolume,
            /* [out] */ VARIANT *pvarflMinDistance,
            /* [out] */ VARIANT *pvarflMaxDistance);
        
        DECLSPEC_XFGVIRT(ISound, Get3DDataExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Get3DDataExt )( 
            ISound * This,
            /* [out] */ long *pdwInsideConeAngle,
            /* [out] */ long *pdwOutsideConeAngle,
            /* [out] */ long *plConeOutsideVolume,
            /* [out] */ float *pflMinDistance,
            /* [out] */ float *pflMaxDistance);
        
        END_INTERFACE
    } ISoundVtbl;

    interface ISound
    {
        CONST_VTBL struct ISoundVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISound_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISound_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISound_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISound_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISound_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISound_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISound_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISound_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define ISound_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define ISound_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define ISound_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define ISound_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define ISound_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define ISound_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define ISound_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define ISound_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define ISound_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define ISound_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define ISound_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define ISound_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define ISound_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define ISound_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define ISound_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define ISound_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define ISound_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define ISound_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define ISound_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define ISound_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define ISound_get_SoundURL(This,pbstrURL)	\
    ( (This)->lpVtbl -> get_SoundURL(This,pbstrURL) ) 

#define ISound_put_SoundURL(This,bstrURL)	\
    ( (This)->lpVtbl -> put_SoundURL(This,bstrURL) ) 

#define ISound_get_IsLooping(This,pbIsLooping)	\
    ( (This)->lpVtbl -> get_IsLooping(This,pbIsLooping) ) 

#define ISound_put_IsLooping(This,bIsLooping)	\
    ( (This)->lpVtbl -> put_IsLooping(This,bIsLooping) ) 

#define ISound_get_Is3D(This,pbIs3D)	\
    ( (This)->lpVtbl -> get_Is3D(This,pbIs3D) ) 

#define ISound_put_Is3D(This,bIs3D)	\
    ( (This)->lpVtbl -> put_Is3D(This,bIs3D) ) 

#define ISound_Set2DData(This,lVolume,lFrequency,lPan)	\
    ( (This)->lpVtbl -> Set2DData(This,lVolume,lFrequency,lPan) ) 

#define ISound_Get2DData(This,pvarlVolume,pvarlFrequency,pvarlPan)	\
    ( (This)->lpVtbl -> Get2DData(This,pvarlVolume,pvarlFrequency,pvarlPan) ) 

#define ISound_Get2DDataExt(This,plVolume,plFrequency,plPan)	\
    ( (This)->lpVtbl -> Get2DDataExt(This,plVolume,plFrequency,plPan) ) 

#define ISound_Set3DData(This,dwInsideConeAngle,dwOutsideConeAngle,lConeOutsideVolume,flMinDistance,flMaxDistance)	\
    ( (This)->lpVtbl -> Set3DData(This,dwInsideConeAngle,dwOutsideConeAngle,lConeOutsideVolume,flMinDistance,flMaxDistance) ) 

#define ISound_Get3DData(This,pvardwInsideConeAngle,pvardwOutsideConeAngle,pvarlConeOutsideVolume,pvarflMinDistance,pvarflMaxDistance)	\
    ( (This)->lpVtbl -> Get3DData(This,pvardwInsideConeAngle,pvardwOutsideConeAngle,pvarlConeOutsideVolume,pvarflMinDistance,pvarflMaxDistance) ) 

#define ISound_Get3DDataExt(This,pdwInsideConeAngle,pdwOutsideConeAngle,plConeOutsideVolume,pflMinDistance,pflMaxDistance)	\
    ( (This)->lpVtbl -> Get3DDataExt(This,pdwInsideConeAngle,pdwOutsideConeAngle,plConeOutsideVolume,pflMinDistance,pflMaxDistance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISound_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isound_0000_0001 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("0D8F714B-B30D-11d1-83F0-00C04FB6FA46") 
enum SoundHint
    {
        soundURL	= 0,
        soundIsLooping	= 1,
        soundIs3D	= 2,
        soundIsPlaying	= 3,
        sound2DData	= 4,
        sound3DData	= 5
    } 	SoundHint;



extern RPC_IF_HANDLE __MIDL_itf_isound_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isound_0000_0001_v0_0_s_ifspec;

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


