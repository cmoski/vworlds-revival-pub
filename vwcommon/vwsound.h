

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwsound.idl:
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

#ifndef __vwsound_h__
#define __vwsound_h__

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

#ifndef __IVWSound_FWD_DEFINED__
#define __IVWSound_FWD_DEFINED__
typedef interface IVWSound IVWSound;

#endif 	/* __IVWSound_FWD_DEFINED__ */


#ifndef __ISoundBuffer_FWD_DEFINED__
#define __ISoundBuffer_FWD_DEFINED__
typedef interface ISoundBuffer ISoundBuffer;

#endif 	/* __ISoundBuffer_FWD_DEFINED__ */


#ifndef __ISound3DBuffer_FWD_DEFINED__
#define __ISound3DBuffer_FWD_DEFINED__
typedef interface ISound3DBuffer ISound3DBuffer;

#endif 	/* __ISound3DBuffer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwclient.h"
#include "vector.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwsound_0000_0000 */
/* [local] */ 

#define VWSOUND_E_NOTINITIALIZED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0701)
#define VWSOUND_E_ERRORMAPPINGFILE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0702)
#define VWSOUND_E_INVALIDSOUNDFORMAT		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0703)




extern RPC_IF_HANDLE __MIDL_itf_vwsound_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwsound_0000_0000_v0_0_s_ifspec;

#ifndef __IVWSound_INTERFACE_DEFINED__
#define __IVWSound_INTERFACE_DEFINED__

/* interface IVWSound */
/* [unique][helpstring][dual][uuid][object] */ 

#define	VWS_EXCLUSIVE	( 1 )

#define	VWS_NORMAL	( 2 )

#define	VWS_PRIORITY	( 3 )


