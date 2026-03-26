// ddutil_stub.cpp - Stub implementations for GetBitmapFromThing and DIBToBitmap.
// The real ddutil.cpp uses DirectDraw surfaces which are not available.
// These stubs return failure/NULL so callers handle gracefully.

#include "stdafx.h"
#include <vwobject.h>
#include "ddutil.h"

HRESULT GetBitmapFromThing(IWorld *pWorld, IThing *pThing, COLORREF rgbBackColor, LPBITMAPINFOHEADER *ppDIB)
{
    if (ppDIB) *ppDIB = NULL;
    return E_NOTIMPL;  // DirectDraw not available in reduced build
}

HBITMAP DIBToBitmap(int cx, int cy, int depth, LPBITMAPINFOHEADER pDIB, int nFlags)
{
    return NULL;  // DirectDraw not available in reduced build
}
