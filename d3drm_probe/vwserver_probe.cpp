// vwserver_probe.cpp - Test VWServer COM activation
#include <windows.h>
#include <stdio.h>

// {F8584902-00F4-11D0-A516-00AA00B595DB}
static const GUID CLSID_VWServer =
    { 0xf8584902, 0x00f4, 0x11d0, { 0xa5, 0x16, 0x00, 0xaa, 0x00, 0xb5, 0x95, 0xdb } };

// {590D9871-A417-11CF-9BF0-0080C7A56A8A}
static const GUID IID_IVWServer =
    { 0x590d9871, 0xa417, 0x11cf, { 0x9b, 0xf0, 0x00, 0x80, 0xc7, 0xa5, 0x6a, 0x8a } };

int main()
{
    CoInitialize(NULL);

    IUnknown* pUnk = NULL;
    HRESULT hr = CoCreateInstance(CLSID_VWServer, NULL, CLSCTX_INPROC_SERVER, IID_IUnknown, (void**)&pUnk);
    if (SUCCEEDED(hr) && pUnk) {
        printf("PASS: CoCreateInstance(VWServer) -> pUnk=%p\n", pUnk);

        // Try QI for IVWServer
        void* pServer = NULL;
        hr = pUnk->QueryInterface(IID_IVWServer, &pServer);
        if (SUCCEEDED(hr) && pServer) {
            printf("PASS: QueryInterface(IVWServer) -> %p\n", pServer);
            ((IUnknown*)pServer)->Release();
        } else {
            printf("FAIL: QueryInterface(IVWServer) hr=0x%08X\n", hr);
        }

        pUnk->Release();
    } else {
        printf("FAIL: CoCreateInstance(VWServer) hr=0x%08X\n", hr);
    }

    CoUninitialize();
    return 0;
}
