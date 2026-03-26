

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/vwclient.idl:
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


#include "vwclient.h"

#define TYPE_FORMAT_STRING_SIZE   1181                              
#define PROC_FORMAT_STRING_SIZE   1105                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _vwclient_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } vwclient_MIDL_TYPE_FORMAT_STRING;

typedef struct _vwclient_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } vwclient_MIDL_PROC_FORMAT_STRING;

typedef struct _vwclient_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } vwclient_MIDL_EXPR_FORMAT_STRING;


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


extern const vwclient_MIDL_TYPE_FORMAT_STRING vwclient__MIDL_TypeFormatString;
extern const vwclient_MIDL_PROC_FORMAT_STRING vwclient__MIDL_ProcFormatString;
extern const vwclient_MIDL_EXPR_FORMAT_STRING vwclient__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IVWClient_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVWClient_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IVWClientSite_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVWClientSite_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IVWClientOCX_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVWClientOCX_ProxyInfo;


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


static const vwclient_MIDL_PROC_FORMAT_STRING vwclient__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Initialize */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Terminate */

/* 30 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 32 */	NdrFcLong( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 46 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 54 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 56 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConnectLocalEx */

/* 60 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x9 ),	/* 9 */
/* 68 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 70 */	NdrFcShort( 0x6 ),	/* 6 */
/* 72 */	NdrFcShort( 0x8 ),	/* 8 */
/* 74 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 76 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x1 ),	/* 1 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 84 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 86 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 88 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bOverwrite */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 94 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppworld */

/* 96 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 98 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 100 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConnectLocal */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xa ),	/* 10 */
/* 116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 124 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 132 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppworld */

/* 138 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Connect */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0xb ),	/* 11 */
/* 158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 166 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 174 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppworld */

/* 180 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConnectToServer */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0xc ),	/* 12 */
/* 200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 202 */	NdrFcShort( 0x6 ),	/* 6 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 208 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 216 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bAuthenticated */

/* 222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppadmin */

/* 228 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateWorld */

/* 240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0xd ),	/* 13 */
/* 248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 256 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrWorldName */

/* 264 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppworld */

/* 270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 274 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenWorld */

/* 282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0xe ),	/* 14 */
/* 290 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 298 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrWorldName */

/* 306 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 310 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppworld */

/* 312 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 316 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Disconnect */

/* 324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0xf ),	/* 15 */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsConnected */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x10 ),	/* 16 */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x22 ),	/* 34 */
/* 368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_World */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x11 ),	/* 17 */
/* 398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppworld */

/* 414 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 418 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Trace */

/* 426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x12 ),	/* 18 */
/* 434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 440 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 442 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 450 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 454 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Report */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x13 ),	/* 19 */
/* 470 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 478 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lType */

/* 492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTool */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x14 ),	/* 20 */
/* 512 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 514 */	NdrFcShort( 0x44 ),	/* 68 */
/* 516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 518 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 520 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 528 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 532 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter clsid */

/* 534 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 538 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Parameter ppunk */

/* 540 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 544 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateToolFromProgID */

/* 552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x15 ),	/* 21 */
/* 560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 566 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 568 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 576 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 580 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter progid */

/* 582 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 586 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppunk */

/* 588 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 592 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveTool */

/* 600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x16 ),	/* 22 */
/* 608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 614 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 616 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 628 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tool */

/* 636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x17 ),	/* 23 */
/* 644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 650 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 652 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x1 ),	/* 1 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 660 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 664 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppunk */

/* 666 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 670 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tools */

/* 678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x18 ),	/* 24 */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 694 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pppropmap */

/* 702 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 706 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnConnect */

/* 714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x3 ),	/* 3 */
/* 722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 728 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 730 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWorld */

/* 738 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 742 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDisconnect */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x4 ),	/* 4 */
/* 758 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 766 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWorld */

/* 774 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 778 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUserConnect */

/* 786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x5 ),	/* 5 */
/* 794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 800 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 802 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 810 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 812 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 814 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Return value */

/* 816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 818 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUserDisconnect */

/* 822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x6 ),	/* 6 */
/* 830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 836 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 838 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 850 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Return value */

/* 852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUserReconnect */

/* 858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x7 ),	/* 7 */
/* 866 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 874 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNewClient */

/* 882 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 886 */	NdrFcShort( 0xaa ),	/* Type Offset=170 */

	/* Parameter pNewWorld */

