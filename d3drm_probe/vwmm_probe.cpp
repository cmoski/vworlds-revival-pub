// vwmm_probe.cpp - Smoke test for vwmm.dll COM server
// Tests: DLL load, DllGetClassObject, one CoCreateInstance
#include <windows.h>
#include <stdio.h>

// CLSID_VWRenderRoot from vwmm
// {60CE4B20-FFF0-11CF-89A9-00A0C9054129}
static const GUID CLSID_VWRenderRoot =
    { 0x60ce4b20, 0xfff0, 0x11cf, { 0x89, 0xa9, 0x0, 0xa0, 0xc9, 0x5, 0x41, 0x29 } };

// CLSID_VWFrame
// {39A1E861-73BD-11d0-A00E-00A024A85A2C}
static const GUID CLSID_VWFrame =
    { 0x39a1e861, 0x73bd, 0x11d0, { 0xa0, 0x0e, 0x0, 0xa0, 0x24, 0xa8, 0x5a, 0x2c } };

int main()
{
    // Step 1: Load vwmm.dll
    HMODULE hMod = LoadLibraryA("vwmm.dll");
    if (!hMod) {
        printf("FAIL: LoadLibrary vwmm.dll failed, error %lu\n", GetLastError());
        return 1;
    }
    printf("PASS: vwmm.dll loaded at %p\n", hMod);

    // Step 2: Get DllGetClassObject
    typedef HRESULT (STDAPICALLTYPE *PFNDLLGETCLASSOBJECT)(REFCLSID, REFIID, LPVOID*);
    PFNDLLGETCLASSOBJECT pfnGetClassObject =
        (PFNDLLGETCLASSOBJECT)GetProcAddress(hMod, "DllGetClassObject");
    if (!pfnGetClassObject) {
        printf("FAIL: DllGetClassObject not found\n");
        FreeLibrary(hMod);
        return 1;
    }
    printf("PASS: DllGetClassObject found at %p\n", pfnGetClassObject);

    // Step 3: Try getting class factory for CLSID_VWRenderRoot
    IClassFactory* pFactory = NULL;
    HRESULT hr = pfnGetClassObject(CLSID_VWRenderRoot, IID_IClassFactory, (void**)&pFactory);
    if (SUCCEEDED(hr) && pFactory) {
        printf("PASS: DllGetClassObject(CLSID_VWRenderRoot) returned factory %p, hr=0x%08X\n", pFactory, hr);
        pFactory->Release();
    } else {
        printf("INFO: DllGetClassObject(CLSID_VWRenderRoot) hr=0x%08X (may need COM init)\n", hr);
    }

    // Step 4: Try via COM
    CoInitialize(NULL);
    IUnknown* pUnk = NULL;
    hr = CoCreateInstance(CLSID_VWFrame, NULL, CLSCTX_INPROC_SERVER, IID_IUnknown, (void**)&pUnk);
    if (SUCCEEDED(hr) && pUnk) {
        printf("PASS: CoCreateInstance(CLSID_VWFrame) succeeded, pUnk=%p\n", pUnk);
        pUnk->Release();
    } else {
        printf("INFO: CoCreateInstance(CLSID_VWFrame) hr=0x%08X (expected without registration)\n", hr);
    }
    CoUninitialize();

    FreeLibrary(hMod);
    printf("DONE: vwmm.dll probe complete\n");
    return 0;
}
