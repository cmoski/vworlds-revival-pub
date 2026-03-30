'////////////////////////////////////////////////////////////////////////
'//  File:		deskBots_module.vbs
'//  Purpose:	Behaviors of bots at the two information desks in the sample world.
'//				These bots give simple greetings and direct people's attention to link pages.
'////////////////////////////////////////////////////////////////////////

option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bot_GreetUser
'//  Purpose:	Client-side method that sends bot.greetText to the chat pane.
'//				This only happens if the bot's greeting is enabled,
'//				the avatar is the user's avatar,
'//				and the avatar has not connected to the world in 2 months.
'//  Arguments: avatar: the avatar to greet
'//		This sub is called by the chat pane after the client loads.
'//  Called by:	client.htm:theclient_OnUIEvent
'////////////////////////////////////////////////////////////////////////
sub bot_GreetUser (avatar)
	if this.greetingEnabled and (avatar is world.user) then
		if world.lastVisitDate.isValid(avatar.name) then
			if DateDiff("m", Date, CDate(world.LastVisitDate.Property(avatar.name))) > 2 then
				World.FireUIEvent this, "OnBotTell", array(this, world.user, world.user.name & this.greetText)
			end if
		else
			World.FireUIEvent this, "OnBotTell", array(this, world.user, world.user.name & this.greetText)
		end if
		world.LastVisitDate.Property(avatar.name) = Cstr(Date)
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bot_OnLButtonUp
'//  Purpose:	OnRButtonUp event handler for the bot object.
'//				Client-side method, only runs on the client of the user who did the click
'//  Arguments: hwnd: window handle of the 3d renderer control
'//             x: mouse x coordinate in the renderer
'//             y: mouse y coordinate in the renderer
'////////////////////////////////////////////////////////////////////////
sub bot_OnLButtonUp (Window, x, y)
	world.fireUIEvent this, "OnBotTell", array(this, world.user, world.user.name & this.clickText)
	if this.ClickURL <> "" then 
		' if SurfToSampleURL is used, the bot's clickURL should be relative to Client/HTML.
		' if SurfToURL is used, the bot's clickURL should include the path to Client/HTML relative to ContentPath.
		world.fireUIEvent world.user, "SurfToSampleURL", array(this.clickURL)
	end if
	this.DoGesture 1
	this.InvokeSuperMethod(array(Window, x, y))
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bot_PeerTell
'//  Purpose:	OnPeerTell event handler for the bot object.
'//				Client-side method, only runs on the client of the user who did the click
'//  Arguments: who: object (avatar) whose Say or Emote method triggered the Tell event
'//             hearers: propertyList of objects to which the Tell will be broadcast
'//					(i.e. those who will hear what was said)
'//             text: the text of what was said 
'//				mode: 0 if the Tell was triggered by Say, 1 if by Emote
'////////////////////////////////////////////////////////////////////////
sub bot_PeerTell (who, hearers, text, mode)
	if who is world.user then 
		if lcase(text) = this.secret_word then
			world.fireUIEvent this, "OnBotTell", array(this, world.user, world.user.name & this.clickText)
			' if SurfToSampleURL is used, the bot's clickURL should be relative to Client/HTML.
			' if SurfToURL is used, the bot's clickURL should include the path to Client/HTML relative to ContentPath.
			world.fireUIEvent world.user, "SurfToSampleURL", array(this.clickURL)
		end if
	end if
	this.InvokeSuperMethod(array(who, hearers, text, mode))
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bot_onIntersectee
'//  Purpose:	Handles the OnIntersectee event for the bot object. 
'//				Triggers a bot gesture when the user crosses one of the bot's boundaries;
'//				the bot looks up when approached and looks down when the user leaves.
'//  Arguments: Collider:		the object intersecting with one of the bot's boundaries
'//				x, y, z:		the intersection point, in the bot's frame of reference
'//				BoundaryIndex:	index of the boundary being intersected; not used
'//				EdgeIndex:		index of the boundary edge being intersected; not used
'//				Transition:		true = the intersecting object is approaching, false = leaving
'////////////////////////////////////////////////////////////////////////
sub bot_OnIntersectee (object2, x, y, z, BoundaryIndex, EdgeIndex, Transition)
world.trace "bot_OnIntersectee " & this.name
	if object2 is world.user AND BoundaryIndex = 0 AND Transition = 1 then
		this.dogesture 2
	end if
	
	if object2 is world.user AND BoundaryIndex = 0 AND Transition = 0 then
		this.dogesture 0
	end if
	
	this.InvokeSuperMethod(array(object2, x, y, z, BoundaryIndex, EdgeIndex, Transition))
end sub
