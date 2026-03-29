' create_allworlds.vbs - Create all VWorlds sample worlds
' Run with: C:\Windows\SysWOW64\cscript.exe /nologo create_allworlds.vbs [worldname]
' Worlds: Gallery, Home, Landscape, Office, DesktopWorld
Option Explicit
On Error Resume Next

Dim Client, World, Room, objCount
Dim worldName

If WScript.Arguments.Count > 0 Then
    worldName = WScript.Arguments(0)
Else
    worldName = "Gallery"
End If

Set Client = CreateObject("VWSYSTEM.Client.1")
If Err.Number <> 0 Then : WScript.Echo "FAIL: " & Err.Description : WScript.Quit 1 : End If
Client.Initialize : Err.Clear

Set World = Client.ConnectLocal(worldName)
If Err.Number <> 0 Then : WScript.Echo "FAIL: " & Err.Description : WScript.Quit 1 : End If
WScript.Echo worldName & " - " & World.Version
World.TraceLevel("*") = 4

World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3 : Err.Clear
World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3 : Err.Clear
World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3 : Err.Clear

World.Global.DefaultSpriteFile = "default.spr" : Err.Clear
World.Global.DefaultAvatarExemplar.InitializeSpriteGraphics "default.spr", 0.0, 1.0, 0.0, 1.0, 0.0, 0.0 : Err.Clear

Set Room = World.CreateInstance("Main", World.Exemplar("Room"))
If Err.Number <> 0 Then : WScript.Echo "FAIL Room: " & Err.Description : WScript.Quit 1 : End If
World.Global.DefaultRoom = Room : Err.Clear
' Room should have no visible geometry — lobby/office/etc geometry comes from artifacts inside it
Room.GeometryName = "" : Err.Clear

objCount = 0
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

Select Case LCase(worldName)

Case "gallery"
    Const GL = "SDK\Library\Models\_Gallery\"
    WScript.Echo "Building Gallery..."

    G "Ceiling",   GL & "ceilingl.x",   0.0, 3.95, 0.0,  0.0, 0.0, 1.0
    G "Entry",     GL & "entrypoint.x", -6.0, 1.0,  1.5, -0.85,0.0,-0.15
    G "Desk",      GL & "deskgl.x",     -8.7, 0.5, -1.3,  0.0, 0.0, 1.0
    G "Display1",  GL & "dispgl.x",      9.95,2.06,-11.6, 0.0, 0.0, 1.0
    G "Display2",  GL & "dispgl.x",     -2.2, 2.06,-11.6, 0.0, 0.0, 1.0
    G "View1",     GL & "view2gl.x",   -12.6, 1.8,  2.8,  1.0, 0.0, 0.0
    G "View2",     GL & "viewgl.x",     19.3, 1.9,  2.6, -1.0, 0.0, 0.0
    G "Floor",     GL & "floorgl.x",     0.0, 0.0,  0.0,  0.0, 0.0, 1.0
    G "Nook1",     GL & "nook1gl.x",    -2.19,2.0, -11.5, 0.0, 0.0, 1.0
    G "Nook2",     GL & "nook2gl.x",     9.93,2.0, -11.5, 0.0, 0.0, 1.0
    G "Nook3",     GL & "nook3gl.x",   -11.82,2.0, -7.9,  1.0, 0.0, 0.0
    G "Wall1",     GL & "wall1gl.x",     3.34,1.97, 2.73, 0.0, 0.0,-1.0
    G "Wall2",     GL & "wall2gl.x",     2.83,2.0, -3.34, 0.0, 0.0, 1.0
    G "Wall3",     GL & "wall3gl.x",    15.92,2.0, -7.93, 0.0, 0.0, 1.0
    ' ramp1gl.x and ramp2gl.x not shipped in Gallery content

