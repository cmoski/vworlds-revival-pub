cmake_minimum_required(VERSION 3.20)
project(VWorlds VERSION 1.50.281 LANGUAGES C CXX)

# =============================================================================
# VWorlds Build System - Modernized from VC6 NMAKE (Feb 2000)
# =============================================================================

# Must build as 32-bit x86 - code casts pointers to long throughout
if(NOT CMAKE_GENERATOR_PLATFORM)
    set(CMAKE_GENERATOR_PLATFORM "Win32" CACHE STRING "Target platform" FORCE)
endif()

# Options
option(VWORLDS_BUILD_GRAPHICS "Build graphics-dependent components (D3DRM/DirectDraw)" OFF)
option(VWORLDS_BUILD_APPS "Build MFC applications (sengine, serverV2)" ON)
option(VWORLDS_BUILD_FOUNDATN "Build foundation exemplar module" ON)

# Global compiler settings matching original build
set(CMAKE_CXX_STANDARD 17)
# NOTE: We do NOT set CMAKE_MFC_FLAG because MSBuild's built-in MFC detection
# requires MFC in the active toolset. Instead, we manually add MFC include/lib
# paths and define _AFXDLL on targets that need MFC.

# MFC/ATL: Find an installed toolset that has MFC and add its paths.
# The active compiler toolset may not have MFC installed.
function(find_and_add_mfc_paths)
    # Try the current toolset first via VCToolsInstallDir
    if(DEFINED ENV{VCToolsInstallDir})
        set(_check "$ENV{VCToolsInstallDir}/atlmfc")
        if(EXISTS "${_check}/include/afxwin.h")
            message(STATUS "Found MFC/ATL at current toolset: ${_check}")
            return()  # MSBuild will find it natively
        endif()
    endif()

    # Scan for any installed toolset with MFC
    set(_search_roots
        "C:/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/VC/Tools/MSVC"
        "C:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC"
        "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC"
        "C:/Program Files/Microsoft Visual Studio/2022/Enterprise/VC/Tools/MSVC"
        "F:/Program Files/Microsoft Visual Studio/2022/Professional/VC/Tools/MSVC"
    )
    foreach(_root ${_search_roots})
        if(EXISTS "${_root}")
            file(GLOB _versions "${_root}/*")
            # Sort descending to prefer newest
            list(SORT _versions ORDER DESCENDING)
            foreach(_ver_dir ${_versions})
                set(_mfc_dir "${_ver_dir}/atlmfc")
                if(EXISTS "${_mfc_dir}/include/afxwin.h")
                    message(STATUS "Found MFC/ATL at: ${_mfc_dir}")
                    include_directories(SYSTEM "${_mfc_dir}/include")
                    # Try non-spectre libs first, fall back to spectre-mitigated
                    if(EXISTS "${_mfc_dir}/lib/x86")
                        link_directories("${_mfc_dir}/lib/x86")
                    elseif(EXISTS "${_mfc_dir}/lib/spectre/x86")
                        link_directories("${_mfc_dir}/lib/spectre/x86")
                    endif()
                    return()
                endif()
            endforeach()
        endif()
    endforeach()
    message(WARNING "MFC/ATL not found! Install via VS Installer: C++ MFC for v143 build tools")
endfunction()

find_and_add_mfc_paths()

# Preprocessor definitions (from vwsyst60.mak CPP_PROJ)
add_compile_definitions(
    WIN32
    _WINDOWS
    _WIN32_WINNT=0x0601          # Updated from 0x0400 to Win7 minimum
    WINVER=0x0601
    _ATL_ALLOW_DEPRECATED_FUNCTIONS  # Keeps CComModule working in modern ATL
    _CRT_SECURE_NO_WARNINGS      # Phase 7: replace with safe CRT calls
    _WINSOCK_DEPRECATED_NO_WARNINGS
    _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
)

# Compiler flags
add_compile_options(
    /W3             # Warning level 3 (matches original)
    /EHsc           # C++ exceptions (replaces /GX)
    /MP             # Multi-process compilation
    /Zc:wchar_t     # wchar_t as built-in type
)

# Debug-specific
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd /ZI /Od")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD /O1")

