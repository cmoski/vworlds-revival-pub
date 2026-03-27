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

echo Starting server...
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Starting Player 1 (Alice)...
start "Alice" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Alice

timeout /t 2 /nobreak >nul

echo Starting Player 2 (Bob)...
start "Bob" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Bob

echo.
echo Both clients launched. Look for each other's avatar sprites!
echo Close both render windows when done.
echo.
pause
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
