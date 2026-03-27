' create_world.vbs - Create VWorlds world via cscript.exe (no sengine needed)
' Run with: C:\Windows\SysWOW64\cscript.exe /nologo create_world.vbs
Option Explicit
On Error Resume Next

Dim Client, World

' Create VWClient COM object (same as sengine's XObject)
Set Client = CreateObject("VWSYSTEM.Client.1")
If Err.Number <> 0 Then
    WScript.Echo "FAIL: CreateObject(VWSYSTEM.Client.1): " & Err.Description
    WScript.Quit 1
End If
WScript.Echo "VWClient created"

' Initialize the client (sengine does this in OnScriptLoad)
Dim pClient
Set pClient = Client
pClient.Initialize
If Err.Number <> 0 Then
    WScript.Echo "  Initialize: " & Err.Description & " (non-fatal)"
    Err.Clear
End If

' Connect locally to create world
Set World = Client.ConnectLocal("RoomWorld2")
If Err.Number <> 0 Then
    WScript.Echo "FAIL: ConnectLocal: " & Err.Description
    WScript.Quit 1
End If
WScript.Echo "World created, version: " & World.Version

' Set trace level
World.TraceLevel("*") = 4

' Load modules (canonical order from vwstd.scr)
WScript.Echo "Loading modules..."
World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3
If Err.Number <> 0 Then
    WScript.Echo "  Multimedia: " & Err.Description & " (0x" & Hex(Err.Number) & ")"
    Err.Clear
Else
    WScript.Echo "  Multimedia OK"
End If

World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3
If Err.Number <> 0 Then
    WScript.Echo "  Studio: " & Err.Description & " (0x" & Hex(Err.Number) & ")"
    Err.Clear
Else
    WScript.Echo "  Studio OK"
End If

World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3
If Err.Number <> 0 Then
    WScript.Echo "  Foundation: " & Err.Description & " (0x" & Hex(Err.Number) & ")"
    Err.Clear
Else
    WScript.Echo "  Foundation OK"
End If

' Set up global properties
World.Global.DefaultSpriteFile = "default.spr"
Err.Clear
World.Global.DefaultAvatarExemplar.InitializeSpriteGraphics "default.spr", 0.0, 1.0, 0.0, 1.0, 0.0, 0.0
Err.Clear
WScript.Echo "Global properties set"

' Create room
Dim Room
Set Room = World.CreateInstance("MainRoom", World.Exemplar("Room"))
If Err.Number <> 0 Then
    WScript.Echo "  Room: " & Err.Description
    Err.Clear
Else
    World.Global.DefaultRoom = Room
    Err.Clear
    Room.GeometryName = "" : Err.Clear
    WScript.Echo "Room created"
End If

' Create sprite-textured artifact
Dim obj
Set obj = World.CreateInstance("TestCube", World.Exemplar("Artifact"))
If Err.Number = 0 Then
    obj.MoveInto Room
    obj.GeometryName = "client\shared\default.spr"
    Err.Clear
    WScript.Echo "TestCube created"
End If
Err.Clear

' Create textured 3D vending machine
Dim vend
Set vend = World.CreateInstance("VendingMachine", World.Exemplar("Artifact"))
If Err.Number = 0 Then
    vend.MoveInto Room
    vend.GeometryName = "client\exemplar\vending\hvend.x"
    Err.Clear
    vend.Position.X = 3.0
    Err.Clear
    WScript.Echo "VendingMachine created"
End If
Err.Clear

' Create room boundary
Dim boundary
Set boundary = World.Global.CreateBoundary()
If Err.Number = 0 Then
    boundary.InsertVertexSafe -1, -5.0, -5.0
    boundary.InsertVertexSafe -1, 5.0, -5.0
    boundary.InsertVertexSafe -1, 5.0, 5.0
    boundary.InsertVertexSafe -1, -5.0, 5.0
    boundary.HeightUpper = 3.0
    boundary.HeightLower = 0.0
    boundary.IsPassable = False
    Err.Clear

    Dim blist
    Set blist = World.Global.CreateBoundaryList()
    If Err.Number = 0 Then
        blist.Add boundary
        Room.BoundaryList = blist
        Err.Clear
        WScript.Echo "Boundary created"
    End If
End If
Err.Clear

WScript.Echo "Done!"
WScript.Quit 0
