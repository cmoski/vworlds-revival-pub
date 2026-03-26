

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "vwobject.h"

#define TYPE_FORMAT_STRING_SIZE   1401                              
#define PROC_FORMAT_STRING_SIZE   8569                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _vwobject_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } vwobject_MIDL_TYPE_FORMAT_STRING;

typedef struct _vwobject_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } vwobject_MIDL_PROC_FORMAT_STRING;

typedef struct _vwobject_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } vwobject_MIDL_EXPR_FORMAT_STRING;


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


extern const vwobject_MIDL_TYPE_FORMAT_STRING vwobject__MIDL_TypeFormatString;
extern const vwobject_MIDL_PROC_FORMAT_STRING vwobject__MIDL_ProcFormatString;
extern const vwobject_MIDL_EXPR_FORMAT_STRING vwobject__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWorld_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWorld_ProxyInfo;

/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_Caller_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4116],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_get_Super_Proxy( 
    IWorld * This,
    /* [retval][out] */ IThing **ppthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4152],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_Super_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4188],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_get_SecurityContext_Proxy( 
    IWorld * This,
    /* [retval][out] */ IPropertySecurity **ppSecurity)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4224],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_SecurityContext_Proxy( 
    IWorld * This,
    /* [in] */ IPropertySecurity *pSecurity)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4260],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_get_IsInPropChange_Proxy( 
    IWorld * This,
    /* [retval][out] */ VARIANT_BOOL *pbool)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4296],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_IsInPropChange_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL boolval)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4332],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_AbortEvent_Proxy( 
    IWorld * This)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4368],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_get_IsEventAborted_Proxy( 
    IWorld * This,
    /* [retval][out] */ VARIANT_BOOL *pbool)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4398],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_put_IsEventAborted_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL boolval)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4434],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_IsExemplar_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [retval][out] */ VARIANT_BOOL *pbool)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4470],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_IsAvatar_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [retval][out] */ VARIANT_BOOL *pbool)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4512],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_IsRoom_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [retval][out] */ VARIANT_BOOL *pbool)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4554],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_LockWorld_Proxy( 
    IWorld * This)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4596],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnlockWorld_Proxy( 
    IWorld * This)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4626],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyUserConnect_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4656],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyUserDisconnect_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4692],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_FireUIEvent_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstrEventName,
    /* [optional][in] */ VARIANT varArg)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4728],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_ShowHTML_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ BSTR bstrHtml,
    /* [defaultvalue][optional][in] */ VARIANT cx,
    /* [defaultvalue][optional][in] */ VARIANT cy)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4776],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_ShowHTMLEx_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrWinName,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ BSTR bstrHtml,
    /* [in] */ VARIANT dispArg,
    /* [defaultvalue][optional][in] */ VARIANT x,
    /* [defaultvalue][optional][in] */ VARIANT y,
    /* [defaultvalue][optional][in] */ VARIANT cx,
    /* [defaultvalue][optional][in] */ VARIANT cy)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4830],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

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
    /* [in] */ int cy)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4908],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_ShowURL_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ BSTR bstrUrl,
    /* [defaultvalue][optional][in] */ VARIANT cx,
    /* [defaultvalue][optional][in] */ VARIANT cy)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[4992],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_ShowURLEx_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrWinName,
    /* [in] */ BSTR bstrTitle,
    /* [in] */ BSTR bstrUrl,
    /* [in] */ VARIANT dispArg,
    /* [defaultvalue][optional][in] */ VARIANT x,
    /* [defaultvalue][optional][in] */ VARIANT y,
    /* [defaultvalue][optional][in] */ VARIANT cx,
    /* [defaultvalue][optional][in] */ VARIANT cy)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5046],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

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
    /* [in] */ int cy)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5124],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyInvokeMethod_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstr,
    /* [in] */ DISPPARAMS *pdispparams)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5214],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyPropertyChanged_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstr,
    /* [in] */ long lHint,
    /* [in] */ VARIANT varHintData)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5262],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyMethodChanged_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstr,
    /* [in] */ long lHint,
    /* [in] */ VARIANT varHintData)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5316],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_NotifyModuleChanged_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstr,
    /* [in] */ long lHint,
    /* [in] */ VARIANT varHintData)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5370],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendContainer_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IThing *pthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5418],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendContents_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IThing *pthing,
    /* [in] */ VARIANT_BOOL bForceOpen)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5460],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendWorld_Proxy( 
    IWorld * This,
    /* [in] */ long lval)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5508],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendExemplar_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IThing *pthing,
    /* [in] */ BSTR bstr)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5544],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendThingByID_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ long lID)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5592],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendThing_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IThing *pthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5634],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendModule_Proxy( 
    IWorld * This,
    /* [in] */ long lval,
    /* [in] */ IModule *pmodule,
    /* [in] */ BSTR bstr)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5676],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendWorldCommand_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL bReply,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams,
    /* [out] */ HRESULT *recvhr,
    /* [out] */ VARIANT *pvar)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5724],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendThingCommand_Proxy( 
    IWorld * This,
    /* [in] */ long lFlags,
    /* [in] */ IThing *pthing,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5790],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendObjectPropertyCommand_Proxy( 
    IWorld * This,
    /* [in] */ long lFlags,
    /* [in] */ IObjectProperty *pprop,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5850],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendWorldCommandExt_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT_BOOL bReply,
    /* [in] */ VARIANT_BOOL bSync,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams,
    /* [out] */ HRESULT *recvhr,
    /* [out] */ VARIANT *pvar)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5910],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

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
    /* [out] */ VARIANT *pvar)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[5982],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

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
    /* [out] */ VARIANT *pvar)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6066],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendModuleCommand_Proxy( 
    IWorld * This,
    /* [in] */ IModule *pmodule,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6150],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_SendMethodCommand_Proxy( 
    IWorld * This,
    /* [in] */ IMethod *pmethod,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6204],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_LogThingCommand_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6258],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_LogWorldCommand_Proxy( 
    IWorld * This,
    /* [in] */ DISPID dispid,
    /* [in] */ WORD wFlags,
    /* [in] */ DISPPARAMS *pdispparams)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6312],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_WriteCommandHeader_Proxy( 
    IWorld * This,
    /* [in] */ IMarshallBuffer *pBuffer,
    /* [in] */ unsigned char ucReply,
    /* [in] */ unsigned char ucCommand)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6360],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_WriteCommandCallstack_Proxy( 
    IWorld * This,
    /* [in] */ IMarshallBuffer *pBuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6408],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_RegisterInterest_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6444],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_UnregisterInterest_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6480],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallThing_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pthing,
    /* [in] */ DWORD dwOptions,
    /* [in] */ IMarshallBuffer *pmarshallbuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6516],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallThing_Proxy( 
    IWorld * This,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out] */ IThing **ppthing)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6564],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallProperty_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT var,
    /* [in] */ DWORD dwOptions,
    /* [in] */ IMarshallBuffer *pmarshallbuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6606],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallProperty_Proxy( 
    IWorld * This,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out] */ VARIANT *pvar)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6654],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallObjectProperty_Proxy( 
    IWorld * This,
    /* [in] */ IObjectProperty *pprop,
    /* [in] */ long lHint,
    /* [in] */ DWORD dwOptions,
    /* [in] */ IMarshallBuffer *pmarshallbuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6696],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallObjectProperty_Proxy( 
    IWorld * This,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out] */ IObjectProperty **ppprop)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6750],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallModule_Proxy( 
    IWorld * This,
    /* [in] */ IModule *pmodule,
    /* [in] */ DWORD dwOptions,
    /* [in] */ IMarshallBuffer *pmarshallbuffer)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6792],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallModule_Proxy( 
    IWorld * This,
    /* [in] */ REFCLSID clsid,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out] */ IModule **ppmodule)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6840],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallDISPPARAMS_Proxy( 
    IWorld * This,
    /* [in] */ DISPPARAMS *pdispparams,
    /* [in] */ IMarshallBuffer *pmarshallbuffer,
    /* [in] */ DWORD dwOptions)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6888],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_UnMarshallDISPPARAMS_Proxy( 
    IWorld * This,
    /* [in] */ IUnMarshallBuffer *punmarshallbuffer,
    /* [out][in] */ DISPPARAMS *pdispparams)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6936],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_MarshallPropertyToScript_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT var,
    /* [in] */ DWORD dwOptions,
    /* [in] */ BSTR bstrContext,
    /* [out] */ VARIANT_BOOL *pbAsVal,
    /* [out] */ BSTR *pbstrOut)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[6978],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWorld_CheckPolicy_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pThing,
    /* [in] */ unsigned long lFlags,
    /* [optional][in] */ VARIANT var,
    /* [retval][out] */ VARIANT_BOOL *pbAccessOk)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7038],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_CheckPolicyExt_Proxy( 
    IWorld * This,
    /* [in] */ IThing *pThing,
    /* [in] */ unsigned long lFlags,
    /* [optional][in] */ VARIANT var)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7092],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateProperty_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT var)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7140],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateDISPPARAMS_Proxy( 
    IWorld * This,
    /* [in] */ DISPPARAMS *pdispparams)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7176],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateObjectSafety_Proxy( 
    IWorld * This,
    /* [in] */ REFCLSID clsid,
    /* [in] */ IUnknown *punk,
    /* [in] */ DWORD dwOptions)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7212],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidatePropertyName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT_BOOL *pboolVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7260],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateMethodName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ long psbits,
    /* [retval][out] */ VARIANT_BOOL *pboolVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7302],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateInstanceName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT_BOOL *pboolVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7350],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateExemplarType_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrType,
    /* [retval][out] */ VARIANT_BOOL *pboolVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7392],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateWorldName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT_BOOL *pboolVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7434],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateAvatarName_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT_BOOL *pboolVal)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7476],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidatePropertyNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7518],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateMethodNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ long psbits)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7554],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateInstanceNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7596],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateExemplarTypeExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrType)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7632],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateWorldNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7668],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_ValidateAvatarNameExt_Proxy( 
    IWorld * This,
    /* [in] */ BSTR bstrName)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7704],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_CloneProperty_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT source,
    /* [retval][out] */ VARIANT *pDest)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7740],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_DumpProperty_Proxy( 
    IWorld * This,
    /* [in] */ VARIANT var)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7782],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_get_Version_Proxy( 
    IWorld * This,
    /* [retval][out] */ BSTR *pbstr)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7818],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_GetStatus_Proxy( 
    IWorld * This,
    /* [retval][out] */ BSTR *pbstr)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7854],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE IWorld_AddCLSIDToTable_Proxy( 
    IWorld * This,
    /* [in] */ REFCLSID clsid)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7890],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

/* [id][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE IWorld_UpdateGlobalPaths_Proxy( 
    IWorld * This)
{
CLIENT_CALL_RETURN _RetVal;

_RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &vwobject__MIDL_ProcFormatString.Format[7926],
                  ( unsigned char * )&This);
return ( HRESULT  )_RetVal.Simple;

}

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IVWObjectSite_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVWObjectSite_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IVWDispatch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVWDispatch_ProxyInfo;


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


static const vwobject_MIDL_PROC_FORMAT_STRING vwobject__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Connect */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x1c ),	/* 28 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPassword */

/* 30 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppthing */

/* 36 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Disconnect */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x1d ),	/* 29 */
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

	/* Procedure CreateAvatar */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x1e ),	/* 30 */
