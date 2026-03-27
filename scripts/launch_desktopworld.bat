@echo off
REM Launch DesktopWorld - create, serve, render
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CSCRIPT=C:\Windows\SysWOW64\cscript.exe
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   DesktopWorld
echo ============================================

echo [1/4] Killing old processes...
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
timeout /t 1 /nobreak >nul

echo [2/4] Registering DLLs...
for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    %REGSVR% /s /c "%BUILD%\%%d.dll"
)

echo [3/4] Creating world...
del /q "%WORLDS%\desktopworld.vwc" 2>nul
cd /d "%BUILD%"
%CSCRIPT% /nologo "%SCRIPTS%\create_desktopworld.vbs"
if not exist "%WORLDS%\desktopworld.vwc" (
    echo *** World creation failed! ***
    pause
    exit /b 1
)

set CDB="C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe"

echo [4/4] Launching...
start "VWorlds Server (cdb)" %CDB% -g -G -c "sxe -c \".echo ===SERVER ASSERT===;kp 5;g\" asrt;g" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul
%CDB% -g -G -c "sxe -c \".echo ===ASSERT===;kp 5;g\" asrt;g" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world DesktopWorld --user Explorer

taskkill /f /im serverV2.exe 2>nul
taskkill /f /im cdb.exe 2>nul
pause
