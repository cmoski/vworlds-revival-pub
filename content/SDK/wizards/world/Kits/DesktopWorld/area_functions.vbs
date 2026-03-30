option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		MakeBoundary
'//  Purpose:	Create a boundary, add it to an object and set its height and other properties.
'//  Arguments: theObject		object	the object to add the boundary to
'//				Points			array	an array of vertices (define before calling CreateContainerBoundary)
'//             Height			real	boundary's upper limit (height)
'//             Depth			real	boundary's lower limit (depth)
'//             CanPass			bit		is the boundary passable TRUE/FALSE. If the boundary is passable
'//										we save collision-handling and navigation information about it.
'//             Invert			bit		is the boundary inverted? An inverted boundary is completely contained within an area,
'//										forming a kind of bubble that is considered to be outside of the area.
'//										Passing inward through an inverted boundary is treated as leaving the surrounding area;
'//										passing outward is treated as entering the surrounding area.
'////////////////////////////////////////////////////////////////////////
sub makeBoundary(theObject, Points, Height, Depth, CanPass, Invert)
	' Create a boundary on theObject from the array of points
	dim TheBoundary
	set TheBoundary = world.global.CreateBoundary(Points)
	TheBoundary.HeightUpper = Height
	TheBoundary.HeightLower = Depth
	TheBoundary.IsPassable = CanPass
	TheBoundary.IsInverse = Invert
	theObject.BoundaryList.Add TheBoundary
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		MakeAreaBoundary
'//  Purpose:	Create a boundary representing an area of the lobby room, and save information about
'//				the new boundary for collision behavior and automatic navigation.
'//  Arguments: Name			string	boundary name, used for display only.
'//             Status			string	additional text about the area, used for display only.
'//             Destination		string	boundary name used by auto-navigation to identify this area;
'//										if blank then auto-navigation cannot go to or from this area
'//				ExitTo			string	boundary name of the area the user enters upon exiting this area
'//				Points			array	an array of vertices (define before calling CreateContainerBoundary)
'//             Height			real	boundary's upper limit (height)
'//             Depth			real	boundary's lower limit (depth)
'//             CanPass			bit		is the boundary passable TRUE/FALSE. If the boundary is passable
'//										we save collision-handling and navigation information about it.
'//             Invert			bit		is the boundary inverted? An inverted boundary is completely contained within an area,
'////////////////////////////////////////////////////////////////////////
sub MakeAreaBoundary(Name, Status, Destination, ExitTo, Points, Height, Depth, CanPass, Invert)
	' LobbyRm is declared in DesktopWorld.htm
	MakeBoundary LobbyRm, Points, Height, Depth, CanPass, Invert
	' add the boundary index of the boundary just added; when an object collides with a boundary
	' the OnIntersectee method will check this list to determine if the boundary is an area boundary.
	LobbyRm.AreaBoundaryIndex.Add LobbyRm.BoundaryList.count - 1
	' save display and navigation info for the area
	LobbyRm.AreaName.Add Name
	LobbyRm.AreaDestination.Add Destination
	LobbyRm.AreaExitTo.Add ExitTo
	LobbyRm.AreaStatus.Add Status
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		add_area_functions
'//  Purpose:	Add boundary and navigation related properties and methods to the lobby room object.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub add_area_functions
	' Boundary collision handling

	' Create property lists to store area boundary information
	' AreaBoundaryIndex contains the boundary number surrounding each area
	LobbyRm.addproperty "AreaBoundaryIndex", world.createPropertyList, , world.PS_ALL_RWA
	' AreaName contains the name of each area for display in the UI
	LobbyRm.addproperty "AreaName", world.createPropertyList, , world.PS_ALL_RWA
	' AreaStatus contains text to display in the UI when the user enters each area
	LobbyRm.addproperty "AreaStatus", world.createPropertyList, , world.PS_ALL_RWA
	' AreaDestination contains the name of each area for the user.from property and for auto-navigation path names
	LobbyRm.addproperty "AreaDestination", world.createPropertyList, , world.PS_ALL_RWA
	' AreaExit contains the destination name of the area you will enter when you exit each area
	LobbyRm.addproperty "AreaExitTo", world.createPropertyList, , world.PS_ALL_RWA
	' AreaName and AreaStatus used for display are only.
	' AreaDestination is used by navigation and frame-swapping procedures to identify an area.

	LobbyRm.CreateAndAddMethod World.METHOD_CLIENT, area_module, "BoundaryCollision", "OnIntersectee", ,_
		world.PS_ALL_E + world.PS_ALL_RWA

	' The lobby room onLoadGeometry builds lists of frames to swap in/out based on the above object lists
	LobbyRm.CreateAndAddMethod World.METHOD_CLIENT, area_module, "room_OnLoadGeometry", "OnLoadGeometry", ,_
		world.PS_ALL_E + world.PS_ALL_RWA
	LobbyRm.CreateAndAddMethod World.METHOD_CLIENT, area_module, "room_SwapFramesIn", "swapFramesIn", ,_
		world.PS_ALL_E + world.PS_ALL_RWA
	LobbyRm.CreateAndAddMethod World.METHOD_CLIENT, area_module, "room_SwapFramesOut", "swapFramesOut", ,_
		world.PS_ALL_E + world.PS_ALL_RWA

	' Start and stop the idling loops when someone enters and leaves an area
	LobbyRm.CreateAndAddMethod World.METHOD_CLIENT, area_module, "room_StartAnimationLoops", "StartAnimationLoops", ,_
		world.PS_ALL_E + world.PS_ALL_RWA
	LobbyRm.CreateAndAddMethod World.METHOD_CLIENT, area_module, "room_StopAnimationLoops", "StopAnimationLoops", ,_
		world.PS_ALL_E + world.PS_ALL_RWA

	' Random scattering method
	world.global.CreateAndAddMethod World.METHOD_CLIENT, area_module, "world_Scatter", "Scatter", ,_
		world.PS_ALL_E + world.PS_ALL_RWA
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		make_navigation_paths
'//  Purpose:	Create property maps and property lists with auto-navigation path coordinates.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub make_navigation_paths
	' Create paths of points from area to area for the auto-navigation methods.

	' The NavPoints propertyMap contains position vectors in the world, keyed by point names.
	' Each point is an x,y,z position vector, stored in the NavPoints propertyMap, 
	' keyed by a point name. Most point names are one letter, but the ones representing
	' endpoints in areas of the world are named for the area.

	' The NavPaths propertyMap contains strings consisting of comma-separated lists of point names.
	' Each path is a string containing a comma-separated list of point names,
	' stored in the NavPaths propertyMap keyed by a path name "<fromArea>_to_<toArea>".
	
	' The auto-navigation mechanism uses area names to get a path string from NavPaths.
	' Iterating through this string it uses the point names to get points from NavPoints,
	' and moves the avatar from point to point. 
	' (see subs path_start and path_move in area_module.vbs)

	' Where a path crosses an area boundary, the area name is appended to the crossing point
	' name with a colon, as in "W:ResourceDesk". This tells the navigation methods to trigger
	' a boundary crossing event at that point. This is necessary because the Avatar.ApproachLocation
	' method used to move the avatar to each point does not generate boundary crossing events.

	CONST floorY = 1.13		' the y coordinate representing floor height in this world
	dim NavPoints
	set NavPoints = world.createpropertymap
	world.global.addproperty "NavPoints", NavPoints, ,world.PS_ALL_RWA

	world.global.NavPoints.property("Lobby") = world.createvector(7.74,floorY,3.7)
	world.global.NavPoints.property("GiftCarts") = world.createvector(25.1,floorY,7.9)
	world.global.NavPoints.property("MusicGarden") = world.createvector(7.5,floorY,22.8)
	world.global.NavPoints.property("GameRoom") = world.createvector(-10,1.7,4.5)
	world.global.NavPoints.property("ResourceDesk") = world.createvector(7.5,floorY,10.2)
	world.global.NavPoints.property("SeattleDesk") = world.createvector(10.9,1.13,-0.2)
	world.global.NavPoints.property("DiscussionArea") = world.createvector(3.65,floorY,-4.35)
	world.global.NavPoints.property("A") = world.createvector(25,floorY,8)
	world.global.NavPoints.property("B") = world.createvector(25,floorY,0)
	world.global.NavPoints.property("C") = world.createvector(24,floorY,-6)
	world.global.NavPoints.property("D") = world.createvector(19.3,floorY,8.5)
	world.global.NavPoints.property("E") = world.createvector(16.5,floorY,11.6)
	world.global.NavPoints.property("F:MusicGarden") = world.createvector(15.3,floorY,15.3)
	world.global.NavPoints.property("F:Lobby") = world.createvector(15.3,floorY,15.3)
	world.global.NavPoints.property("G") = world.createvector(14.9,floorY,20.5)
	world.global.NavPoints.property("H") = world.createvector(14.5,floorY,6.5)
	world.global.NavPoints.property("I") = world.createvector(0.7,floorY,19.4)
	world.global.NavPoints.property("J") = world.createvector(-1,floorY,11.7)
	world.global.NavPoints.property("K") = world.createvector(0.6,floorY,8.4)
	world.global.NavPoints.property("L") = world.createvector(0.6,floorY,0.74)
	world.global.NavPoints.property("M:GameRoom") = world.createvector(-3.5,1.7,4.5)
	world.global.NavPoints.property("M:Lobby") = world.createvector(-3.5,1.7,4.5)
	world.global.NavPoints.property("N") = world.createvector(9.5,floorY,8.5)
	world.global.NavPoints.property("O") = world.createvector(4.7,floorY,-2.5)
	world.global.NavPoints.property("P") = world.createvector(3.5,floorY,5.1)
	world.global.NavPoints.property("Q") = world.createvector(11.8,floorY,5.1)
	world.global.NavPoints.property("R:GiftCarts") = world.createvector(15,floorY,-4.35)
	world.global.NavPoints.property("S") = world.createvector(10,floorY,-4.35)
	world.global.NavPoints.property("T:MusicGarden") = world.createvector(-0.35,floorY,15.3)
	world.global.NavPoints.property("U:GiftCarts") = world.createvector(20.5,floorY,9.2)
	world.global.NavPoints.property("U:Lobby") = world.createvector(20.5,floorY,9.2)
	world.global.NavPoints.property("V:SeattleDesk") = world.createvector(10.0,floorY,-0.2)
	world.global.NavPoints.property("V:Lobby") = world.createvector(10.0,floorY,-0.2)
	world.global.NavPoints.property("W:ResourceDesk") = world.createvector(7.5,floorY,8.0)
	world.global.NavPoints.property("W:Lobby") = world.createvector(7.5,floorY,8.0)
	world.global.NavPoints.property("X:FlowerCart") = world.createvector(26.5,floorY,7.4)
	world.global.NavPoints.property("Y:BalloonCart") = world.createvector(27.0,floorY,-2.1)
	world.global.NavPoints.property("Z:DiscussionArea") = world.createvector(3.6,floorY,-3.5)
	world.global.NavPoints.property("Z:Lobby") = world.createvector(3.6,floorY,-3.5)

	' At runtime the auto-navigation methods generate a direction vector for each point on
	' the path by looking ahead to the next point. The final point in each path is used only
	' to generate a final direction vector; the avatar is not actually moved there.
	' Here are the final direction points for all destination areas:

	world.global.NavPoints.property("GiftCartsDir") = world.createvector(37.0,floorY,-2.0)
	world.global.NavPoints.property("MusicGardenDir") = world.createvector(7.5,floorY,25.0)
	world.global.NavPoints.property("GameRoomDir") = world.createvector(-15.0,1.7,4.5)
	world.global.NavPoints.property("ResourceDeskDir") = world.createvector(7.5,floorY,21.0)
	world.global.NavPoints.property("SeattleDeskDir") = world.createvector(20.0,floorY,-0.2)
	world.global.NavPoints.property("DiscussionAreaDir") = world.createvector(3.6,floorY,-15.0)
	world.global.NavPoints.property("LobbyDir") = world.createvector(20.0,floorY,-0.2)

	' The NavPaths propertyMap contains paths between areas. Each path is a string containing
	' a comma-separated lists of keynames for points in the NavPoints propertyMap. 

	dim NavPaths
	set NavPaths = world.createpropertymap
	world.global.addproperty "NavPaths", NavPaths, ,world.PS_ALL_RWA

	world.global.NavPaths.property("ResourceDesk_to_SeattleDesk") = "ResourceDesk,W:ResourceDesk,N,Q,V:SeattleDesk,SeattleDesk,SeattleDeskDir"
 	world.global.NavPaths.property("ResourceDesk_to_GiftCarts") = "ResourceDesk,W:ResourceDesk,N,D,U:GiftCarts,A,GiftCarts,GiftCartsDir"
 	world.global.NavPaths.property("ResourceDesk_to_MusicGarden") = "ResourceDesk,W:ResourceDesk,N,E,F:MusicGarden,G,MusicGarden,MusicGardenDir"
 	world.global.NavPaths.property("ResourceDesk_to_DiscussionArea") = "ResourceDesk,W:ResourceDesk,N,Q,O,Z:DiscussionArea,DiscussionArea,DiscussionAreaDir"
 	world.global.NavPaths.property("ResourceDesk_to_GameRoom") = "ResourceDesk,W:ResourceDesk,P,M:GameRoom,GameRoom,GameRoomDir"
	world.global.NavPaths.property("ResourceDesk_to_Lobby") = "ResourceDesk,W:Lobby,Lobby,LobbyDir"
 	world.global.NavPaths.property("SeattleDesk_to_ResourceDesk") = "SeattleDesk,V:SeattleDesk,Q,N,W:ResourceDesk,ResourceDesk,ResourceDeskDir"
 	world.global.NavPaths.property("SeattleDesk_to_GiftCarts") = "SeattleDesk,V:SeattleDesk,Q,H,D,U:GiftCarts,A,GiftCarts,GiftCartsDir"
	world.global.NavPaths.property("SeattleDesk_to_MusicGarden") = "SeattleDesk,V:SeattleDesk,Q,E,F:MusicGarden,G,MusicGarden,MusicGardenDir"
 	world.global.NavPaths.property("SeattleDesk_to_DiscussionArea") = "SeattleDesk,V:SeattleDesk,Z:DiscussionArea,DiscussionArea,DiscussionAreaDir"
 	world.global.NavPaths.property("SeattleDesk_to_GameRoom") = "SeattleDesk,V:SeattleDesk,Q,P,M:GameRoom,GameRoom,GameRoomDir"
	world.global.NavPaths.property("SeattleDesk_to_Lobby") = "SeattleDesk,V:Lobby,Lobby,LobbyDir"
 	world.global.NavPaths.property("MusicGarden_to_ResourceDesk") = "MusicGarden,G,F:MusicGarden,E,N,W:ResourceDesk,ResourceDesk,ResourceDeskDir"
 	world.global.NavPaths.property("MusicGarden_to_SeattleDesk") = "MusicGarden,G,F:MusicGarden,E,Q,V:SeattleDesk,SeattleDesk,SeattleDeskDir"
 	world.global.NavPaths.property("MusicGarden_to_GiftCarts") = "MusicGarden,G,F:MusicGarden,E,D,U:GiftCarts,A,GiftCarts,GiftCartsDir"
 	world.global.NavPaths.property("MusicGarden_to_DiscussionArea") = "MusicGarden,I,T:MusicGarden,J,K,O,Z:DiscussionArea,DiscussionArea,DiscussionAreaDir"
 	world.global.NavPaths.property("MusicGarden_to_GameRoom") = "MusicGarden,I,T:MusicGarden,J,K,M:GameRoom,GameRoom,GameRoomDir"
 	world.global.NavPaths.property("MusicGarden_to_Lobby") = "MusicGarden,G,F:Lobby,E,Lobby,LobbyDir"
 	world.global.NavPaths.property("DiscussionArea_to_ResourceDesk") = "DiscussionArea,Z:DiscussionArea,O,W:ResourceDesk,ResourceDesk,ResourceDeskDir"
 	world.global.NavPaths.property("DiscussionArea_to_SeattleDesk") = "DiscussionArea,Z:DiscussionArea,V:SeattleDesk,SeattleDesk,SeattleDeskDir"
 	world.global.NavPaths.property("DiscussionArea_to_GiftCarts") = "DiscussionArea,Z:DiscussionArea,S,R:GiftCarts,C,B,GiftCarts,GiftCartsDir"
 	world.global.NavPaths.property("DiscussionArea_to_MusicGarden") = "DiscussionArea,Z:DiscussionArea,O,Q,E,F:MusicGarden,G,MusicGarden,MusicGardenDir"
 	world.global.NavPaths.property("DiscussionArea_to_GameRoom") = "DiscussionArea,Z:DiscussionArea,O,L,M:GameRoom,GameRoom,GameRoomDir"
 	world.global.NavPaths.property("DiscussionArea_to_Lobby") = "DiscussionArea,Z:Lobby,O,Lobby,LobbyDir"
 	world.global.NavPaths.property("GameRoom_to_ResourceDesk") = "GameRoom,M:GameRoom,P,W:ResourceDesk,ResourceDesk,ResourceDeskDir"
 	world.global.NavPaths.property("GameRoom_to_SeattleDesk") = "GameRoom,M:GameRoom,L,V:SeattleDesk,SeattleDesk,SeattleDeskDir"
 	world.global.NavPaths.property("GameRoom_to_GiftCarts") = "GameRoom,M:GameRoom,P,N,D,U:GiftCarts,A,GiftCarts,GiftCartsDir"
 	world.global.NavPaths.property("GameRoom_to_MusicGarden") = "GameRoom,M:GameRoom,K,J,T:MusicGarden,I,MusicGarden,MusicGardenDir"
 	world.global.NavPaths.property("GameRoom_to_DiscussionArea") = "GameRoom,M:GameRoom,L,O,Z:DiscussionArea,DiscussionArea,DiscussionAreaDir"
	world.global.NavPaths.property("GameRoom_to_Lobby") = "GameRoom,M:Lobby,Lobby,LobbyDir"
 	world.global.NavPaths.property("GiftCarts_to_ResourceDesk") = "GiftCarts,A,U:GiftCarts,D,N,W:ResourceDesk,ResourceDesk,ResourceDeskDir"
 	world.global.NavPaths.property("GiftCarts_to_SeattleDesk") = "GiftCarts,A,U:GiftCarts,D,H,Q,V:SeattleDesk,SeattleDesk,SeattleDeskDir"
 	world.global.NavPaths.property("GiftCarts_to_MusicGarden") = "GiftCarts,A,U:GiftCarts,D,E,F:MusicGarden,G,MusicGarden,MusicGardenDir"
 	world.global.NavPaths.property("GiftCarts_to_DiscussionArea") = "GiftCarts,B,C,R:GiftCarts,S,Z:DiscussionArea,DiscussionArea,DiscussionAreaDir"
 	world.global.NavPaths.property("GiftCarts_to_GameRoom") = "GiftCarts,A,U:GiftCarts,D,N,P,M:GameRoom,GameRoom,GameRoomDir"
 	world.global.NavPaths.property("GiftCarts_to_Lobby") = "GiftCarts,A,U:Lobby,D,Lobby,LobbyDir"

	world.global.NavPaths.property("Lobby_to_ResourceDesk") = "Lobby,W:ResourceDesk,ResourceDesk,ResourceDeskDir"
	world.global.NavPaths.property("Lobby_to_SeattleDesk") = "Lobby,V:SeattleDesk,SeattleDesk,SeattleDeskDir"
 	world.global.NavPaths.property("Lobby_to_GiftCarts") = "Lobby,D,U:GiftCarts,A,GiftCarts,GiftCartsDir"
 	world.global.NavPaths.property("Lobby_to_MusicGarden") = "Lobby,E,F:MusicGarden,G,MusicGarden,MusicGardenDir"
 	world.global.NavPaths.property("Lobby_to_DiscussionArea") = "Lobby,O,Z:DiscussionArea,DiscussionArea,DiscussionAreaDir"
 	world.global.NavPaths.property("Lobby_to_GameRoom") = "Lobby,M:GameRoom,GameRoom,GameRoomDir"

 	world.global.NavPaths.property("FlowerCart_to_GiftCarts") = "X:FlowerCart,GiftCarts,GiftCartsDir"
  	world.global.NavPaths.property("FlowerCart_to_ResourceDesk") = "X:FlowerCart,GiftCarts,A,U:GiftCarts,D,N,W:ResourceDesk,ResourceDesk,ResourceDeskDir"
 	world.global.NavPaths.property("FlowerCart_to_SeattleDesk") = "X:FlowerCart,GiftCarts,A,U:GiftCarts,D,H,Q,V:SeattleDesk,SeattleDesk,SeattleDeskDir"
 	world.global.NavPaths.property("FlowerCart_to_MusicGarden") = "X:FlowerCart,GiftCarts,A,U:GiftCarts,D,E,F:MusicGarden,G,MusicGarden,MusicGardenDir"
 	world.global.NavPaths.property("FlowerCart_to_DiscussionArea") = "X:FlowerCart,GiftCarts,B,C,R:GiftCarts,S,Z:DiscussionArea,DiscussionArea,DiscussionAreaDir"
 	world.global.NavPaths.property("FlowerCart_to_GameRoom") = "X:FlowerCart,GiftCarts,A,U:GiftCarts,D,N,P,M:GameRoom,GameRoom,GameRoomDir"
 	world.global.NavPaths.property("FlowerCart_to_Lobby") = "X:FlowerCart,GiftCarts,A,U:Lobby,D,Lobby,LobbyDir"
 	world.global.NavPaths.property("BalloonCart_to_GiftCarts") = "Y:BalloonCart,GiftCarts,GiftCartsDir"
 	world.global.NavPaths.property("BalloonCart_to_ResourceDesk") = "Y:BalloonCart,GiftCarts,A,U:GiftCarts,D,N,W:ResourceDesk,ResourceDesk,ResourceDeskDir"
 	world.global.NavPaths.property("BalloonCart_to_SeattleDesk") = "Y:BalloonCart,GiftCarts,A,U:GiftCarts,D,H,Q,V:SeattleDesk,SeattleDesk,SeattleDeskDir"
 	world.global.NavPaths.property("BalloonCart_to_MusicGarden") = "Y:BalloonCart,GiftCarts,A,U:GiftCarts,D,E,F:MusicGarden,G,MusicGarden,MusicGardenDir"
 	world.global.NavPaths.property("BalloonCart_to_DiscussionArea") = "Y:BalloonCart,GiftCarts,B,C,R:GiftCarts,S,Z:DiscussionArea,DiscussionArea,DiscussionAreaDir"
 	world.global.NavPaths.property("BalloonCart_to_GameRoom") = "Y:BalloonCart,GiftCarts,A,U:GiftCarts,D,N,P,M:GameRoom,GameRoom,GameRoomDir"
 	world.global.NavPaths.property("BalloonCart_to_Lobby") = "Y:BalloonCart,GiftCarts,A,U:Lobby,D,Lobby,LobbyDir"

 ' paths that merely orient the user within a zone
 	world.global.NavPaths.property("GiftCarts_to_GiftCarts") = "GiftCarts,GiftCartsDir"
 	world.global.NavPaths.property("MusicGarden_to_MusicGarden") = "MusicGarden,MusicGardenDir"
 	world.global.NavPaths.property("GameRoom_to_GameRoom") = "GameRoom,GameRoomDir"
	world.global.NavPaths.property("ResourceDesk_to_ResourceDesk") = "ResourceDesk,ResourceDeskDir"
	world.global.NavPaths.property("SeattleDesk_to_SeattleDesk") = "SeattleDesk,SeattleDeskDir"
 	world.global.NavPaths.property("DiscussionArea_to_DiscussionArea") = "DiscussionArea,DiscussionAreaDir"
 	world.global.NavPaths.property("Lobby_to_Lobby") = "Lobby,LobbyDir"

