option explicit

' global vars to maintain values between interpolation steps

dim sdx,sdy,sdz								'starting direction
dim spx,spy,spz								'starting position
dim edx,edy,edz								'ending direction
dim epx,epy,epz								'ending position
dim sux,suy,suz								'starting orientation
dim wdx,wdy,wdz,wpx,wpy,wpz,wux,wuy,wuz		'default overview coordinates
dim cdx,cdy,cdz,cpx,cpy,cpz,cux,cuy,cuz		'default camera coordinates

' values for computing an elliptical camera path
dim zradius,xradius
dim theta, starttheta, endtheta

' graphics frames; all frames are relative to the room frame
dim roomframe
dim helperframe
dim avframe
dim icamframe
dim overviewframe

' iteration control values
dim timer_count
timer_count = 0
dim pan_count
pan_count = 0
dim pan_time
dim lcameratime

' there is no PI constant in VBScript
dim PI
PI = 3.1416

'////////////////////////////////////////////////////////////////////////
'//  Sub:		flyout_interpolate
'//  Purpose:	Perform one interpolation step between the user's camera position and the overhead view point
'//  Arguments: the_timer: timer object allowing repetition of the interpolation steps
'////////////////////////////////////////////////////////////////////////
sub flyout_interpolate (the_timer)
	timer_count = timer_count + 1
	if timer_count > lcameraTime then
		world.destroytimer(the_timer)
		timer_count = 0
		this.flyout_done
	else
	    'helperframe's position moves towards overview point
		'from spx go closer to zero, etc.
	    helperframe.setposition overviewframe, _
			spx - ((spx*timer_count)/lcameraTime),_
			spy - ((spy*timer_count)/lcameraTime),_
			spz - ((spz*timer_count)/lcameraTime)
		'helperframe's orientation relative to the room sdx goes towards wdx
		helperframe.setorientation roomframe, _
		    (wdx*timer_count)/lcameraTime + (sdx-((sdx*timer_count)/lcameraTime)) ,_
			(wdy*timer_count)/lcameraTime + (sdy-((sdy*timer_count)/lcameraTime)) ,_
			(wdz*timer_count)/lcameraTime + (sdz-((sdz*timer_count)/lcameraTime)) ,_
			0,1,0
		
		'helperframe.setorientation helperframe, 0,0,1,0,0,1
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		flyin_interpolate
'//  Purpose:	Perform one interpolation step between the overhead view point and the user's camera position
'//  Arguments: the_timer: timer object allowing repetition of the interpolation steps
'//  Called by:	flyout_start
'////////////////////////////////////////////////////////////////////////
sub flyin_interpolate (the_timer)
	timer_count = timer_count + 1
	if timer_count > lcameraTime then
		world.destroytimer(the_timer)
		timer_count = 0
		this.flyin_done
	else
	    'icamframes position moves towards default in cpx/cpy etc.
		icamframe.setposition avframe, _
		    (cpx*timer_count)/lcameraTime + (spx-((spx*timer_count)/lcameraTime)) ,_
			(cpy*timer_count)/lcameraTime + (spy-((spy*timer_count)/lcameraTime)) ,_
			(cpz*timer_count)/lcameraTime + (spz-((spz*timer_count)/lcameraTime))
			
		icamframe.setorientation avframe, _
		    (cdx*timer_count)/lcameraTime + (sdx-((sdx*timer_count)/lcameraTime)) ,_
			(cdy*timer_count)/lcameraTime + (sdy-((sdy*timer_count)/lcameraTime)) ,_
			(cdz*timer_count)/lcameraTime + (sdz-((sdz*timer_count)/lcameraTime)) ,_
			0,1,0
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		flyout_start
'//  Purpose:	Begin interpolation from the user's camera position to the overhead view point
'//  Arguments: none
'//  Called by:	chatbox.htm:toggleOverview
'//				sampleLinks.htm:do_camera_overview
'////////////////////////////////////////////////////////////////////////
sub flyout_start
	world.user.viewType = "overview"

	lcameratime = world.global.cameratime
	
	set helperframe = this.getframe
	set avframe = world.user.getframe
	set icamframe = world.user.icam.getframe
	set overviewframe = world.overview_point.getframe
	set roomframe = this.container.getframe
	
	' hide some graphics that should not be seen in overview
	
	if (world.user.container.name = "Lobby Room") then
		if (world.user.from = "Lobby") _
		or (world.user.from = "ResourceDesk") _
		or (world.user.from = "SeattleDesk") _
		or (world.user.from = "DiscussionArea") then
			world.user.container.swapFramesOut world.user.container.LobbyThings
		elseif world.user.from = "GiftCarts" then
			world.user.container.swapFramesOut world.user.container.GiftCartsThings
		elseif world.user.from = "MusicGarden" then
			world.user.container.swapFramesOut world.user.container.MusicGardenThings
		elseif world.user.from = "GameRoom" then
			world.user.container.swapFramesOut world.user.container.GameRoomThings
		end if
		world.user.container.swapFramesIn world.user.container.OverviewThings
	end if
	
	helperframe.setposition icamframe, 0.0,0.0,0.0
	helperframe.setorientation icamframe, 0.0,0.0,1.0,0.0,1.0,0.0
	'now, we store where the camera direction is in relation to the room
	'we can grab position just from the overviewpoint itself
	icamframe.getposition overviewframe, spx, spy, spz
	icamframe.getorientation roomframe, sdx, sdy, sdz, sux, suy, suz
	'store the destination in the same world coords
	overviewframe.getposition roomframe, wpx, wpy, wpz
	overviewframe.getorientation roomframe, wdx, wdy, wdz, wux, wuy, wuz
	world.fireuievent this, "SetCamera", array()
	dim a_timer
	set a_timer = world.createtimer(50, this, "flyout_interpolate")
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		flyin_start
'//  Purpose:	Begin interpolation from the overhead view point to the user's camera position
'//  Arguments: none
'//  Called by:	chatbox.htm:toggleOverview
'//				sampleLinks.htm:do_camera_overview
'////////////////////////////////////////////////////////////////////////
sub flyin_start
	' set the avatar scale to normal (see flyout_done) to restore mouse movement
	world.user.getFrame.setScale world.user.container.getFrame, 1,1,1

	world.user.viewType = "inworld"
	set helperframe = this.getframe
	set avframe = world.user.getframe
	set icamframe = world.user.icam.getframe
	set overviewframe = world.overview_point.getframe
	set roomframe = this.container.getframe
	
	lcameratime = world.global.cameratime
	'we store the camera position on the avatar where it was
	icamframe.getposition avframe, cpx, cpy, cpz
	icamframe.getorientation avframe, cdx, cdy, cdz, cux, cuy, cuz
	
	'we store where the camera/overview is in relation to the avatar position
	overviewframe.getposition avframe, spx, spy, spz
	overviewframe.getorientation avframe, sdx, sdy, sdz, sux, suy, suz
	
	icamframe.setposition overviewframe, 0.0, 0.0, 0.0
	icamframe.setorientation overviewframe, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0
	
	world.fireuievent world.user.icam, "SetCamera", array()
	
	dim a_timer
	set a_timer = world.createtimer(50, this, "flyin_interpolate")
	
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		flyin_done
'//  Purpose:	Restore graphics which were swapped out in overview
'//  Arguments: none
'//  Called by:	flyin_interpolate
'////////////////////////////////////////////////////////////////////////
sub flyin_done
	if (world.user.container.name = "Lobby Room") then
		world.user.container.swapFramesOut world.user.container.OverviewThings
		if (world.user.from = "Lobby") _
		  or (world.user.from = "ResourceDesk") _
		  or (world.user.from = "SeattleDesk") _
		  or (world.user.from = "DiscussionArea") then
			world.user.container.swapFramesIn world.user.container.LobbyThings
		elseif world.user.from = "GiftCarts" then
			world.user.container.swapFramesIn world.user.container.GiftCartsThings
		elseif world.user.from = "MusicGarden" then
			world.user.container.swapFramesIn world.user.container.MusicGardenThings
		elseif world.user.from = "GameRoom" then
			world.user.container.swapFramesIn world.user.container.GameRoomThings
		end if
	end if
	
	' set the renderer camera view to match the user's camera
	world.fireuievent world.user.icam, "SetCamera", array()

	world.user.icam.getframe.setposition avframe, cpx,cpy,cpz
	world.user.icam.getframe.setorientation avframe, cdx,cdy,cdz,cux,cuy,cuz

	' check if we zoomed in because of starting a journey, and if so trigger the first step
	if world.user.journey <> "none" then world.user.fireEvent "ApproachDone"

	' tell the UI that the viewtype has changed
	world.fireuievent world.user, "SetViewType"
	
	'if we came out of overview to start a camera angle change, continue it.
	if world.user.icam.newShot <> world.user.icam.shot then 
		world.user.icam.PanStart
	else
		' tell the UI it is okay to change camera angles now
		world.fireUIEvent world.user, "CameraDone"
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		flyout_done
'//  Purpose:	signal the UI that we have reached overhead view
'//  Arguments: none
'//  Called by:	flyout_interpolate
'////////////////////////////////////////////////////////////////////////
sub flyout_done
	world.fireUIEvent world.overview_point, "SetCamera", array()
	world.fireUIEvent world.user, "SetViewType"
	' tell the UI it is okay to change camera angles now
	world.fireUIEvent world.user, "CameraDone"
	' Suppress mouse and arrow key navigation in overview. This is sort of a hack.
	' We scale down the avatar graphics really, really, REALLY small
	' so manual navigation can't cause any significant movement.
	world.user.getFrame.setScale world.user.container.getFrame, 0.0001, 0.0001, 0.0001
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		innerCamera_PanInterpolate1
'//  Purpose:	perform one interpolation step between camera view 2 (facing) and 0 (eyeball)
'//  Arguments: none
'//  Called by:	innerCamera_PanStart
'////////////////////////////////////////////////////////////////////////
sub innerCamera_PanInterpolate1 (timer)
	pan_count = pan_count + 1
	if pan_count > pan_Time then
			world.destroytimer(timer)
			pan_count = 0
			this.position.set epx,epy,epz
			this.direction.set edx,edy,edz
			this.Shot = this.newshot
			world.fireUIEvent world.user, "CameraDone"
	else
			theta = starttheta + (endtheta - starttheta)*(pan_count/pan_Time)
			icamframe.setposition avframe, _
			    spx + (epx-spx)*(pan_count/pan_Time) ,_
				spy + (epy-spy)*(pan_count/pan_Time) ,_
			    spz + (epz-spz)*(pan_count/pan_Time)
			icamframe.setorientation avframe, _
			    sin(theta+pi),_
				sdy + (edy-sdy)*(pan_count/pan_Time),_
			    cos(theta+pi),_
			    sux,suy,suz
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		innerCamera_PanInterpolate2
'//  Purpose:	perform one interpolation step between camera view 0 (eyeball) and 1 (shoulder)
'//  Arguments: none
'//  Called by:	innerCamera_PanStart
'////////////////////////////////////////////////////////////////////////
sub innerCamera_PanInterpolate2 (timer)
	pan_count = pan_count + 1
	if pan_count > pan_Time then
			world.destroytimer(timer)
			pan_count = 0
			this.position.set epx,epy,epz
			this.direction.set edx,edy,edz
			this.Shot = this.newshot
			world.fireUIEvent world.user, "CameraDone"
	else
		icamframe.setposition avframe, _
		    spx + (epx-spx)*(pan_count/pan_Time) ,_
			spy + (epy-spy)*(pan_count/pan_Time) ,_
		    spz + (epz-spz)*(pan_count/pan_Time)
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		innerCamera_PanInterpolate3
'//  Purpose:	perform one interpolation step between camera view 1 (shoulder) and 0 (eyeball)
'//  Arguments: none
'//  Called by:	innerCamera_PanStart
'////////////////////////////////////////////////////////////////////////
sub innerCamera_PanInterpolate3 (timer)
	pan_count = pan_count + 1
	if pan_count > pan_Time then
		world.destroytimer(timer)
		pan_count = 0
		this.position.set epx,epy,epz
		this.direction.set edx,edy,edz
		this.Shot = this.newshot
		world.fireUIEvent world.user, "CameraDone"
	else
		theta = starttheta + (endtheta - starttheta)*(pan_count/pan_Time)
		icamframe.setposition avframe,_
		    xradius * sin(theta),_
			spy + (epy-spy)*(pan_count/pan_Time),_
			zradius * cos(theta)
		icamframe.setorientation avframe, _
		    -xradius * sin(theta),_
			sdy + (edy-sdy)*(pan_count/pan_Time),_
			-zradius * cos(theta),_
		    sux,suy,suz
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		innerCamera_PanInterpolate4
'//  Purpose:	perform one interpolation step between camera view 1 (shoulder) and 2 (facing)
'//  Arguments: none
'//  Called by:	innerCamera_PanStart
'////////////////////////////////////////////////////////////////////////
sub innerCamera_PanInterpolate4 (timer)
	pan_count = pan_count + 1
	if pan_count > pan_Time then
		world.destroytimer(timer)
		pan_count = 0
		this.position.set epx,epy,epz
		this.direction.set edx,edy,edz
		this.Shot = this.newshot
		world.fireUIEvent world.user, "CameraDone"
	else
		theta = starttheta + (endtheta - starttheta)*(pan_count/pan_Time)
		icamframe.setposition avframe,_
	    xradius * sin(theta),_
		spy + (epy-spy)*(pan_count/pan_Time),_
		zradius * cos(theta)
		icamframe.setorientation avframe, _
		    sin(theta-pi),_
			sdy + (edy-sdy)*(pan_count/pan_Time),_
		    cos(theta+pi),_
		    sux,suy,suz
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		innerCamera_PanStart
'//  Purpose:	begin interpolation step between the current camera view and this.newShot
'//  Arguments: none
'//  Called by:	innerCamera_setShot
'//				flyin_done
'////////////////////////////////////////////////////////////////////////
sub innerCamera_PanStart
	' theta is the camera's angular position on its movement curve, not its direction
	dim timer, pos, dir
	if this.container.viewType = "overview" then
		world.user.camerahelper.flyin_start
	else
		set avframe = this.container.getframe
		set icamframe = this.getframe

		' get current pos, dir
		icamframe.getposition avframe, spx, spy, spz
		icamframe.getorientation avframe, sdx, sdy, sdz, sux, suy, suz
		
		' get new pos, dir
		set pos = this.pos.property(CStr(this.newshot))
		set dir = this.dir.property(CStr(this.newshot))

		epx = pos.x
		epy = pos.y
		epz = pos.z
		edx = dir.x
		edy = dir.y
		edz = dir.z
		zradius = (epz - spz) / 2
		xradius = 1
	
		world.user.icam.setupcamera
		pan_time = this.panTime
		
		select case this.newshot
			case 0
				starttheta = 0
				endtheta = pi
				set timer = world.createtimer(20, this, "PanInterpolate1")
			case 1
				if this.Shot = 0 then
					starttheta = pi
					endtheta = 0
					set timer = world.createtimer(20, this, "PanInterpolate2")
				else
					starttheta = 0
					endtheta=0
					set timer = world.createtimer(20, this, "PanInterpolate3")
				end if
			case 2
				starttheta = pi
				endtheta = 0
				set timer = world.createtimer(20, this, "PanInterpolate4")
		end select

	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		innerCamera_setupCamera
