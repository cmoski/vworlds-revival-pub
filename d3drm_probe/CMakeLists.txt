cmake_minimum_required(VERSION 3.20)
project(d3drm_probe LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(D3DRM_REF_ROOT "F:/VWorlds/D3DRM Tests/Reference")
set(D3DRM_CERBERUS_ROOT "F:/VWorlds/D3DRM Tests/Reference/DirectX_contrib_from_cerberus")

add_executable(d3drm_probe main.cpp)
target_compile_definitions(d3drm_probe PRIVATE WIN32 _WINDOWS)

add_executable(d3drm_cube cube_main.cpp)
target_compile_definitions(d3drm_cube PRIVATE WIN32 _WINDOWS)
target_include_directories(d3drm_cube PRIVATE
    "${D3DRM_CERBERUS_ROOT}/include"
)
target_link_directories(d3drm_cube PRIVATE
    "${D3DRM_CERBERUS_ROOT}/lib"
)
target_link_libraries(d3drm_cube PRIVATE
    d3drm
    ddraw
    dxguid
    ole32
    oleaut32
    uuid
    winmm
)
target_link_options(d3drm_cube PRIVATE /SAFESEH:NO)
add_custom_command(TARGET d3drm_cube POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${D3DRM_REF_ROOT}/d3drm.dll"
        "$<TARGET_FILE_DIR:d3drm_cube>/d3drm.dll"
)
