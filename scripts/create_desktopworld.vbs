' create_desktopworld.vbs - Recreate DesktopWorld from original SDK wizard data
' Positions extracted from SDK/wizards/world/Kits/DesktopWorld.htm
' Run with: C:\Windows\SysWOW64\cscript.exe /nologo create_desktopworld.vbs
Option Explicit
On Error Resume Next

Dim Client, World, LobbyRm
Const L = "worlds\desktopworld\models\lobby\"
Const M = "worlds\desktopworld\models\musicgarden\"

Set Client = CreateObject("VWSYSTEM.Client.1")
If Err.Number <> 0 Then : WScript.Echo "FAIL: " & Err.Description : WScript.Quit 1 : End If
Client.Initialize : Err.Clear

Set World = Client.ConnectLocal("DesktopWorld")
If Err.Number <> 0 Then : WScript.Echo "FAIL: " & Err.Description : WScript.Quit 1 : End If
WScript.Echo "World: " & World.Version
World.TraceLevel("*") = 4

' Modules
World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3 : Err.Clear
World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3 : Err.Clear
World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3 : Err.Clear
WScript.Echo "Modules OK"

World.Global.DefaultSpriteFile = "default.spr" : Err.Clear
World.Global.DefaultAvatarExemplar.InitializeSpriteGraphics "default.spr", 0.0, 1.0, 0.0, 1.0, 0.0, 0.0 : Err.Clear
World.Global.DirectoryServicePage = "http://localhost:7002/ds" : Err.Clear

' Room
Set LobbyRm = World.CreateInstance("Lobby Room", World.Exemplar("Room"))
If Err.Number <> 0 Then : WScript.Echo "FAIL Room: " & Err.Description : WScript.Quit 1 : End If
World.Global.DefaultRoom = LobbyRm : Err.Clear
LobbyRm.GeometryName = "" : Err.Clear
WScript.Echo "Room OK"

' Helper: create artifact with InitializeGraphics (geomName, posX, posY, posZ, dirX, dirY, dirZ)
Dim objCount : objCount = 0
Sub G(name, geom, px, py, pz, dx, dy, dz)
    Dim t
    Set t = World.CreateInstance(name, World.Exemplar("Artifact"))
    If Err.Number = 0 Then
        t.MoveInto LobbyRm
        t.InitializeGraphics geom, px, py, pz, dx, dy, dz
        Err.Clear
        objCount = objCount + 1
    Else
        WScript.Echo "  SKIP " & name & ": " & Err.Description
        Err.Clear
    End If
End Sub

WScript.Echo "Building lobby..."

' === LOBBY STRUCTURE (walls, floor, ceiling) ===
G "Lobby",               L & "lobby.X",          0.0, 0.31, 0.0,  0.0, 0.0, 1.0
G "Patio walls lobby",   L & "lobbywallsG1.X",   0.0, 0.31, 0.0,  0.0, 0.0, 1.0
G "Walls facing patio",  L & "lobbywallsG.X",    0.0, 0.31, 0.0,  0.0, 0.0, 1.0
G "Gamewalls steps",     L & "gamewallsP.X",     0.0, 0.31, 0.0,  0.0, 0.0, 1.0
G "Gamewalls",           L & "gamewallsL.X",     0.0, 0.31, 0.0,  0.0, 0.0, 1.0
G "Chat Floor",          L & "floorchat.X",      0.0, 0.31, 0.0,  0.0, 0.0, 1.0
G "Chat Furniture",      L & "chatfurniture.X",  0.0, 0.31, 0.0,  0.0, 0.0, 1.0
G "Chat Desk",           L & "chatdsk.X",        4.77,-0.129,0.0, 0.0, 0.0, 1.0
G "Patio walls",         L & "patiowall.X",      0.0, 0.31, 0.0,  0.0, 0.0, 1.0
G "Patio",               L & "patio.X",          0.0, 0.31, 0.0,  0.0, 0.0, 1.0
G "Seattle",             L & "background.X",     0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "Ceiling",             L & "ceiling.X",        0.0, 0.3,  0.0,  0.0, 0.0, 1.0
G "Overview Mask",       L & "overvwedge.X",     0.0, 0.16, 0.0,  0.0, 0.0, 1.0
G "Roof",                L & "roof.X",           0.0, 0.355,0.0,  0.0, 0.0, 1.0
G "Cloud",               L & "cloud.X",          0.0, 1.0,  0.0,  0.0, 0.0, 1.0

