@echo off
REM Register all VWorlds COM DLLs (requires elevation)
REM Run as Administrator!
setlocal
set OUTDIR=%~dp0..\build\Debug
set REGSVR=C:\Windows\SysWOW64\regsvr32.exe

echo Registering VWorlds COM servers...
echo.

for %%d in (vwsystem vwmm vwfound vwprops vwstudio vwrendvw objexplr uictrl) do (
    if exist "%OUTDIR%\%%d.dll" (
        %REGSVR% /s /c "%OUTDIR%\%%d.dll"
        if %ERRORLEVEL% EQU 0 (
            echo   %%d.dll - OK
        ) else (
            echo   %%d.dll - FAILED (error %ERRORLEVEL%)
        )
    ) else (
        echo   %%d.dll - NOT FOUND
    )
)

echo.
echo Registration complete. Use 32-bit reg.exe to verify:
echo   C:\Windows\SysWOW64\reg.exe query HKCR\CLSID /s /f "build"
pause
