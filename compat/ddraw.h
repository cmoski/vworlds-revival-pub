// Stub ddraw.h for VWorlds modernization
// Provides DirectDraw error constants and minimal type definitions.
// The real DirectDraw was removed from modern Windows SDK.

#ifndef __DDRAW_INCLUDED__
#define __DDRAW_INCLUDED__

#include <windows.h>

// Forward declare IDirectDraw as an opaque struct for code that uses IDirectDraw* directly.
// The real IDirectDraw is a COM interface, but for stub purposes a struct suffices.
typedef struct IDirectDraw IDirectDraw;
typedef struct IDirectDrawSurface IDirectDrawSurface;
typedef struct IDirectDrawPalette IDirectDrawPalette;
typedef struct IDirectDrawClipper IDirectDrawClipper;

// DirectDraw pointer types
typedef IDirectDraw* LPDIRECTDRAW;
typedef int* LPDIRECTDRAW2;
typedef int* LPDIRECTDRAW4;
typedef int* LPDIRECTDRAW7;
typedef int* LPDIRECTDRAWSURFACE;
typedef int* LPDIRECTDRAWSURFACE2;
typedef int* LPDIRECTDRAWSURFACE3;
typedef int* LPDIRECTDRAWSURFACE4;
typedef int* LPDIRECTDRAWSURFACE7;
typedef int* LPDIRECTDRAWPALETTE;
typedef int* LPDIRECTDRAWCLIPPER;

// DirectDraw success/error codes
#define DD_OK                                   S_OK
#define DD_FALSE                                S_FALSE

#define _FACDD  0x876
#define MAKE_DDHRESULT(code)  MAKE_HRESULT(1, _FACDD, code)