EXTERN_C const IID IID_IVWSound;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96732825-482A-11D0-89AB-00A0C9054129")
    IVWSound : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Initialize( 
            IVWClient *pClient) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SetCooperativeLevel( 
            /* [in] */ HWND hWnd,
            int nLevel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ BSTR bstrFile,
            /* [retval][out] */ ISoundBuffer **ppBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Create3D( 
            /* [in] */ BSTR bstrFile,
            /* [retval][out] */ ISound3DBuffer **pp3DBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Reload( 
            /* [in] */ BSTR bstrFile,
            /* [in] */ int hBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Play( 
            /* [in] */ ISoundBuffer *pBuffer,
            /* [in] */ VARIANT_BOOL bLoop) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Stop( 
            /* [in] */ ISoundBuffer *pBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetOrientation( 
            /* [in] */ float fDirX,
            /* [in] */ float fDirY,
            /* [in] */ float fDirZ,
            /* [in] */ float fUpX,
            /* [in] */ float fUpY,
            /* [in] */ float fUpZ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDistanceFactor( 
            /* [in] */ float flFactor) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRolloffFactor( 
            /* [in] */ float flFactor) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWSoundVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWSound * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWSound * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWSound * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWSound * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWSound * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWSound * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWSound * This,
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
        
        DECLSPEC_XFGVIRT(IVWSound, Initialize)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWSound * This,
            IVWClient *pClient);
        
        DECLSPEC_XFGVIRT(IVWSound, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWSound * This);
        
        DECLSPEC_XFGVIRT(IVWSound, SetCooperativeLevel)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SetCooperativeLevel )( 
            IVWSound * This,
            /* [in] */ HWND hWnd,
            int nLevel);
        
        DECLSPEC_XFGVIRT(IVWSound, Create)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IVWSound * This,
            /* [in] */ BSTR bstrFile,
            /* [retval][out] */ ISoundBuffer **ppBuffer);
        
        DECLSPEC_XFGVIRT(IVWSound, Create3D)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create3D )( 
            IVWSound * This,
            /* [in] */ BSTR bstrFile,
            /* [retval][out] */ ISound3DBuffer **pp3DBuffer);
        
        DECLSPEC_XFGVIRT(IVWSound, Reload)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reload )( 
            IVWSound * This,
            /* [in] */ BSTR bstrFile,
            /* [in] */ int hBuffer);
        
        DECLSPEC_XFGVIRT(IVWSound, Play)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Play )( 
            IVWSound * This,
            /* [in] */ ISoundBuffer *pBuffer,
            /* [in] */ VARIANT_BOOL bLoop);
        
        DECLSPEC_XFGVIRT(IVWSound, Stop)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IVWSound * This,
            /* [in] */ ISoundBuffer *pBuffer);
        
        DECLSPEC_XFGVIRT(IVWSound, SetPosition)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            IVWSound * This,
            /* [in] */ float fPosX,
            /* [in] */ float fPosY,
            /* [in] */ float fPosZ);
        
        DECLSPEC_XFGVIRT(IVWSound, SetOrientation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOrientation )( 
            IVWSound * This,
            /* [in] */ float fDirX,
            /* [in] */ float fDirY,
            /* [in] */ float fDirZ,
            /* [in] */ float fUpX,
            /* [in] */ float fUpY,
            /* [in] */ float fUpZ);
        
        DECLSPEC_XFGVIRT(IVWSound, SetDistanceFactor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDistanceFactor )( 
            IVWSound * This,
            /* [in] */ float flFactor);
        
        DECLSPEC_XFGVIRT(IVWSound, SetRolloffFactor)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRolloffFactor )( 
            IVWSound * This,
            /* [in] */ float flFactor);
        
        END_INTERFACE
    } IVWSoundVtbl;

    interface IVWSound
    {
        CONST_VTBL struct IVWSoundVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWSound_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWSound_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWSound_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWSound_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWSound_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWSound_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWSound_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWSound_Initialize(This,pClient)	\
    ( (This)->lpVtbl -> Initialize(This,pClient) ) 

#define IVWSound_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWSound_SetCooperativeLevel(This,hWnd,nLevel)	\
    ( (This)->lpVtbl -> SetCooperativeLevel(This,hWnd,nLevel) ) 

#define IVWSound_Create(This,bstrFile,ppBuffer)	\
    ( (This)->lpVtbl -> Create(This,bstrFile,ppBuffer) ) 

#define IVWSound_Create3D(This,bstrFile,pp3DBuffer)	\
    ( (This)->lpVtbl -> Create3D(This,bstrFile,pp3DBuffer) ) 

#define IVWSound_Reload(This,bstrFile,hBuffer)	\
    ( (This)->lpVtbl -> Reload(This,bstrFile,hBuffer) ) 

#define IVWSound_Play(This,pBuffer,bLoop)	\
    ( (This)->lpVtbl -> Play(This,pBuffer,bLoop) ) 

#define IVWSound_Stop(This,pBuffer)	\
    ( (This)->lpVtbl -> Stop(This,pBuffer) ) 

#define IVWSound_SetPosition(This,fPosX,fPosY,fPosZ)	\
    ( (This)->lpVtbl -> SetPosition(This,fPosX,fPosY,fPosZ) ) 

#define IVWSound_SetOrientation(This,fDirX,fDirY,fDirZ,fUpX,fUpY,fUpZ)	\
    ( (This)->lpVtbl -> SetOrientation(This,fDirX,fDirY,fDirZ,fUpX,fUpY,fUpZ) ) 

#define IVWSound_SetDistanceFactor(This,flFactor)	\
    ( (This)->lpVtbl -> SetDistanceFactor(This,flFactor) ) 

#define IVWSound_SetRolloffFactor(This,flFactor)	\
    ( (This)->lpVtbl -> SetRolloffFactor(This,flFactor) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWSound_INTERFACE_DEFINED__ */


#ifndef __ISoundBuffer_INTERFACE_DEFINED__
#define __ISoundBuffer_INTERFACE_DEFINED__

/* interface ISoundBuffer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISoundBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96732827-482A-11D0-89AB-00A0C9054129")
    ISoundBuffer : public IDispatch
    {
    public:
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IVWSound *psound,
            /* [in] */ BSTR bstrFile,
            /* [in] */ int nDSHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVolume( 
            /* [in] */ int nVolume) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPan( 
            /* [in] */ int nPan) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFrequency( 
            /* [in] */ int nFrequency) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE Play( 
            /* [in] */ VARIANT_BOOL bLoop) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [retval][out] */ int *pnStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISoundBufferVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISoundBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISoundBuffer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISoundBuffer * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISoundBuffer * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISoundBuffer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISoundBuffer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISoundBuffer * This,
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
        
        DECLSPEC_XFGVIRT(ISoundBuffer, Initialize)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ISoundBuffer * This,
            /* [in] */ IVWSound *psound,
            /* [in] */ BSTR bstrFile,
            /* [in] */ int nDSHandle);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, SetVolume)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVolume )( 
            ISoundBuffer * This,
            /* [in] */ int nVolume);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, SetPan)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPan )( 
            ISoundBuffer * This,
            /* [in] */ int nPan);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, SetFrequency)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFrequency )( 
            ISoundBuffer * This,
            /* [in] */ int nFrequency);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, Play)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Play )( 
            ISoundBuffer * This,
            /* [in] */ VARIANT_BOOL bLoop);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, Stop)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            ISoundBuffer * This);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, GetStatus)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ISoundBuffer * This,
            /* [retval][out] */ int *pnStatus);
        
        END_INTERFACE
    } ISoundBufferVtbl;

    interface ISoundBuffer
    {
        CONST_VTBL struct ISoundBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISoundBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISoundBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISoundBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISoundBuffer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISoundBuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISoundBuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISoundBuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISoundBuffer_Initialize(This,psound,bstrFile,nDSHandle)	\
    ( (This)->lpVtbl -> Initialize(This,psound,bstrFile,nDSHandle) ) 

#define ISoundBuffer_SetVolume(This,nVolume)	\
    ( (This)->lpVtbl -> SetVolume(This,nVolume) ) 

#define ISoundBuffer_SetPan(This,nPan)	\
    ( (This)->lpVtbl -> SetPan(This,nPan) ) 

#define ISoundBuffer_SetFrequency(This,nFrequency)	\
    ( (This)->lpVtbl -> SetFrequency(This,nFrequency) ) 

#define ISoundBuffer_Play(This,bLoop)	\
    ( (This)->lpVtbl -> Play(This,bLoop) ) 

#define ISoundBuffer_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ISoundBuffer_GetStatus(This,pnStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,pnStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISoundBuffer_INTERFACE_DEFINED__ */


#ifndef __ISound3DBuffer_INTERFACE_DEFINED__
#define __ISound3DBuffer_INTERFACE_DEFINED__

/* interface ISound3DBuffer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISound3DBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9673282B-482A-11D0-89AB-00A0C9054129")
    ISound3DBuffer : public ISoundBuffer
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetConeAngles( 
            /* [in] */ int nInsideCone,
            /* [in] */ int nOutsideCone) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetConeOrientation( 
            /* [in] */ IVector *pvector) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetConeOutsideVolume( 
            /* [in] */ int nVolume) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMaxDistance( 
            /* [in] */ float flDistance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMinDistance( 
            /* [in] */ float flDistance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ IVector *pvector) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISound3DBufferVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISound3DBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISound3DBuffer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISound3DBuffer * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISound3DBuffer * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISound3DBuffer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISound3DBuffer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISound3DBuffer * This,
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
        
        DECLSPEC_XFGVIRT(ISoundBuffer, Initialize)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ISound3DBuffer * This,
            /* [in] */ IVWSound *psound,
            /* [in] */ BSTR bstrFile,
            /* [in] */ int nDSHandle);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, SetVolume)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVolume )( 
            ISound3DBuffer * This,
            /* [in] */ int nVolume);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, SetPan)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPan )( 
            ISound3DBuffer * This,
            /* [in] */ int nPan);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, SetFrequency)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFrequency )( 
            ISound3DBuffer * This,
            /* [in] */ int nFrequency);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, Play)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Play )( 
            ISound3DBuffer * This,
            /* [in] */ VARIANT_BOOL bLoop);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, Stop)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            ISound3DBuffer * This);
        
        DECLSPEC_XFGVIRT(ISoundBuffer, GetStatus)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ISound3DBuffer * This,
            /* [retval][out] */ int *pnStatus);
        
        DECLSPEC_XFGVIRT(ISound3DBuffer, SetConeAngles)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetConeAngles )( 
            ISound3DBuffer * This,
            /* [in] */ int nInsideCone,
            /* [in] */ int nOutsideCone);
        
        DECLSPEC_XFGVIRT(ISound3DBuffer, SetConeOrientation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetConeOrientation )( 
            ISound3DBuffer * This,
            /* [in] */ IVector *pvector);
        
        DECLSPEC_XFGVIRT(ISound3DBuffer, SetConeOutsideVolume)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetConeOutsideVolume )( 
            ISound3DBuffer * This,
            /* [in] */ int nVolume);
        
        DECLSPEC_XFGVIRT(ISound3DBuffer, SetMaxDistance)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMaxDistance )( 
            ISound3DBuffer * This,
            /* [in] */ float flDistance);
        
        DECLSPEC_XFGVIRT(ISound3DBuffer, SetMinDistance)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMinDistance )( 
            ISound3DBuffer * This,
            /* [in] */ float flDistance);
        
        DECLSPEC_XFGVIRT(ISound3DBuffer, SetPosition)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            ISound3DBuffer * This,
            /* [in] */ IVector *pvector);
        
        END_INTERFACE
    } ISound3DBufferVtbl;

    interface ISound3DBuffer
    {
        CONST_VTBL struct ISound3DBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISound3DBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISound3DBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISound3DBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISound3DBuffer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISound3DBuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISound3DBuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISound3DBuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISound3DBuffer_Initialize(This,psound,bstrFile,nDSHandle)	\
    ( (This)->lpVtbl -> Initialize(This,psound,bstrFile,nDSHandle) ) 

#define ISound3DBuffer_SetVolume(This,nVolume)	\
    ( (This)->lpVtbl -> SetVolume(This,nVolume) ) 

#define ISound3DBuffer_SetPan(This,nPan)	\
    ( (This)->lpVtbl -> SetPan(This,nPan) ) 

#define ISound3DBuffer_SetFrequency(This,nFrequency)	\
    ( (This)->lpVtbl -> SetFrequency(This,nFrequency) ) 

#define ISound3DBuffer_Play(This,bLoop)	\
    ( (This)->lpVtbl -> Play(This,bLoop) ) 

#define ISound3DBuffer_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ISound3DBuffer_GetStatus(This,pnStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,pnStatus) ) 


#define ISound3DBuffer_SetConeAngles(This,nInsideCone,nOutsideCone)	\
    ( (This)->lpVtbl -> SetConeAngles(This,nInsideCone,nOutsideCone) ) 

#define ISound3DBuffer_SetConeOrientation(This,pvector)	\
    ( (This)->lpVtbl -> SetConeOrientation(This,pvector) ) 

#define ISound3DBuffer_SetConeOutsideVolume(This,nVolume)	\
    ( (This)->lpVtbl -> SetConeOutsideVolume(This,nVolume) ) 

#define ISound3DBuffer_SetMaxDistance(This,flDistance)	\
    ( (This)->lpVtbl -> SetMaxDistance(This,flDistance) ) 

#define ISound3DBuffer_SetMinDistance(This,flDistance)	\
    ( (This)->lpVtbl -> SetMinDistance(This,flDistance) ) 

#define ISound3DBuffer_SetPosition(This,pvector)	\
    ( (This)->lpVtbl -> SetPosition(This,pvector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISound3DBuffer_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


