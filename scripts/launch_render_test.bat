@echo off
REM Full VWorlds render test - build, register, server, renderhost
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set CMAKE="F:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CDB="C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe"
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   VWorlds Render Test
echo ============================================

echo [1/5] Killing old processes...
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im sengine.exe 2>nul
taskkill /f /im cdb.exe 2>nul
timeout /t 2 /nobreak >nul

echo [2/5] Building...
cd /d F:\VWorlds\src\build5
%CMAKE% --build . --config Debug
if %ERRORLEVEL% NEQ 0 (
    echo *** BUILD FAILED ***
    pause
    exit /b 1
)
echo   Build OK

echo [3/5] Registering DLLs...
for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    %REGSVR% /s /c "%BUILD%\%%d.dll"
)
echo   Done

echo [4/5] Checking world...
if not exist "%WORLDS%\roomworld2.vwc" (
    echo   World not found. Creating via sengine...
    echo   Opening sengine - load create_world_with_room.scr, Select All, Run
    cd /d "%BUILD%"
    start "sengine" /wait "%BUILD%\sengine.exe"
    if not exist "%WORLDS%\roomworld2.vwc" (
        echo   *** World still not found! ***
        pause
        exit /b 1
    )
)
echo   World OK

echo [5/5] Launching server + renderhost...
cd /d "%BUILD%"
start "VWorlds Server (cdb)" %CDB% -g -G -c "sxe -c \".echo ===SERVER ASSERT===;kp 5;g\" asrt;g" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Starting renderhost under debugger...
echo.
%CDB% -g -G -c "sxe -c \".echo ===ASSERT===;kp 5;g\" asrt;g" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world RoomWorld2 --user RenderUser

echo.
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im cdb.exe 2>nul
pause
