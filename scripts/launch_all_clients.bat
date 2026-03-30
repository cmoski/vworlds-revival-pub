@echo off
REM Launch all three VWorlds clients in the same world
REM Usage: launch_all_clients.bat [worldname]
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   VWorlds: Three Clients, One World
echo   World: %WORLD%
echo ============================================

taskkill /f /im webclient.exe 2>nul
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im cdb.exe 2>nul
timeout /t 1 /nobreak >nul

REM Recreate world to ensure IsAuthor and other properties
if exist "%WORLDS%\%WORLD%.vwc" del /q "%WORLDS%\%WORLD%.vwc"
echo Creating %WORLD%...
cd /d "%BUILD%"
C:\Windows\SysWOW64\cscript.exe /nologo "%SCRIPTS%\create_allworlds.vbs" %WORLD%

echo Starting server...
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Launching Authoring Client (Author)...
start "Authoring Client" "%BUILD%\webclient.exe" --client "Client\html\client.htm" --server localhost --world %WORLD% --user Author
timeout /t 3 /nobreak >nul

echo Launching Basic Client (Explorer)...
start "Basic Client" "%BUILD%\webclient.exe" --client "Client\Basic\Client.htm" --server localhost --world %WORLD% --user Explorer
timeout /t 3 /nobreak >nul

echo Launching MUD Client (Adventurer)...
start "MUD Client" "%BUILD%\webclient.exe" --client "Client\Text\MUD\Client.htm" --server localhost --world %WORLD% --user Adventurer

echo.
echo   Three clients running in %WORLD%:
echo     Author    - Authoring client (tools, property editing)
echo     Explorer  - Basic client (3D view, chat)
echo     Adventurer - MUD client (text adventure)
echo.
echo   Press any key to shut down all clients...
pause >nul

taskkill /f /im webclient.exe 2>nul
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
