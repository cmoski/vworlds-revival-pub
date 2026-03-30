@echo off
REM Launch VWorlds with a Drudge actor as your avatar + observer to see yourself
REM Usage: launch_drudge_avatar.bat [worldname]
REM RUN FROM ELEVATED (ADMIN) COMMAND PROMPT
setlocal

set WORLD=%~1
if "%WORLD%"=="" set WORLD=EmpyreanStudy

set BUILD=F:\VWorlds\src\build5\Debug
set SCRIPTS=F:\VWorlds\src\scripts
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe
set CSCRIPT=C:\Windows\SysWOW64\cscript.exe
set WORLDS=F:\VWorlds\Microsoft Virtual Worlds\Worlds
set CONTENT=F:\VWorlds\Microsoft Virtual Worlds\Local Content

echo ============================================
echo   VWorlds: %WORLD% (Drudge Avatar)
echo ============================================

taskkill /f /im renderhost.exe 2>nul
taskkill /f /im serverV2.exe 2>nul
timeout /t 1 /nobreak >nul

for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    %REGSVR% /s /c "%BUILD%\%%d.dll"
)

REM Create EmpyreanStudy if no .vwc exists
if /i "%WORLD%"=="EmpyreanStudy" (
    if not exist "%WORLDS%\EmpyreanStudy.vwc" (
        echo Creating EmpyreanStudy...
        cd /d "%BUILD%"
        %CSCRIPT% /nologo "%CONTENT%\Worlds\Dungeon_5E47\empyrean_study.vbs"
    ) else (
        echo Using existing EmpyreanStudy.vwc
    )
)

echo Starting server...
start "VWorlds Server" "%BUILD%\serverV2.exe"
timeout /t 3 /nobreak >nul

echo Launching Drudge avatar (you)...
echo Command: renderhost --trace --autoconnect --server localhost --world %WORLD% --user Drudge --actor worlds\ACMonsters\02000034.x --cmdwin
start "Drudge Avatar" "%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Drudge --actor worlds\ACMonsters\02000034.x --cmdwin
timeout /t 3 /nobreak >nul

echo Launching Observer (to see the Drudge)...
echo.
echo   In the Drudge window Command Window:
echo     Set me2 = World.User
echo     me2.InitializeActor
echo     me2.PlayAllAnimations
echo.
echo   The Observer window shows what you look like!
echo.
"%BUILD%\renderhost.exe" --trace --autoconnect --server localhost --world %WORLD% --user Observer --avatar alice.spr

taskkill /f /im serverV2.exe 2>nul
