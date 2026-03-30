option explicit



sub install (module)
	'do nothing yet
end sub

sub OnConnect (who)
	world.FireUIEvent world.user, "vwTutorial", 0
	world.FireUIEvent world.user, "vwScript", ""

	dim result
	result = this.InvokeSuperMethod (who)
end sub

sub OnPeerConnect (who)
        if world.user.iswizard = false then
			world.user.alert "non-wizard login alert" , "Sorry, you must be a wizard to use the tutorial. Build your own tutorial world from the create-a-world wizard and then log in as the administrator."
		end if
		'this.logoff who
end sub

sub OnDisconnect (who)
	if world.Current_Lesson > 0 then
			world.tutorial.invokemethod("end_"+cstr(world.Current_Lesson))
			world.Current_Lesson = 0
	end if
	dim result
	result = this.InvokeSuperMethod (who)
end sub

sub Start_Lesson (num)
		'world.trace cstr(world.Current_Lesson)
		if world.Current_Lesson > 0 then
			'world.trace "ending lesson "&cstr(world.Current_Lesson)
			if world.Current_Lesson <> num then
				world.tutorial.invokemethod("end_"+cstr(world.Current_Lesson))
			end if
		end if
		world.Current_Lesson = num
		'world.trace "starting lesson "&cstr(num)
		world.tutorial.invokemethod("start_"+cstr(num))
end sub

sub End_Lesson (num)
		world.tutorial.invokemethod("end_"+cstr(num))
end sub

sub start_1
	world.tutmainroom.findwithin("lesson_1").position.y = 1
	world.user.approach world.tutorial.container.findwithin("lesson_1")
	world.tutmainroom.findwithin("lesson_1").position.y = 2
end sub

sub end_1
	world.tutmainroom.findwithin("lesson_1").position.y = -200
	world.tutmainroom.findwithin("blue_planet").rotationrate = 0.0
	world.tutmainroom.findwithin("silver_planet").rotationrate = 0.0
	world.tutmainroom.findwithin("yellow_planet").rotationrate = 0.0
	world.tutmainroom.findwithin("blue_planet").direction.set 0,0,1
	world.tutmainroom.findwithin("silver_planet").direction.set 0,0,1
	world.tutmainroom.findwithin("yellow_planet").direction.set 0,0,1
	world.tutmainroom.findwithin("blue_planet").up.set 0,1,0
	world.tutmainroom.findwithin("silver_planet").up.set 0,1,0
	world.tutmainroom.findwithin("yellow_planet").up.set 0,1,0
end sub

sub start_2
	world.tutmainroom.findwithin("lesson_2").position.y = 1
	world.user.approach world.tutmainroom.findwithin("lesson_2")
	world.tutmainroom.findwithin("lesson_2").position.y = 2
end sub

sub end_2
	world.tutmainroom.findwithin("lesson_2").position.y = -200
	world.tutorial.container.findwithin("clickable_box").end
	world.tutorial.container.findwithin("revolver").end
	world.tutorial.container.findwithin("rotator").end
	world.tutorial.container.findwithin("dolphin").end
end sub


sub start_3
	world.tutmainroom.findwithin("lesson_3").position.y = 1
	world.user.approach world.tutmainroom.findwithin("lesson_3")
	world.tutmainroom.findwithin("lesson_3").position.y = 2
end sub


sub end_3
	world.tutmainroom.findwithin("lesson_3").position.y = -200
end sub


sub start_4
	world.tutmainroom.findwithin("lesson_4").position.y = 1
	world.tutmainroom.findwithin("lesson_4").listening = true
	world.user.approach world.tutmainroom.findwithin("lesson_4")
	world.tutmainroom.findwithin("lesson_4").position.y = 2
end sub


sub end_4
	world.tutmainroom.findwithin("lesson_4").position.y = -200
	world.tutmainroom.findwithin("lesson_4").listening = false
end sub


sub start_5
	world.tutmainroom.findwithin("lesson_5").positionduration = 0
	world.synchronize
	world.tutmainroom.findwithin("lesson_5").SetNamedMeshColor "*", rgb( _
		150, _
		20, _
		0   )
	world.tutmainroom.findwithin("lesson_5").position.y = 1
	world.user.approach world.tutmainroom.findwithin("lesson_5")
	world.tutmainroom.findwithin("lesson_5").positionduration = 8000
end sub


sub end_5
	world.tutmainroom.findwithin("lesson_5").positionduration = 0
	world.tutmainroom.findwithin("lesson_5").position.y = -200
end sub

sub start_6
	world.FireUIEvent world.user, "SetCamera", array( 0.0, 3.0, -14.0)
	world.tutmainroom.findwithin("lesson_6_passable_box").position.y = 1
	world.tutmainroom.findwithin("lesson_6_passable_box").position.x = 0
	world.tutmainroom.findwithin("lesson_6_impassable_box").position.y = 0
	world.tutmainroom.findwithin("lesson_6_impassable_box").position.x = 15
	world.user.approach world.tutmainroom.findwithin("lesson_6_passable_box")
	world.tutmainroom.findwithin("lesson_6_passable_box").position.y = 0
end sub


sub end_6
	world.tutmainroom.findwithin("lesson_6_passable_box").position.y = -200
	world.tutmainroom.findwithin("lesson_6_passable_box").position.x = 1000
	world.tutmainroom.findwithin("lesson_6_impassable_box").position.y = -200
	world.tutmainroom.findwithin("lesson_6_impassable_box").position.x = 1000
	world.FireUIEvent world.user, "SetCamera", array(0.0, 0.0, 0.0)
end sub


sub start_7
	world.tutmainroom.findwithin("lesson_7 portal").position.y = 1
	world.user.approach world.tutmainroom.findwithin("lesson_7 portal")
	world.tutmainroom.findwithin("lesson_7 portal").position.y = 2
end sub


sub end_7
	world.tutmainroom.findwithin("lesson_7 portal").position.y = -200
end sub


sub start_8

end sub

sub end_8

end sub

sub start_9
	world.tutmainroom.findwithin("lesson_9 portal").position.y = 1
	world.user.approach world.tutmainroom.findwithin("lesson_9 portal")
	world.tutmainroom.findwithin("lesson_9 portal").position.y = 2
end sub

sub end_9
	world.tutmainroom.findwithin("lesson_9 portal").position.y = -200
end sub

sub end_box
	this.renderquality = 1
	if this.Sound is Nothing then
		'we know we havent made a sound on the object yet, so dont remove it
	else
		this.Sound.SoundUrl = ""
	end if
	this.rotationrate = csng(0.0)
end sub


sub end_revolver

	this.rotationrate = csng(.0)
end sub


sub end_rotator

	this.rotationrate = csng(.0)
end sub


sub end_dolphin
	this.renderquality = 1
	this.isvisible = false
	this.positionduration = 0
	this.position.y = 0
end sub