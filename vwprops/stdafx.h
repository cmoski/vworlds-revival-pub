// stdafx.h : precompiled header for vwprops.dll
// Modeled on vwmm/stdafx.h but without D3DRM/DirectDraw dependencies.

#pragma once

#define STRICT
#define _ATL_ALLOW_DEPRECATED_FUNCTIONS

#include <afxwin.h>
#include <afxdisp.h>

#define _ATL_APARTMENT_THREADED
#define VC_EXTRALEAN

#include <atlbase.h>
extern CComModule _Module;
#include <atlcom.h>

#include "point23.h"
#include <vwobject.h>

// Compat headers for D3DRM types used by vector math
#include <d3drmdef.h>
#include <d3drm.h>
#include <d3drmobj.h>

// Include d2d.h (MIDL-generated) before other MIDL headers to avoid D2D type conflicts
#include <d2d.h>

// MIDL-generated interface headers needed by property implementations
#include <vector.h>
#include <isound.h>
#include <pickdata.h>
#include <vwadata.h>
#include <vwidata.h>
#include <vwmm.h>
