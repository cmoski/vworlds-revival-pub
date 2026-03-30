@echo off
REM VWorlds Revival - Install
REM Registers COM DLLs, sets up registry paths, checks prerequisites
REM MUST BE RUN AS ADMINISTRATOR
setlocal enabledelayedexpansion

echo ============================================
echo   VWorlds Revival - Installer
echo ============================================
echo.

net session >nul 2>&1
if %errorLevel% neq 0 (
    echo ERROR: This script must be run as Administrator.
    echo Right-click and select "Run as administrator"
    pause
    exit /b 1
)

set ROOT=%~dp0
set BIN=%ROOT%bin
set CONTENT=%ROOT%content
set WORLDS=%ROOT%worlds
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe

REM Check prerequisites
echo Checking prerequisites...
if not exist "%BIN%\vwsystem.dll" (
    echo ERROR: bin\vwsystem.dll not found. Extract the full release zip first.
    pause
    exit /b 1
)
if not exist "%BIN%\d3drm.dll" (
    echo ERROR: bin\d3drm.dll not found.
    pause
    exit /b 1
)

REM Check for VC++ Redistributable (x86)
reg query "HKLM\SOFTWARE\WOW6432Node\Microsoft\VisualStudio\14.0\VC\Runtimes\x86" /v Version >nul 2>&1
if %errorLevel% neq 0 (
    echo WARNING: Visual C++ 2022 Redistributable (x86) may not be installed.
    echo Download from: https://aka.ms/vs/17/release/vc_redist.x86.exe
    echo.
)

REM Create worlds directory if needed
if not exist "%WORLDS%" mkdir "%WORLDS%"

REM Register COM DLLs
echo.
echo Registering COM DLLs...
set REG_OK=0
set REG_FAIL=0
for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    if exist "%BIN%\%%d.dll" (
        %REGSVR% /s /c "%BIN%\%%d.dll"
        if errorlevel 1 (
            echo   FAIL: %%d.dll
            set /a REG_FAIL+=1
        ) else (
            echo   OK: %%d.dll
            set /a REG_OK+=1
        )
    ) else (
        echo   SKIP: %%d.dll (not found)
    )
)
echo   %REG_OK% registered, %REG_FAIL% failed

REM Set up registry paths (using install location)
echo.
echo Setting registry paths...

REM Escape backslashes for reg add
set "REGROOT=%ROOT:\=\\%"
set "REGBIN=%BIN:\=\\%"
set "REGCONTENT=%CONTENT:\=\\%"
set "REGWORLDS=%WORLDS:\=\\%"

C:\Windows\SysWOW64\reg.exe add "HKLM\Software\Microsoft\V-Worlds\Paths" /v WorldPath /t REG_SZ /d "%WORLDS%\" /f >nul
C:\Windows\SysWOW64\reg.exe add "HKLM\Software\Microsoft\V-Worlds\Paths" /v ContentPath /t REG_SZ /d "%CONTENT%\" /f >nul
C:\Windows\SysWOW64\reg.exe add "HKLM\Software\Microsoft\V-Worlds\Paths" /v AvatarGraphicsPath /t REG_SZ /d "%CONTENT%\Avatar Graphics\" /f >nul
C:\Windows\SysWOW64\reg.exe add "HKLM\Software\Microsoft\V-Worlds\Paths" /v AvatarPath /t REG_SZ /d "%CONTENT%\Avatar Graphics\" /f >nul
C:\Windows\SysWOW64\reg.exe add "HKLM\Software\Microsoft\V-Worlds\Paths" /v HelpPath /t REG_SZ /d "%ROOT%docs\" /f >nul
C:\Windows\SysWOW64\reg.exe add "HKLM\Software\Microsoft\V-Worlds\Paths" /v WorldWizPath /t REG_SZ /d "%CONTENT%\SDK\Wizards\World\" /f >nul
echo   Registry paths set to: %ROOT%

echo.
echo ============================================
echo   Installation complete!
echo ============================================
echo.
echo   Run launch.bat to start a world.
echo   Run launch.bat DesktopWorld for the full lobby.
echo.
pause
