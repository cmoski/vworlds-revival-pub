@echo off
REM VWorlds Revival - Install (Register COM DLLs)
REM MUST BE RUN AS ADMINISTRATOR
setlocal

echo ============================================
echo   VWorlds Revival - Installer
echo ============================================
echo.

net session >nul 2>&1
if %errorLevel% neq 0 (
    echo ERROR: This script must be run as Administrator.
    echo Right-click and select "Run as administrator"
    pause
    exit /b 1
)

set BIN=%~dp0bin
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe

echo Registering COM DLLs...
for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    echo   %%d.dll
    %REGSVR% /s /c "%BIN%\%%d.dll"
    if errorlevel 1 echo   WARNING: %%d.dll registration failed
)

echo.
echo Installation complete!
echo Run launch.bat to start a world.
echo.
pause