/* 86 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 94 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	NdrFcShort( 0x1 ),	/* 1 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPassword */

/* 108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 112 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrGUID */

/* 114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter pbstrNewName */

/* 120 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 122 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 124 */	NdrFcShort( 0x432 ),	/* Type Offset=1074 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConnectInt */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x1f ),	/* 31 */
/* 140 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 148 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 156 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPassword */

/* 162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 166 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter varProfile */

/* 168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 172 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter ppthing */

/* 174 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 176 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 178 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 182 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisconnectInt */

/* 186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x20 ),	/* 32 */
/* 194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisconnectAvatar */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x21 ),	/* 33 */
/* 224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 230 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAvatar */

/* 240 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisconnectClient */

/* 252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x22 ),	/* 34 */
/* 260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 266 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAvatar */

/* 276 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 280 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reconnect */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x23 ),	/* 35 */
/* 296 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 302 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 304 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 312 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 316 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrName */

/* 318 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 322 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPassword */

/* 324 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 328 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReconnectExt */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x24 ),	/* 36 */
/* 344 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 352 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 360 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrName */

/* 366 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 370 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPassword */

/* 372 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ActivateRoom */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x25 ),	/* 37 */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 408 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeactivateRoom */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x26 ),	/* 38 */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 444 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Synchronize */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x27 ),	/* 39 */
/* 464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Database */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x28 ),	/* 40 */
/* 494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 502 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 510 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	NdrFcShort( 0x432 ),	/* Type Offset=1074 */

	/* Return value */

/* 516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenDatabase */

/* 522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x29 ),	/* 41 */
/* 530 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 532 */	NdrFcShort( 0xc ),	/* 12 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 538 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 546 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 550 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bCreate */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 556 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bOverwrite */

/* 558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 562 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveDatabase */

/* 570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x2a ),	/* 42 */
/* 578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveDatabaseAs */

/* 600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x2b ),	/* 43 */
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

	/* Parameter bstrNewName */

/* 624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 628 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveToScript */

/* 636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x2c ),	/* 44 */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 650 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 652 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x1 ),	/* 1 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFilename */

/* 660 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 664 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ProcessLogRecord */

/* 672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x2d ),	/* 45 */
/* 680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 686 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbuffer */

/* 696 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 700 */	NdrFcShort( 0x43c ),	/* Type Offset=1084 */

	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableLogging */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x2e ),	/* 46 */
/* 716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 718 */	NdrFcShort( 0x6 ),	/* 6 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter boolval */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 736 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsLoggingEnabled */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x2f ),	/* 47 */
/* 752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x22 ),	/* 34 */
/* 758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 772 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateObjectInt */

/* 780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x30 ),	/* 48 */
/* 788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 794 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 796 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppthing */

/* 810 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 814 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteObjectInt */

/* 822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x31 ),	/* 49 */
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
/* 850 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance */

/* 858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x32 ),	/* 50 */
/* 866 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 874 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 882 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 886 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter varExemplar */

/* 888 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 892 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter varContainer */

/* 894 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 896 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 898 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter ppthing */

/* 900 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 902 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 904 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 908 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstanceExt */

/* 912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x33 ),	/* 51 */
/* 920 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 928 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 936 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 940 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter varExemplar */

/* 942 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 946 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter pthingContainer */

/* 948 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 950 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 952 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter ppthing */

/* 954 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 956 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 958 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstanceInt */

/* 966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x34 ),	/* 52 */
/* 974 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 980 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 982 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 990 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 994 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pthingExemplar */

/* 996 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1000 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter pthingContainer */

/* 1002 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1006 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter ppthing */

/* 1008 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1010 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1012 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateExemplar */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x35 ),	/* 53 */
/* 1028 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1036 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 1044 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter varExemplar */

/* 1050 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter ppthing */

/* 1056 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1058 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1060 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1064 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateExemplarEx */

/* 1068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1076 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1082 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1084 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 1092 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1096 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrType */

/* 1098 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1102 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter varExemplar */

/* 1104 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1108 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter ppthing */

/* 1110 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1112 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1114 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateExemplarExt */

/* 1122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x37 ),	/* 55 */
/* 1130 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1136 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1138 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 1146 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1150 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrType */

/* 1152 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1156 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter varExemplar */

/* 1158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1162 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter ppthing */

/* 1164 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1166 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1168 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1172 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateExemplarInt */

/* 1176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1184 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1190 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1192 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 1200 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1204 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrType */

/* 1206 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1210 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pthingExemplar */

/* 1212 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1214 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1216 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter ppthing */

/* 1218 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1220 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1222 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1226 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateRootExemplar */

/* 1230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x39 ),	/* 57 */
/* 1238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1244 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1246 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 1254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1258 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppthing */

/* 1260 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1262 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1264 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1268 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CloneInstance */

/* 1272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x3a ),	/* 58 */
/* 1280 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1286 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1288 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 1296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1300 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pthingSource */

/* 1302 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1306 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter ppthing */

/* 1308 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1310 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1312 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DestroyObject */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x3b ),	/* 59 */
/* 1328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 1344 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 1350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DestroyObjectByID */

/* 1356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1370 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1372 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 1380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ObjectByName */

/* 1392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x3d ),	/* 61 */
/* 1400 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1406 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1408 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 1416 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1420 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppthing */

/* 1422 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1426 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ObjectByID */

/* 1434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x3e ),	/* 62 */
/* 1442 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1448 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1450 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 1458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppthing */

/* 1464 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1468 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Exemplar */

/* 1476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x3f ),	/* 63 */
/* 1484 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1490 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1492 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 1500 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1504 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppthing */

/* 1506 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1510 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1514 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValidExemplar */

/* 1518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1526 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1532 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1534 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 1542 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1546 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbool */

/* 1548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1552 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Exemplars */

/* 1560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x41 ),	/* 65 */
/* 1568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1574 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pppropertymap */

/* 1584 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1588 */	NdrFcShort( 0x452 ),	/* Type Offset=1106 */

	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateObjectProperty */

/* 1596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x42 ),	/* 66 */
/* 1604 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1610 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1612 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrProgID */

/* 1620 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1624 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppproperty */

/* 1626 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1630 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 1632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateObjectPropertyExt */

/* 1638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x43 ),	/* 67 */
/* 1646 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1648 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1652 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1654 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsid */

/* 1662 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1666 */	NdrFcShort( 0x2f8 ),	/* Type Offset=760 */

	/* Parameter punk */

/* 1668 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1672 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter ppproperty */

/* 1674 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1678 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 1680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1682 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateMethodByDispID */

/* 1686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1694 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1696 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1700 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1702 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lFlags */

/* 1710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varModule */

/* 1716 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1720 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter dispid */

/* 1722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1724 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmethod */

/* 1728 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1730 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1732 */	NdrFcShort( 0x482 ),	/* Type Offset=1154 */

	/* Return value */

/* 1734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1736 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateMethod */

/* 1740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x45 ),	/* 69 */
/* 1748 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1754 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1756 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lFlags */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varModule */

/* 1770 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1774 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter bstrName */

/* 1776 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1778 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1780 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppmethod */

/* 1782 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1784 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1786 */	NdrFcShort( 0x482 ),	/* Type Offset=1154 */

	/* Return value */

/* 1788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1790 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInlineMethod */

/* 1794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x46 ),	/* 70 */
/* 1802 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1808 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1810 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lFlags */

/* 1818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrLanguage */

/* 1824 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1828 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrName */

/* 1830 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1834 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrCode */

/* 1836 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1838 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1840 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppmethod */

/* 1842 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1844 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1846 */	NdrFcShort( 0x482 ),	/* Type Offset=1154 */

	/* Return value */

/* 1848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1850 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCOMModule */

/* 1854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x47 ),	/* 71 */
/* 1862 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1868 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1870 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 1878 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1882 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrProgID */

/* 1884 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1888 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lFlags */

/* 1890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmodule */

/* 1896 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1898 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1900 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 1902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1904 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateScriptModule */

/* 1908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1916 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1922 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1924 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 1932 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1936 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrScriptPath */

/* 1938 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1942 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lFlags */

/* 1944 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1946 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmodule */

/* 1950 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1952 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1954 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 1956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1958 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCOMModuleEx */

/* 1962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x49 ),	/* 73 */
/* 1970 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1976 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1978 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 1986 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1990 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrProgID */

/* 1992 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1996 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lFlags */

/* 1998 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmodule */

/* 2004 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2006 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2008 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2012 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateScriptModuleEx */

/* 2016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x4a ),	/* 74 */
/* 2024 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2030 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2032 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2040 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2044 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrScriptPath */

/* 2046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2050 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lFlags */

/* 2052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmodule */

/* 2058 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2060 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2062 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 2064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2066 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveModule */

/* 2070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x4b ),	/* 75 */
/* 2078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2084 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2086 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2094 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2098 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Module */

/* 2106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2114 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2120 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2122 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2130 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2134 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppmodule */

/* 2136 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2140 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 2142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValidModule */

/* 2148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2154 */	NdrFcShort( 0x4d ),	/* 77 */
/* 2156 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2162 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2164 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2172 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2174 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2176 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbool */

/* 2178 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2180 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2182 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2186 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Modules */

/* 2190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x4e ),	/* 78 */
/* 2198 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2204 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2206 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pppropmap */

/* 2214 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2218 */	NdrFcShort( 0x452 ),	/* Type Offset=1106 */

	/* Return value */

/* 2220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2222 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTool */

/* 2226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x4f ),	/* 79 */
/* 2234 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2240 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2242 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2250 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2254 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrProgID */

/* 2256 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2260 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppunk */

/* 2262 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2266 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 2268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateToolFromInterface */

/* 2274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2282 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2288 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2290 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2298 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2302 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter punk */

/* 2304 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2308 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Return value */

/* 2310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateToolExt */

/* 2316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x51 ),	/* 81 */
/* 2324 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2326 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2330 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2332 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2340 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2344 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter clsid */

/* 2346 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2350 */	NdrFcShort( 0x2f8 ),	/* Type Offset=760 */

	/* Parameter ppunk */

/* 2352 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2354 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2356 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 2358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2360 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveTool */

/* 2364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x52 ),	/* 82 */
/* 2372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2378 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2380 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2388 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2390 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2392 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2396 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsValidTool */

/* 2400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x53 ),	/* 83 */
/* 2408 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2414 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2416 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2424 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2428 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbool */

/* 2430 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2434 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tool */

/* 2442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0x54 ),	/* 84 */
/* 2450 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2456 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2458 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2466 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2470 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppunk */

/* 2472 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2476 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 2478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2480 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ToolExt */

/* 2484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x55 ),	/* 85 */
/* 2492 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2498 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2500 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 2508 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2512 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppunk */

/* 2514 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2518 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 2520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2522 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tools */

/* 2526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x56 ),	/* 86 */
/* 2534 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2540 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2542 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pppropmap */

/* 2550 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2552 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2554 */	NdrFcShort( 0x452 ),	/* Type Offset=1106 */

	/* Return value */

/* 2556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2558 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeTools */

/* 2562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2568 */	NdrFcShort( 0x57 ),	/* 87 */
/* 2570 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2576 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2578 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppropmap */

