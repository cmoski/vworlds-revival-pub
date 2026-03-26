@echo off
REM Build a specific VWorlds target
REM Usage: build_target.bat <target> [Debug|Release]
REM Example: build_target.bat vwmm Debug
setlocal
set CMAKE="F:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
set TARGET=%1
set CONFIG=%2
if "%TARGET%"=="" (
    echo Usage: build_target.bat ^<target^> [Debug^|Release]
    echo Targets: vwsystem vwfound vwprops vwmm vwstudio vwrendvw sengine serverV2 jpeglib d2dutils objexplr uictrl
    exit /b 1
)
if "%CONFIG%"=="" set CONFIG=Debug

cd /d "%~dp0..\build"
%CMAKE% --build . --target %TARGET% --config %CONFIG%
if %ERRORLEVEL% NEQ 0 (
    echo === BUILD FAILED: %TARGET% ===
    exit /b 1
)
echo === BUILD OK: %TARGET% (%CONFIG%) ===
