' Empyrean Study - Gallery room filled with Asheron's Call artifacts
' A VWorlds gallery transformed into an ancient scholar's chamber

Dim Client, World, Room

Set Client = CreateObject("VWSYSTEM.Client.1")
Set World = Client.ConnectLocal("EmpyreanStudy")

World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3
World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3
World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3
World.Global.DefaultSpriteFile = "default.spr"
World.Global.DefaultAvatarExemplar.InitializeSpriteGraphics "default.spr", 0.0, 1.0, 0.0, 1.0, 0.0, 0.0
World.Global.DirectoryServicePage = "http://localhost:7002/ds"
World.Global.DefaultAvatarExemplar.IsAuthor = True
World.Global.DefaultAvatarExemplar.IsWizard = True

Set Room = World.CreateInstance("EmpyreanStudy", World.Exemplar("Room"))
World.Global.DefaultRoom = Room
Room.GeometryName = ""

Dim objCount : objCount = 0
Sub G(name, geom, px, py, pz, dx, dy, dz)
    Dim t
    Set t = World.CreateInstance(name, World.Exemplar("Artifact"))
    If Err.Number = 0 Then
        t.MoveInto Room
        t.InitializeGraphics geom, px, py, pz, dx, dy, dz
        Err.Clear
        objCount = objCount + 1
    Else
        Err.Clear
    End If
End Sub

Const GL = "SDK\Library\Models\_Gallery\"
Const AC = "worlds\Dungeon_5E47\"

' ============================================================
' THE GALLERY SHELL - full Gallery room geometry
' ============================================================
G "Floor",     GL & "floorgl.x",     0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "Ceiling",   GL & "ceilingl.x",    0.0, 3.95, 0.0,  0.0, 0.0, 1.0
G "Wall1",     GL & "wall1gl.x",     3.34,1.97, 2.73, 0.0, 0.0,-1.0
G "Wall2",     GL & "wall2gl.x",     2.83,2.0, -3.34, 0.0, 0.0, 1.0
G "Wall3",     GL & "wall3gl.x",    15.92,2.0, -7.93, 0.0, 0.0, 1.0
G "Nook1",     GL & "nook1gl.x",    -2.19,2.0, -11.5, 0.0, 0.0, 1.0
G "Nook2",     GL & "nook2gl.x",     9.93,2.0, -11.5, 0.0, 0.0, 1.0
G "Nook3",     GL & "nook3gl.x",   -11.82,2.0, -7.9,  1.0, 0.0, 0.0
G "View1",     GL & "view2gl.x",   -12.6, 1.8,  2.8,  1.0, 0.0, 0.0
G "View2",     GL & "viewgl.x",     19.3, 1.9,  2.6, -1.0, 0.0, 0.0
G "Display1",  GL & "dispgl.x",      9.95,2.06,-11.6, 0.0, 0.0, 1.0
G "Display2",  GL & "dispgl.x",     -2.2, 2.06,-11.6, 0.0, 0.0, 1.0
G "Entry",     GL & "entrypoint.x", -6.0, 1.0,  1.5, -0.85,0.0,-0.15

' ============================================================
' EMPYREAN FURNISHINGS - AC dungeon objects arranged in gallery
' ============================================================

' --- Main study area (center of gallery) ---
' Large table as the central desk
G "MainDesk",   AC & "static_0_1_02000970.x",  0.0, 0.005, -3.0, 0.0, 0.0, 1.0

' Chairs around the desk
G "Chair1",     AC & "static_7_20_0200093B.x",  1.5, 0.005, -2.5, 0.0, 0.0, 1.0
G "Chair2",     AC & "static_7_20_0200093B.x", -1.5, 0.005, -2.5, 0.0, 0.0, 1.0
G "Chair3",     AC & "static_7_20_0200093B.x",  0.0, 0.005, -4.5, 0.0, 0.0, 1.0

