@echo off
REM VWorlds Revival - Launch a world
REM Usage: launch.bat [worldname]
REM Available: Gallery, Home, Landscape, Office, DesktopWorld, EmpyreanStudy
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set BIN=%~dp0bin
set CONTENT=%~dp0content

echo ============================================
echo   VWorlds Revival: %WORLD%
echo ============================================
echo.

REM Kill any existing instances
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
timeout /t 1 /nobreak >nul

REM Create world if .vwc doesn't exist
if not exist "%~dp0worlds\%WORLD%.vwc" (
    echo Creating %WORLD%...
    if exist "%~dp0worlds\create_%WORLD%.vbs" (
        cd /d "%BIN%"
        C:\Windows\SysWOW64\cscript.exe /nologo "%~dp0worlds\create_%WORLD%.vbs"
    ) else (
        echo ERROR: No creation script for %WORLD%
        echo Available worlds: Gallery, Home, Landscape, Office, DesktopWorld
        pause
        exit /b 1
    )
)

echo Starting server...
start "VWorlds Server" "%BIN%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Launching renderer...
echo.
echo   Controls:
echo     Arrow keys / mouse - Navigate
echo     Command Window - Type VBScript commands
echo     Ctrl+S - Save world
echo.
"%BIN%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Explorer --avatar alice.spr --cmdwin

taskkill /f /im serverV2.exe 2>nul
