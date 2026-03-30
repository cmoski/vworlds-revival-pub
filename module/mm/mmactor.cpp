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

// Per-joint data: D3DRM frame + rest-pose matrix saved at InitializeActor time
struct JointData {
    LPDIRECT3DRMFRAME pFrame;
    D3DRMMATRIX4D restPose;  // the FrameTransformMatrix from the .x file
};

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
            CString propName;
            propName.Format("Joint_%s", szName);

            // Build rest-pose data from current D3DRM frame
            pChild->AddRef();
            JointData* pJD = new JointData;
            pJD->pFrame = pChild;
            memset(&pJD->restPose, 0, sizeof(D3DRMMATRIX4D));
            LPDIRECT3DRMFRAME pJDParent = NULL;
            pChild->GetParent(&pJDParent);
            D3DVECTOR restPos;
            pChild->GetPosition(pJDParent, &restPos);
            D3DVECTOR restDir, restUp;
            pChild->GetOrientation(pJDParent, &restDir, &restUp);
            if (pJDParent) pJDParent->Release();
            D3DVECTOR restRight;
            restRight.x = restUp.y * restDir.z - restUp.z * restDir.y;
            restRight.y = restUp.z * restDir.x - restUp.x * restDir.z;
            restRight.z = restUp.x * restDir.y - restUp.y * restDir.x;
            pJD->restPose[0][0] = restRight.x; pJD->restPose[0][1] = restRight.y; pJD->restPose[0][2] = restRight.z; pJD->restPose[0][3] = 0;
            pJD->restPose[1][0] = restUp.x;    pJD->restPose[1][1] = restUp.y;    pJD->restPose[1][2] = restUp.z;    pJD->restPose[1][3] = 0;
            pJD->restPose[2][0] = restDir.x;   pJD->restPose[2][1] = restDir.y;   pJD->restPose[2][2] = restDir.z;   pJD->restPose[2][3] = 0;
            pJD->restPose[3][0] = restPos.x;   pJD->restPose[3][1] = restPos.y;   pJD->restPose[3][2] = restPos.z;   pJD->restPose[3][3] = 1;

            // Remove existing joint property if present (stale after world reload)
            {
                CComVariant varExisting;
                if (SUCCEEDED(pThis->get_Property(CComBSTR(propName), &varExisting)))
                    pThis->RemoveProperty(CComBSTR(propName));
            }
            {
                // Create joint
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
                    pJoint->SetAppData((void*)pJD);

                    pThis->AddPropertyExt(CComBSTR(propName),
                        CComVariant((IDispatch*)(IJoint*)pJoint),
                        PSBIT_HIDDEN, PS_ALLACCESSPROPERTY,
                        VT_DISPATCH, IID_IJoint, NULL);

                    VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD,
                        "ActorInitialize: joint '%s' id=%d frame=%p\n", szName, jointID-1, pChild);
                }
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
        { METHOD_CLIENT, "PlayAllAnimations",  "ActorPlayAllAnimations",  PSBIT_NONE, PS_ALLEXECUTEMETHOD },
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
    VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD, "ActorInitialize: created %d joints\n", jointID - 1);

    // Report to OutputDebugString so it's visible in debugger/DbgView
    CString msg;
    msg.Format("ActorInitialize: created %d joints\n", jointID - 1);
    OutputDebugStringA((LPCSTR)msg);

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

    // Get the JointData from AppData
    void* pData = NULL;
    pJoint->GetAppData(&pData);
    if (!pData) return E_FAIL;

    JointData* pJD = (JointData*)pData;
    LPDIRECT3DRMFRAME pFrame2 = pJD->pFrame;

    // Apply rotation directly to the D3DRM frame (ZR axis)
    float cz = cosf((float)angle), sz = sinf((float)angle);
    D3DRMMATRIX4D mat;
    mat[0][0] = cz;  mat[0][1] = sz;  mat[0][2] = 0; mat[0][3] = 0;
    mat[1][0] = -sz;  mat[1][1] = cz;  mat[1][2] = 0; mat[1][3] = 0;
    mat[2][0] = 0;   mat[2][1] = 0;   mat[2][2] = 1; mat[2][3] = 0;
    mat[3][0] = pJD->restPose[3][0]; mat[3][1] = pJD->restPose[3][1];
    mat[3][2] = pJD->restPose[3][2]; mat[3][3] = 1;

    pFrame2->AddTransform(D3DRMCOMBINE_REPLACE, mat);

    return S_OK;
}

///////////////////////////////////////////////////////////////////////
// Apply XYZ rotation in degrees to a D3DRM frame

