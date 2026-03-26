@echo off
REM Full VWorlds render test - fully automated, no sengine
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set CMAKE="F:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CSCRIPT=C:\Windows\SysWOW64\cscript.exe
set CDB="C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe"
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   VWorlds Render Test (fully automated)
echo ============================================

echo [1/6] Killing old processes...
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im sengine.exe 2>nul
taskkill /f /im cdb.exe 2>nul
timeout /t 2 /nobreak >nul

echo [2/6] Building...
cd /d F:\VWorlds\src\build5
%CMAKE% --build . --config Debug
if %ERRORLEVEL% NEQ 0 (
    echo *** BUILD FAILED ***
    pause
    exit /b 1
)
echo   Build OK

echo [3/6] Registering DLLs...
for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    %REGSVR% /s /c "%BUILD%\%%d.dll"
)
echo   Done

echo [4/6] Creating world...
if exist "%WORLDS%\roomworld2.vwc" (
    echo   Deleting old world...
    del /q "%WORLDS%\roomworld2.vwc" 2>nul
)
cd /d "%BUILD%"
%CSCRIPT% /nologo "%SCRIPTS%\create_world.vbs"
if not exist "%WORLDS%\roomworld2.vwc" (
    echo   *** World creation failed! ***
    pause
    exit /b 1
)
echo   World OK

echo [5/6] Starting server...
cd /d "%BUILD%"
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo [6/6] Starting renderhost...
echo.
"%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world RoomWorld2 --user RenderUser

echo.
taskkill /f /im serverV2.exe 2>nul
pause
