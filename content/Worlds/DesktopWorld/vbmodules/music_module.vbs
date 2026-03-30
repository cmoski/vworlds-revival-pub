'////////////////////////////////////////////////////////////////////////
'//  File:		music_module.vbs
'//  Purpose:	interactive animation and sound methods for musical instruments
'////////////////////////////////////////////////////////////////////////
option explicit

'////////////////////////////////////////////////////////////////////////////////////
'//
'//		PLEASE NOTE
'//
'//		The animations in this module use a script-based scheme created for an earlier 
'//		version of VWorlds. VWorlds 1.5 provides its own built-in animation system 
'//		which is far more versatile and efficient. 
'//
'////////////////////////////////////////////////////////////////////////////////////

const MAX_ANIMATIONS = 50
' There must be at least twice as many array slots as the number of animated objects,
' because each object can have a click animation and an idle loop animation.

' VBScript carries on the VB tradition of not being able to use declared constants
' as array dimensions, so we must hardcode the value of MAX_ANIMATIONS in each array:
dim animTimers(50)		' animation and loop timer objects
dim animStatus(50)		' status of each timer (STOPPED or PLAYING)
dim animCurrentStep(50)	' step counter
dim animCurrentRep(50)	' repetition counter (animations only; loops repeat until stopped)

const STOPPED = 0		' values for animStatus
const PLAYING = 1

' At build time DesktopWorld.htm calls LoadAnimation or LoadLoop (in music_garden.vbs),
' which reserves an array slot for each animation or loop by assigning
' a consecutive number to the object's animNum or loopNum.
' At runtime these numbers are used as array subscripts.
' AnimNum or loopNum = 0 indicates the object has no animation or loop,
' so element 0 in each array is not used.

'////////////////////////////////////////////////////////////////////////
'//  Sub:		room_initAnimations
'//  Purpose:	initialize animation data arrays
'//  Arguments: none
'//	 Called by: avatar_onConnect
'////////////////////////////////////////////////////////////////////////
sub room_initAnimations
	dim n
	for n = 0 to MAX_ANIMATIONS
		set animTimers(n) = Nothing
		animStatus(n) = STOPPED
		animCurrentStep(n) = 0
		animCurrentRep(n) = 0
	next
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_LoadAnimation
'//  Purpose:	This is a method version of the LoadAnimation procedure in music_garden.vbs;
'//				implementing it as a method allows loading animations from the command window
'//				for development purposes.
'//  Arguments: duration: length of the entire animation, in milliseconds
'//				repetitions: number of times the PlayAnimation method should repeat the animation
'//				stepCoords: vector values for position, direction and scale for all frames
'//					in the animation; for each frame there are three triplets (9 values).
'//	 Called by: Not called in the app; to be called from the command window for dev/testing
'////////////////////////////////////////////////////////////////////////
sub toy_LoadAnimation (duration, repetitions, stepCoords)
' This is a method version of the LoadAnimation function in music_garden.vbs;
' making it a method allows you load animations from the command window for development.

'	set the duration and load the stepValues proplist
	dim n
	this.animDuration = duration
	this.animRepetitions = repetitions
	if isObject(this.animStepValues) then set this.animStepValues = Nothing
	set this.animStepValues = world.CreatePropertyList
	for n = 0 to UBound(stepCoords)
		this.animStepValues.add stepCoords(n)
	next
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_playAnimation
'//  Purpose:	Start an animation by creating a timer to iterate through the animation steps
'//  Arguments: none
'//  Called by:	toy_clientPlay
'////////////////////////////////////////////////////////////////////////
sub toy_playAnimation
	dim interval
	this.StopLoop
	if animStatus(this.animNum) = PLAYING then
		world.trace this.name & " animation " & this.animNum & " already running"
		exit sub
	end if
	animCurrentRep(this.animNum) = 1
	animCurrentStep(this.animNum) = 0
	animStatus(this.animNum) = PLAYING
	' Compute the timer interval, which is the duration divided by the number of steps.
	' Each step of the animation uses 9 values from the stepValues list:
	' three triplets representing position, direction and scale.
	interval = this.animDuration / (this.animStepValues.count / 9)
	set animTimers(this.animNum) = world.createTimer (interval, this, "iterateAnimation")
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_IterateAnimation
'//  Purpose:	Perform one frame of an animation by changing an object's position, direction and scale
'//  Arguments: timer: a timer object initialized by the PlayAnimation method
'//  Called by:	toy_playAnimation
'////////////////////////////////////////////////////////////////////////
sub toy_IterateAnimation (timer)
	' Grab a set of 9 values from animStepValues and move the object's graphics
	dim stepIndex
	' animation coordinates, which are relative to the object's coordinates
	dim xPos, yPos, zPos, xDir, yDir, zDir, xScale, yScale, zScale
	dim toyFrame, containerFrame
	set containerFrame = this.container.getFrame
	set toyFrame = this.getFrame
	if animCurrentRep(this.animNum) <= this.animRepetitions then
		' Get position, direction and scale vector values from the stepValues list:
		stepIndex = animCurrentStep(this.animNum) * 9
		if stepIndex >= 0 and stepIndex < this.animStepValues.count then
			xPos = this.position.x + this.animStepValues.property(stepIndex)
			yPos = this.position.y + this.animStepValues.property(stepIndex + 1)
			zPos = this.position.z + this.animStepValues.property(stepIndex + 2)
			xDir = this.direction.x + this.animStepValues.property(stepIndex + 3)
			yDir = this.direction.y + this.animStepValues.property(stepIndex + 4)
			zDir = this.direction.z + this.animStepValues.property(stepIndex + 5)
			xScale = this.Scale.x * this.animStepValues.property(stepIndex + 6)
			yScale = this.Scale.y * this.animStepValues.property(stepIndex + 7)
			zScale = this.Scale.z * this.animStepValues.property(stepIndex + 8)
			animCurrentStep(this.animNum) = animCurrentStep(this.animNum) + 1
			toyFrame.setposition containerFrame, xPos, yPos, zPos
			toyFrame.setorientation containerFrame, xDir, yDir, zDir, 0, 1, 0
			toyFrame.setScale containerFrame, xScale, yScale, zScale
			exit sub
		elseif this.area = world.user.from then
			animCurrentRep(this.animNum) = animCurrentRep(this.animNum) + 1
			animCurrentStep(this.animNum) = 0
			exit sub
		end if
	end if
	' if we didn't exit the sub, we are done animating
	animCurrentRep(this.animNum) = 0
	world.DestroyTimer Timer
	animStatus(this.animNum) = STOPPED
	this.PlayLoop
