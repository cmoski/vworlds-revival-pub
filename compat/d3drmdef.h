// Stub d3drmdef.h - minimal D3DRM type definitions
#ifndef __D3DRMDEF_H__
#define __D3DRMDEF_H__

#include <windows.h>

#ifndef D3DVALUE
typedef float D3DVALUE;
#endif

#ifndef D3DCOLOR
typedef DWORD D3DCOLOR;
#endif

#ifndef D3DCOLORMODEL
typedef DWORD D3DCOLORMODEL;
#endif

// D3DVECTOR and related types - only define if not already provided
#if !defined(_D3DVECTOR_DEFINED) && !defined(D3DVECTOR_DEFINED)
#define _D3DVECTOR_DEFINED
#define D3DVECTOR_DEFINED
typedef struct _D3DVECTOR {
    float x, y, z;
} D3DVECTOR, *LPD3DVECTOR;
#endif

typedef D3DVECTOR D3DRMVECTOR4D;  // Simplified - real one has w component

// Enumerations - guard each one
#ifndef D3DRMCOMBINE_REPLACE
typedef enum _D3DRMCOMBINETYPE {
    D3DRMCOMBINE_REPLACE = 0,
    D3DRMCOMBINE_BEFORE = 1,
    D3DRMCOMBINE_AFTER = 2
} D3DRMCOMBINETYPE;
#endif

#ifndef D3DRMPROJECT_PERSPECTIVE
typedef enum _D3DRMPROJECTIONTYPE {
    D3DRMPROJECT_PERSPECTIVE = 0,
    D3DRMPROJECT_ORTHOGRAPHIC = 1
} D3DRMPROJECTIONTYPE;
#endif

#ifndef D3DRMLIGHT_AMBIENT
typedef enum _D3DRMLIGHTTYPE {
    D3DRMLIGHT_AMBIENT = 0,
    D3DRMLIGHT_POINT = 1,
    D3DRMLIGHT_SPOT = 2,
    D3DRMLIGHT_DIRECTIONAL = 3,
    D3DRMLIGHT_PARALLELPOINT = 4
} D3DRMLIGHTTYPE;
#endif

#endif // __D3DRMDEF_H__
