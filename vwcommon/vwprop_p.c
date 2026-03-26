

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwprop.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "vwprop.h"

#define TYPE_FORMAT_STRING_SIZE   1377                              
#define PROC_FORMAT_STRING_SIZE   10189                             
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _vwprop_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } vwprop_MIDL_TYPE_FORMAT_STRING;

typedef struct _vwprop_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } vwprop_MIDL_PROC_FORMAT_STRING;

typedef struct _vwprop_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } vwprop_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const vwprop_MIDL_TYPE_FORMAT_STRING vwprop__MIDL_TypeFormatString;
extern const vwprop_MIDL_PROC_FORMAT_STRING vwprop__MIDL_ProcFormatString;
extern const vwprop_MIDL_EXPR_FORMAT_STRING vwprop__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPropertySecurity_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPropertySecurity_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IObjectProperty_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IObjectProperty_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPropertyCollection_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPropertyCollection_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPropertyList_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPropertyList_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPropertyMap_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPropertyMap_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IThing_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IThing_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IModule_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IModule_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ICOMModule_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICOMModule_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IScriptModule_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IScriptModule_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IMethod_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMethod_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const vwprop_MIDL_PROC_FORMAT_STRING vwprop__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Initialize */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWorld */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pExemplar */

/* 30 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pSecurity */

/* 36 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cleanup */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 64 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_World */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x9 ),	/* 9 */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 94 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppworld */

/* 102 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_World */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pworld */

/* 138 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Exemplar */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0xb ),	/* 11 */
/* 158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppExemplar */

/* 174 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Exemplar */

/* 186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0xc ),	/* 12 */
/* 194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pExemplar */

/* 210 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 214 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */


	/* Procedure get_Instance */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0xd ),	/* 13 */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */


	/* Parameter ppInstance */

/* 246 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 250 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */


	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Parent */


	/* Procedure put_Instance */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0xe ),	/* 14 */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 272 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */


	/* Parameter pInstance */

/* 282 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 286 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */


	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Property */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0xf ),	/* 15 */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 310 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvar */

/* 318 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Property */

/* 330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x10 ),	/* 16 */
/* 338 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 344 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 346 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 354 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 358 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Permissions */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x11 ),	/* 17 */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x24 ),	/* 36 */
/* 380 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 382 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulFlags */

/* 390 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Permissions */

/* 402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x12 ),	/* 18 */
/* 410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 418 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulFlags */

/* 426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Bits */

/* 438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x13 ),	/* 19 */
/* 446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x24 ),	/* 36 */
/* 452 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 454 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bits */

/* 462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Bits */

/* 474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x14 ),	/* 20 */
/* 482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 488 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 490 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bits */

/* 498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BitState */

/* 510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x15 ),	/* 21 */
/* 518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 522 */	NdrFcShort( 0x22 ),	/* 34 */
/* 524 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 526 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bits */

/* 534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bSet */

/* 540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 544 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BitState */

/* 552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x16 ),	/* 22 */
/* 560 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 562 */	NdrFcShort( 0xe ),	/* 14 */
/* 564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bits */

/* 576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bSet */

/* 582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 586 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_vtType */

/* 594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x17 ),	/* 23 */
/* 602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x22 ),	/* 34 */
/* 608 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 610 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vartype */

/* 618 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 622 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 626 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_vtType */

/* 630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x18 ),	/* 24 */
/* 638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 640 */	NdrFcShort( 0x6 ),	/* 6 */
/* 642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 644 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 646 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vartype */

/* 654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 658 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertyIID */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x19 ),	/* 25 */
/* 674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 680 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 682 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrIID */

/* 690 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 694 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PropertyIID */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x1a ),	/* 26 */
/* 710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 718 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrIID */

/* 726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 730 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertyIIDExt */

/* 738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x1b ),	/* 27 */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x4c ),	/* 76 */
/* 752 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 754 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter piid */

/* 762 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 766 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PropertyIIDExt */

/* 774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x1c ),	/* 28 */
/* 782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 784 */	NdrFcShort( 0x44 ),	/* 68 */
/* 786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 788 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 790 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter riid */

/* 798 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 802 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertyType */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x1d ),	/* 29 */
/* 818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 826 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 834 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 838 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PropertyType */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x1e ),	/* 30 */
/* 854 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 862 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x1 ),	/* 1 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 870 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Marshall */

/* 882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x1f ),	/* 31 */
/* 890 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 896 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 898 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwOptions */

/* 906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmarshallbuffer */

/* 912 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 916 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnMarshall */

/* 924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x20 ),	/* 32 */
/* 932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 938 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 940 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter punmarshallbuffer */

/* 948 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 952 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TypeInt */


	/* Procedure ChangeMode */

/* 960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x21 ),	/* 33 */
/* 968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 976 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x1 ),	/* 1 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */


	/* Parameter bstrMode */

/* 984 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 988 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */


	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 992 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryMode */

/* 996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1004 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1010 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1012 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrGroup */

/* 1020 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1024 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter bstrPermission */

/* 1026 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1030 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter bPermitted */

/* 1032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1036 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1040 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckSecurity */

/* 1044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1052 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1054 */	NdrFcShort( 0xe ),	/* 14 */
/* 1056 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1058 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1060 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulFlags */

/* 1068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bQuiet */

/* 1074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1078 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pbSuccess */

/* 1080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1084 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1088 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyPermission */

/* 1092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1106 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pFrom */

/* 1116 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1120 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Enable */

/* 1128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Terminate */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RefCount */

/* 1188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1202 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1204 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdwRef */

/* 1212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CLSID */

/* 1224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1238 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1240 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclsid */

/* 1248 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1252 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IID */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0xa ),	/* 10 */
/* 1268 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter piid */

/* 1284 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1288 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 1290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_World */

/* 1296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0xb ),	/* 11 */
/* 1304 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1310 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1312 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppworld */

/* 1320 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1324 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 1326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_World */

/* 1332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0xc ),	/* 12 */
/* 1340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1346 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1348 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pworld */

/* 1356 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1360 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 1362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertyName */

/* 1368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0xf ),	/* 15 */
/* 1376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1382 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1384 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 1392 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1396 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 1398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PropertyName */

/* 1404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1418 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1420 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 1428 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1432 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 1434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Type */

/* 1440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1456 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 1464 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1468 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Type */

/* 1476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1490 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1492 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 1500 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1504 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 1506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Security */

/* 1512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1526 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppSecurity */

/* 1536 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1540 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 1542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Security */

/* 1548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSecurity */

/* 1572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1576 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsOfType */

/* 1584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1592 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1598 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1600 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 1608 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1612 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pbool */

/* 1614 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1618 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToAscii */

/* 1626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1640 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1642 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 1650 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1654 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 1656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1658 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Dump */

/* 1662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1676 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1678 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1706 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1708 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pobjectproperty */

/* 1716 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1720 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 1722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Marshall */

/* 1728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1736 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1742 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1744 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwOptions */

/* 1752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1754 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmarshallbuffer */

/* 1758 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1760 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1762 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 1764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnMarshall */

/* 1770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1784 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter punmarshallbuffer */

/* 1794 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1798 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 1800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MarshallToScript */

/* 1806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1814 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1818 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1820 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1822 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwOptions */

/* 1830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrContext */

/* 1836 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1840 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pbAsVal */

/* 1842 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1846 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pbstrOut */

/* 1848 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1850 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1852 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1856 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsEmpty */

/* 1860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 1884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1888 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ModuleType */


	/* Procedure get_Count */

/* 1896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1908 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1910 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1912 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter plval */


	/* Parameter retval */

/* 1920 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FirstItem */

/* 1932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1940 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1946 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1948 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1950 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 1956 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1960 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Parameter pvar */

/* 1962 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1966 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Parameter pbool */

/* 1968 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1970 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1972 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1976 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NextItem */

/* 1980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1986 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1988 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1994 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1996 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1998 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2004 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2008 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Parameter pvar */

/* 2010 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2014 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Parameter pbool */

/* 2016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2018 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2020 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2024 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertyAtIndex */

/* 2028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2036 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2042 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2044 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 2058 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2062 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 2064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2066 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 2070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2084 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2086 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppunk */

/* 2094 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2098 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 2100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 2106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2114 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2120 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2122 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 2130 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2134 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 2136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2138 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertAt */

/* 2142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2150 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2156 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2158 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter var */

/* 2172 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2176 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 2178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2180 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Property */

/* 2184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2200 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 2214 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2218 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 2220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Property */

/* 2226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2234 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2242 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter var */

/* 2256 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2260 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 2262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2264 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertySecurity */

/* 2268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2282 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppSecurity */

/* 2298 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2302 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 2304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remove */

/* 2310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2318 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2324 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2326 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 2334 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2338 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 2340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2342 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAt */

/* 2346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2354 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2360 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2362 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAll */

/* 2382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2390 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2398 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Find */

/* 2412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2420 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2428 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 2436 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2440 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter plval */

/* 2442 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2444 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2450 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddString */

/* 2454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2468 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2470 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 2478 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2482 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 2484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObjectProperty */

/* 2490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2504 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2506 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pobjectproperty */

/* 2514 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2518 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 2520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObjectPropertyExt */

/* 2526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2534 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2536 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2540 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2542 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iid */

/* 2550 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2552 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2554 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pobjectproperty */

/* 2556 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2558 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2560 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 2562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddThing */

/* 2568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2582 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 2592 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2596 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 2598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddBOOL */

/* 2604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2614 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2620 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter boolVal */

/* 2628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2632 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddLong */

/* 2640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2654 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 2664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddShort */

/* 2676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2686 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2692 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sval */

/* 2700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2704 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddDispatch */

/* 2712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2726 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2728 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdisp */

/* 2736 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2740 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 2742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_String */

/* 2748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2756 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2762 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2764 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstr */

/* 2778 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2782 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 2784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_String */

/* 2790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2804 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2806 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstr */

/* 2820 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2824 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 2826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ObjectProperty */

/* 2832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2846 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppobjectproperty */

/* 2862 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2866 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 2868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ObjectProperty */

/* 2874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2882 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2888 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pobjectproperty */

/* 2904 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2908 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 2910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ObjectPropertyExt */

/* 2916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2924 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2926 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2930 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2932 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter iid */

/* 2946 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2950 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter ppobjectproperty */

/* 2952 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2956 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 2958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2960 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Thing */

/* 2964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2970 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2972 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2978 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2980 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2988 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppthing */

/* 2994 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2998 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 3000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3002 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Thing */

/* 3006 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3014 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3020 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3022 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3032 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pthing */

/* 3036 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3038 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3040 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 3042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3044 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BOOL */

/* 3048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3056 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3060 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3062 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3064 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pboolVal */

/* 3078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3082 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BOOL */

/* 3090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3098 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3100 */	NdrFcShort( 0xe ),	/* 14 */
/* 3102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3104 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3106 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boolVal */

/* 3120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3124 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Long */

/* 3132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3140 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plval */

/* 3162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Long */

/* 3174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3182 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3184 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3190 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lval */

/* 3204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Dispatch */

/* 3216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3222 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3230 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdisp */

/* 3246 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3250 */	NdrFcShort( 0x4c8 ),	/* Type Offset=1224 */

	/* Return value */

/* 3252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Dispatch */

/* 3258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3264 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3272 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdisp */

/* 3288 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3292 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 3294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertStringAt */

/* 3300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3314 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3316 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstr */

/* 3330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3334 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 3336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertObjectPropertyAt */

/* 3342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3350 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3356 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pobjectproperty */

/* 3372 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3376 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 3378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertThingAt */

/* 3384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3392 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3398 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pthing */

/* 3414 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3418 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 3420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertBOOLAt */

/* 3426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3432 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3436 */	NdrFcShort( 0xe ),	/* 14 */
/* 3438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3442 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boolVal */

/* 3456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3460 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertLongAt */

/* 3468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3476 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3478 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3484 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lval */

/* 3498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertShortAt */

/* 3510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3520 */	NdrFcShort( 0xe ),	/* 14 */
/* 3522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3524 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3526 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sval */

/* 3540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3544 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertDispatchAt */

/* 3552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3560 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3566 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdisp */

/* 3582 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3586 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 3588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveString */

/* 3594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3608 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3610 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 3618 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3622 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 3624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3626 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveObjectProperty */

/* 3630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3644 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3646 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pobjectproperty */

/* 3654 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3658 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 3660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveThing */

/* 3666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3672 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3680 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3682 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 3690 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3694 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 3696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveBOOL */

/* 3702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3712 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3716 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3718 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter boolVal */

/* 3726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3730 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveLong */

/* 3738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3744 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3752 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3754 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 3762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveShort */

/* 3774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3784 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3788 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3790 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sval */

/* 3798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3802 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveDispatch */

/* 3810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x4d ),	/* 77 */
/* 3818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3826 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdisp */

/* 3834 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3838 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 3840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyTo */

/* 3846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x4e ),	/* 78 */
/* 3854 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3860 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3862 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppropertylist */

/* 3870 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3874 */	NdrFcShort( 0x4cc ),	/* Type Offset=1228 */

	/* Return value */

/* 3876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Property */

/* 3882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3890 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3896 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3898 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3902 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3906 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3910 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pvar */

/* 3912 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3916 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 3918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Property */

/* 3924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3930 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3932 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3938 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3940 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3948 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3952 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter var */

/* 3954 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3958 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 3960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3962 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertyExt */

/* 3966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3972 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3974 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3980 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3982 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3990 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3994 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter nHashOrig */

/* 3996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 4002 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4006 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 4008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4010 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PropertyInt */

/* 4014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x25 ),	/* 37 */
/* 4022 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4028 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4030 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4034 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4038 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4042 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter var */

/* 4044 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4048 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter pSecurity */

/* 4050 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4052 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4054 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 4056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4058 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertySecurity */

/* 4062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4068 */	NdrFcShort( 0x26 ),	/* 38 */
/* 4070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4076 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4078 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4086 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4090 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppSecurity */

/* 4092 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4096 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 4098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertySecurityExt */

/* 4104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4110 */	NdrFcShort( 0x27 ),	/* 39 */
/* 4112 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4118 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4120 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4128 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4132 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter nHashOrig */

/* 4134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppSecurity */

/* 4140 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4142 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4144 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 4146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4148 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remove */

/* 4152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x28 ),	/* 40 */
/* 4160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4166 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4168 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4176 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4180 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 4182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ScriptPath */


	/* Procedure put_ModuleProgID */


	/* Procedure RemoveInt */

/* 4188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x29 ),	/* 41 */
/* 4196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4204 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */


	/* Parameter bstr */


	/* Parameter bstrName */

/* 4212 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4216 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 4218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAll */

/* 4224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x2a ),	/* 42 */
/* 4232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4238 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4240 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_String */

/* 4254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4260 */	NdrFcShort( 0x2b ),	/* 43 */
/* 4262 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4268 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4270 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4272 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4278 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4282 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pbstr */

/* 4284 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4286 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4288 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 4290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_String */

/* 4296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4304 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4310 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4312 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4320 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4324 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter bstr */

/* 4326 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4330 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 4332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ObjectProperty */

/* 4338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4344 */	NdrFcShort( 0x2d ),	/* 45 */
/* 4346 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4352 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4354 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4362 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4366 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppobjectproperty */

/* 4368 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4372 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 4374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ObjectProperty */

/* 4380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0x2e ),	/* 46 */
/* 4388 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4394 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4396 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4404 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4408 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pobjectproperty */

/* 4410 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4414 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 4416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ObjectPropertyExt */

/* 4422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4428 */	NdrFcShort( 0x2f ),	/* 47 */
/* 4430 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4432 */	NdrFcShort( 0x44 ),	/* 68 */
/* 4434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4436 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4438 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4446 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4450 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter iid */

/* 4452 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 4454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4456 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter ppobjectproperty */

/* 4458 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4462 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 4464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4466 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Thing */

/* 4470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4476 */	NdrFcShort( 0x30 ),	/* 48 */
/* 4478 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4484 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4486 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4494 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4496 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4498 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppthing */

/* 4500 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4502 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4504 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 4506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4508 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Thing */

/* 4512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4518 */	NdrFcShort( 0x31 ),	/* 49 */
/* 4520 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4526 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4528 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4536 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4540 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pthing */

/* 4542 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4546 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 4548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BOOL */

/* 4554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0x32 ),	/* 50 */
/* 4562 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4568 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4570 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4578 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4582 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pboolVal */

/* 4584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4588 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BOOL */

/* 4596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4602 */	NdrFcShort( 0x33 ),	/* 51 */
/* 4604 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4606 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4612 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4620 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4624 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter boolVal */

/* 4626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4630 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Long */

/* 4638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4644 */	NdrFcShort( 0x34 ),	/* 52 */
/* 4646 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4652 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4654 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4662 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4666 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter plval */

/* 4668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Long */

/* 4680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x35 ),	/* 53 */
/* 4688 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4694 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4696 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4704 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4708 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter lval */

/* 4710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Short */

/* 4722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x36 ),	/* 54 */
/* 4730 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4734 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4736 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4738 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4746 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4750 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter psval */

/* 4752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4756 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4760 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Short */

/* 4764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4770 */	NdrFcShort( 0x37 ),	/* 55 */
/* 4772 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4774 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4778 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4780 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4788 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4792 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter sval */

/* 4794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4798 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Dispatch */

/* 4806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4812 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4814 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4820 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4822 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4830 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4834 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppdisp */

/* 4836 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4840 */	NdrFcShort( 0x4c8 ),	/* Type Offset=1224 */

	/* Return value */

/* 4842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Dispatch */

/* 4848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4854 */	NdrFcShort( 0x39 ),	/* 57 */
/* 4856 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4862 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4864 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4868 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4872 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4876 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pdisp */

/* 4878 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4882 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 4884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4886 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValid */

/* 4890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x3a ),	/* 58 */
/* 4898 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4902 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4904 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4906 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4914 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4918 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pbool */

/* 4920 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4924 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyTo */

/* 4932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4938 */	NdrFcShort( 0x3b ),	/* 59 */
/* 4940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4946 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4948 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppropertymap */

/* 4956 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4960 */	NdrFcShort( 0x4de ),	/* Type Offset=1246 */

	/* Return value */

/* 4962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Flags */


	/* Procedure get_ID */

/* 4968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4974 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4976 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4980 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4982 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4984 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter plVal */


	/* Parameter id */

/* 4992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Flags */


	/* Procedure put_ID */

/* 5004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5018 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5020 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lVal */


	/* Parameter id */

/* 5028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_InstanceType */

/* 5040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x1e ),	/* 30 */
/* 5048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5054 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5056 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 5064 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5068 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 5070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsExemplar */

/* 5076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5082 */	NdrFcShort( 0x1f ),	/* 31 */
/* 5084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5090 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 5100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5104 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsWizard */

/* 5112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5118 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 5136 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5140 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_OwnerInt */

/* 5148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5154 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5156 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5162 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5164 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pThing */

/* 5172 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5174 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5176 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 5178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5180 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsStub */

/* 5184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5190 */	NdrFcShort( 0x23 ),	/* 35 */
/* 5192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5200 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 5208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5212 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reload */


	/* Procedure put_IsStubInt */

/* 5220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5228 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5230 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5234 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5236 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bReinstall */


	/* Parameter boolval */

/* 5244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5248 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5252 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Exemplar */

/* 5256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5262 */	NdrFcShort( 0x25 ),	/* 37 */
/* 5264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5270 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5272 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */

/* 5280 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5284 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 5286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ExemplarInt */

/* 5292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5298 */	NdrFcShort( 0x26 ),	/* 38 */
/* 5300 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5306 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5308 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 5316 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5320 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 5322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindWithin */

/* 5328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5334 */	NdrFcShort( 0x27 ),	/* 39 */
/* 5336 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5342 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5344 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5352 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5356 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter varQuiet */

/* 5358 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5360 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5362 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter ppthing */

/* 5364 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5366 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5368 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 5370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5372 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveIntoExt */

/* 5376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5382 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5390 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 5400 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5404 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 5406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveIntoInt */

/* 5412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x29 ),	/* 41 */
/* 5420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 5436 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5440 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 5442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValidProperty */

/* 5448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x2a ),	/* 42 */
/* 5456 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5460 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5462 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5464 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5472 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5476 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pbool */

/* 5478 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5482 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValidInstanceProperty */

/* 5490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5496 */	NdrFcShort( 0x2b ),	/* 43 */
/* 5498 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5502 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5504 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5506 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5514 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5518 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pbool */

/* 5520 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5524 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateAndAddProperty */

/* 5532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5538 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5540 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5546 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5548 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrProgID */

/* 5556 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5560 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter bstrName */

/* 5562 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5566 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter var */

/* 5568 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5570 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5572 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 5574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5576 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddProperty */

/* 5580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5586 */	NdrFcShort( 0x2d ),	/* 45 */
/* 5588 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 5590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5594 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5596 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5604 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5608 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter var */

/* 5610 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5614 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter flags */

/* 5616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5618 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5620 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter permission */

/* 5622 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5624 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5626 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter type */

/* 5628 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5630 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 5632 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter bstrIID */

/* 5634 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5636 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 5638 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter bstrType */

/* 5640 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5642 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 5644 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 5646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5648 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 5650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddPropertyExt */

/* 5652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5658 */	NdrFcShort( 0x2e ),	/* 46 */
/* 5660 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 5662 */	NdrFcShort( 0x5c ),	/* 92 */
/* 5664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5666 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5668 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5676 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5680 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter var */

/* 5682 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5686 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter flags */

/* 5688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5690 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter perms */

/* 5694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5696 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 5700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5702 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter riid */

/* 5706 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 5708 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5710 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter bstrType */

/* 5712 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5714 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5716 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 5718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5720 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 5722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddPropertyInt */

/* 5724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5730 */	NdrFcShort( 0x2f ),	/* 47 */
/* 5732 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 5734 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5738 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5740 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5748 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5750 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5752 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter var */

/* 5754 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5756 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5758 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter pExemplar */

/* 5760 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5762 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5764 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter psbits */

/* 5766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5768 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter perms */

/* 5772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5774 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 5778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5780 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrIID */

/* 5784 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5786 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5788 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter bstrType */

/* 5790 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5792 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 5794 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 5796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5798 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 5800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveProperty */

/* 5802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5808 */	NdrFcShort( 0x30 ),	/* 48 */
/* 5810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5816 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5818 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5826 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5830 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 5832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteProperty */

/* 5838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5844 */	NdrFcShort( 0x31 ),	/* 49 */
/* 5846 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5852 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5854 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5862 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5866 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pvar */

/* 5868 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5870 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5872 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 5874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5876 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Property */

/* 5880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5886 */	NdrFcShort( 0x32 ),	/* 50 */
/* 5888 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5894 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5896 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5904 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5908 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pvar */

/* 5910 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5914 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 5916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Property */

/* 5922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5928 */	NdrFcShort( 0x33 ),	/* 51 */
/* 5930 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5936 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5938 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5942 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5946 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5950 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter var */

/* 5952 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5954 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5956 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 5958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5960 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertyExt */

