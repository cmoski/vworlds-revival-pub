@echo off
REM Launch the Authoring Client (Exemplar) — the original developer tools experience
REM Usage: launch_authoring.bat [worldname]
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CSCRIPT=C:\Windows\SysWOW64\cscript.exe
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   VWorlds Authoring Client: %WORLD%
echo ============================================

taskkill /f /im webclient.exe 2>nul
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im cdb.exe 2>nul
timeout /t 1 /nobreak >nul

REM Create world if needed
if not exist "%WORLDS%\%WORLD%.vwc" (
    echo Creating %WORLD%...
    cd /d "%BUILD%"
    %CSCRIPT% /nologo "%SCRIPTS%\create_allworlds.vbs" %WORLD%
)

echo Starting server...
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Launching Authoring Client...
"%BUILD%\webclient.exe" --client "Client\html\client.htm" --server localhost --world %WORLD% --user Author

taskkill /f /im serverV2.exe 2>nul
