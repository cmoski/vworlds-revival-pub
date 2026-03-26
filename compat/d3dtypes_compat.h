// d3dtypes_compat.h - Bridges legacy D3DRM types with modern Windows SDK.
// Force-included via /FI BEFORE any other headers in graphics targets.
//
// Strategy: Include the legacy d3dtypes.h first (which defines all D3D base types),
// then set modern SDK guards to prevent dxgitype.h/d3d9types.h from redefining them.

#pragma once

#ifndef DIRECT3D_VERSION
#define DIRECT3D_VERSION 0x0600
#endif

// Include legacy d3dtypes.h which provides D3DVECTOR, D3DMATRIX, D3DCOLORVALUE, etc.
// Use the full path to ensure we get the legacy version, not the system SDK version.
// This path is relative to the repo root (src/).
#include "third_party/d3drm_legacy/x86/include/d3dtypes.h"

// Now set modern SDK guards to suppress redefinitions
#ifndef D3DCOLORVALUE_DEFINED
#define D3DCOLORVALUE_DEFINED
#endif

#ifndef D3DVECTOR_DEFINED
#define D3DVECTOR_DEFINED
#endif

#ifndef D3DMATRIX_DEFINED
#define D3DMATRIX_DEFINED
#endif

// Block d3d9types.h entirely - it redefines all the same enums/structs
#ifndef _D3D9TYPES_H_
#define _D3D9TYPES_H_
#endif

// dxgitype.h needs DXGI_RGBA which is typedef'd from D3DCOLORVALUE
// Since we already have D3DCOLORVALUE defined, provide the typedef
#ifndef __dxgitype_h__
#define __dxgitype_h__
typedef D3DCOLORVALUE DXGI_RGBA;

// Minimal DXGI types that other headers may need
typedef enum DXGI_FORMAT {
    DXGI_FORMAT_UNKNOWN = 0,
} DXGI_FORMAT;

typedef struct DXGI_SAMPLE_DESC {
    UINT Count;
    UINT Quality;
} DXGI_SAMPLE_DESC;

typedef struct DXGI_RATIONAL {
    UINT Numerator;
    UINT Denominator;
} DXGI_RATIONAL;

typedef enum DXGI_MODE_ROTATION {
    DXGI_MODE_ROTATION_UNSPECIFIED = 0,
    DXGI_MODE_ROTATION_IDENTITY = 1,
    DXGI_MODE_ROTATION_ROTATE90 = 2,
    DXGI_MODE_ROTATION_ROTATE180 = 3,
    DXGI_MODE_ROTATION_ROTATE270 = 4,
} DXGI_MODE_ROTATION;

typedef enum DXGI_MODE_SCANLINE_ORDER {
    DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED = 0,
    DXGI_MODE_SCANLINE_ORDER_PROGRESSIVE = 1,
    DXGI_MODE_SCANLINE_ORDER_UPPER_FIELD_FIRST = 2,
    DXGI_MODE_SCANLINE_ORDER_LOWER_FIELD_FIRST = 3,
} DXGI_MODE_SCANLINE_ORDER;

typedef enum DXGI_MODE_SCALING {
    DXGI_MODE_SCALING_UNSPECIFIED = 0,
    DXGI_MODE_SCALING_CENTERED = 1,
    DXGI_MODE_SCALING_STRETCHED = 2,
} DXGI_MODE_SCALING;

typedef struct DXGI_MODE_DESC {
    UINT Width;
    UINT Height;
    DXGI_RATIONAL RefreshRate;
    DXGI_FORMAT Format;
    DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
    DXGI_MODE_SCALING Scaling;
} DXGI_MODE_DESC;

#endif // __dxgitype_h__