/* 5964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5970 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5972 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5978 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5980 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5988 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5992 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter nHashOrig */

/* 5994 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppexemplar */

/* 6000 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6002 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6004 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pvar */

/* 6006 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6008 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6010 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 6012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6014 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InstanceProperty */

/* 6018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6024 */	NdrFcShort( 0x35 ),	/* 53 */
/* 6026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6032 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6034 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6042 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6046 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pExemplar */

/* 6048 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6052 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 6054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertySecurity */

/* 6060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6066 */	NdrFcShort( 0x36 ),	/* 54 */
/* 6068 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6072 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6074 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6076 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6080 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6084 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6088 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppSecurity */

/* 6090 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6094 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 6096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6098 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PropertySecurityExt */

/* 6102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0x37 ),	/* 55 */
/* 6110 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6114 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6116 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6118 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6126 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6130 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter nHashOrig */

/* 6132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppexemplar */

/* 6138 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6142 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pfInstance */

/* 6144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6148 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppSecurity */

/* 6150 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6152 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6154 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 6156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6158 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_InstanceProperties */

/* 6162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6168 */	NdrFcShort( 0x38 ),	/* 56 */
/* 6170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6176 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pppropertymap */

/* 6186 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6190 */	NdrFcShort( 0x4f0 ),	/* Type Offset=1264 */

	/* Return value */

/* 6192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Properties */

/* 6198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6204 */	NdrFcShort( 0x39 ),	/* 57 */
/* 6206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6212 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6214 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pppropertymap */

/* 6222 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6226 */	NdrFcShort( 0x4f0 ),	/* Type Offset=1264 */

	/* Return value */

/* 6228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyPropertiesTo */

/* 6234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6240 */	NdrFcShort( 0x3a ),	/* 58 */
/* 6242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppropertymap */

/* 6258 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6262 */	NdrFcShort( 0x4de ),	/* Type Offset=1246 */

	/* Return value */

/* 6264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValidMethod */

/* 6270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6276 */	NdrFcShort( 0x3b ),	/* 59 */
/* 6278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6284 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6286 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6294 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6298 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pbool */

/* 6300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6304 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValidInstanceMethod */

/* 6312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0x3c ),	/* 60 */
/* 6320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6328 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6336 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6340 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pbool */

/* 6342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6346 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateAndAddMethod */

/* 6354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6360 */	NdrFcShort( 0x3d ),	/* 61 */
/* 6362 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 6364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 6370 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6374 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lFlags */

/* 6378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmodule */

/* 6384 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6388 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Parameter bstrName */

/* 6390 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6394 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter varFuncName */

/* 6396 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6400 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter varPsbits */

/* 6402 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6404 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6406 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter varPermissions */

/* 6408 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6410 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 6412 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 6414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6416 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 6418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateAndAddMethodExt */

/* 6420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6426 */	NdrFcShort( 0x3e ),	/* 62 */
/* 6428 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6430 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6434 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 6436 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lFlags */

/* 6444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmodule */

/* 6450 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6454 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Parameter bstrFuncName */

/* 6456 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6460 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter bstrMethName */

/* 6462 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6464 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6466 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter psbits */

/* 6468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6470 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter permissions */

/* 6474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6476 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6482 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddMethod */

/* 6486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6492 */	NdrFcShort( 0x3f ),	/* 63 */
/* 6494 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 6496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6502 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6510 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6514 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pmethod */

/* 6516 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6520 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Parameter varPsbits */

/* 6522 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6526 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter varPermissions */

/* 6528 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6530 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6532 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 6534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6536 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 6538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddMethodExt */

/* 6540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6546 */	NdrFcShort( 0x40 ),	/* 64 */
/* 6548 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6550 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6554 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6556 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6568 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pmethod */

/* 6570 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6574 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Parameter psbits */

/* 6576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter permissions */

/* 6582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6584 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6590 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddMethodInt */

/* 6594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6600 */	NdrFcShort( 0x41 ),	/* 65 */
/* 6602 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6604 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6608 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6610 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6618 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6622 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pmethod */

/* 6624 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6626 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6628 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Parameter pExemplar */

/* 6630 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6634 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter psbits */

/* 6636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6638 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter permissions */

/* 6642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6644 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6650 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveMethod */

/* 6654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6660 */	NdrFcShort( 0x42 ),	/* 66 */
/* 6662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6668 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6670 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6678 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6682 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 6684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Method */

/* 6690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6696 */	NdrFcShort( 0x43 ),	/* 67 */
/* 6698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6704 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6706 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6714 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6718 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppmethod */

/* 6720 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6724 */	NdrFcShort( 0x518 ),	/* Type Offset=1304 */

	/* Return value */

/* 6726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Method */

/* 6732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6738 */	NdrFcShort( 0x44 ),	/* 68 */
/* 6740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6746 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6748 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6756 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6760 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pmethod */

/* 6762 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6766 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Return value */

/* 6768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6770 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MethodExt */

/* 6774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6780 */	NdrFcShort( 0x45 ),	/* 69 */
/* 6782 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6788 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6790 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6798 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6802 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter nHashOrig */

/* 6804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppexemplar */

/* 6810 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6814 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppmethod */

/* 6816 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6818 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6820 */	NdrFcShort( 0x518 ),	/* Type Offset=1304 */

	/* Return value */

/* 6822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6824 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MethodSecurity */

/* 6828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6834 */	NdrFcShort( 0x46 ),	/* 70 */
/* 6836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6842 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6844 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6852 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6856 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppSecurity */

/* 6858 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6862 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 6864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MethodSecurityExt */

/* 6870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6876 */	NdrFcShort( 0x47 ),	/* 71 */
/* 6878 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6882 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6884 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6886 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6894 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6898 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter nHashOrig */

/* 6900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppexemplar */

/* 6906 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6910 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pfInstance */

/* 6912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6916 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppSecurity */

/* 6918 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6920 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6922 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 6924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6926 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_InstanceMethods */

/* 6930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6936 */	NdrFcShort( 0x48 ),	/* 72 */
/* 6938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6944 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6946 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pppropertymap */

/* 6954 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6958 */	NdrFcShort( 0x4f0 ),	/* Type Offset=1264 */

	/* Return value */

/* 6960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Methods */

/* 6966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6972 */	NdrFcShort( 0x49 ),	/* 73 */
/* 6974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6980 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6982 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pppropertymap */

/* 6990 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6994 */	NdrFcShort( 0x4f0 ),	/* Type Offset=1264 */

	/* Return value */

/* 6996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyMethodsTo */

/* 7002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7008 */	NdrFcShort( 0x4a ),	/* 74 */
/* 7010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7016 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7018 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppropertymap */

/* 7026 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7030 */	NdrFcShort( 0x4de ),	/* Type Offset=1246 */

	/* Return value */

/* 7032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FireEvent */

/* 7038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0x4b ),	/* 75 */
/* 7046 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7054 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrEvent */

/* 7062 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7066 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter var */

/* 7068 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7072 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 7074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7076 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FireEventExt */

/* 7080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7086 */	NdrFcShort( 0x4c ),	/* 76 */
/* 7088 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7096 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrEvent */

/* 7104 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7108 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pdispparams */

/* 7110 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7114 */	NdrFcShort( 0x542 ),	/* Type Offset=1346 */

	/* Parameter lFlags */

/* 7116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FireEventInt */

/* 7128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7134 */	NdrFcShort( 0x4d ),	/* 77 */
/* 7136 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7142 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7144 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrEvent */

/* 7152 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7156 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pproplist */

/* 7158 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7162 */	NdrFcShort( 0x4cc ),	/* Type Offset=1228 */

	/* Parameter lFlags */

/* 7164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InvokeMethod */

/* 7176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7182 */	NdrFcShort( 0x4e ),	/* 78 */
/* 7184 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7190 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7192 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrMethod */

/* 7200 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7204 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter var */

/* 7206 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7210 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter pvar */

/* 7212 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7214 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7216 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 7218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7220 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InvokeMethodInt */

/* 7224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7230 */	NdrFcShort( 0x4f ),	/* 79 */
/* 7232 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7238 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7240 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pThing */

/* 7248 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7252 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter bstrMethod */

/* 7254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7258 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pproplist */

/* 7260 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7264 */	NdrFcShort( 0x4cc ),	/* Type Offset=1228 */

	/* Parameter pvar */

/* 7266 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7268 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7270 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 7272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7274 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InvokeMethodExt */

/* 7278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7284 */	NdrFcShort( 0x50 ),	/* 80 */
/* 7286 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7292 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7294 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7298 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrMethod */

/* 7302 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7304 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7306 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pdispparams */

/* 7308 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7310 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7312 */	NdrFcShort( 0x542 ),	/* Type Offset=1346 */

	/* Parameter pvar */

/* 7314 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7318 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 7320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7322 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InvokeSuperMethod */

/* 7326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7332 */	NdrFcShort( 0x51 ),	/* 81 */
/* 7334 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7340 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7342 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 7350 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7354 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Parameter pvar */

/* 7356 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7358 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7360 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 7362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7364 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InvokeSuperMethodExt */

/* 7368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7374 */	NdrFcShort( 0x52 ),	/* 82 */
/* 7376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7382 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7384 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7388 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdispparams */

/* 7392 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7396 */	NdrFcShort( 0x542 ),	/* Type Offset=1346 */

	/* Parameter pvar */

/* 7398 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7402 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 7404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentMethodName */

/* 7410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7416 */	NdrFcShort( 0x53 ),	/* 83 */
/* 7418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7424 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7426 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 7434 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7438 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 7440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CurrentMethodName */

/* 7446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7452 */	NdrFcShort( 0x54 ),	/* 84 */
/* 7454 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7460 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7462 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 7470 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7474 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 7476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7478 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 7482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7488 */	NdrFcShort( 0x55 ),	/* 85 */
/* 7490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7496 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7498 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 7506 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7510 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 7512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Name */

/* 7518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7524 */	NdrFcShort( 0x56 ),	/* 86 */
/* 7526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7532 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7534 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 7542 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7546 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 7548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Description */

/* 7554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7560 */	NdrFcShort( 0x57 ),	/* 87 */
/* 7562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7568 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7570 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 7578 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7582 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 7584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Description */

/* 7590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7596 */	NdrFcShort( 0x58 ),	/* 88 */
/* 7598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7604 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7606 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 7614 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7616 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7618 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 7620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7622 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Contents */

/* 7626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7632 */	NdrFcShort( 0x59 ),	/* 89 */
/* 7634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7640 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7642 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppproplist */

/* 7650 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7654 */	NdrFcShort( 0x558 ),	/* Type Offset=1368 */

	/* Return value */

/* 7656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7658 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Container */

/* 7662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7668 */	NdrFcShort( 0x5a ),	/* 90 */
/* 7670 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7676 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7678 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */

/* 7686 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7690 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 7692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7694 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Container */

/* 7698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7704 */	NdrFcShort( 0x5b ),	/* 91 */
/* 7706 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7712 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 7722 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7726 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 7728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Owner */

/* 7734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7740 */	NdrFcShort( 0x5c ),	/* 92 */
/* 7742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7748 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7750 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */

/* 7758 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7762 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 7764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckPropertiesSecurity */

/* 7770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7776 */	NdrFcShort( 0x5d ),	/* 93 */
/* 7778 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7782 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7784 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulFlags */

/* 7794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pboolVal */

/* 7800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7804 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckMethodsSecurity */

/* 7812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7818 */	NdrFcShort( 0x5e ),	/* 94 */
/* 7820 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7824 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7826 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7828 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulFlags */

/* 7836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pboolVal */

/* 7842 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7846 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7850 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckPropertiesSecurityExt */

/* 7854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7860 */	NdrFcShort( 0x5f ),	/* 95 */
/* 7862 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7868 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7870 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulFlags */

/* 7878 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckMethodsSecurityExt */

/* 7890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7896 */	NdrFcShort( 0x60 ),	/* 96 */
/* 7898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7904 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ulFlags */

/* 7914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckPropertySecurity */

/* 7926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7932 */	NdrFcShort( 0x61 ),	/* 97 */
/* 7934 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7938 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7940 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7942 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7950 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7954 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ulFlags */

/* 7956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pboolVal */

/* 7962 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7966 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7970 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckMethodSecurity */

/* 7974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7980 */	NdrFcShort( 0x62 ),	/* 98 */
/* 7982 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7986 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7988 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7990 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7998 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8002 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ulFlags */

/* 8004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8006 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pboolVal */

/* 8010 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8014 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8018 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckPropertySecurityExt */

/* 8022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8028 */	NdrFcShort( 0x63 ),	/* 99 */
/* 8030 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8036 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8038 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8042 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8048 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8050 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ulFlags */

/* 8052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8054 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8060 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckMethodSecurityExt */

/* 8064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8070 */	NdrFcShort( 0x64 ),	/* 100 */
/* 8072 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8078 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8080 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8088 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8092 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ulFlags */

/* 8094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyObjectPropertyChanged */

/* 8106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8112 */	NdrFcShort( 0x65 ),	/* 101 */
/* 8114 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8120 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8122 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pprop */

/* 8130 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8134 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Parameter lHint */

/* 8136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varHintData */

/* 8142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8146 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 8148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8150 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyMethodChanged */

/* 8154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8160 */	NdrFcShort( 0x66 ),	/* 102 */
/* 8162 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8168 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8170 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pmethod */

/* 8178 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8182 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Parameter lHint */

/* 8184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varHintData */

/* 8190 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8194 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 8196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8198 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddString */

/* 8202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8208 */	NdrFcShort( 0x67 ),	/* 103 */
/* 8210 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8216 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8218 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8222 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8226 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8230 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter bstr */

/* 8232 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8234 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8236 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 8238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObjectProperty */

/* 8244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8250 */	NdrFcShort( 0x68 ),	/* 104 */
/* 8252 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8258 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8260 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8268 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8272 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pobjectproperty */

/* 8274 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8278 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 8280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8282 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObjectPropertyExt */

/* 8286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8292 */	NdrFcShort( 0x69 ),	/* 105 */
/* 8294 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8296 */	NdrFcShort( 0x44 ),	/* 68 */
/* 8298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8300 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8302 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8310 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8314 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter iid */

/* 8316 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 8318 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8320 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pobjectproperty */

/* 8322 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8324 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8326 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 8328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8330 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddThing */

/* 8334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8340 */	NdrFcShort( 0x6a ),	/* 106 */
/* 8342 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8348 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8350 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8358 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8362 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pthing */

/* 8364 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8368 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 8370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddBOOL */

/* 8376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8382 */	NdrFcShort( 0x6b ),	/* 107 */
/* 8384 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8386 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8390 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8392 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8400 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8404 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter boolVal */

/* 8406 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8410 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddLong */

/* 8418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8424 */	NdrFcShort( 0x6c ),	/* 108 */
/* 8426 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8432 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8434 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8442 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8446 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter lval */

/* 8448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddShort */

/* 8460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8466 */	NdrFcShort( 0x6d ),	/* 109 */
/* 8468 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8470 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8474 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8476 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8484 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8488 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter sval */

/* 8490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8494 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddDispatch */

/* 8502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8508 */	NdrFcShort( 0x6e ),	/* 110 */
/* 8510 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8516 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8518 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8526 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8530 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pdisp */

/* 8532 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8536 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 8538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_String */

/* 8544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8550 */	NdrFcShort( 0x6f ),	/* 111 */
/* 8552 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8558 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8560 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 8562 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8568 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8572 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pbstr */

/* 8574 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8578 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 8580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_String */

/* 8586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8592 */	NdrFcShort( 0x70 ),	/* 112 */
/* 8594 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8600 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8602 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8606 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8610 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8614 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter bstr */

/* 8616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8620 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 8622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ObjectProperty */

/* 8628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8634 */	NdrFcShort( 0x71 ),	/* 113 */
/* 8636 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8642 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8644 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8652 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8656 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppobjectproperty */

/* 8658 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8662 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 8664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ObjectProperty */

/* 8670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8676 */	NdrFcShort( 0x72 ),	/* 114 */
/* 8678 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8686 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8694 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8696 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8698 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pobjectproperty */

/* 8700 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8702 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8704 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 8706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ObjectPropertyExt */

/* 8712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8718 */	NdrFcShort( 0x73 ),	/* 115 */
/* 8720 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8722 */	NdrFcShort( 0x44 ),	/* 68 */
/* 8724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8726 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8728 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8732 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8736 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8740 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter iid */

/* 8742 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 8744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8746 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter ppobjectproperty */

/* 8748 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8750 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8752 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 8754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8756 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Thing */

/* 8760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8766 */	NdrFcShort( 0x74 ),	/* 116 */
/* 8768 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8774 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8776 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8780 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8784 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8788 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppthing */

/* 8790 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8792 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8794 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 8796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8798 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Thing */

/* 8802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8808 */	NdrFcShort( 0x75 ),	/* 117 */
/* 8810 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8816 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8818 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8826 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8830 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pthing */

/* 8832 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8836 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Return value */

/* 8838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BOOL */

/* 8844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8850 */	NdrFcShort( 0x76 ),	/* 118 */
/* 8852 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8856 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8858 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8860 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8864 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8868 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8872 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pboolVal */

/* 8874 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8878 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BOOL */

/* 8886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8892 */	NdrFcShort( 0x77 ),	/* 119 */
/* 8894 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8896 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8902 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8910 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8914 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter boolVal */

/* 8916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8920 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Long */

/* 8928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8934 */	NdrFcShort( 0x78 ),	/* 120 */
/* 8936 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8940 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8942 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8944 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8952 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8954 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8956 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter plval */

/* 8958 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8966 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Long */

/* 8970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8976 */	NdrFcShort( 0x79 ),	/* 121 */
/* 8978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8984 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8986 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8994 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8998 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter lval */

/* 9000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Short */

/* 9012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9018 */	NdrFcShort( 0x7a ),	/* 122 */
/* 9020 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9024 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9026 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9028 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9032 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 9036 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9040 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter psval */

/* 9042 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9046 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Short */

/* 9054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9060 */	NdrFcShort( 0x7b ),	/* 123 */
/* 9062 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9064 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9068 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9070 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 9078 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9082 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter sval */

/* 9084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9088 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Dispatch */

/* 9096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9102 */	NdrFcShort( 0x7c ),	/* 124 */
/* 9104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9110 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9112 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 9120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9124 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter ppdisp */

/* 9126 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9130 */	NdrFcShort( 0x4c8 ),	/* Type Offset=1224 */

	/* Return value */

/* 9132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Dispatch */

/* 9138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9144 */	NdrFcShort( 0x7d ),	/* 125 */
/* 9146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9152 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9154 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 9162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9166 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter pdisp */

/* 9168 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9172 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 9174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ModuleName */

/* 9180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9186 */	NdrFcShort( 0x1c ),	/* 28 */
/* 9188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9194 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9196 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 9204 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9208 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 9210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Flags */

/* 9216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9222 */	NdrFcShort( 0x1e ),	/* 30 */
/* 9224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9228 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter plVal */

/* 9240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Flags */

/* 9252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9258 */	NdrFcShort( 0x1f ),	/* 31 */
/* 9260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9266 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lVal */

/* 9276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Install */

/* 9288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9294 */	NdrFcShort( 0x20 ),	/* 32 */
/* 9296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9302 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 9312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InvokeByName */

/* 9318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9324 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9326 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 9328 */	NdrFcShort( 0xc ),	/* 12 */
/* 9330 */	NdrFcShort( 0x40 ),	/* 64 */
/* 9332 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 9334 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSubName */

/* 9342 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9346 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Parameter wFlags */

/* 9348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9352 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispid */

/* 9354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 9360 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9364 */	NdrFcShort( 0x542 ),	/* Type Offset=1346 */

	/* Parameter bQuiet */

/* 9366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9370 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 9372 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 9374 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9376 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Parameter phr */

/* 9378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9380 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9386 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InvokeByDispID */

/* 9390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9396 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9398 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9400 */	NdrFcShort( 0x14 ),	/* 20 */
/* 9402 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9404 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 9406 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dispid */

/* 9414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 9420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9424 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 9426 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9430 */	NdrFcShort( 0x542 ),	/* Type Offset=1346 */

	/* Parameter bQuiet */

/* 9432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9436 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 9438 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 9440 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9442 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Parameter phr */

/* 9444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9446 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9452 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Dispatch */

/* 9456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9462 */	NdrFcShort( 0x23 ),	/* 35 */
/* 9464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9470 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppdispatch */

/* 9480 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9484 */	NdrFcShort( 0x4c8 ),	/* Type Offset=1224 */

	/* Return value */

/* 9486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Unload */

/* 9492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9498 */	NdrFcShort( 0x25 ),	/* 37 */
/* 9500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9502 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9508 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bShutdown */

/* 9516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9520 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsInline */


	/* Procedure Validate */

/* 9528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9534 */	NdrFcShort( 0x26 ),	/* 38 */
/* 9536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9540 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */


	/* Parameter pboolVal */

/* 9552 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9556 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 9558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsShutdown */

/* 9564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9570 */	NdrFcShort( 0x27 ),	/* 39 */
/* 9572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9576 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9578 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9580 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pboolVal */

/* 9588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9592 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ModuleCLSID */

/* 9600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9606 */	NdrFcShort( 0x28 ),	/* 40 */
/* 9608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9612 */	NdrFcShort( 0x4c ),	/* 76 */
/* 9614 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pclsid */

/* 9624 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 9626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9628 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 9630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ScriptPath */

/* 9636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9642 */	NdrFcShort( 0x28 ),	/* 40 */
/* 9644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9650 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9652 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9654 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 9660 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9664 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 9666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddScriptlet */

/* 9672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9678 */	NdrFcShort( 0x2a ),	/* 42 */
/* 9680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9686 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9688 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9692 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCode */

/* 9696 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9700 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 9702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Module */

/* 9708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9714 */	NdrFcShort( 0x1e ),	/* 30 */
/* 9716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9722 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppmodule */

/* 9732 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9736 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Return value */

/* 9738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Module */

/* 9744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9750 */	NdrFcShort( 0x1f ),	/* 31 */
/* 9752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9758 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pmodule */

/* 9768 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9772 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 9774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DispID */

/* 9780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9786 */	NdrFcShort( 0x20 ),	/* 32 */
/* 9788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9792 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9794 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9796 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdispid */

/* 9804 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DispID */

/* 9816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9822 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9830 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9832 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dispid */

/* 9840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MethodName */

/* 9852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9858 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9866 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9868 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 9876 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9880 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 9882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MethodName */

/* 9888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9894 */	NdrFcShort( 0x23 ),	/* 35 */
/* 9896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9902 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9904 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 9912 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9916 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 9918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Code */

/* 9924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9930 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9938 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9940 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9942 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 9948 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9950 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9952 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 9954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Code */

/* 9960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9966 */	NdrFcShort( 0x25 ),	/* 37 */
/* 9968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9974 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9976 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9980 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 9984 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9988 */	NdrFcShort( 0x474 ),	/* Type Offset=1140 */

	/* Return value */

/* 9990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9992 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InvokeMethodExt */

