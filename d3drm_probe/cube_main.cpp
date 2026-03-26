#include <windows.h>
#include <objbase.h>

#include <d3drmwin.h>

#include <cmath>
#include <cstdio>

namespace {

constexpr int kClientWidth = 640;
constexpr int kClientHeight = 480;
constexpr UINT_PTR kTimerId = 1;
constexpr D3DVALUE kPi = static_cast<D3DVALUE>(3.1415926535f);

HWND g_hwnd = nullptr;
LPDIRECTDRAW g_ddraw = nullptr;
LPDIRECTDRAWCLIPPER g_clipper = nullptr;
LPDIRECT3DRM g_d3drm = nullptr;
LPDIRECT3DRMDEVICE g_device = nullptr;
LPDIRECT3DRMWINDEVICE g_win_device = nullptr;
LPDIRECT3DRMVIEWPORT g_viewport = nullptr;
LPDIRECT3DRMFRAME g_scene = nullptr;
LPDIRECT3DRMFRAME g_camera = nullptr;
LPDIRECT3DRMFRAME g_light_frame = nullptr;
LPDIRECT3DRMFRAME g_cube_frame = nullptr;
LPDIRECT3DRMMESHBUILDER g_cube_mesh = nullptr;
LPDIRECT3DRMLIGHT g_ambient_light = nullptr;
LPDIRECT3DRMLIGHT g_directional_light = nullptr;

void SafeRelease(IUnknown*& ptr)
{
    if (ptr)
    {
        ptr->Release();
        ptr = nullptr;
    }
}

template <typename T>
void SafeRelease(T*& ptr)
{
    if (ptr)
    {
        ptr->Release();
        ptr = nullptr;
    }
}

void LogHr(const char* label, HRESULT hr)
{
    std::printf("%s: hr=0x%08lX\n", label, static_cast<unsigned long>(hr));
}

HRESULT AddFace(
    LPDIRECT3DRM mesh_api,
    LPDIRECT3DRMMESHBUILDER mesh,
    const D3DVECTOR& a,
    const D3DVECTOR& b,
    const D3DVECTOR& c,
    const D3DVECTOR& d,
    D3DVALUE r,
    D3DVALUE g,
    D3DVALUE bcol)
{
    LPDIRECT3DRMFACE face = nullptr;
    HRESULT hr = mesh_api->CreateFace(&face);
    if (FAILED(hr))
    {
        return hr;
    }

    hr = face->AddVertex(a.x, a.y, a.z);
    if (SUCCEEDED(hr)) hr = face->AddVertex(b.x, b.y, b.z);
    if (SUCCEEDED(hr)) hr = face->AddVertex(c.x, c.y, c.z);
    if (SUCCEEDED(hr)) hr = face->AddVertex(d.x, d.y, d.z);
    if (SUCCEEDED(hr)) hr = face->SetColorRGB(r, g, bcol);
    if (SUCCEEDED(hr)) hr = mesh->AddFace(face);

    SafeRelease(face);
    return hr;
}

HRESULT BuildCubeMesh()
{
    HRESULT hr = g_d3drm->CreateMeshBuilder(&g_cube_mesh);
    if (FAILED(hr))
    {
        return hr;
    }

    const D3DVECTOR p000{-1.0f, -1.0f, -1.0f};
    const D3DVECTOR p001{-1.0f, -1.0f,  1.0f};
    const D3DVECTOR p010{-1.0f,  1.0f, -1.0f};
    const D3DVECTOR p011{-1.0f,  1.0f,  1.0f};
    const D3DVECTOR p100{ 1.0f, -1.0f, -1.0f};
    const D3DVECTOR p101{ 1.0f, -1.0f,  1.0f};
    const D3DVECTOR p110{ 1.0f,  1.0f, -1.0f};
    const D3DVECTOR p111{ 1.0f,  1.0f,  1.0f};

    hr = AddFace(g_d3drm, g_cube_mesh, p001, p101, p111, p011, 0.90f, 0.20f, 0.20f);
    if (SUCCEEDED(hr)) hr = AddFace(g_d3drm, g_cube_mesh, p100, p000, p010, p110, 0.20f, 0.90f, 0.20f);
    if (SUCCEEDED(hr)) hr = AddFace(g_d3drm, g_cube_mesh, p000, p001, p011, p010, 0.20f, 0.20f, 0.90f);
    if (SUCCEEDED(hr)) hr = AddFace(g_d3drm, g_cube_mesh, p101, p100, p110, p111, 0.90f, 0.90f, 0.20f);
    if (SUCCEEDED(hr)) hr = AddFace(g_d3drm, g_cube_mesh, p010, p011, p111, p110, 0.20f, 0.90f, 0.90f);
    if (SUCCEEDED(hr)) hr = AddFace(g_d3drm, g_cube_mesh, p000, p100, p101, p001, 0.90f, 0.20f, 0.90f);

    return hr;
}

HRESULT InitScene(HWND hwnd)
{
    HRESULT hr = Direct3DRMCreate(&g_d3drm);
    if (FAILED(hr)) return hr;

    hr = DirectDrawCreate(nullptr, &g_ddraw, nullptr);
    if (FAILED(hr)) return hr;

    hr = g_ddraw->SetCooperativeLevel(hwnd, DDSCL_NORMAL);
    if (FAILED(hr)) return hr;

    hr = DirectDrawCreateClipper(0, &g_clipper, nullptr);
    if (FAILED(hr)) return hr;

    hr = g_clipper->SetHWnd(0, hwnd);
    if (FAILED(hr)) return hr;

    hr = g_d3drm->CreateDeviceFromClipper(g_clipper, nullptr, kClientWidth, kClientHeight, &g_device);
    if (FAILED(hr)) return hr;

    hr = g_device->QueryInterface(IID_IDirect3DRMWinDevice, reinterpret_cast<void**>(&g_win_device));
    if (FAILED(hr)) return hr;

    hr = g_d3drm->CreateFrame(nullptr, &g_scene);
    if (FAILED(hr)) return hr;

    hr = g_d3drm->CreateFrame(g_scene, &g_camera);
    if (FAILED(hr)) return hr;

    hr = g_d3drm->CreateFrame(g_scene, &g_light_frame);
    if (FAILED(hr)) return hr;

    hr = g_d3drm->CreateFrame(g_scene, &g_cube_frame);
    if (FAILED(hr)) return hr;

    hr = g_d3drm->CreateLightRGB(D3DRMLIGHT_AMBIENT, 0.35f, 0.35f, 0.35f, &g_ambient_light);
    if (FAILED(hr)) return hr;

    hr = g_d3drm->CreateLightRGB(D3DRMLIGHT_DIRECTIONAL, 0.80f, 0.80f, 0.80f, &g_directional_light);
    if (FAILED(hr)) return hr;

    hr = g_scene->AddLight(g_ambient_light);
    if (FAILED(hr)) return hr;

    hr = g_light_frame->AddLight(g_directional_light);
    if (FAILED(hr)) return hr;

    hr = BuildCubeMesh();
    if (FAILED(hr)) return hr;

    hr = g_cube_frame->AddVisual(g_cube_mesh);
    if (FAILED(hr)) return hr;

    g_scene->SetSceneBackgroundRGB(0.08f, 0.08f, 0.16f);
    g_cube_frame->SetPosition(g_scene, 0.0f, 0.0f, 0.0f);
    g_camera->SetPosition(g_scene, 0.0f, 0.0f, -8.0f);
    g_camera->LookAt(g_cube_frame, g_scene, D3DRMCONSTRAIN_Z);
    g_light_frame->SetPosition(g_scene, -2.0f, 3.0f, -4.0f);
    g_light_frame->LookAt(g_cube_frame, g_scene, D3DRMCONSTRAIN_Z);

    hr = g_d3drm->CreateViewport(g_device, g_camera, 0, 0, kClientWidth, kClientHeight, &g_viewport);
    if (FAILED(hr)) return hr;

    g_viewport->SetBack(100.0f);
    g_viewport->SetFront(1.0f);
    g_viewport->SetField(kPi / 4.0f);
    g_viewport->SetProjection(D3DRMPROJECT_PERSPECTIVE);
    g_viewport->SetUniformScaling(TRUE);

    return S_OK;
}

void CleanupScene()
{
    SafeRelease(g_cube_mesh);
    SafeRelease(g_directional_light);
    SafeRelease(g_ambient_light);
    SafeRelease(g_cube_frame);
    SafeRelease(g_light_frame);
    SafeRelease(g_camera);
    SafeRelease(g_scene);
    SafeRelease(g_viewport);
    SafeRelease(g_win_device);
    SafeRelease(g_device);
    SafeRelease(g_clipper);
    SafeRelease(g_ddraw);
    SafeRelease(g_d3drm);
}

void RenderFrame()
{
    if (!g_viewport || !g_device || !g_cube_frame || !g_scene)
    {
        return;
    }

    g_cube_frame->AddRotation(D3DRMCOMBINE_BEFORE, 0.0f, 1.0f, 0.0f, 0.03f);
    g_viewport->Clear();
    g_viewport->Render(g_scene);
    g_device->Update();
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
    switch (msg)
    {
    case WM_TIMER:
        if (wparam == kTimerId)
        {
            RenderFrame();
            return 0;
        }
        break;
    case WM_PAINT:
        if (g_win_device)
        {
            PAINTSTRUCT ps{};
            HDC hdc = BeginPaint(hwnd, &ps);
            g_win_device->HandlePaint(hdc);
            EndPaint(hwnd, &ps);
            return 0;
        }
        break;
    case WM_DESTROY:
        KillTimer(hwnd, kTimerId);
        PostQuitMessage(0);
        return 0;
    default:
        break;
    }

    return DefWindowProc(hwnd, msg, wparam, lparam);
}

} // namespace

