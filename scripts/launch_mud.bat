@echo off
REM Launch the MUD (text-only) client
REM Usage: launch_mud.bat [worldname]
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   VWorlds MUD Client: %WORLD%
echo ============================================

taskkill /f /im webclient.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
timeout /t 1 /nobreak >nul

if not exist "%WORLDS%\%WORLD%.vwc" (
    echo Creating %WORLD%...
    cd /d "%BUILD%"
    C:\Windows\SysWOW64\cscript.exe /nologo "%SCRIPTS%\create_allworlds.vbs" %WORLD%
)

echo Starting server...
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Launching MUD Client...
"%BUILD%\webclient.exe" --client "Client\Text\MUD\Client.htm" --server localhost --world %WORLD% --user MUDUser

taskkill /f /im serverV2.exe 2>nul