/* 888 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 892 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter pNewThing */

/* 894 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 898 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnTrace */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 922 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 930 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 934 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnReport */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x9 ),	/* 9 */
/* 950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 958 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 966 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lVal */

/* 972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUIEvent */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0xa ),	/* 10 */
/* 992 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1000 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 1008 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Parameter bstrEventName */

/* 1014 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter varArg */

/* 1020 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1024 */	NdrFcShort( 0x47c ),	/* Type Offset=1148 */

	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VWClient */

/* 1032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1040 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1048 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVWClient */

/* 1056 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1060 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 1062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Version */

/* 1068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1082 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1084 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1086 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrVersion */

/* 1092 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1096 */	NdrFcShort( 0x492 ),	/* Type Offset=1170 */

	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const vwclient_MIDL_TYPE_FORMAT_STRING vwclient__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 44 */	NdrFcLong( 0x590d9854 ),	/* 1494063188 */
/* 48 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 50 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 52 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 54 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 56 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 58 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 60 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 62 */	NdrFcShort( 0x2 ),	/* Offset= 2 (64) */
/* 64 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 66 */	NdrFcLong( 0x2043f40 ),	/* 33832768 */
/* 70 */	NdrFcShort( 0x2b3 ),	/* 691 */
/* 72 */	NdrFcShort( 0x11d2 ),	/* 4562 */
/* 74 */	0x80,		/* 128 */
			0xf5,		/* 245 */
/* 76 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 78 */	0x4f,		/* 79 */
			0xad,		/* 173 */
/* 80 */	0x7d,		/* 125 */
			0x6d,		/* 109 */
/* 82 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 84 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x11, 0x0,	/* FC_RP */
/* 88 */	NdrFcShort( 0x8 ),	/* Offset= 8 (96) */
/* 90 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 92 */	NdrFcShort( 0x8 ),	/* 8 */
/* 94 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 96 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 98 */	NdrFcShort( 0x10 ),	/* 16 */
/* 100 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 102 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 104 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (90) */
			0x5b,		/* FC_END */
/* 108 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (112) */
/* 112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 124 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 126 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 128 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 130 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (134) */
/* 134 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 136 */	NdrFcLong( 0x590d9848 ),	/* 1494063176 */
/* 140 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 142 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 144 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 146 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 148 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 150 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 152 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 154 */	NdrFcLong( 0x590d9852 ),	/* 1494063186 */
/* 158 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 160 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 162 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 164 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 166 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 168 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 170 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 172 */	NdrFcLong( 0x590d9820 ),	/* 1494063136 */
/* 176 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 178 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 180 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 182 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 184 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 186 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 188 */	
			0x12, 0x0,	/* FC_UP */
