@echo off
REM Kill all running VWorlds server instances
taskkill /f /im serverV2.exe 2>nul
if %ERRORLEVEL% EQU 0 (
    echo serverV2.exe terminated.
) else (
    echo No serverV2.exe running.
)
