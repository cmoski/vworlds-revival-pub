@echo off
REM Kill all VWorlds processes
taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
taskkill /f /im sengine.exe 2>nul
taskkill /f /im cdb.exe 2>nul
echo All VWorlds processes killed.
