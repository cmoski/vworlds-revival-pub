// Stub d3drm.h for VWorlds modernization
// Provides type definitions matching what MIDL cpp_quote guards expect.
#ifndef __D3DRM_H__
#define __D3DRM_H__

#include <windows.h>
#include "d3drmdef.h"
#include "ddraw.h"

// Match the MIDL cpp_quote typedef convention (int*)
typedef int* LPDIRECT3DRM;
typedef int* LPDIRECT3DRMDEVICE;
typedef int* LPDIRECT3DRMFRAME;
typedef int* LPDIRECT3DRMVIEWPORT;
typedef int* LPDIRECT3DRMVISUAL;
typedef int* LPDIRECT3DRMTEXTURE;
typedef int* LPDIRECT3DRMMESHBUILDER;
typedef int* LPDIRECT3DRMWINDEVICE;
typedef int* LPDIRECT3DRMFACE;
typedef int* LPDIRECT3DRMLIGHT;
typedef int* LPDIRECT3DRMMESH;
typedef int* LPDIRECT3DRMANIMATION;
typedef int* LPDIRECT3DRMUSERVISUAL;

// Vector math function replacements
#include "d3drmmath.h"

#endif // __D3DRM_H__
