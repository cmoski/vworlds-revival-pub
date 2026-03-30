' VWorlds dungeon creation script
' World: Dungeon_5E47
' 254 artifact(s)
'
' Usage: cscript Dungeon_5E47_create.vbs

Dim Client, World, Room

Set Client = CreateObject("VWSYSTEM.Client.1")
' Client.Initialize
Set World = Client.ConnectLocal("Dungeon_5E47")

World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3
World.CreateCOMModule "Studio", "VWSTUDIO.StudioEx.1", 3
World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3
World.Global.DefaultSpriteFile = "default.spr"

Set Room = World.CreateInstance("Dungeon_5E47", World.Exemplar("Room"))
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

' --- 254 dungeon pieces ---
G "Obj_0_0", "worlds\Dungeon_5E47\static_0_0_02000285.x", 4, 0.005, 2.75
G "Obj_0_1", "worlds\Dungeon_5E47\static_0_1_02000970.x", 0.5, 0.005, -0.5
G "Obj_0_2", "worlds\Dungeon_5E47\static_0_2_0200093B.x", 1.5692, 0.005, -1.13298
G "Obj_0_3", "worlds\Dungeon_5E47\static_0_3_02000EEE.x", -0.3, 0.927, -0.9
G "Obj_0_4", "worlds\Dungeon_5E47\static_0_4_02000EEE.x", -0.112302, 0.927, -0.723754
G "Obj_0_5", "worlds\Dungeon_5E47\static_0_5_02000EEE.x", -0.225, 0.927, -0.8
G "Obj_0_6", "worlds\Dungeon_5E47\static_0_6_02000EEE.x", -0.013545, 0.927, -0.653453
G "Obj_0_7", "worlds\Dungeon_5E47\static_0_7_02000EEE.x", 0.065142, 0.927, -0.588768
G "Obj_0_8", "worlds\Dungeon_5E47\static_0_8_02000EEE.x", 0.149979, 0.927, -0.512206
G "Obj_0_9", "worlds\Dungeon_5E47\static_0_9_02000EEE.x", 0.22909, 0.927, -0.417617
G "Obj_0_10", "worlds\Dungeon_5E47\static_0_10_02000EEE.x", 0.308201, 0.927, -0.323027
G "Obj_0_11", "worlds\Dungeon_5E47\static_0_11_02000182.x", 0.585, 0.925, -0.666
G "Obj_0_12", "worlds\Dungeon_5E47\static_0_12_02000182.x", 0.196112, 0.925, -1.02129
G "Obj_0_13", "worlds\Dungeon_5E47\static_0_13_02000B55.x", 0.910225, 0.925, -0.199223
G "Obj_0_14", "worlds\Dungeon_5E47\static_0_14_02000DB4.x", -0.47172, 2.03562, -1.67577
G "Obj_0_15", "worlds\Dungeon_5E47\static_0_15_02000DB4.x", 1.35239, 2.00887, 0.860681
G "Obj_1_0", "worlds\Dungeon_5E47\static_1_0_0200096C.x", -4.75, 0.0, -16
G "Obj_1_1", "worlds\Dungeon_5E47\static_1_1_0200096C.x", -4.75, 0.0, -17.6
G "Obj_1_2", "worlds\Dungeon_5E47\static_1_2_0200096C.x", -4.75, 0.0, -19.2
G "Obj_1_3", "worlds\Dungeon_5E47\static_1_3_0200096C.x", -4.75, 0.0, -20.8
G "Obj_1_4", "worlds\Dungeon_5E47\static_1_4_0200096C.x", -4.75, 0.0, -22.4
G "Obj_1_5", "worlds\Dungeon_5E47\static_1_5_0200096C.x", -4.75, 0.0, -24
G "Obj_1_6", "worlds\Dungeon_5E47\static_1_6_0200096C.x", -4.75, 2, -24
G "Obj_1_7", "worlds\Dungeon_5E47\static_1_7_0200096C.x", -4.75, 2, -22.4
G "Obj_1_8", "worlds\Dungeon_5E47\static_1_8_0200096C.x", -4.75, 2, -20.8
G "Obj_1_9", "worlds\Dungeon_5E47\static_1_9_0200096C.x", -4.75, 2, -19.2
G "Obj_1_10", "worlds\Dungeon_5E47\static_1_10_0200096C.x", -4.75, 2, -17.6
G "Obj_1_11", "worlds\Dungeon_5E47\static_1_11_0200096C.x", -4.75, 2, -16
G "Obj_1_12", "worlds\Dungeon_5E47\static_1_12_0200096C.x", -4.75, 4, -16
G "Obj_1_13", "worlds\Dungeon_5E47\static_1_13_0200096C.x", -4.75, 4, -24
G "Obj_1_14", "worlds\Dungeon_5E47\static_1_14_0200096C.x", -4.75, 4, -22.4
G "Obj_1_15", "worlds\Dungeon_5E47\static_1_15_0200096C.x", -4.75, 4, -20.8
G "Obj_1_16", "worlds\Dungeon_5E47\static_1_16_0200096C.x", -4.75, 4, -19.2
G "Obj_1_17", "worlds\Dungeon_5E47\static_1_17_0200096C.x", -4.75, 4, -17.6
G "Obj_1_18", "worlds\Dungeon_5E47\static_1_18_0200094F.x", -0.978455, 0.005, -23.5877
G "Obj_1_19", "worlds\Dungeon_5E47\static_1_19_0200093B.x", -1.49633, 0.005, -22.5398
G "Obj_1_20", "worlds\Dungeon_5E47\static_1_20_0200093B.x", -0.94285, 0.005, -24.8336
G "Obj_1_21", "worlds\Dungeon_5E47\static_1_21_02000154.x", -0.894642, 0.9615, -23.5608
G "Obj_1_22", "worlds\Dungeon_5E47\static_1_22_0200094B.x", -0.784, 0.005, -18.38
G "Obj_1_23", "worlds\Dungeon_5E47\static_1_23_0200093B.x", -1.54324, 0.005, -18.3956
G "Obj_1_24", "worlds\Dungeon_5E47\static_1_24_02000179.x", -0.762686, 0.968, -18.28646
G "Obj_1_25", "worlds\Dungeon_5E47\static_1_25_02000DB6.x", -0.937215, 2.27638, -23.4632
G "Obj_1_26", "worlds\Dungeon_5E47\static_1_26_02000DB6.x", -0.675483, 2.00071, -18.55542
G "Cell_002", "worlds\Dungeon_5E47\cell_5E470102.x", 0.0, 0.0, -20
G "Obj_7_0", "worlds\Dungeon_5E47\static_7_0_0200096C.x", -4.749998, 0.0, 4.000002
G "Obj_7_1", "worlds\Dungeon_5E47\static_7_1_0200096C.x", -4.749998, 0.0, 2.400002
G "Obj_7_2", "worlds\Dungeon_5E47\static_7_2_0200096C.x", -4.75, 0.0, 0.800002
G "Obj_7_3", "worlds\Dungeon_5E47\static_7_3_0200096C.x", -4.75, 0.0, -0.799998
G "Obj_7_4", "worlds\Dungeon_5E47\static_7_4_0200096C.x", -4.75, 0.0, -2.399998
G "Obj_7_5", "worlds\Dungeon_5E47\static_7_5_0200096C.x", -4.75, 0.0, -3.999998
G "Obj_7_6", "worlds\Dungeon_5E47\static_7_6_0200096C.x", -4.75, 2, -3.999998
G "Obj_7_7", "worlds\Dungeon_5E47\static_7_7_0200096C.x", -4.75, 2, -2.399998
G "Obj_7_8", "worlds\Dungeon_5E47\static_7_8_0200096C.x", -4.75, 2, -0.799998
G "Obj_7_9", "worlds\Dungeon_5E47\static_7_9_0200096C.x", -4.75, 2, 0.800002
G "Obj_7_10", "worlds\Dungeon_5E47\static_7_10_0200096C.x", -4.749998, 2, 2.400002
G "Obj_7_11", "worlds\Dungeon_5E47\static_7_11_0200096C.x", -4.749998, 2, 4.000002
G "Obj_7_12", "worlds\Dungeon_5E47\static_7_12_0200096C.x", -4.749998, 4, 4.000002
G "Obj_7_13", "worlds\Dungeon_5E47\static_7_13_0200096C.x", -4.75, 4, -3.999998
G "Obj_7_14", "worlds\Dungeon_5E47\static_7_14_0200096C.x", -4.75, 4, -2.399998
G "Obj_7_15", "worlds\Dungeon_5E47\static_7_15_0200096C.x", -4.75, 4, -0.799998
G "Obj_7_16", "worlds\Dungeon_5E47\static_7_16_0200096C.x", -4.75, 4, 0.800002
G "Obj_7_17", "worlds\Dungeon_5E47\static_7_17_0200096C.x", -4.749998, 4, 2.400002
G "Obj_7_18", "worlds\Dungeon_5E47\static_7_18_0200094F.x", -0.9785, 0.005, -3.587658
G "Obj_7_19", "worlds\Dungeon_5E47\static_7_19_0200093B.x", -1.4963, 0.005, -2.539758
G "Obj_7_20", "worlds\Dungeon_5E47\static_7_20_0200093B.x", -0.9429, 0.005, -4.833558
G "Obj_7_21", "worlds\Dungeon_5E47\static_7_21_0200094B.x", -0.783999, 0.005, 1.620002
G "Obj_7_22", "worlds\Dungeon_5E47\static_7_22_0200093B.x", -1.543198, 0.005, 1.604402
G "Obj_7_23", "worlds\Dungeon_5E47\static_7_23_02000179.x", -0.794798, 0.901125, 2.113102
G "Obj_7_24", "worlds\Dungeon_5E47\static_7_24_02000DB6.x", -2.129499, 2.27638, -3.793198
G "Obj_7_25", "worlds\Dungeon_5E47\static_7_25_02000DB6.x", -0.866697, 2.00071, 2.473502
G "Cell_008", "worlds\Dungeon_5E47\cell_5E470108.x", 20, 0.0, -20
G "Cell_026", "worlds\Dungeon_5E47\cell_5E47011A.x", 20, 12, -20
G "Cell_027", "worlds\Dungeon_5E47\cell_5E47011B.x", 0.0, 18, 0.0
G "Cell_028", "worlds\Dungeon_5E47\cell_5E47011C.x", 0.0, 18, -10
G "Cell_029", "worlds\Dungeon_5E47\cell_5E47011D.x", 0.0, 18, -20
G "Cell_030", "worlds\Dungeon_5E47\cell_5E47011E.x", 10, 18, 0.0
G "Cell_031", "worlds\Dungeon_5E47\cell_5E47011F.x", 10, 18, -10
G "Cell_032", "worlds\Dungeon_5E47\cell_5E470120.x", 10, 18, -20
G "Cell_033", "worlds\Dungeon_5E47\cell_5E470121.x", 20, 18, 0.0
G "Cell_034", "worlds\Dungeon_5E47\cell_5E470122.x", 20, 18, -10
G "Cell_035", "worlds\Dungeon_5E47\cell_5E470123.x", 20, 18, -20

' World.SaveDatabase
