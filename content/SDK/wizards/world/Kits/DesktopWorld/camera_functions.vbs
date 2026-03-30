option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		make_camera_helpers
'//  Purpose:	Create an overview point which provides a frame of reference high above the world,
'//				and a camera helper object with methods to fly out to the overview point and back
'//				to the user's camera viewpoint.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub make_camera_helpers
	' create an invisible object high above the world looking downward
	dim overview
    set overview =  World.CreateInstance("overview_point", "artifact", LobbyRm)
	overview.Description = ""
	overview.InitializeGraphics "", -11.0,23.0,2.0, 0.4,-0.57,0.00
	overview.isUIVisible = false
    world.global.addproperty "overview_point" , overview, ,world.PS_ALL_RWA

	' create an object whose frame of reference will interpolate out to the overhead viewpoint
	' and back to the user's camera viewpoint.
	dim helper
	set helper =  World.CreateInstance("camera_helper", "artifact", LobbyRm)
	helper.Description = ""
	' the camera helper is not visible
	helper.InitializeGraphics "", 0.0,0.0,0.0,0.0,0.0,1.0
	helper.isUIVisible = false
	' make the camera helper a world property
	world.global.addproperty "camera_helper", helper, ,world.PS_ALL_RWA

	' add methods to fly the camera helper's frame of reference out and back
	helper.createandaddmethod World.METHOD_CLIENT, camera_module,  "flyout_start", "flyout_start",  , world.PS_ALL_E + world.PS_ALL_RWA
    helper.createandaddmethod World.METHOD_CLIENT, camera_module,  "flyout_interpolate", "flyout_interpolate",  , world.PS_ALL_E + world.PS_ALL_RWA
	helper.createandaddmethod World.METHOD_CLIENT, camera_module,  "flyout_done", "flyout_done",  , world.PS_ALL_E + world.PS_ALL_RWA
	helper.createandaddmethod World.METHOD_CLIENT, camera_module,  "flyin_start", "flyin_start",  , world.PS_ALL_E + world.PS_ALL_RWA
	helper.createandaddmethod World.METHOD_CLIENT, camera_module,  "flyin_interpolate", "flyin_interpolate",  , world.PS_ALL_E + world.PS_ALL_RWA
	helper.createandaddmethod World.METHOD_CLIENT, camera_module,  "flyin_done", "flyin_done",  , world.PS_ALL_E + world.PS_ALL_RWA

	' this controls how long the interpolations run
	world.global.addproperty "cameraTime" , 100, ,world.PS_ALL_RWA

end sub

