@echo off
REM Set VWorlds registry paths based on current script location.
REM Uses HKCU — no elevation needed for path config.
setlocal

set "ROOT=%~dp0.."
set "P=%ROOT:\=\\%"

echo Setting VWorlds registry paths...
echo   Root: %ROOT%

> "%TEMP%\vworlds_paths.reg" (
    echo Windows Registry Editor Version 5.00
    echo.
    echo [HKEY_CURRENT_USER\Software\Microsoft\V-Worlds]
    echo "InstallPath"="%P%\\"
    echo "isSDK"="1"
    echo "LocalGroup"=""
    echo "MaxUsers"=dword:00000019
    echo "Authentication"="0"
    echo.
    echo [HKEY_CURRENT_USER\Software\Microsoft\V-Worlds\Paths]
    echo "WorldPath"="%P%\\worlds\\"
    echo "ContentPath"="%P%\\content\\"
    echo "AvatarGraphicsPath"="%P%\\content\\Avatar Graphics\\"
    echo "AvatarPath"="%P%\\content\\Avatar Graphics\\"
    echo "HelpPath"="%P%\\docs\\"
    echo "WorldWizPath"="%P%\\content\\SDK\\Wizards\\World\\"
)
C:\Windows\SysWOW64\reg.exe import "%TEMP%\vworlds_paths.reg" >nul 2>&1

echo Verifying...
C:\Windows\SysWOW64\reg.exe query "HKCU\Software\Microsoft\V-Worlds\Paths"

echo.
echo Done. Restart serverV2.exe to pick up the new paths.
pause
