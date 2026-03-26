

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwuiobjs.idl:
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

MIDL_DEFINE_GUID(IID, IID_IVWUITool,0x9B154135,0xE2E9,0x21CF,0x62,0x99,0x44,0x53,0x68,0x61,0x72,0x70);


MIDL_DEFINE_GUID(IID, IID_IVWUIView,0x9B394145,0xC3E9,0x21EF,0x62,0x99,0x44,0x53,0x68,0x61,0x72,0x70);


MIDL_DEFINE_GUID(IID, IID_IVWControlManager,0xC31AA440,0x9580,0x11d0,0x89,0xA9,0x00,0xA0,0xC9,0x05,0x41,0x29);


MIDL_DEFINE_GUID(IID, IID_IVWUndoItem,0x90A54235,0xEAE9,0x21CF,0x66,0x69,0x44,0x53,0x48,0x67,0x72,0x70);


MIDL_DEFINE_GUID(IID, IID_IVWUndoStacks,0x92A54231,0xEAE9,0x21CF,0x66,0x69,0x44,0x13,0x13,0x67,0x72,0x70);


MIDL_DEFINE_GUID(IID, IID_IVWExecuteUndo,0x92B54331,0xEA59,0x21CF,0x66,0x69,0x44,0x33,0x43,0x47,0x72,0x70);


MIDL_DEFINE_GUID(IID, IID_IVWUIEvents,0x5E6FB8A0,0x995E,0x11d0,0x89,0xA9,0x00,0xA0,0xC9,0x05,0x41,0x29);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



