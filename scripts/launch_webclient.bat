@echo off
REM Launch the original HTML VWorlds client via WebBrowser control
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CSCRIPT=C:\Windows\SysWOW64\cscript.exe
set CDB="C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe"
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds

echo ============================================
echo   VWorlds Web Client
echo ============================================

taskkill /f /im webclient.exe 2>nul
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im cdb.exe 2>nul
timeout /t 1 /nobreak >nul

for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    %REGSVR% /s /c "%BUILD%\%%d.dll"
)

echo Creating Gallery...
if not exist "%WORLDS%\gallery.vwc" (
    cd /d "%BUILD%"
    %CSCRIPT% /nologo "%SCRIPTS%\create_allworlds.vbs" Gallery
)

echo Starting server...
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Starting renderhost (Alice) for cross-client testing...
start "RenderHost Alice" %CDB% -g -G -c "sxe -c \"g\" bpe;sxe -c \".echo ===CRASH===;kp 10;g\" av;g" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world Gallery --user Alice --avatar alice.spr
timeout /t 3 /nobreak >nul

echo Starting web client under debugger...
REM Auto-continue through debug asserts (bpe = breakpoint on int3)
%CDB% -g -G -c "sxe -c \"g\" bpe;sxe -c \".echo ===CRASH===;kp 10;g\" av;g" "%BUILD%\webclient.exe"

taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im cdb.exe 2>nul
pause
