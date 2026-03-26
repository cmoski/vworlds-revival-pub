' test_typelib.vbs - Test if VWorlds type library is accessible
' Run with: C:\Windows\SysWOW64\cscript.exe test_typelib.vbs
On Error Resume Next

' Try to create World via ProgID
Dim world
Set world = CreateObject("VWSYSTEM.World.1")
If Err.Number <> 0 Then
    WScript.Echo "CreateObject failed: " & Err.Description
    WScript.Quit 1
End If
WScript.Echo "World created: " & TypeName(world)

' Try property access via IDispatch
Dim v
v = world.Version
WScript.Echo "Version: " & v & " (err: 0x" & Hex(Err.Number) & " " & Err.Description & ")"
Err.Clear

' Try ServerSide
world.ServerSide = False
WScript.Echo "ServerSide: err 0x" & Hex(Err.Number) & " " & Err.Description
Err.Clear

' Try TraceLevel
world.TraceLevel("*") = 4
WScript.Echo "TraceLevel: err 0x" & Hex(Err.Number) & " " & Err.Description
Err.Clear
