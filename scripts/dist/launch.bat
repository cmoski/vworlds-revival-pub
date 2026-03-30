@echo off
REM VWorlds Revival - Launch a world
REM Usage: launch.bat [worldname]
REM Available: Gallery, Home, Landscape, Office, DesktopWorld
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set ROOT=%~dp0
set BIN=%ROOT%bin
set WORLDS=%ROOT%worlds
set SCRIPTS=%ROOT%scripts

echo ============================================
echo   VWorlds Revival: %WORLD%
echo ============================================
echo.

REM Kill any existing instances
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
timeout /t 1 /nobreak >nul

REM Create world if .vwc doesn't exist
if not exist "%WORLDS%\%WORLD%.vwc" (
    echo Creating %WORLD%...
    if /i "%WORLD%"=="DesktopWorld" (
        cd /d "%BIN%"
        C:\Windows\SysWOW64\cscript.exe /nologo "%SCRIPTS%\create_desktopworld.vbs"
    ) else (
        cd /d "%BIN%"
        C:\Windows\SysWOW64\cscript.exe /nologo "%SCRIPTS%\create_allworlds.vbs" %WORLD%
    )
    if not exist "%WORLDS%\%WORLD%.vwc" (
        echo ERROR: Failed to create world %WORLD%
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
echo     Arrow keys / mouse drag - Navigate
echo     Right-click objects - Context menu
echo     Ctrl+S - Save world
echo     Command Window - Type VBScript commands
echo.
"%BIN%\renderhost.exe" --autoconnect --server localhost --world %WORLD% --user Explorer --avatar alice.spr --cmdwin

taskkill /f /im serverV2.exe 2>nul
