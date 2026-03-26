

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwsysex.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISystemExemplar,0x717B5A86,0x7267,0x11d1,0x95,0x9F,0x00,0xC0,0x4F,0xD9,0x1F,0x4D);


MIDL_DEFINE_GUID(IID, IID_IThingExemplar,0x99AD3618,0xAAB5,0x11D0,0xBA,0xE3,0x00,0xC0,0x4F,0xC2,0xCA,0xB1);


MIDL_DEFINE_GUID(IID, IID_IArtifactExemplar,0x99AD361C,0xAAB5,0x11D0,0xBA,0xE3,0x00,0xC0,0x4F,0xC2,0xCA,0xB1);


MIDL_DEFINE_GUID(IID, IID_IAvatarExemplar,0x99AD361E,0xAAB5,0x11D0,0xBA,0xE3,0x00,0xC0,0x4F,0xC2,0xCA,0xB1);


MIDL_DEFINE_GUID(IID, IID_IHostExemplar,0x44001330,0x1B82,0x11d2,0xAC,0x71,0x00,0x10,0x4B,0x26,0xA3,0x73);


MIDL_DEFINE_GUID(IID, IID_IPortalExemplar,0x99AD3624,0xAAB5,0x11D0,0xBA,0xE3,0x00,0xC0,0x4F,0xC2,0xCA,0xB1);


MIDL_DEFINE_GUID(IID, IID_IIWPortalExemplar,0xFFA01B4F,0x9F4C,0x11d1,0x80,0xE8,0x00,0xC0,0x4F,0xC2,0xA1,0x29);


MIDL_DEFINE_GUID(IID, IID_IRoomExemplar,0x99AD3626,0xAAB5,0x11D0,0xBA,0xE3,0x00,0xC0,0x4F,0xC2,0xCA,0xB1);


MIDL_DEFINE_GUID(IID, IID_IStateMachineExemplar,0x69A2A200,0xF187,0x11d1,0xA3,0x92,0x00,0x00,0xF8,0x07,0x55,0x8D);


MIDL_DEFINE_GUID(IID, IID_IWebPageExemplar,0x63CA06F6,0x5CC2,0x11d2,0x82,0xF0,0x00,0x10,0x4B,0x26,0xA3,0x73);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



