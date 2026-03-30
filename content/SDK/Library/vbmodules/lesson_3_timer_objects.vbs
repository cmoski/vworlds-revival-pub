option explicit
dim my_timer  'we need a global variable for the timer, see below
dim counter   'we need a global counter so the timer can keep track of how many times it is being called



sub start_timer (hwnd, x, y)
	world.trace "start_timer vbscript called on object "&this.name

	if isobject (my_timer) then      'this line makes sure there isn't already a timer
					 'created- thats why we need the global

		'if my_timer is an object, we know we have already started the timer, 
		'so just ignore it
	else
	
		'there is no timer yet made, so we should make one
		'we should also reset the counter-- otherwise if a previous timer
		'already incremented it past its maximum it will only call once

												'The underscore '_' followed           _
												'IMMEDIATELY by a return character     _
												'allows you to put one long line of    _
												'code across multiple lines, for more  _
												'legible code. All of these comments   _
												'Are really in one line of code!	
		set my_timer = world.createtimer (_											
			this.timer_arrow.timer_interval,_				 	
			this.timer_arrow, "timer_method")
												'notice that 'timer_arrow' is 	
												'a property of the start_timer  
												'object (this) but it holds the actual  
												'timer_arrow object inside it! So we   	
												'can get to the arrow object's properties as 
												'well by going down another level with '.'   
												' 'timer_interval' is a numeric property     
												'of the timer_arrow object.  
		counter = 1
	end if
	
	dim result
	result = this.invokesupermethod(Array(hwnd,x,y))
end sub




sub stop_timer (hwnd, x, y)
		world.trace "stop_timer vbscript called on object "&this.name

		if isObject(my_timer) then   'see comment above for isObject(my_timer) 
			this.timer_arrow.up.set 0,1,0 'make this a reset call
			'we can destroy a timer outside of its method (timer_method, below)
			'as long as we have stored it in a global variable when we 
			'created it (we put it in the global my_timer)

			world.destroytimer my_timer
			my_timer = NULL
		else
			'there is no timer object to destroy, so we do nothing
		end if
		
		dim result
		result = this.invokesupermethod(Array(hwnd,x,y))
end sub




sub timer_method (the_timer)  'a timer call-back method is always passed a local variable
			      'with the timer in it (here we call it "the_timer")
			       'this is so we can destroy it from this subroutine
			       'even if we did not store it in a global (such as "my_timer")

	world.trace "timer_method script called on object "_
		&this.name&" "&cstr (counter)&" times..."

	this.SetNamedMeshColor "*", rgb( _
		(counter mod 2)*255, _
		0, _
		255-((counter mod 2)*255)   )   'as global variable 'counter' increases by 1 
										'it goes consecutively even and odd, so
										'we can use the counter variable to toggle the colors
										'of the mesh by using the remainder of counter/2
	
	'the next line will make the timer rotate around exactly once no matter how
	'many times the timer is called, proving that math is very ugly but useful...

	this.up.set _   
		-1.0*sin(cdbl(counter)*(cdbl(6.282/(this.timer_maximum*1.0)))), _
		cos(cdbl(counter)*(cdbl(6.282/(this.timer_maximum*1.0)))), _
		0 
		
	counter = counter + 1

	'here we have a condition that causes the timer to be destroyed
	'this happens when the counter variable (an integer) exceeds
	'the number stored in the property "timer_maximum" of the object running the timer

	if counter > this.timer_maximum then
		world.destroytimer the_timer
		my_timer = NULL
		world.trace "timer_method destroyed the timer at "&   _
			cstr(this.timer_maximum)&" calls..."
	end if
end sub


sub install (module)

end sub
