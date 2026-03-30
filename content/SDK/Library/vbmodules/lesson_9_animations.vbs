option explicit

sub cube_onLButtonUp (hWnd,x,y)
	' this method animates the cube object on a simple path when clicked.
	' note that timescale value passed in startanimation is in keyframes per millisecond:
	' this animation runs at .001 keyframes per millisecond, equivalent to 1 keyframe per second.
	
	dim time
	
	'the getanimationsystemtime methods returns the time in ticks since the world was created.
	
	time = world.getanimationsystemtime()
	world.trace "cube animation started at time "& time & " ticks."
	this.startAnimation "position", this.simpleAnimMap, "animationDone", A_SPLINE, .001, 0, 8, 0
end sub

sub cube_animationDone (bAnimationDone, timeWhenDone)
	' this method is the callback method for the cube animation.
	' when the animation is done this method is called.
	' the two arguments passed to the method are:
	' the time that the callback was called (timeWhenDone), and
	' an integer (bAnimationDone) used as a boolean indicating whether or not
	' the animation was stopped before it completed on its own.
	
	if (bAnimationDone) then
		world.trace "Cube animation completed successfully at time " & cstr(timeWhenDone) & " ticks."
	else
		world.trace "Cube animation was interrupted at time " & cstr(timeWhenDone) & " ticks."
	end if
end sub

sub directionalLight_onLButtonUp (hWnd,x,y)
	'this method animates the lightColor property of the DirectionalLight object
	'notice that the timescale for this animation is one keyframe per millisecond,
	'because the points in the path are spaced very widely, i.e. key values in thousands.
	
	this.startAnimation "lightColor", this.lightAnimMap, , A_SPLINE+A_LOCAL, 1, 0, 9000
	world.trace "directionalLight animation started at time " & world.getanimationsystemtime() & " ticks."
end sub

dim isTreeGrown 'this global variable keeps the state of the animation of the tree object
                'between multiple executions of the method below.

sub treeAnim_onLButtonUp (hWnd,x,y)
	if isTreeGrown then
		' reset the tree by setting the tree's animation index to zero.
		' if an animation has finished, this index set still works only if its a file animation
		this.setAnimationIndex "file",0
		isTreeGrown = false
		world.trace "tree file animation index set to 0 at time " & world.getanimationsystemtime() & " ticks."
	else
		' grow the tree by running the tree's file animation
		this.startAnimation "file",,,A_SPLINE+A_LOCAL,0.01,0,80
		isTreeGrown = true
		world.trace "tree file animation started at time " & world.getanimationsystemtime() & " ticks."
	end if
end sub


dim isFishSwimming		'This global variable keeps track of 
						'the state of the fish for the objects that
						'control its animation. 
						
sub fishSwitch_onLButtonUp (hWnd,x,y)
	' this fish_switch object method starts or stops the fish animations
	' depending on the state of the isFishSwimming variable. Since this variable
	' is uninitialized when this subroutine executes for the first time, it will fail
	' this comparison and go to the else block.
	
    if isFishSwimming = true then
		' the subroutine 'stopFish' called below stops the fish bodypart animations 
		' on each body part. It is not necessary to make this subroutine a method of 
		' a v-worlds object to call it from inside an object method if 
		' it is in the same file as the subroutine of the method. 
		' In this case, 'stopFish' and 'startFish' are merely 
		' subroutines in the same file, and not visible to the rest of v-worlds.
		' These kinds of subroutines are often called 'helper' subs, since only one
		' method depends on them.
		
		stopFish
	else
		' the helper sub starts the fish bodypart animations
		startFish
	end if
end sub

