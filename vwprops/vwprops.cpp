// vwprops.cpp : Implementation of DLL Exports for VWorlds property COM server.
// Modeled on vwmm/vwmm.cpp - extracts clean (non-graphics) properties.

#include "stdafx.h"
#include "cathelp.h"

// Component category for VWorlds object properties
// {8A1E6645-C59C-11d0-955B-00C04FD91F4D}
const CATID CATID_VWObjectProperty = { 0x8a1e6645, 0xc59c, 0x11d0, { 0x95, 0x5b, 0x0, 0xc0, 0x4f, 0xd9, 0x1f, 0x4d } };

#define INITGUID
#include <objbase.h>
#include <initguid.h>

// System interfaces
interface IWorld;
#include "vwsystem.h"

// Property object headers
#include "vectorob.h"
// edgecyc.h (Boundary/cellprop) deferred - deep coupling to vwmm
// #include "edgecyc.h"
#include "sound.h"
#include "pickdato.h"
#include "vwadatao.h"
#include "vwidatao.h"

// Interface ID sources (_i.c files)
#define IID_DEFINED
#include "vwsystem_i.c"
#include "vwprop_i.c"
#include "vwobject_i.c"
#include "menuitem_i.c"
#include "ocxproxy_i.c"
#include "vwmm_i.c"

// Property interface IDs
// #include "cellprop_i.c" // deferred with Boundary
#include "vector_i.c"
#include "vwidata_i.c"
#include "vwtrans_i.c"
#include "vwadata_i.c"
#include "pickdata_i.c"
#include "isound_i.c"
#include "avprof_i.c"

CComModule _Module;

BEGIN_OBJECT_MAP(ObjectMap)
	OBJECT_ENTRY(CLSID_Vector, CVectorObject)
	// OBJECT_ENTRY(CLSID_Boundary, CBoundary) - deferred to vwmm rebuild
	OBJECT_ENTRY(CLSID_Sound, CSoundObject)
	OBJECT_ENTRY(CLSID_VWPickData, CVWPickDataObject)
	OBJECT_ENTRY(CLSID_VWAccessoryData, CVWAccessoryDataObject)
	OBJECT_ENTRY(CLSID_VWIntersectData, CVWIntersectDataObject)
END_OBJECT_MAP()

class CVwpropsApp : public CWinApp
{
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
};

CVwpropsApp theApp;

BOOL CVwpropsApp::InitInstance()
{
	_Module.Init(ObjectMap, m_hInstance);
	AfxEnableControlContainer();
	return CWinApp::InitInstance();
}

int CVwpropsApp::ExitInstance()
{
	_Module.Term();
	return CWinApp::ExitInstance();
}

STDAPI DllCanUnloadNow(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	return (AfxDllCanUnloadNow() == S_OK && _Module.GetLockCount() == 0) ? S_OK : S_FALSE;
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	return _Module.GetClassObject(rclsid, riid, ppv);
}

STDAPI DllRegisterServer(void)
{
	HRESULT hr = CreateComponentCategory(CATID_VWObjectProperty, L"V-Worlds Object Properties");

	if (SUCCEEDED(hr))
	{
		RegisterCLSIDInCategory(CLSID_Vector, CATID_VWObjectProperty);
		// RegisterCLSIDInCategory(CLSID_Boundary, CATID_VWObjectProperty); // deferred
		RegisterCLSIDInCategory(CLSID_Sound, CATID_VWObjectProperty);
	}

	hr = _Module.RegisterServer(TRUE);
	return hr;
}

STDAPI DllUnregisterServer(void)
{
	UnRegisterCLSIDInCategory(CLSID_Vector, CATID_VWObjectProperty);
	// UnRegisterCLSIDInCategory(CLSID_Boundary, CATID_VWObjectProperty); // deferred
	UnRegisterCLSIDInCategory(CLSID_Sound, CATID_VWObjectProperty);

	HRESULT hr = _Module.UnregisterServer(TRUE);
	return hr;
}
