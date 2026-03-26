' create_desktopworld.vbs - Create DesktopWorld with lobby + music garden geometry
' Run with: C:\Windows\SysWOW64\cscript.exe /nologo create_desktopworld.vbs
Option Explicit
On Error Resume Next

Dim Client, World, Lobby
Dim DW_LOBBY, DW_MUSIC

DW_LOBBY = "worlds\desktopworld\models\lobby\"
DW_MUSIC = "worlds\desktopworld\models\musicgarden\"

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
Err.Clear
World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3
Err.Clear
World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3
Err.Clear
WScript.Echo "Modules loaded"

' Global properties
World.Global.DefaultSpriteFile = "default.spr"
Err.Clear
World.Global.DefaultAvatarExemplar.InitializeSpriteGraphics "default.spr", 0.0, 1.0, 0.0, 1.0, 0.0, 0.0
Err.Clear

' Create the Lobby room
Set Lobby = World.CreateInstance("Lobby", World.Exemplar("Room"))
If Err.Number <> 0 Then
    WScript.Echo "FAIL Room: " & Err.Description
    WScript.Quit 1
End If
World.Global.DefaultRoom = Lobby
Err.Clear
WScript.Echo "Lobby created"

' ===== Helper subs =====
Sub PlaceGeom(name, geomFile, posX, posY, posZ)
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
    Else
        Err.Clear
    End If
End Sub

Sub PlaceSprite(name, sprFile, posX, posY, posZ)
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
    Else
        Err.Clear
    End If
End Sub

' ===== LOBBY FURNITURE (.x models with textures) =====
WScript.Echo "Placing lobby tables..."
PlaceGeom "Table1", DW_LOBBY & "table1.x", -6.0, 0.0, -4.0
PlaceGeom "Table2", DW_LOBBY & "table2.x",  6.0, 0.0, -4.0
PlaceGeom "Table3", DW_LOBBY & "table3.x", -6.0, 0.0,  4.0
PlaceGeom "Table4", DW_LOBBY & "table4.x",  6.0, 0.0,  4.0
PlaceGeom "Table5", DW_LOBBY & "table5.x",  0.0, 0.0,  0.0

' ===== LOBBY SPRITES (2D characters and items) =====
WScript.Echo "Placing lobby characters..."

' Tab sprites (table-top items)
PlaceSprite "Tab1", DW_LOBBY & "tab1.spr", -6.0, 1.0, -4.0
PlaceSprite "Tab2", DW_LOBBY & "tab2.spr",  6.0, 1.0, -4.0
PlaceSprite "Tab3", DW_LOBBY & "tab3.spr", -6.0, 1.0,  4.0
PlaceSprite "Tab4", DW_LOBBY & "tab4.spr",  6.0, 1.0,  4.0
PlaceSprite "Tab5", DW_LOBBY & "tab5.spr",  0.0, 1.0,  0.0

' Avatar characters scattered around lobby
PlaceSprite "Alice1", DW_LOBBY & "alice1.spr", -3.0, 0.0, -2.0
PlaceSprite "Betty1", DW_LOBBY & "betty1.spr",  3.0, 0.0, -2.0
PlaceSprite "Lili1",  DW_LOBBY & "lili1.spr",  -3.0, 0.0,  2.0
PlaceSprite "Russ1",  DW_LOBBY & "russ1.spr",   3.0, 0.0,  2.0
PlaceSprite "Sean1",  DW_LOBBY & "sean1.spr",   0.0, 0.0, -6.0

' Bots
PlaceSprite "Bot1", DW_LOBBY & "bot1.spr", -8.0, 0.0, 0.0
PlaceSprite "Bot2", DW_LOBBY & "bot2.spr",  8.0, 0.0, 0.0
PlaceSprite "Bot3", DW_LOBBY & "bot3.spr",  0.0, 0.0, 8.0

' Decorative sprites
PlaceSprite "Graphic", DW_LOBBY & "graphic.spr", -10.0, 0.0, -6.0
PlaceSprite "Demo",    DW_LOBBY & "demo.spr",     10.0, 0.0, -6.0
PlaceSprite "Moods",   DW_LOBBY & "moods.spr",     0.0, 0.0, -8.0

