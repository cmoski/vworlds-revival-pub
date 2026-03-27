@echo off
REM Two-client multi-user test
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CSCRIPT=C:\Windows\SysWOW64\cscript.exe
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

echo ============================================
echo   VWorlds Multi-User Test: %WORLD%
echo ============================================

taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
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

set CDB="C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe"

echo Starting server under debugger...
start "VWorlds Server (cdb)" %CDB% -g -G -c "sxe -c \".echo ===SERVER ASSERT===;kp 5;g\" asrt;g" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Starting Player 1 (Alice - alice.spr) under debugger...
start "Alice (cdb)" %CDB% -g -G -c "sxe -c \".echo ===ASSERT===;kp 5;g\" asrt;g" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Alice --avatar alice.spr

timeout /t 2 /nobreak >nul

echo Starting Player 2 (Bob - bob.spr) under debugger...
start "Bob (cdb)" %CDB% -g -G -c "sxe -c \".echo ===ASSERT===;kp 5;g\" asrt;g" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Bob --avatar bob.spr

echo.
echo Both clients launched with different avatars!
echo Close both render windows when done.
echo.
pause
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
