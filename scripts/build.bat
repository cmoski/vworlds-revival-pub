@echo off
REM VWorlds Build Script
REM Usage: build.bat [target] [config]
REM   build.bat              - build all targets (Debug)
REM   build.bat vwsystem     - build vwsystem only
REM   build.bat renderhost   - build renderhost only
REM   build.bat uictrl       - build uictrl only
REM   build.bat configure    - reconfigure CMake
REM   build.bat clean        - clean all then build
REM   build.bat all Release  - build all in Release
setlocal

set CMAKE="F:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
set BUILD=F:\VWorlds\src\build5
set TARGET=%~1
set CONFIG=%~2
if "%CONFIG%"=="" set CONFIG=Debug

REM Configure if needed
if not exist "%BUILD%\CMakeCache.txt" (
    echo Configuring CMake...
    %CMAKE% -G "Visual Studio 17 2022" -A Win32 -S F:\VWorlds\src -B "%BUILD%"
)

if /i "%TARGET%"=="configure" (
    echo Reconfiguring...
    %CMAKE% -G "Visual Studio 17 2022" -A Win32 -S F:\VWorlds\src -B "%BUILD%"
    goto :eof
)

if /i "%TARGET%"=="clean" (
    echo Clean build...
    %CMAKE% --build "%BUILD%" --config %CONFIG% --clean-first
    goto :eof
)

if "%TARGET%"=="" (
    echo Building all targets [%CONFIG%]...
    %CMAKE% --build "%BUILD%" --config %CONFIG%
) else (
    echo Building %TARGET% [%CONFIG%]...
    %CMAKE% --build "%BUILD%" --target %TARGET% --config %CONFIG%
)
