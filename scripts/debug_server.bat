@echo off
REM Debug serverV2.exe under cdb (Windows Debugger)
REM Breaks on assertions, access violations, and unhandled exceptions
REM Automatically prints stack trace on crash
setlocal
set CDB="C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe"
set TARGET=F:\VWorlds\src\build5\Debug\serverV2.exe

if not exist %TARGET% set TARGET=F:\VWorlds\src\build\Debug\serverV2.exe
if not exist %TARGET% (
    echo ERROR: serverV2.exe not found. Run build.bat first.
    exit /b 1
)

cd /d "F:\VWorlds\src\build5\Debug"
echo Starting serverV2.exe under debugger...
echo On crash: stack trace will print automatically
echo Interactive: type g=go, kp=stack, q=quit
echo.
%CDB% -c "sxe asrt;sxe av;sxe eh;g" %TARGET%
