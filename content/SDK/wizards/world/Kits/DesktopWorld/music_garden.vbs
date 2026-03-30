'////////////////////////////////////////////////////////////////////////
'//  File:		music_garden.vbs
'//  Purpose:	interactive animation and sound methods for instrument and toy objects;
'//				this is an include file for DesktopWorld.htm, used only to build the world.
'////////////////////////////////////////////////////////////////////////

option explicit

' ============= start 1.1 animation code ===================
dim lastAnimNum

sub loadAnimation (vwObject, duration, repetitions, stepCoords)
'world.trace "toy_LoadAnimation"
	' not a method; called by DesktopWorld.htm during world build.
	dim n
	lastAnimNum = lastAnimNum + 1
	vwObject.animNum = lastAnimNum
	vwObject.animDuration = duration
	vwObject.animRepetitions = repetitions
	if isObject(vwObject.animStepValues) then set vwObject.animStepValues = Nothing
	set vwObject.animStepValues = world.CreatePropertyList
	for n = 0 to UBound(stepCoords)
		vwObject.animStepValues.add stepCoords(n)
	next
end sub

sub loadLoop (vwObject, duration, stepCoords)
'world.trace "toy_LoadLoop"
'	set the duration and load the stepValues proplist
	dim n
	lastAnimNum = lastAnimNum + 1
	vwObject.loopNum = lastAnimNum
	vwObject.loopDuration = duration
	if isObject(vwObject.loopStepValues) then set vwObject.loopStepValues = Nothing
	set vwObject.loopStepValues = world.CreatePropertyList
	for n = 0 to UBound(stepCoords)
		vwObject.loopStepValues.add stepCoords(n)
	next
end sub

' ============== end 1.1 animation code ===============

'////////////////////////////////////////////////////////////////////////
'//  Sub:		make_music_garden()
'//  Purpose:	Create sound object instances,
'//				create toy and instrument exemplars and add their properties and methods
'////////////////////////////////////////////////////////////////////////

sub make_music_garden
	const soundPath = "worlds/DesktopWorld/sounds/"
	dim artifactexemplar
	set artifactexemplar = world.Exemplar("Artifact")

	dim soundlist
	set soundlist = world.createpropertylist()
	world.global.addproperty "garden_sounds" , soundlist , , world.PS_ALL_RWA
	'Garden_Sounds 1
	world.global.garden_sounds.add world.CreateSound (soundPath & "mystic2.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "chime1.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "chime2.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "chime3.wav", false, false)
	'Garden_Sounds 5
	world.global.garden_sounds.add world.CreateSound (soundPath & "chime4.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "hum.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "photon.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "volvohorn02.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "didj1.wav", false, false)
	'Garden_Sounds 10
	world.global.garden_sounds.add world.CreateSound (soundPath & "didj2.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "didj3.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "Drum01.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "Drum02.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "Drum03.wav", false, false)
	'Garden_Sounds 15
	world.global.garden_sounds.add world.CreateSound (soundPath & "Drum04.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "Drum05.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "Drum06.wav", false, false)	
	world.global.garden_sounds.add world.CreateSound (soundPath & "Shaker01.wav", false, false)	
	world.global.garden_sounds.add world.CreateSound (soundPath & "harp1.wav", false, false)	
	'Garden_Sounds 20
	world.global.garden_sounds.add world.CreateSound (soundPath & "bells1.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "bells2.wav", false, false)
	world.global.garden_sounds.add world.CreateSound (soundPath & "bells1.wav", false, false)	
	world.global.garden_sounds.add world.CreateSound (soundPath & "harp1.wav", false, false)	
	
	' initialize animation arrays
	LobbyRm.CreateAndAddMethod World.METHOD_CLIENT, music_module, "room_initAnimations", "initAnimations", ,_
		world.PS_ALL_E + world.PS_ALL_RWA

	' A toy is an artifact that can play a sound and perform an animation.
	dim toy
	set toy = world.CreateExemplar("toy", artifactexemplar)
	toy.addproperty "soundNum" , 1 , , world.PS_ALL_RWA
	toy.addProperty "animNum", 0, , world.PS_ALL_RWA
	toy.addProperty "loopNum", 0, , world.PS_ALL_RWA
	' animStepValues is a proplist; each step of the animation is a series of 9 stepValues:
	'	posX, posY, posZ, dirX, dirY, dirZ, scaleX, scaleY, scaleZ
	' i.e. if the animation has 4 steps then there will be 36 stepValues
	' pos and dir are relative to the object's own frame
	' scale is relative to the object's own scale
	toy.addProperty "animStepValues", null, , world.PS_ALL_RWA
	' length of time for one repetition, in milliseconds
	toy.addProperty "animDuration", 2000, , world.PS_ALL_RWA
	' number of times to repeat the animation
	toy.addProperty "animRepetitions", 1, , world.PS_ALL_RWA
	' the current repetition of the current animation
'	toy.addproperty "animCurrentRep", 0, World.PSBIT_NOTREMOTED, world.PS_ALL_RWA
	' the current step in the current repetition
'	toy.addproperty "animCurrentStep", -1, World.PSBIT_NOTREMOTED, world.PS_ALL_RWA

	' loop animation; runs continuously when the main animation is not running,
	' otherwise pretty much the same.
	toy.addProperty "loopStepValues", null, , world.PS_ALL_RWA
	toy.addProperty "loopDuration", 2000, , world.PS_ALL_RWA
'	toy.addproperty "loopCurrentStep", -1, World.PSBIT_NOTREMOTED, world.PS_ALL_RWA
'	toy.addproperty "loopTimer", null, World.PSBIT_NOTREMOTED, world.PS_ALL_RWA
'	toy.addproperty "loopIsRunning", false, World.PSBIT_NOTREMOTED, world.PS_ALL_RWA

	' physical area where the toy is; its behavior will be seen and heard by users in that area
	toy.addproperty "area", "", , world.PS_ALL_RWA

	toy.createandaddmethod World.METHOD_CLIENT, music_module, "toy_onClick", "OnLButtonUp",  , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_SERVER, music_module, "toy_serverPlay", "serverPlay", , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_CLIENT, music_module, "toy_clientPlay", "clientPlay", , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_CLIENT, music_module, "toy_PlaySound", "PlaySound", , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_CLIENT, music_module, "toy_LoadAnimation", "LoadAnimation", , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_CLIENT, music_module, "toy_PlayAnimation", "PlayAnimation", , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_CLIENT, music_module, "toy_IterateAnimation", "IterateAnimation", , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_CLIENT, music_module, "toy_LoadLoop", "LoadLoop", , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_CLIENT, music_module, "toy_PlayLoop", "PlayLoop", , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_CLIENT, music_module, "toy_IterateLoop", "IterateLoop", , world.PS_ALL_E + world.PS_ALL_RWA
	toy.createAndAddMethod World.METHOD_CLIENT, music_module, "toy_StopLoop", "StopLoop", , world.PS_ALL_E + world.PS_ALL_RWA

	' An instrument is an artifact that controls one or more toys
	dim instrument
	set instrument = world.CreateExemplar("instrument", artifactexemplar)
	instrument.isopen = true
	instrument.iscontentsvisible = true
	instrument.addproperty "toys", null, , world.PS_ALL_RWA
	instrument.createandaddmethod World.METHOD_CLIENT, music_module, "instrument_onClick", "OnLButtonUp", , world.PS_ALL_E + world.PS_ALL_RWA
	instrument.createandaddmethod World.METHOD_SERVER, music_module, "instrument_serverPlay", "serverPlay", , world.PS_ALL_E + world.PS_ALL_RWA

end sub

