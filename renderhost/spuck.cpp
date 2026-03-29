// spuck.cpp - Create "Spuck" as VWorlds artifacts with animated geometry
// Uses the existing render pipeline — no raw D3DRM hacking needed

#define _ATL_ALLOW_DEPRECATED_FUNCTIONS
#define _AFXDLL
#ifndef DIRECT3D_VERSION
#define DIRECT3D_VERSION 0x0700
#endif

#include <afxwin.h>
#include <afxdisp.h>
#include <atlbase.h>
extern CComModule _Module;
#include <atlcom.h>

#include <vwobject.h>
#include <math.h>

void Log(const char* fmt, ...);

// Spuck's body parts as IThing artifacts
static CComPtr<IThing> g_pTorso;
static CComPtr<IThing> g_pHead;
static CComPtr<IThing> g_pLeftArm;
static CComPtr<IThing> g_pRightArm;
static bool g_spuckCreated = false;
static float g_animAngle = 0.0f;

// Helper: create an artifact with geometry at a position
static IThing* CreatePart(IWorld* pWorld, IThing* pRoom, const char* name,
    const char* geom, float x, float y, float z, float scale = 1.0f)
{
    IThing* pThing = NULL;
    HRESULT hr;

    CComPtr<IThing> pExemplar;
    hr = pWorld->get_Exemplar(CComBSTR("Artifact"), &pExemplar);
    if (FAILED(hr) || !pExemplar) { Log("Spuck: no Artifact exemplar"); return NULL; }

    CComPtr<IThing> pNew;
    hr = pWorld->CreateInstance(CComBSTR(name), CComVariant((IDispatch*)pExemplar), &pNew);
    if (FAILED(hr) || !pNew) { Log("Spuck: CreateInstance(%s) failed hr=0x%08X", name, hr); return NULL; }

    // Move into room
    hr = pNew->MoveInto((IObjectProperty*)pRoom);

    // Set geometry and position
    pNew->InvokeMethodExt(CComBSTR("InitializeGraphics"),
        CComDISPPARAMS(7,
            CComVariant(geom),
            CComVariant(x), CComVariant(y), CComVariant(z),
            CComVariant(0.0f), CComVariant(0.0f), CComVariant(1.0f)),
        NULL);

    pNew.CopyTo(&pThing);
    return pThing;
}

void CreateSpuck(IWorld* pWorld)
{
    if (!pWorld) { Log("Spuck: no world"); return; }
    if (g_spuckCreated) { Log("Spuck: already created"); return; }

    HRESULT hr;

    // Get the room
    CComPtr<IThing> pGlobal;
    hr = pWorld->get_Global(&pGlobal);
    if (FAILED(hr) || !pGlobal) { Log("Spuck: no Global"); return; }

    CComVariant varRoom;
    hr = pGlobal->get_ObjectProperty(CComBSTR("DefaultRoom"), (IObjectProperty**)&varRoom.punkVal);
    CComPtr<IThing> pRoom;
    if (SUCCEEDED(hr) && varRoom.punkVal)
        varRoom.punkVal->QueryInterface(IID_IThing, (void**)&pRoom);
    if (!pRoom) { Log("Spuck: no DefaultRoom"); return; }

    // Use the vending machine model as Spuck's body (it's roughly humanoid shaped!)
    // Or use default.x which is always available
    float baseX = 3.0f, baseZ = 3.0f;

    g_pTorso = CreatePart(pWorld, pRoom, "Spuck_Body",
        "SDK\\Library\\models\\furniture\\Vending.x",
        baseX, 0.5f, baseZ, 0.5f);

    g_pHead = CreatePart(pWorld, pRoom, "Spuck_Head",
        "default.x",
        baseX, 2.0f, baseZ, 0.3f);

    g_pLeftArm = CreatePart(pWorld, pRoom, "Spuck_LeftArm",
        "default.x",
        baseX - 0.8f, 1.2f, baseZ, 0.2f);

    g_pRightArm = CreatePart(pWorld, pRoom, "Spuck_RightArm",
        "default.x",
        baseX + 0.8f, 1.2f, baseZ, 0.2f);

    g_spuckCreated = true;
    Log("Spuck assembled at (%.0f, 0, %.0f)! Body=Vending machine, Head+Arms=sprites", baseX, baseZ);
    Log("Type 'animate' to make Spuck wave.");
}

void AnimateSpuck()
{
    if (!g_spuckCreated) { Log("Type 'spuck' first"); return; }
    if (!g_pRightArm || !g_pLeftArm) { Log("Spuck has no arms!"); return; }

    Log("Spuck is waving...");

    // Animate by moving the arm positions up and down
    for (int i = 0; i < 40; i++) {
        g_animAngle += 0.2f;
        float wave = sinf(g_animAngle) * 0.5f;

        // Move right arm up/down
        CComPtr<IDispatch> pRADisp;
        g_pRightArm->QueryInterface(IID_IDispatch, (void**)&pRADisp);
        if (pRADisp) {
            OLECHAR* posName = L"Position";
            DISPID posDispid;
            HRESULT hr = pRADisp->GetIDsOfNames(IID_NULL, &posName, 1, LOCALE_USER_DEFAULT, &posDispid);
            if (SUCCEEDED(hr)) {
                DISPPARAMS dp = { NULL, NULL, 0, 0 };
                CComVariant varPos;
                hr = pRADisp->Invoke(posDispid, IID_NULL, LOCALE_USER_DEFAULT,
                    DISPATCH_PROPERTYGET, &dp, &varPos, NULL, NULL);
                if (SUCCEEDED(hr) && varPos.vt == VT_DISPATCH && varPos.pdispVal) {
                    // Set Y on the position vector
                    OLECHAR* yName = L"Y";
                    DISPID yDispid;
                    hr = varPos.pdispVal->GetIDsOfNames(IID_NULL, &yName, 1, LOCALE_USER_DEFAULT, &yDispid);
                    if (SUCCEEDED(hr)) {
                        CComVariant vY(1.2f + wave);
                        DISPID putid = DISPID_PROPERTYPUT;
                        DISPPARAMS dpPut = { &vY, &putid, 1, 1 };
                        varPos.pdispVal->Invoke(yDispid, IID_NULL, LOCALE_USER_DEFAULT,
                            DISPATCH_PROPERTYPUT, &dpPut, NULL, NULL, NULL);
                    }
                }
            }
        }

        Sleep(50);
        MSG msg;
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }
    Log("Spuck waved!");
}