/* 2586 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2588 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2590 */	NdrFcShort( 0x456 ),	/* Type Offset=1110 */

	/* Return value */

/* 2592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2594 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitializeConnection */

/* 2598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x58 ),	/* 88 */
/* 2606 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2612 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2614 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvwcommconnection */

/* 2622 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2626 */	NdrFcShort( 0x4b2 ),	/* Type Offset=1202 */

	/* Return value */

/* 2628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2630 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisconnectConnection */

/* 2634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x59 ),	/* 89 */
/* 2642 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2648 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2650 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvwcommconnection */

/* 2658 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2660 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2662 */	NdrFcShort( 0x4b2 ),	/* Type Offset=1202 */

	/* Return value */

/* 2664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2666 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnOpenWorld */

/* 2670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x5a ),	/* 90 */
/* 2678 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2680 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2684 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2686 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bPersist */

/* 2694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2696 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2698 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2702 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCreateWorld */

/* 2706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x5b ),	/* 91 */
/* 2714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2720 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2722 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ProcessMessage */

/* 2736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2752 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pmessage */

/* 2760 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2764 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 2766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ProcessMessageExt */

/* 2772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x5d ),	/* 93 */
/* 2780 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2782 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2784 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2786 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2788 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ch */

/* 2796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2800 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter pUBuffer */

/* 2802 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2806 */	NdrFcShort( 0x43c ),	/* Type Offset=1084 */

	/* Parameter recvhr */

/* 2808 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 2814 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2816 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2818 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Return value */

/* 2820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2822 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Connection */

/* 2826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0x5e ),	/* 94 */
/* 2834 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2840 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2842 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppvwcommconnection */

/* 2850 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2852 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2854 */	NdrFcShort( 0x4ec ),	/* Type Offset=1260 */

	/* Return value */

/* 2856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2858 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Connection */

/* 2862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2868 */	NdrFcShort( 0x5f ),	/* 95 */
/* 2870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2876 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2878 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvwcommconnection */

/* 2886 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2888 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2890 */	NdrFcShort( 0x4b2 ),	/* Type Offset=1202 */

	/* Return value */

/* 2892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2894 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ShouldExecute */

/* 2898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2904 */	NdrFcShort( 0x60 ),	/* 96 */
/* 2906 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2910 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2912 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2914 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 2922 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2924 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2926 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2930 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ShouldExecuteSync */

/* 2934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x61 ),	/* 97 */
/* 2942 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2948 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2950 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 2958 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2960 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2962 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2966 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ShouldRemote */

/* 2970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2976 */	NdrFcShort( 0x62 ),	/* 98 */
/* 2978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2984 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2986 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 2994 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2998 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ShouldRemoteSync */

/* 3006 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x63 ),	/* 99 */
/* 3014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3020 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3022 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3030 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3032 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3034 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3038 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ShouldNotify */

/* 3042 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x64 ),	/* 100 */
/* 3050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3056 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3058 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3064 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3066 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3068 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3070 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3074 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LocalMode */

/* 3078 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x65 ),	/* 101 */
/* 3086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3090 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3092 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3094 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_LocalMode */

/* 3114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3120 */	NdrFcShort( 0x66 ),	/* 102 */
/* 3122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3124 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter boolval */

/* 3138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3142 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FreezeEvents */

/* 3150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3156 */	NdrFcShort( 0x67 ),	/* 103 */
/* 3158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3178 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FreezeEvents */

/* 3186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0x68 ),	/* 104 */
/* 3194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3196 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter boolval */

/* 3210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3214 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EnableSecurity */

/* 3222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3228 */	NdrFcShort( 0x69 ),	/* 105 */
/* 3230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3236 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3250 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableTrace */

/* 3258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3264 */	NdrFcShort( 0x6a ),	/* 106 */
/* 3266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3268 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter boolval */

/* 3282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3286 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsTraceEnabled */

/* 3294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x6b ),	/* 107 */
/* 3302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3308 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3322 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TraceLevel */

/* 3330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x6c ),	/* 108 */
/* 3338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3344 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3346 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 3354 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3358 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ival */

/* 3360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3362 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TraceLevel */

/* 3372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x6d ),	/* 109 */
/* 3380 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3386 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3388 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 3396 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3400 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ival */

/* 3402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveTraceLevel */

/* 3414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x6e ),	/* 110 */
/* 3422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3428 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3430 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 3438 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3442 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Trace */

/* 3450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x6f ),	/* 111 */
/* 3458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3466 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 3474 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3478 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Report */

/* 3486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x70 ),	/* 112 */
/* 3494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3502 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 3510 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3514 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lType */

/* 3516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Print */

/* 3528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3534 */	NdrFcShort( 0x71 ),	/* 113 */
/* 3536 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3542 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3544 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3548 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varAnything */

/* 3552 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3556 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 3558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Format */

/* 3564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3570 */	NdrFcShort( 0x72 ),	/* 114 */
/* 3572 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3578 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3580 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrIn */

/* 3588 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3592 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pObjects */

/* 3594 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3598 */	NdrFcShort( 0x4f0 ),	/* Type Offset=1264 */

	/* Parameter pPOV */

/* 3600 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3604 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstrOut */

/* 3606 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3608 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3610 */	NdrFcShort( 0x432 ),	/* Type Offset=1074 */

	/* Return value */

/* 3612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3614 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FormatSentences */

/* 3618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x73 ),	/* 115 */
/* 3626 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3632 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3634 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrIn */

/* 3642 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3646 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pObjects */

/* 3648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3652 */	NdrFcShort( 0x4f0 ),	/* Type Offset=1264 */

	/* Parameter pPOV */

/* 3654 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3658 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstrOut */

/* 3660 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3664 */	NdrFcShort( 0x432 ),	/* Type Offset=1074 */

	/* Return value */

/* 3666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3668 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsConnected */

/* 3672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3678 */	NdrFcShort( 0x74 ),	/* 116 */
/* 3680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3700 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ServerSide */

/* 3708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x75 ),	/* 117 */
/* 3716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3720 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 3732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3736 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ServerSide */

/* 3744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x76 ),	/* 118 */
/* 3752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3754 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter boolval */

/* 3768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3772 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Avatar */

/* 3780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x77 ),	/* 119 */
/* 3788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3794 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3796 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3800 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3804 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3808 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppthing */

/* 3810 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3814 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 3816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AvatarByGUID */

/* 3822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x78 ),	/* 120 */
/* 3830 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3836 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3838 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3846 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3850 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppthing */

/* 3852 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3856 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 3858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Global */

/* 3864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3870 */	NdrFcShort( 0x79 ),	/* 121 */
/* 3872 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3878 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */

/* 3888 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3892 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 3894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Owner */

/* 3900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0x7a ),	/* 122 */
/* 3908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3914 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */

/* 3924 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3928 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 3930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_User */

/* 3936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3942 */	NdrFcShort( 0x7b ),	/* 123 */
/* 3944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3950 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */

/* 3960 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3964 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 3966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_User */

/* 3972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0x7c ),	/* 124 */
/* 3980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3986 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 3996 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4000 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_This */

/* 4008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0x7d ),	/* 125 */
/* 4016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4022 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */

/* 4032 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4036 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 4038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_This */

/* 4044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4050 */	NdrFcShort( 0x7e ),	/* 126 */
/* 4052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4058 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4060 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 4068 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4072 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Caller */

/* 4080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x7f ),	/* 127 */
/* 4088 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4094 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4096 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */

/* 4104 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4108 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 4110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Caller */

/* 4116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x80 ),	/* 128 */
/* 4124 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4130 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4132 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 4140 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4144 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Super */

/* 4152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x81 ),	/* 129 */
/* 4160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4166 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4168 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppthing */

/* 4176 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4180 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 4182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Super */

/* 4188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x82 ),	/* 130 */
/* 4196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4204 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 4212 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4216 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SecurityContext */

/* 4224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x83 ),	/* 131 */
/* 4232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4238 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4240 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppSecurity */

/* 4248 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4252 */	NdrFcShort( 0x502 ),	/* Type Offset=1282 */

	/* Return value */

/* 4254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SecurityContext */

/* 4260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x84 ),	/* 132 */
/* 4268 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4274 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSecurity */

/* 4284 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4288 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Return value */

/* 4290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsInPropChange */

/* 4296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x85 ),	/* 133 */
/* 4304 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4310 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4312 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 4320 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4324 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IsInPropChange */

/* 4332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x86 ),	/* 134 */
/* 4340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4342 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4346 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4348 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter boolval */

/* 4356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4360 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AbortEvent */

/* 4368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4374 */	NdrFcShort( 0x87 ),	/* 135 */
/* 4376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4382 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4384 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsEventAborted */

/* 4398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4404 */	NdrFcShort( 0x88 ),	/* 136 */
/* 4406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4410 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4412 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4414 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbool */

/* 4422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4426 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IsEventAborted */

/* 4434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0x89 ),	/* 137 */
/* 4442 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4444 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4450 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter boolval */

/* 4458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4462 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsExemplar */

/* 4470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4476 */	NdrFcShort( 0x8a ),	/* 138 */
/* 4478 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4484 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4486 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 4494 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4496 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4498 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter pbool */

/* 4500 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4502 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4504 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4508 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsAvatar */

/* 4512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4518 */	NdrFcShort( 0x8b ),	/* 139 */
/* 4520 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4526 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 4536 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4540 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter pbool */

/* 4542 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4546 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsRoom */

/* 4554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0x8c ),	/* 140 */
/* 4562 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4568 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4570 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 4578 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4582 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter pbool */

/* 4584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4588 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LockWorld */

/* 4596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4602 */	NdrFcShort( 0x8d ),	/* 141 */
/* 4604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnlockWorld */

/* 4626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4632 */	NdrFcShort( 0x8e ),	/* 142 */
/* 4634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4640 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4642 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyUserConnect */

/* 4656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4662 */	NdrFcShort( 0x8f ),	/* 143 */
/* 4664 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4670 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4672 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4678 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 4680 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4684 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4688 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyUserDisconnect */

/* 4692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0x90 ),	/* 144 */
/* 4700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4706 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4708 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 4716 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4720 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FireUIEvent */

/* 4728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4734 */	NdrFcShort( 0x91 ),	/* 145 */
/* 4736 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4742 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4744 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 4752 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4754 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4756 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstrEventName */

/* 4758 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4760 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4762 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter varArg */

/* 4764 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4768 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 4770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4772 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowHTML */

/* 4776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4782 */	NdrFcShort( 0x92 ),	/* 146 */
/* 4784 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4790 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4792 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTitle */

/* 4800 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4804 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrHtml */

/* 4806 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4810 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter cx */

/* 4812 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4816 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter cy */

/* 4818 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4820 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4822 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 4824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4826 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowHTMLEx */

/* 4830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4836 */	NdrFcShort( 0x93 ),	/* 147 */
/* 4838 */	NdrFcShort( 0x64 ),	/* x86 Stack size/offset = 100 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4844 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 4846 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrWinName */

/* 4854 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4858 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTitle */

/* 4860 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4864 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrHtml */

/* 4866 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4870 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter dispArg */

/* 4872 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4874 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4876 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter x */

/* 4878 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4880 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4882 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter y */

/* 4884 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4886 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4888 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter cx */

/* 4890 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4892 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4894 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter cy */

/* 4896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4898 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 4900 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 4902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4904 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 4906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowHTMLExt */

/* 4908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0x94 ),	/* 148 */
/* 4916 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 4918 */	NdrFcShort( 0x26 ),	/* 38 */
/* 4920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4922 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 4924 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrWinName */

/* 4932 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4936 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrHtml */

/* 4938 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4942 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTitle */

/* 4944 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4946 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4948 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSafeMode */

/* 4950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4952 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4954 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispArg */

/* 4956 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4958 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4960 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Parameter x */

/* 4962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4964 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 4968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4970 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cx */

/* 4974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4976 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cy */

/* 4980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4982 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4988 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowURL */

/* 4992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4998 */	NdrFcShort( 0x95 ),	/* 149 */
/* 5000 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 5002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5008 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTitle */

/* 5016 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5020 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrUrl */

/* 5022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5026 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter cx */

/* 5028 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5032 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter cy */

/* 5034 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5036 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5038 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 5040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5042 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 5044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowURLEx */

/* 5046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5052 */	NdrFcShort( 0x96 ),	/* 150 */
/* 5054 */	NdrFcShort( 0x64 ),	/* x86 Stack size/offset = 100 */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5060 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5062 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrWinName */

/* 5070 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5074 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTitle */

/* 5076 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5078 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5080 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrUrl */

/* 5082 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5086 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter dispArg */

/* 5088 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5090 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5092 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter x */

/* 5094 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5096 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5098 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter y */

/* 5100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5102 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 5104 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter cx */

/* 5106 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5108 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 5110 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter cy */

/* 5112 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5114 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 5116 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 5118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5120 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 5122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowURLExt */

/* 5124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5130 */	NdrFcShort( 0x97 ),	/* 151 */
/* 5132 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 5134 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 5140 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrWinName */

/* 5148 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5152 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bPopup */

/* 5154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5158 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrUrl */

/* 5160 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5164 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTitle */

/* 5166 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5168 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5170 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSafeMode */

/* 5172 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5174 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5176 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispArg */

/* 5178 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5180 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5182 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Parameter x */

/* 5184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5186 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 5190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5192 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cx */

/* 5196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5198 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cy */

/* 5202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5204 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5210 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyInvokeMethod */

/* 5214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5220 */	NdrFcShort( 0x98 ),	/* 152 */
/* 5222 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5228 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5230 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 5238 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5242 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstr */

/* 5244 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5248 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pdispparams */

/* 5250 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5254 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 5256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5258 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyPropertyChanged */

/* 5262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x99 ),	/* 153 */
/* 5270 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5276 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5278 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 5286 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5290 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstr */

/* 5292 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5296 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lHint */

/* 5298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5300 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varHintData */

/* 5304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5306 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5308 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 5310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5312 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyMethodChanged */

/* 5316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5322 */	NdrFcShort( 0x9a ),	/* 154 */
/* 5324 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5330 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5332 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 5340 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5344 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstr */

/* 5346 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5348 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5350 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lHint */

/* 5352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5354 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varHintData */

/* 5358 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5360 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5362 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 5364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5366 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyModuleChanged */

/* 5370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5376 */	NdrFcShort( 0x9b ),	/* 155 */
/* 5378 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5384 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5386 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 5394 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5398 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lHint */

/* 5400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5402 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varHintData */

/* 5406 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5408 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5410 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 5412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5414 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendContainer */

/* 5418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x9c ),	/* 156 */
/* 5426 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5432 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5434 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 5442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pthing */

/* 5448 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5452 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendContents */

/* 5460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5466 */	NdrFcShort( 0x9d ),	/* 157 */
/* 5468 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5470 */	NdrFcShort( 0xe ),	/* 14 */
/* 5472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5474 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5476 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 5484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pthing */

/* 5490 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5494 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bForceOpen */

/* 5496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5500 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5504 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendWorld */

/* 5508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5514 */	NdrFcShort( 0x9e ),	/* 158 */
/* 5516 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5522 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5524 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 5532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5540 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendExemplar */

/* 5544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5550 */	NdrFcShort( 0x9f ),	/* 159 */
/* 5552 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5558 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5560 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 5568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pthing */

/* 5574 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5578 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstr */

/* 5580 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5584 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5588 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendThingByID */

/* 5592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5598 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 5600 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5602 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5606 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5608 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 5616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lID */

/* 5622 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5630 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendThing */

/* 5634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5640 */	NdrFcShort( 0xa1 ),	/* 161 */
/* 5642 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5648 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5650 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 5658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5660 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pthing */

/* 5664 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5666 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5668 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendModule */

/* 5676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5682 */	NdrFcShort( 0xa2 ),	/* 162 */
/* 5684 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5690 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5692 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lval */

/* 5700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmodule */

/* 5706 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5710 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Parameter bstr */

/* 5712 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5714 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5716 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendWorldCommand */

/* 5724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5730 */	NdrFcShort( 0xa3 ),	/* 163 */
/* 5732 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5734 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5736 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5738 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 5740 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bReply */

/* 5748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5750 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5752 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter dispid */

/* 5754 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5756 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 5760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5762 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5764 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 5766 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5768 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5770 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Parameter recvhr */

/* 5772 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5774 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 5778 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5780 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5782 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Return value */

/* 5784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5786 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendThingCommand */

/* 5790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5796 */	NdrFcShort( 0xa4 ),	/* 164 */
/* 5798 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5800 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5804 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5806 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lFlags */

/* 5814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pthing */

/* 5820 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5824 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter dispid */

/* 5826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 5832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5834 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5836 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 5838 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5840 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5842 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 5844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5846 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendObjectPropertyCommand */

/* 5850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5856 */	NdrFcShort( 0xa5 ),	/* 165 */
/* 5858 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5860 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5864 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5866 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lFlags */

/* 5874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pprop */

/* 5880 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5882 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5884 */	NdrFcShort( 0x46c ),	/* Type Offset=1132 */

	/* Parameter dispid */

/* 5886 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 5892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5894 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5896 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 5898 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5900 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5902 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 5904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5906 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendWorldCommandExt */

/* 5910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5916 */	NdrFcShort( 0xa6 ),	/* 166 */
/* 5918 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5920 */	NdrFcShort( 0x1a ),	/* 26 */
/* 5922 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5924 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5926 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bReply */

/* 5934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5938 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bSync */

/* 5940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5944 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter dispid */

/* 5946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 5952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5954 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5956 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 5958 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5960 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5962 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Parameter recvhr */

/* 5964 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5966 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 5970 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5972 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5974 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Return value */

/* 5976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5978 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendThingCommandExt */

/* 5982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5988 */	NdrFcShort( 0xa7 ),	/* 167 */
/* 5990 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 5992 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5994 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5996 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 5998 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6000 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6002 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bReply */

/* 6006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6010 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bSync */

/* 6012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6016 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter lFlags */

/* 6018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pthing */

/* 6024 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6028 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter dispid */

/* 6030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6032 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 6036 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6038 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6040 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 6042 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6044 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6046 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Parameter recvhr */

/* 6048 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6050 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 6054 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6056 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6058 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Return value */

/* 6060 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6062 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendObjectPropertyCommandExt */

/* 6066 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6072 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 6074 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 6076 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6078 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6080 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 6082 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6086 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bReply */

/* 6090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6092 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6094 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bSync */

/* 6096 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6098 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6100 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter lFlags */

/* 6102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pprop */

/* 6108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6112 */	NdrFcShort( 0x46c ),	/* Type Offset=1132 */

	/* Parameter dispid */

/* 6114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6116 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 6120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6122 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6124 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 6126 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6128 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6130 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Parameter recvhr */

/* 6132 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6134 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvar */

/* 6138 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6140 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6142 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Return value */

/* 6144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6146 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendModuleCommand */

/* 6150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6156 */	NdrFcShort( 0xa9 ),	/* 169 */
/* 6158 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6160 */	NdrFcShort( 0xe ),	/* 14 */
/* 6162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6164 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6166 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pmodule */

/* 6174 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6178 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Parameter dispid */

/* 6180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 6186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6190 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 6192 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6196 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 6198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendMethodCommand */

/* 6204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6210 */	NdrFcShort( 0xaa ),	/* 170 */
/* 6212 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6214 */	NdrFcShort( 0xe ),	/* 14 */
/* 6216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6220 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pmethod */

/* 6228 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6232 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Parameter dispid */

/* 6234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 6240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6244 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 6246 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6250 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 6252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6254 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LogThingCommand */

/* 6258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6264 */	NdrFcShort( 0xab ),	/* 171 */
/* 6266 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6268 */	NdrFcShort( 0xe ),	/* 14 */
/* 6270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6272 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6274 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 6282 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6286 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter dispid */

/* 6288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 6294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6298 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 6300 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6304 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 6306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6308 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LogWorldCommand */

/* 6312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0xac ),	/* 172 */
/* 6320 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6322 */	NdrFcShort( 0xe ),	/* 14 */
/* 6324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6328 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dispid */

/* 6336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 6342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6346 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pdispparams */

/* 6348 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6352 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 6354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteCommandHeader */

/* 6360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0xad ),	/* 173 */
/* 6368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6370 */	NdrFcShort( 0xa ),	/* 10 */
/* 6372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6374 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6376 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBuffer */

/* 6384 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6388 */	NdrFcShort( 0x554 ),	/* Type Offset=1364 */

	/* Parameter ucReply */

/* 6390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6394 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter ucCommand */

/* 6396 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6400 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 6402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteCommandCallstack */

/* 6408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6414 */	NdrFcShort( 0xae ),	/* 174 */
/* 6416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6422 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBuffer */

/* 6432 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6436 */	NdrFcShort( 0x554 ),	/* Type Offset=1364 */

	/* Return value */

/* 6438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterInterest */

/* 6444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6450 */	NdrFcShort( 0xaf ),	/* 175 */
/* 6452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6458 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 6468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6472 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 6474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterInterest */

/* 6480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6486 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 6488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6494 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6496 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 6504 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6508 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 6510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MarshallThing */

/* 6516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6522 */	NdrFcShort( 0xb1 ),	/* 177 */
/* 6524 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6530 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6532 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 6540 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6544 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter dwOptions */

/* 6546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmarshallbuffer */

/* 6552 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6556 */	NdrFcShort( 0x554 ),	/* Type Offset=1364 */

	/* Return value */

/* 6558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6560 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnMarshallThing */

/* 6564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6570 */	NdrFcShort( 0xb2 ),	/* 178 */
/* 6572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6578 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6580 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter punmarshallbuffer */

/* 6588 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6592 */	NdrFcShort( 0x43c ),	/* Type Offset=1084 */

	/* Parameter ppthing */

/* 6594 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6598 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 6600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MarshallProperty */

/* 6606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6612 */	NdrFcShort( 0xb3 ),	/* 179 */
/* 6614 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6622 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 6630 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6634 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter dwOptions */

/* 6636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6638 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmarshallbuffer */

/* 6642 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6644 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6646 */	NdrFcShort( 0x554 ),	/* Type Offset=1364 */

	/* Return value */

/* 6648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6650 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnMarshallProperty */

/* 6654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6660 */	NdrFcShort( 0xb4 ),	/* 180 */
/* 6662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6668 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6670 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter punmarshallbuffer */

/* 6678 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6682 */	NdrFcShort( 0x43c ),	/* Type Offset=1084 */

	/* Parameter pvar */

