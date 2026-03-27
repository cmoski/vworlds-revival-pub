@echo off
REM Test save/reload persistence cycle
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CSCRIPT=C:\Windows\SysWOW64\cscript.exe
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   VWorlds Persistence Test
echo ============================================

taskkill /f /im serverV2.exe 2>nul
timeout /t 1 /nobreak >nul

REM Register DLLs
for %%d in (vwsystem vwmm vwfound vwprops) do (
    %REGSVR% /s /c "%BUILD%\%%d.dll"
)

REM Clean up old test world
del /q "%WORLDS%\persisttest.vwc" 2>nul
del /q "%WORLDS%\persisttest.bak.vwc" 2>nul

echo.
echo --- Phase 1: Create world (ConnectLocal) and save ---
cd /d "%BUILD%"
%CSCRIPT% /nologo "%SCRIPTS%\test_persistence.vbs" save
if errorlevel 1 goto :fail

echo.
echo --- Starting server (will load saved .vwc) ---
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo --- Phase 2: Connect to server and verify ---
%CSCRIPT% /nologo "%SCRIPTS%\test_persistence.vbs" verify

taskkill /f /im serverV2.exe 2>nul
echo.
echo ============================================
echo   Test complete!
echo ============================================
pause
goto :eof

:fail
echo FAILED!
pause
