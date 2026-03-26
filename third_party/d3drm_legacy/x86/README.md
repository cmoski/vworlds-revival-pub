# Compact D3DRM Runtime (x86)

This folder is the curated legacy Direct3D Retained Mode bundle for local VWorlds experiments.

## Included
- `bin\d3drm.dll`: app-local x86 retained-mode runtime used by the working sample
- `include\`: minimal legacy D3DRM/DirectDraw headers for compiling tests
- `lib\`: vintage import libraries used by the cube sample and future x86 experiments

## Not bundled
- `ddraw.dll`
- `msvfw32.dll`
- standard Win32/COM system DLLs

Those resolved from `C:\Windows\SysWOW64` during the successful sample run.

## Known-good result
`F:\VWorlds\src\build_d3drm_probe\Debug\d3drm_cube.exe` successfully:
- loaded `d3drm.dll` app-locally
- created D3DRM device/viewport/frame/light objects
- opened a real window titled `D3DRM Cube Sample`
- stayed alive in the render loop without immediate crash

## Notes
- x86 only
- old import libs required `/SAFESEH:NO` with modern MSVC
- this proves a basic D3DRM render path is viable here, but not yet full VWorlds rendering