/* 6684 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6688 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Return value */

/* 6690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MarshallObjectProperty */

/* 6696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6702 */	NdrFcShort( 0xb5 ),	/* 181 */
/* 6704 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6706 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pprop */

/* 6720 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6724 */	NdrFcShort( 0x46c ),	/* Type Offset=1132 */

	/* Parameter lHint */

/* 6726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwOptions */

/* 6732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmarshallbuffer */

/* 6738 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6742 */	NdrFcShort( 0x554 ),	/* Type Offset=1364 */

	/* Return value */

/* 6744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6746 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnMarshallObjectProperty */

/* 6750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6756 */	NdrFcShort( 0xb6 ),	/* 182 */
/* 6758 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6764 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6766 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter punmarshallbuffer */

/* 6774 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6778 */	NdrFcShort( 0x43c ),	/* Type Offset=1084 */

	/* Parameter ppprop */

/* 6780 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6784 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 6786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MarshallModule */

/* 6792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6798 */	NdrFcShort( 0xb7 ),	/* 183 */
/* 6800 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6806 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6808 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pmodule */

/* 6816 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6820 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Parameter dwOptions */

/* 6822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmarshallbuffer */

/* 6828 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6832 */	NdrFcShort( 0x554 ),	/* Type Offset=1364 */

	/* Return value */

/* 6834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnMarshallModule */

/* 6840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6846 */	NdrFcShort( 0xb8 ),	/* 184 */
/* 6848 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6850 */	NdrFcShort( 0x44 ),	/* 68 */
/* 6852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6854 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsid */

/* 6864 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 6866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6868 */	NdrFcShort( 0x2f8 ),	/* Type Offset=760 */

	/* Parameter punmarshallbuffer */

/* 6870 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6874 */	NdrFcShort( 0x43c ),	/* Type Offset=1084 */

	/* Parameter ppmodule */

/* 6876 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6880 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 6882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MarshallDISPPARAMS */

/* 6888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6894 */	NdrFcShort( 0xb9 ),	/* 185 */
/* 6896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6902 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6904 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdispparams */

/* 6912 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6916 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Parameter pmarshallbuffer */

/* 6918 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6922 */	NdrFcShort( 0x554 ),	/* Type Offset=1364 */

	/* Parameter dwOptions */

/* 6924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6932 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnMarshallDISPPARAMS */

/* 6936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6942 */	NdrFcShort( 0xba ),	/* 186 */
/* 6944 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6950 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6952 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter punmarshallbuffer */

/* 6960 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6964 */	NdrFcShort( 0x43c ),	/* Type Offset=1084 */

	/* Parameter pdispparams */

/* 6966 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 6968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6970 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 6972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MarshallPropertyToScript */

/* 6978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6984 */	NdrFcShort( 0xbb ),	/* 187 */
/* 6986 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6990 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6992 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6994 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6996 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6998 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 7002 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7006 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter dwOptions */

/* 7008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7010 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrContext */

/* 7014 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7016 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7018 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbAsVal */

/* 7020 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7022 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7024 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pbstrOut */

/* 7026 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7028 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7030 */	NdrFcShort( 0x432 ),	/* Type Offset=1074 */

	/* Return value */

/* 7032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7034 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 7036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckPolicy */

/* 7038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0xbc ),	/* 188 */
/* 7046 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 7048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7050 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7054 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pThing */

/* 7062 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7066 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter lFlags */

/* 7068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter var */

/* 7074 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7078 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter pbAccessOk */

/* 7080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7082 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7084 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7088 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckPolicyExt */

/* 7092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7098 */	NdrFcShort( 0xbd ),	/* 189 */
/* 7100 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 7102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7106 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7108 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pThing */

/* 7116 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7120 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter lFlags */

/* 7122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter var */

/* 7128 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7132 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 7134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7136 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateProperty */

/* 7140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7146 */	NdrFcShort( 0xbe ),	/* 190 */
/* 7148 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7154 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7156 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 7164 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7166 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7168 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 7170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7172 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateDISPPARAMS */

/* 7176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7182 */	NdrFcShort( 0xbf ),	/* 191 */
/* 7184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7190 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7192 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pdispparams */

/* 7200 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7204 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 7206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateObjectSafety */

/* 7212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7218 */	NdrFcShort( 0xc0 ),	/* 192 */
/* 7220 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7222 */	NdrFcShort( 0x4c ),	/* 76 */
/* 7224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7226 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsid */

/* 7236 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 7238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7240 */	NdrFcShort( 0x2f8 ),	/* Type Offset=760 */

	/* Parameter punk */

/* 7242 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7246 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter dwOptions */

/* 7248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7250 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7256 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidatePropertyName */

/* 7260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7266 */	NdrFcShort( 0xc1 ),	/* 193 */
/* 7268 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7272 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7274 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7276 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7284 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7288 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pboolVal */

/* 7290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7294 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateMethodName */

/* 7302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7308 */	NdrFcShort( 0xc2 ),	/* 194 */
/* 7310 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7314 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7316 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7318 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7322 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7326 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7330 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter psbits */

/* 7332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pboolVal */

/* 7338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7342 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7346 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateInstanceName */

/* 7350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7356 */	NdrFcShort( 0xc3 ),	/* 195 */
/* 7358 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7362 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7364 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7366 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7374 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7378 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pboolVal */

/* 7380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7384 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateExemplarType */

/* 7392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7398 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 7400 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7404 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7406 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7408 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 7416 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7420 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pboolVal */

/* 7422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7426 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateWorldName */

/* 7434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7440 */	NdrFcShort( 0xc5 ),	/* 197 */
/* 7442 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7446 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7448 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7450 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7454 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7458 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7462 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pboolVal */

/* 7464 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7468 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateAvatarName */

/* 7476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7482 */	NdrFcShort( 0xc6 ),	/* 198 */
/* 7484 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7488 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7490 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7492 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7500 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7504 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pboolVal */

/* 7506 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7510 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7514 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidatePropertyNameExt */

/* 7518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7524 */	NdrFcShort( 0xc7 ),	/* 199 */
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

	/* Parameter bstrName */

/* 7542 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7546 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateMethodNameExt */

/* 7554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7560 */	NdrFcShort( 0xc8 ),	/* 200 */
/* 7562 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7568 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7570 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7578 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7582 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter psbits */

/* 7584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateInstanceNameExt */

/* 7596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7602 */	NdrFcShort( 0xc9 ),	/* 201 */
/* 7604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7612 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7620 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7624 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateExemplarTypeExt */

/* 7632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7638 */	NdrFcShort( 0xca ),	/* 202 */
/* 7640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7646 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7648 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7652 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 7656 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7660 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateWorldNameExt */

/* 7668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7674 */	NdrFcShort( 0xcb ),	/* 203 */
/* 7676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7682 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7684 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7692 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7696 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ValidateAvatarNameExt */

/* 7704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7710 */	NdrFcShort( 0xcc ),	/* 204 */
/* 7712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7718 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7720 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 7728 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7732 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CloneProperty */

/* 7740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7746 */	NdrFcShort( 0xcd ),	/* 205 */
/* 7748 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7754 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7756 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source */

/* 7764 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7768 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Parameter pDest */

/* 7770 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 7772 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7774 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Return value */

/* 7776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7778 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DumpProperty */

/* 7782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7788 */	NdrFcShort( 0xce ),	/* 206 */
/* 7790 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7796 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7798 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 7806 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7810 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 7812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7814 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Version */

/* 7818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7824 */	NdrFcShort( 0xcf ),	/* 207 */
/* 7826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7832 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7834 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 7842 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7846 */	NdrFcShort( 0x432 ),	/* Type Offset=1074 */

	/* Return value */

/* 7848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStatus */

/* 7854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7860 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 7862 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7868 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7870 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstr */

/* 7878 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7882 */	NdrFcShort( 0x432 ),	/* Type Offset=1074 */

	/* Return value */

/* 7884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddCLSIDToTable */

/* 7890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7896 */	NdrFcShort( 0xd1 ),	/* 209 */
/* 7898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7900 */	NdrFcShort( 0x44 ),	/* 68 */
/* 7902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7904 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter clsid */

/* 7914 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 7916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7918 */	NdrFcShort( 0x2f8 ),	/* Type Offset=760 */

	/* Return value */

/* 7920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateGlobalPaths */

/* 7926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7932 */	NdrFcShort( 0xd2 ),	/* 210 */
/* 7934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7940 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7942 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 7950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUserConnect */

/* 7956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7962 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7970 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 7980 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7984 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 7986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUserDisconnect */

/* 7992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7998 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 8016 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8020 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 8022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUserReconnect */

/* 8028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8034 */	NdrFcShort( 0x5 ),	/* 5 */
/* 8036 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8042 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8044 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 8052 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8056 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrName */

/* 8058 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8062 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPassword */

/* 8064 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8066 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8068 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 8070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8072 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUIEvent */

/* 8076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8082 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8084 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8090 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8092 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8096 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 8100 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8104 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstrEventName */

/* 8106 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8110 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter varArg */

/* 8112 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8116 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 8118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8120 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInvokeMethod */

/* 8124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8130 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8132 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8140 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 8148 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8152 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstrName */

/* 8154 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8158 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pdispparams */

/* 8160 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8164 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 8166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8168 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPropertyChanged */

/* 8172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8180 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 8182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8186 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8188 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 8196 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8200 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstrName */

/* 8202 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8206 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lHint */

/* 8208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varHintData */

/* 8214 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8216 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8218 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 8220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8222 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnMethodChanged */

/* 8226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8232 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8234 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 8236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8242 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pthing */

/* 8250 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8254 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter bstrName */

/* 8256 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8260 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lHint */

/* 8262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varHintData */

/* 8268 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8272 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 8274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8276 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnModuleChanged */

/* 8280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8286 */	NdrFcShort( 0xa ),	/* 10 */
/* 8288 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 8290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8294 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8296 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 8304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8308 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lHint */

/* 8310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter varHintData */

/* 8316 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8320 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 8322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8324 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnTrace */

/* 8328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8334 */	NdrFcShort( 0xb ),	/* 11 */
/* 8336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8342 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8344 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 8352 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8356 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 8358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8360 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnReport */

/* 8364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8370 */	NdrFcShort( 0xc ),	/* 12 */
/* 8372 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8378 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8380 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstr */

/* 8388 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8390 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8392 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lType */

/* 8394 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8396 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8402 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 8406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8412 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8420 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8422 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pworld */

/* 8430 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8434 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Return value */

/* 8436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Terminate */

/* 8442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8458 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Install */

/* 8472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8478 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8480 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8486 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8488 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pmodule */

/* 8496 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8500 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Return value */

/* 8502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8504 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnLoad */

/* 8508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8514 */	NdrFcShort( 0xa ),	/* 10 */
/* 8516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8522 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8524 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUnload */

/* 8538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8544 */	NdrFcShort( 0xb ),	/* 11 */
/* 8546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8552 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8554 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const vwobject_MIDL_TYPE_FORMAT_STRING vwobject__MIDL_TypeFormatString =
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
/* 44 */	NdrFcLong( 0x590d9852 ),	/* 1494063186 */
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
			0x12, 0x0,	/* FC_UP */