/* 190 */	NdrFcShort( 0x3aa ),	/* Offset= 938 (1128) */
/* 192 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 194 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 196 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 198 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 200 */	NdrFcShort( 0x2 ),	/* Offset= 2 (202) */
/* 202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 204 */	NdrFcShort( 0x2f ),	/* 47 */
/* 206 */	NdrFcLong( 0x14 ),	/* 20 */
/* 210 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 212 */	NdrFcLong( 0x3 ),	/* 3 */
/* 216 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 218 */	NdrFcLong( 0x11 ),	/* 17 */
/* 222 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 224 */	NdrFcLong( 0x2 ),	/* 2 */
/* 228 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 230 */	NdrFcLong( 0x4 ),	/* 4 */
/* 234 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 236 */	NdrFcLong( 0x5 ),	/* 5 */
/* 240 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 242 */	NdrFcLong( 0xb ),	/* 11 */
/* 246 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 248 */	NdrFcLong( 0xa ),	/* 10 */
/* 252 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 254 */	NdrFcLong( 0x6 ),	/* 6 */
/* 258 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (490) */
/* 260 */	NdrFcLong( 0x7 ),	/* 7 */
/* 264 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 266 */	NdrFcLong( 0x8 ),	/* 8 */
/* 270 */	NdrFcShort( 0xfef4 ),	/* Offset= -268 (2) */
/* 272 */	NdrFcLong( 0xd ),	/* 13 */
/* 276 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (112) */
/* 278 */	NdrFcLong( 0x9 ),	/* 9 */
/* 282 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (496) */
/* 284 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 288 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (514) */
/* 290 */	NdrFcLong( 0x24 ),	/* 36 */
/* 294 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (1054) */
/* 296 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 300 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (1054) */
/* 302 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 306 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (1058) */
/* 308 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 312 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (1062) */
/* 314 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 318 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (1066) */
/* 320 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 324 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1070) */
/* 326 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 330 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (1074) */
/* 332 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 336 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (1078) */
/* 338 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 342 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (1062) */
/* 344 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 348 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1066) */
/* 350 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 354 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (1082) */
/* 356 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 360 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1078) */
/* 362 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 366 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (1086) */
/* 368 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 372 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1090) */
/* 374 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 378 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1094) */
/* 380 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 384 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (1098) */
/* 386 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 390 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (1102) */
/* 392 */	NdrFcLong( 0x10 ),	/* 16 */
/* 396 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 398 */	NdrFcLong( 0x12 ),	/* 18 */
/* 402 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 404 */	NdrFcLong( 0x13 ),	/* 19 */
/* 408 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 410 */	NdrFcLong( 0x15 ),	/* 21 */
/* 414 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 416 */	NdrFcLong( 0x16 ),	/* 22 */
/* 420 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 422 */	NdrFcLong( 0x17 ),	/* 23 */
/* 426 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 428 */	NdrFcLong( 0xe ),	/* 14 */
/* 432 */	NdrFcShort( 0x2a6 ),	/* Offset= 678 (1110) */
/* 434 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 438 */	NdrFcShort( 0x2aa ),	/* Offset= 682 (1120) */
/* 440 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 444 */	NdrFcShort( 0x2a8 ),	/* Offset= 680 (1124) */
/* 446 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 450 */	NdrFcShort( 0x264 ),	/* Offset= 612 (1062) */
/* 452 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 456 */	NdrFcShort( 0x262 ),	/* Offset= 610 (1066) */
/* 458 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 462 */	NdrFcShort( 0x260 ),	/* Offset= 608 (1070) */
/* 464 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 468 */	NdrFcShort( 0x256 ),	/* Offset= 598 (1066) */
/* 470 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 474 */	NdrFcShort( 0x250 ),	/* Offset= 592 (1066) */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x0 ),	/* Offset= 0 (480) */
/* 482 */	NdrFcLong( 0x1 ),	/* 1 */
/* 486 */	NdrFcShort( 0x0 ),	/* Offset= 0 (486) */
/* 488 */	NdrFcShort( 0xffff ),	/* Offset= -1 (487) */
/* 490 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 496 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 498 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 508 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 510 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 512 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 514 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 516 */	NdrFcShort( 0x2 ),	/* Offset= 2 (518) */
/* 518 */	
			0x12, 0x0,	/* FC_UP */
/* 520 */	NdrFcShort( 0x204 ),	/* Offset= 516 (1036) */
/* 522 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 524 */	NdrFcShort( 0x18 ),	/* 24 */
/* 526 */	NdrFcShort( 0xa ),	/* 10 */
/* 528 */	NdrFcLong( 0x8 ),	/* 8 */
/* 532 */	NdrFcShort( 0x5a ),	/* Offset= 90 (622) */
/* 534 */	NdrFcLong( 0xd ),	/* 13 */
/* 538 */	NdrFcShort( 0x7e ),	/* Offset= 126 (664) */
/* 540 */	NdrFcLong( 0x9 ),	/* 9 */
/* 544 */	NdrFcShort( 0x9e ),	/* Offset= 158 (702) */
/* 546 */	NdrFcLong( 0xc ),	/* 12 */
/* 550 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (750) */
/* 552 */	NdrFcLong( 0x24 ),	/* 36 */
/* 556 */	NdrFcShort( 0x124 ),	/* Offset= 292 (848) */
/* 558 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 562 */	NdrFcShort( 0x12e ),	/* Offset= 302 (864) */
/* 564 */	NdrFcLong( 0x10 ),	/* 16 */
/* 568 */	NdrFcShort( 0x148 ),	/* Offset= 328 (896) */
/* 570 */	NdrFcLong( 0x2 ),	/* 2 */
/* 574 */	NdrFcShort( 0x162 ),	/* Offset= 354 (928) */
/* 576 */	NdrFcLong( 0x3 ),	/* 3 */
/* 580 */	NdrFcShort( 0x17c ),	/* Offset= 380 (960) */
/* 582 */	NdrFcLong( 0x14 ),	/* 20 */
/* 586 */	NdrFcShort( 0x196 ),	/* Offset= 406 (992) */
/* 588 */	NdrFcShort( 0xffff ),	/* Offset= -1 (587) */
/* 590 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 592 */	NdrFcShort( 0x4 ),	/* 4 */
/* 594 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 600 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 602 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 604 */	NdrFcShort( 0x4 ),	/* 4 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	0x12, 0x0,	/* FC_UP */
/* 616 */	NdrFcShort( 0xfdaa ),	/* Offset= -598 (18) */
/* 618 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 620 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 622 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 628 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 632 */	NdrFcShort( 0x4 ),	/* 4 */
/* 634 */	0x11, 0x0,	/* FC_RP */
/* 636 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (590) */
/* 638 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 640 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 642 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 652 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 656 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 658 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 660 */	NdrFcShort( 0xfddc ),	/* Offset= -548 (112) */
/* 662 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 664 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x6 ),	/* Offset= 6 (676) */
/* 672 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 674 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 676 */	
			0x11, 0x0,	/* FC_RP */
