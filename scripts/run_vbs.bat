@echo off
REM Run a .vbs script using 32-bit wscript (for MsgBox) or cscript (for console)
REM Usage: run_vbs.bat <scriptfile> [/console]
if "%~1"=="" (
    echo Usage: run_vbs.bat ^<scriptfile^> [/console]
    exit /b 1
)
if "%~2"=="/console" (
    C:\Windows\SysWOW64\cscript.exe //nologo "%~1"
) else (
    C:\Windows\SysWOW64\wscript.exe "%~1"
)
