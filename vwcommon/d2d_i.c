

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/d2d.idl:
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

MIDL_DEFINE_GUID(IID, IID_IDirect2DRM,0x8D32CA40,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMObject,0x8D32CA44,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMArray,0x8D32CA48,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMDevice,0x8D32CA4C,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMViewport,0x8D32CA54,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMVisual,0x8D32CA5C,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMFrame,0x8D32CA64,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMImage,0x8D32CA6C,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMHotSpot,0x8D32CA70,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMPick,0x8D32CA74,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);


MIDL_DEFINE_GUID(IID, IID_IDirect2DRMAnimation,0x8D32CA78,0x3CA9,0x11d0,0x6D,0x69,0x6B,0x65,0x6D,0x61,0x72,0x72);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



