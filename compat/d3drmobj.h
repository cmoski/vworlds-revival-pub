// Stub d3drmobj.h for VWorlds modernization
#ifndef __D3DRMOBJ_H__
#define __D3DRMOBJ_H__

#include "d3drmdef.h"
#include "d3drm.h"

// Additional versioned interfaces (as opaque pointers)
typedef int* LPDIRECT3DRMFRAME2;
typedef int* LPDIRECT3DRMFRAME3;
typedef int* LPDIRECT3DRMDEVICE2;
typedef int* LPDIRECT3DRMDEVICE3;
typedef int* LPDIRECT3DRMVIEWPORT2;
typedef int* LPDIRECT3DRMTEXTURE2;
typedef int* LPDIRECT3DRMTEXTURE3;
typedef int* LPDIRECT3DRMMESHBUILDER2;
typedef int* LPDIRECT3DRMMESHBUILDER3;
typedef int* LPDIRECT3DRMFACE2;
typedef int* LPDIRECT3DRM2;
typedef int* LPDIRECT3DRM3;
typedef int* LPDIRECT3DRMPROGRESSIVEMESH;
typedef int* LPDIRECT3DRMSHADOW;
typedef int* LPDIRECT3DRMSHADOW2;
typedef int* LPDIRECT3DRMOBJECT;
typedef int* LPDIRECT3DRMFRAMEARRAY;
typedef int* LPDIRECT3DRMVISUALARRAY;
typedef int* LPDIRECT3DRMLIGHTARRAY;
typedef int* LPDIRECT3DRMFACEARRAY;
typedef int* LPDIRECT3DRMANIMATIONSET;
typedef int* LPDIRECT3DRMANIMATIONSET2;

// Callback types (as void function pointers)
typedef void (*D3DRMOBJECTCALLBACK)(void *obj, void *arg);
typedef void (*D3DRMFRAMEMOVECALLBACK)(void *frame, void *ctx, float delta);

#endif // __D3DRMOBJ_H__
