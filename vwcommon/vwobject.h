

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwobject.idl:
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

#ifndef __vwobject_h__
#define __vwobject_h__

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

#ifndef __IWorld_FWD_DEFINED__
#define __IWorld_FWD_DEFINED__
typedef interface IWorld IWorld;

#endif 	/* __IWorld_FWD_DEFINED__ */


#ifndef __IVWObjectSite_FWD_DEFINED__
#define __IVWObjectSite_FWD_DEFINED__
typedef interface IVWObjectSite IVWObjectSite;

#endif 	/* __IVWObjectSite_FWD_DEFINED__ */


#ifndef __IVWDispatch_FWD_DEFINED__
#define __IVWDispatch_FWD_DEFINED__
typedef interface IVWDispatch IVWDispatch;

#endif 	/* __IVWDispatch_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwcomm.h"
#include "vwprop.h"
#include "avprof.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_vwobject_0000_0000 */
/* [local] */ 









#define NULL_OBJECT						0
#define WORLD_OBJECT						1
#define MARSHALL_BYVALUE						0x00000001
#define MARSHALL_BYREF						0x00000002
#define MARSHALL_BYGUID						0x00000010
#define MARSHALL_BYID						0x00000020
#define MARSHALL_TODISK						0x00000100
#define MARSHALL_TONETWORK					0x00000200
#define MARSHALL_TOMEMORY					0x00000400
#define MARSHALL_BYVALUEMASK					0xFFFFFFF0
#define MARSHALL_IDMASK						0xFFFFFF0F
#define MARSHALL_LOCATIONMASK				0xFFFFF0FF
#define MARSHALLDEST(a,b) ((a & MARSHALL_IDMASK) | b)
#define MARSHALLREF(a,b) ((a & MARSHALL_BYVALUEMASK) | b)
#define MARSHALLLOCATION(a,b) ((a & MARSHALL_LOCATIONMASK) | b)
#define EXTRACTREF(a) (a & ~(MARSHALL_BYVALUEMASK))
#define EXTRACTID(a) (a & ~(MARSHALL_IDMASK))
#define EXTRACTLOCATION(a) (a & ~(MARSHALL_LOCATIONMASK))
#define METHOD_CLIENT						0x00000001
#define METHOD_SERVER						0x00000002
#define METHOD_SYNC							0x00000010
#define METHOD_INLINE						0x00000100
#define METHOD_PROPERTYPUT					0x00001000
#define METHOD_PROPERTYGET					0x00002000
#define METHOD_CLIENTSERVERMASK				0xFFFFFFF0
#define METHOD_SYNCMASK						0xFFFFFF0F
#define METHOD_INLINEMASK					0xFFFFF0FF
#define METHOD_INVOKEMASK					0xFFFF0FFF
#define METHODCLIENTSERVER(a,b) ((a & METHOD_CLIENTSERVERMASK) | b)
#define METHODSYNC(a,b) ((a & METHOD_SYNCMASK) | b)
#define METHODINLINE(a,b) ((a & METHOD_INLINEMASK) | b)
#define METHODINVOKE(a,b) ((a & METHOD_INVOKEMASK) | b)
#define MODULE_CLIENT						0x00000001
#define MODULE_SERVER						0x00000002
#define MODULE_LOCAL							0x00000010
#define MODULE_CLIENTSERVERMASK				0xFFFFFFF0
#define MODULE_LOCALMASK						0xFFFFFF0F
#define MODULECLIENTSERVER(a,b) ((a & MODULE_CLIENTSERVERMASK) | b)
#define MODULELOCAL(a,b) ((a & MODULE_LOCALMASK) | b)
#define VWOBJECT_S_NOTREMOTED			MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x0201)
#define VWOBJECT_S_NOTINSTANCED			MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x0202)
#define VWOBJECT_S_ALREADYDISCONNECTED	MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x0203)
#define VWOBJECT_E_INVOKEEXCEPTION		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0201)
#define VWOBJECT_E_FILEEXCEPTION			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0202)
#define VWOBJECT_E_FILEREADERROR			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0203)
#define VWOBJECT_E_INVALIDMODULE			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0204)
#define VWOBJECT_E_COLLECTIONERROR		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0205)
#define VWOBJECT_E_WRONGPROPERTYTYPE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0206)
#define VWOBJECT_E_UNKNOWNTYPE			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0207)
#define VWOBJECT_E_INVALIDPROPERTYLIST	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0208)
#define VWOBJECT_E_PROPERTYEXISTS		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0209)
#define VWOBJECT_E_INVALIDPROPERTYMAP	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x020A)
#define VWOBJECT_E_PROPERTYNOTEXIST		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x020C)
#define VWOBJECT_E_METHODEXISTS			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x020D)
#define VWOBJECT_E_METHODNOTEXIST		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x020F)
#define VWOBJECT_E_INVALIDMETHOD			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0210)
#define VWOBJECT_E_INVALIDMETHODMAP		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0211)
#define VWOBJECT_E_CONNECTIONERROR		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0212)
#define VWOBJECT_E_INVALIDCREATUREMAP	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0213)
#define VWOBJECT_E_EXEMPLAREXISTS		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0214)
#define VWOBJECT_E_INVALIDOBJECT			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0215)
#define VWOBJECT_E_EXEMPLARNOTEXIST		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0216)
#define VWOBJECT_E_INVALIDEXEMPLARMAP	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0217)
#define VWOBJECT_E_CREATUREEXISTS		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0218)
#define VWOBJECT_E_INVALIDTOOLMAP		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0219)
#define VWOBJECT_E_INVALIDMODULEMAP		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x021A)
#define VWOBJECT_E_STUBOBJECT			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x021B)
#define VWOBJECT_E_UNKNOWNPROPERTYTYPE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x021C)
#define VWOBJECT_E_UNKNOWNMESSAGETYPE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x021D)
#define VWOBJECT_E_MODULEEXISTS			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x021E)
#define VWOBJECT_E_MODULENOTEXIST		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x021F)
#define VWOBJECT_E_TOOLEXISTS			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0220)
#define VWOBJECT_E_TOOLNOTEXIST			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0221)
#define VWOBJECT_E_INVALIDMODULETYPE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0222)
#define VWOBJECT_E_UNKNOWNPROGID			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0223)
#define VWOBJECT_E_INVALIDCONNECTION		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0224)
#define VWOBJECT_E_INTERFACENOTSUPPORTED	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0225)
#define VWOBJECT_E_INVALIDTRACELEVEL		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0226)
#define VWOBJECT_E_COLLECTIONLEVEL		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0227)
#define VWOBJECT_E_PERMISSION_DENIED		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0228)
#define VWOBJECT_E_SYNTAX_ERROR			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0229)
#define VWOBJECT_E_UNKNOWNTRACECOMPONENT	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x022A)
#define VWOBJECT_E_ALREADYCONNECTED		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x022B)
#define VWOBJECT_E_OBJECTNOTFOUND		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x022C)
#define VWOBJECT_E_UNKNOWNCLSIDINDEX		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x022D)
#define VWOBJECT_E_INVALIDLISTINDEX		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x022E)
#define VWOBJECT_E_EMPTYPROPERTYLIST		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x022F)
#define VWOBJECT_E_TYPE_MISMATCH			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0230)
#define VWOBJECT_E_INVALIDDEFAULTSCRIPT	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0231)
#define VWOBJECT_E_INVALIDWORLD			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0232)
#define VWOBJECT_E_INVALIDBITSTATE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0233)
#define VWOBJECT_E_EVENTABORTED			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0234)
#define VWOBJECT_E_EXEMPLARNOTFERTILE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0235)
#define VWOBJECT_E_INVALIDPROPERTYNAME	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0236)
#define VWOBJECT_E_INVALIDEXEMPLARTYPE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0237)
#define VWOBJECT_E_INVALIDINSTANCENAME	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0238)
#define VWOBJECT_E_INVALIDSCRIPTENGINE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0239)
#define VWOBJECT_E_UNKNOWNSCRIPTERROR	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x023a)
#define VWOBJECT_E_INVALIDCONTAINER		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x023b)
#define VWOBJECT_E_AVATARNOTEXIST		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x023c)
#define VWOBJECT_E_INVALIDSECURITY		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x023d)
#define VWOBJECT_E_ONLYRECONNECTFROMCLIENT		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x023e)
#define VWOBJECT_E_OBJECTNOTEXEMPLAR		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x023f)
#define VWOBJECT_E_INSTANCENOTCLONEABLE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0240)
#define VWOBJECT_E_EXEMPLARNOTCLONEABLE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0241)
#define VWOBJECT_E_INVALIDURLFORMAT		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0242)
#define VWOBJECT_E_INVALIDDESTINATION	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0243)
#define VWOBJECT_E_ONLYSERVERSIDE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0244)
#define VWOBJECT_E_INVALIDPARENT			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0245)
#define VWOBJECT_E_INVALIDWORLDREGISTRY	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0246)
#define VWOBJECT_E_PROCESSMSGEXCEPTION	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0247)
#define VWOBJECT_E_INVALIDBSTRSIZE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0248)
#define VWOBJECT_E_ALREADYDESTROYED		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0249)
#define VWOBJECT_E_INVALIDEXEMPLAR		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x024a)
#define VWOBJECT_E_INVALIDPASSWORD		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x024b)
#define VWOBJECT_E_CANTDESTROYUSER		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x024c)
#define VWOBJECT_E_CANTDESTROYCONTAINER	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x024d)
#define VWOBJECT_E_CANTDESTROYROOM		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x024e)
#define VWOBJECT_E_INVALIDCONTENTPATH	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x024f)
#define VWOBJECT_E_INVALIDAVATARGRAPHICSPATH	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0250)
#define VWOBJECT_E_INVALIDAVATARPATH		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0251)
#define VWOBJECT_E_INVALIDPROFILE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0252)
#define VWOBJECT_E_INVALIDHELPPATH		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0253)
#define VWOBJECT_E_INVALIDWORLDPATH		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0254)
#define VWOBJECT_E_CANTDESTROYAVATAR		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0255)
#define VWOBJECT_E_INVALIDDSURL			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0256)
#define VWOBJECT_E_NOTCLIENTMODULE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0257)
#define VWOBJECT_E_NOTSERVERMODULE		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0258)
#define VWOBJECT_E_NOTSAFEFORSCRIPTING	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0259)
#define VWOBJECT_E_INVALIDPROFILEVERSION	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x025a)
#define VWOBJECT_E_INVALIDCLIENTVERSION	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x025b)
#define VWOBJECT_E_SCRIPTNOTFOUND		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x025c)
#define VWOBJECT_E_COMPONENTNOTFOUND		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x025d)
#define VWOBJECT_E_INVALIDONACCESSMETHOD	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x025e)
#define VWOBJECT_E_EXTERNALCALLONLY		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x025f)
#define VWOBJECT_E_EXCEEDEDOBJECTQUOTA	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0260)
#define VWOBJECT_E_CANTDESTROYEXEMPLAR	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0261)
#define VWOBJECT_E_INVALIDMETHODNAME		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0262)
#define VWOBJECT_E_INVALIDWORLDNAME		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0263)
#define VWOBJECT_E_INVALIDAVATARNAME		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0264)
#define VWOBJECT_E_INVALIDNAME			MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0265)
#define VWOBJECT_E_NORECONNECTTOSAMEWORLD	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0266)
#define VWOBJECT_E_INVALIDPERMISSIONS	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0267)
#define VWOBJECT_E_INVALIDDIRECTORYSERVICEPAGE	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0268)
#define VWOBJECT_E_PARSESCRIPTERROR		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0269)
#define VWOBJECT_E_MODULESHUTDOWN		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x026A)
#define VWOBJECT_E_CANTCREATEAVATAR		MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x026B)
#define VWOBJECT_E_RUNTIMESCRIPTERROR	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x026C)
#define VWOBJECT_E_UNAUTHENTICATEDCONNECTION	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x026D)
#define VWOBJECT_E_COPYINGNOTSUPPORTED	MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x026E)


extern RPC_IF_HANDLE __MIDL_itf_vwobject_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwobject_0000_0000_v0_0_s_ifspec;

#ifndef __IWorld_INTERFACE_DEFINED__
#define __IWorld_INTERFACE_DEFINED__

/* interface IWorld */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_WORLD_CONNECTINT	( 101 )

#define	DISPID_WORLD_CREATEAVATAR	( 102 )

#define	DISPID_WORLD_DISCONNECTINT	( 103 )

#define	DISPID_WORLD_SAVECHECKPOINT	( 104 )

#define	DISPID_WORLD_CREATEINSTANCEINT	( 105 )

#define	DISPID_WORLD_CREATEEXEMPLARINT	( 108 )

#define	DISPID_WORLD_DESTROYOBJECT	( 110 )

#define	DISPID_WORLD_CONVERTINSTANCETOEXEMPLAR	( 112 )

#define	DISPID_WORLD_CONVERTEXEMPLARTOINSTANCE	( 113 )

#define	DISPID_WORLD_CREATECOMMODULE	( 114 )

#define	DISPID_WORLD_CREATESCRIPTMODULE	( 116 )

#define	DISPID_WORLD_REMOVEMODULE	( 117 )

#define	DISPID_WORLD_SYNCHRONIZE	( 118 )

#define	DISPID_WORLD_ENABLELOGGING	( 119 )

#define	DISPID_WORLD_CREATEOBJECTINT	( 120 )

#define	DISPID_WORLD_DELETEOBJECTINT	( 121 )

#define	DISPID_WORLD_CREATECOMMODULEEX	( 122 )