end sub

	' -- Frame swapping -- 
	' Frame swapping is a special technique used in this world to selectively reveal or hide
	' graphics on the client, depending on where the user is in the world.
	' This lessens the load on the client machine by giving it fewer elements to display at once.
	' It is also a good way to simulate a multiple-room environment within a single VWorlds room.

	' At build time we create a master list containing pointers to all objects whose graphics
	' will be swapped out at some time. For each area of the world we create a swap list, which
	' consists of index values for items the master list. When the user navigates into an area
	' for which a swap list has been defined, we unhide every item in the swap list. When the
	' user navigates out of that area, we hide every item in the swap list.

	' To hide an object we delete the object's geometry frame from the object's frame's children.
	' To unhide an item we add the object's geometry frame to the object's frame's children.

	' The AddToSwapList procedure generates the master object list and swap lists.
	' This procedure is called in DesktopWorld.htm as each object is added to the world.
	' The master object list is a room property called SwappableObjects.
	' The swap lists for individual areas are room properties named for the areas.

'////////////////////////////////////////////////////////////////////////
'//  Sub:		addToSwapList
'//  Purpose:	Add an object to the master object list if not in the list already;
'//				then add the object's position index in the master list to the specified swap lists,
'//				creating swap lists as needed.
'//  Arguments: room: ptr to the object that owns the swap list or lists;
'//				object: the object to add to the specified swap list or lists.
'//				args: string containing the name of a swap list, or an array of strings containing swap list names;
'//					if an array of names is specified, we add the object's index to each swap list in the array;
'//					if a specified swap list does not exist as a property of the room, one is created.
'//
'//		The "master list" is a property list called "SwappableObjects" which is a property of the room.
'//		Any object to be added to a swap list must first be added to the SwappableObjects list,
'//		which contains pointers to the objects themselves. The object's position in the SwappableObjects
'//		list (an integer value) is added to swap lists.
'////////////////////////////////////////////////////////////////////////
sub addToSwapList (room, object, args)

	dim n, m, swapListName, swapList

	' Create the master list of swappable objects if it does not exist, as a property of the room
	if not room.IsValidProperty("SwappableObjects") then
		room.addproperty "SwappableObjects", world.createPropertyList, , world.PS_ALL_RWA
	end if

	' Add the object to the master list if it is not there already
	n = room.SwappableObjects.find(object)
	if n < 0 then
		room.SwappableObjects.add object
		n = room.SwappableObjects.count - 1
	end if

	' Add the position index of the object in the master list to the specified swap list or
	' array of swap lists; create any swap list that does not exist, as a property of the room.
	if IsArray(args) then
		for m = 0 to ubound(args)
			swapListName = args(m) & "Things"
			if not room.isValidProperty(swapListName) then
				room.addproperty swapListName , world.CreatePropertyList, ,world.PS_ALL_RWA
			end if
			set swapList = room.property(swapListName)
			swapList.add n
		next
	else
		swapListName = args & "Things"
		if not room.isValidProperty(swapListName) then
			room.addproperty swapListName , world.CreatePropertyList, ,world.PS_ALL_RWA
		end if
		set swapList = room.property(swapListName)
		swapList.add n
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		addToLoopList
'//  Purpose:	Add an object to the master object list if not present already.
'//  Arguments: room: ptr to the room object that owns the loop list or lists.
'//				object: the object to add to the specified loop list or lists.
'//				args: string containing the name of a loop list, or an array of strings containing loop list names;
'//					if an array of list names is specified, the sub adds the object's index to each list in the array;
'//					if a specified looplist does not exist as a property of the room, one is created.
sub addToLoopList (room, object, args)
	' Loops are client-side animations that run on "toy" objects while the current user is in an area of the world.
	' These animations are turned on and off when the user enters and leaves the area of the world where the object is.
	' Loop lists contain position indexes of objects in the SwappableObjects list, the same master object 
	' list used by frame swapping. When the user enters or leaves an area in the world, the animation loops
	' for that area are started or stopped on that user's client.
	' This sub is very similar to the addToSwapList sub; it gets position indexes of objects in the SwappableObjects
	' list and adds them to a loopList.
	
	dim n, m, loopListName, loopList

	' Make the master list of swappable objects if it does not exist.
	if not room.IsValidProperty("SwappableObjects") then
		room.addproperty "SwappableObjects", world.createPropertyList, , world.PS_ALL_RWA
	end if

	' Add the object to the master list if it is not there already
	n = room.SwappableObjects.find(object)
	if n < 0 then
		room.SwappableObjects.add object
		n = room.SwappableObjects.count - 1
	end if

	' Add the object's master list subscript to the specified loop list
	' or array of loop lists, creating any lists that do not exist.
	if IsArray(args) then
		for m = 0 to ubound(args)
			loopListName = args(m)
			if not room.isValidProperty(loopListName) then
				room.addproperty loopListName , world.CreatePropertyList, ,world.PS_ALL_RWA
			end if
			set loopList = room.property(loopListName)
			loopList.add n
		next
	else
		loopListName = args
		if not room.isValidProperty(loopListName) then
			room.addproperty loopListName , world.CreatePropertyList, ,world.PS_ALL_RWA
		end if
		set loopList = room.property(loopListName)
		loopList.add n
	end if
end sub
