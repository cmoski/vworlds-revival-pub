option explicit

dim first_run_flag   	'we can use an empty global to tell when this script is first run
						'by a client... see the comments below for the details

dim timer_counter		'using another timer here...

dim collision_sound  	'this variable will be re-used each time the script runs,
						'but only needs to be set once at the first time it runs- a good
						'candidate for a global variable
						
sub OnIntersectee(Thing, X, Y, Z, iBoundaryIndex, iEdgeIndex, bTransition)

	'in this if statement, if the script has run for the first time,
	'first_run_flag is not initialized, but we know it wont be 'true', so
	'we put in this code to prepare a sound once to be reused by the code...
	'afterwards, when we set the global to 'true', we are making
	'sure that the code inside the if statement will not run again in this session.

	if first_run_flag <> true then
		set collision_sound = world.createsound("SDK\library\sounds\_ScriptTutorial\shield.wav", false, false)
		first_run_flag = true  
	end if

	this.sound = collision_sound
	
	world.trace "OnIntersectee method was invoked on object "&this.name
	world.trace thing.name&" hit boundary "&cstr(iBoundaryIndex)&" at coords "&cstr(cInt(x))&","&cstr(cInt(y))&","&cstr(cint(z))&" edge "&cstr(iEdgeIndex)&", side "&cstr(bTransition)
	
	'objects can also be properties of other objects. Each of the objects
	'that have this method must also have a property
	'called 'hit_marker' that is itself an artifact. 
	'setting the marker objects position relative to its parent shows us where
	'the intersection is occurring...

	this.hit_marker.position.set x,y,z 

	'we discovered that when the marker moves to 2 of the edges
	'of the box at right angles to the front, 
	'the marker looks like it is turned sideways, since we are just moving its position 
	'and not its direction! 
	'we can handle this + make a better look by changing the direction of the marker,
	' but only when an avatar hits those even-numbered edges.
	'Instead of an 'if' we can use 'mod' to detect even-ness or oddness of the incoming
	'edge parameter 'iEdgeIndex' and apply it right to the direction...
	' look up the keyword 'mod' in the vbscript language documentation for details...

	this.hit_marker.direction.set 1-(iEdgeIndex mod 2) , 0 , (iEdgeIndex mod 2)

	dim flashtimer
	timer_counter = 0
	set flashtimer = world.createtimer (100, this, "flash_timer_method")
	
end sub


sub flash_timer_method (the_timer)
	this.SetNamedMeshColor "*", rgb ( _
		0,  _
		(timer_counter mod 2)*255  , _
		255-((timer_counter mod 2)*255) )
	
	timer_counter = timer_counter + 1

	if timer_counter > 4 then
		world.destroyTimer the_timer
		this.SetNamedMeshColor "*", rgb (255, 255, 255)
		this.hit_marker.SetNamedMeshColor "*", rgb (0,0,0)
	end if
end sub

sub install (module)

end sub