#define	DISPID_WORLD_CREATESCRIPTMODULEEX	( 123 )

#define	DISPID_WORLD_CLONEINSTANCE	( 124 )

#define	DISPID_WORLD_REGISTERINTEREST	( 125 )

#define	DISPID_WORLD_UNREGISTERINTEREST	( 126 )

#define	DISPID_WORLD_SAVETOSCRIPT	( 128 )

#define	DISPID_WORLD_DISCONNECTAVATAR	( 129 )

#define	DISPID_WORLD_DISCONNECTCLIENT	( 130 )

#define	DISPID_WORLD_SAVECHECKPOINTAS	( 131 )

#define	DISPID_WORLD_UPDATEGLOBALPATHS	( 132 )

#define	CP_WIZARD	( 1 )

#define	CP_OWNER	( 2 )

#define	CP_WORLDOWNER	( 4 )

#define	CP_CALLER	( 8 )


EXTERN_C const IID IID_IWorld;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9854-A417-11CF-9BF0-0080C7A56A8A")
    IWorld : public IObjectProperty
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE CreateAvatar( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [optional][in] */ VARIANT bstrGUID,
            /* [retval][out] */ BSTR *pbstrNewName) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ConnectInt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ VARIANT varProfile,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE DisconnectInt( void) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE DisconnectAvatar( 
            /* [in] */ IThing *pAvatar) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE DisconnectClient( 
            /* [in] */ IThing *pAvatar) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE Reconnect( 
            /* [in] */ BSTR bstrURL,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ReconnectExt( 
            /* [in] */ BSTR bstrURL,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ActivateRoom( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE DeactivateRoom( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Synchronize( void) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Database( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE OpenDatabase( 
            /* [in] */ BSTR bstr,
            /* [in] */ VARIANT_BOOL bCreate,
            /* [in] */ VARIANT_BOOL bOverwrite) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE SaveDatabase( void) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE SaveDatabaseAs( 
            BSTR bstrNewName) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE SaveToScript( 
            /* [in] */ BSTR bstrFilename) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ProcessLogRecord( 
            /* [in] */ IUnMarshallBuffer *pbuffer) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE EnableLogging( 
            /* [in] */ VARIANT_BOOL boolval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsLoggingEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateObjectInt( 
            /* [in] */ long lval,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE DeleteObjectInt( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateInstance( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT varExemplar,
            /* [optional][in] */ VARIANT varContainer,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateInstanceExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT varExemplar,
            /* [in] */ IThing *pthingContainer,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateInstanceInt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthingExemplar,
            /* [in] */ IThing *pthingContainer,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateExemplar( 
            /* [in] */ BSTR bstrType,
            /* [in] */ VARIANT varExemplar,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateExemplarEx( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in] */ VARIANT varExemplar,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateExemplarExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in] */ VARIANT varExemplar,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateExemplarInt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in] */ IThing *pthingExemplar,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateRootExemplar( 
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE CloneInstance( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthingSource,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE DestroyObject( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE DestroyObjectByID( 
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ObjectByName( 
            /* [in] */ BSTR bstr,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_ObjectByID( 
            /* [in] */ long lval,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Exemplar( 
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValidExemplar( 
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_Exemplars( 
            /* [retval][out] */ IPropertyMap **pppropertymap) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateObjectProperty( 
            /* [in] */ BSTR bstrProgID,
            /* [retval][out] */ IObjectProperty **ppproperty) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateObjectPropertyExt( 
            /* [in] */ REFCLSID clsid,
            /* [in] */ IUnknown *punk,
            /* [retval][out] */ IObjectProperty **ppproperty) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateMethodByDispID( 
            /* [in] */ long lFlags,
            /* [in] */ VARIANT varModule,
            /* [in] */ DISPID dispid,
            /* [retval][out] */ IMethod **ppmethod) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateMethod( 
            /* [in] */ long lFlags,
            /* [in] */ VARIANT varModule,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IMethod **ppmethod) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateInlineMethod( 
            /* [in] */ long lFlags,
            /* [in] */ BSTR bstrLanguage,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrCode,
            /* [retval][out] */ IMethod **ppmethod) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateCOMModule( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ long lFlags,
            /* [retval][out] */ IModule **ppmodule) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE CreateScriptModule( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrScriptPath,
            /* [in] */ long lFlags,
            /* [retval][out] */ IModule **ppmodule) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateCOMModuleEx( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ long lFlags,
            /* [retval][out] */ IModule **ppmodule) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateScriptModuleEx( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrScriptPath,
            /* [in] */ long lFlags,
            /* [retval][out] */ IModule **ppmodule) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveModule( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Module( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IModule **ppmodule) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsValidModule( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_Modules( 
            /* [retval][out] */ IPropertyMap **pppropmap) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateTool( 
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrProgID,
            /* [retval][out] */ IUnknown **ppunk) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CreateToolFromInterface( 
            /* [in] */ BSTR bstrName,
            /* [in] */ IUnknown *punk) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CreateToolExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ REFCLSID clsid,
            /* [retval][out] */ IUnknown **ppunk) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE RemoveTool( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IsValidTool( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_Tool( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IUnknown **ppunk) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ToolExt( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IUnknown **ppunk) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Tools( 
            /* [retval][out] */ IPropertyMap **pppropmap) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InitializeTools( 
            /* [in] */ IPropertyMap *ppropmap) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE InitializeConnection( 
            /* [in] */ IVWCommConnection *pvwcommconnection) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE DisconnectConnection( 
            /* [in] */ IVWCommConnection *pvwcommconnection) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE OnOpenWorld( 
            /* [in] */ VARIANT_BOOL bPersist) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE OnCreateWorld( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ProcessMessage( 
            /* [in] */ IVWCommMessage *pmessage) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ProcessMessageExt( 
            /* [in] */ unsigned char ch,
            /* [in] */ IUnMarshallBuffer *pUBuffer,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Connection( 
            /* [retval][out] */ IVWCommConnection **ppvwcommconnection) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Connection( 
            /* [in] */ IVWCommConnection *pvwcommconnection) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ShouldExecute( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ShouldExecuteSync( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ShouldRemote( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ShouldRemoteSync( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ShouldNotify( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_LocalMode( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_LocalMode( 
            /* [in] */ VARIANT_BOOL boolval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_FreezeEvents( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_FreezeEvents( 
            /* [in] */ VARIANT_BOOL boolval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EnableSecurity( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE EnableTrace( 
            /* [in] */ VARIANT_BOOL boolval) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_IsTraceEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_TraceLevel( 
            /* [in] */ BSTR bstr,
            /* [retval][out] */ int *ival) = 0;
        
        virtual /* [helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_TraceLevel( 
            /* [in] */ BSTR bstr,
            /* [in] */ int ival) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE RemoveTraceLevel( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Trace( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE Report( 
            /* [in] */ BSTR bstr,
            /* [in] */ long lType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Print( 
            /* [in] */ VARIANT varAnything) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Format( 
            /* [in] */ BSTR bstrIn,
            /* [in] */ IPropertyList *pObjects,
            /* [in] */ IThing *pPOV,
            /* [retval][out] */ BSTR *bstrOut) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FormatSentences( 
            /* [in] */ BSTR bstrIn,
            /* [in] */ IPropertyList *pObjects,
            /* [in] */ IThing *pPOV,
            /* [retval][out] */ BSTR *bstrOut) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ServerSide( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ServerSide( 
            /* [in] */ VARIANT_BOOL boolval) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Avatar( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_AvatarByGUID( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Global( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Owner( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_User( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_User( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_This( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_This( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Caller( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Caller( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_Super( 
            /* [retval][out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_Super( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_SecurityContext( 
            /* [retval][out] */ IPropertySecurity **ppSecurity) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_SecurityContext( 
            /* [in] */ IPropertySecurity *pSecurity) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_IsInPropChange( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_IsInPropChange( 
            /* [in] */ VARIANT_BOOL boolval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AbortEvent( void) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_IsEventAborted( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_IsEventAborted( 
            /* [in] */ VARIANT_BOOL boolval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsExemplar( 
            /* [in] */ IThing *pthing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsAvatar( 
            /* [in] */ IThing *pthing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsRoom( 
            /* [in] */ IThing *pthing,
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE LockWorld( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE UnlockWorld( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE NotifyUserConnect( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE NotifyUserDisconnect( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FireUIEvent( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [optional][in] */ VARIANT varArg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowHTML( 
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrHtml,
            /* [defaultvalue][optional][in] */ VARIANT cx,
            /* [defaultvalue][optional][in] */ VARIANT cy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowHTMLEx( 
            /* [in] */ BSTR bstrWinName,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrHtml,
            /* [in] */ VARIANT dispArg,
            /* [defaultvalue][optional][in] */ VARIANT x,
            /* [defaultvalue][optional][in] */ VARIANT y,
            /* [defaultvalue][optional][in] */ VARIANT cx,
            /* [defaultvalue][optional][in] */ VARIANT cy) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ShowHTMLExt( 
            /* [in] */ BSTR bstrWinName,
            /* [in] */ BSTR bstrHtml,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowURL( 
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrUrl,
            /* [defaultvalue][optional][in] */ VARIANT cx,
            /* [defaultvalue][optional][in] */ VARIANT cy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowURLEx( 
            /* [in] */ BSTR bstrWinName,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ VARIANT dispArg,
            /* [defaultvalue][optional][in] */ VARIANT x,
            /* [defaultvalue][optional][in] */ VARIANT y,
            /* [defaultvalue][optional][in] */ VARIANT cx,
            /* [defaultvalue][optional][in] */ VARIANT cy) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ShowURLExt( 
            /* [in] */ BSTR bstrWinName,
            /* [in] */ VARIANT_BOOL bPopup,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE NotifyInvokeMethod( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstr,
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE NotifyPropertyChanged( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstr,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE NotifyMethodChanged( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstr,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE NotifyModuleChanged( 
            /* [in] */ BSTR bstr,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendContainer( 
            /* [in] */ long lval,
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendContents( 
            /* [in] */ long lval,
            /* [in] */ IThing *pthing,
            /* [in] */ VARIANT_BOOL bForceOpen) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendWorld( 
            /* [in] */ long lval) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendExemplar( 
            /* [in] */ long lval,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendThingByID( 
            /* [in] */ long lval,
            /* [in] */ long lID) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendThing( 
            /* [in] */ long lval,
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendModule( 
            /* [in] */ long lval,
            /* [in] */ IModule *pmodule,
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendWorldCommand( 
            /* [in] */ VARIANT_BOOL bReply,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendThingCommand( 
            /* [in] */ long lFlags,
            /* [in] */ IThing *pthing,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendObjectPropertyCommand( 
            /* [in] */ long lFlags,
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendWorldCommandExt( 
            /* [in] */ VARIANT_BOOL bReply,
            /* [in] */ VARIANT_BOOL bSync,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendThingCommandExt( 
            /* [in] */ VARIANT_BOOL bReply,
            /* [in] */ VARIANT_BOOL bSync,
            /* [in] */ long lFlags,
            /* [in] */ IThing *pthing,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendObjectPropertyCommandExt( 
            /* [in] */ VARIANT_BOOL bReply,
            /* [in] */ VARIANT_BOOL bSync,
            /* [in] */ long lFlags,
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendModuleCommand( 
            /* [in] */ IModule *pmodule,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE SendMethodCommand( 
            /* [in] */ IMethod *pmethod,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE LogThingCommand( 
            /* [in] */ IThing *pthing,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE LogWorldCommand( 
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE WriteCommandHeader( 
            /* [in] */ IMarshallBuffer *pBuffer,
            /* [in] */ unsigned char ucReply,
            /* [in] */ unsigned char ucCommand) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE WriteCommandCallstack( 
            /* [in] */ IMarshallBuffer *pBuffer) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE RegisterInterest( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE UnregisterInterest( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE MarshallThing( 
            /* [in] */ IThing *pthing,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE UnMarshallThing( 
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out] */ IThing **ppthing) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE MarshallProperty( 
            /* [in] */ VARIANT var,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE UnMarshallProperty( 
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE MarshallObjectProperty( 
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ long lHint,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE UnMarshallObjectProperty( 
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out] */ IObjectProperty **ppprop) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE MarshallModule( 
            /* [in] */ IModule *pmodule,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE UnMarshallModule( 
            /* [in] */ REFCLSID clsid,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out] */ IModule **ppmodule) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE MarshallDISPPARAMS( 
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ IMarshallBuffer *pmarshallbuffer,
            /* [in] */ DWORD dwOptions) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE UnMarshallDISPPARAMS( 
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out][in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE MarshallPropertyToScript( 
            /* [in] */ VARIANT var,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckPolicy( 
            /* [in] */ IThing *pThing,
            /* [in] */ unsigned long lFlags,
            /* [optional][in] */ VARIANT var,
            /* [retval][out] */ VARIANT_BOOL *pbAccessOk) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE CheckPolicyExt( 
            /* [in] */ IThing *pThing,
            /* [in] */ unsigned long lFlags,
            /* [optional][in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ValidateProperty( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ValidateDISPPARAMS( 
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ValidateObjectSafety( 
            /* [in] */ REFCLSID clsid,
            /* [in] */ IUnknown *punk,
            /* [in] */ DWORD dwOptions) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ValidatePropertyName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ValidateMethodName( 
            /* [in] */ BSTR bstrName,
            /* [in] */ long psbits,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ValidateInstanceName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ValidateExemplarType( 
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ValidateWorldName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE ValidateAvatarName( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ValidatePropertyNameExt( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ValidateMethodNameExt( 
            /* [in] */ BSTR bstrName,
            /* [in] */ long psbits) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ValidateInstanceNameExt( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ValidateExemplarTypeExt( 
            /* [in] */ BSTR bstrType) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ValidateWorldNameExt( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE ValidateAvatarNameExt( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE CloneProperty( 
            /* [in] */ VARIANT source,
            /* [retval][out] */ VARIANT *pDest) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE DumpProperty( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE AddCLSIDToTable( 
            /* [in] */ REFCLSID clsid) = 0;
        
        virtual /* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE UpdateGlobalPaths( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWorldVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWorld * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWorld * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWorld * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWorld * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWorld * This,
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
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IWorld * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IWorld * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IWorld * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IWorld * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IWorld * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IWorld * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IWorld * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IWorld * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IWorld * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IWorld * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IWorld * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IWorld * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IWorld * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IWorld * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IWorld * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IWorld * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IWorld * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IWorld * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IWorld, Connect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, Disconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IWorld, CreateAvatar)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateAvatar )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [optional][in] */ VARIANT bstrGUID,
            /* [retval][out] */ BSTR *pbstrNewName);
        
        DECLSPEC_XFGVIRT(IWorld, ConnectInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ConnectInt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ VARIANT varProfile,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, DisconnectInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *DisconnectInt )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IWorld, DisconnectAvatar)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *DisconnectAvatar )( 
            IWorld * This,
            /* [in] */ IThing *pAvatar);
        
        DECLSPEC_XFGVIRT(IWorld, DisconnectClient)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *DisconnectClient )( 
            IWorld * This,
            /* [in] */ IThing *pAvatar);
        
        DECLSPEC_XFGVIRT(IWorld, Reconnect)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Reconnect )( 
            IWorld * This,
            /* [in] */ BSTR bstrURL,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword);
        
        DECLSPEC_XFGVIRT(IWorld, ReconnectExt)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ReconnectExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrURL,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword);
        
        DECLSPEC_XFGVIRT(IWorld, ActivateRoom)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ActivateRoom )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, DeactivateRoom)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *DeactivateRoom )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, Synchronize)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Synchronize )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IWorld, get_Database)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Database )( 
            IWorld * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IWorld, OpenDatabase)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *OpenDatabase )( 
            IWorld * This,
            /* [in] */ BSTR bstr,
            /* [in] */ VARIANT_BOOL bCreate,
            /* [in] */ VARIANT_BOOL bOverwrite);
        
        DECLSPEC_XFGVIRT(IWorld, SaveDatabase)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveDatabase )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IWorld, SaveDatabaseAs)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveDatabaseAs )( 
            IWorld * This,
            BSTR bstrNewName);
        
        DECLSPEC_XFGVIRT(IWorld, SaveToScript)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveToScript )( 
            IWorld * This,
            /* [in] */ BSTR bstrFilename);
        
        DECLSPEC_XFGVIRT(IWorld, ProcessLogRecord)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ProcessLogRecord )( 
            IWorld * This,
            /* [in] */ IUnMarshallBuffer *pbuffer);
        
        DECLSPEC_XFGVIRT(IWorld, EnableLogging)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnableLogging )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL boolval);
        
        DECLSPEC_XFGVIRT(IWorld, get_IsLoggingEnabled)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLoggingEnabled )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, CreateObjectInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateObjectInt )( 
            IWorld * This,
            /* [in] */ long lval,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, DeleteObjectInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *DeleteObjectInt )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, CreateInstance)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateInstance )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT varExemplar,
            /* [optional][in] */ VARIANT varContainer,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, CreateInstanceExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateInstanceExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT varExemplar,
            /* [in] */ IThing *pthingContainer,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, CreateInstanceInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateInstanceInt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthingExemplar,
            /* [in] */ IThing *pthingContainer,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, CreateExemplar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateExemplar )( 
            IWorld * This,
            /* [in] */ BSTR bstrType,
            /* [in] */ VARIANT varExemplar,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, CreateExemplarEx)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateExemplarEx )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in] */ VARIANT varExemplar,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, CreateExemplarExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateExemplarExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in] */ VARIANT varExemplar,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, CreateExemplarInt)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateExemplarInt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrType,
            /* [in] */ IThing *pthingExemplar,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, CreateRootExemplar)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateRootExemplar )( 
            IWorld * This,
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, CloneInstance)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloneInstance )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IThing *pthingSource,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, DestroyObject)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, DestroyObjectByID)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *DestroyObjectByID )( 
            IWorld * This,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IWorld, get_ObjectByName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByName )( 
            IWorld * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_ObjectByID)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByID )( 
            IWorld * This,
            /* [in] */ long lval,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_Exemplar)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exemplar )( 
            IWorld * This,
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, IsValidExemplar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValidExemplar )( 
            IWorld * This,
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_Exemplars)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Exemplars )( 
            IWorld * This,
            /* [retval][out] */ IPropertyMap **pppropertymap);
        
        DECLSPEC_XFGVIRT(IWorld, CreateObjectProperty)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateObjectProperty )( 
            IWorld * This,
            /* [in] */ BSTR bstrProgID,
            /* [retval][out] */ IObjectProperty **ppproperty);
        
        DECLSPEC_XFGVIRT(IWorld, CreateObjectPropertyExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateObjectPropertyExt )( 
            IWorld * This,
            /* [in] */ REFCLSID clsid,
            /* [in] */ IUnknown *punk,
            /* [retval][out] */ IObjectProperty **ppproperty);
        
        DECLSPEC_XFGVIRT(IWorld, CreateMethodByDispID)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateMethodByDispID )( 
            IWorld * This,
            /* [in] */ long lFlags,
            /* [in] */ VARIANT varModule,
            /* [in] */ DISPID dispid,
            /* [retval][out] */ IMethod **ppmethod);
        
        DECLSPEC_XFGVIRT(IWorld, CreateMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateMethod )( 
            IWorld * This,
            /* [in] */ long lFlags,
            /* [in] */ VARIANT varModule,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IMethod **ppmethod);
        
        DECLSPEC_XFGVIRT(IWorld, CreateInlineMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateInlineMethod )( 
            IWorld * This,
            /* [in] */ long lFlags,
            /* [in] */ BSTR bstrLanguage,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrCode,
            /* [retval][out] */ IMethod **ppmethod);
        
        DECLSPEC_XFGVIRT(IWorld, CreateCOMModule)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateCOMModule )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ long lFlags,
            /* [retval][out] */ IModule **ppmodule);
        
        DECLSPEC_XFGVIRT(IWorld, CreateScriptModule)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateScriptModule )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrScriptPath,
            /* [in] */ long lFlags,
            /* [retval][out] */ IModule **ppmodule);
        
        DECLSPEC_XFGVIRT(IWorld, CreateCOMModuleEx)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateCOMModuleEx )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrProgID,
            /* [in] */ long lFlags,
            /* [retval][out] */ IModule **ppmodule);
        
        DECLSPEC_XFGVIRT(IWorld, CreateScriptModuleEx)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateScriptModuleEx )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrScriptPath,
            /* [in] */ long lFlags,
            /* [retval][out] */ IModule **ppmodule);
        
        DECLSPEC_XFGVIRT(IWorld, RemoveModule)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveModule )( 
            IWorld * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IWorld, get_Module)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Module )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IModule **ppmodule);
        
        DECLSPEC_XFGVIRT(IWorld, IsValidModule)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValidModule )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_Modules)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Modules )( 
            IWorld * This,
            /* [retval][out] */ IPropertyMap **pppropmap);
        
        DECLSPEC_XFGVIRT(IWorld, CreateTool)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateTool )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrProgID,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IWorld, CreateToolFromInterface)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CreateToolFromInterface )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ IUnknown *punk);
        
        DECLSPEC_XFGVIRT(IWorld, CreateToolExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CreateToolExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ REFCLSID clsid,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IWorld, RemoveTool)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *RemoveTool )( 
            IWorld * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IWorld, IsValidTool)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *IsValidTool )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_Tool)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Tool )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IWorld, get_ToolExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ToolExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IUnknown **ppunk);
        
        DECLSPEC_XFGVIRT(IWorld, get_Tools)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Tools )( 
            IWorld * This,
            /* [retval][out] */ IPropertyMap **pppropmap);
        
        DECLSPEC_XFGVIRT(IWorld, InitializeTools)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InitializeTools )( 
            IWorld * This,
            /* [in] */ IPropertyMap *ppropmap);
        
        DECLSPEC_XFGVIRT(IWorld, InitializeConnection)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *InitializeConnection )( 
            IWorld * This,
            /* [in] */ IVWCommConnection *pvwcommconnection);
        
        DECLSPEC_XFGVIRT(IWorld, DisconnectConnection)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *DisconnectConnection )( 
            IWorld * This,
            /* [in] */ IVWCommConnection *pvwcommconnection);
        
        DECLSPEC_XFGVIRT(IWorld, OnOpenWorld)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *OnOpenWorld )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL bPersist);
        
        DECLSPEC_XFGVIRT(IWorld, OnCreateWorld)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *OnCreateWorld )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IWorld, ProcessMessage)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ProcessMessage )( 
            IWorld * This,
            /* [in] */ IVWCommMessage *pmessage);
        
        DECLSPEC_XFGVIRT(IWorld, ProcessMessageExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ProcessMessageExt )( 
            IWorld * This,
            /* [in] */ unsigned char ch,
            /* [in] */ IUnMarshallBuffer *pUBuffer,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IWorld, get_Connection)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Connection )( 
            IWorld * This,
            /* [retval][out] */ IVWCommConnection **ppvwcommconnection);
        
        DECLSPEC_XFGVIRT(IWorld, put_Connection)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Connection )( 
            IWorld * This,
            /* [in] */ IVWCommConnection *pvwcommconnection);
        
        DECLSPEC_XFGVIRT(IWorld, get_ShouldExecute)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ShouldExecute )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_ShouldExecuteSync)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ShouldExecuteSync )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_ShouldRemote)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ShouldRemote )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_ShouldRemoteSync)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ShouldRemoteSync )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_ShouldNotify)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ShouldNotify )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_LocalMode)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_LocalMode )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, put_LocalMode)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_LocalMode )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL boolval);
        
        DECLSPEC_XFGVIRT(IWorld, get_FreezeEvents)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_FreezeEvents )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, put_FreezeEvents)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_FreezeEvents )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL boolval);
        
        DECLSPEC_XFGVIRT(IWorld, get_EnableSecurity)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableSecurity )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, EnableTrace)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *EnableTrace )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL boolval);
        
        DECLSPEC_XFGVIRT(IWorld, get_IsTraceEnabled)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_IsTraceEnabled )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_TraceLevel)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_TraceLevel )( 
            IWorld * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ int *ival);
        
        DECLSPEC_XFGVIRT(IWorld, put_TraceLevel)
        /* [helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_TraceLevel )( 
            IWorld * This,
            /* [in] */ BSTR bstr,
            /* [in] */ int ival);
        
        DECLSPEC_XFGVIRT(IWorld, RemoveTraceLevel)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *RemoveTraceLevel )( 
            IWorld * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IWorld, Trace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Trace )( 
            IWorld * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IWorld, Report)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Report )( 
            IWorld * This,
            /* [in] */ BSTR bstr,
            /* [in] */ long lType);
        
        DECLSPEC_XFGVIRT(IWorld, Print)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Print )( 
            IWorld * This,
            /* [in] */ VARIANT varAnything);
        
        DECLSPEC_XFGVIRT(IWorld, Format)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Format )( 
            IWorld * This,
            /* [in] */ BSTR bstrIn,
            /* [in] */ IPropertyList *pObjects,
            /* [in] */ IThing *pPOV,
            /* [retval][out] */ BSTR *bstrOut);
        
        DECLSPEC_XFGVIRT(IWorld, FormatSentences)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FormatSentences )( 
            IWorld * This,
            /* [in] */ BSTR bstrIn,
            /* [in] */ IPropertyList *pObjects,
            /* [in] */ IThing *pPOV,
            /* [retval][out] */ BSTR *bstrOut);
        
        DECLSPEC_XFGVIRT(IWorld, get_IsConnected)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, get_ServerSide)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerSide )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, put_ServerSide)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ServerSide )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL boolval);
        
        DECLSPEC_XFGVIRT(IWorld, get_Avatar)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Avatar )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_AvatarByGUID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_AvatarByGUID )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_Global)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Global )( 
            IWorld * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_Owner)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Owner )( 
            IWorld * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_User)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_User )( 
            IWorld * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, put_User)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_User )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_This)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_This )( 
            IWorld * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, put_This)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_This )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_Caller)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Caller )( 
            IWorld * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, put_Caller)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Caller )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_Super)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Super )( 
            IWorld * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, put_Super)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Super )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, get_SecurityContext)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_SecurityContext )( 
            IWorld * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IWorld, put_SecurityContext)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_SecurityContext )( 
            IWorld * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IWorld, get_IsInPropChange)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IsInPropChange )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, put_IsInPropChange)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_IsInPropChange )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL boolval);
        
        DECLSPEC_XFGVIRT(IWorld, AbortEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AbortEvent )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IWorld, get_IsEventAborted)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IsEventAborted )( 
            IWorld * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, put_IsEventAborted)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_IsEventAborted )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL boolval);
        
        DECLSPEC_XFGVIRT(IWorld, IsExemplar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsExemplar )( 
            IWorld * This,
            /* [in] */ IThing *pthing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, IsAvatar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsAvatar )( 
            IWorld * This,
            /* [in] */ IThing *pthing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, IsRoom)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsRoom )( 
            IWorld * This,
            /* [in] */ IThing *pthing,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IWorld, LockWorld)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *LockWorld )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IWorld, UnlockWorld)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnlockWorld )( 
            IWorld * This);
        
        DECLSPEC_XFGVIRT(IWorld, NotifyUserConnect)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NotifyUserConnect )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, NotifyUserDisconnect)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NotifyUserDisconnect )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, FireUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FireUIEvent )( 
            IWorld * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [optional][in] */ VARIANT varArg);
        
        DECLSPEC_XFGVIRT(IWorld, ShowHTML)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowHTML )( 
            IWorld * This,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrHtml,
            /* [defaultvalue][optional][in] */ VARIANT cx,
            /* [defaultvalue][optional][in] */ VARIANT cy);
        
        DECLSPEC_XFGVIRT(IWorld, ShowHTMLEx)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowHTMLEx )( 
            IWorld * This,
            /* [in] */ BSTR bstrWinName,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrHtml,
            /* [in] */ VARIANT dispArg,
            /* [defaultvalue][optional][in] */ VARIANT x,
            /* [defaultvalue][optional][in] */ VARIANT y,
            /* [defaultvalue][optional][in] */ VARIANT cx,
            /* [defaultvalue][optional][in] */ VARIANT cy);
        
        DECLSPEC_XFGVIRT(IWorld, ShowHTMLExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ShowHTMLExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrWinName,
            /* [in] */ BSTR bstrHtml,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        DECLSPEC_XFGVIRT(IWorld, ShowURL)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowURL )( 
            IWorld * This,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrUrl,
            /* [defaultvalue][optional][in] */ VARIANT cx,
            /* [defaultvalue][optional][in] */ VARIANT cy);
        
        DECLSPEC_XFGVIRT(IWorld, ShowURLEx)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowURLEx )( 
            IWorld * This,
            /* [in] */ BSTR bstrWinName,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ VARIANT dispArg,
            /* [defaultvalue][optional][in] */ VARIANT x,
            /* [defaultvalue][optional][in] */ VARIANT y,
            /* [defaultvalue][optional][in] */ VARIANT cx,
            /* [defaultvalue][optional][in] */ VARIANT cy);
        
        DECLSPEC_XFGVIRT(IWorld, ShowURLExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ShowURLExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrWinName,
            /* [in] */ VARIANT_BOOL bPopup,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BSTR bstrTitle,
            /* [in] */ VARIANT_BOOL bSafeMode,
            /* [in] */ IDispatch *pdispArg,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        DECLSPEC_XFGVIRT(IWorld, NotifyInvokeMethod)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NotifyInvokeMethod )( 
            IWorld * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstr,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IWorld, NotifyPropertyChanged)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NotifyPropertyChanged )( 
            IWorld * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstr,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IWorld, NotifyMethodChanged)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NotifyMethodChanged )( 
            IWorld * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstr,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IWorld, NotifyModuleChanged)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *NotifyModuleChanged )( 
            IWorld * This,
            /* [in] */ BSTR bstr,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IWorld, SendContainer)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendContainer )( 
            IWorld * This,
            /* [in] */ long lval,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, SendContents)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendContents )( 
            IWorld * This,
            /* [in] */ long lval,
            /* [in] */ IThing *pthing,
            /* [in] */ VARIANT_BOOL bForceOpen);
        
        DECLSPEC_XFGVIRT(IWorld, SendWorld)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendWorld )( 
            IWorld * This,
            /* [in] */ long lval);
        
        DECLSPEC_XFGVIRT(IWorld, SendExemplar)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendExemplar )( 
            IWorld * This,
            /* [in] */ long lval,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IWorld, SendThingByID)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendThingByID )( 
            IWorld * This,
            /* [in] */ long lval,
            /* [in] */ long lID);
        
        DECLSPEC_XFGVIRT(IWorld, SendThing)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendThing )( 
            IWorld * This,
            /* [in] */ long lval,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, SendModule)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendModule )( 
            IWorld * This,
            /* [in] */ long lval,
            /* [in] */ IModule *pmodule,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IWorld, SendWorldCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendWorldCommand )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL bReply,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IWorld, SendThingCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendThingCommand )( 
            IWorld * This,
            /* [in] */ long lFlags,
            /* [in] */ IThing *pthing,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IWorld, SendObjectPropertyCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendObjectPropertyCommand )( 
            IWorld * This,
            /* [in] */ long lFlags,
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IWorld, SendWorldCommandExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendWorldCommandExt )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL bReply,
            /* [in] */ VARIANT_BOOL bSync,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IWorld, SendThingCommandExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendThingCommandExt )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL bReply,
            /* [in] */ VARIANT_BOOL bSync,
            /* [in] */ long lFlags,
            /* [in] */ IThing *pthing,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IWorld, SendObjectPropertyCommandExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendObjectPropertyCommandExt )( 
            IWorld * This,
            /* [in] */ VARIANT_BOOL bReply,
            /* [in] */ VARIANT_BOOL bSync,
            /* [in] */ long lFlags,
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [out] */ HRESULT *recvhr,
            /* [out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IWorld, SendModuleCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendModuleCommand )( 
            IWorld * This,
            /* [in] */ IModule *pmodule,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IWorld, SendMethodCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *SendMethodCommand )( 
            IWorld * This,
            /* [in] */ IMethod *pmethod,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IWorld, LogThingCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *LogThingCommand )( 
            IWorld * This,
            /* [in] */ IThing *pthing,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IWorld, LogWorldCommand)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *LogWorldCommand )( 
            IWorld * This,
            /* [in] */ DISPID dispid,
            /* [in] */ WORD wFlags,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IWorld, WriteCommandHeader)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *WriteCommandHeader )( 
            IWorld * This,
            /* [in] */ IMarshallBuffer *pBuffer,
            /* [in] */ unsigned char ucReply,
            /* [in] */ unsigned char ucCommand);
        
        DECLSPEC_XFGVIRT(IWorld, WriteCommandCallstack)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *WriteCommandCallstack )( 
            IWorld * This,
            /* [in] */ IMarshallBuffer *pBuffer);
        
        DECLSPEC_XFGVIRT(IWorld, RegisterInterest)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *RegisterInterest )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, UnregisterInterest)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *UnregisterInterest )( 
            IWorld * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IWorld, MarshallThing)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallThing )( 
            IWorld * This,
            /* [in] */ IThing *pthing,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IWorld, UnMarshallThing)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshallThing )( 
            IWorld * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IWorld, MarshallProperty)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallProperty )( 
            IWorld * This,
            /* [in] */ VARIANT var,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IWorld, UnMarshallProperty)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshallProperty )( 
            IWorld * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IWorld, MarshallObjectProperty)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallObjectProperty )( 
            IWorld * This,
            /* [in] */ IObjectProperty *pprop,
            /* [in] */ long lHint,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IWorld, UnMarshallObjectProperty)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshallObjectProperty )( 
            IWorld * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out] */ IObjectProperty **ppprop);
        
        DECLSPEC_XFGVIRT(IWorld, MarshallModule)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallModule )( 
            IWorld * This,
            /* [in] */ IModule *pmodule,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IWorld, UnMarshallModule)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshallModule )( 
            IWorld * This,
            /* [in] */ REFCLSID clsid,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out] */ IModule **ppmodule);
        
        DECLSPEC_XFGVIRT(IWorld, MarshallDISPPARAMS)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallDISPPARAMS )( 
            IWorld * This,
            /* [in] */ DISPPARAMS *pdispparams,
            /* [in] */ IMarshallBuffer *pmarshallbuffer,
            /* [in] */ DWORD dwOptions);
        
        DECLSPEC_XFGVIRT(IWorld, UnMarshallDISPPARAMS)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshallDISPPARAMS )( 
            IWorld * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
            /* [out][in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IWorld, MarshallPropertyToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallPropertyToScript )( 
            IWorld * This,
            /* [in] */ VARIANT var,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IWorld, CheckPolicy)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckPolicy )( 
            IWorld * This,
            /* [in] */ IThing *pThing,
            /* [in] */ unsigned long lFlags,
            /* [optional][in] */ VARIANT var,
            /* [retval][out] */ VARIANT_BOOL *pbAccessOk);
        
        DECLSPEC_XFGVIRT(IWorld, CheckPolicyExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *CheckPolicyExt )( 
            IWorld * This,
            /* [in] */ IThing *pThing,
            /* [in] */ unsigned long lFlags,
            /* [optional][in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateProperty)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ValidateProperty )( 
            IWorld * This,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateDISPPARAMS)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ValidateDISPPARAMS )( 
            IWorld * This,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateObjectSafety)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ValidateObjectSafety )( 
            IWorld * This,
            /* [in] */ REFCLSID clsid,
            /* [in] */ IUnknown *punk,
            /* [in] */ DWORD dwOptions);
        
        DECLSPEC_XFGVIRT(IWorld, ValidatePropertyName)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ValidatePropertyName )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateMethodName)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ValidateMethodName )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ long psbits,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateInstanceName)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ValidateInstanceName )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateExemplarType)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ValidateExemplarType )( 
            IWorld * This,
            /* [in] */ BSTR bstrType,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateWorldName)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ValidateWorldName )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateAvatarName)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *ValidateAvatarName )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT_BOOL *pboolVal);
        
        DECLSPEC_XFGVIRT(IWorld, ValidatePropertyNameExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ValidatePropertyNameExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateMethodNameExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ValidateMethodNameExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ long psbits);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateInstanceNameExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ValidateInstanceNameExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateExemplarTypeExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ValidateExemplarTypeExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrType);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateWorldNameExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ValidateWorldNameExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IWorld, ValidateAvatarNameExt)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *ValidateAvatarNameExt )( 
            IWorld * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IWorld, CloneProperty)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *CloneProperty )( 
            IWorld * This,
            /* [in] */ VARIANT source,
            /* [retval][out] */ VARIANT *pDest);
        
        DECLSPEC_XFGVIRT(IWorld, DumpProperty)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *DumpProperty )( 
            IWorld * This,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IWorld, get_Version)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IWorld * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IWorld, GetStatus)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            IWorld * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IWorld, AddCLSIDToTable)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *AddCLSIDToTable )( 
            IWorld * This,
            /* [in] */ REFCLSID clsid);
        
        DECLSPEC_XFGVIRT(IWorld, UpdateGlobalPaths)
        /* [id][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *UpdateGlobalPaths )( 
            IWorld * This);
        
        END_INTERFACE
    } IWorldVtbl;

    interface IWorld
    {
        CONST_VTBL struct IWorldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWorld_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWorld_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWorld_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWorld_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWorld_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWorld_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWorld_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWorld_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IWorld_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IWorld_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IWorld_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IWorld_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IWorld_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IWorld_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IWorld_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IWorld_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IWorld_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IWorld_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IWorld_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IWorld_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IWorld_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IWorld_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IWorld_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IWorld_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IWorld_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IWorld_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IWorld_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IWorld_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IWorld_Connect(This,bstrName,bstrPassword,ppthing)	\
    ( (This)->lpVtbl -> Connect(This,bstrName,bstrPassword,ppthing) ) 

#define IWorld_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IWorld_CreateAvatar(This,bstrName,bstrPassword,bstrGUID,pbstrNewName)	\
    ( (This)->lpVtbl -> CreateAvatar(This,bstrName,bstrPassword,bstrGUID,pbstrNewName) ) 

#define IWorld_ConnectInt(This,bstrName,bstrPassword,varProfile,ppthing)	\
    ( (This)->lpVtbl -> ConnectInt(This,bstrName,bstrPassword,varProfile,ppthing) ) 

#define IWorld_DisconnectInt(This)	\
    ( (This)->lpVtbl -> DisconnectInt(This) ) 

#define IWorld_DisconnectAvatar(This,pAvatar)	\
    ( (This)->lpVtbl -> DisconnectAvatar(This,pAvatar) ) 

#define IWorld_DisconnectClient(This,pAvatar)	\
    ( (This)->lpVtbl -> DisconnectClient(This,pAvatar) ) 

#define IWorld_Reconnect(This,bstrURL,bstrName,bstrPassword)	\
    ( (This)->lpVtbl -> Reconnect(This,bstrURL,bstrName,bstrPassword) ) 

#define IWorld_ReconnectExt(This,bstrURL,bstrName,bstrPassword)	\
    ( (This)->lpVtbl -> ReconnectExt(This,bstrURL,bstrName,bstrPassword) ) 

#define IWorld_ActivateRoom(This,pthing)	\
    ( (This)->lpVtbl -> ActivateRoom(This,pthing) ) 

#define IWorld_DeactivateRoom(This,pthing)	\
    ( (This)->lpVtbl -> DeactivateRoom(This,pthing) ) 

#define IWorld_Synchronize(This)	\
    ( (This)->lpVtbl -> Synchronize(This) ) 

#define IWorld_get_Database(This,pbstr)	\
    ( (This)->lpVtbl -> get_Database(This,pbstr) ) 

#define IWorld_OpenDatabase(This,bstr,bCreate,bOverwrite)	\
    ( (This)->lpVtbl -> OpenDatabase(This,bstr,bCreate,bOverwrite) ) 

#define IWorld_SaveDatabase(This)	\
    ( (This)->lpVtbl -> SaveDatabase(This) ) 

#define IWorld_SaveDatabaseAs(This,bstrNewName)	\
    ( (This)->lpVtbl -> SaveDatabaseAs(This,bstrNewName) ) 

#define IWorld_SaveToScript(This,bstrFilename)	\
    ( (This)->lpVtbl -> SaveToScript(This,bstrFilename) ) 

#define IWorld_ProcessLogRecord(This,pbuffer)	\
    ( (This)->lpVtbl -> ProcessLogRecord(This,pbuffer) ) 

#define IWorld_EnableLogging(This,boolval)	\
    ( (This)->lpVtbl -> EnableLogging(This,boolval) ) 

#define IWorld_get_IsLoggingEnabled(This,pbool)	\
    ( (This)->lpVtbl -> get_IsLoggingEnabled(This,pbool) ) 

#define IWorld_CreateObjectInt(This,lval,ppthing)	\
    ( (This)->lpVtbl -> CreateObjectInt(This,lval,ppthing) ) 

#define IWorld_DeleteObjectInt(This,pthing)	\
    ( (This)->lpVtbl -> DeleteObjectInt(This,pthing) ) 

#define IWorld_CreateInstance(This,bstrName,varExemplar,varContainer,ppthing)	\
    ( (This)->lpVtbl -> CreateInstance(This,bstrName,varExemplar,varContainer,ppthing) ) 

#define IWorld_CreateInstanceExt(This,bstrName,varExemplar,pthingContainer,ppthing)	\
    ( (This)->lpVtbl -> CreateInstanceExt(This,bstrName,varExemplar,pthingContainer,ppthing) ) 

#define IWorld_CreateInstanceInt(This,bstrName,pthingExemplar,pthingContainer,ppthing)	\
    ( (This)->lpVtbl -> CreateInstanceInt(This,bstrName,pthingExemplar,pthingContainer,ppthing) ) 

#define IWorld_CreateExemplar(This,bstrType,varExemplar,ppthing)	\
    ( (This)->lpVtbl -> CreateExemplar(This,bstrType,varExemplar,ppthing) ) 

#define IWorld_CreateExemplarEx(This,bstrName,bstrType,varExemplar,ppthing)	\
    ( (This)->lpVtbl -> CreateExemplarEx(This,bstrName,bstrType,varExemplar,ppthing) ) 

#define IWorld_CreateExemplarExt(This,bstrName,bstrType,varExemplar,ppthing)	\
    ( (This)->lpVtbl -> CreateExemplarExt(This,bstrName,bstrType,varExemplar,ppthing) ) 

#define IWorld_CreateExemplarInt(This,bstrName,bstrType,pthingExemplar,ppthing)	\
    ( (This)->lpVtbl -> CreateExemplarInt(This,bstrName,bstrType,pthingExemplar,ppthing) ) 

#define IWorld_CreateRootExemplar(This,bstrType,ppthing)	\
    ( (This)->lpVtbl -> CreateRootExemplar(This,bstrType,ppthing) ) 

#define IWorld_CloneInstance(This,bstrName,pthingSource,ppthing)	\
    ( (This)->lpVtbl -> CloneInstance(This,bstrName,pthingSource,ppthing) ) 

#define IWorld_DestroyObject(This,pthing)	\
    ( (This)->lpVtbl -> DestroyObject(This,pthing) ) 

#define IWorld_DestroyObjectByID(This,lval)	\
    ( (This)->lpVtbl -> DestroyObjectByID(This,lval) ) 

#define IWorld_get_ObjectByName(This,bstr,ppthing)	\
    ( (This)->lpVtbl -> get_ObjectByName(This,bstr,ppthing) ) 

#define IWorld_get_ObjectByID(This,lval,ppthing)	\
    ( (This)->lpVtbl -> get_ObjectByID(This,lval,ppthing) ) 

#define IWorld_get_Exemplar(This,bstrType,ppthing)	\
    ( (This)->lpVtbl -> get_Exemplar(This,bstrType,ppthing) ) 

#define IWorld_IsValidExemplar(This,bstrType,pbool)	\
    ( (This)->lpVtbl -> IsValidExemplar(This,bstrType,pbool) ) 

#define IWorld_get_Exemplars(This,pppropertymap)	\
    ( (This)->lpVtbl -> get_Exemplars(This,pppropertymap) ) 

#define IWorld_CreateObjectProperty(This,bstrProgID,ppproperty)	\
    ( (This)->lpVtbl -> CreateObjectProperty(This,bstrProgID,ppproperty) ) 

#define IWorld_CreateObjectPropertyExt(This,clsid,punk,ppproperty)	\
    ( (This)->lpVtbl -> CreateObjectPropertyExt(This,clsid,punk,ppproperty) ) 

#define IWorld_CreateMethodByDispID(This,lFlags,varModule,dispid,ppmethod)	\
    ( (This)->lpVtbl -> CreateMethodByDispID(This,lFlags,varModule,dispid,ppmethod) ) 

#define IWorld_CreateMethod(This,lFlags,varModule,bstrName,ppmethod)	\
    ( (This)->lpVtbl -> CreateMethod(This,lFlags,varModule,bstrName,ppmethod) ) 

#define IWorld_CreateInlineMethod(This,lFlags,bstrLanguage,bstrName,bstrCode,ppmethod)	\
    ( (This)->lpVtbl -> CreateInlineMethod(This,lFlags,bstrLanguage,bstrName,bstrCode,ppmethod) ) 

#define IWorld_CreateCOMModule(This,bstrName,bstrProgID,lFlags,ppmodule)	\
    ( (This)->lpVtbl -> CreateCOMModule(This,bstrName,bstrProgID,lFlags,ppmodule) ) 

#define IWorld_CreateScriptModule(This,bstrName,bstrScriptPath,lFlags,ppmodule)	\
    ( (This)->lpVtbl -> CreateScriptModule(This,bstrName,bstrScriptPath,lFlags,ppmodule) ) 

#define IWorld_CreateCOMModuleEx(This,bstrName,bstrProgID,lFlags,ppmodule)	\
    ( (This)->lpVtbl -> CreateCOMModuleEx(This,bstrName,bstrProgID,lFlags,ppmodule) ) 

#define IWorld_CreateScriptModuleEx(This,bstrName,bstrScriptPath,lFlags,ppmodule)	\
    ( (This)->lpVtbl -> CreateScriptModuleEx(This,bstrName,bstrScriptPath,lFlags,ppmodule) ) 

#define IWorld_RemoveModule(This,bstrName)	\
    ( (This)->lpVtbl -> RemoveModule(This,bstrName) ) 

#define IWorld_get_Module(This,bstrName,ppmodule)	\
    ( (This)->lpVtbl -> get_Module(This,bstrName,ppmodule) ) 

#define IWorld_IsValidModule(This,bstrName,pbool)	\
    ( (This)->lpVtbl -> IsValidModule(This,bstrName,pbool) ) 

#define IWorld_get_Modules(This,pppropmap)	\
    ( (This)->lpVtbl -> get_Modules(This,pppropmap) ) 

#define IWorld_CreateTool(This,bstrName,bstrProgID,ppunk)	\
    ( (This)->lpVtbl -> CreateTool(This,bstrName,bstrProgID,ppunk) ) 

#define IWorld_CreateToolFromInterface(This,bstrName,punk)	\
    ( (This)->lpVtbl -> CreateToolFromInterface(This,bstrName,punk) ) 

#define IWorld_CreateToolExt(This,bstrName,clsid,ppunk)	\
    ( (This)->lpVtbl -> CreateToolExt(This,bstrName,clsid,ppunk) ) 

#define IWorld_RemoveTool(This,bstrName)	\
    ( (This)->lpVtbl -> RemoveTool(This,bstrName) ) 

#define IWorld_IsValidTool(This,bstrName,pbool)	\
    ( (This)->lpVtbl -> IsValidTool(This,bstrName,pbool) ) 

#define IWorld_get_Tool(This,bstrName,ppunk)	\
    ( (This)->lpVtbl -> get_Tool(This,bstrName,ppunk) ) 

#define IWorld_get_ToolExt(This,bstrName,ppunk)	\
    ( (This)->lpVtbl -> get_ToolExt(This,bstrName,ppunk) ) 

#define IWorld_get_Tools(This,pppropmap)	\
    ( (This)->lpVtbl -> get_Tools(This,pppropmap) ) 

#define IWorld_InitializeTools(This,ppropmap)	\
    ( (This)->lpVtbl -> InitializeTools(This,ppropmap) ) 

#define IWorld_InitializeConnection(This,pvwcommconnection)	\
    ( (This)->lpVtbl -> InitializeConnection(This,pvwcommconnection) ) 

#define IWorld_DisconnectConnection(This,pvwcommconnection)	\
    ( (This)->lpVtbl -> DisconnectConnection(This,pvwcommconnection) ) 

#define IWorld_OnOpenWorld(This,bPersist)	\
    ( (This)->lpVtbl -> OnOpenWorld(This,bPersist) ) 

#define IWorld_OnCreateWorld(This)	\
    ( (This)->lpVtbl -> OnCreateWorld(This) ) 

#define IWorld_ProcessMessage(This,pmessage)	\
    ( (This)->lpVtbl -> ProcessMessage(This,pmessage) ) 

#define IWorld_ProcessMessageExt(This,ch,pUBuffer,recvhr,pvar)	\
    ( (This)->lpVtbl -> ProcessMessageExt(This,ch,pUBuffer,recvhr,pvar) ) 

#define IWorld_get_Connection(This,ppvwcommconnection)	\
    ( (This)->lpVtbl -> get_Connection(This,ppvwcommconnection) ) 

#define IWorld_put_Connection(This,pvwcommconnection)	\
    ( (This)->lpVtbl -> put_Connection(This,pvwcommconnection) ) 

#define IWorld_get_ShouldExecute(This,pbool)	\
    ( (This)->lpVtbl -> get_ShouldExecute(This,pbool) ) 

#define IWorld_get_ShouldExecuteSync(This,pbool)	\
    ( (This)->lpVtbl -> get_ShouldExecuteSync(This,pbool) ) 

#define IWorld_get_ShouldRemote(This,pbool)	\
    ( (This)->lpVtbl -> get_ShouldRemote(This,pbool) ) 

#define IWorld_get_ShouldRemoteSync(This,pbool)	\
    ( (This)->lpVtbl -> get_ShouldRemoteSync(This,pbool) ) 

#define IWorld_get_ShouldNotify(This,pbool)	\
    ( (This)->lpVtbl -> get_ShouldNotify(This,pbool) ) 

#define IWorld_get_LocalMode(This,pbool)	\
    ( (This)->lpVtbl -> get_LocalMode(This,pbool) ) 

#define IWorld_put_LocalMode(This,boolval)	\
    ( (This)->lpVtbl -> put_LocalMode(This,boolval) ) 

#define IWorld_get_FreezeEvents(This,pbool)	\
    ( (This)->lpVtbl -> get_FreezeEvents(This,pbool) ) 

#define IWorld_put_FreezeEvents(This,boolval)	\
    ( (This)->lpVtbl -> put_FreezeEvents(This,boolval) ) 

#define IWorld_get_EnableSecurity(This,pbool)	\
    ( (This)->lpVtbl -> get_EnableSecurity(This,pbool) ) 

#define IWorld_EnableTrace(This,boolval)	\
    ( (This)->lpVtbl -> EnableTrace(This,boolval) ) 

#define IWorld_get_IsTraceEnabled(This,pbool)	\
    ( (This)->lpVtbl -> get_IsTraceEnabled(This,pbool) ) 

#define IWorld_get_TraceLevel(This,bstr,ival)	\
    ( (This)->lpVtbl -> get_TraceLevel(This,bstr,ival) ) 

#define IWorld_put_TraceLevel(This,bstr,ival)	\
    ( (This)->lpVtbl -> put_TraceLevel(This,bstr,ival) ) 

#define IWorld_RemoveTraceLevel(This,bstr)	\
    ( (This)->lpVtbl -> RemoveTraceLevel(This,bstr) ) 

#define IWorld_Trace(This,bstr)	\
    ( (This)->lpVtbl -> Trace(This,bstr) ) 

#define IWorld_Report(This,bstr,lType)	\
    ( (This)->lpVtbl -> Report(This,bstr,lType) ) 

#define IWorld_Print(This,varAnything)	\
    ( (This)->lpVtbl -> Print(This,varAnything) ) 

#define IWorld_Format(This,bstrIn,pObjects,pPOV,bstrOut)	\
    ( (This)->lpVtbl -> Format(This,bstrIn,pObjects,pPOV,bstrOut) ) 

#define IWorld_FormatSentences(This,bstrIn,pObjects,pPOV,bstrOut)	\
    ( (This)->lpVtbl -> FormatSentences(This,bstrIn,pObjects,pPOV,bstrOut) ) 

#define IWorld_get_IsConnected(This,pbool)	\
    ( (This)->lpVtbl -> get_IsConnected(This,pbool) ) 

#define IWorld_get_ServerSide(This,pbool)	\
    ( (This)->lpVtbl -> get_ServerSide(This,pbool) ) 

#define IWorld_put_ServerSide(This,boolval)	\
    ( (This)->lpVtbl -> put_ServerSide(This,boolval) ) 

#define IWorld_get_Avatar(This,bstrName,ppthing)	\
    ( (This)->lpVtbl -> get_Avatar(This,bstrName,ppthing) ) 

#define IWorld_get_AvatarByGUID(This,bstrName,ppthing)	\
    ( (This)->lpVtbl -> get_AvatarByGUID(This,bstrName,ppthing) ) 

#define IWorld_get_Global(This,ppthing)	\
    ( (This)->lpVtbl -> get_Global(This,ppthing) ) 

#define IWorld_get_Owner(This,ppthing)	\
    ( (This)->lpVtbl -> get_Owner(This,ppthing) ) 

#define IWorld_get_User(This,ppthing)	\
    ( (This)->lpVtbl -> get_User(This,ppthing) ) 

#define IWorld_put_User(This,pthing)	\
    ( (This)->lpVtbl -> put_User(This,pthing) ) 

#define IWorld_get_This(This,ppthing)	\
    ( (This)->lpVtbl -> get_This(This,ppthing) ) 

#define IWorld_put_This(This,pthing)	\
    ( (This)->lpVtbl -> put_This(This,pthing) ) 

#define IWorld_get_Caller(This,ppthing)	\
    ( (This)->lpVtbl -> get_Caller(This,ppthing) ) 

#define IWorld_put_Caller(This,pthing)	\
    ( (This)->lpVtbl -> put_Caller(This,pthing) ) 

#define IWorld_get_Super(This,ppthing)	\
    ( (This)->lpVtbl -> get_Super(This,ppthing) ) 

#define IWorld_put_Super(This,pthing)	\
    ( (This)->lpVtbl -> put_Super(This,pthing) ) 

#define IWorld_get_SecurityContext(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_SecurityContext(This,ppSecurity) ) 

#define IWorld_put_SecurityContext(This,pSecurity)	\
    ( (This)->lpVtbl -> put_SecurityContext(This,pSecurity) ) 

#define IWorld_get_IsInPropChange(This,pbool)	\
    ( (This)->lpVtbl -> get_IsInPropChange(This,pbool) ) 

#define IWorld_put_IsInPropChange(This,boolval)	\
    ( (This)->lpVtbl -> put_IsInPropChange(This,boolval) ) 

#define IWorld_AbortEvent(This)	\
    ( (This)->lpVtbl -> AbortEvent(This) ) 

#define IWorld_get_IsEventAborted(This,pbool)	\
    ( (This)->lpVtbl -> get_IsEventAborted(This,pbool) ) 

#define IWorld_put_IsEventAborted(This,boolval)	\
    ( (This)->lpVtbl -> put_IsEventAborted(This,boolval) ) 

#define IWorld_IsExemplar(This,pthing,pbool)	\
    ( (This)->lpVtbl -> IsExemplar(This,pthing,pbool) ) 

#define IWorld_IsAvatar(This,pthing,pbool)	\
    ( (This)->lpVtbl -> IsAvatar(This,pthing,pbool) ) 

#define IWorld_IsRoom(This,pthing,pbool)	\
    ( (This)->lpVtbl -> IsRoom(This,pthing,pbool) ) 

#define IWorld_LockWorld(This)	\
    ( (This)->lpVtbl -> LockWorld(This) ) 

#define IWorld_UnlockWorld(This)	\
    ( (This)->lpVtbl -> UnlockWorld(This) ) 

#define IWorld_NotifyUserConnect(This,pthing)	\
    ( (This)->lpVtbl -> NotifyUserConnect(This,pthing) ) 

#define IWorld_NotifyUserDisconnect(This,pthing)	\
    ( (This)->lpVtbl -> NotifyUserDisconnect(This,pthing) ) 

#define IWorld_FireUIEvent(This,pthing,bstrEventName,varArg)	\
    ( (This)->lpVtbl -> FireUIEvent(This,pthing,bstrEventName,varArg) ) 

#define IWorld_ShowHTML(This,bstrTitle,bstrHtml,cx,cy)	\
    ( (This)->lpVtbl -> ShowHTML(This,bstrTitle,bstrHtml,cx,cy) ) 

#define IWorld_ShowHTMLEx(This,bstrWinName,bstrTitle,bstrHtml,dispArg,x,y,cx,cy)	\
    ( (This)->lpVtbl -> ShowHTMLEx(This,bstrWinName,bstrTitle,bstrHtml,dispArg,x,y,cx,cy) ) 

#define IWorld_ShowHTMLExt(This,bstrWinName,bstrHtml,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy)	\
    ( (This)->lpVtbl -> ShowHTMLExt(This,bstrWinName,bstrHtml,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy) ) 

#define IWorld_ShowURL(This,bstrTitle,bstrUrl,cx,cy)	\
    ( (This)->lpVtbl -> ShowURL(This,bstrTitle,bstrUrl,cx,cy) ) 

#define IWorld_ShowURLEx(This,bstrWinName,bstrTitle,bstrUrl,dispArg,x,y,cx,cy)	\
    ( (This)->lpVtbl -> ShowURLEx(This,bstrWinName,bstrTitle,bstrUrl,dispArg,x,y,cx,cy) ) 

#define IWorld_ShowURLExt(This,bstrWinName,bPopup,bstrUrl,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy)	\
    ( (This)->lpVtbl -> ShowURLExt(This,bstrWinName,bPopup,bstrUrl,bstrTitle,bSafeMode,pdispArg,x,y,cx,cy) ) 

#define IWorld_NotifyInvokeMethod(This,pthing,bstr,pdispparams)	\
    ( (This)->lpVtbl -> NotifyInvokeMethod(This,pthing,bstr,pdispparams) ) 

#define IWorld_NotifyPropertyChanged(This,pthing,bstr,lHint,varHintData)	\
    ( (This)->lpVtbl -> NotifyPropertyChanged(This,pthing,bstr,lHint,varHintData) ) 

#define IWorld_NotifyMethodChanged(This,pthing,bstr,lHint,varHintData)	\
    ( (This)->lpVtbl -> NotifyMethodChanged(This,pthing,bstr,lHint,varHintData) ) 

#define IWorld_NotifyModuleChanged(This,bstr,lHint,varHintData)	\
    ( (This)->lpVtbl -> NotifyModuleChanged(This,bstr,lHint,varHintData) ) 

#define IWorld_SendContainer(This,lval,pthing)	\
    ( (This)->lpVtbl -> SendContainer(This,lval,pthing) ) 

#define IWorld_SendContents(This,lval,pthing,bForceOpen)	\
    ( (This)->lpVtbl -> SendContents(This,lval,pthing,bForceOpen) ) 

#define IWorld_SendWorld(This,lval)	\
    ( (This)->lpVtbl -> SendWorld(This,lval) ) 

#define IWorld_SendExemplar(This,lval,pthing,bstr)	\
    ( (This)->lpVtbl -> SendExemplar(This,lval,pthing,bstr) ) 

#define IWorld_SendThingByID(This,lval,lID)	\
    ( (This)->lpVtbl -> SendThingByID(This,lval,lID) ) 

#define IWorld_SendThing(This,lval,pthing)	\
    ( (This)->lpVtbl -> SendThing(This,lval,pthing) ) 

#define IWorld_SendModule(This,lval,pmodule,bstr)	\
    ( (This)->lpVtbl -> SendModule(This,lval,pmodule,bstr) ) 

#define IWorld_SendWorldCommand(This,bReply,dispid,wFlags,pdispparams,recvhr,pvar)	\
    ( (This)->lpVtbl -> SendWorldCommand(This,bReply,dispid,wFlags,pdispparams,recvhr,pvar) ) 

#define IWorld_SendThingCommand(This,lFlags,pthing,dispid,wFlags,pdispparams)	\
    ( (This)->lpVtbl -> SendThingCommand(This,lFlags,pthing,dispid,wFlags,pdispparams) ) 

#define IWorld_SendObjectPropertyCommand(This,lFlags,pprop,dispid,wFlags,pdispparams)	\
    ( (This)->lpVtbl -> SendObjectPropertyCommand(This,lFlags,pprop,dispid,wFlags,pdispparams) ) 

#define IWorld_SendWorldCommandExt(This,bReply,bSync,dispid,wFlags,pdispparams,recvhr,pvar)	\
    ( (This)->lpVtbl -> SendWorldCommandExt(This,bReply,bSync,dispid,wFlags,pdispparams,recvhr,pvar) ) 

#define IWorld_SendThingCommandExt(This,bReply,bSync,lFlags,pthing,dispid,wFlags,pdispparams,recvhr,pvar)	\
    ( (This)->lpVtbl -> SendThingCommandExt(This,bReply,bSync,lFlags,pthing,dispid,wFlags,pdispparams,recvhr,pvar) ) 

#define IWorld_SendObjectPropertyCommandExt(This,bReply,bSync,lFlags,pprop,dispid,wFlags,pdispparams,recvhr,pvar)	\
    ( (This)->lpVtbl -> SendObjectPropertyCommandExt(This,bReply,bSync,lFlags,pprop,dispid,wFlags,pdispparams,recvhr,pvar) ) 

#define IWorld_SendModuleCommand(This,pmodule,dispid,wFlags,pdispparams)	\
    ( (This)->lpVtbl -> SendModuleCommand(This,pmodule,dispid,wFlags,pdispparams) ) 

#define IWorld_SendMethodCommand(This,pmethod,dispid,wFlags,pdispparams)	\
    ( (This)->lpVtbl -> SendMethodCommand(This,pmethod,dispid,wFlags,pdispparams) ) 

#define IWorld_LogThingCommand(This,pthing,dispid,wFlags,pdispparams)	\
    ( (This)->lpVtbl -> LogThingCommand(This,pthing,dispid,wFlags,pdispparams) ) 

#define IWorld_LogWorldCommand(This,dispid,wFlags,pdispparams)	\
    ( (This)->lpVtbl -> LogWorldCommand(This,dispid,wFlags,pdispparams) ) 

#define IWorld_WriteCommandHeader(This,pBuffer,ucReply,ucCommand)	\
    ( (This)->lpVtbl -> WriteCommandHeader(This,pBuffer,ucReply,ucCommand) ) 

#define IWorld_WriteCommandCallstack(This,pBuffer)	\
    ( (This)->lpVtbl -> WriteCommandCallstack(This,pBuffer) ) 

#define IWorld_RegisterInterest(This,pthing)	\
    ( (This)->lpVtbl -> RegisterInterest(This,pthing) ) 

#define IWorld_UnregisterInterest(This,pthing)	\
    ( (This)->lpVtbl -> UnregisterInterest(This,pthing) ) 

#define IWorld_MarshallThing(This,pthing,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> MarshallThing(This,pthing,dwOptions,pmarshallbuffer) ) 

#define IWorld_UnMarshallThing(This,punmarshallbuffer,ppthing)	\
    ( (This)->lpVtbl -> UnMarshallThing(This,punmarshallbuffer,ppthing) ) 

#define IWorld_MarshallProperty(This,var,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> MarshallProperty(This,var,dwOptions,pmarshallbuffer) ) 

#define IWorld_UnMarshallProperty(This,punmarshallbuffer,pvar)	\
    ( (This)->lpVtbl -> UnMarshallProperty(This,punmarshallbuffer,pvar) ) 

#define IWorld_MarshallObjectProperty(This,pprop,lHint,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> MarshallObjectProperty(This,pprop,lHint,dwOptions,pmarshallbuffer) ) 

#define IWorld_UnMarshallObjectProperty(This,punmarshallbuffer,ppprop)	\
    ( (This)->lpVtbl -> UnMarshallObjectProperty(This,punmarshallbuffer,ppprop) ) 

#define IWorld_MarshallModule(This,pmodule,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> MarshallModule(This,pmodule,dwOptions,pmarshallbuffer) ) 

#define IWorld_UnMarshallModule(This,clsid,punmarshallbuffer,ppmodule)	\
    ( (This)->lpVtbl -> UnMarshallModule(This,clsid,punmarshallbuffer,ppmodule) ) 

#define IWorld_MarshallDISPPARAMS(This,pdispparams,pmarshallbuffer,dwOptions)	\
    ( (This)->lpVtbl -> MarshallDISPPARAMS(This,pdispparams,pmarshallbuffer,dwOptions) ) 

#define IWorld_UnMarshallDISPPARAMS(This,punmarshallbuffer,pdispparams)	\
    ( (This)->lpVtbl -> UnMarshallDISPPARAMS(This,punmarshallbuffer,pdispparams) ) 

#define IWorld_MarshallPropertyToScript(This,var,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallPropertyToScript(This,var,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 

#define IWorld_CheckPolicy(This,pThing,lFlags,var,pbAccessOk)	\
    ( (This)->lpVtbl -> CheckPolicy(This,pThing,lFlags,var,pbAccessOk) ) 

#define IWorld_CheckPolicyExt(This,pThing,lFlags,var)	\
    ( (This)->lpVtbl -> CheckPolicyExt(This,pThing,lFlags,var) ) 

#define IWorld_ValidateProperty(This,var)	\
    ( (This)->lpVtbl -> ValidateProperty(This,var) ) 

#define IWorld_ValidateDISPPARAMS(This,pdispparams)	\
    ( (This)->lpVtbl -> ValidateDISPPARAMS(This,pdispparams) ) 

#define IWorld_ValidateObjectSafety(This,clsid,punk,dwOptions)	\
    ( (This)->lpVtbl -> ValidateObjectSafety(This,clsid,punk,dwOptions) ) 

#define IWorld_ValidatePropertyName(This,bstrName,pboolVal)	\
    ( (This)->lpVtbl -> ValidatePropertyName(This,bstrName,pboolVal) ) 

#define IWorld_ValidateMethodName(This,bstrName,psbits,pboolVal)	\
    ( (This)->lpVtbl -> ValidateMethodName(This,bstrName,psbits,pboolVal) ) 

#define IWorld_ValidateInstanceName(This,bstrName,pboolVal)	\
    ( (This)->lpVtbl -> ValidateInstanceName(This,bstrName,pboolVal) ) 

#define IWorld_ValidateExemplarType(This,bstrType,pboolVal)	\
    ( (This)->lpVtbl -> ValidateExemplarType(This,bstrType,pboolVal) ) 

#define IWorld_ValidateWorldName(This,bstrName,pboolVal)	\
    ( (This)->lpVtbl -> ValidateWorldName(This,bstrName,pboolVal) ) 

#define IWorld_ValidateAvatarName(This,bstrName,pboolVal)	\
    ( (This)->lpVtbl -> ValidateAvatarName(This,bstrName,pboolVal) ) 

#define IWorld_ValidatePropertyNameExt(This,bstrName)	\
    ( (This)->lpVtbl -> ValidatePropertyNameExt(This,bstrName) ) 

#define IWorld_ValidateMethodNameExt(This,bstrName,psbits)	\
    ( (This)->lpVtbl -> ValidateMethodNameExt(This,bstrName,psbits) ) 

#define IWorld_ValidateInstanceNameExt(This,bstrName)	\
    ( (This)->lpVtbl -> ValidateInstanceNameExt(This,bstrName) ) 

#define IWorld_ValidateExemplarTypeExt(This,bstrType)	\
    ( (This)->lpVtbl -> ValidateExemplarTypeExt(This,bstrType) ) 

#define IWorld_ValidateWorldNameExt(This,bstrName)	\
    ( (This)->lpVtbl -> ValidateWorldNameExt(This,bstrName) ) 

#define IWorld_ValidateAvatarNameExt(This,bstrName)	\
    ( (This)->lpVtbl -> ValidateAvatarNameExt(This,bstrName) ) 

#define IWorld_CloneProperty(This,source,pDest)	\
    ( (This)->lpVtbl -> CloneProperty(This,source,pDest) ) 

#define IWorld_DumpProperty(This,var)	\
    ( (This)->lpVtbl -> DumpProperty(This,var) ) 

#define IWorld_get_Version(This,pbstr)	\
    ( (This)->lpVtbl -> get_Version(This,pbstr) ) 

#define IWorld_GetStatus(This,pbstr)	\
    ( (This)->lpVtbl -> GetStatus(This,pbstr) ) 

#define IWorld_AddCLSIDToTable(This,clsid)	\
    ( (This)->lpVtbl -> AddCLSIDToTable(This,clsid) ) 

#define IWorld_UpdateGlobalPaths(This)	\
    ( (This)->lpVtbl -> UpdateGlobalPaths(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_Caller_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing);


void __RPC_STUB IWorld_put_Caller_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_get_Super_Proxy( 
    IWorld * This,
    /* [retval][out] */ IThing **ppthing);


