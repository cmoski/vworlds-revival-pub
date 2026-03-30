@echo off
REM VWorlds Revival - Uninstall (Unregister COM DLLs)
REM MUST BE RUN AS ADMINISTRATOR
setlocal

net session >nul 2>&1
if %errorLevel% neq 0 (
    echo ERROR: This script must be run as Administrator.
    pause
    exit /b 1
)

set BIN=%~dp0bin
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe

echo Unregistering COM DLLs...
for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    echo   %%d.dll
    %REGSVR% /s /u "%BIN%\%%d.dll"
)

echo.
echo Uninstall complete.
pause
