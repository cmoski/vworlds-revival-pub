'-----------------------------
' shared.vbs
' Shared subroutines related to rooms


sub CreateCell(Room, RoomCell)
		CreateEmptyRoomCells RoomCell
		Room.BoundaryList = RoomCell
		set RoomCell = Nothing
end sub

sub CreateCellFromArray( theCell, ptsBoundary(), numPts , upper, lower )
	Dim i
	Dim boundary
	Dim succ

	set boundary = World.CreateBoundary()

	for i = 0 To numPts - 1
		succ = boundary.InsertVertexSafe(-1, ptsBoundary(i*2),ptsBoundary(i*2 +1))
	next
	boundary.IsClosed = True
	boundary.HeightUpper = upper
	boundary.HeightLower = lower
	theCell.Add(boundary)
		
end sub

sub CreateRoomFromWithinWorld(TheRoom)
	msgbox("in sub")
	set client = top.frames(0).helper.client
	set world = client.world
	set user = world.user
	set currentRoom = user.container

	set TheRoom = World.CreateInstance(top.frames(0).NewRoomName, World.Exemplar("Room"))
	TheRoom.InitializeGraphics top.frames(0).Geometry, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0
	TheRoom.BackgroundColor = 0
	TheRoom.Description = top.frames(0).NewRoomDesc

	World.Trace "Done creating Room " + top.frames(0).NewRoomName

end sub