void __RPC_STUB IWorld_get_Super_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_Super_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing);


void __RPC_STUB IWorld_put_Super_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_get_SecurityContext_Proxy( 
    IWorld * This,
    /* [retval][out] */ IPropertySecurity **ppSecurity);


void __RPC_STUB IWorld_get_SecurityContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_SecurityContext_Proxy( 
    IWorld * This,
    /* [in] */ IPropertySecurity *pSecurity);


void __RPC_STUB IWorld_put_SecurityContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_get_IsInPropChange_Proxy( 
    IWorld * This,
    /* [retval][out] */ VARIANT_BOOL *pbool);


void __RPC_STUB IWorld_get_IsInPropChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_IsInPropChange_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL boolval);


void __RPC_STUB IWorld_put_IsInPropChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_AbortEvent_Proxy( 
    IWorld * This);


void __RPC_STUB IWorld_AbortEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_get_IsEventAborted_Proxy( 
    IWorld * This,
    /* [retval][out] */ VARIANT_BOOL *pbool);


void __RPC_STUB IWorld_get_IsEventAborted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_IsEventAborted_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL boolval);


void __RPC_STUB IWorld_put_IsEventAborted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_IsExemplar_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [retval][out] */ VARIANT_BOOL *pbool);


void __RPC_STUB IWorld_IsExemplar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_IsAvatar_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [retval][out] */ VARIANT_BOOL *pbool);