sub chaseSwitch_onLButtonUp (hWnd,x,y)
	' this chase_switch object method starts or stops animations on the fish body parts 
	' and also the user's avatar, using different maps for a cinematic effect.
	user.container.chasePosMap.property("0") = world.createVector (user.position.x,user.position.y,user.position.z)
	user.container.chaseDirMap.property("0") = world.createVector (user.direction.x,user.direction.y,user.direction.z)
	startFish
	user.startAnimation "position", user.container.chasePosMap, , A_SPLINE+A_LOCAL, .001
	user.startAnimation "direction", user.container.chaseDirMap, , A_LINEAR+A_LOCAL, .001
	world.trace "user chase animations started at time " & world.getanimationsystemtime() & " ticks."
end sub


sub startFish()
	' this helper sub is not a method on an object, but is called by several methods.
	' the sub starts the position and direction animations for the fish body part objects.
	dim posAnimFlags, dirAnimFlags
	dim speedval, spreadVal, startindexval
	
	speedval = 0.5		' speed (in keyframes per millisecond) that the animation will run
	spreadVal = 80		' distance (in keyframes) each bodypart is from the next, for proper spacing
	
	'animations with the flag A_LOCAL run with much better timing since they do not depend on data
	'from the server to start them.
	
	posAnimFlags = world.A_LOOP + world.A_SPLINE + world.A_LOCAL
	dirAnimFlags = world.A_LOOP + world.A_LINEAR + world.A_LOCAL
	
	world.fishHead.startanimation "Position" , this.container.fishPosMap , , posAnimFlags, speedval , , ,  spreadVal*8
	world.fishHead.startanimation "Direction" , this.container.fishDirMap , , dirAnimFlags, speedval , , ,  spreadVal*8
	world.fishBody1.startanimation "Position" , this.container.fishPosMap , , posAnimFlags, speedval , , ,  spreadVal*7
	world.fishBody1.startanimation "Direction" , this.container.fishDirMap , , dirAnimFlags, speedval , , ,  spreadVal*7
	world.fishBody2.startanimation "Position" , this.container.fishPosMap , , posAnimFlags, speedval , , ,  spreadVal*6
	world.fishBody2.startanimation "Direction" , this.container.fishDirMap , , dirAnimFlags, speedval , , ,  spreadVal*6
	world.fishBody3.startanimation "Position" , this.container.fishPosMap , , posAnimFlags, speedval , , ,  spreadVal*5
	world.fishBody3.startanimation "Direction" , this.container.fishDirMap , , dirAnimFlags, speedval , , ,  spreadVal*5
	world.fishTail1.startanimation "Position" , this.container.fishPosMap , , posAnimFlags, speedval , , ,  spreadVal*4
	world.fishTail1.startanimation "Direction" , this.container.fishDirMap , , dirAnimFlags, speedval , , ,  spreadVal*4
	world.fishTail2.startanimation "Position" , this.container.fishPosMap , , posAnimFlags, speedval , , ,  spreadVal*3
	world.fishTail2.startanimation "Direction" , this.container.fishDirMap , , dirAnimFlags, speedval , , , spreadVal*3
	world.fishTail3.startanimation "Position" , this.container.fishPosMap , , posAnimFlags, speedval , , ,  spreadVal*2
	world.fishTail3.startanimation "Direction" , this.container.fishDirMap , , dirAnimFlags, speedval , , ,  spreadVal*2
	world.fishTail4.startanimation "Position" , this.container.fishPosMap , , posAnimFlags, speedval , , ,  spreadVal
	world.fishTail4.startanimation "Direction" , this.container.fishDirMap , , dirAnimFlags, speedval , , ,  spreadVal
	
	'sets a global so that other subs used in this file know that this animation has started.
	isFishSwimming = true
	world.trace "fish bodypart animations started at time " & world.getanimationsystemtime() & " ticks."
	
end sub