#define DDERR_ALREADYINITIALIZED                MAKE_DDHRESULT(5)
#define DDERR_CANNOTATTACHSURFACE               MAKE_DDHRESULT(10)
#define DDERR_CANNOTDETACHSURFACE               MAKE_DDHRESULT(20)
#define DDERR_CURRENTLYNOTAVAIL                 MAKE_DDHRESULT(40)
#define DDERR_EXCEPTION                         MAKE_DDHRESULT(55)
#define DDERR_GENERIC                           E_FAIL
#define DDERR_HEIGHTALIGN                       MAKE_DDHRESULT(90)
#define DDERR_INCOMPATIBLEPRIMARY               MAKE_DDHRESULT(95)
#define DDERR_INVALIDCAPS                       MAKE_DDHRESULT(100)
#define DDERR_INVALIDCLIPLIST                   MAKE_DDHRESULT(110)
#define DDERR_INVALIDMODE                       MAKE_DDHRESULT(120)
#define DDERR_INVALIDOBJECT                     MAKE_DDHRESULT(130)
#define DDERR_INVALIDPARAMS                     E_INVALIDARG
#define DDERR_INVALIDPIXELFORMAT                MAKE_DDHRESULT(145)
#define DDERR_INVALIDRECT                       MAKE_DDHRESULT(150)
#define DDERR_LOCKEDSURFACES                    MAKE_DDHRESULT(160)
#define DDERR_NO3D                              MAKE_DDHRESULT(170)
#define DDERR_NOALPHAHW                         MAKE_DDHRESULT(180)
#define DDERR_NOCLIPLIST                        MAKE_DDHRESULT(205)
#define DDERR_NOCOLORCONVHW                     MAKE_DDHRESULT(210)
#define DDERR_NOCOOPERATIVELEVELSET             MAKE_DDHRESULT(212)
#define DDERR_NOCOLORKEY                        MAKE_DDHRESULT(215)
#define DDERR_NOCOLORKEYHW                      MAKE_DDHRESULT(220)
#define DDERR_NODIRECTDRAWSUPPORT               MAKE_DDHRESULT(222)
#define DDERR_NOEXCLUSIVEMODE                   MAKE_DDHRESULT(225)
#define DDERR_NOFLIPHW                          MAKE_DDHRESULT(230)
#define DDERR_NOGDI                             MAKE_DDHRESULT(240)
#define DDERR_NOMIRRORHW                        MAKE_DDHRESULT(250)
#define DDERR_NOTFOUND                          MAKE_DDHRESULT(255)
#define DDERR_NOOVERLAYHW                       MAKE_DDHRESULT(260)
#define DDERR_NORASTEROPHW                      MAKE_DDHRESULT(280)
#define DDERR_NOROTATIONHW                      MAKE_DDHRESULT(290)
#define DDERR_NOSTRETCHHW                       MAKE_DDHRESULT(310)
#define DDERR_NOT4BITCOLOR                      MAKE_DDHRESULT(316)
#define DDERR_NOT4BITCOLORINDEX                 MAKE_DDHRESULT(317)
#define DDERR_NOT8BITCOLOR                      MAKE_DDHRESULT(320)
#define DDERR_NOTEXTUREHW                       MAKE_DDHRESULT(330)
#define DDERR_NOVSYNCHW                         MAKE_DDHRESULT(335)
#define DDERR_NOZBUFFERHW                       MAKE_DDHRESULT(340)
#define DDERR_NOZOVERLAYHW                      MAKE_DDHRESULT(350)
#define DDERR_OUTOFCAPS                         MAKE_DDHRESULT(360)
#define DDERR_OUTOFMEMORY                       E_OUTOFMEMORY
#define DDERR_OUTOFVIDEOMEMORY                  MAKE_DDHRESULT(380)
#define DDERR_OVERLAYCANTCLIP                   MAKE_DDHRESULT(382)
#define DDERR_OVERLAYCOLORKEYONLYONEACTIVE      MAKE_DDHRESULT(386)
#define DDERR_PALETTEBUSY                       MAKE_DDHRESULT(387)
#define DDERR_COLORKEYNOTSET                    MAKE_DDHRESULT(400)
#define DDERR_SURFACEALREADYATTACHED            MAKE_DDHRESULT(410)
#define DDERR_SURFACEALREADYDEPENDENT           MAKE_DDHRESULT(420)
#define DDERR_SURFACEBUSY                       MAKE_DDHRESULT(430)
#define DDERR_CANTLOCKSURFACE                   MAKE_DDHRESULT(435)
#define DDERR_SURFACEISOBSCURED                 MAKE_DDHRESULT(440)
#define DDERR_SURFACELOST                       MAKE_DDHRESULT(450)
#define DDERR_SURFACENOTATTACHED                MAKE_DDHRESULT(460)
#define DDERR_TOOBIGHEIGHT                      MAKE_DDHRESULT(470)
#define DDERR_TOOBIGSIZE                        MAKE_DDHRESULT(480)
#define DDERR_TOOBIGWIDTH                       MAKE_DDHRESULT(490)
#define DDERR_UNSUPPORTED                       E_NOTIMPL
#define DDERR_UNSUPPORTEDFORMAT                 MAKE_DDHRESULT(510)
#define DDERR_UNSUPPORTEDMASK                   MAKE_DDHRESULT(520)
#define DDERR_VERTICALBLANKINPROGRESS           MAKE_DDHRESULT(537)
#define DDERR_WASSTILLDRAWING                   MAKE_DDHRESULT(540)
#define DDERR_XALIGN                            MAKE_DDHRESULT(560)
#define DDERR_INVALIDDIRECTDRAWGUID             MAKE_DDHRESULT(561)
#define DDERR_DIRECTDRAWALREADYCREATED          MAKE_DDHRESULT(562)
#define DDERR_NODIRECTDRAWHW                    MAKE_DDHRESULT(563)
#define DDERR_PRIMARYSURFACEALREADYEXISTS       MAKE_DDHRESULT(564)
#define DDERR_NOEMULATION                       MAKE_DDHRESULT(565)
#define DDERR_REGIONTOOSMALL                    MAKE_DDHRESULT(566)
#define DDERR_CLIPPERISUSINGHWND                MAKE_DDHRESULT(567)
#define DDERR_NOCLIPPERATTACHED                 MAKE_DDHRESULT(568)
#define DDERR_NOHWND                            MAKE_DDHRESULT(569)
#define DDERR_HWNDSUBCLASSED                    MAKE_DDHRESULT(570)
#define DDERR_HWNDALREADYSET                    MAKE_DDHRESULT(571)
#define DDERR_NOPALETTEATTACHED                 MAKE_DDHRESULT(572)
#define DDERR_NOPALETTEHW                       MAKE_DDHRESULT(573)
#define DDERR_BLTFASTCANTCLIP                   MAKE_DDHRESULT(574)
#define DDERR_NOBLTHW                           MAKE_DDHRESULT(575)
#define DDERR_NODDROPSHW                        MAKE_DDHRESULT(576)
#define DDERR_OVERLAYNOTVISIBLE                 MAKE_DDHRESULT(577)
#define DDERR_NOOVERLAYDEST                     MAKE_DDHRESULT(578)
#define DDERR_INVALIDPOSITION                   MAKE_DDHRESULT(579)
#define DDERR_NOTAOVERLAYSURFACE                MAKE_DDHRESULT(580)
#define DDERR_EXCLUSIVEMODEALREADYSET           MAKE_DDHRESULT(581)
#define DDERR_NOTFLIPPABLE                      MAKE_DDHRESULT(582)
#define DDERR_CANTDUPLICATE                     MAKE_DDHRESULT(583)
#define DDERR_NOTLOCKED                         MAKE_DDHRESULT(584)
#define DDERR_CANTCREATEDC                      MAKE_DDHRESULT(585)
#define DDERR_NODC                              MAKE_DDHRESULT(586)
#define DDERR_WRONGMODE                         MAKE_DDHRESULT(587)
#define DDERR_IMPLICITLYCREATED                 MAKE_DDHRESULT(588)
#define DDERR_NOTPALETTIZED                     MAKE_DDHRESULT(589)
#define DDERR_UNSUPPORTEDMODE                   MAKE_DDHRESULT(590)
#define DDERR_NOMIPMAPHW                        MAKE_DDHRESULT(591)
#define DDERR_INVALIDSURFACETYPE                MAKE_DDHRESULT(592)
#define DDERR_DCALREADYCREATED                  MAKE_DDHRESULT(620)
#define DDERR_CANTPAGELOCK                      MAKE_DDHRESULT(640)
#define DDERR_CANTPAGEUNLOCK                    MAKE_DDHRESULT(660)
#define DDERR_NOTPAGELOCKED                     MAKE_DDHRESULT(680)
#define DDERR_NOTINITIALIZED                    CO_E_NOTINITIALIZED

