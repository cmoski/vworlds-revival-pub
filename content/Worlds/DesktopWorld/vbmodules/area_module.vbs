'////////////////////////////////////////////////////////////////////////
'//  File:		area_module.vbs
'//  Purpose:	Boundary crossing detection and automatic navigation.
'//		Crossing the boundaries around certain areas of the world triggers UI events
'//		for actions such as displaying web pages.
'//		To improve graphics performance, specific objects are selectively displayed or hidden
'//		as the user's avatar crosses these area boundaries.
'//		There is also an auto-navigation system that moves the avatar along predetermined
'//		paths between areas.
'////////////////////////////////////////////////////////////////////////

option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		BoundaryCollision
'//  Purpose:	Handles the OnIntersectee event for the Lobby Room object. 
'//				This event fires when an avatar crosses one of the room's boundaries.
'//				This sample world has only one Room object. Passable boundaries within that
'//				room divide it into several areas. The OnIntersectee event is used to detect
'//				avatars crossing into each area.
'//  Arguments: Collider:		the object intersecting with one of the Lobby Room's boundaries
'//				x, y, z:		the intersection point, in the Lobby Room's frame of reference
'//				BoundaryIndex:	position in the room's boundaryList of the boundary being intersected
'//				EdgeIndex:		index of the boundary edge being intersected;
'//								a boundary is a list of vertices; edge 0 is between vertices 0 and 1,
'//								edge 1 is between vertices 1 and 2, etc.
'//				Transition:		true if the intersecting object is entering the boundary, false if exiting
'//	When an object intersects (collides with) a boundary on another object, an OnIntersecter event fires on
'//	the intersecting object and an OnIntersectee event fires on the object whose boundary has been intersected.
'//	The purpose of this sub is to react to collisions with Passable boundaries, which act as trip-wires 
'//	to detect the passage of avatars between areas in the world.
'////////////////////////////////////////////////////////////////////////
sub BoundaryCollision(collider, x, y, z, BoundaryIndex, EdgeIndex, Transition)
	dim areaIndex		' position of BoundaryIndex in lobbyRm.AreaBoundaryIndex, if found
	dim oldArea, AreaShortDesc
	dim avFramePosX, avFramePosY, avFramePosZ
	dim thisFrame
	dim theRoom

	' The BoundaryIndex argument is the boundary's position index in the room's BoundaryList.
	' The AreaBoundaryIndex propertyList contains the BoundaryList position index values of
	' navigational boundaries -- those that enclose special-use areas of the sample world. 
	' The position of a BoundaryIndex value in the AreaBoundaryIndex list (not the BoundaryIndex
	' value itself) is used as an index into several related lists.

	if collider is World.User then
		areaIndex = this.AreaBoundaryIndex.find(BoundaryIndex)
		if areaIndex >= 0 then
			' The user's avatar crossed a navigational boundary, which means we are leaving one
			' special-use area and entering another. Remember which area we left and lookup which
			' area we are entering. The user.from property contains the name of the current area.
			oldArea = world.user.from
			if cbool(Transition) = TRUE then
				' we passed inward through the boundary;
				' the AreaDestination list tells us which area this boundary surrounds
				world.user.from = this.AreaDestination.Property(areaIndex)
			else
				' we passed outward through the boundary;
				' the AreaExitTo list tells us which area lies outside this boundary
				world.user.from = this.AreaExitTo.Property(areaIndex)
			end if

			' special case when we approach one of the information desks;
			' activate the desk bot by firing a boundary intersection event on the bot's boundary.
			' Since this sub needs user.container about 10 times, get a pointer to it
			set theRoom = user.container
			select case world.user.from
				case "SeattleDesk"
					theRoom.findwithin("Morris").fireEvent "Intersectee", array(world.user, world.user.position.x, world.user.position.y, world.user.position.z, 0, 0, Transition)
				case "ResourceDesk"
					theRoom.findwithin("Phebe").fireEvent "Intersectee", array(world.user, world.user.position.x, world.user.position.y, world.user.position.z, 0, 0, Transition)
			end select

			' First swap out graphics and stop animation loops for the area we departed.
			' Next swap in the graphics and start animation loops for the area we entered.
			if this.isValidProperty(world.user.from & "Things") then
				if this.isValidProperty(oldArea & "Things") then
					theRoom.SwapFramesOut theRoom.property(oldArea & "Things")
					if this.isValidProperty(oldArea & "Loops") then
						theRoom.StopAnimationLoops theRoom.property(oldArea & "Loops")
					end if
				end if
				theRoom.SwapFramesIn theRoom.property(world.user.from & "Things")
				if this.isValidProperty(world.user.from & "Loops") then
					theRoom.StartAnimationLoops theRoom.property(world.user.from & "Loops")
				end if
			end if
			
			' Tell the UI where we are
			AreaShortDesc = this.AreaStatus.Property(areaIndex)
			World.FireUIEvent World.User, "StatusReport", array(AreaShortDesc, world.user.from)
		end if
	end if
	' This method overrides the built-in OnIntersectee event handler;
	' calling invokeSuperMethod ensures that the standard VWorlds logic will also run.
	this.InvokeSuperMethod (array(collider, x, y, z, BoundaryIndex, EdgeIndex, Transition))
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		ZoomInClick
'//  Purpose:	Handles the OnClick event for the area labels that float above the world.
'//				Clicking one of the labels auto-navigates the user to that area.
'//				
'//  Arguments: hwnd: window handle of the 3d renderer control
'//             x: mouse x coordinate in the renderer
'//             y: mouse y coordinate in the renderer
'////////////////////////////////////////////////////////////////////////
sub ZoomInClick (hWnd, x, y)
	this.InvokeSuperMethod (array(hWnd, x, y))
	world.user.path_start this.areaName
