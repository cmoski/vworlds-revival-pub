

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwstudio/vwstudio.idl:
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


#ifndef __vwstudio_h__
#define __vwstudio_h__

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

#ifndef __VWErrorTool_FWD_DEFINED__
#define __VWErrorTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWErrorTool VWErrorTool;
#else
typedef struct VWErrorTool VWErrorTool;
#endif /* __cplusplus */

#endif 	/* __VWErrorTool_FWD_DEFINED__ */


#ifndef __VWTranslate2DTool_FWD_DEFINED__
#define __VWTranslate2DTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWTranslate2DTool VWTranslate2DTool;
#else
typedef struct VWTranslate2DTool VWTranslate2DTool;
#endif /* __cplusplus */

#endif 	/* __VWTranslate2DTool_FWD_DEFINED__ */


#ifndef __VWSelectTool_FWD_DEFINED__
#define __VWSelectTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWSelectTool VWSelectTool;
#else
typedef struct VWSelectTool VWSelectTool;
#endif /* __cplusplus */

#endif 	/* __VWSelectTool_FWD_DEFINED__ */


#ifndef __VWUndoStacks_FWD_DEFINED__
#define __VWUndoStacks_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWUndoStacks VWUndoStacks;
#else
typedef struct VWUndoStacks VWUndoStacks;
#endif /* __cplusplus */

#endif 	/* __VWUndoStacks_FWD_DEFINED__ */


#ifndef __VWControlManager_FWD_DEFINED__
#define __VWControlManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWControlManager VWControlManager;
#else
typedef struct VWControlManager VWControlManager;
#endif /* __cplusplus */

#endif 	/* __VWControlManager_FWD_DEFINED__ */


#ifndef __VWUndoItem_FWD_DEFINED__
#define __VWUndoItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWUndoItem VWUndoItem;
#else
typedef struct VWUndoItem VWUndoItem;
#endif /* __cplusplus */

#endif 	/* __VWUndoItem_FWD_DEFINED__ */


#ifndef __VWRotate2DTool_FWD_DEFINED__
#define __VWRotate2DTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWRotate2DTool VWRotate2DTool;
#else
typedef struct VWRotate2DTool VWRotate2DTool;
#endif /* __cplusplus */

#endif 	/* __VWRotate2DTool_FWD_DEFINED__ */


#ifndef __PolyTool_FWD_DEFINED__
#define __PolyTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class PolyTool PolyTool;
#else
typedef struct PolyTool PolyTool;
#endif /* __cplusplus */

#endif 	/* __PolyTool_FWD_DEFINED__ */


#ifndef __VWScale2DTool_FWD_DEFINED__
#define __VWScale2DTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWScale2DTool VWScale2DTool;
#else
typedef struct VWScale2DTool VWScale2DTool;
#endif /* __cplusplus */

#endif 	/* __VWScale2DTool_FWD_DEFINED__ */


#ifndef __VWTranslate3DTool_FWD_DEFINED__
#define __VWTranslate3DTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWTranslate3DTool VWTranslate3DTool;
#else
typedef struct VWTranslate3DTool VWTranslate3DTool;
#endif /* __cplusplus */

#endif 	/* __VWTranslate3DTool_FWD_DEFINED__ */


#ifndef __Rotate3DTool_FWD_DEFINED__
#define __Rotate3DTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class Rotate3DTool Rotate3DTool;
#else
typedef struct Rotate3DTool Rotate3DTool;
#endif /* __cplusplus */

#endif 	/* __Rotate3DTool_FWD_DEFINED__ */


#ifndef __VWScale3DTool_FWD_DEFINED__
#define __VWScale3DTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWScale3DTool VWScale3DTool;
#else
typedef struct VWScale3DTool VWScale3DTool;
#endif /* __cplusplus */

#endif 	/* __VWScale3DTool_FWD_DEFINED__ */


#ifndef __VWExecuteGeomUndo_FWD_DEFINED__
#define __VWExecuteGeomUndo_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWExecuteGeomUndo VWExecuteGeomUndo;
#else
typedef struct VWExecuteGeomUndo VWExecuteGeomUndo;
#endif /* __cplusplus */

#endif 	/* __VWExecuteGeomUndo_FWD_DEFINED__ */


#ifndef __WorldWizHelper_FWD_DEFINED__
#define __WorldWizHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class WorldWizHelper WorldWizHelper;
#else
typedef struct WorldWizHelper WorldWizHelper;
#endif /* __cplusplus */

#endif 	/* __WorldWizHelper_FWD_DEFINED__ */


#ifndef __RoomWizHelper_FWD_DEFINED__
#define __RoomWizHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class RoomWizHelper RoomWizHelper;
#else
typedef struct RoomWizHelper RoomWizHelper;
#endif /* __cplusplus */

#endif 	/* __RoomWizHelper_FWD_DEFINED__ */


#ifndef __StudioExemplar_FWD_DEFINED__
#define __StudioExemplar_FWD_DEFINED__

#ifdef __cplusplus
typedef class StudioExemplar StudioExemplar;
#else
typedef struct StudioExemplar StudioExemplar;
#endif /* __cplusplus */