void CMultimediaExemplarObject::ApplyJointRotationXYZ(LPDIRECT3DRMFRAME pFrame, float xDeg, float yDeg, float zDeg,
                                                       void* pRestPoseRaw)
{
    if (!pFrame) return;

    D3DRMMATRIX4D* pRestPose = (D3DRMMATRIX4D*)pRestPoseRaw;

    const float DEG2RAD = 3.14159265f / 180.0f;
    float xr = xDeg * DEG2RAD, yr = yDeg * DEG2RAD, zr = zDeg * DEG2RAD;

    float cx = cosf(xr), sx = sinf(xr);
    float cy = cosf(yr), sy = sinf(yr);
    float cz = cosf(zr), sz = sinf(zr);

    // Delta rotation matrix (XYZ intrinsic = Rz*Ry*Rx in fixed frame)
    // Matches exporter's ToEulerAngles() XYZ decomposition
    D3DRMMATRIX4D delta;
    delta[0][0] = cy*cz;             delta[0][1] = cy*sz;             delta[0][2] = -sy;    delta[0][3] = 0;
    delta[1][0] = sx*sy*cz - cx*sz;  delta[1][1] = sx*sy*sz + cx*cz;  delta[1][2] = sx*cy;  delta[1][3] = 0;
    delta[2][0] = cx*sy*cz + sx*sz;  delta[2][1] = cx*sy*sz - sx*cz;  delta[2][2] = cx*cy;  delta[2][3] = 0;
    delta[3][0] = 0;                 delta[3][1] = 0;                 delta[3][2] = 0;       delta[3][3] = 1;

    // Use rest-pose position if available, otherwise read current position
    if (pRestPose)
    {
        D3DRMMATRIX4D* pRest = (D3DRMMATRIX4D*)pRestPose;
        delta[3][0] = (*pRest)[3][0];
        delta[3][1] = (*pRest)[3][1];
        delta[3][2] = (*pRest)[3][2];
    }
    else
    {
        D3DVECTOR pos;
        LPDIRECT3DRMFRAME pParent = NULL;
        pFrame->GetParent(&pParent);
        pFrame->GetPosition(pParent, &pos);
        delta[3][0] = pos.x; delta[3][1] = pos.y; delta[3][2] = pos.z;
        if (pParent) pParent->Release();
    }
    delta[3][3] = 1;

    pFrame->AddTransform(D3DRMCOMBINE_REPLACE, delta);
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

    // Fallback: try registry ContentPath
    if (strFullPath.IsEmpty()) {
        HKEY hKey = NULL;
        CString basePath;
        if (RegOpenKeyExA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\V-Worlds\\Paths",
                          0, KEY_READ | KEY_WOW64_32KEY, &hKey) == ERROR_SUCCESS) {
            char buf[MAX_PATH] = {0};
            DWORD bufSize = sizeof(buf);
            if (RegQueryValueExA(hKey, "ContentPath", NULL, NULL, (LPBYTE)buf, &bufSize) == ERROR_SUCCESS)
                basePath = buf;
            RegCloseKey(hKey);
        }
        if (!basePath.IsEmpty()) {
            if (basePath.Right(1) != "\\") basePath += "\\";
            strFullPath = basePath + strFile;
        }
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
    int parentIndex[64];
    int numBones = 0;
    memset(parentIndex, -1, sizeof(parentIndex));

    while (animFile.ReadString(line)) {
        line.TrimLeft(); line.TrimRight();
        if (line.IsEmpty() || line[0] == '#') {
            if (line.Find("fps:") >= 0) sscanf((LPCSTR)line + line.Find("fps:") + 4, "%d", &fps);
            if (line.Find("frames:") >= 0) sscanf((LPCSTR)line + line.Find("frames:") + 7, "%d", &numFrames);
            if (line.Find("parents:") >= 0) {
                const char* p = (LPCSTR)line + line.Find("parents:") + 8;
                while (*p && numBones < 64) {
                    while (*p == ' ') p++;
                    if (*p == 0 || *p == '\r' || *p == '\n') break;
                    parentIndex[numBones] = atoi(p);
                    numBones++;
                    while (*p && *p != ' ') p++;
                }
                CString dbg;
                dbg.Format("PlayAnimation: parsed %d parent indices\n", numBones);
                OutputDebugStringA((LPCSTR)dbg);
            }
            continue;
        }
        break; // first data line
    }

    if (fps <= 0) fps = 30;
    int sleepMs = 1000 / fps;

    // Fallback: if no parents header, try to infer from bone count
    // TODO: remove hardcoded fallback once all .anim files have # parents: header
    if (numBones == 0) {
        // Count bones by scanning for Joint_BoneN properties
        for (int b = 0; b < 64; b++) {
            CString pn; pn.Format("Joint_Bone%d", b);
            CComVariant vt;
            if (SUCCEEDED(pThis->get_Property(CComBSTR(pn), &vt)) && vt.vt == VT_DISPATCH)
                numBones = b + 1;
            else
                break;
        }
        // Hardcoded drudge (02000034) parent indices as fallback
        if (numBones == 17) {
            int dp[] = {13,0,1,2,3,4,5,6,13,8,9,13,11,12,1,10,13};
            memcpy(parentIndex, dp, sizeof(dp));
            OutputDebugStringA("PlayAnimation: using hardcoded 17-bone parent data\n");
        }
    }

    VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD, "PlayAnimation: %d frames at %d fps from '%s'\n", numFrames, fps, (LPCSTR)strFullPath);

    // Collect JointData pointers indexed by bone number for position chaining
    JointData* boneData[64] = {0};
    D3DRMMATRIX4D boneRotation[64]; // current frame's rotation matrix per bone
    for (int b = 0; b < numBones && b < 64; b++) {
        CString propName;
        propName.Format("Joint_Bone%d", b);
        CComVariant varJoint;
        hr = pThis->get_Property(CComBSTR(propName), &varJoint);
        if (SUCCEEDED(hr) && varJoint.vt == VT_DISPATCH && varJoint.pdispVal) {
            CComPtr<IJoint> pJoint;
            varJoint.pdispVal->QueryInterface(IID_IJoint, (void**)&pJoint);
            if (pJoint) {
                void* pData = NULL;
                pJoint->GetAppData(&pData);
                if (pData) boneData[b] = (JointData*)pData;
            }
        }
        // Initialize rotation to identity
        memset(&boneRotation[b], 0, sizeof(D3DRMMATRIX4D));
        boneRotation[b][0][0] = boneRotation[b][1][1] = boneRotation[b][2][2] = boneRotation[b][3][3] = 1;
    }

    // Play frames
    int totalFramesPlayed = 0;
    do {
        if (line.IsEmpty() || line[0] == '#') continue;

        // Parse: "framenum: JointName xr yr zr JointName xr yr zr ..."
        int frameNum = 0;
        int jointsThisFrame = 0;
        int jointsMissed = 0;
        bool hasDirectPos = false;
        char* pBuf = line.GetBuffer(4096);
        int pos = 0;
        sscanf(pBuf, "%d: %n", &frameNum, &pos);

        while (pBuf[pos]) {
            char jointName[64] = {0};
            float xr = 0, yr = 0, zr = 0;
            float px = 0, py = 0, pz = 0;
            int consumed = 0;
            // Try 6-value format first (deltaRot + position), fall back to 3-value (rotation only)
            int nFields = sscanf(&pBuf[pos], "%s %f %f %f %f %f %f%n", jointName, &xr, &yr, &zr, &px, &py, &pz, &consumed);
            if (nFields < 7) {
                consumed = 0;
                px = py = pz = -999.0f; // sentinel: no position data
                if (sscanf(&pBuf[pos], "%s %f %f %f%n", jointName, &xr, &yr, &zr, &consumed) < 4)
                    break;
                if (totalFramesPlayed == 0 && jointsThisFrame == 0) {
                    CString dbg; dbg.Format("PlayAnimation: 6-val sscanf got %d fields, falling back to 3-val\n", nFields);
                    OutputDebugStringA((LPCSTR)dbg);
                }
            } else {
                if (totalFramesPlayed == 0 && jointsThisFrame == 0) {
                    CString dbg; dbg.Format("PlayAnimation: 6-val format OK (px=%.3f py=%.3f pz=%.3f)\n", px, py, pz);
                    OutputDebugStringA((LPCSTR)dbg);
                }
            }
            pos += consumed;
            while (pBuf[pos] == ' ') pos++;

            // Get bone index from name (e.g., "Bone2" -> 2)
            int boneIdx = -1;
            if (strncmp(jointName, "Bone", 4) == 0)
                boneIdx = atoi(jointName + 4);

            // Apply rotation to D3DRM frame
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
                    if (pData) {
                        JointData* pJD = (JointData*)pData;
                        ApplyJointRotationXYZ(pJD->pFrame, xr, yr, zr, &pJD->restPose);
                        jointsThisFrame++;

                        // If position data included (6-value format), set it directly
                        // Position is model-space, so set relative to parent frame (Root)
                        if (px > -998.0f) {
                            LPDIRECT3DRMFRAME pBoneParent = NULL;
                            pJD->pFrame->GetParent(&pBoneParent);
                            pJD->pFrame->SetPosition(pBoneParent, px, py, pz);
                            if (pBoneParent) pBoneParent->Release();
                            hasDirectPos = true;
                        }
                        // Save rotation matrix for position chaining (fallback for 3-value format)
                        else if (boneIdx >= 0 && boneIdx < 64) {
                            const float DEG2RAD = 3.14159265f / 180.0f;
                            float ax = xr*DEG2RAD, ay = yr*DEG2RAD, az = zr*DEG2RAD;
                            float cx = cosf(ax), sx = sinf(ax);
                            float cy = cosf(ay), sy = sinf(ay);
                            float cz = cosf(az), sz = sinf(az);
                            boneRotation[boneIdx][0][0] = cy*cz;             boneRotation[boneIdx][0][1] = cy*sz;             boneRotation[boneIdx][0][2] = -sy;
                            boneRotation[boneIdx][1][0] = sx*sy*cz - cx*sz;  boneRotation[boneIdx][1][1] = sx*sy*sz + cx*cz;  boneRotation[boneIdx][1][2] = sx*cy;
                            boneRotation[boneIdx][2][0] = cx*sy*cz + sx*sz;  boneRotation[boneIdx][2][1] = cx*sy*sz - sx*cz;  boneRotation[boneIdx][2][2] = cx*cy;
                        }
                    }
                }
            } else {
                jointsMissed++;
                if (totalFramesPlayed == 0) {
                    CString dbg;
                    dbg.Format("PlayAnimation: joint '%s' NOT FOUND\n", jointName);
                    OutputDebugStringA((LPCSTR)dbg);
                }
            }
        }
        line.ReleaseBuffer();

        // Position chaining: only needed for 3-value format (no embedded positions)
        if (numBones > 0 && !hasDirectPos) {
            float bonePos[64][3];
            bool resolved[64] = {false};

            // Initialize root bones (parent == self) to their rest position
            for (int b = 0; b < numBones; b++) {
                if (!boneData[b]) continue;
                bonePos[b][0] = boneData[b]->restPose[3][0];
                bonePos[b][1] = boneData[b]->restPose[3][1];
                bonePos[b][2] = boneData[b]->restPose[3][2];
                if (parentIndex[b] == b || parentIndex[b] < 0 || parentIndex[b] >= numBones)
                    resolved[b] = true; // root — keep rest position
            }

            // Resolve children in dependency order (parent must be resolved first)
            for (int pass = 0; pass < numBones; pass++) {
                for (int b = 0; b < numBones; b++) {
                    if (resolved[b] || !boneData[b]) continue;
                    int p = parentIndex[b];
                    if (!resolved[p] || !boneData[p]) continue;

                    // Offset = child_absolute_rest - parent_absolute_rest
                    float ox = boneData[b]->restPose[3][0] - boneData[p]->restPose[3][0];
                    float oy = boneData[b]->restPose[3][1] - boneData[p]->restPose[3][1];
                    float oz = boneData[b]->restPose[3][2] - boneData[p]->restPose[3][2];

                    // Rotate offset by parent's absolute rotation (row-vector * matrix)
                    float rx = ox * boneRotation[p][0][0] + oy * boneRotation[p][1][0] + oz * boneRotation[p][2][0];
                    float ry = ox * boneRotation[p][0][1] + oy * boneRotation[p][1][1] + oz * boneRotation[p][2][1];
                    float rz = ox * boneRotation[p][0][2] + oy * boneRotation[p][1][2] + oz * boneRotation[p][2][2];

                    bonePos[b][0] = bonePos[p][0] + rx;
                    bonePos[b][1] = bonePos[p][1] + ry;
                    bonePos[b][2] = bonePos[p][2] + rz;
                    resolved[b] = true;
                }
            }

            // Apply computed positions to D3DRM frames (skip roots)
            for (int b = 0; b < numBones; b++) {
                if (!boneData[b] || !resolved[b]) continue;
                int p = parentIndex[b];
                if (p == b || p < 0 || p >= numBones) continue; // skip root
                LPDIRECT3DRMFRAME pBoneFrame = boneData[b]->pFrame;
                pBoneFrame->SetPosition(NULL, bonePos[b][0], bonePos[b][1], bonePos[b][2]);
            }
        }

        if (totalFramesPlayed == 0) {
            CString dbg;
            dbg.Format("PlayAnimation frame %d: %d joints applied, %d missed, %d bones chained\n", frameNum, jointsThisFrame, jointsMissed, numBones);
            OutputDebugStringA((LPCSTR)dbg);
        }
        totalFramesPlayed++;

        // Wait for next frame
        Sleep(sleepMs);
        MSG msg;
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

    } while (animFile.ReadString(line));

    animFile.Close();

    // Reset all bones to rest pose (identity rotation + rest position)
    for (int b = 0; b < numBones && b < 64; b++) {
        if (!boneData[b]) continue;
        LPDIRECT3DRMFRAME pBoneFrame = boneData[b]->pFrame;
        // Identity rotation + rest position
        D3DRMMATRIX4D identity;
        memset(&identity, 0, sizeof(D3DRMMATRIX4D));
        identity[0][0] = identity[1][1] = identity[2][2] = identity[3][3] = 1;
        identity[3][0] = boneData[b]->restPose[3][0];
        identity[3][1] = boneData[b]->restPose[3][1];
        identity[3][2] = boneData[b]->restPose[3][2];
        pBoneFrame->AddTransform(D3DRMCOMBINE_REPLACE, identity);
    }

    VWTRACE(m_pWorld, "VWMMTHING", VWT_METHOD, "PlayAnimation: done, %d frames played\n", totalFramesPlayed);
    return S_OK;
}