/* 9996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10002 */	NdrFcShort( 0x27 ),	/* 39 */
/* 10004 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10008 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10010 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10012 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 10014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdispparams */

/* 10020 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10024 */	NdrFcShort( 0x542 ),	/* Type Offset=1346 */

	/* Parameter phr */

/* 10026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 10032 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 10034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10036 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 10038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10040 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ArgumentsInt */

/* 10044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10050 */	NdrFcShort( 0x28 ),	/* 40 */
/* 10052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10058 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10060 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pproplist */

/* 10068 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10072 */	NdrFcShort( 0x4cc ),	/* Type Offset=1228 */

	/* Return value */

/* 10074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ArgumentsExt */

/* 10080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10086 */	NdrFcShort( 0x29 ),	/* 41 */
/* 10088 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10096 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdispparams */

/* 10104 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10108 */	NdrFcShort( 0x542 ),	/* Type Offset=1346 */

	/* Return value */

/* 10110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Arguments */

/* 10116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10122 */	NdrFcShort( 0x2a ),	/* 42 */
/* 10124 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10130 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10132 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 10140 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10144 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 10146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10148 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Validate */

/* 10152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10158 */	NdrFcShort( 0x2b ),	/* 43 */
/* 10160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10164 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10166 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10168 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pboolVal */

/* 10176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10180 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const vwprop_MIDL_TYPE_FORMAT_STRING vwprop__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0x590d9854 ),	/* 1494063188 */
/*  8 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 10 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 12 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 14 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 16 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 18 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 20 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 22 */	NdrFcLong( 0x590d9852 ),	/* 1494063186 */
/* 26 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 28 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 30 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 32 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 34 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 36 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 38 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 40 */	NdrFcLong( 0x590d9842 ),	/* 1494063170 */
/* 44 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 46 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 48 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 50 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 52 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 54 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 56 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 58 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2) */
/* 60 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 62 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (20) */
/* 64 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 66 */	NdrFcShort( 0x400 ),	/* Offset= 1024 (1090) */
/* 68 */	
			0x13, 0x0,	/* FC_OP */
/* 70 */	NdrFcShort( 0x3e8 ),	/* Offset= 1000 (1070) */
/* 72 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 74 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 76 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 78 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 80 */	NdrFcShort( 0x2 ),	/* Offset= 2 (82) */
/* 82 */	NdrFcShort( 0x10 ),	/* 16 */
/* 84 */	NdrFcShort( 0x2f ),	/* 47 */
/* 86 */	NdrFcLong( 0x14 ),	/* 20 */
/* 90 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 92 */	NdrFcLong( 0x3 ),	/* 3 */
/* 96 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 98 */	NdrFcLong( 0x11 ),	/* 17 */
/* 102 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 104 */	NdrFcLong( 0x2 ),	/* 2 */
/* 108 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 110 */	NdrFcLong( 0x4 ),	/* 4 */
/* 114 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 116 */	NdrFcLong( 0x5 ),	/* 5 */
/* 120 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 122 */	NdrFcLong( 0xb ),	/* 11 */
/* 126 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 128 */	NdrFcLong( 0xa ),	/* 10 */
/* 132 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 134 */	NdrFcLong( 0x6 ),	/* 6 */
/* 138 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (370) */
/* 140 */	NdrFcLong( 0x7 ),	/* 7 */
/* 144 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 146 */	NdrFcLong( 0x8 ),	/* 8 */
/* 150 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (376) */
/* 152 */	NdrFcLong( 0xd ),	/* 13 */
/* 156 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (402) */
/* 158 */	NdrFcLong( 0x9 ),	/* 9 */
/* 162 */	NdrFcShort( 0x102 ),	/* Offset= 258 (420) */
/* 164 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 168 */	NdrFcShort( 0x10e ),	/* Offset= 270 (438) */
/* 170 */	NdrFcLong( 0x24 ),	/* 36 */
/* 174 */	NdrFcShort( 0x336 ),	/* Offset= 822 (996) */
/* 176 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 180 */	NdrFcShort( 0x330 ),	/* Offset= 816 (996) */
/* 182 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 186 */	NdrFcShort( 0x32e ),	/* Offset= 814 (1000) */
/* 188 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 192 */	NdrFcShort( 0x32c ),	/* Offset= 812 (1004) */
/* 194 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 198 */	NdrFcShort( 0x32a ),	/* Offset= 810 (1008) */
/* 200 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 204 */	NdrFcShort( 0x328 ),	/* Offset= 808 (1012) */
/* 206 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 210 */	NdrFcShort( 0x326 ),	/* Offset= 806 (1016) */
/* 212 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 216 */	NdrFcShort( 0x324 ),	/* Offset= 804 (1020) */
/* 218 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 222 */	NdrFcShort( 0x30e ),	/* Offset= 782 (1004) */
/* 224 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 228 */	NdrFcShort( 0x30c ),	/* Offset= 780 (1008) */
/* 230 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 234 */	NdrFcShort( 0x316 ),	/* Offset= 790 (1024) */
/* 236 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 240 */	NdrFcShort( 0x30c ),	/* Offset= 780 (1020) */
/* 242 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 246 */	NdrFcShort( 0x30e ),	/* Offset= 782 (1028) */
/* 248 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 252 */	NdrFcShort( 0x30c ),	/* Offset= 780 (1032) */
/* 254 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 258 */	NdrFcShort( 0x30a ),	/* Offset= 778 (1036) */
/* 260 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 264 */	NdrFcShort( 0x308 ),	/* Offset= 776 (1040) */
/* 266 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 270 */	NdrFcShort( 0x306 ),	/* Offset= 774 (1044) */
/* 272 */	NdrFcLong( 0x10 ),	/* 16 */
/* 276 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 278 */	NdrFcLong( 0x12 ),	/* 18 */
/* 282 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 284 */	NdrFcLong( 0x13 ),	/* 19 */
/* 288 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 290 */	NdrFcLong( 0x15 ),	/* 21 */
/* 294 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 296 */	NdrFcLong( 0x16 ),	/* 22 */
/* 300 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 302 */	NdrFcLong( 0x17 ),	/* 23 */
/* 306 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 308 */	NdrFcLong( 0xe ),	/* 14 */
/* 312 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (1052) */
/* 314 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 318 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (1062) */
/* 320 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 324 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (1066) */
/* 326 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 330 */	NdrFcShort( 0x2a2 ),	/* Offset= 674 (1004) */
/* 332 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 336 */	NdrFcShort( 0x2a0 ),	/* Offset= 672 (1008) */
/* 338 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 342 */	NdrFcShort( 0x29e ),	/* Offset= 670 (1012) */
/* 344 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 348 */	NdrFcShort( 0x294 ),	/* Offset= 660 (1008) */
/* 350 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 354 */	NdrFcShort( 0x28e ),	/* Offset= 654 (1008) */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* Offset= 0 (360) */
/* 362 */	NdrFcLong( 0x1 ),	/* 1 */
/* 366 */	NdrFcShort( 0x0 ),	/* Offset= 0 (366) */
/* 368 */	NdrFcShort( 0xffff ),	/* Offset= -1 (367) */
/* 370 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 376 */	
			0x13, 0x0,	/* FC_OP */
/* 378 */	NdrFcShort( 0xe ),	/* Offset= 14 (392) */
/* 380 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 382 */	NdrFcShort( 0x2 ),	/* 2 */
/* 384 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 386 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 390 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 392 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 396 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (380) */
/* 398 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 400 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 402 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 414 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 416 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 418 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 420 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 422 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 432 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 434 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 436 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 438 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 440 */	NdrFcShort( 0x2 ),	/* Offset= 2 (442) */
/* 442 */	
			0x13, 0x0,	/* FC_OP */
/* 444 */	NdrFcShort( 0x216 ),	/* Offset= 534 (978) */
/* 446 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 448 */	NdrFcShort( 0x18 ),	/* 24 */
/* 450 */	NdrFcShort( 0xa ),	/* 10 */
/* 452 */	NdrFcLong( 0x8 ),	/* 8 */
/* 456 */	NdrFcShort( 0x5a ),	/* Offset= 90 (546) */
/* 458 */	NdrFcLong( 0xd ),	/* 13 */
/* 462 */	NdrFcShort( 0x7e ),	/* Offset= 126 (588) */
/* 464 */	NdrFcLong( 0x9 ),	/* 9 */
/* 468 */	NdrFcShort( 0x9e ),	/* Offset= 158 (626) */
/* 470 */	NdrFcLong( 0xc ),	/* 12 */
/* 474 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (674) */
/* 476 */	NdrFcLong( 0x24 ),	/* 36 */
/* 480 */	NdrFcShort( 0x124 ),	/* Offset= 292 (772) */
/* 482 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 486 */	NdrFcShort( 0x140 ),	/* Offset= 320 (806) */
/* 488 */	NdrFcLong( 0x10 ),	/* 16 */
/* 492 */	NdrFcShort( 0x15a ),	/* Offset= 346 (838) */
/* 494 */	NdrFcLong( 0x2 ),	/* 2 */
/* 498 */	NdrFcShort( 0x174 ),	/* Offset= 372 (870) */
/* 500 */	NdrFcLong( 0x3 ),	/* 3 */
/* 504 */	NdrFcShort( 0x18e ),	/* Offset= 398 (902) */
/* 506 */	NdrFcLong( 0x14 ),	/* 20 */
/* 510 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (934) */
/* 512 */	NdrFcShort( 0xffff ),	/* Offset= -1 (511) */
/* 514 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 516 */	NdrFcShort( 0x4 ),	/* 4 */
/* 518 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 524 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 526 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 528 */	NdrFcShort( 0x4 ),	/* 4 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	0x13, 0x0,	/* FC_OP */
/* 540 */	NdrFcShort( 0xff6c ),	/* Offset= -148 (392) */
/* 542 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 544 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 546 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 550 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 552 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 554 */	NdrFcShort( 0x4 ),	/* 4 */
/* 556 */	NdrFcShort( 0x4 ),	/* 4 */
/* 558 */	0x11, 0x0,	/* FC_RP */
/* 560 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (514) */
/* 562 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 564 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 566 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 576 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 580 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 582 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 584 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (402) */
/* 586 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 588 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x6 ),	/* Offset= 6 (600) */
/* 596 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 598 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 600 */	
			0x11, 0x0,	/* FC_RP */
/* 602 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (566) */
/* 604 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 614 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 618 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 620 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 622 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (420) */
/* 624 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 626 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x6 ),	/* Offset= 6 (638) */
/* 634 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 636 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 638 */	
			0x11, 0x0,	/* FC_RP */
/* 640 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (604) */
/* 642 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 644 */	NdrFcShort( 0x4 ),	/* 4 */
/* 646 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 652 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 654 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 656 */	NdrFcShort( 0x4 ),	/* 4 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	0x13, 0x0,	/* FC_OP */
/* 668 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1070) */
/* 670 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 672 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 674 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x6 ),	/* Offset= 6 (686) */
/* 682 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 684 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 686 */	
			0x11, 0x0,	/* FC_RP */
/* 688 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (642) */
/* 690 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 692 */	NdrFcLong( 0x2f ),	/* 47 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 702 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 704 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 706 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 708 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 712 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 714 */	NdrFcShort( 0x4 ),	/* 4 */
/* 716 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 718 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 720 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 722 */	NdrFcShort( 0x10 ),	/* 16 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0xa ),	/* Offset= 10 (736) */
/* 728 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 730 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 732 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (690) */
/* 734 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 736 */	
			0x13, 0x0,	/* FC_OP */
/* 738 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (708) */
/* 740 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 744 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 750 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 752 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 754 */	NdrFcShort( 0x4 ),	/* 4 */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	0x13, 0x0,	/* FC_OP */
/* 766 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (720) */
/* 768 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 772 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x6 ),	/* Offset= 6 (784) */
/* 780 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 782 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 784 */	
			0x11, 0x0,	/* FC_RP */