end sub

'////////////////////////////////////////////////////////////////////////
'//
'//		Loop animations provide idle movement for objects that are not playing other animations
'//
'////////////////////////////////////////////////////////////////////////

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_LoadLoop
'//  Purpose:	This is a method version of the LoadLoop procedure in music_garden.vbs;
'//				implementing it as a method allows loading animations from the command window
'//				for development purposes.
'//  Arguments: duration: length of the entire animation, in milliseconds
'//				stepCoords: vector values for position, direction and scale for all frames
'//					in the animation; for each frame there are three triplets (9 values).
'//	 Loops repeat infinitely rather than a specified number of times.
'//
'//  Called by:	DesktopWorld.htm:CreateMusicDrums
'//				DesktopWorld.htm:CreateMusicHorns
'//				DesktopWorld.htm:CreateMusicBlocks
'////////////////////////////////////////////////////////////////////////
sub toy_LoadLoop (duration, stepCoords)
'	set the duration and load the stepValues proplist
	dim n
	this.loopDuration = duration
	if isObject(this.loopStepValues) then set this.loopStepValues = Nothing
	set this.loopStepValues = world.CreatePropertyList
	for n = 0 to UBound(stepCoords)
		this.loopStepValues.add stepCoords(n)
	next
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_playLoop
'//  Purpose:	Start a loop animation by creating a timer to iterate through the frames
'//  Arguments: none
'//  Called by:	toy_IterateAnimation
'//				area_module.vbs:room_StartAnimationLoops
'////////////////////////////////////////////////////////////////////////
sub toy_playLoop
	dim interval
	if this.loopNum = 0 then exit sub	 ' this obj has no loop
	' check if loop is already playing
	if animStatus(this.loopNum) = PLAYING then exit sub
	if not IsObject(this.loopStepValues) then exit sub
	if this.loopStepValues.count = 0 then exit sub
	animStatus(this.loopNum) = PLAYING
	animCurrentStep(this.loopNum) = 0
	' Compute the timer interval, which is the duration divided by the number of steps.
	' Each step uses 9 values from the stepValues list.
	interval = this.loopDuration / (this.loopStepValues.count / 9)
	set animTimers(this.loopNum) = world.createTimer (interval, this, "iterateLoop")
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_IterateLoop
'//  Purpose:	Perform one frame of a loop animation by changing position, direction and scale
'//  Arguments: timer: a timer object created by toy_playLoop
'////////////////////////////////////////////////////////////////////////
sub toy_IterateLoop (timer)
	' Grab a batch of 9 values from animStepValues and move the object's graphics
	dim stepIndex
	' animation coordinates, which are relative to the object's coordinates
	dim xPos, yPos, zPos, xDir, yDir, zDir, xScale, yScale, zScale
	dim toyFrame, containerFrame
	set containerFrame = this.container.getFrame
	stepIndex = animCurrentStep(this.loopNum) * 9
	if stepIndex >= 0 and stepIndex < this.loopStepValues.count then
		xPos = this.position.x + this.loopStepValues.property(stepIndex)
		yPos = this.position.y + this.loopStepValues.property(stepIndex + 1)
		zPos = this.position.z + this.loopStepValues.property(stepIndex + 2)
		xDir = this.direction.x + this.loopStepValues.property(stepIndex + 3)
		yDir = this.direction.y + this.loopStepValues.property(stepIndex + 4)
		zDir = this.direction.z + this.loopStepValues.property(stepIndex + 5)
		xScale = this.Scale.x * this.loopStepValues.property(stepIndex + 6)
		yScale = this.Scale.y * this.loopStepValues.property(stepIndex + 7)
		zScale = this.Scale.z * this.loopStepValues.property(stepIndex + 8)
		animCurrentStep(this.loopNum) = animCurrentStep(this.loopNum) + 1
		set toyFrame = this.getFrame
		toyFrame.setposition containerFrame, xPos, yPos, zPos
		toyFrame.setorientation containerFrame, xDir, yDir, zDir, 0, 1, 0
		toyFrame.setscale containerFrame, xScale, yScale, zScale
	else
		animCurrentStep(this.loopNum) = 0
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_StopLoop
'//  Purpose:	Stop a loop animation
'//  Arguments: timer: a timer object created by toy_playLoop
'//  Called by:	toy_playAnimation
'//				area_module.vbs:room_StopAnimationLoops
'////////////////////////////////////////////////////////////////////////
sub toy_StopLoop
	if animStatus(this.loopNum) = PLAYING then 
		world.DestroyTimer animTimers(this.loopNum)
		animStatus(this.loopNum) = STOPPED
	end if