// Pixel format flags
#define DDPF_PALETTEINDEXED1        0x00000800
#define DDPF_PALETTEINDEXED2        0x00001000
#define DDPF_PALETTEINDEXED4        0x00000008
#define DDPF_PALETTEINDEXED8        0x00000020
#define DDPF_RGB                    0x00000040
#define DDPF_ALPHAPIXELS            0x00000001

// Palette caps
#define DDPCAPS_1BIT                0x00000001
#define DDPCAPS_2BIT                0x00000002
#define DDPCAPS_4BIT                0x00000004
#define DDPCAPS_8BIT                0x00000008
#define DDPCAPS_8BITENTRIES         0x00000010
#define DDPCAPS_ALLOW256            0x00000040

// Surface description flags
#define DDSD_CAPS                   0x00000001
#define DDSD_HEIGHT                 0x00000002
#define DDSD_WIDTH                  0x00000004
#define DDSD_PIXELFORMAT            0x00001000

// Surface caps
#define DDSCAPS_OFFSCREENPLAIN      0x00000040
#define DDSCAPS_SYSTEMMEMORY        0x00000800

// Color key flags
#define DDCKEY_SRCBLT               0x00000008

// Blt flags
#define DDBLT_COLORFILL             0x00000400
#define DDBLT_KEYSRC                0x00008000
#define DDBLT_WAIT                  0x01000000
#define DDBLTFAST_SRCCOLORKEY       0x00000001
#define DDBLTFAST_WAIT              0x00000010

// Structures (minimal)
typedef struct _DDCOLORKEY {
    DWORD dwColorSpaceLowValue;
    DWORD dwColorSpaceHighValue;
} DDCOLORKEY, *LPDDCOLORKEY;

typedef struct _DDPIXELFORMAT {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwFourCC;
    union {
        DWORD dwRGBBitCount;
        DWORD dwYUVBitCount;
        DWORD dwZBufferBitDepth;
        DWORD dwAlphaBitDepth;
    };
    union {
        DWORD dwRBitMask;
        DWORD dwYBitMask;
    };
    union {
        DWORD dwGBitMask;
        DWORD dwUBitMask;
    };
    union {
        DWORD dwBBitMask;
        DWORD dwVBitMask;
    };
    union {
        DWORD dwRGBAlphaBitMask;
        DWORD dwYUVAlphaBitMask;
    };
} DDPIXELFORMAT, *LPDDPIXELFORMAT;

typedef struct _DDSCAPS {
    DWORD dwCaps;
} DDSCAPS, *LPDDSCAPS;

typedef struct _DDSURFACEDESC {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwHeight;
    DWORD dwWidth;
    union {
        LONG  lPitch;
        DWORD dwLinearSize;
    };
    DWORD dwBackBufferCount;
    DWORD dwRefreshRate;
    DWORD dwAlphaBitDepth;
    DWORD dwReserved;
    LPVOID lpSurface;
    DDCOLORKEY ddckCKDestOverlay;
    DDCOLORKEY ddckCKDestBlt;
    DDCOLORKEY ddckCKSrcOverlay;
    DDCOLORKEY ddckCKSrcBlt;
    DDPIXELFORMAT ddpfPixelFormat;
    DDSCAPS ddsCaps;
} DDSURFACEDESC, *LPDDSURFACEDESC;

// PALETTEENTRY is already defined in wingdi.h (included via windows.h)