/* 786 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (740) */
/* 788 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 794 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 796 */	NdrFcShort( 0x10 ),	/* 16 */
/* 798 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 800 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 802 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (788) */
			0x5b,		/* FC_END */
/* 806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 808 */	NdrFcShort( 0x18 ),	/* 24 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0xa ),	/* Offset= 10 (822) */
/* 814 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 816 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 818 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (794) */
/* 820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 822 */	
			0x11, 0x0,	/* FC_RP */
/* 824 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (566) */
/* 826 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 830 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 836 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 838 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 844 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 846 */	NdrFcShort( 0x4 ),	/* 4 */
/* 848 */	NdrFcShort( 0x4 ),	/* 4 */
/* 850 */	0x13, 0x0,	/* FC_OP */
/* 852 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (826) */
/* 854 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 856 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 858 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 860 */	NdrFcShort( 0x2 ),	/* 2 */
/* 862 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 868 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 870 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 874 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 876 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 878 */	NdrFcShort( 0x4 ),	/* 4 */
/* 880 */	NdrFcShort( 0x4 ),	/* 4 */
/* 882 */	0x13, 0x0,	/* FC_OP */
/* 884 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (858) */
/* 886 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 888 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 890 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 892 */	NdrFcShort( 0x4 ),	/* 4 */
/* 894 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 900 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 902 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 906 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 908 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 910 */	NdrFcShort( 0x4 ),	/* 4 */
/* 912 */	NdrFcShort( 0x4 ),	/* 4 */
/* 914 */	0x13, 0x0,	/* FC_OP */
/* 916 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (890) */
/* 918 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 920 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 922 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 932 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 934 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 938 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 940 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 942 */	NdrFcShort( 0x4 ),	/* 4 */
/* 944 */	NdrFcShort( 0x4 ),	/* 4 */
/* 946 */	0x13, 0x0,	/* FC_OP */
/* 948 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (922) */
/* 950 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 952 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 954 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 958 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 960 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 962 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 966 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 968 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 970 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 972 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 974 */	NdrFcShort( 0xffec ),	/* Offset= -20 (954) */
/* 976 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 978 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 980 */	NdrFcShort( 0x28 ),	/* 40 */
/* 982 */	NdrFcShort( 0xffec ),	/* Offset= -20 (962) */
/* 984 */	NdrFcShort( 0x0 ),	/* Offset= 0 (984) */
/* 986 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 988 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 990 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 992 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (446) */
/* 994 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 996 */	
			0x13, 0x0,	/* FC_OP */
/* 998 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (720) */
/* 1000 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1002 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1004 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1006 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1008 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1010 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1012 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1014 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1016 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1018 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1020 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1022 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1024 */	
			0x13, 0x0,	/* FC_OP */
/* 1026 */	NdrFcShort( 0xfd70 ),	/* Offset= -656 (370) */
/* 1028 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1030 */	NdrFcShort( 0xfd72 ),	/* Offset= -654 (376) */
/* 1032 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1034 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (402) */
/* 1036 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1038 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (420) */
/* 1040 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1042 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (438) */
/* 1044 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1046 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1048) */
/* 1048 */	
			0x13, 0x0,	/* FC_OP */
/* 1050 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1070) */
/* 1052 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1054 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1056 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1058 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1060 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1062 */	
			0x13, 0x0,	/* FC_OP */
/* 1064 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1052) */
/* 1066 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1068 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1070 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1072 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1076) */
/* 1078 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1080 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1082 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1084 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1086 */	NdrFcShort( 0xfc0a ),	/* Offset= -1014 (72) */
/* 1088 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1090 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0xfbfa ),	/* Offset= -1030 (68) */
/* 1100 */	
			0x12, 0x0,	/* FC_UP */
/* 1102 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1070) */
/* 1104 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1100) */
/* 1114 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1116 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1118 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1120 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1122 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1126) */
/* 1126 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0xfd0a ),	/* Offset= -758 (376) */
/* 1136 */	
			0x12, 0x0,	/* FC_UP */
/* 1138 */	NdrFcShort( 0xfd16 ),	/* Offset= -746 (392) */
/* 1140 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1144 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1136) */
/* 1150 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1152 */	NdrFcShort( 0xfe9a ),	/* Offset= -358 (794) */
/* 1154 */	
			0x11, 0x0,	/* FC_RP */
/* 1156 */	NdrFcShort( 0xfe96 ),	/* Offset= -362 (794) */
/* 1158 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1160 */	NdrFcLong( 0x590d9832 ),	/* 1494063154 */
/* 1164 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1166 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1168 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1170 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1172 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1174 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1176 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1178 */	NdrFcLong( 0x590d9830 ),	/* 1494063152 */
/* 1182 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1184 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1186 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1188 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1190 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1192 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1194 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1196 */	NdrFcShort( 0xfb7a ),	/* Offset= -1158 (38) */
/* 1198 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1200 */	NdrFcLong( 0x590d9840 ),	/* 1494063168 */
/* 1204 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1206 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1208 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1210 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1212 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1214 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1216 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1218 */	NdrFcShort( 0xfcd0 ),	/* Offset= -816 (402) */
/* 1220 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1222 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (1198) */
/* 1224 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1226 */	NdrFcShort( 0xfcda ),	/* Offset= -806 (420) */
/* 1228 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1230 */	NdrFcLong( 0x590d9846 ),	/* 1494063174 */
/* 1234 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1236 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1238 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1240 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1242 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1244 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1246 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1248 */	NdrFcLong( 0x590d9848 ),	/* 1494063176 */
/* 1252 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1254 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1256 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1258 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1260 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1262 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1264 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1266 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1246) */
/* 1268 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1270 */	NdrFcLong( 0x590d984a ),	/* 1494063178 */
/* 1274 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1276 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1278 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1280 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1282 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1284 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1286 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1288 */	NdrFcLong( 0x590d9850 ),	/* 1494063184 */
/* 1292 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1294 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1296 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1298 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1300 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1302 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1304 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1306 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1286) */
/* 1308 */	
			0x11, 0x0,	/* FC_RP */
/* 1310 */	NdrFcShort( 0x24 ),	/* Offset= 36 (1346) */
/* 1312 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1320 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1322 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1326 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1328 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1330 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (1104) */
/* 1332 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1334 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1336 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1338 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1340 */	NdrFcShort( 0xc ),	/* 12 */
/* 1342 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1344 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1346 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1348 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1360) */
/* 1354 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1356 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1358 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1360 */	
			0x12, 0x0,	/* FC_UP */
/* 1362 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1312) */
/* 1364 */	
			0x12, 0x0,	/* FC_UP */
/* 1366 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1334) */
/* 1368 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1370 */	NdrFcShort( 0xff72 ),	/* Offset= -142 (1228) */
/* 1372 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1374 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (1268) */

			0x0
        }
    };

XFG_TRAMPOLINES(VARIANT)
XFG_TRAMPOLINES(BSTR)

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserFree)
            
            }
            ,
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserFree)
            
            }
            

        };



