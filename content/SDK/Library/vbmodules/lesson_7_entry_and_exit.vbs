option explicit

dim portal_counter      'we need a global to keep track of how many times this user
			'has entered or exited certain portals during this v-worlds session

portal_counter = 0      'we can initialize a value for the variable before using it (this
			'will happen only once the first time a vbscript sub in this script file 
			'is run)

sub object_enters (the_container, the_object)
		world.trace "sub object_enters called on object "&this.name
		world.trace "the sub was passed the object "&the_object.name&" and the container it entered..."
		world.trace "the container "&the_object.name&" just entered is "&the_container.name

		'the next line checks to see if the object that entered the same space as
		'the portal is an avatar. the object was passed in as 
		'the local variable "the_object". This is how we can tell the difference
		'between an avatar coming in or leaving and someone dropping or taking an object,
		'since they are both objects and can cause the same methods to be called
		
		if the_object.exemplar.isoftype("avatar") then

			'now we know it is an avatar that has entered the room!

			portal_counter = portal_counter + 1   'increment our global counter
			world.trace "a portal has been accessed "&portal_counter&" times in this session..."
			
			'why do we need this if statement below?

			if world.Current_Lesson = 7 then
				this.do_surprise the_object 	'we can send a variable with a v-worlds
								'object inside it to another method
								'so that method can use the objects
								'properties (name,positition, etc.) to do things
			end if

			'we need it because this script will detect you, the tutorial taker, when you
			'first come into the main room. We dont want the surprise
			'to happen then because it will be out of the context of the lesson.
			'for your own scripts you won't need this condition checker.

		else
			world.trace this.name&" knows that "&the_object.name&" is not an avatar."
			'we decide to do nothing special here, but you could use this area to
			'put artifacts away when they are dropped by avatars, or trigger other events.
		end if
		
		dim result
		result = this.invokesupermethod(Array(the_container, the_object))
end sub


sub object_leaves (the_container, the_object)
		world.trace "sub object_leaves called on object "&this.name
		world.trace "the sub was passed the object "&the_object.name
		world.trace "the object is in container "&the_object.container.name
		world.trace "the container just left is "&the_container.name

		if the_object.exemplar.isoftype("avatar") then
			'to be neat, we can clean up the surprise so it can happen again
			'the same way for another avatar.

			this.end_surprise
		else
			world.trace this.name&" knows that "&the_object.name&" is not an avatar."
		end if
		
		dim result
		result = this.invokesupermethod(Array(the_container, the_object))
end sub


'the next subroutines implement the do_surprise and end_surprise methods 
'for each of the 2 portals--but note that the subroutines "object_enters" and "object_leaves"
'written above do not know which portal is calling the OnPeerEnter/leave methods -- 
'the same vbscript methods are attached to BOTH portals in separate rooms,
'even though we might want to get them to behave differently.
'we can get different behaviors for the portals and edit them independently if we use the
' "this" object to call the right "do_surprise" or "end_surprise" method for the right portal


sub tutorial_portal_do_surprise (the_object)
	world.trace "sub tutorial_portal_do_surprise called on object "&this.name
	this.say "hello, "&the_object.name&", welcome to "&this.container.name&"!"
end sub


sub tutorial_portal_end_surprise
	world.trace "sub tutorial_portal_end_surprise called on object "&this.name
end sub


sub subroom_portal_do_surprise (the_object)
	world.trace "sub subroom_portal_do_surprise called on object "&this.name
	this.say "hi there, "&the_object.name&", you're now in "&this.container.name&"!"
end sub


sub subroom_portal_end_surprise
	world.trace "sub subroom_portal_end_surprise called on object "&this.name
end sub


sub transport(the_object, the_index)
	world.trace "transport called on object "&this.name
	dim i
	dim keyfound
	keyfound = false
	for i = 0 to world.user.contents.count - 1
		if world.user.contents.property(i).name = "key" then
			this.say "ahh, you have the key, go on in!"
			this.invokesupermethod (Array(the_object, 0))
			keyfound = true
			exit for
		end if
	next
	if keyfound = false then
		this.say "Normally, I wouldn't let you go through until you have an object 'key' in your contents..."
		this.say "but just this once..."
		this.invokesupermethod (Array(the_object))
	end if
end sub



sub install (module)


end sub

