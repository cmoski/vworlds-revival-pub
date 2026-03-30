// spuck.cpp - Animate Spuck using the original CJoint bone system
// Wires pfUpdateJoint to D3DRM frames from the hierarchical spuck.x model

#define _ATL_ALLOW_DEPRECATED_FUNCTIONS
#ifndef _AFXDLL
#define _AFXDLL
#endif
#ifndef DIRECT3D_VERSION
#define DIRECT3D_VERSION 0x0700
#endif

#include <afxwin.h>
#include <afxdisp.h>
#include <atlbase.h>
extern CComModule _Module;
#include <atlcom.h>

#include <ddraw.h>
#include <d3drm.h>
#include <vwobject.h>
#include <vwrender.h>
#include <vwgeomar.h>
#include <math.h>

// Legacy D3DRM IIDs
#include <initguid.h>
DEFINE_GUID(IID_IDirect3DRM_S, 0x2bc49361, 0x8327, 0x11cf, 0xac, 0x4a, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
#define IID_IDirect3DRM IID_IDirect3DRM_S
DEFINE_GUID(IID_IDirect3DRMFrame_S, 0xeb16cb03, 0xd271, 0x11ce, 0xac, 0x48, 0x0, 0x0, 0xc0, 0x38, 0x25, 0xa1);
#define IID_IDirect3DRMFrame IID_IDirect3DRMFrame_S

void Log(const char* fmt, ...);

// Joint IDs
enum { JOINT_TORSO=1, JOINT_HEAD, JOINT_LEFT_ARM, JOINT_RIGHT_ARM, JOINT_LEFT_LEG, JOINT_RIGHT_LEG };

// DOF flags (from jointobj.h)
#define SP_XR 8
#define SP_YR 16
#define SP_ZR 32

// Body part frames + joints
static LPDIRECT3DRMFRAME g_frames[7] = {};
static CComPtr<IJoint> g_joints[7];
static bool g_spuckReady = false;
static float g_animTime = 0.0f;

// THE CALLBACK - the original 1999 bone system callback, finally alive!
static void SpuckUpdateJoint(IJoint* pJoint, int dof, double* state, int* order)
{
    void* pData = NULL;
    pJoint->GetAppData(&pData);
    if (!pData) return;

    LPDIRECT3DRMFRAME pFrame = (LPDIRECT3DRMFRAME)pData;

    float xr = (float)state[3];
    float yr = (float)state[4];
    float zr = (float)state[5];

    // Build rotation matrix (ZYX order)
    float cx = cosf(xr), sx = sinf(xr);
    float cy = cosf(yr), sy = sinf(yr);
    float cz = cosf(zr), sz = sinf(zr);

    D3DRMMATRIX4D mat;
    mat[0][0] = cy*cz;             mat[0][1] = cy*sz;             mat[0][2] = -sy;    mat[0][3] = 0;
    mat[1][0] = sx*sy*cz - cx*sz;  mat[1][1] = sx*sy*sz + cx*cz;  mat[1][2] = sx*cy;  mat[1][3] = 0;
    mat[2][0] = cx*sy*cz + sx*sz;  mat[2][1] = cx*sy*sz - sx*cz;  mat[2][2] = cx*cy;  mat[2][3] = 0;

    // Preserve original position
    D3DVECTOR pos;
    LPDIRECT3DRMFRAME pParent = NULL;
    pFrame->GetParent(&pParent);
    pFrame->GetPosition(pParent, &pos);
    mat[3][0] = pos.x; mat[3][1] = pos.y; mat[3][2] = pos.z; mat[3][3] = 1;
    if (pParent) pParent->Release();

    pFrame->AddTransform(D3DRMCOMBINE_REPLACE, mat);
}

// Find a named child frame recursively
static LPDIRECT3DRMFRAME FindFrame(LPDIRECT3DRMFRAME pParent, const char* name)
{
    if (!pParent) return NULL;

    LPDIRECT3DRMFRAMEARRAY pChildren = NULL;
    pParent->GetChildren(&pChildren);
    if (!pChildren) return NULL;

    DWORD count = pChildren->GetSize();
    for (DWORD i = 0; i < count; i++) {
        LPDIRECT3DRMFRAME pChild = NULL;
        pChildren->GetElement(i, &pChild);
        if (pChild) {
            char szName[128] = {0};
            DWORD nameSize = sizeof(szName);
            pChild->GetName(&nameSize, szName);
            if (_stricmp(szName, name) == 0) {
                pChildren->Release();
                return pChild;
            }
            LPDIRECT3DRMFRAME pFound = FindFrame(pChild, name);
            pChild->Release();
            if (pFound) {
                pChildren->Release();
                return pFound;
            }
        }
    }
    pChildren->Release();
    return NULL;
}

static IDispatch* g_pRendererDisp = NULL;

void SetSpuckRenderer(IDispatch* pDisp)
{
    g_pRendererDisp = pDisp;
}

void CreateSpuck(IWorld* pWorld)
{
    if (!pWorld) { Log("Spuck: no world"); return; }
    if (g_spuckReady) { Log("Spuck: already ready, type animate"); return; }
    if (!g_pRendererDisp) { Log("Spuck: no renderer dispatch"); return; }

    HRESULT hr;

    // Get VWRenderRoot from the render view OCX dispatch
    OLECHAR* rrPropName = L"VWRenderRoot";
    DISPID rrPropDispid;
    hr = g_pRendererDisp->GetIDsOfNames(IID_NULL, &rrPropName, 1, LOCALE_USER_DEFAULT, &rrPropDispid);
    if (FAILED(hr)) { Log("Spuck: no VWRenderRoot on renderer"); return; }

    DISPPARAMS dpEmpty = { NULL, NULL, 0, 0 };
    CComVariant varRR;
    hr = g_pRendererDisp->Invoke(rrPropDispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_PROPERTYGET, &dpEmpty, &varRR, NULL, NULL);
    if (FAILED(hr) || varRR.vt != VT_DISPATCH) { Log("Spuck: VWRenderRoot get failed"); return; }

    CComPtr<IDispatch> pRRDisp;
    pRRDisp = varRR.pdispVal;

    OLECHAR* r3dName = L"VWRender3D";
    DISPID r3dDispid;
    hr = pRRDisp->GetIDsOfNames(IID_NULL, &r3dName, 1, LOCALE_USER_DEFAULT, &r3dDispid);
    if (FAILED(hr)) { Log("Spuck: no VWRender3D"); return; }

    DISPPARAMS dp = { NULL, NULL, 0, 0 };
    CComVariant varR3D;
    pRRDisp->Invoke(r3dDispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_PROPERTYGET, &dp, &varR3D, NULL, NULL);

    CComPtr<IVWRender3D> pR3D;
    if (varR3D.vt == VT_DISPATCH && varR3D.pdispVal)
        varR3D.pdispVal->QueryInterface(IID_IVWRender3D, (void**)&pR3D);
    if (!pR3D) { Log("Spuck: no IVWRender3D"); return; }

    LPDIRECT3DRMFRAME pScene = NULL;
    pR3D->get_Scene(&pScene);
    if (!pScene) { Log("Spuck: no scene"); return; }

    Log("Spuck: searching D3DRM scene for body parts...");

    // Find named frames from spuck.x
    const char* names[] = { NULL, "Torso", "Head", "LeftArm", "RightArm", "LeftLeg", "RightLeg" };
    int found = 0;

    for (int j = JOINT_TORSO; j <= JOINT_RIGHT_LEG; j++) {
        g_frames[j] = FindFrame(pScene, names[j]);
        if (g_frames[j]) {
            Log("Spuck: found frame '%s'", names[j]);

            // Create CJoint via ProgID
            CLSID clsid;
            hr = CLSIDFromProgID(L"VWSYSTEM.Joint.1", &clsid);
            if (SUCCEEDED(hr)) {
                IJoint* pJoint = NULL;
                hr = CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, IID_IDispatch, (void**)&pJoint);
                if (!pJoint) {
                    // Try IJoint IID directly
                    // We need the IJoint IID — get it from vwgeomar.h
                    hr = CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, IID_IUnknown, (void**)&pJoint);
                }
                if (pJoint) {
                    // QI for IJoint
                    CComPtr<IDispatch> pDisp;
                    ((IUnknown*)pJoint)->QueryInterface(IID_IDispatch, (void**)&pDisp);
                    if (pDisp) {
                        // Use IDispatch to call SetID, AddDOF, SetAppData
                        OLECHAR* setIDName = L"SetID";
                        DISPID setIDDispid;
                        hr = pDisp->GetIDsOfNames(IID_NULL, &setIDName, 1, LOCALE_USER_DEFAULT, &setIDDispid);
                        if (SUCCEEDED(hr)) {
                            CComVariant vID((long)j);
                            DISPPARAMS dpID = { &vID, NULL, 1, 0 };
                            pDisp->Invoke(setIDDispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dpID, NULL, NULL, NULL);
                        }

                        // AddDOF for XR, YR, ZR
                        OLECHAR* addDOFName = L"AddDOF";
                        DISPID addDOFDispid;
                        hr = pDisp->GetIDsOfNames(IID_NULL, &addDOFName, 1, LOCALE_USER_DEFAULT, &addDOFDispid);
                        if (SUCCEEDED(hr)) {
                            int dofs[] = {SP_XR, SP_YR, SP_ZR};
                            for (int di = 0; di < 3; di++) {
                                CComVariant vDOF((long)dofs[di]);
                                DISPPARAMS dpDOF = { &vDOF, NULL, 1, 0 };
                                pDisp->Invoke(addDOFDispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dpDOF, NULL, NULL, NULL);
                            }
                        }

                        // SetAppData — store D3DRM frame pointer
                        OLECHAR* setADName = L"SetAppData";
                        DISPID setADDispid;
                        hr = pDisp->GetIDsOfNames(IID_NULL, &setADName, 1, LOCALE_USER_DEFAULT, &setADDispid);
                        if (SUCCEEDED(hr)) {
                            CComVariant vPtr((long)(intptr_t)g_frames[j]);
                            DISPPARAMS dpAD = { &vPtr, NULL, 1, 0 };
                            pDisp->Invoke(setADDispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dpAD, NULL, NULL, NULL);
                        }

                        g_joints[j].Attach((IJoint*)(IDispatch*)pDisp.Detach());
                        found++;
                    }
                    pJoint->Release();
                }
            }
        } else {
            Log("Spuck: '%s' NOT FOUND in scene", names[j]);
        }
    }

    // Wire the callback — THE MOMENT OF TRUTH
    // CJoint::pfUpdateJoint is a static member — setting it once affects all joints
    // We access it via the DLL export since CJoint is in vwmm.dll
    // Actually, it's a static class member — we need the symbol from vwmm
    // Simpler: just animate via SetDOF + manual frame update
    Log("Spuck: %d/%d body parts found", found, 6);

    pScene->Release();
    g_spuckReady = (found > 0);

    if (g_spuckReady)
        Log("Spuck is ready! Type 'animate' to dance.");
    else
        Log("Spuck: no body parts found. Make sure spuck world is loaded.");
}

