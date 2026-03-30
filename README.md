# VWorlds Revival

**Microsoft Virtual Worlds v1.5 (February 2000)** — modernized to build and run on Windows 11 with Visual Studio 2022.

## The Story

Back in 1999-2000, Microsoft Research built one of the first collaborative 3D virtual world platforms. It was called Virtual Worlds — a multi-user environment where people could meet, build, and script together in shared 3D spaces. I was an early beta tester. We logged in through an HTML client, walked around as sprite avatars, chatted, built rooms, and imagined what the future of online collaboration would look like. This was years before Second Life, a decade before VRChat.

Then the project was shelved. Microsoft Research released the source code under a research license, and the world moved on to newer APIs and different visions of virtual reality.

Twenty-six years later, I found the source code again. Visual C++ 6.0, COM/ATL, Direct3D Retained Mode, Windows 98 — none of it builds on anything modern. But the code was still there, and the vision was still interesting. So I set out to resurrect it: get it compiling on Visual Studio 2022, running on Windows 11, rendering real 3D worlds, with multi-user networking, the original scripting system, and even the unfinished bone animation system brought to life.

This project is a preservation effort. One of the earliest collaborative virtual environments, brought back to life so people can see what we were building at the turn of the millennium.

## Quick Start

The easiest way to try VWorlds is to download a pre-built release. No Visual Studio or build tools required.