void __RPC_STUB IWorld_IsAvatar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_IsRoom_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [retval][out] */ VARIANT_BOOL *pbool);


void __RPC_STUB IWorld_IsRoom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_LockWorld_Proxy( 
    IWorld * This);


void __RPC_STUB IWorld_LockWorld_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnlockWorld_Proxy( 
    IWorld * This);


void __RPC_STUB IWorld_UnlockWorld_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyUserConnect_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing);


void __RPC_STUB IWorld_NotifyUserConnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyUserDisconnect_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing);


void __RPC_STUB IWorld_NotifyUserDisconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_FireUIEvent_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstrEventName,
    /* [optional][in] */ VARIANT varArg);


void __RPC_STUB IWorld_FireUIEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_ShowHTML_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ BSTR bstrHtml,
    /* [defaultvalue][optional][in] */ VARIANT cx,
    /* [defaultvalue][optional][in] */ VARIANT cy);


void __RPC_STUB IWorld_ShowHTML_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_ShowHTMLEx_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrWinName,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ BSTR bstrHtml,
    /* [in] */ VARIANT dispArg,
    /* [defaultvalue][optional][in] */ VARIANT x,
    /* [defaultvalue][optional][in] */ VARIANT y,
    /* [defaultvalue][optional][in] */ VARIANT cx,
    /* [defaultvalue][optional][in] */ VARIANT cy);


