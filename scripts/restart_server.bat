@echo off
REM Restart the VWorlds server (kill existing, build, launch)
setlocal
call "%~dp0kill_server.bat"
timeout /t 1 /nobreak >nul
call "%~dp0build_target.bat" serverV2 Debug
if %ERRORLEVEL% NEQ 0 exit /b 1
call "%~dp0run_server.bat"