Case "home"
    Const HM = "SDK\Library\Models\_HomeCl\"
    Const EL = "SDK\Library\Models\_EmptyLandscape\"
    WScript.Echo "Building Home..."
    G "Birds",     EL & "birds.x",       0.0, 20.0, 0.0,  0.0, 0.0, 0.0
    G "Ground",    HM & "groundh.x",    22.0,-1.0, 35.0, -1.0, 0.0, 0.0
    G "Hedge1",    HM & "hedge.x",      -6.4, 1.5, -0.56,-0.5, 0.0, 0.87
    G "Sky",       HM & "sky1.x",       27.5, 65.0,-22.4, 0.0, 0.0, 0.0
    G "Hedge2",    HM & "hedge.x",      23.0, 1.5, 17.0, -0.5, 0.0, 0.87
    G "House",     HM & "house.x",      17.56,8.69,-6.84,-0.5, 0.0, 0.87
    G "Porch",     HM & "porch.x",      16.13,1.27,-4.49,-0.5, 0.0, 0.87
    G "Dormer1",   HM & "dormer.x",     14.19,14.0,-1.11,-0.5, 0.0, 0.87
    G "Dormer2",   HM & "dormer.x",     19.77,14.0, 1.97,-0.5, 0.0, 0.87
    G "Dormer3",   HM & "dormer.x",      9.05,14.0,-4.05,-0.5, 0.0, 0.87
    G "Column1",   HM & "column.x",     25.38,6.0,  9.27,-0.5, 0.0, 0.87
    G "Column2",   HM & "column.x",     15.1, 6.0,  3.3, -0.5, 0.0, 0.87
    G "Column3",   HM & "column.x",      9.77,6.0,  0.58,-0.5, 0.0, 0.87
    G "Door",      HM & "door.x",       13.56,4.24,-2.92,-0.5, 0.0, 0.87
    G "Fence1",    HM & "fence.x",       3.3, 1.85,-1.24,-0.5, 0.0, 0.87
    G "Fence2",    HM & "fence.x",       3.3, 1.85,26.76,-0.5, 0.0, 0.87
    G "Garage",    HM & "garage.x",     -8.27,5.07,22.88,-0.5, 0.0, 0.87
    G "Gazebo",    HM & "gazebo.x",     33.06,3.27,27.57,-0.5, 0.0, 0.87
    G "Roof",      HM & "roof.x",       14.51,14.0, 2.24,-0.5, 0.0, 0.87
    G "Sidewalk",  HM & "sidewalk.x",   -0.72,0.11,13.23,-0.5, 0.0, 0.87
    G "Tree1",     HM & "tree.x",       36.27,9.0, 11.53,-0.5, 0.0, 0.87
    G "Tree2",     HM & "tree.x",       -2.65,9.0, 21.12,-0.5, 0.0, 0.87

Case "landscape"
    Const LS = "SDK\Library\Models\_EmptyLandscape\"
    WScript.Echo "Building Landscape..."
    G "Ground",    LS & "ground.x",      0.0, 0.0,  0.0,  0.0, 0.0, 0.0
    G "Sky",       LS & "sky.x",         0.0,-10.0, 0.0,  0.0, 0.0, 0.0
    G "Hills",     LS & "hills.x",       0.0, 0.13, 0.0,  0.0, 0.0, 0.0
    G "Cloud",     LS & "cloud.x",       0.0, 10.0, 0.0,  0.0, 0.0, 0.0
    G "Birds",     LS & "birds.x",       0.0, 20.0, 0.0,  0.0, 0.0, 0.0
    G "Sky1",      LS & "sky1.x",       27.5, 95.0,-22.4, 0.0, 0.0, 0.0
    G "Tree1",     LS & "Tree1.x",     105.0, 13.0,-35.0,-1.0, 0.0, 0.0
    G "Forest",    LS & "Foresth.x",    -3.89,9.0, 28.72, 0.933,0.0,0.358
    G "Tree2",     LS & "Tree2.x",      53.53,10.07,3.16,-0.5, 0.0, 0.866
    G "Tree3",     LS & "Tree3.x",      19.6, 10.07,75.82,0.0, 0.0,-1.0
    G "Entry",     LS & "entrypoint.x",  0.0, 1.05, 0.0, -1.0, 0.0, 0.0
    G "GroundH",   LS & "groundh.x",    22.0,-1.0, 35.0,-1.0, 0.0, 0.0

