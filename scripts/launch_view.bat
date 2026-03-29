@echo off
REM Launch VWorlds viewer (no edit tools) for any world
REM Usage: launch_view.bat [worldname]
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=Gallery

set BUILD=F:\VWorlds\src\build5\Debug
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CDB="C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe"

echo ============================================
echo   VWorlds Viewer: %WORLD%
echo ============================================

taskkill /f /im renderhost.exe 2>/dev/null
taskkill /f /im serverV2.exe 2>/dev/null
taskkill /f /im cdb.exe 2>/dev/null
timeout /t 1 /nobreak >/dev/null

for %%d in (vwsystem vwmm vwfound vwprops vwrendvw objexplr uictrl) do (
    %REGSVR% /s /c "%BUILD%\%%d.dll"
)

echo Starting server...
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >/dev/null

echo Starting viewer...
%CDB% -g -G -c "sxe -c \"g\" bpe;sxe -c \".echo ===CRASH===;kp 10;g\" av;g" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Viewer --cmdwin

taskkill /f /im serverV2.exe 2>/dev/null
taskkill /f /im cdb.exe 2>/dev/null
pause