/* 62 */	NdrFcShort( 0x3ce ),	/* Offset= 974 (1036) */
/* 64 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 66 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 68 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 70 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	NdrFcShort( 0x10 ),	/* 16 */
/* 76 */	NdrFcShort( 0x2f ),	/* 47 */
/* 78 */	NdrFcLong( 0x14 ),	/* 20 */
/* 82 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 84 */	NdrFcLong( 0x3 ),	/* 3 */
/* 88 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 90 */	NdrFcLong( 0x11 ),	/* 17 */
/* 94 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 96 */	NdrFcLong( 0x2 ),	/* 2 */
/* 100 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 102 */	NdrFcLong( 0x4 ),	/* 4 */
/* 106 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 108 */	NdrFcLong( 0x5 ),	/* 5 */
/* 112 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 114 */	NdrFcLong( 0xb ),	/* 11 */
/* 118 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 120 */	NdrFcLong( 0xa ),	/* 10 */
/* 124 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 126 */	NdrFcLong( 0x6 ),	/* 6 */
/* 130 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (362) */
/* 132 */	NdrFcLong( 0x7 ),	/* 7 */
/* 136 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 138 */	NdrFcLong( 0x8 ),	/* 8 */
/* 142 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (2) */
/* 144 */	NdrFcLong( 0xd ),	/* 13 */
/* 148 */	NdrFcShort( 0xdc ),	/* Offset= 220 (368) */
/* 150 */	NdrFcLong( 0x9 ),	/* 9 */
/* 154 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (386) */
/* 156 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 160 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (404) */
/* 162 */	NdrFcLong( 0x24 ),	/* 36 */
/* 166 */	NdrFcShort( 0x31c ),	/* Offset= 796 (962) */
/* 168 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 172 */	NdrFcShort( 0x316 ),	/* Offset= 790 (962) */
/* 174 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 178 */	NdrFcShort( 0x314 ),	/* Offset= 788 (966) */
/* 180 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 184 */	NdrFcShort( 0x312 ),	/* Offset= 786 (970) */
/* 186 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 190 */	NdrFcShort( 0x310 ),	/* Offset= 784 (974) */
/* 192 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 196 */	NdrFcShort( 0x30e ),	/* Offset= 782 (978) */
/* 198 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 202 */	NdrFcShort( 0x30c ),	/* Offset= 780 (982) */
/* 204 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 208 */	NdrFcShort( 0x30a ),	/* Offset= 778 (986) */
/* 210 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 214 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (970) */
/* 216 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 220 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (974) */
/* 222 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 226 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (990) */
/* 228 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 232 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (986) */
/* 234 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 238 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (994) */
/* 240 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 244 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (998) */
/* 246 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 250 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (1002) */
/* 252 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 256 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (1006) */
/* 258 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 262 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (1010) */
/* 264 */	NdrFcLong( 0x10 ),	/* 16 */
/* 268 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 270 */	NdrFcLong( 0x12 ),	/* 18 */
/* 274 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 276 */	NdrFcLong( 0x13 ),	/* 19 */
/* 280 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 282 */	NdrFcLong( 0x15 ),	/* 21 */
/* 286 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 288 */	NdrFcLong( 0x16 ),	/* 22 */
/* 292 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 294 */	NdrFcLong( 0x17 ),	/* 23 */
/* 298 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 300 */	NdrFcLong( 0xe ),	/* 14 */
/* 304 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (1018) */
/* 306 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 310 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1028) */
/* 312 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 316 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1032) */
/* 318 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 322 */	NdrFcShort( 0x288 ),	/* Offset= 648 (970) */
/* 324 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 328 */	NdrFcShort( 0x286 ),	/* Offset= 646 (974) */
/* 330 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 334 */	NdrFcShort( 0x284 ),	/* Offset= 644 (978) */
/* 336 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 340 */	NdrFcShort( 0x27a ),	/* Offset= 634 (974) */
/* 342 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 346 */	NdrFcShort( 0x274 ),	/* Offset= 628 (974) */
/* 348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* Offset= 0 (352) */
/* 354 */	NdrFcLong( 0x1 ),	/* 1 */
/* 358 */	NdrFcShort( 0x0 ),	/* Offset= 0 (358) */
/* 360 */	NdrFcShort( 0xffff ),	/* Offset= -1 (359) */
/* 362 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 366 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 368 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 382 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 384 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 386 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 388 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 398 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 400 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 402 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 404 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 406 */	NdrFcShort( 0x2 ),	/* Offset= 2 (408) */
/* 408 */	
			0x12, 0x0,	/* FC_UP */
/* 410 */	NdrFcShort( 0x216 ),	/* Offset= 534 (944) */
/* 412 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 414 */	NdrFcShort( 0x18 ),	/* 24 */
/* 416 */	NdrFcShort( 0xa ),	/* 10 */
/* 418 */	NdrFcLong( 0x8 ),	/* 8 */
/* 422 */	NdrFcShort( 0x5a ),	/* Offset= 90 (512) */
/* 424 */	NdrFcLong( 0xd ),	/* 13 */
/* 428 */	NdrFcShort( 0x7e ),	/* Offset= 126 (554) */
/* 430 */	NdrFcLong( 0x9 ),	/* 9 */
/* 434 */	NdrFcShort( 0x9e ),	/* Offset= 158 (592) */
/* 436 */	NdrFcLong( 0xc ),	/* 12 */
/* 440 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (640) */
/* 442 */	NdrFcLong( 0x24 ),	/* 36 */
/* 446 */	NdrFcShort( 0x124 ),	/* Offset= 292 (738) */
/* 448 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 452 */	NdrFcShort( 0x140 ),	/* Offset= 320 (772) */
/* 454 */	NdrFcLong( 0x10 ),	/* 16 */
/* 458 */	NdrFcShort( 0x15a ),	/* Offset= 346 (804) */
/* 460 */	NdrFcLong( 0x2 ),	/* 2 */
/* 464 */	NdrFcShort( 0x174 ),	/* Offset= 372 (836) */
/* 466 */	NdrFcLong( 0x3 ),	/* 3 */
/* 470 */	NdrFcShort( 0x18e ),	/* Offset= 398 (868) */
/* 472 */	NdrFcLong( 0x14 ),	/* 20 */
/* 476 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (900) */
/* 478 */	NdrFcShort( 0xffff ),	/* Offset= -1 (477) */
/* 480 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 482 */	NdrFcShort( 0x4 ),	/* 4 */
/* 484 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 490 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 492 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 494 */	NdrFcShort( 0x4 ),	/* 4 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	0x12, 0x0,	/* FC_UP */
/* 506 */	NdrFcShort( 0xfe18 ),	/* Offset= -488 (18) */
/* 508 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 510 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 512 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 516 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 518 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 520 */	NdrFcShort( 0x4 ),	/* 4 */
/* 522 */	NdrFcShort( 0x4 ),	/* 4 */
/* 524 */	0x11, 0x0,	/* FC_RP */
/* 526 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (480) */
/* 528 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 530 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 532 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 542 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 546 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 548 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 550 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (368) */
/* 552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 554 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x6 ),	/* Offset= 6 (566) */
/* 562 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 564 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 566 */	
			0x11, 0x0,	/* FC_RP */
/* 568 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (532) */
/* 570 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 580 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 584 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 586 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 588 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (386) */
/* 590 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 592 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x6 ),	/* Offset= 6 (604) */
/* 600 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 602 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 604 */	
			0x11, 0x0,	/* FC_RP */
/* 606 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (570) */
/* 608 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 610 */	NdrFcShort( 0x4 ),	/* 4 */
/* 612 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 618 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 620 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 622 */	NdrFcShort( 0x4 ),	/* 4 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	0x12, 0x0,	/* FC_UP */
/* 634 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1036) */
/* 636 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 638 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 640 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x6 ),	/* Offset= 6 (652) */
/* 648 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 650 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 652 */	
			0x11, 0x0,	/* FC_RP */
/* 654 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (608) */
/* 656 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 658 */	NdrFcLong( 0x2f ),	/* 47 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 668 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 670 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 672 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 674 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 676 */	NdrFcShort( 0x1 ),	/* 1 */
/* 678 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 680 */	NdrFcShort( 0x4 ),	/* 4 */
/* 682 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 684 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 686 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x10 ),	/* 16 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0xa ),	/* Offset= 10 (702) */
/* 694 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (656) */
/* 700 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 702 */	
			0x12, 0x0,	/* FC_UP */
/* 704 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (674) */
/* 706 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x4 ),	/* 4 */
/* 710 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 716 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 718 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 720 */	NdrFcShort( 0x4 ),	/* 4 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	0x12, 0x0,	/* FC_UP */
/* 732 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (686) */
/* 734 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 736 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 738 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x6 ),	/* Offset= 6 (750) */
/* 746 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 748 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 750 */	
			0x11, 0x0,	/* FC_RP */
/* 752 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (706) */
/* 754 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 760 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x10 ),	/* 16 */
/* 764 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 766 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 768 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (754) */
			0x5b,		/* FC_END */
/* 772 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 774 */	NdrFcShort( 0x18 ),	/* 24 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0xa ),	/* Offset= 10 (788) */
/* 780 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 782 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 784 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (760) */
/* 786 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 788 */	
			0x11, 0x0,	/* FC_RP */
/* 790 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (532) */
/* 792 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 796 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 802 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 804 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 808 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 810 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 812 */	NdrFcShort( 0x4 ),	/* 4 */
/* 814 */	NdrFcShort( 0x4 ),	/* 4 */
/* 816 */	0x12, 0x0,	/* FC_UP */
/* 818 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (792) */
/* 820 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 822 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 824 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 826 */	NdrFcShort( 0x2 ),	/* 2 */
/* 828 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 834 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 836 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 840 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 842 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 844 */	NdrFcShort( 0x4 ),	/* 4 */
/* 846 */	NdrFcShort( 0x4 ),	/* 4 */
/* 848 */	0x12, 0x0,	/* FC_UP */
/* 850 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (824) */
/* 852 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 854 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 856 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 860 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 866 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 868 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 874 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 878 */	NdrFcShort( 0x4 ),	/* 4 */
/* 880 */	0x12, 0x0,	/* FC_UP */
/* 882 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (856) */
/* 884 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 886 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 888 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 892 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 898 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 900 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 904 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 906 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 908 */	NdrFcShort( 0x4 ),	/* 4 */
/* 910 */	NdrFcShort( 0x4 ),	/* 4 */
/* 912 */	0x12, 0x0,	/* FC_UP */
/* 914 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (888) */
/* 916 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 918 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 920 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 924 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 926 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 928 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 932 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 934 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 936 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 938 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 940 */	NdrFcShort( 0xffec ),	/* Offset= -20 (920) */
/* 942 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 944 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 946 */	NdrFcShort( 0x28 ),	/* 40 */
/* 948 */	NdrFcShort( 0xffec ),	/* Offset= -20 (928) */
/* 950 */	NdrFcShort( 0x0 ),	/* Offset= 0 (950) */
/* 952 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 954 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 956 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 958 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (412) */
/* 960 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 962 */	
			0x12, 0x0,	/* FC_UP */
/* 964 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (686) */
/* 966 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 968 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 970 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 972 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 974 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 976 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 978 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 980 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 982 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 984 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 988 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 990 */	
			0x12, 0x0,	/* FC_UP */
