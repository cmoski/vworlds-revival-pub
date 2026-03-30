' VWorlds dungeon creation script
' World: Dungeon_01E7
' 79 artifact(s)
'
' Usage: cscript Dungeon_01E7_create.vbs

Dim Client, World, Room

Set Client = CreateObject("VWSYSTEM.Client.1")
' Client.Initialize
Set World = Client.ConnectLocal("Dungeon_01E7")

World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3
World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3
World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3
World.Global.DefaultSpriteFile = "default.spr"

Set Room = World.CreateInstance("Dungeon_01E7", World.Exemplar("Room"))
Room.Fog = True
Room.FogStart = 10
Room.FogEnd = 40
World.Global.DefaultRoom = Room
Room.GeometryName = ""

Sub G(name, geom, px, py, pz)
    Dim t
    Set t = World.CreateInstance(name, World.Exemplar("Artifact"))
    If Err.Number = 0 Then
        t.MoveInto Room
        t.InitializeGraphics geom, px, py, pz, 0.0, 0.0, 1.0
        Err.Clear
    End If
End Sub

' --- 79 dungeon pieces ---
G "Cell_000", "worlds\Dungeon_01E7\cell_01E70100.x", 10, -6, -30
G "Obj_0_0", "worlds\Dungeon_01E7\static_0_0_02000354.x", 21.444, -12, -61.0613
G "Obj_0_1", "worlds\Dungeon_01E7\static_0_1_02000354.x", 18.60776, -12, -62.1861
G "Cell_001", "worlds\Dungeon_01E7\cell_01E70101.x", 0.0, 0.0, -10
G "Cell_002", "worlds\Dungeon_01E7\cell_01E70102.x", 0.0, 0.0, -20
G "Cell_003", "worlds\Dungeon_01E7\cell_01E70103.x", 0.0, 0.0, -30
G "Obj_3_0", "worlds\Dungeon_01E7\static_3_0_020000A5.x", 27.08251, 0.0, -26.3176
G "Obj_3_1", "worlds\Dungeon_01E7\static_3_1_020001BE.x", 27.05191, 1.6, -26.30403
G "Cell_004", "worlds\Dungeon_01E7\cell_01E70104.x", 10, 0.0, -10
G "Cell_005", "worlds\Dungeon_01E7\cell_01E70105.x", 10, 0.0, -20
G "Cell_006", "worlds\Dungeon_01E7\cell_01E70106.x", 10, 0.0, -20
G "Cell_007", "worlds\Dungeon_01E7\cell_01E70107.x", 10, 0.0, -20
G "Cell_008", "worlds\Dungeon_01E7\cell_01E70108.x", 10, 0.0, -30
G "Cell_009", "worlds\Dungeon_01E7\cell_01E70109.x", 10, 0.0, -40
G "Cell_010", "worlds\Dungeon_01E7\cell_01E7010A.x", 10, 0.0, -50
G "Cell_011", "worlds\Dungeon_01E7\cell_01E7010B.x", 10, 0.0, -50
G "Cell_012", "worlds\Dungeon_01E7\cell_01E7010C.x", 10, 0.0, -50
G "Cell_013", "worlds\Dungeon_01E7\cell_01E7010D.x", 20, 0.0, -10
G "Cell_014", "worlds\Dungeon_01E7\cell_01E7010E.x", 20, 0.0, -20
G "Cell_015", "worlds\Dungeon_01E7\cell_01E7010F.x", 20, 0.0, -30
G "Cell_016", "worlds\Dungeon_01E7\cell_01E70110.x", 20, 0.0, -50
G "Obj_16_0", "worlds\Dungeon_01E7\static_16_0_0200026D.x", -27.57994, 1.70444, -71.58058
G "Cell_017", "worlds\Dungeon_01E7\cell_01E70111.x", 30, 0.0, -20
G "Obj_17_0", "worlds\Dungeon_01E7\static_17_0_020002FB.x", 6.852867, 0.0, -52.2362
G "Obj_17_1", "worlds\Dungeon_01E7\static_17_1_02000120.x", 6.805067, 0.0, -50.869
G "Obj_17_2", "worlds\Dungeon_01E7\static_17_2_02000120.x", 6.670368, 0.0, -53.4495
G "Cell_018", "worlds\Dungeon_01E7\cell_01E70112.x", 30, 0.0, -30
G "Obj_18_0", "worlds\Dungeon_01E7\static_18_0_020001BE.x", 61.8852, 1.6, -0.427963
G "Obj_18_1", "worlds\Dungeon_01E7\static_18_1_020000A5.x", 61.7712, 0.0, -0.434063
G "Cell_019", "worlds\Dungeon_01E7\cell_01E70113.x", 30, 0.0, -40
G "Cell_020", "worlds\Dungeon_01E7\cell_01E70114.x", 30, 0.0, -50
G "Cell_021", "worlds\Dungeon_01E7\cell_01E70115.x", 40, 0.0, -20
G "Cell_022", "worlds\Dungeon_01E7\cell_01E70116.x", 40, 0.0, -30
G "Cell_023", "worlds\Dungeon_01E7\cell_01E70117.x", 40, 0.0, -40
G "Cell_024", "worlds\Dungeon_01E7\cell_01E70118.x", 40, 0.0, -40
G "Cell_025", "worlds\Dungeon_01E7\cell_01E70119.x", 40, 0.0, -50
G "Cell_026", "worlds\Dungeon_01E7\cell_01E7011A.x", 40, 0.0, -50
G "Cell_027", "worlds\Dungeon_01E7\cell_01E7011B.x", 40, 0.0, -50
G "Cell_028", "worlds\Dungeon_01E7\cell_01E7011C.x", 50, 0.0, -30
G "Cell_029", "worlds\Dungeon_01E7\cell_01E7011D.x", 50, 0.0, -40
G "Cell_030", "worlds\Dungeon_01E7\cell_01E7011E.x", 60, 0.0, 0.0
G "Cell_031", "worlds\Dungeon_01E7\cell_01E7011F.x", 60, 0.0, -10
G "Cell_032", "worlds\Dungeon_01E7\cell_01E70120.x", 60, 0.0, -20
G "Obj_32_0", "worlds\Dungeon_01E7\static_32_0_020001BE.x", 120.4165, 1.6, -39.3947
G "Obj_32_1", "worlds\Dungeon_01E7\static_32_1_020000A5.x", 120.3777, 0.0, -39.502
G "Cell_033", "worlds\Dungeon_01E7\cell_01E70121.x", 60, 0.0, -30
G "Cell_034", "worlds\Dungeon_01E7\cell_01E70122.x", 70, 0.0, 0.0
G "Cell_035", "worlds\Dungeon_01E7\cell_01E70123.x", 70, 0.0, -10
G "Cell_036", "worlds\Dungeon_01E7\cell_01E70124.x", 70, 0.0, -20
G "Cell_037", "worlds\Dungeon_01E7\cell_01E70125.x", 80, 0.0, 0.0
G "Obj_37_0", "worlds\Dungeon_01E7\static_37_0_020000A5.x", 77.5473, 0.0, -78.39774
G "Obj_37_1", "worlds\Dungeon_01E7\static_37_1_020001BE.x", 77.50195, 1.6, -78.40604
G "Cell_038", "worlds\Dungeon_01E7\cell_01E70126.x", 80, 0.0, -10
G "Cell_039", "worlds\Dungeon_01E7\cell_01E70127.x", 0.0, 6, -10
G "Cell_040", "worlds\Dungeon_01E7\cell_01E70128.x", 0.0, 6, -20
G "Cell_041", "worlds\Dungeon_01E7\cell_01E70129.x", 0.0, 6, -30
G "Cell_042", "worlds\Dungeon_01E7\cell_01E7012A.x", 10, 6, -10
G "Cell_043", "worlds\Dungeon_01E7\cell_01E7012B.x", 10, 6, -20
G "Cell_044", "worlds\Dungeon_01E7\cell_01E7012C.x", 10, 6, -30
G "Cell_045", "worlds\Dungeon_01E7\cell_01E7012D.x", 20, 6, -10
G "Cell_046", "worlds\Dungeon_01E7\cell_01E7012E.x", 20, 6, -20
G "Cell_047", "worlds\Dungeon_01E7\cell_01E7012F.x", 20, 6, -30
G "Cell_048", "worlds\Dungeon_01E7\cell_01E70130.x", 30, 6, -20
G "Cell_049", "worlds\Dungeon_01E7\cell_01E70131.x", 30, 6, -30
G "Cell_050", "worlds\Dungeon_01E7\cell_01E70132.x", 30, 6, -40
G "Cell_051", "worlds\Dungeon_01E7\cell_01E70133.x", 40, 6, -20
G "Cell_052", "worlds\Dungeon_01E7\cell_01E70134.x", 40, 6, -30
G "Cell_053", "worlds\Dungeon_01E7\cell_01E70135.x", 40, 6, -40
G "Cell_054", "worlds\Dungeon_01E7\cell_01E70136.x", 50, 6, -30
G "Cell_055", "worlds\Dungeon_01E7\cell_01E70137.x", 50, 6, -40
G "Cell_056", "worlds\Dungeon_01E7\cell_01E70138.x", 60, 6, 0.0
G "Cell_057", "worlds\Dungeon_01E7\cell_01E70139.x", 60, 6, -10
G "Cell_058", "worlds\Dungeon_01E7\cell_01E7013A.x", 60, 6, -20
G "Cell_059", "worlds\Dungeon_01E7\cell_01E7013B.x", 60, 6, -30
G "Cell_060", "worlds\Dungeon_01E7\cell_01E7013C.x", 70, 6, 0.0
G "Cell_061", "worlds\Dungeon_01E7\cell_01E7013D.x", 70, 6, -10
G "Cell_062", "worlds\Dungeon_01E7\cell_01E7013E.x", 70, 6, -20
G "Cell_063", "worlds\Dungeon_01E7\cell_01E7013F.x", 80, 6, 0.0
G "Cell_064", "worlds\Dungeon_01E7\cell_01E70140.x", 80, 6, -10

' World.SaveDatabase
