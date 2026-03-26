

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwcommon/menuitem.idl:
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

#ifndef __menuitem_h__
#define __menuitem_h__

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

#ifndef __IMenuItem_FWD_DEFINED__
#define __IMenuItem_FWD_DEFINED__
typedef interface IMenuItem IMenuItem;

#endif 	/* __IMenuItem_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "vwprop.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMenuItem_INTERFACE_DEFINED__
#define __IMenuItem_INTERFACE_DEFINED__

/* interface IMenuItem */
/* [unique][helpstring][local][dual][uuid][object] */ 

#define	DISPID_MENUITEM_MENUTEXT	( 101 )

#define	DISPID_MENUITEM_FLAGS	( 102 )

#define	DISPID_MENUITEM_USERDATA	( 103 )

#define	DISPID_MENUITEM_STATUSTEXT	( 104 )

#define	DISPID_MENUITEM_METHOD	( 105 )

#define	DISPID_MENUITEM_ONUPDATEMETHOD	( 106 )

#define	DISPID_MENUITEM_ARGUMENTSINT	( 107 )

#define	DISPID_MENUITEM_OWNER	( 108 )

#define	DISPID_MENUITEM_SUBMENU	( 109 )

#define	DISPID_MENUITEM_TARGET	( 110 )

#define	DISPID_MENUITEM_ADDTARGETPARAMETER	( 111 )

#define	DISPID_MENUITEM_ISOVERLAYITEM	( 112 )

#define	DISPID_MENUITEM_ISPROXIMITYSENSITIVE	( 113 )

#define	MI_DEFAULT	( 0 )

#define	MI_GRAYED	( 0x1 )

#define	MI_DISABLED	( 0x2 )

#define	MI_INVISIBLE	( 0x4 )

#define	MI_CHECKED	( 0x8 )

#define	MI_POPUP	( 0x10 )

#define	MI_SEPARATOR	( 0x800 )

#define	MI_USEVERBARGS	( 0x80000000 )