/* 992 */	NdrFcShort( 0xfd8a ),	/* Offset= -630 (362) */
/* 994 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 996 */	NdrFcShort( 0xfc1e ),	/* Offset= -994 (2) */
/* 998 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1000 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (368) */
/* 1002 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1004 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (386) */
/* 1006 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1008 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (404) */
/* 1010 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1012 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1014) */
/* 1014 */	
			0x12, 0x0,	/* FC_UP */
/* 1016 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1036) */
/* 1018 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1020 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1022 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1024 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1026 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1028 */	
			0x12, 0x0,	/* FC_UP */
/* 1030 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1018) */
/* 1032 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1034 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1036 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1038 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1042) */
/* 1044 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1046 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1048 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1050 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1052 */	NdrFcShort( 0xfc24 ),	/* Offset= -988 (64) */
/* 1054 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1056 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1060 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0xfc14 ),	/* Offset= -1004 (60) */
/* 1066 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1068 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1074) */
/* 1070 */	
			0x13, 0x0,	/* FC_OP */
/* 1072 */	NdrFcShort( 0xfbe2 ),	/* Offset= -1054 (18) */
/* 1074 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1070) */
/* 1084 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1086 */	NdrFcLong( 0x590d9830 ),	/* 1494063152 */
/* 1090 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1092 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1094 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1096 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1098 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1100 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1102 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1104 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1106 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1110) */
/* 1110 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1112 */	NdrFcLong( 0x590d9848 ),	/* 1494063176 */
/* 1116 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1118 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1120 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1122 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1124 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1126 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1128 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1132) */
/* 1132 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1134 */	NdrFcLong( 0x590d9840 ),	/* 1494063168 */
/* 1138 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1140 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1142 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1144 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1146 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1148 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1150 */	
			0x11, 0x0,	/* FC_RP */
/* 1152 */	NdrFcShort( 0xfe78 ),	/* Offset= -392 (760) */
/* 1154 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1156 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1158) */
/* 1158 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1160 */	NdrFcLong( 0x590d9850 ),	/* 1494063184 */
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
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1178 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1180) */
/* 1180 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1182 */	NdrFcLong( 0x590d984a ),	/* 1494063178 */
/* 1186 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1188 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1190 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1192 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1194 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1196 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1198 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1200 */	NdrFcShort( 0xfcc0 ),	/* Offset= -832 (368) */
/* 1202 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1204 */	NdrFcLong( 0xc1918686 ),	/* -1047427450 */
/* 1208 */	NdrFcShort( 0xdbe4 ),	/* -9244 */
/* 1210 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1212 */	0xa5,		/* 165 */
			0x16,		/* 22 */
/* 1214 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1216 */	0x0,		/* 0 */
			0xb5,		/* 181 */
/* 1218 */	0x95,		/* 149 */
			0xdb,		/* 219 */
/* 1220 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1222 */	NdrFcLong( 0xc1918688 ),	/* -1047427448 */
/* 1226 */	NdrFcShort( 0xdbe4 ),	/* -9244 */
/* 1228 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1230 */	0xa5,		/* 165 */
			0x16,		/* 22 */
/* 1232 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1234 */	0x0,		/* 0 */
			0xb5,		/* 181 */
/* 1236 */	0x95,		/* 149 */
			0xdb,		/* 219 */
/* 1238 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1240 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1242 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1244 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1250) */
/* 1246 */	
			0x13, 0x0,	/* FC_OP */
/* 1248 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (1036) */
/* 1250 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1254 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1246) */
/* 1260 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1262 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (1202) */
/* 1264 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1266 */	NdrFcLong( 0x590d9846 ),	/* 1494063174 */
/* 1270 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1272 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1274 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1276 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1278 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1280 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1282 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1284 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1286) */
/* 1286 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1288 */	NdrFcLong( 0x590d9842 ),	/* 1494063170 */
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
			0x11, 0x0,	/* FC_RP */
/* 1306 */	NdrFcShort( 0x24 ),	/* Offset= 36 (1342) */
/* 1308 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1316 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1318 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1322 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1324 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1326 */	NdrFcShort( 0xfef2 ),	/* Offset= -270 (1056) */
/* 1328 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1330 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1332 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1334 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1336 */	NdrFcShort( 0xc ),	/* 12 */
/* 1338 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1340 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1342 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1344 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1356) */
/* 1350 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1352 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1354 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1356 */	
			0x12, 0x0,	/* FC_UP */
/* 1358 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1308) */
/* 1360 */	
			0x12, 0x0,	/* FC_UP */
/* 1362 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1330) */
/* 1364 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1366 */	NdrFcLong( 0x590d9832 ),	/* 1494063154 */
/* 1370 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1372 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1374 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1376 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1378 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1380 */	0x6a,		/* 106 */
			0x8a,		/* 138 */
/* 1382 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1384 */	NdrFcLong( 0x590d9854 ),	/* 1494063188 */
/* 1388 */	NdrFcShort( 0xa417 ),	/* -23529 */
/* 1390 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1392 */	0x9b,		/* 155 */
			0xf0,		/* 240 */
/* 1394 */	0x0,		/* 0 */
			0x80,		/* 128 */
/* 1396 */	0xc7,		/* 199 */
			0xa5,		/* 165 */
/* 1398 */	0x6a,		/* 106 */
			0x8a,		/* 138 */

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



/* Standard interface: __MIDL_itf_vwobject_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IObjectProperty, ver. 0.0,
   GUID={0x590D9840,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */


/* Object interface: IWorld, ver. 0.0,
   GUID={0x590D9854,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IWorld_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    48,
    78,
    132,
    186,
    216,
    252,
    288,
    336,
    384,
    420,
    456,
    486,
    522,
    570,
    600,
    636,
    672,
    708,
    744,
    780,
    822,
    858,
    912,
    966,
    1020,
    1068,
    1122,
    1176,
    1230,
    1272,
    1320,
    1356,
    1392,
    1434,
    1476,
    1518,
    1560,
    1596,
    1638,
    1686,
    1740,
    1794,
    1854,
    1908,
    1962,
    2016,
    2070,
    2106,
    2148,
    2190,
    2226,
    2274,
    2316,
    2364,
    2400,
    2442,
    2484,
    2526,
    2562,
    2598,
    2634,
    2670,
    2706,
    2736,
    2772,
    2826,
    2862,
    2898,
    2934,
    2970,
    3006,
    3042,
    3078,
    3114,
    3150,
    3186,
    3222,
    3258,
    3294,
    3330,
    3372,
    3414,
    3450,
    3486,
    3528,
    3564,
    3618,
    3672,
    3708,
    3744,
    3780,
    3822,
    3864,
    3900,
    3936,
    3972,
    4008,
    4044,
    4080,
    4116,
    4152,
    4188,
    4224,
    4260,
    4296,
    4332,
    4368,
    4398,
    4434,
    4470,
    4512,
    4554,
    4596,
    4626,
    4656,
    4692,
    4728,
    4776,
    4830,
    4908,
    4992,
    5046,
    5124,
    5214,
    5262,
    5316,
    5370,
    5418,
    5460,
    5508,
    5544,
    5592,
    5634,
    5676,
    5724,
    5790,
    5850,
    5910,
    5982,
    6066,
    6150,
    6204,
    6258,
    6312,
    6360,
    6408,
    6444,
    6480,
    6516,
    6564,
    6606,
    6654,
    6696,
    6750,
    6792,
    6840,
    6888,
    6936,
    6978,
    7038,
    7092,
    7140,
    7176,
    7212,
    7260,
    7302,
    7350,
    7392,
    7434,
    7476,
    7518,
    7554,
    7596,
    7632,
    7668,
    7704,
    7740,
    7782,
    7818,
    7854,
    7890,
    7926
    };

static const MIDL_STUBLESS_PROXY_INFO IWorld_ProxyInfo =
    {
    &Object_StubDesc,
    vwobject__MIDL_ProcFormatString.Format,
    &IWorld_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWorld_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwobject__MIDL_ProcFormatString.Format,
    &IWorld_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(211) _IWorldProxyVtbl = 
{
    &IWorld_ProxyInfo,
    &IID_IWorld,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IObjectProperty::Terminate */ ,
    0 /* IObjectProperty::get_RefCount */ ,
    0 /* IObjectProperty::get_CLSID */ ,
    0 /* IObjectProperty::get_IID */ ,
    0 /* IObjectProperty::get_World */ ,
    0 /* IObjectProperty::put_World */ ,
    0 /* IObjectProperty::get_Parent */ ,
    0 /* IObjectProperty::put_Parent */ ,
    0 /* IObjectProperty::get_PropertyName */ ,
    0 /* IObjectProperty::put_PropertyName */ ,
    0 /* IObjectProperty::get_Type */ ,
    0 /* IObjectProperty::put_Type */ ,
    0 /* IObjectProperty::get_Security */ ,
    0 /* IObjectProperty::put_Security */ ,
    0 /* IObjectProperty::IsOfType */ ,
    0 /* IObjectProperty::ToAscii */ ,
    0 /* IObjectProperty::Dump */ ,
    0 /* IObjectProperty::Clone */ ,
    0 /* IObjectProperty::Marshall */ ,
    0 /* IObjectProperty::UnMarshall */ ,
    0 /* IObjectProperty::MarshallToScript */ ,
    (void *) (INT_PTR) -1 /* IWorld::Connect */ ,
    (void *) (INT_PTR) -1 /* IWorld::Disconnect */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateAvatar */ ,
    (void *) (INT_PTR) -1 /* IWorld::ConnectInt */ ,
    (void *) (INT_PTR) -1 /* IWorld::DisconnectInt */ ,
    (void *) (INT_PTR) -1 /* IWorld::DisconnectAvatar */ ,
    (void *) (INT_PTR) -1 /* IWorld::DisconnectClient */ ,
    (void *) (INT_PTR) -1 /* IWorld::Reconnect */ ,
    (void *) (INT_PTR) -1 /* IWorld::ReconnectExt */ ,
    (void *) (INT_PTR) -1 /* IWorld::ActivateRoom */ ,
    (void *) (INT_PTR) -1 /* IWorld::DeactivateRoom */ ,
    (void *) (INT_PTR) -1 /* IWorld::Synchronize */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Database */ ,
    (void *) (INT_PTR) -1 /* IWorld::OpenDatabase */ ,
    (void *) (INT_PTR) -1 /* IWorld::SaveDatabase */ ,
    (void *) (INT_PTR) -1 /* IWorld::SaveDatabaseAs */ ,
    (void *) (INT_PTR) -1 /* IWorld::SaveToScript */ ,
    (void *) (INT_PTR) -1 /* IWorld::ProcessLogRecord */ ,
    (void *) (INT_PTR) -1 /* IWorld::EnableLogging */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_IsLoggingEnabled */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateObjectInt */ ,
    (void *) (INT_PTR) -1 /* IWorld::DeleteObjectInt */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateInstance */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateInstanceExt */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateInstanceInt */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateExemplar */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateExemplarEx */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateExemplarExt */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateExemplarInt */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateRootExemplar */ ,
    (void *) (INT_PTR) -1 /* IWorld::CloneInstance */ ,
    (void *) (INT_PTR) -1 /* IWorld::DestroyObject */ ,
    (void *) (INT_PTR) -1 /* IWorld::DestroyObjectByID */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_ObjectByName */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_ObjectByID */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Exemplar */ ,
    (void *) (INT_PTR) -1 /* IWorld::IsValidExemplar */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Exemplars */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateObjectProperty */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateObjectPropertyExt */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateMethodByDispID */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateMethod */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateInlineMethod */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateCOMModule */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateScriptModule */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateCOMModuleEx */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateScriptModuleEx */ ,
    (void *) (INT_PTR) -1 /* IWorld::RemoveModule */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Module */ ,
    (void *) (INT_PTR) -1 /* IWorld::IsValidModule */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Modules */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateTool */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateToolFromInterface */ ,
    (void *) (INT_PTR) -1 /* IWorld::CreateToolExt */ ,
    (void *) (INT_PTR) -1 /* IWorld::RemoveTool */ ,
    (void *) (INT_PTR) -1 /* IWorld::IsValidTool */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Tool */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_ToolExt */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Tools */ ,
    (void *) (INT_PTR) -1 /* IWorld::InitializeTools */ ,
    (void *) (INT_PTR) -1 /* IWorld::InitializeConnection */ ,
    (void *) (INT_PTR) -1 /* IWorld::DisconnectConnection */ ,
    (void *) (INT_PTR) -1 /* IWorld::OnOpenWorld */ ,
    (void *) (INT_PTR) -1 /* IWorld::OnCreateWorld */ ,
    (void *) (INT_PTR) -1 /* IWorld::ProcessMessage */ ,
    (void *) (INT_PTR) -1 /* IWorld::ProcessMessageExt */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Connection */ ,
    (void *) (INT_PTR) -1 /* IWorld::put_Connection */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_ShouldExecute */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_ShouldExecuteSync */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_ShouldRemote */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_ShouldRemoteSync */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_ShouldNotify */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_LocalMode */ ,
    (void *) (INT_PTR) -1 /* IWorld::put_LocalMode */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_FreezeEvents */ ,
    (void *) (INT_PTR) -1 /* IWorld::put_FreezeEvents */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_EnableSecurity */ ,
    (void *) (INT_PTR) -1 /* IWorld::EnableTrace */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_IsTraceEnabled */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_TraceLevel */ ,
    (void *) (INT_PTR) -1 /* IWorld::put_TraceLevel */ ,
    (void *) (INT_PTR) -1 /* IWorld::RemoveTraceLevel */ ,
    (void *) (INT_PTR) -1 /* IWorld::Trace */ ,
    (void *) (INT_PTR) -1 /* IWorld::Report */ ,
    (void *) (INT_PTR) -1 /* IWorld::Print */ ,
    (void *) (INT_PTR) -1 /* IWorld::Format */ ,
    (void *) (INT_PTR) -1 /* IWorld::FormatSentences */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_IsConnected */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_ServerSide */ ,
    (void *) (INT_PTR) -1 /* IWorld::put_ServerSide */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Avatar */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_AvatarByGUID */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Global */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Owner */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_User */ ,
    (void *) (INT_PTR) -1 /* IWorld::put_User */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_This */ ,
    (void *) (INT_PTR) -1 /* IWorld::put_This */ ,
    (void *) (INT_PTR) -1 /* IWorld::get_Caller */ ,
    IWorld_put_Caller_Proxy ,
    IWorld_get_Super_Proxy ,
    IWorld_put_Super_Proxy ,
    IWorld_get_SecurityContext_Proxy ,
    IWorld_put_SecurityContext_Proxy ,
    IWorld_get_IsInPropChange_Proxy ,
    IWorld_put_IsInPropChange_Proxy ,
    IWorld_AbortEvent_Proxy ,
    IWorld_get_IsEventAborted_Proxy ,
    IWorld_put_IsEventAborted_Proxy ,
    IWorld_IsExemplar_Proxy ,
    IWorld_IsAvatar_Proxy ,
    IWorld_IsRoom_Proxy ,
    IWorld_LockWorld_Proxy ,
    IWorld_UnlockWorld_Proxy ,
    IWorld_NotifyUserConnect_Proxy ,
    IWorld_NotifyUserDisconnect_Proxy ,
    IWorld_FireUIEvent_Proxy ,
    IWorld_ShowHTML_Proxy ,
    IWorld_ShowHTMLEx_Proxy ,
    IWorld_ShowHTMLExt_Proxy ,
    IWorld_ShowURL_Proxy ,
    IWorld_ShowURLEx_Proxy ,
    IWorld_ShowURLExt_Proxy ,
    IWorld_NotifyInvokeMethod_Proxy ,
    IWorld_NotifyPropertyChanged_Proxy ,
    IWorld_NotifyMethodChanged_Proxy ,
    IWorld_NotifyModuleChanged_Proxy ,
    IWorld_SendContainer_Proxy ,
    IWorld_SendContents_Proxy ,
    IWorld_SendWorld_Proxy ,
    IWorld_SendExemplar_Proxy ,
    IWorld_SendThingByID_Proxy ,
    IWorld_SendThing_Proxy ,
    IWorld_SendModule_Proxy ,
    IWorld_SendWorldCommand_Proxy ,
    IWorld_SendThingCommand_Proxy ,
    IWorld_SendObjectPropertyCommand_Proxy ,
    IWorld_SendWorldCommandExt_Proxy ,
    IWorld_SendThingCommandExt_Proxy ,
    IWorld_SendObjectPropertyCommandExt_Proxy ,
    IWorld_SendModuleCommand_Proxy ,
    IWorld_SendMethodCommand_Proxy ,
    IWorld_LogThingCommand_Proxy ,
    IWorld_LogWorldCommand_Proxy ,
    IWorld_WriteCommandHeader_Proxy ,
    IWorld_WriteCommandCallstack_Proxy ,
    IWorld_RegisterInterest_Proxy ,
    IWorld_UnregisterInterest_Proxy ,
    IWorld_MarshallThing_Proxy ,
    IWorld_UnMarshallThing_Proxy ,
    IWorld_MarshallProperty_Proxy ,
    IWorld_UnMarshallProperty_Proxy ,
    IWorld_MarshallObjectProperty_Proxy ,
    IWorld_UnMarshallObjectProperty_Proxy ,
    IWorld_MarshallModule_Proxy ,
    IWorld_UnMarshallModule_Proxy ,
    IWorld_MarshallDISPPARAMS_Proxy ,
    IWorld_UnMarshallDISPPARAMS_Proxy ,
    IWorld_MarshallPropertyToScript_Proxy ,
    IWorld_CheckPolicy_Proxy ,
    IWorld_CheckPolicyExt_Proxy ,
    IWorld_ValidateProperty_Proxy ,
    IWorld_ValidateDISPPARAMS_Proxy ,
    IWorld_ValidateObjectSafety_Proxy ,
    IWorld_ValidatePropertyName_Proxy ,
    IWorld_ValidateMethodName_Proxy ,
    IWorld_ValidateInstanceName_Proxy ,
    IWorld_ValidateExemplarType_Proxy ,
    IWorld_ValidateWorldName_Proxy ,
    IWorld_ValidateAvatarName_Proxy ,
    IWorld_ValidatePropertyNameExt_Proxy ,
    IWorld_ValidateMethodNameExt_Proxy ,
    IWorld_ValidateInstanceNameExt_Proxy ,
    IWorld_ValidateExemplarTypeExt_Proxy ,
    IWorld_ValidateWorldNameExt_Proxy ,
    IWorld_ValidateAvatarNameExt_Proxy ,
    IWorld_CloneProperty_Proxy ,
    IWorld_DumpProperty_Proxy ,
    IWorld_get_Version_Proxy ,
    IWorld_GetStatus_Proxy ,
    IWorld_AddCLSIDToTable_Proxy ,
    IWorld_UpdateGlobalPaths_Proxy
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWorld_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
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
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
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

CInterfaceStubVtbl _IWorldStubVtbl =
{
    &IID_IWorld,
    &IWorld_ServerInfo,
    211,
    &IWorld_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IVWObjectSite, ver. 0.0,
   GUID={0x590D9856,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IVWObjectSite_FormatStringOffsetTable[] =
    {
    7956,
    7992,
    8028,
    8076,
    8124,
    8172,
    8226,
    8280,
    8328,
    8364
    };

static const MIDL_STUBLESS_PROXY_INFO IVWObjectSite_ProxyInfo =
    {
    &Object_StubDesc,
    vwobject__MIDL_ProcFormatString.Format,
    &IVWObjectSite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVWObjectSite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwobject__MIDL_ProcFormatString.Format,
    &IVWObjectSite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IVWObjectSiteProxyVtbl = 
{
    &IVWObjectSite_ProxyInfo,
    &IID_IVWObjectSite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnUserConnect */ ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnUserDisconnect */ ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnUserReconnect */ ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnUIEvent */ ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnInvokeMethod */ ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnPropertyChanged */ ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnMethodChanged */ ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnModuleChanged */ ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnTrace */ ,
    (void *) (INT_PTR) -1 /* IVWObjectSite::OnReport */
};

const CInterfaceStubVtbl _IVWObjectSiteStubVtbl =
{
    &IID_IVWObjectSite,
    &IVWObjectSite_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVWDispatch, ver. 0.0,
   GUID={0x590D9858,0xA417,0x11CF,{0x9B,0xF0,0x00,0x80,0xC7,0xA5,0x6A,0x8A}} */

#pragma code_seg(".orpc")
static const unsigned short IVWDispatch_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8406,
    8442,
    8472,
    8508,
    8538
    };

static const MIDL_STUBLESS_PROXY_INFO IVWDispatch_ProxyInfo =
    {
    &Object_StubDesc,
    vwobject__MIDL_ProcFormatString.Format,
    &IVWDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVWDispatch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vwobject__MIDL_ProcFormatString.Format,
    &IVWDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IVWDispatchProxyVtbl = 
{
    &IVWDispatch_ProxyInfo,
    &IID_IVWDispatch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IVWDispatch::Initialize */ ,
    (void *) (INT_PTR) -1 /* IVWDispatch::Terminate */ ,
    (void *) (INT_PTR) -1 /* IVWDispatch::Install */ ,
    (void *) (INT_PTR) -1 /* IVWDispatch::OnLoad */ ,
    (void *) (INT_PTR) -1 /* IVWDispatch::OnUnload */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IVWDispatch_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVWDispatchStubVtbl =
{
    &IID_IVWDispatch,
    &IVWDispatch_ServerInfo,
    12,
    &IVWDispatch_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_vwobject_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

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
    vwobject__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _vwobject_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IWorldProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVWObjectSiteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVWDispatchProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _vwobject_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IWorldStubVtbl,
    ( CInterfaceStubVtbl *) &_IVWObjectSiteStubVtbl,
    ( CInterfaceStubVtbl *) &_IVWDispatchStubVtbl,
    0
};

PCInterfaceName const _vwobject_InterfaceNamesList[] = 
{
    "IWorld",
    "IVWObjectSite",
    "IVWDispatch",
    0
};

const IID *  const _vwobject_BaseIIDList[] = 
{
    &IID_IObjectProperty,
    0,
    &IID_IDispatch,
    0
};


#define _vwobject_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _vwobject, pIID, n)

int __stdcall _vwobject_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _vwobject, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _vwobject, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _vwobject, 3, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo vwobject_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _vwobject_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _vwobject_StubVtblList,
    (const PCInterfaceName * ) & _vwobject_InterfaceNamesList,
    (const IID ** ) & _vwobject_BaseIIDList,
    & _vwobject_IID_Lookup, 
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

