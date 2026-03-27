@echo off
REM Launch any VWorlds world: Gallery, Home, Landscape, Office, DesktopWorld
REM Usage: launch_world.bat [worldname]
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CSCRIPT=C:\Windows\SysWOW64\cscript.exe
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   VWorlds: %WORLD%
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

echo Launching renderer...
"%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Explorer

taskkill /f /im serverV2.exe 2>nul
pause
