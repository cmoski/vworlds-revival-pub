@echo off
REM VWorlds Revival - Launch the original 1999 HTML+VBScript+ActiveX client
REM Usage: launch_webclient.bat [worldname]
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set ROOT=%~dp0
set BIN=%ROOT%bin
set WORLDS=%ROOT%worlds
set SCRIPTS=%ROOT%scripts

echo ============================================
echo   VWorlds Revival: %WORLD% (Original Client)
echo ============================================
echo.
echo   This launches the original 1999 HTML client
echo   in a WebBrowser control. Turn off hardware
echo   acceleration in Options if rendering fails.
echo.

taskkill /f /im webclient.exe 2>nul
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
)

echo Starting server...
start "VWorlds Server" "%BIN%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Launching original HTML client...
"%BIN%\webclient.exe" --server localhost --world %WORLD%

taskkill /f /im serverV2.exe 2>nul