Case "office"
    Const OF = "SDK\Library\Models\_OfficeCL\"
    WScript.Echo "Building Office..."
    G "Floor",     OF & "floorcol.x",    0.0, 0.0,  0.0,  1.0, 0.0, 0.0
    G "Entry",     OF & "entrypoint.x", -3.0, 1.0,  1.07,-1.0, 0.0,-0.006
    G "Fan",       OF & "cfan.x",        0.0, 4.4,  0.0,  0.0, 0.0,-1.0
    G "CeilGrid",  OF & "ceilgcol.x",   0.7, 5.16, 0.0,  1.0, 0.0, 0.0
    G "Logo",      OF & "logocol.x",    10.0, 3.0,  0.0, -1.0, 0.0, 0.0
    G "Window1",   OF & "windowcol.x",  10.2, 2.75,-3.0, -1.0, 0.0, 0.0
    G "Window2",   OF & "windowcol.x",  10.2, 2.75, 3.0, -1.0, 0.0, 0.0
    G "Wall1",     OF & "wall1col.x",   10.3, 2.6,  0.0, -1.0, 0.0, 0.0
    G "Wall2",     OF & "wall2col.x",    5.9, 2.6, -9.2,  0.0, 0.0, 1.0
    G "Wall3",     OF & "wall3col.x",    0.83,2.6, -6.95, 1.0, 0.0, 0.0
    G "Wall4",     OF & "wall4col.x",    0.1, 2.59,-5.56, 0.0, 0.0, 1.0
    G "Wall5",     OF & "wall5col.x",   -0.6, 2.95,-6.3,  1.0, 0.0, 0.0
    G "Wall6",     OF & "wall6col.x",   -6.0, 2.66, 7.0,  0.0, 0.0,-1.0
    G "Wall7",     OF & "wall7col.x",   -7.4, 2.66, 0.0,  1.0, 0.0, 0.0
    G "Desk1",     OF & "deskcol.x",     3.6, 0.8,  4.6,  0.0, 0.0,-1.0
    G "Desk2",     OF & "deskcol.x",     4.2, 0.8, -1.1,  0.66,0.0, 0.75
    G "Desk3",     OF & "deskcol.x",    -4.2, 0.8, -2.0,  0.0, 0.0, 1.0
    G "Chair1",    OF & "chaircol.x",    2.6, 0.55, 4.6,   0.0, 0.0,-1.0
    G "Chair2",    OF & "chaircol.x",    3.2, 0.55,-1.1,   0.66,0.0, 0.75
    G "Chair3",    OF & "chaircol.x",   -3.2, 0.55,-2.0,   0.0, 0.0, 1.0
    G "FileCab1",  OF & "filecol.x",     7.0, 0.7, -8.0,   0.0, 0.0, 1.0
    G "FileCab2",  OF & "filecol.x",    -0.5, 0.7, -8.5,   1.0, 0.0, 0.0
    G "Sofa",      OF & "sofacol.x",    -5.0, 0.5,  3.0,   1.0, 0.0, 0.0
    G "Table",     OF & "tablecol.x",   -4.5, 0.35, 5.0,   0.0, 0.0, 1.0
    G "Plant1",    OF & "plantcol.x",    9.5, 1.3,  7.5,  -1.0, 0.0, 0.0
    G "Plant2",    OF & "plantcol.x",    9.5, 1.3, -7.5,  -1.0, 0.0, 0.0
    G "WBoard",    OF & "wboardcol.x",  -7.0, 2.5, -4.0,   1.0, 0.0, 0.0

Case "spuck"
    WScript.Echo "Building Spuck's World..."
    Dim SP, SE, SG, SI
    SP = "SDK\Library\models\"
    SE = "SDK\Library\models\_EmptyLandscape\"
    SG = "SDK\Library\models\_Gallery\"
    SI = "SDK\Library\models\interior\"

    ' Ground and sky from landscape
    G "Ground",    SE & "ground.x",     0.0, 0.0,  0.0,  0.0, 0.0, 0.0
    G "Sky",       SE & "sky.x",        0.0,-10.0, 0.0,  0.0, 0.0, 0.0

    ' Spuck -- Actor exemplar with bone animation
    Dim spuckActor
    Set spuckActor = World.CreateInstance("Spuck", World.Exemplar("Actor"))
    If Err.Number = 0 Then
        spuckActor.MoveInto Room
        spuckActor.InitializeGraphics "spuck.x", 0.0, 0.0, 5.0, 0.0, 0.0, 1.0
        Err.Clear
        objCount = objCount + 1
        WScript.Echo "Spuck Actor created! Use InitializeActor + SetJointRotation in Command Window"
    Else
        WScript.Echo "Actor failed (" & Err.Description & "), using Artifact"
        Err.Clear
        G "Spuck", "spuck.x", 0.0, 0.0, 5.0, 0.0, 0.0, 1.0
    End If

    ' Some scenery trees
    G "Tree1",     SE & "tree1.X",      10.0, 5.0,-10.0, -1.0, 0.0, 0.0
    G "Tree2",     SE & "tree2.X",     -10.0, 5.0,-10.0, -1.0, 0.0, 0.0
    G "Hills",     SE & "hills.x",       0.0, 0.13, 0.0,  0.0, 0.0, 0.0

Case Else
    WScript.Echo "Unknown world: " & worldName
    WScript.Echo "Valid: Gallery, Home, Landscape, Office, Spuck"
    WScript.Quit 1

End Select

WScript.Echo objCount & " objects placed. Done!"
WScript.Quit 0