end sub

' ============ end of 1.1 animation code ================

'////////////////////////////////////////////////////////////////////////
' Interaction of client/server methods:
' One way for a client to make one or more other clients do something is by changing some object
' property. The changed property is sent to the server, which broadcasts it to all clients, firing
' a client-side OnPropertyChanged method on each client, which contains the desired code.
' A different technique, used below, is to have a user action run a client-side method on the
' local machine, which calls a server-side method, which calls a second client-side method 
' containing the desired code. Because the second method was called by the server, it runs 
' on all clients. 
'
' In this sample, when the user clicks on a toy object the object's client-side OnClick
' method calls a server-side Play method, which calls a client-side Play method, which decides
' whether to play the animation based on whether the user is in the Music Garden or not.
'////////////////////////////////////////////////////////////////////////

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_onClick(hwnd,x,y)
'//  Purpose:	Handles the OnClick event when a user clicks on a toy object in the world;
'//				calls the toy object's server-side serverPlay method.
'//  Arguments: hwnd: window handle of the 3d renderer control
'//             x: mouse x coordinate in the renderer
'//             y: mouse y coordinate in the renderer
'////////////////////////////////////////////////////////////////////////
sub toy_onClick (hwnd,x,y)
	this.serverPlay
	this.InvokeSuperMethod(array(hwnd,x,y))
	world.fireUIEvent world.user, "ClickToy", this
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_serverPlay()
'//  Purpose:	calls the toy object's client-side clientPlay method on all connected clients.
'//  Arguments: none
'//  Called by:	toy_onClick
'////////////////////////////////////////////////////////////////////////
sub toy_serverPlay
	this.clientPlay
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_clientPlay()
'//  Purpose:	starts sounds and animations on the toy object on the client
'//  Arguments: none
'//  Called by:	toy_serverPlay
'////////////////////////////////////////////////////////////////////////
sub toy_clientPlay
	if this.area = world.user.from then
		this.PlaySound
		this.PlayAnimation
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		toy_PlaySound()
'//  Purpose:	plays a sound by setting the object's clientSound property equal to a sound file URL.
'//  Arguments: none
'//  Called by:	toy_clientPlay
'////////////////////////////////////////////////////////////////////////
sub toy_PlaySound
	dim sound, randval
	if this.soundNum > 0 then
		set sound = world.global.garden_sounds.property(this.soundNum-1)
		sound.Set2DData 0, randval, (45000-randval)/2
		this.clientSound = sound
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		instrument_onClick(hwnd,x,y)
'//  Purpose:	Handles the onClick event on the instrument object 
'//				by calling the instrument object's server-side serverPlay method.
'//  Arguments: hwnd: window handle of the 3d renderer control
'//             x: mouse x coordinate in the renderer
'//             y: mouse y coordinate in the renderer
'////////////////////////////////////////////////////////////////////////
sub instrument_onClick (hwnd,x,y)
	this.serverPlay
	this.InvokeSuperMethod(array(hwnd,x,y))
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		instrument_serverPlay()
'//  Purpose:	Plays all of the instrument's toys simultaneously by calling the
'//				server-side serverPlay method on each toy object contained in the instrument.
'//  Arguments: none
'//  Called by:	instrument_onClick
'////////////////////////////////////////////////////////////////////////
sub instrument_serverPlay
	dim toy
	for each toy in this.toys
		if not (toy is Nothing) then toy.serverPlay
	next
end sub

