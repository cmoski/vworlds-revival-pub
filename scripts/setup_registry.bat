@echo off
REM Import VWorlds registry paths (requires elevation)
REM Uses .reg file to avoid batch escaping issues with trailing backslashes
setlocal

echo Importing VWorlds registry paths...
regedit /s "%~dp0vworlds_paths.reg"

echo Verifying...
C:\Windows\SysWOW64\reg.exe query "HKLM\Software\Microsoft\V-Worlds\Paths"

echo.
echo Done. Restart serverV2.exe to pick up the new paths.
pause
