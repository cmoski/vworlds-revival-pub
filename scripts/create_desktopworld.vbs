' create_desktopworld.vbs - Create DesktopWorld with lobby geometry
' Run with: C:\Windows\SysWOW64\cscript.exe /nologo create_desktopworld.vbs
Option Explicit
On Error Resume Next

Dim Client, World
Dim DW_MODELS
DW_MODELS = "worlds\desktopworld\models\lobby\"

' Create VWClient
Set Client = CreateObject("VWSYSTEM.Client.1")
If Err.Number <> 0 Then
    WScript.Echo "FAIL: " & Err.Description
    WScript.Quit 1
End If

Client.Initialize
Err.Clear

' Create world
Set World = Client.ConnectLocal("DesktopWorld")
If Err.Number <> 0 Then
    WScript.Echo "FAIL ConnectLocal: " & Err.Description
    WScript.Quit 1
End If
WScript.Echo "World created: " & World.Version

World.TraceLevel("*") = 4

' Load modules
World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3
If Err.Number <> 0 Then : WScript.Echo "  MM: " & Err.Description : Err.Clear : End If
World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3
If Err.Number <> 0 Then : WScript.Echo "  Studio: " & Err.Description : Err.Clear : End If
World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3
If Err.Number <> 0 Then : WScript.Echo "  Found: " & Err.Description : Err.Clear : End If
WScript.Echo "Modules loaded"

' Global properties
World.Global.DefaultSpriteFile = "default.spr"
Err.Clear
World.Global.DefaultAvatarExemplar.InitializeSpriteGraphics "default.spr", 0.0, 1.0, 0.0, 1.0, 0.0, 0.0
Err.Clear

' Create the Lobby room
Dim Lobby
Set Lobby = World.CreateInstance("Lobby", World.Exemplar("Room"))
If Err.Number <> 0 Then
    WScript.Echo "FAIL Room: " & Err.Description
    WScript.Quit 1
End If
World.Global.DefaultRoom = Lobby
Err.Clear
WScript.Echo "Lobby room created"

' Helper to create a positioned artifact with .x geometry
Sub CreateGeomObject(name, geomFile, posX, posY, posZ)
    Dim thing
    Set thing = World.CreateInstance(name, World.Exemplar("Artifact"))
    If Err.Number = 0 Then
        thing.MoveInto Lobby
        thing.GeometryName = geomFile
        Err.Clear
        thing.Position.X = posX
        thing.Position.Y = posY
        thing.Position.Z = posZ
        Err.Clear
        WScript.Echo "  " & name & " OK"
    Else
        WScript.Echo "  " & name & ": " & Err.Description
        Err.Clear
    End If
End Sub

' Helper to create a positioned sprite object
Sub CreateSpriteObject(name, sprFile, posX, posY, posZ)
    Dim thing
    Set thing = World.CreateInstance(name, World.Exemplar("Artifact"))
    If Err.Number = 0 Then
        thing.MoveInto Lobby
        thing.GeometryName = sprFile
        Err.Clear
        thing.Position.X = posX
        thing.Position.Y = posY
        thing.Position.Z = posZ
        Err.Clear
        WScript.Echo "  " & name & " OK"
    Else
        WScript.Echo "  " & name & ": " & Err.Description
        Err.Clear
    End If
End Sub

WScript.Echo "Creating lobby furniture..."

' Place the 5 lobby tables (binary .x with textures)
CreateGeomObject "Table1", DW_MODELS & "table1.x", -4.0, 0.0, -3.0
CreateGeomObject "Table2", DW_MODELS & "table2.x", 4.0, 0.0, -3.0
CreateGeomObject "Table3", DW_MODELS & "table3.x", -4.0, 0.0, 3.0
CreateGeomObject "Table4", DW_MODELS & "table4.x", 4.0, 0.0, 3.0
CreateGeomObject "Table5", DW_MODELS & "table5.x", 0.0, 0.0, 0.0

WScript.Echo "Creating decorative sprites..."

' Place some decorative sprites from the lobby content
CreateSpriteObject "Graphic", DW_MODELS & "graphic.spr", -6.0, 0.0, 0.0
CreateSpriteObject "Demo", DW_MODELS & "demo.spr", 6.0, 0.0, 0.0

' Create a large room boundary
Dim boundary
Set boundary = World.Global.CreateBoundary()
If Err.Number = 0 Then
    boundary.InsertVertexSafe -1, -20.0, -20.0
    boundary.InsertVertexSafe -1, 20.0, -20.0
    boundary.InsertVertexSafe -1, 20.0, 20.0
    boundary.InsertVertexSafe -1, -20.0, 20.0
    boundary.HeightUpper = 5.0
    boundary.HeightLower = 0.0
    boundary.IsPassable = False
    Err.Clear

    Dim blist
    Set blist = World.Global.CreateBoundaryList()
    If Err.Number = 0 Then
        blist.Add boundary
        Lobby.BoundaryList = blist
        Err.Clear
        WScript.Echo "Boundary set"
    End If
End If
Err.Clear

WScript.Echo "DesktopWorld created! Use: renderhost --world DesktopWorld"
WScript.Quit 0
