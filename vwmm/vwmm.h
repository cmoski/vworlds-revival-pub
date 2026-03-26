

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for F:/VWorlds/src/vwmm/vwmm.idl:
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


#ifndef __vwmm_h__
#define __vwmm_h__

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

#ifndef __Boundary_FWD_DEFINED__
#define __Boundary_FWD_DEFINED__

#ifdef __cplusplus
typedef class Boundary Boundary;
#else
typedef struct Boundary Boundary;
#endif /* __cplusplus */

#endif 	/* __Boundary_FWD_DEFINED__ */


#ifndef __Vector_FWD_DEFINED__
#define __Vector_FWD_DEFINED__

#ifdef __cplusplus
typedef class Vector Vector;
#else
typedef struct Vector Vector;
#endif /* __cplusplus */

#endif 	/* __Vector_FWD_DEFINED__ */


#ifndef __Sound_FWD_DEFINED__
#define __Sound_FWD_DEFINED__

#ifdef __cplusplus
typedef class Sound Sound;
#else
typedef struct Sound Sound;
#endif /* __cplusplus */

#endif 	/* __Sound_FWD_DEFINED__ */


#ifndef __VWGeometry_FWD_DEFINED__
#define __VWGeometry_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWGeometry VWGeometry;
#else
typedef struct VWGeometry VWGeometry;
#endif /* __cplusplus */

#endif 	/* __VWGeometry_FWD_DEFINED__ */


#ifndef __VWGeometrySprite_FWD_DEFINED__
#define __VWGeometrySprite_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWGeometrySprite VWGeometrySprite;
#else
typedef struct VWGeometrySprite VWGeometrySprite;
#endif /* __cplusplus */

#endif 	/* __VWGeometrySprite_FWD_DEFINED__ */


#ifndef __VWGeometryArticulated_FWD_DEFINED__
#define __VWGeometryArticulated_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWGeometryArticulated VWGeometryArticulated;
#else
typedef struct VWGeometryArticulated VWGeometryArticulated;
#endif /* __cplusplus */

#endif 	/* __VWGeometryArticulated_FWD_DEFINED__ */


#ifndef __Joint_FWD_DEFINED__
#define __Joint_FWD_DEFINED__

#ifdef __cplusplus
typedef class Joint Joint;
#else
typedef struct Joint Joint;
#endif /* __cplusplus */

#endif 	/* __Joint_FWD_DEFINED__ */


#ifndef __Character_FWD_DEFINED__
#define __Character_FWD_DEFINED__

#ifdef __cplusplus
typedef class Character Character;
#else
typedef struct Character Character;
#endif /* __cplusplus */

#endif 	/* __Character_FWD_DEFINED__ */


#ifndef __Behavior_FWD_DEFINED__
#define __Behavior_FWD_DEFINED__

#ifdef __cplusplus
typedef class Behavior Behavior;
#else
typedef struct Behavior Behavior;
#endif /* __cplusplus */

#endif 	/* __Behavior_FWD_DEFINED__ */


#ifndef __Puppet_FWD_DEFINED__
#define __Puppet_FWD_DEFINED__

#ifdef __cplusplus
typedef class Puppet Puppet;
#else
typedef struct Puppet Puppet;
#endif /* __cplusplus */

#endif 	/* __Puppet_FWD_DEFINED__ */


#ifndef __VWAccessoryData_FWD_DEFINED__
#define __VWAccessoryData_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWAccessoryData VWAccessoryData;
#else
typedef struct VWAccessoryData VWAccessoryData;
#endif /* __cplusplus */

#endif 	/* __VWAccessoryData_FWD_DEFINED__ */


#ifndef __VWIntersectData_FWD_DEFINED__
#define __VWIntersectData_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWIntersectData VWIntersectData;
#else
typedef struct VWIntersectData VWIntersectData;
#endif /* __cplusplus */

#endif 	/* __VWIntersectData_FWD_DEFINED__ */


#ifndef __VWPickData_FWD_DEFINED__
#define __VWPickData_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWPickData VWPickData;
#else
typedef struct VWPickData VWPickData;
#endif /* __cplusplus */

#endif 	/* __VWPickData_FWD_DEFINED__ */


#ifndef __VWFrame_FWD_DEFINED__
#define __VWFrame_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWFrame VWFrame;
#else
typedef struct VWFrame VWFrame;
#endif /* __cplusplus */

#endif 	/* __VWFrame_FWD_DEFINED__ */


#ifndef __VWGeometryCache_FWD_DEFINED__
#define __VWGeometryCache_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWGeometryCache VWGeometryCache;
#else
typedef struct VWGeometryCache VWGeometryCache;
#endif /* __cplusplus */