// D3D Immediate Mode error codes (used by errmgr.cpp error table)
#define _FACD3D 0x876
#define MAKE_D3DHRESULT(code) MAKE_HRESULT(1, _FACD3D, code)
#define D3DERR_BADMAJORVERSION          MAKE_D3DHRESULT(700)
#define D3DERR_BADMINORVERSION          MAKE_D3DHRESULT(701)
#define D3DERR_EXECUTE_CREATE_FAILED    MAKE_D3DHRESULT(710)
#define D3DERR_EXECUTE_DESTROY_FAILED   MAKE_D3DHRESULT(711)
#define D3DERR_EXECUTE_LOCK_FAILED      MAKE_D3DHRESULT(712)
#define D3DERR_EXECUTE_UNLOCK_FAILED    MAKE_D3DHRESULT(713)
#define D3DERR_EXECUTE_LOCKED           MAKE_D3DHRESULT(714)
#define D3DERR_EXECUTE_NOT_LOCKED       MAKE_D3DHRESULT(715)
#define D3DERR_EXECUTE_FAILED           MAKE_D3DHRESULT(716)
#define D3DERR_EXECUTE_CLIPPED_FAILED   MAKE_D3DHRESULT(717)
#define D3DERR_TEXTURE_NO_SUPPORT       MAKE_D3DHRESULT(720)
#define D3DERR_TEXTURE_NOT_LOCKED       MAKE_D3DHRESULT(722)
#define D3DERR_TEXTURE_LOCKED           MAKE_D3DHRESULT(723)
#define D3DERR_TEXTURE_CREATE_FAILED    MAKE_D3DHRESULT(724)
#define D3DERR_TEXTURE_DESTROY_FAILED   MAKE_D3DHRESULT(725)
#define D3DERR_TEXTURE_LOCK_FAILED      MAKE_D3DHRESULT(726)
#define D3DERR_TEXTURE_UNLOCK_FAILED    MAKE_D3DHRESULT(727)
#define D3DERR_TEXTURE_LOAD_FAILED      MAKE_D3DHRESULT(728)
#define D3DERR_TEXTURE_SWAP_FAILED      MAKE_D3DHRESULT(729)
#define D3DERR_TEXTURE_GETSURF_FAILED   MAKE_D3DHRESULT(735)
#define D3DERR_MATRIX_CREATE_FAILED     MAKE_D3DHRESULT(730)
#define D3DERR_MATRIX_DESTROY_FAILED    MAKE_D3DHRESULT(731)
#define D3DERR_MATRIX_SETDATA_FAILED    MAKE_D3DHRESULT(732)
#define D3DERR_MATRIX_GETDATA_FAILED    MAKE_D3DHRESULT(733)
#define D3DERR_SETVIEWPORTDATA_FAILED   MAKE_D3DHRESULT(734)
#define D3DERR_MATERIAL_CREATE_FAILED   MAKE_D3DHRESULT(740)
#define D3DERR_MATERIAL_DESTROY_FAILED  MAKE_D3DHRESULT(741)
#define D3DERR_MATERIAL_SETDATA_FAILED  MAKE_D3DHRESULT(742)
#define D3DERR_MATERIAL_GETDATA_FAILED  MAKE_D3DHRESULT(743)
#define D3DERR_LIGHT_SET_FAILED         MAKE_D3DHRESULT(750)
#define D3DERR_SCENE_IN_SCENE           MAKE_D3DHRESULT(760)
#define D3DERR_SCENE_NOT_IN_SCENE       MAKE_D3DHRESULT(761)
#define D3DERR_SCENE_BEGIN_FAILED       MAKE_D3DHRESULT(762)
#define D3DERR_SCENE_END_FAILED         MAKE_D3DHRESULT(763)
#define D3DRMERR_BADOBJECT              MAKE_D3DHRESULT(781)
#define D3DRMERR_BADTYPE                MAKE_D3DHRESULT(782)
#define D3DRMERR_BADALLOC               MAKE_D3DHRESULT(783)
#define D3DRMERR_FACEUSED               MAKE_D3DHRESULT(784)
#define D3DRMERR_NOTFOUND               MAKE_D3DHRESULT(785)
#define D3DRMERR_NOTDONEYET             MAKE_D3DHRESULT(786)
#define D3DRMERR_FILENOTFOUND           MAKE_D3DHRESULT(787)
#define D3DRMERR_BADFILE                MAKE_D3DHRESULT(788)
#define D3DRMERR_BADDEVICE              MAKE_D3DHRESULT(789)
#define D3DRMERR_BADVALUE               MAKE_D3DHRESULT(790)
#define D3DRMERR_BADMAJORVERSION        MAKE_D3DHRESULT(791)
#define D3DRMERR_BADMINORVERSION        MAKE_D3DHRESULT(792)
#define D3DRMERR_UNABLETOEXECUTE        MAKE_D3DHRESULT(793)

#endif // __DDRAW_INCLUDED__
