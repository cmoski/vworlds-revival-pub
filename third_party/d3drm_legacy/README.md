# d3drm_legacy

Curated legacy Direct3D Retained Mode assets for local VWorlds modernization work.

## Layout
- `x86/bin`: app-local runtime DLLs
- `x86/include`: legacy headers used for experiments and compatibility builds
- `x86/lib`: vintage import libraries

## Status
This bundle is based on a working x86 D3DRM sample on this machine. It is intended for local compatibility testing and modernization work, not as a final redistribution decision.

## Notes
- x86 only
- legacy import libraries may require `/SAFESEH:NO` with modern MSVC
- `ddraw.dll` and `msvfw32.dll` were resolved from `C:\Windows\SysWOW64` during the successful cube sample run
