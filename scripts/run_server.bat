@echo off
REM Launch the VWorlds server
setlocal
set TARGET=F:\VWorlds\src\build\Debug\serverV2.exe
if not exist %TARGET% set TARGET=F:\VWorlds\src\build5\Debug\serverV2.exe
if not exist %TARGET% (
    echo ERROR: serverV2.exe not found. Run build.bat first.
    exit /b 1
)
start "" %TARGET%