int main()
{
    CoInitialize(nullptr);

    WNDCLASSA wc{};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = GetModuleHandleA(nullptr);
    wc.lpszClassName = "D3DRMCubeWindow";
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wc.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_WINDOW + 1);

    if (!RegisterClassA(&wc))
    {
        std::printf("RegisterClassA failed: %lu\n", GetLastError());
        CoUninitialize();
        return 1;
    }

    RECT rect{0, 0, kClientWidth, kClientHeight};
    AdjustWindowRect(&rect, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX, FALSE);

    g_hwnd = CreateWindowA(
        wc.lpszClassName,
        "D3DRM Cube Sample",
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        rect.right - rect.left,
        rect.bottom - rect.top,
        nullptr,
        nullptr,
        wc.hInstance,
        nullptr);

    if (!g_hwnd)
    {
        std::printf("CreateWindowA failed: %lu\n", GetLastError());
        CoUninitialize();
        return 2;
    }

    ShowWindow(g_hwnd, SW_SHOW);
    UpdateWindow(g_hwnd);

    const HRESULT init_hr = InitScene(g_hwnd);
    LogHr("InitScene", init_hr);
    if (FAILED(init_hr))
    {
        CleanupScene();
        DestroyWindow(g_hwnd);
        CoUninitialize();
        return 3;
    }

    SetTimer(g_hwnd, kTimerId, 16, nullptr);

    MSG msg{};
    while (GetMessage(&msg, nullptr, 0, 0) > 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    CleanupScene();
    CoUninitialize();
    return static_cast<int>(msg.wParam);
}