///////////////////////////////////////////////////////////////////////
// PlayAllAnimations — find and play all .anim files matching the model
// VBScript: actor.PlayAllAnimations

STDMETHODIMP CMultimediaExemplarObject::ActorPlayAllAnimations()
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState())

    HRESULT hr = S_OK;
    CComPtr<IThing> pThis;
    if (FAILED(hr = m_pWorld->get_This(&pThis)))
        return hr;

    // Get the geometry name to find matching .anim files
    CComBSTR bstrGeom;
    hr = pThis->get_String(CComBSTR("GeometryName"), &bstrGeom);
    if (FAILED(hr) || !bstrGeom) return E_FAIL;

    // Extract the setup ID from the geometry path (e.g., "worlds\ACMonsters\02000034.x" -> "02000034")
    CString geomPath(bstrGeom);
    int lastSlash = geomPath.ReverseFind('\\');
    if (lastSlash < 0) lastSlash = geomPath.ReverseFind('/');
    CString fileName = (lastSlash >= 0) ? geomPath.Mid(lastSlash + 1) : geomPath;
    int dot = fileName.ReverseFind('.');
    CString setupID = (dot >= 0) ? fileName.Left(dot) : fileName;

    // Build the directory path from registry ContentPath
    CString dirPath;
    {
        HKEY hKey = NULL;
        if (RegOpenKeyExA(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\V-Worlds\\Paths",
                          0, KEY_READ | KEY_WOW64_32KEY, &hKey) == ERROR_SUCCESS) {
            char buf[MAX_PATH] = {0};
            DWORD bufSize = sizeof(buf);
            if (RegQueryValueExA(hKey, "ContentPath", NULL, NULL, (LPBYTE)buf, &bufSize) == ERROR_SUCCESS)
                dirPath = buf;
            RegCloseKey(hKey);
        }
        if (!dirPath.IsEmpty() && dirPath.Right(1) != "\\") dirPath += "\\";
    }
    CString geomDir = geomPath.Left(lastSlash >= 0 ? lastSlash : 0);
    dirPath += geomDir;

    // Find all matching .anim files
    CString searchPattern = dirPath + "\\" + setupID + "_*.anim";
    WIN32_FIND_DATAA fd;
    HANDLE hFind = FindFirstFileA((LPCSTR)searchPattern, &fd);
    if (hFind == INVALID_HANDLE_VALUE) {
        OutputDebugStringA("PlayAllAnimations: no .anim files found\n");
        return E_FAIL;
    }

    int animCount = 0;
    do {
        CString animName(fd.cFileName);
        // Strip setupID_ prefix and .anim suffix for display
        CString displayName = animName.Mid(setupID.GetLength() + 1);
        displayName = displayName.Left(displayName.GetLength() - 5); // remove .anim

        CString msg;
        msg.Format("=== Playing: %s ===\n", (LPCSTR)displayName);
        OutputDebugStringA((LPCSTR)msg);

        // Build the relative path for PlayAnimation
        CString relPath = geomDir + "\\" + animName;
        ActorPlayAnimation(CComBSTR(relPath));
        animCount++;

        // Brief pause between animations
        Sleep(500);
        MSG winMsg;
        while (PeekMessage(&winMsg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&winMsg);
            DispatchMessage(&winMsg);
        }
    } while (FindNextFileA(hFind, &fd));

    FindClose(hFind);

    CString msg;
    msg.Format("PlayAllAnimations: played %d animations\n", animCount);
    OutputDebugStringA((LPCSTR)msg);
    return S_OK;
}