end sub


' Creating a global variable LobbyRm to hold user.container and initializing it in path_start
' streamlines the operation of path_move slightly by not getting user.container on every iteration.

dim LobbyRm

'////////////////////////////////////////////////////////////////////////
'//  Sub:		path_start
'//  Purpose:	Avatar method to initiate auto-navigation of an avatar to an area of the world.
'//  Arguments: toArea: the name of the area where we want to move the avatar.
'//	 Called by:	area_module.vbs:ZoomInClick
'//				avatar_module.vbs:avatar_approachAnother
'//				sampleLinks.htm:LinkTo
'////////////////////////////////////////////////////////////////////////
sub path_start (toArea)
' Every journey has a first step...
	dim journeyName		' keyValue used to lookup the navigation path in NavPaths.
	dim i
	set LobbyRm = world.user.container
	' verify that the proposed journey exists and trigger the first step
	journeyName = this.from + "_to_" + toArea
	if CStr(world.global.NavPaths.property(journeyName)) > "" then
		this.journey = journeyName			' current journey, used by path_move
		this.stage = 0						' current step in the current journey, used by path_move
		' The path_move sub, which moves the avatar, is the event handler for the ApproachDone event.
		' To initiate the first step we explicitly fire ApproachDone here, after making sure the 
		' camera is not in overview mode.
		if this.viewType = "inworld" then
			this.FireEvent "ApproachDone"
		else
			' get out of overview first; the flyin_done sub (see camera_module.vbs) will fire
			' ApproachDone to re-start the journey
			if this is world.user then world.user.camerahelper.flyin_start
		end if
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		path_move
'//  Purpose:	The OnApproachDone event handler for the avatar object;
'//				moves the avatar one step along its current auto-navigation path.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub path_move
	' This procedure moves the avatar to the next point in a navigation path. The path is a
	' string from the NavPaths propertyMap (a property of the Room), consisting of a comma-separated
	' list of point names that reference points in the NavPoints propertyMap (also a Room property).
	' The avatar is moved to each point using the built-in Avatar.ApproachLocation method.
	' When the ApproachLocation method finishes, it fires an ApproachDone event which triggers
	' path_move again. This repeats until the last point in the path is reached. With each 
	' iteration, path_move increments the avatar's "stage" property, an integer identifying which
	' step in the path comes next.
	'
	' Each point in a path determines position, and the following point determines direction.
	' In other words, when the avatar reaches a given point it will be facing toward the next point.
	' The second to last point in the path is the final position; the very last point is used
	' for direction only. To avoid stacking up avatars in one spot at the end of a path, the final
	' position point is randomized somewhat using a scattering algorithm.
	'
	' Because the Avatar.ApproachLocation method ignores boundaries, boundary detection is
	' implemented by firing an Intersectee event. First we do boundary detection on the point
	' the avatar is currently at, then we do movement to the next point on the path. A point
	' lying on a boundary is identified by a colon in the point name; the text following
	' the colon is the name of the area surrounded by the boundary, as in "W:ResourceDesk".
	' The avatar's direction in or out of the boundary is determined by whether the area name
	' matches the avatar's "from" property. If they match, the avatar is leaving the area,
	' otherwise the avatar is entering. The inward/outward direction is passed to the Intersectee
	' event. 

	dim thePath, steps, i 
	dim nextPoint, dirPoint, currentPoint	' prop list indexes
	dim vNextPoint, vPoint					' vector objects
	dim fromArea, toArea
	dim area, areaName, areaIndex
	dim colon, boundaryArea, boundaryNumber, crossingDirection

    if this.journey <> "none"  then
		' The journey name is <fromArea>_to_<toArea>.
		' Lookup the path, a string of comma-separated names of points comprising the path for this journey.
		' Each point name is the keyvalue for a position vector in the NavPoints propertyMap.
		thePath = CStr(world.global.NavPaths.property(this.journey))
		steps = split(thePath,",")
		fromArea = mid(this.journey,1,instr(this.journey,"_to_")-1)
		toArea = mid(this.journey,instr(this.journey,"_to_")+4,255)

		' The do loop around this block of code lets us skip points that are very close together
		' (see the last if..then in the block). This prevents an annoying little jump that would
		' occur if the avatar happened to be standing too close to the first point in the path.
		do
			if this.stage >= UBound(steps) then
				' The last step is actually a point the avatar should end up facing, not a
				' position to move to. So we have arrived in "toArea" and the journey is over.
				this.from = toArea
				this.journey = "none"
				this.stage = 0

				' The Avatar.ApproachAnother method invokes auto-navigation if necessary to get
				' the user's avatar into the same area of the world as the target avatar.
				' Check if that is the case here, and if so call back the ApproachAvatar method.
				if not (this.avApproaching is Nothing) then
					this.approachAnother this.avApproaching
				end if
				world.fireuievent this, "EndedJourney", array(toArea, fromArea)
				exit do
			else
				'move to the next point in the path, using the point after that for direction
				if this.stage > 0 then
					' before moving, see if the point we are at now is on a boundary, and if so
					' fire an Intersectee event to simulate manually navigating through the boundary.
					currentPoint = steps(this.stage - 1)
					colon = instr(currentPoint,":")
					if colon > 0 then
						' the point is on a boundary; get the area name from the point name
						boundaryArea = mid(currentPoint,colon+1, 255)
						' lookup the area by name
						areaIndex = LobbyRm.AreaDestination.Find(boundaryArea)
						' lookup the boundary that surrounds this area
						boundaryNumber = LobbyRm.AreaBoundaryIndex.property(areaIndex)
						' determine if we are entering or leaving through the boundary
						if boundaryArea = world.user.from then
							crossingDirection = 0		' exiting
						else
							crossingDirection = 1		' entering
						end if
						' Fire the boundary crossing event.
						' Use 0 as the boundary edge number (second to last argument); this identifies
						' which part of a boundary has been intersected, but is ignored in this sample.
						LobbyRm.FireEvent "Intersectee", array(world.user,_ 
							world.user.position.x, world.user.position.y, world.user.position.z,_
							boundaryNumber,0,crossingDirection)
					end if
				end if
				nextPoint = steps(this.stage)
				set vNextPoint = world.global.NavPoints.property(nextPoint)
				set vPoint = world.createVector (vNextPoint.x, vNextPoint.y, vNextPoint.z)
				' If we are at the destination point, randomize it slightly before moving there
				if this.stage = UBound(steps) - 1 then world.Scatter vPoint, 0.5, 0.0, 0.5
				this.stage = this.stage + 1
				dirPoint = steps(this.stage)
				' Set the avatar position and direction using the ApproachLocation method,
				' which will fire an ApproachDone event to trigger this sub to do the next step.
				' To avoid jumpy motion skip this point if the avatar is already very close to it,
				' unless it is the final step in the path.
				if (this.stage < UBound(steps)) or _
				   (abs(world.global.NavPoints.property(nextPoint).x - this.position.x) +_
					abs(world.global.NavPoints.property(nextPoint).z - this.position.z) > 0.1) then
					this.approachlocation _
						vPoint.x, _
						vPoint.y, _
						vPoint.z, _
						world.global.NavPoints.property(dirPoint).x - vPoint.x, _
						world.global.NavPoints.property(dirPoint).y - vPoint.y, _
						world.global.NavPoints.property(dirPoint).z - vPoint.z
					exit do
				end if
			end if
		loop
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		room_OnLoadGeometry
'//  Purpose:	The OnLoadGeometry event handler for the Lobby Room object. 
'//  Arguments: roomFrame:	the frame of the room object (always Lobby Room in this sample world)
'////////////////////////////////////////////////////////////////////////
sub room_OnLoadGeometry (roomFrame)
	' The room's LoadGeometry event fires when the user's avatar enters the room, after the
	' graphics for all objects in the room have been initialized. 
	' Since this sample world has only one room, this event occurs only when the user logs in.
	' The frame swapping logic implemented in this sample world improves graphics performance
	' by hiding and unhiding various objects depending on which area of the world the user is in.

	dim vwObject, frame
	' The user enters the world with the camera in an overhead position.
	' Swap out the frames of the objects we don't want to see, then swap in the ones we do.
	this.SwapFramesOut this.GiftCartsThings
	this.SwapFramesOut this.GameRoomThings
	this.SwapFramesOut this.MusicGardenThings
	this.SwapFramesOut this.LobbyThings
	this.SwapFramesIn this.OverviewThings
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		room_SwapFramesIn
'//  Purpose:	client-side method that makes a list of objects visible on the user's client machine;
'//				gets objects from the room's SwappableObjects list, and adds each object's geometry
'//				frame to the object's frame list.
'//  Arguments: swapList: string, the name of a frame swapping list belonging to the room object
'//	 Called by:	area_module.vbs:BoundaryCollision
'//				area_module.vbs:room_OnLoadGeometry
'//				camera_module.vbs:flyout_start
'//				camera_module.vbs:flyin_done
'////////////////////////////////////////////////////////////////////////
sub room_SwapFramesIn (swapList)
	dim geomFrame, frame, n, idx, vwObject, childCount
