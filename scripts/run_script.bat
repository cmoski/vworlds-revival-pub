@echo off
REM Run a .scr or .vbs script using 32-bit cscript
REM Usage: run_script.bat <scriptfile>
if "%~1"=="" (
    echo Usage: run_script.bat ^<scriptfile^>
    exit /b 1
)
C:\Windows\SysWOW64\cscript.exe //nologo "%~1"