void __RPC_STUB IWorld_ShowHTMLEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ShowHTMLExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrWinName,
    /* [in] */ BSTR bstrHtml,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ VARIANT_BOOL bSafeMode,
    /* [in] */ IDispatch *pdispArg,
    /* [in] */ int x,
    /* [in] */ int y,
    /* [in] */ int cx,
    /* [in] */ int cy);


void __RPC_STUB IWorld_ShowHTMLExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_ShowURL_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ BSTR bstrUrl,
    /* [defaultvalue][optional][in] */ VARIANT cx,
    /* [defaultvalue][optional][in] */ VARIANT cy);


void __RPC_STUB IWorld_ShowURL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_ShowURLEx_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrWinName,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ BSTR bstrUrl,
    /* [in] */ VARIANT dispArg,
    /* [defaultvalue][optional][in] */ VARIANT x,
    /* [defaultvalue][optional][in] */ VARIANT y,
    /* [defaultvalue][optional][in] */ VARIANT cx,
    /* [defaultvalue][optional][in] */ VARIANT cy);


void __RPC_STUB IWorld_ShowURLEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ShowURLExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrWinName,
    /* [in] */ VARIANT_BOOL bPopup,
    /* [in] */ BSTR bstrUrl,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ VARIANT_BOOL bSafeMode,
    /* [in] */ IDispatch *pdispArg,
    /* [in] */ int x,
    /* [in] */ int y,
    /* [in] */ int cx,
    /* [in] */ int cy);