' === LOBBY OBJECTS (furniture, posters, gadgets) ===
G "Logo",                L & "logo.X",           0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "VW Info",             L & "postpat.X",        0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "Seattle News",        L & "desknews.X",       4.0, 1.3,  15.0, -0.05,0.0,-1.0
G "Rolodex",             L & "deskrolo.X",       12.0,1.125,15.2, 0.05,0.0, 1.0
G "FAQ Computer",        L & "puter2.X",         11.0,1.125,15.1, -0.05,0.0,-1.0
G "Movie Poster",        L & "postmov.X",        15.2,0.0, -10.0, -1.0,0.0, 0.0
G "Music View",          L & "musicview.X",      0.0, 0.32, 0.0,  0.0, 0.0, 1.0
G "BBS Poster",          L & "postbbs.X",        0.0, 0.32, 0.0,  0.0, 0.0, 1.0
G "Travel Poster",       L & "posttrv.X",        0.0, 0.32, 0.0,  0.0, 0.0, 1.0
G "Transportation",      L & "transpo.X",        14.5,1.156,2.4,  0.8, 0.0, 1.0
G "DW News",             L & "desknews.X",       16.7,1.43, 2.9,  -0.6,0.0, 1.0
G "Gallery",             L & "housing.X",        13.2,1.3, -2.0,  0.5, 0.0,-1.0

' === TABLES ===
G "Table1",              L & "table1.x",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "Table2",              L & "table2.x",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "Table3",              L & "table3.x",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "Table4",              L & "table4.x",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "Table5",              L & "table5.x",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0

' === BOTS ===
G "Phebe",               L & "bot3.spr",         8.443,1.531,17.063, 0.0,0.0,-1.0
G "Morris",              L & "botb.spr",         14.696,1.181,0.835, -0.5,0.0,0.5

' === MUSIC GARDEN ===
WScript.Echo "Building music garden..."
G "MG Overview",         M & "oviewpic.X",       0.3, 0.3, -2.5,  0.0, 0.0, 1.0
G "MG Props",            M & "muscprop.X",       0.0, 1.5,  0.0,  0.0, 0.0, 1.0
G "MG Floor",            M & "floor1.X",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "MG Shaker",           M & "thing3.X",         15.0,0.0,  34.0, 1.0, 0.0, 0.0
G "MG Sun",              M & "sun.X",            0.0, 4.0,  0.0,  0.0, 0.0, 1.0
G "MG Ceiling",          M & "ceiling.X",        0.0, 5.0,  0.0,  0.0, 0.0, 1.0
G "MG Easels",           M & "easels.X",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "MG Thing1",           M & "thing1.X",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "MG Thing2",           M & "thing2.X",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "MG Thing4",           M & "thing4.X",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0
G "MG Thing5",           M & "thing5.X",         0.0, 0.0,  0.0,  0.0, 0.0, 1.0

' === SOUNDS ===
WScript.Echo "Adding sounds..."
' SetSound args: waveURL, isLooping, volume, frequency, pan
' Sound path relative to ContentPath\Worlds\DesktopWorld\
LobbyRm.SetSound "sounds\chimes.wav", True, 0, 0, 0
If Err.Number <> 0 Then
    WScript.Echo "  Room sound: " & Err.Description & " (0x" & Hex(Err.Number) & ")"
    Err.Clear
Else
    WScript.Echo "  Lobby ambient: chimes.wav (looping)"
End If

WScript.Echo objCount & " objects placed"
WScript.Echo "Done!"
WScript.Quit 0