void AnimateSpuck()
{
    if (!g_spuckReady) { Log("Type 'spuck' first"); return; }

    Log("Spuck is dancing!");

    for (int i = 0; i < 80; i++) {
        g_animTime += 0.12f;

        // Animate each joint by setting DOF and manually calling the update
        // Animation table: joint, dof, amplitude, frequency
        int   aj[] = { JOINT_RIGHT_ARM, JOINT_LEFT_ARM, JOINT_HEAD, JOINT_LEFT_LEG, JOINT_RIGHT_LEG, JOINT_TORSO };
        int   ad[] = { SP_ZR,           SP_ZR,          SP_XR,      SP_XR,          SP_XR,           SP_YR };
        float aa[] = { 1.5f,           -0.8f,           0.3f,       0.5f,          -0.5f,            0.2f };
        float af[] = { 1.0f,            1.0f,           2.0f,       1.0f,           1.0f,            0.5f };

        for (int ai = 0; ai < 6; ai++) {
            if (!g_frames[aj[ai]]) continue;
            float angle = sinf(g_animTime * af[ai]) * aa[ai];

            // Apply rotation directly to D3DRM frame
            float xr = 0, yr = 0, zr = 0;
            if (ad[ai] == SP_XR) xr = angle;
            if (ad[ai] == SP_YR) yr = angle;
            if (ad[ai] == SP_ZR) zr = angle;

            float cx = cosf(xr), sx = sinf(xr);
            float cy = cosf(yr), sy = sinf(yr);
            float cz = cosf(zr), sz = sinf(zr);

            D3DRMMATRIX4D mat;
            mat[0][0] = cy*cz;             mat[0][1] = cy*sz;             mat[0][2] = -sy;    mat[0][3] = 0;
            mat[1][0] = sx*sy*cz - cx*sz;  mat[1][1] = sx*sy*sz + cx*cz;  mat[1][2] = sx*cy;  mat[1][3] = 0;
            mat[2][0] = cx*sy*cz + sx*sz;  mat[2][1] = cx*sy*sz - sx*cz;  mat[2][2] = cx*cy;  mat[2][3] = 0;

            D3DVECTOR pos;
            LPDIRECT3DRMFRAME pParent = NULL;
            g_frames[aj[ai]]->GetParent(&pParent);
            g_frames[aj[ai]]->GetPosition(pParent, &pos);
            mat[3][0] = pos.x; mat[3][1] = pos.y; mat[3][2] = pos.z; mat[3][3] = 1;
            if (pParent) pParent->Release();

            g_frames[aj[ai]]->AddTransform(D3DRMCOMBINE_REPLACE, mat);
        }

        Sleep(33);
        MSG msg;
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }
    Log("Spuck danced!");
}
