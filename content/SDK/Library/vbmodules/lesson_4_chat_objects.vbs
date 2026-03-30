option explicit
dim my_timer  'a global for a timer
dim counter   'another global so the timer can track how many times it is called


sub avatar_spoke (who, hearers, text, mode)

	text = ucase(text)    	'this put a string to all upper-case...
			      			'in this way, we can be sure we don't miss 
			      			'comparing it to our secret word because of case sensitivity

	if this.listening  then    '"listening" is a property of the object that is a boolean
				   'try changing its value in the object explorer
				   '(the tutorial will also reset it automatically)

		world.trace "sub avatar_spoke called on object "&this.name
		if instr(1, text, ucase(this.secret_word),1) > 0 then  'finds if the secret word is inside any text being chatted

			this.upduration = this.timer_interval
			
			if isObject(my_timer) = false then
				this.start_surprise
				set my_timer = world.createTimer (this.timer_interval, this, "timer_method")
			end if
			
			'putting this here resets the timer's count, so if the secret word
			'is said while the timer is already running, it will run another
			'full count of calls...

			counter = 1
		end if
	else
		'if the listening property = false then the object 
		'should not currently be listening for text, so ignore things said...
	end if
	
	dim result
	result = this.invokesupermethod(Array(who, hearers, text, mode))
end sub



sub timer_method (the_timer)
	
	dim x_change 
	dim y_change 
	dim z_change 

	world.trace "sub timer_method called on object "&this.name
	world.trace "global variable counter has a value of "&cstr(counter)&"..."

	counter = counter + 1

	'the next lines will make the object move a random amount from wherever 
	'it last was when the timer_method is called...
	'try changing the positionduration on the object to change the object's speed
	
	x_change =  (2-(rnd*4.0)) 
	y_change =  ( 2.0-(rnd*4.0)) 
	z_change =  (2-(rnd*4.0))

	this.position.set this.position.x + x_change, this.position.y + y_change, this.position.z + z_change

	'we also want to make the object turn towards its movement, for a more life-like
	'behavior...

	this.direction.set  x_change, y_change,  z_change
	'try changing the directionduration of the object to make its turns smoother or sharper
	this.up.set 0,1,0
	'try changing the upduration of the object to make its flipping forwards or backwards
	'as it turns smoother
	if counter > this.timer_maximum then
		this.end_surprise
		world.destroytimer the_timer
		my_timer = NULL
	end if
end sub



sub start_surprise
	this.sound = world.createsound("SDK\library\sounds\_ScriptTutorial\eagle2.wav", true, true)
	world.trace "sub start_surprise called on object "&this.name
end sub


sub end_surprise
	world.trace "sub end_surprise called on object "&this.name

	'these calls will return the object to its original position and stop it rotating...
	this.sound = nothing
	this.position.set 10,2,-10
	this.direction.set 0,0,1
	this.up.set 0,1,0
end sub



sub install (module)

end sub