// Copyright � 2000 Microsoft Corporation.  All rights reserved.
// In installing/viewing this source code, you agree to the terms of the
// Microsoft Research Source License (MSRSL) included in the root of this source tree
// and available from http://www.vworlds.org/license.asp.

// stdafx.h : include file for standard system include files,
//      or project specific include files that are used frequently,
//      but are changed infrequently

#include <afxwin.h>
#include <afxdisp.h>

#define _ATL_ALLOW_DEPRECATED_FUNCTIONS
#include <atlbase.h>
//You may derive a class from CComModule and use it if you want to override
//something, but do not change the name of _Module
extern CComModule _Module;
#include <atlcom.h>

#include <vwobject.h>
// Include stub D3DRM headers first so MIDL-generated headers see the guards
#include <d3drmdef.h>
#include <d3drm.h>
#include <d3drmobj.h>
// Include d2d.h (MIDL-generated) before vwrender.h/vwfound.h to avoid type conflicts
#include <d2d.h>
#include <vwmm.h>
#include <vwfound.h>