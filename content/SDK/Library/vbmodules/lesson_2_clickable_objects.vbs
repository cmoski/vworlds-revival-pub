option explicit
		'use this to avoid problems with mispelled variable names
		'under this option you must explicitly declare all script variables
		'using the 'dim' statement prior to using them.

dim my_state	'declaring a variable outside of any vbscript sub makes it global- its value
				'can be saved and reused for as long as the client is running vworlds

dim box_sound   'this global variable will hold a reference to a sound that can be
				'set once and reused without having to re-initialize it every time
				'later we will show how to do this by using
				'a custom property on a virtual worlds object instead.
				
sub click (hwnd, x, y)  'these three arguments must be included in order to override
						'a button click event from the mouse on any object.
						'They refer to the renderer's window handle (not used), and
						'the x and y spot in the render window where a user clicked.
	
	World.trace "click received at coordinates "&cstr(x)&","&cstr(y)&" of the window..."
	
	if isobject(box_sound) = false then
		set box_sound = world.createsound("SDK\library\sounds\_ScriptTutorial\minuet.wav", false, true)
							'here the use of 'isobject' is a way to detect
							'if we have already initialized
							'the variable box_sound with our sound yet.
							'if isobject returns false, it means the
							'variable does not have a sound in it, so
							'we should set the variable with a sound
							'before we try to use it.
	end if
	
	if my_state <> true then
		This.do_Surprise   'This line calls a custom vbscript method on the box (doSurprise)	
		my_state = true
	else
		This.stop_Surprise 'This line calls a custom vbscript method on the box (stopSurprise)
		my_state = false
	end if
	
	World.trace "the global variable ""my_state"" changed to a value of "&cstr(my_state)
	
	dim result
	result = this.invokesupermethod(Array(hwnd,x,y))
							'Event handlers often require this call to
							' "Invokesupermethod" at the end of the script. 
							'This is needed to ensure that the basic behavior
							'of objects is not mistakenly altered by a vbscript
							'that makes use of the event. To prevent the default
							'behavior from occuring, you can explicitly omit this
							'call on the event handling methods you override.
							'In the case of OnLButtonUp, there is in fact no
							'default behavior, but it is a good idea to keep
							'calling the basic behavior for all overridden methods.
							'Note that you must pass the supermethod the same args as
							'your script receives, in an array.
end sub


sub do_Surprise
	'often world.user.container is a good way to get hold of the room object, and thus to
	'find and use other objects that are contained within it. If you know the name of the
	'object you want to manipulate in script, you can use the function "findwithin" on the
	'room to get to it from a vbscript and change its properties.

	Dim Myvector   'we use vectors for much of the motion and position functionality
	set Myvector = world.createvector (0,1,0)

	dim clickable_box, rot, rev, dolph
	set clickable_box = world.user.container.findwithin("clickable_box")
	set rot = world.user.container.findwithin("rotator")
	set rev = world.user.container.findwithin("revolver")
	set dolph = world.user.container.findwithin("dolphin")
	clickable_box.Sound = box_sound
	clickable_box.renderquality = 3
	clickable_box.rotationaxis = MyVector
	clickable_box.rotationrate = .05
	rev.rotationaxis = MyVector
	rev.rotationrate = -.07
	
	Myvector.set 0,0,1   'we can re-use this vector for other values by calling 'set' on it

	rot.rotationaxis = MyVector
	rot.rotationrate =  csng(.1)
	dolph.renderquality = 3
	dolph.isvisible = true
	dolph.positionduration = 2000
	dolph.position.y = .5
	
end sub



sub stop_Surprise
	'basically, we need to restore most of the values for the movements back and
	'turn off the sound we were playing by setting the object's sound property to 'nothing'

	dim clickable_box, rot, rev, dolph
	set clickable_box = world.user.container.findwithin("clickable_box")
	set rot = world.user.container.findwithin("rotator")
	set rev = world.user.container.findwithin("revolver")
	set dolph = world.user.container.findwithin("dolphin")
	
	clickable_box.sound = nothing
	clickable_box.rotationrate = csng(0.0)
	rev.rotationrate = 0.0
	rot.rotationrate = 0.0
	dolph.isvisible = false
	dolph.positionduration = 0
	dolph.position.y = 0
	
end sub


sub install (module)
	'this is a placeholder method that will do nothing
end sub
