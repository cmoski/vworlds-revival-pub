// mmactor.cpp : Actor exemplar — articulated bone-animated objects
// Uses CJoint + D3DRM frame hierarchy for skeletal animation
// Created 2026 to bring the 1999 bone system to life as a first-class feature

#include "stdafx.h"
#include <d3drmwin.h>
#include <vwmmex.h>
#include "vwutils.h"
#include "vwmmexo.h"
#include "jointobj.h"
#include "charobj.h"
#include "vwgeoma.h"
#include <syshelp.h>

extern HRESULT _GetFrameHelper(IThing *pThing, IVWFrame **ppvwf);

///////////////////////////////////////////////////////////////////////
// Install Actor Exemplar

// Recursive helper: walk D3DRM frame tree and create joints for named frames
void CMultimediaExemplarObject::CreateJointsFromFrame(IThing* pThis, LPDIRECT3DRMFRAME pParentFrame, int& jointID)
{
    LPDIRECT3DRMFRAMEARRAY pChildren = NULL;
    pParentFrame->GetChildren(&pChildren);
    if (!pChildren) return;

    DWORD count = pChildren->GetSize();
    VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD,
        "CreateJointsFromFrame: parent=%p children=%d\n", pParentFrame, count);

    for (DWORD i = 0; i < count; i++)
    {
        LPDIRECT3DRMFRAME pChild = NULL;
        pChildren->GetElement(i, &pChild);
        if (!pChild) continue;

        char szName[128] = {0};
        DWORD nameSize = sizeof(szName);
        pChild->GetName(&nameSize, szName);

        VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD,
            "CreateJointsFromFrame: child %d name='%s'\n", i, szName);

        if (szName[0] != '\0' && _stricmp(szName, "Root") != 0)
        {
            // Create a CJoint for this named frame
            CComPtr<IJoint> pJoint;
            CLSID clsid;
            CLSIDFromProgID(L"VWSYSTEM.Joint.1", &clsid);
            HRESULT hr = CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER,
                IID_IJoint, (void**)&pJoint);

            if (SUCCEEDED(hr) && pJoint)
            {
                pJoint->SetID(jointID++);
                pJoint->AddDOF(8);  // XR
                pJoint->AddDOF(16); // YR
                pJoint->AddDOF(32); // ZR

                pChild->AddRef();
                pJoint->SetAppData((void*)pChild);

                CString propName;
                propName.Format("Joint_%s", szName);
                pThis->AddPropertyExt(CComBSTR(propName),
                    CComVariant((IDispatch*)(IJoint*)pJoint),
                    PSBIT_HIDDEN, PS_ALLACCESSPROPERTY,
                    VT_DISPATCH, IID_IJoint, NULL);

                VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD,
                    "ActorInitialize: joint '%s' id=%d frame=%p\n", szName, jointID-1, pChild);
            }
        }

        // Recurse into children
        CreateJointsFromFrame(pThis, pChild, jointID);
        pChild->Release();
    }
    pChildren->Release();
}

HRESULT CMultimediaExemplarObject::InstallActorExemplar(IModule* pModule)
{
    HRESULT hr = S_OK;
    IThing *pActorExemplar = NULL;

    CMethodInfo rgMethod[] =
    {
        { METHOD_CLIENT, "SetJointRotation",   "ActorSetJointRotation",   PSBIT_NONE, PS_ALLEXECUTEMETHOD },
        { METHOD_CLIENT, "InitializeActor",    "ActorInitialize",         PSBIT_NONE, PS_ALLEXECUTEMETHOD },
    };
    int cMethod = sizeof(rgMethod)/sizeof(rgMethod[0]);
    int iMethod;
    CComBSTR bstrName, bstrNameInternal;

    // Create the Actor exemplar derived from Artifact
    if (FAILED(hr = m_pWorld->CreateExemplarEx(CComBSTR("Actor Exemplar"),
                                                CComBSTR("Actor"),
                                                CComVariant(CComBSTR("Artifact")), &pActorExemplar)))
        goto ERROR_ENCOUNTERED;

    if (FAILED(hr = pActorExemplar->put_Description(CComBSTR("Articulated bone-animated object"))))
        goto ERROR_ENCOUNTERED;

    // Register methods
    for (iMethod = 0; iMethod < cMethod; iMethod++)
    {
        bstrName = rgMethod[iMethod].pszName;
        bstrNameInternal = rgMethod[iMethod].pszNameInternal ? rgMethod[iMethod].pszNameInternal : bstrName;
        if (FAILED(hr = pActorExemplar->CreateAndAddMethodExt(
            rgMethod[iMethod].lFlags, pModule,
            bstrNameInternal, bstrName,
            rgMethod[iMethod].psbits, rgMethod[iMethod].permissions)))
            goto ERROR_ENCOUNTERED;
    }

    SAFERELEASE(pActorExemplar);
    return S_OK;

ERROR_ENCOUNTERED:
    VWTRACE(m_pWorld, "VWMMTHING", VWT_ERROR, "InstallActorExemplar: Error %x\n", hr);
    SAFERELEASE(pActorExemplar);
    return hr;
}