#endif 	/* __StudioExemplar_FWD_DEFINED__ */


#ifndef __VWFileAccessTool_FWD_DEFINED__
#define __VWFileAccessTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWFileAccessTool VWFileAccessTool;
#else
typedef struct VWFileAccessTool VWFileAccessTool;
#endif /* __cplusplus */

#endif 	/* __VWFileAccessTool_FWD_DEFINED__ */


#ifndef __VWZoomTool_FWD_DEFINED__
#define __VWZoomTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWZoomTool VWZoomTool;
#else
typedef struct VWZoomTool VWZoomTool;
#endif /* __cplusplus */

#endif 	/* __VWZoomTool_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "stdtools.h"
#include "geomtool.h"
#include "bndytool.h"
#include "webtools.h"
#include "vwstuex.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VWSTUDIOLib_LIBRARY_DEFINED__
#define __VWSTUDIOLib_LIBRARY_DEFINED__

/* library VWSTUDIOLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_VWSTUDIOLib;

EXTERN_C const CLSID CLSID_VWErrorTool;

#ifdef __cplusplus

class DECLSPEC_UUID("77B43660-792E-11d0-89AB-00A0C9054129")
VWErrorTool;
#endif

EXTERN_C const CLSID CLSID_VWTranslate2DTool;

#ifdef __cplusplus

class DECLSPEC_UUID("3159FDB2-EF7F-11CF-89A9-00A0C9054129")
VWTranslate2DTool;
#endif

EXTERN_C const CLSID CLSID_VWSelectTool;

#ifdef __cplusplus

class DECLSPEC_UUID("3159FDB7-EF7F-11CF-89A9-00A0C9054129")
VWSelectTool;
#endif

EXTERN_C const CLSID CLSID_VWUndoStacks;

#ifdef __cplusplus

class DECLSPEC_UUID("FF41E720-30B4-11d0-89A9-00A0C9054129")
VWUndoStacks;
#endif

EXTERN_C const CLSID CLSID_VWControlManager;

#ifdef __cplusplus

class DECLSPEC_UUID("FFF1E320-30B4-31d0-83A9-03A019044129")
VWControlManager;
#endif

EXTERN_C const CLSID CLSID_VWUndoItem;

#ifdef __cplusplus

class DECLSPEC_UUID("B0CD7B7A-AD1E-11D0-888B-00C04FC32EF3")
VWUndoItem;
#endif

EXTERN_C const CLSID CLSID_VWRotate2DTool;

#ifdef __cplusplus

class DECLSPEC_UUID("FFF1E320-30B4-31d0-13A9-13A019044129")
VWRotate2DTool;
#endif

EXTERN_C const CLSID CLSID_PolyTool;

#ifdef __cplusplus

class DECLSPEC_UUID("056BA0D2-C31A-11D0-AFB6-00C04FB68E58")
PolyTool;
#endif

EXTERN_C const CLSID CLSID_VWScale2DTool;

#ifdef __cplusplus

class DECLSPEC_UUID("76BD302B-515C-11d1-B33A-00C04FB6A5C8")
VWScale2DTool;
#endif

EXTERN_C const CLSID CLSID_VWTranslate3DTool;

#ifdef __cplusplus

class DECLSPEC_UUID("86CD4C80-9A10-11D0-89AB-00A0C9054129")
VWTranslate3DTool;
#endif

EXTERN_C const CLSID CLSID_Rotate3DTool;

#ifdef __cplusplus

class DECLSPEC_UUID("0A1D4363-A12B-11D0-89AB-00A0C9054129")
Rotate3DTool;
#endif

EXTERN_C const CLSID CLSID_VWScale3DTool;

#ifdef __cplusplus

class DECLSPEC_UUID("9B813D83-A148-11D0-89AB-00A0C9054129")
VWScale3DTool;
#endif

EXTERN_C const CLSID CLSID_VWExecuteGeomUndo;

#ifdef __cplusplus

class DECLSPEC_UUID("C461BF77-DDDA-11D0-8899-00C04FC32EF3")
VWExecuteGeomUndo;
#endif

EXTERN_C const CLSID CLSID_WorldWizHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("969AD685-5B00-11D1-88AE-00C04FC32EF3")
WorldWizHelper;
#endif

EXTERN_C const CLSID CLSID_RoomWizHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("969AD685-5B00-11D1-88AE-00C04FC32EF4")
RoomWizHelper;
#endif

EXTERN_C const CLSID CLSID_StudioExemplar;

#ifdef __cplusplus

class DECLSPEC_UUID("717B5AA4-7267-11d1-959F-00C04FD91F4D")
StudioExemplar;
#endif

EXTERN_C const CLSID CLSID_VWFileAccessTool;

#ifdef __cplusplus

class DECLSPEC_UUID("F5B9E8D3-74C4-11D1-B344-00C04FB6A5C8")
VWFileAccessTool;
#endif

EXTERN_C const CLSID CLSID_VWZoomTool;

#ifdef __cplusplus

class DECLSPEC_UUID("E0B64D5E-764A-11D1-B345-00C04FB6A5C8")
VWZoomTool;
#endif
#endif /* __VWSTUDIOLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