/* 678 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (642) */
/* 680 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 690 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 694 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (496) */
/* 700 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 702 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x6 ),	/* Offset= 6 (714) */
/* 710 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 712 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 714 */	
			0x11, 0x0,	/* FC_RP */
/* 716 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (680) */
/* 718 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x4 ),	/* 4 */
/* 722 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 728 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 730 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 732 */	NdrFcShort( 0x4 ),	/* 4 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	0x12, 0x0,	/* FC_UP */
/* 744 */	NdrFcShort( 0x180 ),	/* Offset= 384 (1128) */
/* 746 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 748 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 750 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x6 ),	/* Offset= 6 (762) */
/* 758 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 760 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 762 */	
			0x11, 0x0,	/* FC_RP */
/* 764 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (718) */
/* 766 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 768 */	NdrFcLong( 0x2f ),	/* 47 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 778 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 780 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 782 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 784 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 786 */	NdrFcShort( 0x1 ),	/* 1 */
/* 788 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 790 */	NdrFcShort( 0x4 ),	/* 4 */
/* 792 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 794 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 796 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 798 */	NdrFcShort( 0x10 ),	/* 16 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0xa ),	/* Offset= 10 (812) */
/* 804 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 806 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 808 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (766) */
/* 810 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 812 */	
			0x12, 0x0,	/* FC_UP */
/* 814 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (784) */
/* 816 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 820 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 826 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 828 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 830 */	NdrFcShort( 0x4 ),	/* 4 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	0x12, 0x0,	/* FC_UP */
/* 842 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (796) */
/* 844 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 846 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 848 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x6 ),	/* Offset= 6 (860) */
/* 856 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 858 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 860 */	
			0x11, 0x0,	/* FC_RP */
/* 862 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (816) */
/* 864 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 866 */	NdrFcShort( 0x18 ),	/* 24 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0xa ),	/* Offset= 10 (880) */
/* 872 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 874 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 876 */	NdrFcShort( 0xfcf4 ),	/* Offset= -780 (96) */
/* 878 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 880 */	
			0x11, 0x0,	/* FC_RP */
/* 882 */	NdrFcShort( 0xff10 ),	/* Offset= -240 (642) */
/* 884 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 888 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 894 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 896 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 902 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 904 */	NdrFcShort( 0x4 ),	/* 4 */
/* 906 */	NdrFcShort( 0x4 ),	/* 4 */
/* 908 */	0x12, 0x0,	/* FC_UP */
/* 910 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (884) */
/* 912 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 914 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 916 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 918 */	NdrFcShort( 0x2 ),	/* 2 */
/* 920 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 926 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 928 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 932 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 934 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 936 */	NdrFcShort( 0x4 ),	/* 4 */
/* 938 */	NdrFcShort( 0x4 ),	/* 4 */
/* 940 */	0x12, 0x0,	/* FC_UP */
/* 942 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (916) */
/* 944 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 946 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 948 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 950 */	NdrFcShort( 0x4 ),	/* 4 */
/* 952 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 958 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 960 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 964 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 966 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 968 */	NdrFcShort( 0x4 ),	/* 4 */
/* 970 */	NdrFcShort( 0x4 ),	/* 4 */
/* 972 */	0x12, 0x0,	/* FC_UP */
/* 974 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (948) */
/* 976 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 978 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 980 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 984 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 990 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 992 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 996 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 998 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1000 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1002 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1004 */	0x12, 0x0,	/* FC_UP */
/* 1006 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (980) */
/* 1008 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1010 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1012 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1018 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1020 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1024 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1026 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1028 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1030 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1032 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1012) */
/* 1034 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1036 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1038 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1040 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1020) */
/* 1042 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1042) */
/* 1044 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1046 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1048 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1050 */	NdrFcShort( 0xfdf0 ),	/* Offset= -528 (522) */
/* 1052 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1054 */	
			0x12, 0x0,	/* FC_UP */
