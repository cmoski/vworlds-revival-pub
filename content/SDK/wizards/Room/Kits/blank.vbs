'-----------------------------
' blank.vbs
' Creates a blank room

sub CreateRoom(BlankRoom, Name)

	set BlankRoom = World.CreateInstance(Name, "Room")

	BlankRoom.InitializeGraphics "", 0.0, 0.0, 0.0, 1.0, 0.0, 0.0
	BlankRoom.BackgroundColor = 0

	'Now add objects to the BlankRoom
	
			Dim floor
			set floor= World.CreateInstance("floor", "Artifact")
			floor.Description = "floor"
			floor.RenderQuality=3
			floor.InitializeGraphics "SDK\Library\Models\_EmptyRoom\floorer.x", 0.0, 0.0, 0.0, 1.0, 0.0, 0.0
			floor.MoveInto BlankRoom
			CreateFloorBoundaries(floor)

			Dim light
			set light= World.CreateInstance("light", "Artifact")
			light.Description = "light"
			light.InitializeGraphics "SDK\Library\Models\lights\omni150.3ds", 16.0, 16.0, 16.0, 1.0, 0.0, 0.0
			light.MoveInto BlankRoom

			Dim ceiling
			set ceiling= World.CreateInstance("ceiling", "Artifact")
			ceiling.Description = "ceiling"
			ceiling.RenderQuality=3
			ceiling.InitializeGraphics "SDK\Library\Models\_EmptyRoom\ceilger.x", 0.0, 4.0, 0.0, 1.0, 0.0, 0.0
			ceiling.MoveInto BlankRoom
	
			Dim wall1
			set wall1= World.CreateInstance("wall1", "Artifact")
			wall1.Description = "wall1"
			wall1.RenderQuality=3
			wall1.InitializeGraphics "SDK\Library\Models\_EmptyRoom\wall1er.x", 6.0, 2.0, 0.0, -1.0, 0.0, 0.0
			wall1.MoveInto BlankRoom
	
			Dim wall2
			set wall2= World.CreateInstance("wall2", "Artifact")
			wall2.Description = "wall2"
			wall2.RenderQuality=3
			wall2.InitializeGraphics "SDK\Library\Models\_EmptyRoom\wall2er.x", -6.0, 2.0, 0.0, 1.0, 0.0, 0.0
			wall2.MoveInto BlankRoom
	
			Dim wall3
			set wall3= World.CreateInstance("wall3", "Artifact")
			wall3.Description = "wall3"
			wall3.RenderQuality=3
			wall3.InitializeGraphics "SDK\Library\Models\_EmptyRoom\wall3er.x", 0.0, 2.0, 6.0, 0.0, 0.0, -1.0
			wall3.MoveInto BlankRoom
	
			Dim wall4
			set wall4= World.CreateInstance("wall4", "Artifact")
			wall4.Description = "wall4"
			wall4.RenderQuality=3
			wall4.InitializeGraphics "SDK\Library\Models\_EmptyRoom\wall4er.x", 0.0, 2.0, -6.0, 0.0, 0.0, 1.0
			wall4.MoveInto BlankRoom


	World.Trace "done creating Empty Room"
end sub

Sub CreateFloorBoundaries(thething)

	Dim Ecb, theBoundaryList, theBoundaryList_t
	Set theBoundaryList = World.Global.CreateBoundaryList
	set theBoundaryList_t = World.CreateBoundary(Array(_
		-5.33333, 5.43263, 5.44681, 5.37589, 5.50355, -5.34752, -5.39007, -5.46099_
		))
	theBoundaryList_t.HeightUpper = 10.0
	theBoundaryList_t.HeightLower = 0.01
	theBoundaryList.Add theBoundaryList_t
	set thething.BoundaryList = theBoundaryList
End Sub

sub CreateTrueBlankRoom(BlankRoom, Name)

	set BlankRoom = World.CreateInstance(Name, "Room")

	BlankRoom.InitializeGraphics "", 0.0, 0.0, 0.0, 1.0, 0.0, 0.0
	BlankRoom.BackgroundColor = 0

	'Now add objects to the BlankRoom
	'actually, dont since its really blank
end sub

sub CreateCells(RoomCell)
	Dim CellArray
	set RoomCell = World.Global.CreateBoundaryList()
	
	' empty room walls
	CellArray = Array( _
	-2.2, 4.2, _
	2.2, 4.2, _
	2.2, -4.2, _
	-2.2, -4.2)
	CreateCellFromArray RoomCell, CellArray, 4 , 3.0, 1.0
end sub