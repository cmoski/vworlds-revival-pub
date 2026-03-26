#include <windows.h>
#include <objbase.h>

#include <cstdio>

using Direct3DRMCreateFn = HRESULT(WINAPI *)(void**);
using QueryInterfaceFn = HRESULT(STDMETHODCALLTYPE *)(void*, REFIID, void**);
using AddRefFn = ULONG(STDMETHODCALLTYPE *)(void*);
using ReleaseFn = ULONG(STDMETHODCALLTYPE *)(void*);
using CreateFrameFn = HRESULT(STDMETHODCALLTYPE *)(void*, void*, void**);

static void print_hr(const char* label, HRESULT hr)
{
    std::printf("%s: hr=0x%08lX\n", label, static_cast<unsigned long>(hr));
}

int main()
{
    std::printf("d3drm probe starting\n");

    HMODULE module = LoadLibraryW(L"d3drm.dll");
    if (!module)
    {
        std::printf("LoadLibraryW(d3drm.dll) failed: gle=%lu\n", GetLastError());
        return 1;
    }

    std::printf("Loaded d3drm.dll from app-local/system search path.\n");

    auto create = reinterpret_cast<Direct3DRMCreateFn>(GetProcAddress(module, "Direct3DRMCreate"));
    if (!create)
    {
        std::printf("GetProcAddress(Direct3DRMCreate) failed: gle=%lu\n", GetLastError());
        FreeLibrary(module);
        return 2;
    }

    void* d3drm = nullptr;
    const HRESULT create_hr = create(&d3drm);
    print_hr("Direct3DRMCreate", create_hr);
    if (FAILED(create_hr) || !d3drm)
    {
        FreeLibrary(module);
        return 3;
    }

    auto** vtbl = *reinterpret_cast<void***>(d3drm);
    auto query_interface = reinterpret_cast<QueryInterfaceFn>(vtbl[0]);
    auto add_ref = reinterpret_cast<AddRefFn>(vtbl[1]);
    auto release = reinterpret_cast<ReleaseFn>(vtbl[2]);

    void* unk = nullptr;
    const HRESULT qi_hr = query_interface(d3drm, IID_IUnknown, &unk);
    print_hr("IDirect3DRM::QueryInterface(IID_IUnknown)", qi_hr);

    const ULONG refs_after_add = add_ref(d3drm);
    std::printf("IDirect3DRM::AddRef -> %lu\n", static_cast<unsigned long>(refs_after_add));

    const ULONG refs_after_release = release(d3drm);
    std::printf("IDirect3DRM::Release -> %lu\n", static_cast<unsigned long>(refs_after_release));

    auto create_frame = reinterpret_cast<CreateFrameFn>(vtbl[4]);
    void* frame = nullptr;
    const HRESULT frame_hr = create_frame(d3drm, nullptr, &frame);
    print_hr("IDirect3DRM::CreateFrame(nullptr, &frame)", frame_hr);
    if (frame)
    {
        auto** frame_vtbl = *reinterpret_cast<void***>(frame);
        auto frame_release = reinterpret_cast<ReleaseFn>(frame_vtbl[2]);
        const ULONG frame_refs = frame_release(frame);
        std::printf("IDirect3DRMFrame::Release -> %lu\n", static_cast<unsigned long>(frame_refs));
    }

    if (unk)
    {
        auto** unk_vtbl = *reinterpret_cast<void***>(unk);
        auto unk_release = reinterpret_cast<ReleaseFn>(unk_vtbl[2]);
        const ULONG unk_refs = unk_release(unk);
        std::printf("IUnknown::Release -> %lu\n", static_cast<unsigned long>(unk_refs));
    }

    const ULONG refs_final = release(d3drm);
    std::printf("IDirect3DRM::Release(final) -> %lu\n", static_cast<unsigned long>(refs_final));

    FreeLibrary(module);
    return 0;
}