#endif 	/* __VWGeometryCache_FWD_DEFINED__ */


#ifndef __VWRenderRoot_FWD_DEFINED__
#define __VWRenderRoot_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWRenderRoot VWRenderRoot;
#else
typedef struct VWRenderRoot VWRenderRoot;
#endif /* __cplusplus */

#endif 	/* __VWRenderRoot_FWD_DEFINED__ */


#ifndef __VWRender3D_FWD_DEFINED__
#define __VWRender3D_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWRender3D VWRender3D;
#else
typedef struct VWRender3D VWRender3D;
#endif /* __cplusplus */

#endif 	/* __VWRender3D_FWD_DEFINED__ */


#ifndef __VWRender2D_FWD_DEFINED__
#define __VWRender2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWRender2D VWRender2D;
#else
typedef struct VWRender2D VWRender2D;
#endif /* __cplusplus */

#endif 	/* __VWRender2D_FWD_DEFINED__ */


#ifndef __VWNavigationTool3D_FWD_DEFINED__
#define __VWNavigationTool3D_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWNavigationTool3D VWNavigationTool3D;
#else
typedef struct VWNavigationTool3D VWNavigationTool3D;
#endif /* __cplusplus */

#endif 	/* __VWNavigationTool3D_FWD_DEFINED__ */


#ifndef __VWNavigationTool2D_FWD_DEFINED__
#define __VWNavigationTool2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWNavigationTool2D VWNavigationTool2D;
#else
typedef struct VWNavigationTool2D VWNavigationTool2D;
#endif /* __cplusplus */

#endif 	/* __VWNavigationTool2D_FWD_DEFINED__ */


#ifndef __VWNavigationTool2D3D_FWD_DEFINED__
#define __VWNavigationTool2D3D_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWNavigationTool2D3D VWNavigationTool2D3D;
#else
typedef struct VWNavigationTool2D3D VWNavigationTool2D3D;
#endif /* __cplusplus */

#endif 	/* __VWNavigationTool2D3D_FWD_DEFINED__ */


#ifndef __VWPickTool_FWD_DEFINED__
#define __VWPickTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class VWPickTool VWPickTool;
#else
typedef struct VWPickTool VWPickTool;
#endif /* __cplusplus */

#endif 	/* __VWPickTool_FWD_DEFINED__ */


#ifndef __Convert3DSGeometry_FWD_DEFINED__
#define __Convert3DSGeometry_FWD_DEFINED__

#ifdef __cplusplus
typedef class Convert3DSGeometry Convert3DSGeometry;
#else
typedef struct Convert3DSGeometry Convert3DSGeometry;
#endif /* __cplusplus */

#endif 	/* __Convert3DSGeometry_FWD_DEFINED__ */


#ifndef __MultimediaExemplar_FWD_DEFINED__
#define __MultimediaExemplar_FWD_DEFINED__

#ifdef __cplusplus
typedef class MultimediaExemplar MultimediaExemplar;
#else
typedef struct MultimediaExemplar MultimediaExemplar;
#endif /* __cplusplus */

#endif 	/* __MultimediaExemplar_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "vector.h"
#include "cellprop.h"
#include "vwadata.h"
#include "vwidata.h"
#include "vwgeomsp.h"
#include "vwgeomar.h"
#include "pickdata.h"
#include "isound.h"
#include "convgeom.h"
#include "3dstod3d.h"
#include "vwuiobjs.h"
#include "vwnvtool.h"
#include "vwmmex.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VWMMLib_LIBRARY_DEFINED__
#define __VWMMLib_LIBRARY_DEFINED__