/* 1056 */	NdrFcShort( 0xfefc ),	/* Offset= -260 (796) */
/* 1058 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1060 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1062 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1064 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1066 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1068 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1070 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1072 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1074 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1076 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1078 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1080 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1082 */	
			0x12, 0x0,	/* FC_UP */
/* 1084 */	NdrFcShort( 0xfdae ),	/* Offset= -594 (490) */
/* 1086 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1088 */	NdrFcShort( 0xfbc2 ),	/* Offset= -1086 (2) */
/* 1090 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1092 */	NdrFcShort( 0xfc2c ),	/* Offset= -980 (112) */
/* 1094 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1096 */	NdrFcShort( 0xfda8 ),	/* Offset= -600 (496) */
/* 1098 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1100 */	NdrFcShort( 0xfdb6 ),	/* Offset= -586 (514) */
/* 1102 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1106) */
/* 1106 */	
			0x12, 0x0,	/* FC_UP */
/* 1108 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1128) */
/* 1110 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1112 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1114 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1116 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1118 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1120 */	
			0x12, 0x0,	/* FC_UP */
/* 1122 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1110) */
/* 1124 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1126 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1128 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1130 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1134) */
/* 1136 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1138 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1140 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1142 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1144 */	NdrFcShort( 0xfc48 ),	/* Offset= -952 (192) */
/* 1146 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1148 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1152 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0xfc38 ),	/* Offset= -968 (188) */
/* 1158 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1160 */	NdrFcShort( 0xfc22 ),	/* Offset= -990 (170) */
/* 1162 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1164 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1170) */
/* 1166 */	
			0x13, 0x0,	/* FC_OP */
/* 1168 */	NdrFcShort( 0xfb82 ),	/* Offset= -1150 (18) */
/* 1170 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1166) */

			0x0
        }
    };

XFG_TRAMPOLINES(BSTR)
XFG_TRAMPOLINES(VARIANT)

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserFree)
            
            }
            ,
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserFree)
            
            }
            

        };



/* Standard interface: __MIDL_itf_vwclient_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IVWClient, ver. 0.0,
   GUID={0x590D9820,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IVWClient_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    30,
    60,
    108,
    150,
    192,
    240,
    282,
    324,
    354,
    390,
    426,
    462,
    504,
    552,
    600,
    636,
    678
    };

static const MIDL_STUBLESS_PROXY_INFO IVWClient_ProxyInfo =
    {
    &Object_StubDesc,
    vwclient__MIDL_ProcFormatString.Format,
    &IVWClient_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVWClient_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwclient__MIDL_ProcFormatString.Format,
    &IVWClient_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IVWClientProxyVtbl = 
{
    &IVWClient_ProxyInfo,
    &IID_IVWClient,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IVWClient::Initialize */ ,
    (void *) (INT_PTR) -1 /* IVWClient::Terminate */ ,
    (void *) (INT_PTR) -1 /* IVWClient::ConnectLocalEx */ ,
    (void *) (INT_PTR) -1 /* IVWClient::ConnectLocal */ ,
    (void *) (INT_PTR) -1 /* IVWClient::Connect */ ,
    (void *) (INT_PTR) -1 /* IVWClient::ConnectToServer */ ,
    (void *) (INT_PTR) -1 /* IVWClient::CreateWorld */ ,
    (void *) (INT_PTR) -1 /* IVWClient::OpenWorld */ ,
    (void *) (INT_PTR) -1 /* IVWClient::Disconnect */ ,
    (void *) (INT_PTR) -1 /* IVWClient::get_IsConnected */ ,
    (void *) (INT_PTR) -1 /* IVWClient::get_World */ ,
    (void *) (INT_PTR) -1 /* IVWClient::Trace */ ,
    (void *) (INT_PTR) -1 /* IVWClient::Report */ ,
    (void *) (INT_PTR) -1 /* IVWClient::CreateTool */ ,
    (void *) (INT_PTR) -1 /* IVWClient::CreateToolFromProgID */ ,
    (void *) (INT_PTR) -1 /* IVWClient::RemoveTool */ ,
    (void *) (INT_PTR) -1 /* IVWClient::get_Tool */ ,
    (void *) (INT_PTR) -1 /* IVWClient::get_Tools */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IVWClient_table[] =
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
    NdrStubCall2
};

