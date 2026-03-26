@echo off
REM Set up VWorlds registry paths (requires elevation)
REM Adjust VWORLDS_ROOT below to match your installation
setlocal

set VWORLDS_ROOT=F:\VWorlds\Microsoft Virtual Worlds
set REG_KEY=HKLM\Software\Microsoft\V-Worlds\Paths
set REG=C:\Windows\SysWOW64\reg.exe

echo Setting VWorlds paths in registry...
echo Root: %VWORLDS_ROOT%
echo Key:  %REG_KEY%
echo.

%REG% add "%REG_KEY%" /v WorldPath /t REG_SZ /d "%VWORLDS_ROOT%\Worlds" /f
%REG% add "%REG_KEY%" /v AvatarPath /t REG_SZ /d "%VWORLDS_ROOT%\Avatars" /f
%REG% add "%REG_KEY%" /v ContentPath /t REG_SZ /d "%VWORLDS_ROOT%\Local Content" /f
%REG% add "%REG_KEY%" /v AvatarGraphicsPath /t REG_SZ /d "%VWORLDS_ROOT%\Avatar Graphics" /f
%REG% add "%REG_KEY%" /v HelpPath /t REG_SZ /d "%VWORLDS_ROOT%\docs" /f
%REG% add "%REG_KEY%" /v WorldWizardPath /t REG_SZ /d "%VWORLDS_ROOT%\Local Content\SDK\Wizards\World" /f

echo.
echo Verifying...
%REG% query "%REG_KEY%"

echo.
echo Done. Restart serverV2.exe to pick up the new paths.
pause
