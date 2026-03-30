@echo off
REM VWorlds Revival - Multi-user test (two clients)
REM Usage: launch_multiuser.bat [worldname]
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set BIN=%~dp0bin

echo ============================================
echo   VWorlds Revival: %WORLD% (Multi-user)
echo ============================================

taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
timeout /t 1 /nobreak >nul

echo Starting server...
start "VWorlds Server" "%BIN%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Launching Alice...
start "Alice" "%BIN%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Alice --avatar alice.spr --cmdwin
timeout /t 3 /nobreak >nul

echo Launching Bob...
"%BIN%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Bob --avatar bob.spr --cmdwin

taskkill /f /im serverV2.exe 2>nul