sub stopFish ()
	' Turn off position and direction animations for all parts of the multipart fish
	' the flag A_LOCAL turns the animations off on this machine only, and has better timing since it
	' does not depend on data going to and returning from the server to stop the animations.
	world.fishHead.stopanimation "position",A_LOCAL
	world.fishHead.stopanimation "direction",A_LOCAL
	world.fishBody1.stopanimation "position",A_LOCAL
	world.fishBody1.stopanimation "direction",A_LOCAL
	world.fishBody2.stopanimation "position",A_LOCAL
	world.fishBody2.stopanimation "direction",A_LOCAL
	world.fishBody3.stopanimation "position",A_LOCAL
	world.fishBody3.stopanimation "direction",A_LOCAL
	world.fishTail1.stopanimation "position",A_LOCAL
	world.fishTail1.stopanimation "direction",A_LOCAL
	world.fishTail2.stopanimation "position",A_LOCAL
	world.fishTail2.stopanimation "direction",A_LOCAL
	world.fishTail3.stopanimation "position",A_LOCAL
	world.fishTail3.stopanimation "direction",A_LOCAL
	world.fishTail4.stopanimation "position",A_LOCAL
	world.fishTail4.stopanimation "direction",A_LOCAL
	isFishSwimming = false
	world.trace "fish bodypart animations stopped at time " & world.getanimationsystemtime() & " ticks."
end sub




dim pathFrame   'pathFrame is a global that will store a graphical frame to be added and
                'deleted from the renderer's scene by the sub below.

sub pathSwitch_onLButtonUp (hWnd,x,y)
	' Displays or hides the position path of the fish body parts.
	' Create a frame and a mesh that traces the path.

	'If pathFrame has not been initialized yet we need to draw the mesh for the first time
	' And store it there.
	
	if not isObject(pathFrame) then 
		drawPath
	end if
	
	' After the mesh exists and is stored in the variable 'pathframe' 
	' it can be safely added and removed from the room quickly.

	if this.container.getFrame.getFrameByName("pathFrame") is Nothing then
		this.container.getFrame.addChild pathFrame
		world.trace "show fish animation path"	
	else
		this.container.getFrame.deleteChild pathFrame
		world.trace "hide fish animation path"	
	end if
end sub


sub drawPath
	' this subroutine creates a series of triangular meshes 
	' that represent the points in the fish body part animation path for 'position'. 
	
	dim pmap, n, index, prevIndex
	set pathFrame = world.createFrame
	set pmap = user.container.fishPosMap
	pathFrame.setName "pathFrame"
	pathFrame.createMesh
	pathFrame.SetMeshQuality 0, 3
  
	prevIndex = "0"
	
	' The property map we are searching is based on numerical keys ranging from 0 to 13754.
	' To draw the meshes correctly we need to find the path map entries in order; 
	' to do this we check every integer value from 0 to 13754 to find a key/value.
	
	for n = 0 to 13754
		index = cstr(n)
		if pmap.isvalid(index) then
			' we need to draw two mesh faces at a time, since a face is
			' only visible from one side. The side or 'normal' that the face appears on
			' is automatically produced by how the mesh vertices are drawn.
			' by drawing one clockwise and one counterclockwise we get opposite sides.
			' the arrays passed here are the vertices of the face.
			pathFrame.createMeshFace 0, array(_
						pmap.property(prevIndex).x, _
						pmap.property(prevIndex).y-0.1, _
						pmap.property(prevIndex).z, _
						pmap.property(index).x, _
						pmap.property(index).y, _
						pmap.property(index).z, _
						pmap.property(prevIndex).x, _
						pmap.property(prevIndex).y+0.1, _
						pmap.property(prevIndex).z)
			pathFrame.createMeshFace 0, array(_
						pmap.property(prevIndex).x, _
						pmap.property(prevIndex).y+0.1, _
						pmap.property(prevIndex).z, _
						pmap.property(index).x, _
						pmap.property(index).y, _
						pmap.property(index).z, _
						pmap.property(prevIndex).x, _
						pmap.property(prevIndex).y-0.1, _
						pmap.property(prevIndex).z)
			prevIndex = index
		end if
	next
end sub


sub install (module)  'unused for the tutorial

end sub