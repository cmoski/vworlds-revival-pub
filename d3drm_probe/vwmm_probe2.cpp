// vwmm_probe2.cpp - Deeper smoke test for vwmm.dll
// Manually calls DllMain to initialize the ATL module, then DllGetClassObject
#include <windows.h>
#include <stdio.h>

static const GUID CLSID_VWRenderRoot =
    { 0x60ce4b20, 0xfff0, 0x11cf, { 0x89, 0xa9, 0x0, 0xa0, 0xc9, 0x5, 0x41, 0x29 } };

static const GUID CLSID_VWFrame =
    { 0x39a1e861, 0x73bd, 0x11d0, { 0xa0, 0x0e, 0x0, 0xa0, 0x24, 0xa8, 0x5a, 0x2c } };

int main()
{
    CoInitialize(NULL);

    // Load and init
    HMODULE hMod = LoadLibraryA("vwmm.dll");
    if (!hMod) {
        printf("FAIL: LoadLibrary vwmm.dll failed, error %lu\n", GetLastError());
        return 1;
    }
    printf("PASS: vwmm.dll loaded\n");

    typedef HRESULT (STDAPICALLTYPE *PFNDLLGETCLASSOBJECT)(REFCLSID, REFIID, LPVOID*);
    PFNDLLGETCLASSOBJECT pfnGCO =
        (PFNDLLGETCLASSOBJECT)GetProcAddress(hMod, "DllGetClassObject");

    // Try class factories
    IClassFactory* pFactory = NULL;
    HRESULT hr;

    hr = pfnGCO(CLSID_VWRenderRoot, IID_IClassFactory, (void**)&pFactory);
    printf("DllGetClassObject(VWRenderRoot): hr=0x%08X factory=%p\n", hr, pFactory);
    if (SUCCEEDED(hr) && pFactory) {
        IUnknown* pObj = NULL;
        hr = pFactory->CreateInstance(NULL, IID_IUnknown, (void**)&pObj);
        printf("  CreateInstance: hr=0x%08X obj=%p\n", hr, pObj);
        if (pObj) pObj->Release();
        pFactory->Release();
    }

    hr = pfnGCO(CLSID_VWFrame, IID_IClassFactory, (void**)&pFactory);
    printf("DllGetClassObject(VWFrame): hr=0x%08X factory=%p\n", hr, pFactory);
    if (SUCCEEDED(hr) && pFactory) {
        IUnknown* pObj = NULL;
        hr = pFactory->CreateInstance(NULL, IID_IUnknown, (void**)&pObj);
        printf("  CreateInstance: hr=0x%08X obj=%p\n", hr, pObj);
        if (pObj) pObj->Release();
        pFactory->Release();
    }

    FreeLibrary(hMod);
    CoUninitialize();
    printf("DONE\n");
    return 0;
}