CInterfaceStubVtbl _IVWClientStubVtbl =
{
    &IID_IVWClient,
    &IVWClient_ServerInfo,
    25,
    &IVWClient_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IVWClientSite, ver. 0.0,
   GUID={0x590D9822,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IVWClientSite_FormatStringOffsetTable[] =
    {
    714,
    750,
    786,
    822,
    858,
    906,
    942,
    984
    };

static const MIDL_STUBLESS_PROXY_INFO IVWClientSite_ProxyInfo =
    {
    &Object_StubDesc,
    vwclient__MIDL_ProcFormatString.Format,
    &IVWClientSite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVWClientSite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwclient__MIDL_ProcFormatString.Format,
    &IVWClientSite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IVWClientSiteProxyVtbl = 
{
    &IVWClientSite_ProxyInfo,
    &IID_IVWClientSite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVWClientSite::OnConnect */ ,
    (void *) (INT_PTR) -1 /* IVWClientSite::OnDisconnect */ ,
    (void *) (INT_PTR) -1 /* IVWClientSite::OnUserConnect */ ,
    (void *) (INT_PTR) -1 /* IVWClientSite::OnUserDisconnect */ ,
    (void *) (INT_PTR) -1 /* IVWClientSite::OnUserReconnect */ ,
    (void *) (INT_PTR) -1 /* IVWClientSite::OnTrace */ ,
    (void *) (INT_PTR) -1 /* IVWClientSite::OnReport */ ,
    (void *) (INT_PTR) -1 /* IVWClientSite::OnUIEvent */
};

const CInterfaceStubVtbl _IVWClientSiteStubVtbl =
{
    &IID_IVWClientSite,
    &IVWClientSite_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVWClientOCX, ver. 0.0,
   GUID={0xD4898801,0x20EF,0x11D0,{0x8A,0x96,0x00,0xA0,0xC9,0x08,0x25,0x83}} */

#pragma code_seg(".orpc")
static const unsigned short IVWClientOCX_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1032,
    1068
    };

static const MIDL_STUBLESS_PROXY_INFO IVWClientOCX_ProxyInfo =
    {
    &Object_StubDesc,
    vwclient__MIDL_ProcFormatString.Format,
    &IVWClientOCX_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVWClientOCX_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwclient__MIDL_ProcFormatString.Format,
    &IVWClientOCX_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IVWClientOCXProxyVtbl = 
{
    &IVWClientOCX_ProxyInfo,
    &IID_IVWClientOCX,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IVWClientOCX::get_VWClient */ ,
    (void *) (INT_PTR) -1 /* IVWClientOCX::get_Version */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IVWClientOCX_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVWClientOCXStubVtbl =
{
    &IID_IVWClientOCX,
    &IVWClientOCX_ServerInfo,
    9,
    &IVWClientOCX_table[-3],
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
    vwclient__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _vwclient_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IVWClientOCXProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVWClientProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVWClientSiteProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _vwclient_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IVWClientOCXStubVtbl,
    ( CInterfaceStubVtbl *) &_IVWClientStubVtbl,
    ( CInterfaceStubVtbl *) &_IVWClientSiteStubVtbl,
    0
};

PCInterfaceName const _vwclient_InterfaceNamesList[] = 
{
    "IVWClientOCX",
    "IVWClient",
    "IVWClientSite",
    0
};

const IID *  const _vwclient_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0,
    0
};


#define _vwclient_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _vwclient, pIID, n)

int __stdcall _vwclient_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _vwclient, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _vwclient, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _vwclient, 3, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo vwclient_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _vwclient_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _vwclient_StubVtblList,
    (const PCInterfaceName * ) & _vwclient_InterfaceNamesList,
    (const IID ** ) & _vwclient_BaseIIDList,
    & _vwclient_IID_Lookup, 
    3,
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