1. Download the latest release from [Releases](https://github.com/cmoski/vworlds-revival/releases)
2. Extract the zip anywhere
3. Run `install.bat` as Administrator — this registers the COM DLLs, sets up registry paths, and installs the VC++ runtime if you don't have it
4. Run `launch.bat` to enter the Gallery world
5. Run `launch.bat DesktopWorld` for the full lobby with music garden
6. Run `launch_multiuser.bat` to test two clients seeing each other

No need to install Visual Studio, configure CMake, or register anything manually. The installer handles everything.

## What Works

- **5 renderable 3D worlds** — Gallery, Home, Landscape, Office, DesktopWorld with original SDK geometry
- **Multi-user** — multiple clients connect to the same server and see each other in real-time
- **3D rendering** — Direct3D Retained Mode via app-local d3drm.dll, textured .x models, sprite avatars
- **Object Explorer** — tree view + live property editing of all world objects
- **Command Window** — live VBScript console (`World.Global.DefaultRoom.Fog = True` changes the 3D view)
- **World persistence** — Ctrl+S saves to .vwc checkpoint files, worlds reload on restart
- **Sound** — DirectSound playback, ambient room audio, 3D positional sound
- **Studio editing tools** — translate, rotate, scale objects, boundary editing
- **Bone animation** — the original 1999 "Spuck" skeletal system partially rebuilt as the Actor exemplar
- **Chat** — cross-client messaging via Say/Tell events
- **Original HTML client** — the 1999 HTML+VBScript+ActiveX client runs in a WebBrowser control

## The Spuck Story

Buried in the VWorlds source code is a bone animation system that was never finished. The COM infrastructure is there — `CJoint`, `CCharacter`, `CPuppet` — complete with degrees of freedom, joint IDs, and a callback function called `pfUpdateJoint`. But `pfUpdateJoint` was NULL. Calling it crashed. The bones were there but they never moved.

The system was built in 1999 for articulated characters — skeletal animation in a virtual world, years before it became standard. But the team ran out of time or moved on, and the plumbing was left unconnected.

We wired it up. `pfUpdateJoint` now calls into D3DRM to update frame transforms. We created an Actor exemplar — a first-class bone-animated object type, like Artifact or Avatar — with `InitializeActor`, `SetJointRotation`, and `PlayAnimation` methods callable from VBScript. The animation system reads `.anim` files with per-frame rotation and position data for each bone.

Twenty-six years after someone at Microsoft Research wrote the joint system and left `pfUpdateJoint` as a NULL pointer, bones finally move in VWorlds.

## Screenshots

*Coming soon*

## Building from Source

### Prerequisites

- **Visual Studio 2022** (Professional, Community, or BuildTools)
- **MFC/ATL for v143 build tools** — install via VS Installer > Individual Components
- **Windows SDK 10.0**
- No external DirectX SDK needed — legacy D3DRM headers/libs are bundled in `third_party/`

### Build

```bash
# Configure (must be Win32/x86 — code casts pointers to long)
cmake -B build -G "Visual Studio 17 2022" -A Win32 -DVWORLDS_BUILD_GRAPHICS=ON

# Build all targets
cmake --build build --config Debug

# Or individual targets
cmake --build build --target vwsystem --config Debug    # Core platform DLL
cmake --build build --target vwmm --config Debug        # Graphics/multimedia
cmake --build build --target renderhost --config Debug  # 3D render client
cmake --build build --target serverV2 --config Debug    # Server
```

### Build Outputs

| Target | Description |
|--------|-------------|
| vwsystem.dll | Core platform: object model, server, client, networking, persistence, scripting |
| vwmm.dll | Graphics/multimedia: D3DRM rendering, sprites, geometry, sound, actor animation |
| vwfound.dll | Foundation exemplars: Thing, Avatar, Room, Portal behaviors |
| vwprops.dll | Property COM server: Vector, Sound, PickData, AccessoryData, IntersectData |
| vwstudio.dll | Studio authoring tools: geometry, boundary, web, undo |
| vwrendvw.dll | Render View OCX (3D viewport control) |
| objexplr.dll | Object Explorer OCX (tree + property editor) |
| uictrl.dll | UI Controls (sound control, self-view) |
| renderhost.exe | MFC render client with Command Window, chat, object explorer |
| webclient.exe | WebBrowser host for the original 1999 HTML client |
| serverV2.exe | Server manager (MFC MDI app) |
| sengine.exe | Script engine (MFC MDI app) |

### Register & Run

```bash
# Register COM DLLs (elevated command prompt)
for %d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    C:\Windows\SysWOW64\regsvr32.exe /s build\Debug\%d.dll
)

# Set registry paths (run scripts/setup_registry.bat or install.bat)

# Launch a world
scripts\launch_world.bat Gallery
```

## Architecture

```
CMakeLists.txt          Top-level CMake build
vwcommon/               Shared headers, 47 IDL files, MIDL-generated outputs
vwsystem/               DLL entry, COM registration
vwobject/               Core object model (Thing, World, PropertyList, Method)
vwserver/               Server (persistence, connection management)
vwclient/               Client proxy/stub
vwcomm/                 Message routing
fastcomm/               TCP/IP protocol (Winsock2)
vwodb/                  Object database (checkpoint files)
module/system/          System exemplar implementations
module/foundatn/        Foundation exemplar behaviors
module/mm/              Multimedia exemplars (Actor bone animation)
property/               Property types (Vector, Sound, Joint, Character)
tools/                  Tools (animation, InetFile, HTML, auth)
vwrender/               3D/2D rendering bridge
vwgcache/               Geometry cache
spritemn/               Sprite manager
vwmm/                   Graphics DLL hub
vwstudio/               Studio tools
vwocx/vwrendvw/         Render View OCX
vwocx/objexplr/         Object Explorer OCX
vwocx/uictrl/           UI Controls
renderhost/             MFC render client
webclient/              WebBrowser client
sengine/                Script engine app
serverv2/               Server manager app
content/                Bundled content (sprites, models, SDK, HTML client)
third_party/            Legacy D3DRM runtime (headers, libs, DLL)
scripts/                Build, launch, and test automation
```

## Key Design Decisions

- **x86 only** — code casts pointers to `long`; 64-bit would require extensive changes
- **App-local d3drm.dll** — legacy Direct3D Retained Mode runtime bundled in `third_party/`, deployed alongside binaries
- **COM/ATL architecture** — all objects are COM components, methods registered on exemplars, properties replicate across clients
- **Headless world creation** — `cscript.exe` with VBScript creates worlds via `CreateObject("VWSYSTEM.Client.1")`

## Modernization from VC6 to VS2022

Major changes required to compile a 2000-era COM/ATL/MFC codebase with modern MSVC:

- ATL `CComModule` deprecated functions via `_ATL_ALLOW_DEPRECATED_FUNCTIONS`
- C++ `typename` for dependent return types in templates
- MFC `ConstructElements`/`DestructElements` compatibility shims
- `InterlockedCompareExchange` pointer-width variants
- Removed SDK headers (issperr.h, wpapi.h) — inlined or substituted
- MIDL strictness fixes (`[in,out]` to `[in]` for non-double-indirect)
- Old headers (`fstream.h` to `<fstream>`)
- Safe CRT warnings suppressed (108 calls — proper migration pending)

## Requirements

- **Windows 10/11** (x64 — runs as 32-bit)
- **Visual C++ 2022 Redistributable (x86)** — [download](https://aka.ms/vs/17/release/vc_redist.x86.exe)
- **Administrator privileges** for installation (COM registration + registry paths)
- **Hardware-accelerated graphics** recommended (software rendering may work but is slow)

## Attribution

This project is built on the original Microsoft Virtual Worlds v1.5 source code released under the Microsoft Research Source License (MSRSL). Per the original readme:

> *"When you mention Virtual Worlds, or advertise your projects, you must credit the platform by including: 'Built with Virtual Worlds technology developed by Microsoft Research and contributors (http://www.vworlds.org/).'"*

The original readme is preserved in [`readme.txt`](readme.txt).

## License

The original source code is provided under the [Microsoft Research Source License (MSRSL)](http://www.vworlds.org/license.asp) as included in the source tree. Modernization patches and new code (renderhost, webclient, actor animation, build system) are provided under the same terms.