/* Standard interface: __MIDL_itf_vwprop_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IPropertySecurity, ver. 0.0,
   GUID={0x590D9842,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IPropertySecurity_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    48,
    78,
    114,
    150,
    186,
    222,
    258,
    294,
    330,
    366,
    402,
    438,
    474,
    510,
    552,
    594,
    630,
    666,
    702,
    738,
    774,
    810,
    846,
    882,
    924,
    960,
    996,
    1044,
    1092,
    1128
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertySecurity_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &IPropertySecurity_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPropertySecurity_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &IPropertySecurity_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(38) _IPropertySecurityProxyVtbl = 
{
    &IPropertySecurity_ProxyInfo,
    &IID_IPropertySecurity,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::Initialize */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::Cleanup */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_World */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_World */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_Exemplar */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_Exemplar */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_Instance */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_Instance */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_Property */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_Property */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_Permissions */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_Permissions */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_Bits */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_Bits */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_BitState */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_BitState */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_vtType */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_vtType */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_PropertyIID */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_PropertyIID */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_PropertyIIDExt */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_PropertyIIDExt */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::get_PropertyType */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::put_PropertyType */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::Marshall */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::ChangeMode */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::QueryMode */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::CheckSecurity */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::CopyPermission */ ,
    (void *) (INT_PTR) -1 /* IPropertySecurity::Enable */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPropertySecurity_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPropertySecurityStubVtbl =
{
    &IID_IPropertySecurity,
    &IPropertySecurity_ServerInfo,
    38,
    &IPropertySecurity_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IObjectProperty, ver. 0.0,
   GUID={0x590D9840,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IObjectProperty_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1158,
    1188,
    1224,
    1260,
    1296,
    1332,
    222,
    258,
    1368,
    1404,
    1440,
    1476,
    1512,
    1548,
    1584,
    1626,
    1662,
    1692,
    1728,
    1770,
    1806
    };

static const MIDL_STUBLESS_PROXY_INFO IObjectProperty_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &IObjectProperty_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IObjectProperty_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &IObjectProperty_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(28) _IObjectPropertyProxyVtbl = 
{
    &IObjectProperty_ProxyInfo,
    &IID_IObjectProperty,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Terminate */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_RefCount */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_CLSID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_IID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::IsOfType */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::ToAscii */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Dump */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Clone */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Marshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::MarshallToScript */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IObjectProperty_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IObjectPropertyStubVtbl =
{
    &IID_IObjectProperty,
    &IObjectProperty_ServerInfo,
    28,
    &IObjectProperty_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPropertyCollection, ver. 0.0,
   GUID={0x590D9844,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IPropertyCollection_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1158,
    1188,
    1224,
    1260,
    1296,
    1332,
    222,
    258,
    1368,
    1404,
    1440,
    1476,
    1512,
    1548,
    1584,
    1626,
    1662,
    1692,
    1728,
    1770,
    1806,
    1860,
    1896,
    1932,
    1980,
    2028,
    2070
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertyCollection_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &IPropertyCollection_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPropertyCollection_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &IPropertyCollection_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(34) _IPropertyCollectionProxyVtbl = 
{
    &IPropertyCollection_ProxyInfo,
    &IID_IPropertyCollection,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Terminate */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_RefCount */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_CLSID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_IID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::IsOfType */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::ToAscii */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Dump */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Clone */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Marshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::MarshallToScript */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get_IsEmpty */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get_Count */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::FirstItem */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::NextItem */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get_PropertyAtIndex */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get__NewEnum */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPropertyCollection_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPropertyCollectionStubVtbl =
{
    &IID_IPropertyCollection,
    &IPropertyCollection_ServerInfo,
    34,
    &IPropertyCollection_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPropertyList, ver. 0.0,
   GUID={0x590D9846,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IPropertyList_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1158,
    1188,
    1224,
    1260,
    1296,
    1332,
    222,
    258,
    1368,
    1404,
    1440,
    1476,
    1512,
    1548,
    1584,
    1626,
    1662,
    1692,
    1728,
    1770,
    1806,
    1860,
    1896,
    1932,
    1980,
    2028,
    2070,
    2106,
    2142,
    2184,
    2226,
    2268,
    2310,
    2346,
    2382,
    2412,
    2454,
    2490,
    2526,
    2568,
    2604,
    2640,
    2676,
    2712,
    2748,
    2790,
    2832,
    2874,
    2916,
    2964,
    3006,
    3048,
    3090,
    3132,
    3174,
    3216,
    3258,
    3300,
    3342,
    3384,
    3426,
    3468,
    3510,
    3552,
    3594,
    3630,
    3666,
    3702,
    3738,
    3774,
    3810,
    3846
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertyList_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &IPropertyList_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPropertyList_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &IPropertyList_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(79) _IPropertyListProxyVtbl = 
{
    &IPropertyList_ProxyInfo,
    &IID_IPropertyList,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Terminate */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_RefCount */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_CLSID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_IID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::IsOfType */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::ToAscii */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Dump */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Clone */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Marshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::MarshallToScript */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get_IsEmpty */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get_Count */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::FirstItem */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::NextItem */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get_PropertyAtIndex */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::Add */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::InsertAt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::get_Property */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::put_Property */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::get_PropertySecurity */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::Remove */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::RemoveAt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::RemoveAll */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::Find */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::AddString */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::AddObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::AddObjectPropertyExt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::AddThing */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::AddBOOL */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::AddLong */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::AddShort */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::AddDispatch */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::get_String */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::put_String */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::get_ObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::put_ObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::get_ObjectPropertyExt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::get_Thing */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::put_Thing */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::get_BOOL */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::put_BOOL */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::get_Long */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::put_Long */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::get_Dispatch */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::put_Dispatch */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::InsertStringAt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::InsertObjectPropertyAt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::InsertThingAt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::InsertBOOLAt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::InsertLongAt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::InsertShortAt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::InsertDispatchAt */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::RemoveString */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::RemoveObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::RemoveThing */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::RemoveBOOL */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::RemoveLong */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::RemoveShort */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::RemoveDispatch */ ,
    (void *) (INT_PTR) -1 /* IPropertyList::CopyTo */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPropertyList_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPropertyListStubVtbl =
{
    &IID_IPropertyList,
    &IPropertyList_ServerInfo,
    79,
    &IPropertyList_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPropertyMap, ver. 0.0,
   GUID={0x590D9848,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IPropertyMap_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1158,
    1188,
    1224,
    1260,
    1296,
    1332,
    222,
    258,
    1368,
    1404,
    1440,
    1476,
    1512,
    1548,
    1584,
    1626,
    1662,
    1692,
    1728,
    1770,
    1806,
    1860,
    1896,
    1932,
    1980,
    2028,
    2070,
    3882,
    3924,
    3966,
    4014,
    4062,
    4104,
    4152,
    4188,
    4224,
    4254,
    4296,
    4338,
    4380,
    4422,
    4470,
    4512,
    4554,
    4596,
    4638,
    4680,
    4722,
    4764,
    4806,
    4848,
    4890,
    4932
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertyMap_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &IPropertyMap_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPropertyMap_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &IPropertyMap_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(60) _IPropertyMapProxyVtbl = 
{
    &IPropertyMap_ProxyInfo,
    &IID_IPropertyMap,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Terminate */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_RefCount */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_CLSID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_IID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::IsOfType */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::ToAscii */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Dump */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Clone */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Marshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::MarshallToScript */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get_IsEmpty */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get_Count */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::FirstItem */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::NextItem */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get_PropertyAtIndex */ ,
    (void *) (INT_PTR) -1 /* IPropertyCollection::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_Property */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::put_Property */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_PropertyExt */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::put_PropertyInt */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_PropertySecurity */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_PropertySecurityExt */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::Remove */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::RemoveInt */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::RemoveAll */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_String */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::put_String */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_ObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::put_ObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_ObjectPropertyExt */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_Thing */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::put_Thing */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_BOOL */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::put_BOOL */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_Long */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::put_Long */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_Short */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::put_Short */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::get_Dispatch */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::put_Dispatch */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::IsValid */ ,
    (void *) (INT_PTR) -1 /* IPropertyMap::CopyTo */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPropertyMap_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPropertyMapStubVtbl =
{
    &IID_IPropertyMap,
    &IPropertyMap_ServerInfo,
    60,
    &IPropertyMap_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IThing, ver. 0.0,
   GUID={0x590D9852,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IThing_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1158,
    1188,
    1224,
    1260,
    1296,
    1332,
    222,
    258,
    1368,
    1404,
    1440,
    1476,
    1512,
    1548,
    1584,
    1626,
    1662,
    1692,
    1728,
    1770,
    1806,
    4968,
    5004,
    5040,
    5076,
    5112,
    960,
    5148,
    5184,
    5220,
    5256,
    5292,
    5328,
    5376,
    5412,
    5448,
    5490,
    5532,
    5580,
    5652,
    5724,
    5802,
    5838,
    5880,
    5922,
    5964,
    6018,
    6060,
    6102,
    6162,
    6198,
    6234,
    6270,
    6312,
    6354,
    6420,
    6486,
    6540,
    6594,
    6654,
    6690,
    6732,
    6774,
    6828,
    6870,
    6930,
    6966,
    7002,
    7038,
    7080,
    7128,
    7176,
    7224,
    7278,
    7326,
    7368,
    7410,
    7446,
    7482,
    7518,
    7554,
    7590,
    7626,
    7662,
    7698,
    7734,
    7770,
    7812,
    7854,
    7890,
    7926,
    7974,
    8022,
    8064,
    8106,
    8154,
    8202,
    8244,
    8286,
    8334,
    8376,
    8418,
    8460,
    8502,
    8544,
    8586,
    8628,
    8670,
    8712,
    8760,
    8802,
    8844,
    8886,
    8928,
    8970,
    9012,
    9054,
    9096,
    9138
    };

static const MIDL_STUBLESS_PROXY_INFO IThing_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &IThing_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IThing_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &IThing_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(126) _IThingProxyVtbl = 
{
    &IThing_ProxyInfo,
    &IID_IThing,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Terminate */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_RefCount */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_CLSID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_IID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::IsOfType */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::ToAscii */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Dump */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Clone */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Marshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::MarshallToScript */ ,
    (void *) (INT_PTR) -1 /* IThing::get_ID */ ,
    (void *) (INT_PTR) -1 /* IThing::put_ID */ ,
    (void *) (INT_PTR) -1 /* IThing::get_InstanceType */ ,
    (void *) (INT_PTR) -1 /* IThing::get_IsExemplar */ ,
    (void *) (INT_PTR) -1 /* IThing::get_IsWizard */ ,
    (void *) (INT_PTR) -1 /* IThing::put_TypeInt */ ,
    (void *) (INT_PTR) -1 /* IThing::put_OwnerInt */ ,
    (void *) (INT_PTR) -1 /* IThing::get_IsStub */ ,
    (void *) (INT_PTR) -1 /* IThing::put_IsStubInt */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Exemplar */ ,
    (void *) (INT_PTR) -1 /* IThing::put_ExemplarInt */ ,
    (void *) (INT_PTR) -1 /* IThing::FindWithin */ ,
    (void *) (INT_PTR) -1 /* IThing::MoveIntoExt */ ,
    (void *) (INT_PTR) -1 /* IThing::MoveIntoInt */ ,
    (void *) (INT_PTR) -1 /* IThing::IsValidProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::IsValidInstanceProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::CreateAndAddProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::AddProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::AddPropertyExt */ ,
    (void *) (INT_PTR) -1 /* IThing::AddPropertyInt */ ,
    (void *) (INT_PTR) -1 /* IThing::RemoveProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::get_RemoteProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Property */ ,
    (void *) (INT_PTR) -1 /* IThing::put_Property */ ,
    (void *) (INT_PTR) -1 /* IThing::get_PropertyExt */ ,
    (void *) (INT_PTR) -1 /* IThing::InstanceProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::get_PropertySecurity */ ,
    (void *) (INT_PTR) -1 /* IThing::get_PropertySecurityExt */ ,
    (void *) (INT_PTR) -1 /* IThing::get_InstanceProperties */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Properties */ ,
    (void *) (INT_PTR) -1 /* IThing::CopyPropertiesTo */ ,
    (void *) (INT_PTR) -1 /* IThing::IsValidMethod */ ,
    (void *) (INT_PTR) -1 /* IThing::IsValidInstanceMethod */ ,
    (void *) (INT_PTR) -1 /* IThing::CreateAndAddMethod */ ,
    (void *) (INT_PTR) -1 /* IThing::CreateAndAddMethodExt */ ,
    (void *) (INT_PTR) -1 /* IThing::AddMethod */ ,
    (void *) (INT_PTR) -1 /* IThing::AddMethodExt */ ,
    (void *) (INT_PTR) -1 /* IThing::AddMethodInt */ ,
    (void *) (INT_PTR) -1 /* IThing::RemoveMethod */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Method */ ,
    (void *) (INT_PTR) -1 /* IThing::put_Method */ ,
    (void *) (INT_PTR) -1 /* IThing::get_MethodExt */ ,
    (void *) (INT_PTR) -1 /* IThing::get_MethodSecurity */ ,
    (void *) (INT_PTR) -1 /* IThing::get_MethodSecurityExt */ ,
    (void *) (INT_PTR) -1 /* IThing::get_InstanceMethods */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Methods */ ,
    (void *) (INT_PTR) -1 /* IThing::CopyMethodsTo */ ,
    (void *) (INT_PTR) -1 /* IThing::FireEvent */ ,
    (void *) (INT_PTR) -1 /* IThing::FireEventExt */ ,
    (void *) (INT_PTR) -1 /* IThing::FireEventInt */ ,
    (void *) (INT_PTR) -1 /* IThing::InvokeMethod */ ,
    (void *) (INT_PTR) -1 /* IThing::InvokeMethodInt */ ,
    (void *) (INT_PTR) -1 /* IThing::InvokeMethodExt */ ,
    (void *) (INT_PTR) -1 /* IThing::InvokeSuperMethod */ ,
    (void *) (INT_PTR) -1 /* IThing::InvokeSuperMethodExt */ ,
    (void *) (INT_PTR) -1 /* IThing::get_CurrentMethodName */ ,
    (void *) (INT_PTR) -1 /* IThing::put_CurrentMethodName */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Name */ ,
    (void *) (INT_PTR) -1 /* IThing::put_Name */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Description */ ,
    (void *) (INT_PTR) -1 /* IThing::put_Description */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Contents */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Container */ ,
    (void *) (INT_PTR) -1 /* IThing::put_Container */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Owner */ ,
    (void *) (INT_PTR) -1 /* IThing::CheckPropertiesSecurity */ ,
    (void *) (INT_PTR) -1 /* IThing::CheckMethodsSecurity */ ,
    (void *) (INT_PTR) -1 /* IThing::CheckPropertiesSecurityExt */ ,
    (void *) (INT_PTR) -1 /* IThing::CheckMethodsSecurityExt */ ,
    (void *) (INT_PTR) -1 /* IThing::CheckPropertySecurity */ ,
    (void *) (INT_PTR) -1 /* IThing::CheckMethodSecurity */ ,
    (void *) (INT_PTR) -1 /* IThing::CheckPropertySecurityExt */ ,
    (void *) (INT_PTR) -1 /* IThing::CheckMethodSecurityExt */ ,
    (void *) (INT_PTR) -1 /* IThing::NotifyObjectPropertyChanged */ ,
    (void *) (INT_PTR) -1 /* IThing::NotifyMethodChanged */ ,
    (void *) (INT_PTR) -1 /* IThing::AddString */ ,
    (void *) (INT_PTR) -1 /* IThing::AddObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::AddObjectPropertyExt */ ,
    (void *) (INT_PTR) -1 /* IThing::AddThing */ ,
    (void *) (INT_PTR) -1 /* IThing::AddBOOL */ ,
    (void *) (INT_PTR) -1 /* IThing::AddLong */ ,
    (void *) (INT_PTR) -1 /* IThing::AddShort */ ,
    (void *) (INT_PTR) -1 /* IThing::AddDispatch */ ,
    (void *) (INT_PTR) -1 /* IThing::get_String */ ,
    (void *) (INT_PTR) -1 /* IThing::put_String */ ,
    (void *) (INT_PTR) -1 /* IThing::get_ObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::put_ObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IThing::get_ObjectPropertyExt */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Thing */ ,
    (void *) (INT_PTR) -1 /* IThing::put_Thing */ ,
    (void *) (INT_PTR) -1 /* IThing::get_BOOL */ ,
    (void *) (INT_PTR) -1 /* IThing::put_BOOL */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Long */ ,
    (void *) (INT_PTR) -1 /* IThing::put_Long */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Short */ ,
    (void *) (INT_PTR) -1 /* IThing::put_Short */ ,
    (void *) (INT_PTR) -1 /* IThing::get_Dispatch */ ,
    (void *) (INT_PTR) -1 /* IThing::put_Dispatch */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IThing_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IThingStubVtbl =
{
    &IID_IThing,
    &IThing_ServerInfo,
    126,
    &IThing_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IModule, ver. 0.0,
   GUID={0x590D984A,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IModule_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1158,
    1188,
    1224,
    1260,
    1296,
    1332,
    222,
    258,
    1368,
    1404,
    1440,
    1476,
    1512,
    1548,
    1584,
    1626,
    1662,
    1692,
    1728,
    1770,
    1806,
    9180,
    1896,
    9216,
    9252,
    9288,
    9318,
    9390,
    9456,
    5220,
    9492,
    9528,
    9564
    };

static const MIDL_STUBLESS_PROXY_INFO IModule_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &IModule_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IModule_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &IModule_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(40) _IModuleProxyVtbl = 
{
    &IModule_ProxyInfo,
    &IID_IModule,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Terminate */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_RefCount */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_CLSID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_IID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::IsOfType */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::ToAscii */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Dump */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Clone */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Marshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::MarshallToScript */ ,
    (void *) (INT_PTR) -1 /* IModule::get_ModuleName */ ,
    (void *) (INT_PTR) -1 /* IModule::get_ModuleType */ ,
    (void *) (INT_PTR) -1 /* IModule::get_Flags */ ,
    (void *) (INT_PTR) -1 /* IModule::put_Flags */ ,
    (void *) (INT_PTR) -1 /* IModule::Install */ ,
    (void *) (INT_PTR) -1 /* IModule::InvokeByName */ ,
    (void *) (INT_PTR) -1 /* IModule::InvokeByDispID */ ,
    (void *) (INT_PTR) -1 /* IModule::get_Dispatch */ ,
    (void *) (INT_PTR) -1 /* IModule::Reload */ ,
    (void *) (INT_PTR) -1 /* IModule::Unload */ ,
    (void *) (INT_PTR) -1 /* IModule::Validate */ ,
    (void *) (INT_PTR) -1 /* IModule::get_IsShutdown */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IModule_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IModuleStubVtbl =
{
    &IID_IModule,
    &IModule_ServerInfo,
    40,
    &IModule_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ICOMModule, ver. 0.0,
   GUID={0x590D984C,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short ICOMModule_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1158,
    1188,
    1224,
    1260,
    1296,
    1332,
    222,
    258,
    1368,
    1404,
    1440,
    1476,
    1512,
    1548,
    1584,
    1626,
    1662,
    1692,
    1728,
    1770,
    1806,
    9180,
    1896,
    9216,
    9252,
    9288,
    9318,
    9390,
    9456,
    5220,
    9492,
    9528,
    9564,
    9600,
    4188
    };

static const MIDL_STUBLESS_PROXY_INFO ICOMModule_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &ICOMModule_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICOMModule_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &ICOMModule_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(42) _ICOMModuleProxyVtbl = 
{
    &ICOMModule_ProxyInfo,
    &IID_ICOMModule,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Terminate */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_RefCount */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_CLSID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_IID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::IsOfType */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::ToAscii */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Dump */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Clone */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Marshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::MarshallToScript */ ,
    (void *) (INT_PTR) -1 /* IModule::get_ModuleName */ ,
    (void *) (INT_PTR) -1 /* IModule::get_ModuleType */ ,
    (void *) (INT_PTR) -1 /* IModule::get_Flags */ ,
    (void *) (INT_PTR) -1 /* IModule::put_Flags */ ,
    (void *) (INT_PTR) -1 /* IModule::Install */ ,
    (void *) (INT_PTR) -1 /* IModule::InvokeByName */ ,
    (void *) (INT_PTR) -1 /* IModule::InvokeByDispID */ ,
    (void *) (INT_PTR) -1 /* IModule::get_Dispatch */ ,
    (void *) (INT_PTR) -1 /* IModule::Reload */ ,
    (void *) (INT_PTR) -1 /* IModule::Unload */ ,
    (void *) (INT_PTR) -1 /* IModule::Validate */ ,
    (void *) (INT_PTR) -1 /* IModule::get_IsShutdown */ ,
    (void *) (INT_PTR) -1 /* ICOMModule::get_ModuleCLSID */ ,
    (void *) (INT_PTR) -1 /* ICOMModule::put_ModuleProgID */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION ICOMModule_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICOMModuleStubVtbl =
{
    &IID_ICOMModule,
    &ICOMModule_ServerInfo,
    42,
    &ICOMModule_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IScriptModule, ver. 0.0,
   GUID={0x590D984E,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IScriptModule_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1158,
    1188,
    1224,
    1260,
    1296,
    1332,
    222,
    258,
    1368,
    1404,
    1440,
    1476,
    1512,
    1548,
    1584,
    1626,
    1662,
    1692,
    1728,
    1770,
    1806,
    9180,
    1896,
    9216,
    9252,
    9288,
    9318,
    9390,
    9456,
    5220,
    9492,
    9528,
    9564,
    9636,
    4188,
    9672
    };

static const MIDL_STUBLESS_PROXY_INFO IScriptModule_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &IScriptModule_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IScriptModule_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &IScriptModule_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(43) _IScriptModuleProxyVtbl = 
{
    &IScriptModule_ProxyInfo,
    &IID_IScriptModule,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Terminate */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_RefCount */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_CLSID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_IID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::IsOfType */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::ToAscii */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Dump */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Clone */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Marshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::MarshallToScript */ ,
    (void *) (INT_PTR) -1 /* IModule::get_ModuleName */ ,
    (void *) (INT_PTR) -1 /* IModule::get_ModuleType */ ,
    (void *) (INT_PTR) -1 /* IModule::get_Flags */ ,
    (void *) (INT_PTR) -1 /* IModule::put_Flags */ ,
    (void *) (INT_PTR) -1 /* IModule::Install */ ,
    (void *) (INT_PTR) -1 /* IModule::InvokeByName */ ,
    (void *) (INT_PTR) -1 /* IModule::InvokeByDispID */ ,
    (void *) (INT_PTR) -1 /* IModule::get_Dispatch */ ,
    (void *) (INT_PTR) -1 /* IModule::Reload */ ,
    (void *) (INT_PTR) -1 /* IModule::Unload */ ,
    (void *) (INT_PTR) -1 /* IModule::Validate */ ,
    (void *) (INT_PTR) -1 /* IModule::get_IsShutdown */ ,
    (void *) (INT_PTR) -1 /* IScriptModule::get_ScriptPath */ ,
    (void *) (INT_PTR) -1 /* IScriptModule::put_ScriptPath */ ,
    (void *) (INT_PTR) -1 /* IScriptModule::AddScriptlet */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IScriptModule_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IScriptModuleStubVtbl =
{
    &IID_IScriptModule,
    &IScriptModule_ServerInfo,
    43,
    &IScriptModule_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMethod, ver. 0.0,
   GUID={0x590D9850,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IMethod_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1158,
    1188,
    1224,
    1260,
    1296,
    1332,
    222,
    258,
    1368,
    1404,
    1440,
    1476,
    1512,
    1548,
    1584,
    1626,
    1662,
    1692,
    1728,
    1770,
    1806,
    4968,
    5004,
    9708,
    9744,
    9780,
    9816,
    9852,
    9888,
    9924,
    9960,
    9528,
    9996,
    10044,
    10080,
    10116,
    10152
    };

static const MIDL_STUBLESS_PROXY_INFO IMethod_ProxyInfo =
    {
    &Object_StubDesc,
    vwprop__MIDL_ProcFormatString.Format,
    &IMethod_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMethod_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwprop__MIDL_ProcFormatString.Format,
    &IMethod_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(44) _IMethodProxyVtbl = 
{
    &IMethod_ProxyInfo,
    &IID_IMethod,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Terminate */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_RefCount */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_CLSID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_IID */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_World */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Parent */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_PropertyName */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Type */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::get_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::put_Security */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::IsOfType */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::ToAscii */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Dump */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Clone */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::Marshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::UnMarshall */ ,
    (void *) (INT_PTR) -1 /* IObjectProperty::MarshallToScript */ ,
    (void *) (INT_PTR) -1 /* IMethod::get_Flags */ ,
    (void *) (INT_PTR) -1 /* IMethod::put_Flags */ ,
    (void *) (INT_PTR) -1 /* IMethod::get_Module */ ,
    (void *) (INT_PTR) -1 /* IMethod::put_Module */ ,
    (void *) (INT_PTR) -1 /* IMethod::get_DispID */ ,
    (void *) (INT_PTR) -1 /* IMethod::put_DispID */ ,
    (void *) (INT_PTR) -1 /* IMethod::get_MethodName */ ,
    (void *) (INT_PTR) -1 /* IMethod::put_MethodName */ ,
    (void *) (INT_PTR) -1 /* IMethod::get_Code */ ,
    (void *) (INT_PTR) -1 /* IMethod::put_Code */ ,
    (void *) (INT_PTR) -1 /* IMethod::get_IsInline */ ,
    (void *) (INT_PTR) -1 /* IMethod::InvokeMethodExt */ ,
    (void *) (INT_PTR) -1 /* IMethod::put_ArgumentsInt */ ,
    (void *) (INT_PTR) -1 /* IMethod::put_ArgumentsExt */ ,
    (void *) (INT_PTR) -1 /* IMethod::put_Arguments */ ,
    (void *) (INT_PTR) -1 /* IMethod::Validate */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IMethod_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMethodStubVtbl =
{
    &IID_IMethod,
    &IMethod_ServerInfo,
    44,
    &IMethod_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    vwprop__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _vwprop_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IObjectPropertyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertySecurityProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertyCollectionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertyListProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertyMapProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IModuleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICOMModuleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IScriptModuleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMethodProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IThingProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _vwprop_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IObjectPropertyStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertySecurityStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertyCollectionStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertyListStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertyMapStubVtbl,
    ( CInterfaceStubVtbl *) &_IModuleStubVtbl,
    ( CInterfaceStubVtbl *) &_ICOMModuleStubVtbl,
    ( CInterfaceStubVtbl *) &_IScriptModuleStubVtbl,
    ( CInterfaceStubVtbl *) &_IMethodStubVtbl,
    ( CInterfaceStubVtbl *) &_IThingStubVtbl,
    0
};

PCInterfaceName const _vwprop_InterfaceNamesList[] = 
{
    "IObjectProperty",
    "IPropertySecurity",
    "IPropertyCollection",
    "IPropertyList",
    "IPropertyMap",
    "IModule",
    "ICOMModule",
    "IScriptModule",
    "IMethod",
    "IThing",
    0
};

const IID *  const _vwprop_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _vwprop_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _vwprop, pIID, n)

int __stdcall _vwprop_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _vwprop, 10, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _vwprop, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _vwprop, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _vwprop, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _vwprop, 10, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo vwprop_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _vwprop_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _vwprop_StubVtblList,
    (const PCInterfaceName * ) & _vwprop_InterfaceNamesList,
    (const IID ** ) & _vwprop_BaseIIDList,
    & _vwprop_IID_Lookup, 
    10,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

