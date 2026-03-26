// vwmm_com_test.cpp - COM activation smoke test for registered vwmm.dll
#include <windows.h>
#include <stdio.h>

// CLSIDs from registry (confirmed registered)
// {7D6A5880-07DE-11D0-89A9-00A0C9054129} = Renderer Root Class
static const GUID CLSID_VWRenderRoot =
    { 0x7d6a5880, 0x07de, 0x11d0, { 0x89, 0xa9, 0x0, 0xa0, 0xc9, 0x5, 0x41, 0x29 } };

// {27EB890D-1842-11D0-89A9-00A0C9054129} = Vector Class
static const GUID CLSID_Vector =
    { 0x27eb890d, 0x1842, 0x11d0, { 0x89, 0xa9, 0x0, 0xa0, 0xc9, 0x5, 0x41, 0x29 } };

// {E2186714-116A-11D0-89A9-00A0C9054129} = check registry
static const GUID CLSID_VWGeometry =
    { 0xe2186714, 0x116a, 0x11d0, { 0x89, 0xa9, 0x0, 0xa0, 0xc9, 0x5, 0x41, 0x29 } };

void TryCreate(const char* name, REFCLSID clsid)
{
    IUnknown* pUnk = NULL;
    HRESULT hr = CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, IID_IUnknown, (void**)&pUnk);
    if (SUCCEEDED(hr) && pUnk) {
        printf("PASS: CoCreateInstance(%s) -> pUnk=%p\n", name, pUnk);
        pUnk->Release();
    } else {
        printf("FAIL: CoCreateInstance(%s) -> hr=0x%08X\n", name, hr);
    }
}

int main()
{
    CoInitialize(NULL);

    printf("=== vwmm.dll COM activation test ===\n\n");

    TryCreate("VWRenderRoot", CLSID_VWRenderRoot);
    TryCreate("Vector", CLSID_Vector);
    TryCreate("VWGeometry", CLSID_VWGeometry);

    CoUninitialize();
    printf("\nDONE\n");
    return 0;
}
