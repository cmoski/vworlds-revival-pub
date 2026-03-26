@echo off
REM Debug renderhost.exe under cdb
REM Usage: debug_renderhost.bat [extra args]
REM Example: debug_renderhost.bat --autoconnect --server localhost --world TestWorld --user RenderUser
cd /d "F:\VWorlds\src\build5\Debug"
echo Starting renderhost.exe under debugger...
echo On break: kp=stack, g=go, q=quit
echo.
"C:\Program Files (x86)\Windows Kits\10\Debuggers\x86\cdb.exe" -c "sxe asrt;sxe av;g" "F:\VWorlds\src\build5\Debug\renderhost.exe" --trace %*
