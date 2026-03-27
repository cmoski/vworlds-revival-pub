@echo off
REM Launch VWorlds with Studio editing tools
REM Usage: launch_editor.bat [worldname]
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CSCRIPT=C:\Windows\SysWOW64\cscript.exe
set CDB="C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe"
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   VWorlds Editor: %WORLD%
echo ============================================

taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im cdb.exe 2>nul
timeout /t 1 /nobreak >nul

for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    %REGSVR% /s /c "%BUILD%\%%d.dll"
)

echo Creating %WORLD%...
if /i "%WORLD%"=="DesktopWorld" (
    del /q "%WORLDS%\desktopworld.vwc" 2>nul
    cd /d "%BUILD%"
    %CSCRIPT% /nologo "%SCRIPTS%\create_desktopworld.vbs"
) else (
    del /q "%WORLDS%\%WORLD%.vwc" 2>nul
    cd /d "%BUILD%"
    %CSCRIPT% /nologo "%SCRIPTS%\create_allworlds.vbs" %WORLD%
)

echo Starting server under debugger...
start "VWorlds Server (cdb)" %CDB% -g -G -c "sxe -c \".echo ===ASSERT===;kp 5;g\" asrt;g" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Starting editor under debugger...
%CDB% -g -G -c "sxe -c \".echo ===ASSERT===;kp 5;g\" asrt;g" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Editor --edit

taskkill /f /im serverV2.exe 2>nul
taskkill /f /im cdb.exe 2>nul
pause