# =============================================================================
# Include directories
# =============================================================================
# vwcommon is the central header/IDL directory used by everything
set(VWORLDS_COMMON_DIR "${CMAKE_CURRENT_SOURCE_DIR}/vwcommon")

# Global include paths
include_directories(
    ${VWORLDS_COMMON_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# =============================================================================
# MIDL compilation helper
# =============================================================================
# The original build ran MIDL from the vwsystem project, generating outputs
# into ../vwcommon/. We replicate this with custom commands.
#
# Many IDL files have cpp_quote guards for D3DRM/DirectDraw types, so MIDL
# can compile them without the real DirectX SDK headers.
# =============================================================================

function(vworlds_midl_compile IDL_FILE)
    cmake_parse_arguments(MIDL "" "OUTPUT_DIR;HEADER;IID;PROXY;TLB;DLLDATA" "" ${ARGN})

    get_filename_component(IDL_NAME ${IDL_FILE} NAME_WE)
    get_filename_component(IDL_DIR ${IDL_FILE} DIRECTORY)

    if(NOT MIDL_OUTPUT_DIR)
        set(MIDL_OUTPUT_DIR ${IDL_DIR})
    endif()
    if(NOT MIDL_HEADER)
        set(MIDL_HEADER "${MIDL_OUTPUT_DIR}/${IDL_NAME}.h")
    endif()
    if(NOT MIDL_IID)
        set(MIDL_IID "${MIDL_OUTPUT_DIR}/${IDL_NAME}_i.c")
    endif()

    set(MIDL_OUTPUTS ${MIDL_HEADER} ${MIDL_IID})
    set(MIDL_ARGS
        /nologo
        /D "_DEBUG"
        /char signed
        /env win32
        /Oicf
        /h "${MIDL_HEADER}"
        /iid "${MIDL_IID}"
        /I "${VWORLDS_COMMON_DIR}"
    )

    if(MIDL_PROXY)
        list(APPEND MIDL_ARGS /proxy "${MIDL_PROXY}")
        list(APPEND MIDL_OUTPUTS ${MIDL_PROXY})
    else()
        list(APPEND MIDL_ARGS /proxy "NUL")
    endif()

    if(MIDL_TLB)
        list(APPEND MIDL_ARGS /tlb "${MIDL_TLB}")
        list(APPEND MIDL_OUTPUTS ${MIDL_TLB})
    endif()

    if(MIDL_DLLDATA)
        list(APPEND MIDL_ARGS /dlldata "${MIDL_DLLDATA}")
        list(APPEND MIDL_OUTPUTS ${MIDL_DLLDATA})
    endif()

    add_custom_command(
        OUTPUT ${MIDL_OUTPUTS}
        COMMAND midl ${MIDL_ARGS} "${IDL_FILE}"
        DEPENDS "${IDL_FILE}"
        WORKING_DIRECTORY "${IDL_DIR}"
        COMMENT "MIDL: ${IDL_NAME}.idl"
        VERBATIM
    )
endfunction()

# =============================================================================
# MIDL: Compile core IDL files (non-graphics)
# These generate headers and _i.c files into vwcommon/
# =============================================================================

# Core object model IDLs
set(VWORLDS_CORE_IDLS
    vwobject
    vwprop
    vwclient
    vwserver
    vwcomm
    vwodb
    vwadmin
    vwbuffer
    vwsysex
    vwanim
    vwhtml
    inetfile
    dirserv
    authntic
    avprof
    menuitem
    ocxproxy
)

# IDLs needed for foundatn module (import graphics IDLs but have cpp_quote guards)
set(VWORLDS_FOUNDATN_IDLS
    d2d
    vector
    vwtrans
    cellprop
    isound
    pickdata
    vwadata
    vwidata
    vwrender
    vwframe
    vwgcache
    vwgeom
    vwgeomsp
    vwgeomar
    convgeom
    vwmmex
    3dstod3d
    vwuiobjs
    vwsound
    vwstats
    stdtools
    bndytool
    spritemn
    geomtool
    vwnvtool
    vwpktool
    webtools
    vwstuex
    vwfound
    tranitem
)
foreach(IDL_NAME ${VWORLDS_FOUNDATN_IDLS})
    vworlds_midl_compile(
        "${VWORLDS_COMMON_DIR}/${IDL_NAME}.idl"
        OUTPUT_DIR "${VWORLDS_COMMON_DIR}"
    )
    list(APPEND VWORLDS_MIDL_OUTPUTS
        "${VWORLDS_COMMON_DIR}/${IDL_NAME}.h"
        "${VWORLDS_COMMON_DIR}/${IDL_NAME}_i.c"
    )
endforeach()

# IDLs that need proxy/stub generation
set(VWORLDS_PROXY_IDLS vwobject vwprop vwclient inetfile)

foreach(IDL_NAME ${VWORLDS_CORE_IDLS})
    set(MIDL_EXTRA_ARGS)
    if(${IDL_NAME} IN_LIST VWORLDS_PROXY_IDLS)
        list(APPEND MIDL_EXTRA_ARGS
            PROXY "${VWORLDS_COMMON_DIR}/${IDL_NAME}_p.c"
        )
    endif()
    vworlds_midl_compile(
        "${VWORLDS_COMMON_DIR}/${IDL_NAME}.idl"
        OUTPUT_DIR "${VWORLDS_COMMON_DIR}"
        ${MIDL_EXTRA_ARGS}
    )
    list(APPEND VWORLDS_MIDL_OUTPUTS
        "${VWORLDS_COMMON_DIR}/${IDL_NAME}.h"
        "${VWORLDS_COMMON_DIR}/${IDL_NAME}_i.c"
    )
endforeach()

# vwsystem.idl compiles locally (generates TLB)
vworlds_midl_compile(
    "${CMAKE_CURRENT_SOURCE_DIR}/vwsystem/vwsystem.idl"
    OUTPUT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/vwsystem"
    TLB "${CMAKE_CURRENT_SOURCE_DIR}/vwsystem/vwsystem.tlb"
)
list(APPEND VWORLDS_MIDL_OUTPUTS
    "${CMAKE_CURRENT_SOURCE_DIR}/vwsystem/vwsystem.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/vwsystem/vwsystem_i.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/vwsystem/vwsystem.tlb"
)

# Graphics-dependent IDLs (only if building graphics)
if(VWORLDS_BUILD_GRAPHICS)
    set(VWORLDS_GFX_IDLS
        vwrender
        vwframe
        d2d
        vwgcache
        vwgeom
        vwgeomar
        vwgeomsp
        vwgeomo
        vwmmex
        vwfound
        vwstuex
        vwsound
        vwuiobjs
        vector
        cellprop
        pickdata
        tranitem
        vwadata
        vwidata
        isound
        vwstats
        vwtrans
        spritemn
        bndytool
        convgeom
        geomtool
        stdtools
        3dstod3d
        vrml2d3d
        vwnvtool
        vwpktool
        webtools
    )
    foreach(IDL_NAME ${VWORLDS_GFX_IDLS})
        vworlds_midl_compile(
            "${VWORLDS_COMMON_DIR}/${IDL_NAME}.idl"
            OUTPUT_DIR "${VWORLDS_COMMON_DIR}"
        )
        list(APPEND VWORLDS_MIDL_OUTPUTS
            "${VWORLDS_COMMON_DIR}/${IDL_NAME}.h"
            "${VWORLDS_COMMON_DIR}/${IDL_NAME}_i.c"
        )
    endforeach()
endif()

# vwmm.idl is in vwmm/ directory (not vwcommon/)
vworlds_midl_compile(
    "${CMAKE_CURRENT_SOURCE_DIR}/vwmm/vwmm.idl"
    OUTPUT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/vwmm"
    TLB "${CMAKE_CURRENT_SOURCE_DIR}/vwmm/vwmm.tlb"
)
list(APPEND VWORLDS_MIDL_OUTPUTS
    "${CMAKE_CURRENT_SOURCE_DIR}/vwmm/vwmm.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/vwmm/vwmm_i.c"
)

# Custom target for all MIDL outputs
add_custom_target(vworlds_midl DEPENDS ${VWORLDS_MIDL_OUTPUTS})

# =============================================================================
# vwsystem.dll - Core platform DLL
# =============================================================================
# This is the monolithic DLL containing: vwobject, vwserver, vwclient, vwcomm,
# fastcomm, vwodb, vwadmin, module/system, tools, and properties.
# Matches the source list from vwsyst60.mak.
# =============================================================================

set(VWSYSTEM_SOURCES
    # -- vwsystem local --
    vwsystem/stdafx.cpp
    vwsystem/vwsystem.cpp
    vwsystem/dlldatax.c

    # -- vwobject (core object model) --
    vwobject/collenum.cpp
    vwobject/comobj.cpp
    vwobject/connlist.cpp
    vwobject/marshbuf.cpp
    vwobject/methdobj.cpp
    vwobject/plisthlp.cpp
    vwobject/plistobj.cpp
    vwobject/pmaphlp.cpp
    vwobject/pmapobj.cpp
    vwobject/propsecu.cpp
    vwobject/scrptobj.cpp
    vwobject/thinghlp.cpp
    vwobject/thingobj.cpp
    vwobject/worldevt.cpp
    vwobject/worldfmt.cpp
    vwobject/worldhlp.cpp
    vwobject/worldmar.cpp
    vwobject/worldobj.cpp

    # -- vwserver (server implementation) --
    vwserver/connserv.cpp
    vwserver/queue.cpp
    vwserver/vwserve.cpp
    vwserver/wldinfo.cpp
    vwserver/wldlist.cpp

    # -- vwclient (client proxy) --
    vwclient/vwcliobj.cpp
    vwclient/vwcliocx.cpp

    # -- vwcomm (communication layer) --
    vwcomm/commcono.cpp
    vwcomm/commfunc.cpp
    vwcomm/commmsgo.cpp
    vwcomm/commobj.cpp
    vwcomm/tinfo.cpp

    # -- fastcomm (TCP/IP fast communication) --
    fastcomm/commlayr.cpp
    fastcomm/fastcono.cpp
    fastcomm/fastmsgo.cpp
    fastcomm/fastobj.cpp
    fastcomm/Toolkit/tools.cpp

    # -- vwodb (object database) --
    vwodb/vwodbobj.cpp

    # -- vwadmin --
    vwadmin/vwadmobj.cpp

    # -- vwcommon (shared utilities) --
    vwcommon/Cathelp.cpp
    vwcommon/profhelp.cpp
    vwcommon/reghelp.cpp
    vwcommon/registry.cpp
    vwcommon/scripts.cpp
    vwcommon/syshelp.cpp
    vwcommon/urlhelp.cpp

    # -- module/system (exemplar implementations) --
    module/system/artifact.cpp
    module/system/avatar.cpp
    module/system/host.cpp
    module/system/IWportal.cpp
    module/system/portal.cpp
    module/system/room.cpp
    module/system/statemch.cpp
    module/system/vwsysexo.cpp
    module/system/vwthing.cpp
    module/system/WebPage.cpp

    # -- property implementations --
    property/menuitem/cmenuitm.cpp
    property/avprof/profobj.cpp
    property/ocxproxy/vwocx.cpp

    # -- tools --
    tools/vwanim/vwanimob.cpp
    tools/vwanim/vwanmtob.cpp
    tools/inetfile/dlthread.cpp
    tools/inetfile/inetmgro.cpp
    tools/vwhtml/htmlwnd.cpp
    tools/vwhtml/vwhelper.cpp
    tools/vwhtml/vwhtmlob.cpp
    tools/vwhtml/wbbrowsr.cpp
    tools/dirserv/attrib.cpp
    tools/dirserv/dqueue.cpp
    tools/dirserv/dserv.cpp
    tools/authntic/aobj.cpp
    tools/authntic/authobj.cpp
    tools/authntic/logon.cpp

    # -- MIDL proxy/stub sources --
    vwcommon/vwobject_p.c
    vwcommon/vwclient_p.c
    vwcommon/vwprop_p.c
    vwcommon/inetfile_p.c
)

# Resource file
set(VWSYSTEM_RESOURCES vwsystem/vwsystem.rc)

# MIDL-generated _i.c files (interface IDs)
set(VWSYSTEM_IID_SOURCES)
foreach(IDL_NAME ${VWORLDS_CORE_IDLS})
    list(APPEND VWSYSTEM_IID_SOURCES "${VWORLDS_COMMON_DIR}/${IDL_NAME}_i.c")
endforeach()
list(APPEND VWSYSTEM_IID_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/vwsystem/vwsystem_i.c")

add_library(vwsystem SHARED
    ${VWSYSTEM_SOURCES}
    ${VWSYSTEM_RESOURCES}
    ${VWSYSTEM_IID_SOURCES}
    vwsystem/vwsystem.def
)

add_dependencies(vwsystem vworlds_midl)

target_include_directories(vwsystem PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/vwsystem
    ${VWORLDS_COMMON_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/vwobject
    ${CMAKE_CURRENT_SOURCE_DIR}/vwserver
    ${CMAKE_CURRENT_SOURCE_DIR}/vwclient
    ${CMAKE_CURRENT_SOURCE_DIR}/vwcomm
    ${CMAKE_CURRENT_SOURCE_DIR}/fastcomm
    ${CMAKE_CURRENT_SOURCE_DIR}/fastcomm/Toolkit
    ${CMAKE_CURRENT_SOURCE_DIR}/vwodb
    ${CMAKE_CURRENT_SOURCE_DIR}/vwadmin
    ${CMAKE_CURRENT_SOURCE_DIR}/module/system
    ${CMAKE_CURRENT_SOURCE_DIR}/property/menuitem
    ${CMAKE_CURRENT_SOURCE_DIR}/property/avprof
    ${CMAKE_CURRENT_SOURCE_DIR}/property/ocxproxy
    ${CMAKE_CURRENT_SOURCE_DIR}/tools/vwanim
    ${CMAKE_CURRENT_SOURCE_DIR}/tools/inetfile
    ${CMAKE_CURRENT_SOURCE_DIR}/tools/vwhtml
    ${CMAKE_CURRENT_SOURCE_DIR}/tools/dirserv
    ${CMAKE_CURRENT_SOURCE_DIR}/tools/authntic
)

target_compile_definitions(vwsystem PRIVATE
    _WINDLL
    _USRDLL
    _AFXDLL
    VWSYSTEM_BUILD
    _MERGE_PROXYSTUB
)

# Precompiled header (vwsystem uses stdafx.h)
target_precompile_headers(vwsystem PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/vwsystem/stdafx.h>"
)

# Link libraries (from vwsyst60.mak LINK32_FLAGS)
target_link_libraries(vwsystem PRIVATE
    wsock32
    wininet
    urlmon
    uuid
    netapi32
    winmm
    # rpcndr and rpcns4 are no longer separate libs in modern SDK
    rpcrt4
    mswsock
    ws2_32
    ole32
    oleaut32
    advapi32
    user32
    gdi32
    shell32
    comdlg32
    kernel32
    shlwapi
)

# =============================================================================
# sengine.exe - Script Engine (MFC MDI Application)
# =============================================================================
if(VWORLDS_BUILD_APPS)

add_executable(sengine WIN32
    sengine/stdafx.cpp
    sengine/sengine.cpp
    sengine/mainfrm.cpp
    sengine/childfrm.cpp
    sengine/sengdoc.cpp
    sengine/sengview.cpp
    sengine/coleauto.cpp
    sengine/dbgview.cpp
    sengine/getmedlg.cpp
    sengine/gotodlg.cpp
    sengine/guids.cpp
    sengine/ocxview.cpp
    sengine/oleid.cpp
    # Compiled directly into sengine (not from vwsystem.dll)
    vwcommon/scripts.cpp
)

target_include_directories(sengine PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/sengine
    ${VWORLDS_COMMON_DIR}
)

target_compile_definitions(sengine PRIVATE
    _AFXDLL
)

target_precompile_headers(sengine PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/sengine/stdafx.h>"
)

target_link_libraries(sengine PRIVATE
    ole32
    oleaut32
    uuid
    advapi32
    user32
    gdi32
    shell32
    comdlg32
)

add_dependencies(sengine vworlds_midl)

# =============================================================================
# serverV2.exe - Server Manager (MFC MDI Application)
# =============================================================================

add_executable(serverV2 WIN32
    serverv2/stdafx.cpp
    serverv2/serverv2.cpp
    serverv2/mainfrm.cpp
    serverv2/childfrm.cpp
    serverv2/globdoc.cpp
    serverv2/globedvw.cpp
    serverv2/globfrm.cpp
    serverv2/servdoc.cpp
    serverv2/servview.cpp
    serverv2/servsink.cpp
    serverv2/optionsdlg.cpp
    serverv2/dlgmaxlimit.cpp
    serverv2/dsurl.cpp
    serverv2/infourl.cpp
    serverv2/prgdlg.cpp
    serverv2/savedlg.cpp
    # Compiled directly (not from vwsystem.dll)
    vwcommon/reghelp.cpp
)

target_include_directories(serverV2 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/serverv2
    ${VWORLDS_COMMON_DIR}
)

target_compile_definitions(serverV2 PRIVATE
    _AFXDLL
)

target_precompile_headers(serverV2 PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/serverv2/stdafx.h>"
)

target_link_libraries(serverV2 PRIVATE
    ole32
    oleaut32
    uuid
    advapi32
    user32
    gdi32
    shell32
    comdlg32
    winmm
    wsock32
    wininet
    urlmon
    netapi32
    htmlhelp
)

add_dependencies(serverV2 vworlds_midl)

endif() # VWORLDS_BUILD_APPS

# =============================================================================
# module/foundatn - Foundation exemplar module (Phase 1c: decoupled from D3DRM)
# =============================================================================
if(VWORLDS_BUILD_FOUNDATN)

add_library(vwfound SHARED
    module/foundatn/stdafx.cpp
    module/foundatn/foundatn.cpp
    module/foundatn/fglobal.cpp
    module/foundatn/fthing.cpp
    module/foundatn/favatar.cpp
    module/foundatn/fhost.cpp
    module/foundatn/painting.cpp
    module/foundatn/sign.cpp
    module/foundatn/transmch.cpp
    module/foundatn/vwfound.cpp
    # Shared utilities compiled directly into vwfound (from vwfoun60.mak)
    vwcommon/mmhelp.cpp
    vwcommon/syshelp.cpp
    vwcommon/profhelp.cpp
    property/tranitem/tranito.cpp
)

target_include_directories(vwfound PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/module/foundatn
    ${VWORLDS_COMMON_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/compat          # Stub D3DRM/DirectDraw headers
    ${CMAKE_CURRENT_SOURCE_DIR}/vwsystem
    ${CMAKE_CURRENT_SOURCE_DIR}/vwmm            # vwmm.h (MIDL-generated)
    ${CMAKE_CURRENT_SOURCE_DIR}/property/tranitem
)

target_compile_definitions(vwfound PRIVATE
    _WINDLL
    _USRDLL
    _AFXDLL
)

target_precompile_headers(vwfound PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/module/foundatn/stdafx.h>"
)

target_link_libraries(vwfound PRIVATE
    vwsystem
    ole32
    oleaut32
    uuid
)

add_dependencies(vwfound vworlds_midl)

endif() # VWORLDS_BUILD_FOUNDATN

# =============================================================================
# jpeglib - JPEG codec (static library, pure C in .cpp files)
# =============================================================================

file(GLOB JPEGLIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/d2d/jpeglib/*.cpp")

add_library(jpeglib STATIC ${JPEGLIB_SOURCES})

target_include_directories(jpeglib PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/d2d/jpeglib
)

# No PCH - pure codec library
# Legacy C code renamed to .cpp; may generate warnings
target_compile_options(jpeglib PRIVATE /W2)  # Reduce warning level for legacy C code
set_target_properties(jpeglib PROPERTIES LINKER_LANGUAGE CXX)

# =============================================================================
# d2dutils - Utility library (static library)
# =============================================================================

add_library(d2dutils STATIC
    d2d/d2dutils/src/darray.cpp
    d2d/d2dutils/src/errmgr.cpp
    d2d/d2dutils/src/mmutils.cpp
)

target_include_directories(d2dutils PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/d2d/d2dutils/include
    ${CMAKE_CURRENT_SOURCE_DIR}/compat
)

# =============================================================================
# vwprops.dll - Clean property COM server (extracted from vwmm.dll)
# =============================================================================

add_library(vwprops SHARED
    vwprops/stdafx.cpp
    vwprops/vwprops.cpp
    property/vector/vectorob.cpp
    # cellprop/edgecyc.cpp deferred - deep coupling to vwmm resource IDs and IVWIntersectData
    property/sound/sound.cpp
    property/pickdata/pickdata.cpp
    property/vwadata/vwadatao.cpp
    # property/vwadata/vwadata.cpp excluded - has own DLL entry points
    property/vwidata/vwidatao.cpp
    # property/vwidata/vwidata.cpp excluded - has own DLL entry points
    # Category helpers from vwcommon
    vwcommon/Cathelp.cpp
    vwprops/vwprops.def
)

add_dependencies(vwprops vworlds_midl)

target_include_directories(vwprops PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/vwprops
    ${VWORLDS_COMMON_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/compat
    ${CMAKE_CURRENT_SOURCE_DIR}/vwsystem
    ${CMAKE_CURRENT_SOURCE_DIR}/vwmm
    ${CMAKE_CURRENT_SOURCE_DIR}/property/vector
    ${CMAKE_CURRENT_SOURCE_DIR}/property/cellprop
    ${CMAKE_CURRENT_SOURCE_DIR}/property/sound
    ${CMAKE_CURRENT_SOURCE_DIR}/property/pickdata
    ${CMAKE_CURRENT_SOURCE_DIR}/property/vwadata
    ${CMAKE_CURRENT_SOURCE_DIR}/property/vwidata
)

target_compile_definitions(vwprops PRIVATE
    _WINDLL
    _USRDLL
    _AFXDLL
)

target_precompile_headers(vwprops PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/vwprops/stdafx.h>"
)

target_link_libraries(vwprops PRIVATE
    vwsystem
    uuid
    ole32
    oleaut32
)

# =============================================================================
# objexplr.ocx - Object Explorer ActiveX Control (MFC OCX, no D3DRM)
# =============================================================================

# Generate objexplr.tlb from objexplr.odl (legacy OCX type library)
add_custom_command(
    OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr/objexplr.tlb"
    COMMAND midl /nologo /win32 /char signed /env win32
        /tlb "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr/objexplr.tlb"
        /h "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr/objexplr_h.h"
        /iid "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr/objexplr_i.c"
        /I "${VWORLDS_COMMON_DIR}"
        /I "${CMAKE_CURRENT_SOURCE_DIR}/vwsystem"
        "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr/objexplr.odl"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr/objexplr.odl"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr"
    COMMENT "MIDL: objexplr.odl -> objexplr.tlb"
    VERBATIM
)

add_library(objexplr SHARED
    vwocx/objexplr/StdAfx.cpp
    vwocx/objexplr/objexplr.cpp
    vwocx/objexplr/3clmlist.cpp
    vwocx/objexplr/4ClmList.cpp
    vwocx/objexplr/booldrop.cpp
    vwocx/objexplr/EdLstCtl.cpp
    vwocx/objexplr/LEButton.cpp
    vwocx/objexplr/ListList.cpp
    vwocx/objexplr/lpedit.cpp
    vwocx/objexplr/MenuList.cpp
    vwocx/objexplr/methdrop.cpp
    vwocx/objexplr/methlist.cpp
    vwocx/objexplr/MExistDl.cpp
    vwocx/objexplr/MListCtl.cpp
    vwocx/objexplr/moddrop.cpp
    vwocx/objexplr/PExistDl.cpp
    vwocx/objexplr/PListCtl.cpp
    vwocx/objexplr/PMapCtl.cpp
    vwocx/objexplr/PrpEdCtl.cpp
    vwocx/objexplr/ThingCtl.cpp
    vwocx/objexplr/tplstctl.cpp
    vwocx/objexplr/Tree.cpp
    vwocx/objexplr/tvlstctl.cpp
    # From other directories
    vwcommon/syshelp.cpp
    vwcommon/vwuiview.cpp
    vwcommon/cmddel.cpp
    vwocx/vwview/viewctl.cpp
    # Resources and exports
    vwocx/objexplr/objexplr.rc
    vwocx/objexplr/objexplr.def
    # Type library must be generated before RC can embed it
    "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr/objexplr.tlb"
)

add_dependencies(objexplr vworlds_midl)

target_include_directories(objexplr PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr
    ${CMAKE_CURRENT_SOURCE_DIR}/vwocx/vwview
    ${VWORLDS_COMMON_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/vwsystem
)

target_compile_definitions(objexplr PRIVATE
    _WINDLL
    _USRDLL
    _AFXDLL
)

target_precompile_headers(objexplr PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/vwocx/objexplr/stdafx.h>"
)

target_link_libraries(objexplr PRIVATE
    uuid
    ole32
    oleaut32
)

# =============================================================================
# uictrl.ocx - UI Controls (reduced build, excludes vwsfvwct DirectDraw control)
# =============================================================================

# Generate uictrl.tlb from uictrl.odl
add_custom_command(
    OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl/uictrl.tlb"
    COMMAND midl /nologo /win32 /char signed /env win32
        /tlb "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl/uictrl.tlb"
        /h "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl/uictrl_h.h"
        /iid "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl/uictrl_i.c"
        /I "${VWORLDS_COMMON_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl/uictrl.odl"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl/uictrl.odl"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl"
    COMMENT "MIDL: uictrl.odl -> uictrl.tlb"
    VERBATIM
)

add_library(uictrl SHARED
    vwocx/uictrl/StdAfx.cpp
    vwocx/uictrl/uictrl.cpp
    vwocx/uictrl/ahistctl.cpp
    vwocx/uictrl/avlistct.cpp
    vwocx/uictrl/cliocctl.cpp
    vwocx/uictrl/ctdata.cpp
    vwocx/uictrl/cutil.cpp
    # ddutil.cpp EXCLUDED - uses DirectDraw surfaces internally (Phase 5)
    vwocx/uictrl/ddutil_stub.cpp
    vwocx/uictrl/roomctl.cpp
    vwocx/uictrl/selfctl.cpp
    vwocx/uictrl/socxctl.cpp
    vwocx/uictrl/soundctl.cpp
    vwocx/uictrl/userctl.cpp
    vwocx/uictrl/whelpct.cpp
    # vwsfvwct.cpp EXCLUDED - DirectDraw self-view rendering (Phase 5)
    # Base control class from vwview (NOT vwview.cpp - has its own DLL entry)
    vwocx/vwview/viewctl.cpp
    # Shared utilities
    vwcommon/syshelp.cpp
    vwcommon/reghelp.cpp
    vwcommon/vwmenu.cpp
    vwcommon/vwuiview.cpp
    vwcommon/cmddel.cpp
    vwcommon/scripts.cpp
    vwcommon/profhelp.cpp
    # Resources and exports
    vwocx/uictrl/uictrl.rc
    vwocx/uictrl/uictrl.def
    # TLB dependency
    "${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl/uictrl.tlb"
)

add_dependencies(uictrl vworlds_midl)

target_include_directories(uictrl PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl
    ${CMAKE_CURRENT_SOURCE_DIR}/vwocx/vwview
    ${VWORLDS_COMMON_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/compat
    ${CMAKE_CURRENT_SOURCE_DIR}/vwsystem
    ${CMAKE_CURRENT_SOURCE_DIR}/d2d/d2dutils/include
)

target_compile_definitions(uictrl PRIVATE
    _WINDLL
    _USRDLL
    _AFXDLL
)

target_precompile_headers(uictrl PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/vwocx/uictrl/stdafx.h>"
)

target_link_libraries(uictrl PRIVATE
    d2dutils
    uuid
    ole32
    oleaut32
    dsound
    wininet
)

# =============================================================================
# Graphics-dependent components (Phase 5+)
# =============================================================================
if(VWORLDS_BUILD_GRAPHICS)
    message(STATUS "Graphics components enabled - requires D3DRM stub headers")
    # TODO Phase 5: d2d, vwmm, vwstudio, vwrender, vwocx/vwrendvw, etc.
endif()

# =============================================================================
# Summary
# =============================================================================
message(STATUS "")
message(STATUS "VWorlds ${PROJECT_VERSION} Build Configuration:")
message(STATUS "  Platform:    Win32 (x86)")
message(STATUS "  Graphics:    ${VWORLDS_BUILD_GRAPHICS}")
message(STATUS "  Apps:        ${VWORLDS_BUILD_APPS}")
message(STATUS "  Foundatn:    ${VWORLDS_BUILD_FOUNDATN}")
message(STATUS "")