EXTERN_C const IID IID_IMenuItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4916C22-00C2-11D0-8A96-00A0C9082583")
    IMenuItem : public IObjectProperty
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MenuText( 
            /* [retval][out] */ BSTR *pbstrMenuText) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MenuText( 
            /* [in] */ BSTR bstrMenuText) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ long *nFlags) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Flags( 
            /* [in] */ long nFlags) = 0;
        
        virtual /* [id][helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_UserData( 
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_UserData( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SubMenu( 
            /* [retval][out] */ IPropertyList **pvar) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SubMenu( 
            /* [in] */ IPropertyList *var) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StatusText( 
            /* [retval][out] */ BSTR *pbstrStatusText) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_StatusText( 
            /* [in] */ BSTR bstrStatusText) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Method( 
            /* [retval][out] */ BSTR *pbstrMethod) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Method( 
            /* [in] */ BSTR bstrMethod) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OnUpdateMethod( 
            /* [retval][out] */ BSTR *pbstrOnUpdateMethod) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OnUpdateMethod( 
            /* [in] */ BSTR bstrOnUpdateMethod) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_ArgumentsInt( 
            /* [in] */ IPropertyList *pproplist) = 0;
        
        virtual /* [helpstring][propget][restricted] */ HRESULT STDMETHODCALLTYPE get_ArgumentsExt( 
            /* [retval][out] */ DISPPARAMS **ppdispparams) = 0;
        
        virtual /* [helpstring][propput][restricted] */ HRESULT STDMETHODCALLTYPE put_ArgumentsExt( 
            /* [in] */ DISPPARAMS *pdispparams) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Arguments( 
            /* [retval][out] */ VARIANT *pvar) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Arguments( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Owner( 
            /* [retval][out] */ IThing **ppIThing) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Owner( 
            /* [in] */ IThing *pIThing) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ IThing **ppIThing) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Target( 
            /* [in] */ IThing *pIThing) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AddTargetParameter( 
            /* [retval][out] */ VARIANT_BOOL *pboolAddTargetParameter) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AddTargetParameter( 
            /* [in] */ VARIANT_BOOL boolAddTargetParameter) = 0;
        
        virtual /* [id][helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_IsOverlayItem( 
            /* [retval][out] */ VARIANT_BOOL *pboolIsOverlayItem) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_IsOverlayItem( 
            /* [in] */ VARIANT_BOOL boolIsOverlayItem) = 0;
        
        virtual /* [id][helpstring][propget][hidden] */ HRESULT STDMETHODCALLTYPE get_IsProximitySensitive( 
            /* [retval][out] */ VARIANT_BOOL *pboolIsProximitySensitive) = 0;
        
        virtual /* [id][helpstring][propput][hidden] */ HRESULT STDMETHODCALLTYPE put_IsProximitySensitive( 
            /* [in] */ VARIANT_BOOL boolIsProximitySensitive) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Execute( void) = 0;
        
        virtual /* [helpstring][restricted] */ HRESULT STDMETHODCALLTYPE OnUpdate( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Duplicate( 
            /* [retval][out] */ IMenuItem **ppIMenuItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMenuItemVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMenuItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMenuItem * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMenuItem * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMenuItem * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMenuItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMenuItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMenuItem * This,
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
            IMenuItem * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_RefCount)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_RefCount )( 
            IMenuItem * This,
            /* [retval][out] */ DWORD *pdwRef);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_CLSID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_CLSID )( 
            IMenuItem * This,
            /* [retval][out] */ CLSID *pclsid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_IID)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_IID )( 
            IMenuItem * This,
            /* [retval][out] */ IID *piid);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_World)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_World )( 
            IMenuItem * This,
            /* [retval][out] */ IWorld **ppworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_World)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_World )( 
            IMenuItem * This,
            /* [in] */ IWorld *pworld);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Parent)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IMenuItem * This,
            /* [retval][out] */ IThing **ppthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Parent)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Parent )( 
            IMenuItem * This,
            /* [in] */ IThing *pthing);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_PropertyName)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyName )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_PropertyName)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyName )( 
            IMenuItem * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Type)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Type)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IMenuItem * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, get_Security)
        /* [helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_Security )( 
            IMenuItem * This,
            /* [retval][out] */ IPropertySecurity **ppSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, put_Security)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_Security )( 
            IMenuItem * This,
            /* [in] */ IPropertySecurity *pSecurity);
        
        DECLSPEC_XFGVIRT(IObjectProperty, IsOfType)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsOfType )( 
            IMenuItem * This,
            /* [in] */ BSTR bstr,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IObjectProperty, ToAscii)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ToAscii )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Dump)
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *Dump )( 
            IMenuItem * This);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Clone)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IMenuItem * This,
            /* [in] */ IObjectProperty *pobjectproperty);
        
        DECLSPEC_XFGVIRT(IObjectProperty, Marshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *Marshall )( 
            IMenuItem * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ IMarshallBuffer *pmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, UnMarshall)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *UnMarshall )( 
            IMenuItem * This,
            /* [in] */ IUnMarshallBuffer *punmarshallbuffer);
        
        DECLSPEC_XFGVIRT(IObjectProperty, MarshallToScript)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *MarshallToScript )( 
            IMenuItem * This,
            /* [in] */ DWORD dwOptions,
            /* [in] */ BSTR bstrContext,
            /* [out] */ VARIANT_BOOL *pbAsVal,
            /* [out] */ BSTR *pbstrOut);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_MenuText)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MenuText )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pbstrMenuText);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_MenuText)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MenuText )( 
            IMenuItem * This,
            /* [in] */ BSTR bstrMenuText);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_Flags)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            IMenuItem * This,
            /* [retval][out] */ long *nFlags);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_Flags)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Flags )( 
            IMenuItem * This,
            /* [in] */ long nFlags);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_UserData)
        /* [id][helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_UserData )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_UserData)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_UserData )( 
            IMenuItem * This,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_SubMenu)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubMenu )( 
            IMenuItem * This,
            /* [retval][out] */ IPropertyList **pvar);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_SubMenu)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubMenu )( 
            IMenuItem * This,
            /* [in] */ IPropertyList *var);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_StatusText)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusText )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pbstrStatusText);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_StatusText)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusText )( 
            IMenuItem * This,
            /* [in] */ BSTR bstrStatusText);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_Method)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Method )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pbstrMethod);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_Method)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Method )( 
            IMenuItem * This,
            /* [in] */ BSTR bstrMethod);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_OnUpdateMethod)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OnUpdateMethod )( 
            IMenuItem * This,
            /* [retval][out] */ BSTR *pbstrOnUpdateMethod);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_OnUpdateMethod)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OnUpdateMethod )( 
            IMenuItem * This,
            /* [in] */ BSTR bstrOnUpdateMethod);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_ArgumentsInt)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_ArgumentsInt )( 
            IMenuItem * This,
            /* [in] */ IPropertyList *pproplist);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_ArgumentsExt)
        /* [helpstring][propget][restricted] */ HRESULT ( STDMETHODCALLTYPE *get_ArgumentsExt )( 
            IMenuItem * This,
            /* [retval][out] */ DISPPARAMS **ppdispparams);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_ArgumentsExt)
        /* [helpstring][propput][restricted] */ HRESULT ( STDMETHODCALLTYPE *put_ArgumentsExt )( 
            IMenuItem * This,
            /* [in] */ DISPPARAMS *pdispparams);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_Arguments)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Arguments )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT *pvar);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_Arguments)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Arguments )( 
            IMenuItem * This,
            /* [in] */ VARIANT var);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_Owner)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Owner )( 
            IMenuItem * This,
            /* [retval][out] */ IThing **ppIThing);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_Owner)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Owner )( 
            IMenuItem * This,
            /* [in] */ IThing *pIThing);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_Target)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            IMenuItem * This,
            /* [retval][out] */ IThing **ppIThing);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_Target)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Target )( 
            IMenuItem * This,
            /* [in] */ IThing *pIThing);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_AddTargetParameter)
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddTargetParameter )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pboolAddTargetParameter);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_AddTargetParameter)
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AddTargetParameter )( 
            IMenuItem * This,
            /* [in] */ VARIANT_BOOL boolAddTargetParameter);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_IsOverlayItem)
        /* [id][helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_IsOverlayItem )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pboolIsOverlayItem);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_IsOverlayItem)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_IsOverlayItem )( 
            IMenuItem * This,
            /* [in] */ VARIANT_BOOL boolIsOverlayItem);
        
        DECLSPEC_XFGVIRT(IMenuItem, get_IsProximitySensitive)
        /* [id][helpstring][propget][hidden] */ HRESULT ( STDMETHODCALLTYPE *get_IsProximitySensitive )( 
            IMenuItem * This,
            /* [retval][out] */ VARIANT_BOOL *pboolIsProximitySensitive);
        
        DECLSPEC_XFGVIRT(IMenuItem, put_IsProximitySensitive)
        /* [id][helpstring][propput][hidden] */ HRESULT ( STDMETHODCALLTYPE *put_IsProximitySensitive )( 
            IMenuItem * This,
            /* [in] */ VARIANT_BOOL boolIsProximitySensitive);
        
        DECLSPEC_XFGVIRT(IMenuItem, Execute)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IMenuItem * This);
        
        DECLSPEC_XFGVIRT(IMenuItem, OnUpdate)
        /* [helpstring][restricted] */ HRESULT ( STDMETHODCALLTYPE *OnUpdate )( 
            IMenuItem * This);
        
        DECLSPEC_XFGVIRT(IMenuItem, Duplicate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Duplicate )( 
            IMenuItem * This,
            /* [retval][out] */ IMenuItem **ppIMenuItem);
        
        END_INTERFACE
    } IMenuItemVtbl;

    interface IMenuItem
    {
        CONST_VTBL struct IMenuItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMenuItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMenuItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMenuItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMenuItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMenuItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMenuItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMenuItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMenuItem_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IMenuItem_get_RefCount(This,pdwRef)	\
    ( (This)->lpVtbl -> get_RefCount(This,pdwRef) ) 

#define IMenuItem_get_CLSID(This,pclsid)	\
    ( (This)->lpVtbl -> get_CLSID(This,pclsid) ) 

#define IMenuItem_get_IID(This,piid)	\
    ( (This)->lpVtbl -> get_IID(This,piid) ) 

#define IMenuItem_get_World(This,ppworld)	\
    ( (This)->lpVtbl -> get_World(This,ppworld) ) 

#define IMenuItem_put_World(This,pworld)	\
    ( (This)->lpVtbl -> put_World(This,pworld) ) 

#define IMenuItem_get_Parent(This,ppthing)	\
    ( (This)->lpVtbl -> get_Parent(This,ppthing) ) 

#define IMenuItem_put_Parent(This,pthing)	\
    ( (This)->lpVtbl -> put_Parent(This,pthing) ) 

#define IMenuItem_get_PropertyName(This,pbstr)	\
    ( (This)->lpVtbl -> get_PropertyName(This,pbstr) ) 

#define IMenuItem_put_PropertyName(This,bstr)	\
    ( (This)->lpVtbl -> put_PropertyName(This,bstr) ) 

#define IMenuItem_get_Type(This,pbstr)	\
    ( (This)->lpVtbl -> get_Type(This,pbstr) ) 

#define IMenuItem_put_Type(This,bstr)	\
    ( (This)->lpVtbl -> put_Type(This,bstr) ) 

#define IMenuItem_get_Security(This,ppSecurity)	\
    ( (This)->lpVtbl -> get_Security(This,ppSecurity) ) 

#define IMenuItem_put_Security(This,pSecurity)	\
    ( (This)->lpVtbl -> put_Security(This,pSecurity) ) 

#define IMenuItem_IsOfType(This,bstr,pbool)	\
    ( (This)->lpVtbl -> IsOfType(This,bstr,pbool) ) 

#define IMenuItem_ToAscii(This,pbstr)	\
    ( (This)->lpVtbl -> ToAscii(This,pbstr) ) 

#define IMenuItem_Dump(This)	\
    ( (This)->lpVtbl -> Dump(This) ) 

#define IMenuItem_Clone(This,pobjectproperty)	\
    ( (This)->lpVtbl -> Clone(This,pobjectproperty) ) 

#define IMenuItem_Marshall(This,dwOptions,pmarshallbuffer)	\
    ( (This)->lpVtbl -> Marshall(This,dwOptions,pmarshallbuffer) ) 

#define IMenuItem_UnMarshall(This,punmarshallbuffer)	\
    ( (This)->lpVtbl -> UnMarshall(This,punmarshallbuffer) ) 

#define IMenuItem_MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut)	\
    ( (This)->lpVtbl -> MarshallToScript(This,dwOptions,bstrContext,pbAsVal,pbstrOut) ) 


#define IMenuItem_get_MenuText(This,pbstrMenuText)	\
    ( (This)->lpVtbl -> get_MenuText(This,pbstrMenuText) ) 

#define IMenuItem_put_MenuText(This,bstrMenuText)	\
    ( (This)->lpVtbl -> put_MenuText(This,bstrMenuText) ) 

#define IMenuItem_get_Flags(This,nFlags)	\
    ( (This)->lpVtbl -> get_Flags(This,nFlags) ) 

#define IMenuItem_put_Flags(This,nFlags)	\
    ( (This)->lpVtbl -> put_Flags(This,nFlags) ) 

#define IMenuItem_get_UserData(This,pvar)	\
    ( (This)->lpVtbl -> get_UserData(This,pvar) ) 

#define IMenuItem_put_UserData(This,var)	\
    ( (This)->lpVtbl -> put_UserData(This,var) ) 

#define IMenuItem_get_SubMenu(This,pvar)	\
    ( (This)->lpVtbl -> get_SubMenu(This,pvar) ) 

#define IMenuItem_put_SubMenu(This,var)	\
    ( (This)->lpVtbl -> put_SubMenu(This,var) ) 

#define IMenuItem_get_StatusText(This,pbstrStatusText)	\
    ( (This)->lpVtbl -> get_StatusText(This,pbstrStatusText) ) 

#define IMenuItem_put_StatusText(This,bstrStatusText)	\
    ( (This)->lpVtbl -> put_StatusText(This,bstrStatusText) ) 

#define IMenuItem_get_Method(This,pbstrMethod)	\
    ( (This)->lpVtbl -> get_Method(This,pbstrMethod) ) 

#define IMenuItem_put_Method(This,bstrMethod)	\
    ( (This)->lpVtbl -> put_Method(This,bstrMethod) ) 

#define IMenuItem_get_OnUpdateMethod(This,pbstrOnUpdateMethod)	\
    ( (This)->lpVtbl -> get_OnUpdateMethod(This,pbstrOnUpdateMethod) ) 

#define IMenuItem_put_OnUpdateMethod(This,bstrOnUpdateMethod)	\
    ( (This)->lpVtbl -> put_OnUpdateMethod(This,bstrOnUpdateMethod) ) 

#define IMenuItem_put_ArgumentsInt(This,pproplist)	\
    ( (This)->lpVtbl -> put_ArgumentsInt(This,pproplist) ) 

#define IMenuItem_get_ArgumentsExt(This,ppdispparams)	\
    ( (This)->lpVtbl -> get_ArgumentsExt(This,ppdispparams) ) 

#define IMenuItem_put_ArgumentsExt(This,pdispparams)	\
    ( (This)->lpVtbl -> put_ArgumentsExt(This,pdispparams) ) 

#define IMenuItem_get_Arguments(This,pvar)	\
    ( (This)->lpVtbl -> get_Arguments(This,pvar) ) 

#define IMenuItem_put_Arguments(This,var)	\
    ( (This)->lpVtbl -> put_Arguments(This,var) ) 

#define IMenuItem_get_Owner(This,ppIThing)	\
    ( (This)->lpVtbl -> get_Owner(This,ppIThing) ) 

#define IMenuItem_put_Owner(This,pIThing)	\
    ( (This)->lpVtbl -> put_Owner(This,pIThing) ) 

#define IMenuItem_get_Target(This,ppIThing)	\
    ( (This)->lpVtbl -> get_Target(This,ppIThing) ) 

#define IMenuItem_put_Target(This,pIThing)	\
    ( (This)->lpVtbl -> put_Target(This,pIThing) ) 

#define IMenuItem_get_AddTargetParameter(This,pboolAddTargetParameter)	\
    ( (This)->lpVtbl -> get_AddTargetParameter(This,pboolAddTargetParameter) ) 

#define IMenuItem_put_AddTargetParameter(This,boolAddTargetParameter)	\
    ( (This)->lpVtbl -> put_AddTargetParameter(This,boolAddTargetParameter) ) 

#define IMenuItem_get_IsOverlayItem(This,pboolIsOverlayItem)	\
    ( (This)->lpVtbl -> get_IsOverlayItem(This,pboolIsOverlayItem) ) 

#define IMenuItem_put_IsOverlayItem(This,boolIsOverlayItem)	\
    ( (This)->lpVtbl -> put_IsOverlayItem(This,boolIsOverlayItem) ) 

#define IMenuItem_get_IsProximitySensitive(This,pboolIsProximitySensitive)	\
    ( (This)->lpVtbl -> get_IsProximitySensitive(This,pboolIsProximitySensitive) ) 

#define IMenuItem_put_IsProximitySensitive(This,boolIsProximitySensitive)	\
    ( (This)->lpVtbl -> put_IsProximitySensitive(This,boolIsProximitySensitive) ) 

#define IMenuItem_Execute(This)	\
    ( (This)->lpVtbl -> Execute(This) ) 

#define IMenuItem_OnUpdate(This)	\
    ( (This)->lpVtbl -> OnUpdate(This) ) 

#define IMenuItem_Duplicate(This,ppIMenuItem)	\
    ( (This)->lpVtbl -> Duplicate(This,ppIMenuItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMenuItem_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