void __RPC_STUB IWorld_ShowURLExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyInvokeMethod_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstr,
    /* [in] */ DISPPARAMS *pdispparams);


void __RPC_STUB IWorld_NotifyInvokeMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyPropertyChanged_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstr,
    /* [in] */ long lHint,
    /* [in] */ VARIANT varHintData);


void __RPC_STUB IWorld_NotifyPropertyChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyMethodChanged_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstr,
    /* [in] */ long lHint,
    /* [in] */ VARIANT varHintData);


void __RPC_STUB IWorld_NotifyMethodChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyModuleChanged_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstr,
    /* [in] */ long lHint,
    /* [in] */ VARIANT varHintData);


void __RPC_STUB IWorld_NotifyModuleChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendContainer_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IThing *pthing);


void __RPC_STUB IWorld_SendContainer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendContents_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IThing *pthing,
    /* [in] */ VARIANT_BOOL bForceOpen);


void __RPC_STUB IWorld_SendContents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendWorld_Proxy( 
    IWorld * This,
    /* [in] */ long lval);


void __RPC_STUB IWorld_SendWorld_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendExemplar_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstr);


void __RPC_STUB IWorld_SendExemplar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendThingByID_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ long lID);


void __RPC_STUB IWorld_SendThingByID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendThing_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IThing *pthing);


