@echo off
REM Fix VWorlds registry paths to include trailing backslashes
REM (the original code expects trailing backslashes)
setlocal
set REG=C:\Windows\SysWOW64\reg.exe
set KEY=HKLM\Software\Microsoft\V-Worlds\Paths

%REG% add "%KEY%" /v WorldPath /t REG_SZ /d "F:\VWorlds\Microsoft Virtual Worlds\Worlds\" /f
%REG% add "%KEY%" /v AvatarPath /t REG_SZ /d "F:\VWorlds\Microsoft Virtual Worlds\Avatars\" /f
%REG% add "%KEY%" /v ContentPath /t REG_SZ /d "F:\VWorlds\Microsoft Virtual Worlds\Local Content\" /f
%REG% add "%KEY%" /v AvatarGraphicsPath /t REG_SZ /d "F:\VWorlds\Microsoft Virtual Worlds\Avatar Graphics\" /f
%REG% add "%KEY%" /v HelpPath /t REG_SZ /d "F:\VWorlds\Microsoft Virtual Worlds\docs\" /f

echo.
%REG% query "%KEY%"
pause