'//  Purpose:	fire a UI event that will call the renderer control's setCamera method
'//				to set the camera position to the user's icam frame
'//  Arguments: none
'//  Called by:	innerCamera_PanStart
'////////////////////////////////////////////////////////////////////////
sub innerCamera_setupCamera
	world.fireuievent world.user.icam, "SetCamera" , array()
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		innerCamera_setShot
'//  Purpose:	establish a new camera viewpoint
'//  Arguments: newShot: the new position (0=eyeball, 1=shoulder, 2=facing the user)
'//  Called by:	innerCamera_toggleShot
'////////////////////////////////////////////////////////////////////////
sub innerCamera_setShot (newShot)
	this.newShot = newShot
	' report the new camera position to the UI 
	world.fireUIevent world.user, "CameraStatus", array("Camera is " & this.ShotDescription.property(CStr(this.newShot)), this.container.from)
	' start an interpolation between the current camera shot and the new shot
	this.PanStart
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		innerCamera_toggleShot
'//  Purpose:	move sequentially to the next camera position; we have created interpolation
'//				methods to make specific transitions, and we only allow these transitions.
'//  Arguments: none
'//  Called by:	ChatBox.htm:ChangeCameraView
'////////////////////////////////////////////////////////////////////////
sub innerCamera_toggleShot 
	select case this.Shot
		case 0					' user's eye view
			this.setShot (1)	' go to over shoulder
		case 1					' over the shoulder
			this.setShot (2)	' go to facing the user
		case 2					' facing the user
			this.setShot (0)	' go to user's eye view
	end select
end sub

