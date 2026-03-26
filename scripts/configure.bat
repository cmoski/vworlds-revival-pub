@echo off
REM Configure VWorlds CMake build (run once, or after CMakeLists.txt changes)
setlocal
set CMAKE="F:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

if not exist "%~dp0..\build" mkdir "%~dp0..\build"
cd /d "%~dp0..\build"

%CMAKE% -G "Visual Studio 17 2022" -A Win32 ..
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo === CONFIGURE FAILED ===
    pause
    exit /b 1
)
echo.
echo === CONFIGURE OK ===