'world.trace "*** SWAP IN ***"
	for n = 0 to swapList.count - 1
		idx = swapList.property(n)
		set vwObject = this.swappableObjects.property(idx)
		set geomFrame = vwObject.getGeometryFrame
		if not (geomFrame is Nothing) then
'world.trace vwObject.name
			set frame = vwObject.getFrame
			' If the object's frame list is empty we can just insert the geometry frame into it,
			' otherwise we must first check if the geometry frame is already in the frame list.
			childCount = frame.GetChildren.count
			if childCount = 0 then
				frame.addChild geomFrame
			elseif frame.getChildren.find(geomFrame) < 0 then
				frame.addChild geomFrame
			end if
		end if
	next
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		room_SwapFramesOut
'//  Purpose:	client-side method that makes a list of objects invisible on the user's client machine;
'//				gets objects from the room's SwappableObjects list, and removes each object's geometry
'//				frame from the object's frame list.
'//  Arguments: swapList: string, the name of a frame swapping list belonging to the room object.
'//	 Called by:	area_module.vbs:BoundaryCollision
'//				area_module.vbs:room_OnLoadGeometry
'//				camera_module.vbs:flyout_start
'//				camera_module.vbs:flyin_done
'////////////////////////////////////////////////////////////////////////
sub room_SwapFramesOut (swapList)
	' Remove swappable geometry frames
	dim geomFrame, frame, n, idx, vwObject
