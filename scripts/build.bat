@echo off
REM Build all VWorlds targets
setlocal
set CMAKE="F:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
set CONFIG=%1
if "%CONFIG%"=="" set CONFIG=Debug

cd /d "%~dp0..\build"
if not exist CMakeCache.txt (
    echo ERROR: Run configure.bat first
    exit /b 1
)

%CMAKE% --build . --config %CONFIG%
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo === BUILD FAILED ===
    exit /b 1
)
echo.
echo === BUILD OK (%CONFIG%) ===
