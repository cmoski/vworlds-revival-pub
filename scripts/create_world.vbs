' create_world.vbs - Create a new VWorlds world via COM
' Usage: cscript create_world.vbs [worldname]
' The server (serverV2.exe) must be running first.

Dim worldName
If WScript.Arguments.Count > 0 Then
    worldName = WScript.Arguments(0)
Else
    worldName = "TestWorld"
End If

WScript.Echo "Creating world: " & worldName

' Connect to the running VWorlds server
Dim server
Set server = CreateObject("VWSYSTEM.Server.1")

WScript.Echo "Connected to server"

' Create the world
Dim world, status
On Error Resume Next
server.CreateWorld worldName, status
If Err.Number <> 0 Then
    WScript.Echo "CreateWorld failed: " & Err.Description & " (0x" & Hex(Err.Number) & ")"
    WScript.Quit 1
End If
On Error GoTo 0

WScript.Echo "World created: " & worldName
WScript.Echo "Status: " & status