/* library VWMMLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_VWMMLib;

EXTERN_C const CLSID CLSID_Boundary;

#ifdef __cplusplus

class DECLSPEC_UUID("EA6CB797-3663-11D0-8AC3-00A0C90A6BFC")
Boundary;
#endif

EXTERN_C const CLSID CLSID_Vector;

#ifdef __cplusplus

class DECLSPEC_UUID("27EB890D-1842-11D0-89A9-00A0C9054129")
Vector;
#endif

EXTERN_C const CLSID CLSID_Sound;

#ifdef __cplusplus

class DECLSPEC_UUID("8FC43EBC-B30C-11d1-83F0-00C04FB6FA46")
Sound;
#endif

EXTERN_C const CLSID CLSID_VWGeometry;

#ifdef __cplusplus

class DECLSPEC_UUID("CFC0B266-1DDB-11D0-89A9-00A0C9054129")
VWGeometry;
#endif

EXTERN_C const CLSID CLSID_VWGeometrySprite;

#ifdef __cplusplus

class DECLSPEC_UUID("DEA5A34D-1DF3-11D0-8AC3-00A0C90A6BFC")
VWGeometrySprite;
#endif

EXTERN_C const CLSID CLSID_VWGeometryArticulated;

#ifdef __cplusplus

class DECLSPEC_UUID("E59063EF-9611-11D0-8AC3-00A0C90A6BFC")
VWGeometryArticulated;
#endif

EXTERN_C const CLSID CLSID_Joint;

#ifdef __cplusplus

class DECLSPEC_UUID("25a580a0-013a-11d2-b8e2-00104b72dba8")
Joint;
#endif

EXTERN_C const CLSID CLSID_Character;

#ifdef __cplusplus

class DECLSPEC_UUID("12867ba0-013a-11d2-b8e2-00104b72dba8")
Character;
#endif

EXTERN_C const CLSID CLSID_Behavior;

#ifdef __cplusplus

class DECLSPEC_UUID("ed4613a0-06ac-11d2-b8e2-00104b72dba8")
Behavior;
#endif

EXTERN_C const CLSID CLSID_Puppet;

#ifdef __cplusplus

class DECLSPEC_UUID("eddeaa20-06ac-11d2-b8e2-00104b72dba8")
Puppet;
#endif

EXTERN_C const CLSID CLSID_VWAccessoryData;

#ifdef __cplusplus

class DECLSPEC_UUID("607FA980-6B2B-11d1-9888-006097C9A0E1")
VWAccessoryData;
#endif

EXTERN_C const CLSID CLSID_VWIntersectData;

#ifdef __cplusplus

class DECLSPEC_UUID("79573080-64C0-11d0-89AA-00A0C9054129")
VWIntersectData;
#endif

EXTERN_C const CLSID CLSID_VWPickData;

#ifdef __cplusplus

class DECLSPEC_UUID("DE671B92-A01D-11d1-84F3-00C04FB6A5C8")
VWPickData;
#endif

EXTERN_C const CLSID CLSID_VWFrame;

#ifdef __cplusplus

class DECLSPEC_UUID("FEADAC66-0B23-11D0-89A9-00A0C9054129")
VWFrame;
#endif

EXTERN_C const CLSID CLSID_VWGeometryCache;

#ifdef __cplusplus

class DECLSPEC_UUID("E2186714-116A-11D0-89A9-00A0C9054129")
VWGeometryCache;
#endif

EXTERN_C const CLSID CLSID_VWRenderRoot;

#ifdef __cplusplus

class DECLSPEC_UUID("7D6A5880-07DE-11d0-89A9-00A0C9054129")
VWRenderRoot;
#endif

EXTERN_C const CLSID CLSID_VWRender3D;

#ifdef __cplusplus

class DECLSPEC_UUID("60CE4B26-FFF0-11CF-89A9-00A0C9054129")
VWRender3D;
#endif

EXTERN_C const CLSID CLSID_VWRender2D;

#ifdef __cplusplus

class DECLSPEC_UUID("60CE4B2B-FFF0-11CF-89A9-00A0C9054129")
VWRender2D;
#endif

EXTERN_C const CLSID CLSID_VWNavigationTool3D;

#ifdef __cplusplus

class DECLSPEC_UUID("60CE4B71-FFF0-11CF-89A9-00A0C9054129")
VWNavigationTool3D;
#endif

EXTERN_C const CLSID CLSID_VWNavigationTool2D;

#ifdef __cplusplus

class DECLSPEC_UUID("60CE4B76-FFF0-11CF-89A9-00A0C9054129")
VWNavigationTool2D;
#endif

EXTERN_C const CLSID CLSID_VWNavigationTool2D3D;

#ifdef __cplusplus

class DECLSPEC_UUID("E76C0940-0711-11d0-89A9-00A0C9054129")
VWNavigationTool2D3D;
#endif

EXTERN_C const CLSID CLSID_VWPickTool;

#ifdef __cplusplus

class DECLSPEC_UUID("6B2A1B46-43A9-11D0-8AC3-00A0C90A6BFC")
VWPickTool;
#endif

EXTERN_C const CLSID CLSID_Convert3DSGeometry;

#ifdef __cplusplus

class DECLSPEC_UUID("8639C43E-C5F0-11D0-811D-00C04FB6A5C8")
Convert3DSGeometry;
#endif

EXTERN_C const CLSID CLSID_MultimediaExemplar;

#ifdef __cplusplus

class DECLSPEC_UUID("717B5A94-7267-11d1-959F-00C04FD91F4D")
MultimediaExemplar;
#endif
#endif /* __VWMMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


