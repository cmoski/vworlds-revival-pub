@echo off
REM Full VWorlds render test with logging
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set BUILD=F:\VWorlds\src\build5\Debug
set LOGS=F:\VWorlds\src\logs
set CMAKE="F:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe

if not exist "%LOGS%" mkdir "%LOGS%"

echo ============================================
echo   VWorlds Render Test Launcher
echo ============================================

echo [1/5] Killing old processes...
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im cdb.exe 2>nul
timeout /t 2 /nobreak >nul

echo [2/5] Building...
cd /d F:\VWorlds\src\build5
%CMAKE% --build . --config Debug > "%LOGS%\build.log" 2>&1
if %ERRORLEVEL% NEQ 0 (
    echo *** BUILD FAILED ***
    type "%LOGS%\build.log" | findstr /i "error"
    pause
    exit /b 1
)
echo   Build OK

echo [3/5] Registering DLLs...
for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    %REGSVR% /s /c "%BUILD%\%%d.dll"
)
echo   Done

echo [4/5] Starting server...
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo [5/5] Starting renderhost (logging to %LOGS%\renderhost.log)...
start "VWorlds Render" "%BUILD%\renderhost.exe" --trace --log "%LOGS%\renderhost.log" --autoconnect --server localhost --world RoomWorld2 --user RenderUser

echo.
echo ============================================
echo   VWorlds is running!
echo   Renderhost log: %LOGS%\renderhost.log
echo ============================================
echo.
echo Press any key to STOP and show log...
pause >nul

taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul

echo.
echo === Renderhost Log ===
type "%LOGS%\renderhost.log"
echo.
pause