void __RPC_STUB IWorld_SendThing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendModule_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IModule *pmodule,
    /* [in] */ BSTR bstr);


void __RPC_STUB IWorld_SendModule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendWorldCommand_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL bReply,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams,
    /* [out] */ HRESULT *recvhr,
    /* [out] */ VARIANT *pvar);


void __RPC_STUB IWorld_SendWorldCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendThingCommand_Proxy( 
    IWorld * This,
    /* [in] */ long lFlags,
    /* [in] */ IThing *pthing,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams);


void __RPC_STUB IWorld_SendThingCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendObjectPropertyCommand_Proxy( 
    IWorld * This,
    /* [in] */ long lFlags,
    /* [in] */ IObjectProperty *pprop,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams);


void __RPC_STUB IWorld_SendObjectPropertyCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendWorldCommandExt_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL bReply,
    /* [in] */ VARIANT_BOOL bSync,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams,
    /* [out] */ HRESULT *recvhr,
    /* [out] */ VARIANT *pvar);


void __RPC_STUB IWorld_SendWorldCommandExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendThingCommandExt_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL bReply,
    /* [in] */ VARIANT_BOOL bSync,
    /* [in] */ long lFlags,
    /* [in] */ IThing *pthing,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams,
    /* [out] */ HRESULT *recvhr,
    /* [out] */ VARIANT *pvar);


void __RPC_STUB IWorld_SendThingCommandExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendObjectPropertyCommandExt_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL bReply,
    /* [in] */ VARIANT_BOOL bSync,
    /* [in] */ long lFlags,
    /* [in] */ IObjectProperty *pprop,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams,
    /* [out] */ HRESULT *recvhr,
    /* [out] */ VARIANT *pvar);


void __RPC_STUB IWorld_SendObjectPropertyCommandExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendModuleCommand_Proxy( 
    IWorld * This,
    /* [in] */ IModule *pmodule,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams);


void __RPC_STUB IWorld_SendModuleCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendMethodCommand_Proxy( 
    IWorld * This,
    /* [in] */ IMethod *pmethod,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams);


void __RPC_STUB IWorld_SendMethodCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_LogThingCommand_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams);


void __RPC_STUB IWorld_LogThingCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_LogWorldCommand_Proxy( 
    IWorld * This,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams);


void __RPC_STUB IWorld_LogWorldCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_WriteCommandHeader_Proxy( 
    IWorld * This,
    /* [in] */ IMarshallBuffer *pBuffer,
    /* [in] */ unsigned char ucReply,
    /* [in] */ unsigned char ucCommand);


void __RPC_STUB IWorld_WriteCommandHeader_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_WriteCommandCallstack_Proxy( 
    IWorld * This,
    /* [in] */ IMarshallBuffer *pBuffer);


void __RPC_STUB IWorld_WriteCommandCallstack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_RegisterInterest_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing);


void __RPC_STUB IWorld_RegisterInterest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_UnregisterInterest_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing);


void __RPC_STUB IWorld_UnregisterInterest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallThing_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ DWORD dwOptions,
    /* [in] */ IMarshallBuffer *pmarshallbuffer);


void __RPC_STUB IWorld_MarshallThing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallThing_Proxy( 
    IWorld * This,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out] */ IThing **ppthing);


void __RPC_STUB IWorld_UnMarshallThing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallProperty_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT var,
    /* [in] */ DWORD dwOptions,
    /* [in] */ IMarshallBuffer *pmarshallbuffer);


void __RPC_STUB IWorld_MarshallProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallProperty_Proxy( 
    IWorld * This,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out] */ VARIANT *pvar);


void __RPC_STUB IWorld_UnMarshallProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallObjectProperty_Proxy( 
    IWorld * This,
    /* [in] */ IObjectProperty *pprop,
    /* [in] */ long lHint,
    /* [in] */ DWORD dwOptions,
    /* [in] */ IMarshallBuffer *pmarshallbuffer);


void __RPC_STUB IWorld_MarshallObjectProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallObjectProperty_Proxy( 
    IWorld * This,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out] */ IObjectProperty **ppprop);


void __RPC_STUB IWorld_UnMarshallObjectProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallModule_Proxy( 
    IWorld * This,
    /* [in] */ IModule *pmodule,
    /* [in] */ DWORD dwOptions,
    /* [in] */ IMarshallBuffer *pmarshallbuffer);


void __RPC_STUB IWorld_MarshallModule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallModule_Proxy( 
    IWorld * This,
    /* [in] */ REFCLSID clsid,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out] */ IModule **ppmodule);


void __RPC_STUB IWorld_UnMarshallModule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallDISPPARAMS_Proxy( 
    IWorld * This,
    /* [in] */ DISPPARAMS *pdispparams,
    /* [in] */ IMarshallBuffer *pmarshallbuffer,
    /* [in] */ DWORD dwOptions);


void __RPC_STUB IWorld_MarshallDISPPARAMS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallDISPPARAMS_Proxy( 
    IWorld * This,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out][in] */ DISPPARAMS *pdispparams);


void __RPC_STUB IWorld_UnMarshallDISPPARAMS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallPropertyToScript_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT var,
    /* [in] */ DWORD dwOptions,
    /* [in] */ BSTR bstrContext,
    /* [out] */ VARIANT_BOOL *pbAsVal,
    /* [out] */ BSTR *pbstrOut);


void __RPC_STUB IWorld_MarshallPropertyToScript_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_CheckPolicy_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pThing,
    /* [in] */ unsigned long lFlags,
    /* [optional][in] */ VARIANT var,
    /* [retval][out] */ VARIANT_BOOL *pbAccessOk);