' Test sprites (sample objects)
PlaceSprite "Test1", DW_LOBBY & "test1.spr", -10.0, 0.0,  6.0
PlaceSprite "Test2", DW_LOBBY & "test2.spr",  -8.0, 0.0,  6.0
PlaceSprite "Test3", DW_LOBBY & "test3.spr",  -6.0, 0.0,  6.0
PlaceSprite "Test4", DW_LOBBY & "test4.spr",  10.0, 0.0,  6.0
PlaceSprite "Test5", DW_LOBBY & "test5.spr",   8.0, 0.0,  6.0
PlaceSprite "Test6", DW_LOBBY & "test6.spr",   6.0, 0.0,  6.0

' ===== MUSIC GARDEN (.X models with textures) =====
WScript.Echo "Placing music garden..."

' Room structure
PlaceGeom "MG_Floor",   DW_MUSIC & "floor1.X",   0.0, -0.1, -20.0
PlaceGeom "MG_Ceiling", DW_MUSIC & "ceiling.X",  0.0,  5.0, -20.0
PlaceGeom "MG_Easels",  DW_MUSIC & "easels.X",   0.0,  0.0, -20.0
PlaceGeom "MG_Props",   DW_MUSIC & "muscprop.X",  0.0, 0.0, -20.0
PlaceGeom "MG_Mask",    DW_MUSIC & "maskGM.X",    0.0, 0.0, -20.0
PlaceGeom "MG_Overview", DW_MUSIC & "oviewpic.X", 0.0, 0.0, -20.0
PlaceGeom "MG_Sun",     DW_MUSIC & "sun.X",       0.0, 4.0, -20.0

' Music garden sculptures/things
PlaceGeom "MG_Thing1",     DW_MUSIC & "thing1.X",      -4.0, 0.0, -18.0
PlaceGeom "MG_Thing1Ball", DW_MUSIC & "thing1ball1.X",  -4.0, 1.0, -18.0
PlaceGeom "MG_Thing2",     DW_MUSIC & "thing2.X",        4.0, 0.0, -18.0
PlaceGeom "MG_Thing3",     DW_MUSIC & "thing3.X",       -4.0, 0.0, -22.0
PlaceGeom "MG_Thing4",     DW_MUSIC & "thing4.X",        4.0, 0.0, -22.0
PlaceGeom "MG_Thing41",    DW_MUSIC & "thing41.X",       2.0, 0.0, -22.0
PlaceGeom "MG_Thing42",    DW_MUSIC & "thing42.X",       6.0, 0.0, -22.0
PlaceGeom "MG_Thing43",    DW_MUSIC & "thing43.X",       2.0, 0.0, -24.0
PlaceGeom "MG_Thing44",    DW_MUSIC & "thing44.X",       6.0, 0.0, -24.0
PlaceGeom "MG_Thing45",    DW_MUSIC & "thing45.X",       4.0, 0.0, -26.0
PlaceGeom "MG_Thing5",     DW_MUSIC & "thing5.X",        0.0, 0.0, -24.0

WScript.Echo "Placed " & 5 + 11 + 12 + 7 + 11 & " objects"

' Room boundary (large area covering lobby + music garden)
Dim boundary
Set boundary = World.Global.CreateBoundary()
If Err.Number = 0 Then
    boundary.InsertVertexSafe -1, -15.0, -30.0
    boundary.InsertVertexSafe -1,  15.0, -30.0
    boundary.InsertVertexSafe -1,  15.0,  15.0
    boundary.InsertVertexSafe -1, -15.0,  15.0
    boundary.HeightUpper = 6.0
    boundary.HeightLower = -1.0
    boundary.IsPassable = False
    Err.Clear

    Dim blist
    Set blist = World.Global.CreateBoundaryList()
    If Err.Number = 0 Then
        blist.Add boundary
        Lobby.BoundaryList = blist
        Err.Clear
    End If
End If
Err.Clear

WScript.Echo "Done! Use: renderhost --world DesktopWorld"
WScript.Quit 0
