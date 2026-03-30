' VWorlds room creation script
' Generated from Asheron's Call EnvCell 5766027A
' Place .x and .gif files in: Local Content\Worlds\AC_5766027A\

Option Explicit

Dim Client, World, Room

Set Client = CreateObject("VWSYSTEM.Client.1")

Set World = Client.ConnectLocal("AC_5766027A")

' Load required modules
World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3
World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3
World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3

' Set defaults
World.Global.DefaultSpriteFile = "default.spr"
World.Global.DefaultAvatarExemplar.InitializeSpriteGraphics "default.spr", 0.0, 1.0, 0.0, 1.0, 0.0, 0.0

' Create the room
Set Room = World.CreateInstance("AC_5766027A", World.Exemplar("Room"))
World.Global.DefaultRoom = Room
Room.GeometryName = ""

' Add the AC room geometry as an artifact
Dim RoomGeom
Set RoomGeom = World.CreateInstance("ACRoom", World.Exemplar("Artifact"))
RoomGeom.MoveInto Room
RoomGeom.InitializeGraphics "worlds\AC_5766027A\5766027A.x", 0.0, 0.0, 0.0, 0.0, 0.0, 1.0

' Save the world
World.SaveDatabase

WScript.Echo "World created: " & World.Name
Client.Disconnect