' Books scattered across the desk
G "Book1",      AC & "static_0_3_02000EEE.x",   0.2, 0.93, -2.8,  0.0, 0.0, 1.0
G "Book2",      AC & "static_0_4_02000EEE.x",  -0.3, 0.93, -3.2,  0.0, 0.0, 1.0
G "Book3",      AC & "static_0_5_02000EEE.x",   0.4, 0.93, -2.6,  0.0, 0.0, 1.0
G "Book4",      AC & "static_0_6_02000EEE.x",  -0.1, 0.93, -3.5,  0.0, 0.0, 1.0
G "Book5",      AC & "static_0_7_02000EEE.x",   0.5, 0.93, -3.1,  0.0, 0.0, 1.0
G "Book6",      AC & "static_0_8_02000EEE.x",  -0.4, 0.93, -2.7,  0.0, 0.0, 1.0
G "Book7",      AC & "static_0_9_02000EEE.x",   0.3, 0.93, -3.4,  0.0, 0.0, 1.0

' Candelabra on the desk
G "Candle1",    AC & "static_1_21_02000154.x",  0.0, 0.96, -3.0,  0.0, 0.0, 1.0

' --- Left nook (reading corner) ---
' Side table with books
G "ReadTable",  AC & "static_1_22_0200094B.x", -8.0, 0.005, -8.0, 0.0, 0.0, 1.0
G "ReadBook1",  AC & "static_0_10_02000EEE.x", -7.8, 0.93, -7.8,  0.0, 0.0, 1.0
G "ReadBook2",  AC & "static_0_11_02000182.x", -8.2, 0.93, -8.2,  0.0, 0.0, 1.0
G "ReadCandle", AC & "static_7_23_02000179.x", -8.0, 0.9, -8.0,   0.0, 0.0, 1.0

' --- Right nook (artifact display) ---
' Decorative vessels on display
G "Vessel1",    AC & "static_0_0_02000285.x",  12.0, 0.005, -8.0, 0.0, 0.0, 1.0
G "Vessel2",    AC & "static_0_13_02000B55.x", 14.0, 0.005, -9.0, 0.0, 0.0, 1.0

' --- Wall torches throughout the gallery ---
G "Torch1",     AC & "static_0_14_02000DB4.x", -10.0, 2.0, -5.0,  0.0, 0.0, 1.0
G "Torch2",     AC & "static_0_15_02000DB4.x",  16.0, 2.0, -5.0,  0.0, 0.0, 1.0
G "Torch3",     AC & "static_1_25_02000DB6.x", -10.0, 2.3,  1.0,  0.0, 0.0, 1.0
G "Torch4",     AC & "static_1_26_02000DB6.x",  16.0, 2.0,  1.0,  0.0, 0.0, 1.0
G "Torch5",     AC & "static_7_24_02000DB6.x",   0.0, 2.3, -10.0, 0.0, 0.0, 1.0
G "Torch6",     AC & "static_7_25_02000DB6.x",   8.0, 2.0, -10.0, 0.0, 0.0, 1.0

' --- Entrance area ---
' Tables flanking the entry
G "EntryTable1", AC & "static_7_18_0200094F.x", -4.0, 0.005, 1.0, 0.0, 0.0, 1.0
G "EntryTable2", AC & "static_1_18_0200094F.x",  4.0, 0.005, 1.0, 0.0, 0.0, 1.0

' ============================================================
' AC MONSTER - Actor with bone animation
' ============================================================
Dim acMonster
Set acMonster = World.CreateInstance("Drudge", World.Exemplar("Actor"))
If Err.Number = 0 Then
    acMonster.MoveInto Room
    acMonster.InitializeGraphics "worlds\ACMonsters\02000034.x", 3.0, 0.0, -7.0, 0.0, 0.0, 1.0
    Err.Clear
    WScript.Echo "Drudge placed at (3.0, 0.0, -7.0)"
    objCount = objCount + 1
Else
    WScript.Echo "Actor exemplar not found: " & Err.Description
    Err.Clear
End If

WScript.Echo objCount & " objects placed in the Empyrean Study."
WScript.Echo "A Gallery room with AC artifacts and a bone-animated monster."
WScript.Quit 0
