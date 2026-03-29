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
        { METHOD_CLIENT, "PlayAnimation",      "ActorPlayAnimation",      PSBIT_NONE, PS_ALLEXECUTEMETHOD },
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

///////////////////////////////////////////////////////////////////////
// Apply XYZ rotation in degrees to a D3DRM frame

void CMultimediaExemplarObject::ApplyJointRotationXYZ(LPDIRECT3DRMFRAME pFrame, float xDeg, float yDeg, float zDeg)
{
    if (!pFrame) return;

    const float DEG2RAD = 3.14159265f / 180.0f;
    float xr = xDeg * DEG2RAD, yr = yDeg * DEG2RAD, zr = zDeg * DEG2RAD;

    float cx = cosf(xr), sx = sinf(xr);
    float cy = cosf(yr), sy = sinf(yr);
    float cz = cosf(zr), sz = sinf(zr);

    D3DRMMATRIX4D mat;
    mat[0][0] = cy*cz;             mat[0][1] = cy*sz;             mat[0][2] = -sy;    mat[0][3] = 0;
    mat[1][0] = sx*sy*cz - cx*sz;  mat[1][1] = sx*sy*sz + cx*cz;  mat[1][2] = sx*cy;  mat[1][3] = 0;
    mat[2][0] = cx*sy*cz + sx*sz;  mat[2][1] = cx*sy*sz - sx*cz;  mat[2][2] = cx*cy;  mat[2][3] = 0;

    D3DVECTOR pos;
    LPDIRECT3DRMFRAME pParent = NULL;
    pFrame->GetParent(&pParent);
    pFrame->GetPosition(pParent, &pos);
    mat[3][0] = pos.x; mat[3][1] = pos.y; mat[3][2] = pos.z; mat[3][3] = 1;
    if (pParent) pParent->Release();

    pFrame->AddTransform(D3DRMCOMBINE_REPLACE, mat);
}

///////////////////////////////////////////////////////////////////////
// PlayAnimation — reads .anim file and animates joints
// Format: "framenum: JointName xr yr zr JointName xr yr zr ..."
// VBScript: actor.PlayAnimation "worlds\ACMonsters\02000034_AttackHigh1.anim"

STDMETHODIMP CMultimediaExemplarObject::ActorPlayAnimation(BSTR bstrAnimFile)
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState())

    HRESULT hr = S_OK;
    CComPtr<IThing> pThis;

    if (FAILED(hr = m_pWorld->get_This(&pThis)))
        return hr;

    // Resolve the file path via InetFile
    CString strFile(bstrAnimFile);
    CComPtr<IUnknown> pInetUnk;
    hr = m_pWorld->get_Tool(CComBSTR("Inetfile"), &pInetUnk);

    CString strFullPath;
    if (SUCCEEDED(hr) && pInetUnk) {
        CComPtr<IDispatch> pInetDisp;
        pInetUnk->QueryInterface(IID_IDispatch, (void**)&pInetDisp);
        if (pInetDisp) {
            OLECHAR* getName = L"GetFileLocalPath";
            DISPID dispid;
            hr = pInetDisp->GetIDsOfNames(IID_NULL, &getName, 1, LOCALE_USER_DEFAULT, &dispid);
            if (SUCCEEDED(hr)) {
                CComVariant vFile(bstrAnimFile);
                DISPPARAMS dp = { &vFile, NULL, 1, 0 };
                CComVariant vPath;
                hr = pInetDisp->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dp, &vPath, NULL, NULL);
                if (SUCCEEDED(hr) && vPath.vt == VT_BSTR)
                    strFullPath = CString(vPath.bstrVal);
            }
        }
    }

    // Fallback: try direct path
    if (strFullPath.IsEmpty()) {
        CString basePath = "F:\\VWorlds\\Microsoft Virtual Worlds\\Local Content\\";
        strFullPath = basePath + strFile;
    }

    // Open and parse the .anim file
    CStdioFile animFile;
    if (!animFile.Open(strFullPath, CFile::modeRead | CFile::typeText)) {
        VWTRACE(m_pWorld, "VWMMTHING", VWT_ERROR, "PlayAnimation: can't open '%s'\n", (LPCSTR)strFullPath);
        return E_FAIL;
    }

    // Parse header
    CString line;
    int fps = 30;
    int numFrames = 0;
    while (animFile.ReadString(line)) {
        line.TrimLeft(); line.TrimRight();
        if (line.IsEmpty() || line[0] == '#') {
            if (line.Find("fps:") >= 0) sscanf((LPCSTR)line + line.Find("fps:") + 4, "%d", &fps);
            if (line.Find("frames:") >= 0) sscanf((LPCSTR)line + line.Find("frames:") + 7, "%d", &numFrames);
            continue;
        }
        break; // first data line
    }

    if (fps <= 0) fps = 30;
    int sleepMs = 1000 / fps;

    VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD, "PlayAnimation: %d frames at %d fps from '%s'\n", numFrames, fps, (LPCSTR)strFullPath);

    // Play frames
    do {
        if (line.IsEmpty() || line[0] == '#') continue;

        // Parse: "framenum: JointName xr yr zr JointName xr yr zr ..."
        int frameNum = 0;
        char* pBuf = line.GetBuffer(4096);
        int pos = 0;
        sscanf(pBuf, "%d: %n", &frameNum, &pos);

        while (pBuf[pos]) {
            char jointName[64] = {0};
            float xr = 0, yr = 0, zr = 0;
            int consumed = 0;
            if (sscanf(&pBuf[pos], "%s %f %f %f%n", jointName, &xr, &yr, &zr, &consumed) < 4)
                break;
            pos += consumed;
            while (pBuf[pos] == ' ') pos++;

            // Look up the joint frame
            CString propName;
            propName.Format("Joint_%s", jointName);
            CComVariant varJoint;
            hr = pThis->get_Property(CComBSTR(propName), &varJoint);
            if (SUCCEEDED(hr) && varJoint.vt == VT_DISPATCH && varJoint.pdispVal) {
                CComPtr<IJoint> pJoint;
                varJoint.pdispVal->QueryInterface(IID_IJoint, (void**)&pJoint);
                if (pJoint) {
                    void* pData = NULL;
                    pJoint->GetAppData(&pData);
                    if (pData)
                        ApplyJointRotationXYZ((LPDIRECT3DRMFRAME)pData, xr, yr, zr);
                }
            }
        }
        line.ReleaseBuffer();

        // Wait for next frame
        Sleep(sleepMs);
        MSG msg;
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

    } while (animFile.ReadString(line));

    animFile.Close();
    VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD, "PlayAnimation: done\n");
    return S_OK;
}
