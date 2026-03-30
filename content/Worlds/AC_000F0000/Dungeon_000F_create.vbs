' VWorlds room creation script
' Generated from Asheron's Call EnvCell 000F0000
' Place .x and .gif files in: Local Content\Worlds\AC_000F0000\

Option Explicit

Dim Client, World, Room

Set Client = CreateObject("VWSYSTEM.Client.1")

Set World = Client.ConnectLocal("AC_000F0000")

' Load required modules
World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3
World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3
World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3

' Set defaults
World.Global.DefaultSpriteFile = "default.spr"
World.Global.DefaultAvatarExemplar.InitializeSpriteGraphics "default.spr", 0.0, 1.0, 0.0, 1.0, 0.0, 0.0

' Create the room
Set Room = World.CreateInstance("AC_000F0000", World.Exemplar("Room"))
World.Global.DefaultRoom = Room
Room.GeometryName = ""

' Add the AC room geometry as an artifact
Dim RoomGeom
Set RoomGeom = World.CreateInstance("ACRoom", World.Exemplar("Artifact"))
RoomGeom.MoveInto Room
RoomGeom.InitializeGraphics "worlds\AC_000F0000\Dungeon_000F.x", 0.0, 0.0, 0.0, 0.0, 0.0, 1.0

' Save the world
World.SaveDatabase

WScript.Echo "World created: " & World.Name
Client.Disconnect