'world.trace "*** SWAP IN ***"
	for n = 0 to swapList.count - 1
		idx = swapList.property(n)
		set vwObject = this.swappableObjects.property(idx)
'world.trace vwObject.name
		set geomFrame = vwObject.getGeometryFrame
		set frame = vwObject.getFrame
		if frame.GetChildren.count > 0 then frame.deleteChild geomFrame
	next
end sub

'///////////////////////////////////////////////////////////////////////////////////
'//
'//		Note on animations used in this sample:
'//
'//		The script-based animation scheme used in this sample world was created 
'//		for an earlier version of VWorlds, which had no built-in animation system. 
'//		VWorlds 1.5 has its own animation system that is far more efficient and
'//		versatile, and should be used in place of the one illustrated in this sample.
'//
'///////////////////////////////////////////////////////////////////////////////////


'////////////////////////////////////////////////////////////////////////
'//  Sub:		room_StartAnimationLoops
'//  Purpose:	client-side method that starts a list of animations on the user's client machine.
'//  Arguments: loopList: string, the name of list of animations belonging to the room object.
'//  Called by:	area_module.vbs:BoundaryCollision
'////////////////////////////////////////////////////////////////////////
sub room_StartAnimationLoops (loopList)
	dim n, vwObject
	for n = 0 to loopList.count - 1
		' objects referenced by loopList are presumed to be toys
		set vwObject = this.swappableObjects.property(loopList.property(n))
		vwObject.PlayLoop
	next
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		room_StopAnimationLoops
'//  Purpose:	client-side method that stops a list of animations on the user's client machine.
'//  Arguments: loopList: string, the name of list of animations belonging to the room object.
'//  Called by:	area_module.vbs:BoundaryCollision
'////////////////////////////////////////////////////////////////////////
sub room_StopAnimationLoops (loopList)
	dim n, vwObject
	for n = 0 to loopList.count - 1
		' objects referenced by loopList are presumed to be toys
		set vwObject = this.swappableObjects.property(loopList.property(n))
		vwObject.StopLoop
	next
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		world_Scatter
'//  Purpose:	client-side method that slightly changes a vector; used to ensure that
'//				objects are not placed in exactly the same spot but near the spot.
'//  Arguments: aVector: a vector object to be changed
'//				xRadius, yRadius, zRadius: maximum change distance along each axis;
'//				these values should be positive; changes will be + or - these values.
'//  Called by:	area_module.vbs:path_move
'////////////////////////////////////////////////////////////////////////
sub world_Scatter (aVector, xRadius, yRadius, zRadius)
	' To get a random number between -radius and +radius we generate a number 
	' between 0 and 2radius, then subtract radius.
	dim x, y, z
	Randomize
	x = aVector.x + (RND * xRadius * 2) - xRadius
	y = aVector.y + (RND * yRadius * 2) - yRadius
	z = aVector.z + (RND * zRadius * 2) - zRadius
	aVector.set x, y, z
end sub