///////////////////////////////////////////////////////////////////////
// ActorInitialize — called after geometry loads, walks frame tree
// and creates CJoint hierarchy. Call from VBScript:
//   actor.InitializeActor

STDMETHODIMP CMultimediaExemplarObject::ActorInitialize()
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState())

    HRESULT hr = S_OK;
    CComPtr<IThing> pThis;
    CComPtr<IVWFrame> pFrame;

    if (FAILED(hr = m_pWorld->get_This(&pThis)))
        return hr;

    // Get the geometry frame
    hr = _GetFrameHelper(pThis, &pFrame);
    if (FAILED(hr) || !pFrame)
    {
        VWTRACE(m_pWorld, "VWMMTHING", VWT_ERROR, "ActorInitialize: no geometry frame (load geometry first)\n");
        return E_FAIL;
    }

    // Get the D3DRM frame to walk children
    IDirect3DRMFrame *pd3drmf = NULL;
    hr = pFrame->get_Frame3D(&pd3drmf);
    if (FAILED(hr) || !pd3drmf)
    {
        VWTRACE(m_pWorld, "VWMMTHING", VWT_ERROR, "ActorInitialize: no D3DRM frame\n");
        return E_FAIL;
    }

    // Recursively walk frame hierarchy and create joints for all named frames
    int jointID = 1;
    CreateJointsFromFrame(pThis, pd3drmf, jointID);

    SAFERELEASE(pd3drmf);
    VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD, "ActorInitialize: done\n");
    return S_OK;
}

///////////////////////////////////////////////////////////////////////
// SetJointRotation — rotate a named joint
// VBScript: actor.SetJointRotation "RightArm", 1.5

STDMETHODIMP CMultimediaExemplarObject::ActorSetJointRotation(BSTR bstrJointName, double angle)
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState())

    HRESULT hr = S_OK;
    CComPtr<IThing> pThis;

    if (FAILED(hr = m_pWorld->get_This(&pThis)))
        return hr;

    // Look up the joint property
    CString propName;
    propName.Format("Joint_%s", CString(bstrJointName));

    CComVariant varJoint;
    hr = pThis->get_Property(CComBSTR(propName), &varJoint);
    if (FAILED(hr) || varJoint.vt != VT_DISPATCH || !varJoint.pdispVal)
    {
        VWTRACE(m_pWorld, "VWMMTHING", VWT_ERROR,
            "ActorSetJointRotation: joint '%s' not found\n", CString(bstrJointName));
        return VWOBJECT_E_PROPERTYNOTEXIST;
    }

    // QI for IJoint
    CComPtr<IJoint> pJoint;
    hr = varJoint.pdispVal->QueryInterface(IID_IJoint, (void**)&pJoint);
    if (FAILED(hr) || !pJoint)
        return E_FAIL;

    // Get the D3DRM frame from AppData
    void* pData = NULL;
    pJoint->GetAppData(&pData);
    if (!pData) return E_FAIL;

    LPDIRECT3DRMFRAME pFrame2 = (LPDIRECT3DRMFRAME)pData;

    // Apply rotation directly to the D3DRM frame (ZR axis)
    float cz = cosf((float)angle), sz = sinf((float)angle);
    D3DRMMATRIX4D mat;
    mat[0][0] = cz;  mat[0][1] = sz;  mat[0][2] = 0; mat[0][3] = 0;
    mat[1][0] = -sz;  mat[1][1] = cz;  mat[1][2] = 0; mat[1][3] = 0;
    mat[2][0] = 0;   mat[2][1] = 0;   mat[2][2] = 1; mat[2][3] = 0;

    // Preserve position
    D3DVECTOR pos;
    LPDIRECT3DRMFRAME pParent = NULL;
    pFrame2->GetParent(&pParent);
    pFrame2->GetPosition(pParent, &pos);
    mat[3][0] = pos.x; mat[3][1] = pos.y; mat[3][2] = pos.z; mat[3][3] = 1;
    if (pParent) pParent->Release();

    pFrame2->AddTransform(D3DRMCOMBINE_REPLACE, mat);

    return S_OK;
}
