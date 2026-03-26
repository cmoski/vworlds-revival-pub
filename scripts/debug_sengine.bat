@echo off
REM Debug sengine.exe under cdb
REM Breaks on assertions, access violations, and C++ exceptions
cd /d "F:\VWorlds\src\build5\Debug"
echo Starting sengine.exe under debugger...
echo On break: kp=stack, g=go, q=quit
echo.
"C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe" -c "sxe asrt;sxe av;g" "F:\VWorlds\src\build5\Debug\sengine.exe"