void __RPC_STUB IWorld_CheckPolicy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_CheckPolicyExt_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pThing,
    /* [in] */ unsigned long lFlags,
    /* [optional][in] */ VARIANT var);


void __RPC_STUB IWorld_CheckPolicyExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateProperty_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT var);


void __RPC_STUB IWorld_ValidateProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateDISPPARAMS_Proxy( 
    IWorld * This,
    /* [in] */ DISPPARAMS *pdispparams);


void __RPC_STUB IWorld_ValidateDISPPARAMS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateObjectSafety_Proxy( 
    IWorld * This,
    /* [in] */ REFCLSID clsid,
    /* [in] */ IUnknown *punk,
    /* [in] */ DWORD dwOptions);


void __RPC_STUB IWorld_ValidateObjectSafety_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidatePropertyName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT_BOOL *pboolVal);


void __RPC_STUB IWorld_ValidatePropertyName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateMethodName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ long psbits,
    /* [retval][out] */ VARIANT_BOOL *pboolVal);


void __RPC_STUB IWorld_ValidateMethodName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateInstanceName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT_BOOL *pboolVal);


void __RPC_STUB IWorld_ValidateInstanceName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateExemplarType_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrType,
    /* [retval][out] */ VARIANT_BOOL *pboolVal);


void __RPC_STUB IWorld_ValidateExemplarType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateWorldName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT_BOOL *pboolVal);


void __RPC_STUB IWorld_ValidateWorldName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateAvatarName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT_BOOL *pboolVal);


void __RPC_STUB IWorld_ValidateAvatarName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidatePropertyNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IWorld_ValidatePropertyNameExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateMethodNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ long psbits);


void __RPC_STUB IWorld_ValidateMethodNameExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateInstanceNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IWorld_ValidateInstanceNameExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateExemplarTypeExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrType);


void __RPC_STUB IWorld_ValidateExemplarTypeExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateWorldNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IWorld_ValidateWorldNameExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateAvatarNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB IWorld_ValidateAvatarNameExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_CloneProperty_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT source,
    /* [retval][out] */ VARIANT *pDest);


void __RPC_STUB IWorld_CloneProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_DumpProperty_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT var);


void __RPC_STUB IWorld_DumpProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_get_Version_Proxy( 
    IWorld * This,
    /* [retval][out] */ BSTR *pbstr);


void __RPC_STUB IWorld_get_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_GetStatus_Proxy( 
    IWorld * This,
    /* [retval][out] */ BSTR *pbstr);


void __RPC_STUB IWorld_GetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_AddCLSIDToTable_Proxy( 
    IWorld * This,
    /* [in] */ REFCLSID clsid);


void __RPC_STUB IWorld_AddCLSIDToTable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_UpdateGlobalPaths_Proxy( 
    IWorld * This);


void __RPC_STUB IWorld_UpdateGlobalPaths_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWorld_INTERFACE_DEFINED__ */


#ifndef __IVWObjectSite_INTERFACE_DEFINED__
#define __IVWObjectSite_INTERFACE_DEFINED__

/* interface IVWObjectSite */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVWObjectSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9856-A417-11CF-9BF0-0080C7A56A8A")
    IVWObjectSite : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUserConnect( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUserDisconnect( 
            /* [in] */ IThing *pthing) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUserReconnect( 
            BSTR bstrURL,
            BSTR bstrName,
            BSTR bstrPassword) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnUIEvent( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnInvokeMethod( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrName,
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnPropertyChanged( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrName,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnMethodChanged( 
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrName,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnModuleChanged( 
            /* [in] */ BSTR bstrName,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnTrace( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnReport( 
            /* [in] */ BSTR bstr,
            /* [in] */ long lType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWObjectSiteVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWObjectSite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWObjectSite * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWObjectSite * This);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnUserConnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUserConnect )( 
            IVWObjectSite * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnUserDisconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUserDisconnect )( 
            IVWObjectSite * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnUserReconnect)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUserReconnect )( 
            IVWObjectSite * This,
            BSTR bstrURL,
            BSTR bstrName,
            BSTR bstrPassword);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnUIEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUIEvent )( 
            IVWObjectSite * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrEventName,
            /* [in] */ VARIANT varArg);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnInvokeMethod)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnInvokeMethod )( 
            IVWObjectSite * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrName,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnPropertyChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnPropertyChanged )( 
            IVWObjectSite * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrName,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnMethodChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnMethodChanged )( 
            IVWObjectSite * This,
            /* [in] */ IThing *pthing,
            /* [in] */ BSTR bstrName,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnModuleChanged)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnModuleChanged )( 
            IVWObjectSite * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ long lHint,
            /* [in] */ VARIANT varHintData);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnTrace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnTrace )( 
            IVWObjectSite * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IVWObjectSite, OnReport)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnReport )( 
            IVWObjectSite * This,
            /* [in] */ BSTR bstr,
            /* [in] */ long lType);
        
        END_INTERFACE
    } IVWObjectSiteVtbl;

    interface IVWObjectSite
    {
        CONST_VTBL struct IVWObjectSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWObjectSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWObjectSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWObjectSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWObjectSite_OnUserConnect(This,pthing)	\
    ( (This)->lpVtbl -> OnUserConnect(This,pthing) ) 

#define IVWObjectSite_OnUserDisconnect(This,pthing)	\
    ( (This)->lpVtbl -> OnUserDisconnect(This,pthing) ) 

#define IVWObjectSite_OnUserReconnect(This,bstrURL,bstrName,bstrPassword)	\
    ( (This)->lpVtbl -> OnUserReconnect(This,bstrURL,bstrName,bstrPassword) ) 

#define IVWObjectSite_OnUIEvent(This,pthing,bstrEventName,varArg)	\
    ( (This)->lpVtbl -> OnUIEvent(This,pthing,bstrEventName,varArg) ) 

#define IVWObjectSite_OnInvokeMethod(This,pthing,bstrName,pdispparams)	\
    ( (This)->lpVtbl -> OnInvokeMethod(This,pthing,bstrName,pdispparams) ) 

#define IVWObjectSite_OnPropertyChanged(This,pthing,bstrName,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnPropertyChanged(This,pthing,bstrName,lHint,varHintData) ) 

#define IVWObjectSite_OnMethodChanged(This,pthing,bstrName,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnMethodChanged(This,pthing,bstrName,lHint,varHintData) ) 

#define IVWObjectSite_OnModuleChanged(This,bstrName,lHint,varHintData)	\
    ( (This)->lpVtbl -> OnModuleChanged(This,bstrName,lHint,varHintData) ) 

#define IVWObjectSite_OnTrace(This,bstr)	\
    ( (This)->lpVtbl -> OnTrace(This,bstr) ) 

#define IVWObjectSite_OnReport(This,bstr,lType)	\
    ( (This)->lpVtbl -> OnReport(This,bstr,lType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWObjectSite_INTERFACE_DEFINED__ */


#ifndef __IVWDispatch_INTERFACE_DEFINED__
#define __IVWDispatch_INTERFACE_DEFINED__

/* interface IVWDispatch */
/* [unique][helpstring][dual][uuid][object] */ 

#define	DISPID_VWDISPATCH_INSTALL	( 1000 )

#define	DISPID_VWDISPATCH_ONLOAD	( 1001 )

#define	DISPID_VWDISPATCH_ONUNLOAD	( 1002 )


EXTERN_C const IID IID_IVWDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("590D9858-A417-11CF-9BF0-0080C7A56A8A")
    IVWDispatch : public IDispatch
    {
    public:
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IWorld *pworld) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE Install( 
            /* [in] */ IModule *pmodule) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE OnLoad( void) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE OnUnload( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVWDispatchVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVWDispatch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVWDispatch * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVWDispatch * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVWDispatch * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVWDispatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVWDispatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVWDispatch * This,
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
        
        DECLSPEC_XFGVIRT(IVWDispatch, Initialize)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVWDispatch * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Terminate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IVWDispatch * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, Install)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IVWDispatch * This,
            /* [in] */ IModule *pmodule);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnLoad)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnLoad )( 
            IVWDispatch * This);
        
        DECLSPEC_XFGVIRT(IVWDispatch, OnUnload)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnUnload )( 
            IVWDispatch * This);
        
        END_INTERFACE
    } IVWDispatchVtbl;

    interface IVWDispatch
    {
        CONST_VTBL struct IVWDispatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVWDispatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVWDispatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVWDispatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVWDispatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVWDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVWDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVWDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVWDispatch_Initialize(This,pworld)	\
    ( (This)->lpVtbl -> Initialize(This,pworld) ) 

#define IVWDispatch_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IVWDispatch_Install(This,pmodule)	\
    ( (This)->lpVtbl -> Install(This,pmodule) ) 

#define IVWDispatch_OnLoad(This)	\
    ( (This)->lpVtbl -> OnLoad(This) ) 

#define IVWDispatch_OnUnload(This)	\
    ( (This)->lpVtbl -> OnUnload(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVWDispatch_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_vwobject_0000_0003 */
/* [local] */ 

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9860-A417-11CF-9BF0-0080C7A56A8A") 
enum ModuleConstant
    {
        mcCOM	= 0,
        mcScript	= 1
    } 	ModuleConstant;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9862-A417-11CF-9BF0-0080C7A56A8A") 
enum SendObjectConstant
    {
        soClient	= 0,
        soBystanders	= 1,
        soAvatars	= 2,
        soServer	= 3,
        soBystandersExclUser	= 4,
        soAvatarsExclUser	= 5,
        soAvatar	= 6
    } 	SendObjectConstant;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9864-A417-11CF-9BF0-0080C7A56A8A") 
enum VWTraceLevels
    {
        VWT_VERBOSE	= 0,
        VWT_DUMP	= 1,
        VWT_METHOD	= 2,
        VWT_IMPORTANT	= 3,
        VWT_ERROR	= 4,
        VWT_NONE	= 5
    } 	VWTraceLevels;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9866-A417-11CF-9BF0-0080C7A56A8A") 
enum VWReportTypes
    {
        VWR_ERROR	= -1,
        VWR_PRINT	= 0,
        VWR_ECHO	= 1,
        VWR_EVAL	= 2,
        VWR_PROMPT	= 3,
        VWR_PERFLOG	= 4,
        VWR_PAGE	= 5
    } 	VWReportTypes;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9870-A417-11CF-9BF0-0080C7A56A8A") 
enum MenuItemHint
    {
        miFlags	= 0,
        miUserData	= 1,
        miSubMenu	= 2,
        miStatusText	= 3,
        miMethod	= 4,
        miOnUpdateMethod	= 5,
        miArguments	= 6,
        miOwner	= 7,
        miMenuText	= 8,
        miSortOrder	= 9,
        miTarget	= 10,
        miAddTargetParameter	= 11,
        miIsOverlayItem	= 12,
        miIsProximitySensitive	= 13
    } 	MenuItemHint;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D987a-A417-11CF-9BF0-0080C7A56A8A") 
enum MethodHint
    {
        meFlags	= 0,
        meModule	= 1,
        meArguments	= 2,
        meDispID	= 3,
        meMethodName	= 4,
        meCode	= 5
    } 	MethodHint;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D987c-A417-11CF-9BF0-0080C7A56A8A") 
enum PropertyListHint
    {
        plAdd	= 0,
        plInsertAt	= 1,
        plRemove	= 2,
        plRemoveAt	= 3,
        plRemoveAll	= 4,
        plPut	= 5
    } 	PropertyListHint;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D987e-A417-11CF-9BF0-0080C7A56A8A") 
enum PropertyMapHint
    {
        pmPut	= 0,
        pmRemove	= 1,
        pmRemoveAll	= 2
    } 	PropertyMapHint;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9880-A417-11CF-9BF0-0080C7A56A8A") 
enum ThingHint
    {
        thAdd	= 100,
        thPut	= 101,
        thRemove	= 102
    } 	ThingHint;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9884-A417-11CF-9BF0-0080C7A56A8A") 
enum CLSIDHint
    {
        clsidNull	= 0,
        clsidPropertyList	= 1,
        clsidPropertyMap	= 2,
        clsidCOMModule	= 3,
        clsidScriptModule	= 4,
        clsidMethod	= 5,
        clsidThing	= 6,
        clsidWorld	= 7,
        clsidMenuItem	= 8,
        clsidOCXProxy	= 9,
        clsidAvatarProfile	= 10,
        clsidAvatarProfileData	= 11,
        clsidUnknown	= 255
    } 	CLSIDHint;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9886-A417-11CF-9BF0-0080C7A56A8A") 
enum ModuleHint
    {
        moCreate	= 0,
        moRemove	= 1
    } 	ModuleHint;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D9888-A417-11CF-9BF0-0080C7A56A8A") 
enum COMModuleHint
    {
        cmName	= 10,
        cmFlags	= 11,
        cmCLSID	= 12,
        cmProgID	= 13
    } 	COMModuleHint;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D988A-A417-11CF-9BF0-0080C7A56A8A") 
enum ScriptModuleHint
    {
        smName	= 10,
        smFlags	= 11,
        smScriptPath	= 12
    } 	ScriptModuleHint;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("590D988C-A417-11CF-9BF0-0080C7A56A8A") 
enum ObjectPropertyHint
    {
        opType	= 50
    } 	ObjectPropertyHint;



extern RPC_IF_HANDLE __MIDL_itf_vwobject_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vwobject_0000_0003_v0_0_s_ifspec;

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


