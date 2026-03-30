'////////////////////////////////////////////////////////////////////////
'//  File:		avatar_module.vbs
'//  Purpose:	Methods for the avatar and bodypart objects.
'////////////////////////////////////////////////////////////////////////

option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bodyPart_onLButtonUp
'//  Purpose:	OnLButtonUp event handler for the bodypart object.
'//				Fires an LButtonUp event on the avatar that contains the bodypart;
'//				in this sample world the avatar itself has no visible 3d graphic to click on.
'//				Since this is a client-side method, it only responds to the user's own clicks.
'//  Arguments: hwnd: window handle of the 3d renderer control
'//             x: mouse x coordinate in the renderer
'//             y: mouse y coordinate in the renderer
'////////////////////////////////////////////////////////////////////////
sub bodyPart_onLButtonUp (hWnd, x, y)
	world.FireUIEvent world.user, "avatarLButtonUp", array(hWnd, x, y)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bodyPart_onRButtonUp
'//  Purpose:	OnRButtonUp event handler for the bodypart object.
'//				Fires an RButtonUp event on the avatar that contains the bodypart;
'//				in this sample world the avatar itself has no visible 3d graphic to click on.
'//				Since this is a client-side method, it only responds to the user's own clicks.
'//  Arguments: hwnd: window handle of the 3d renderer control
'//             x: mouse x coordinate in the renderer
'//             y: mouse y coordinate in the renderer
'////////////////////////////////////////////////////////////////////////
sub bodyPart_onRButtonDown (hWnd, x, y)
	world.FireUIEvent this.container, "avatarRButtonDown", array(hWnd, x, y)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_AddDefaultKeys
'//  Purpose:	initialize the user profile. This is an undocumented method which we use to add
'//				a custom ignore list and other profile keyvalues for sample world avatars.
'//  Arguments: none
'//  Called by:	client/html/vwStart.htm:OnDoneCreatingAvatar
'//				client/html/vwLoadScript.htm:UpdateAvatarProfile
'//				sdk/wizards/world/wizMain.htm:UpdateAvatarProfile
'//				
'////////////////////////////////////////////////////////////////////////
sub avatar_AddDefaultKeys
	dim pList
	this.InvokeSuperMethod(array())
	if not this.profile.isValid("FirstTimeUser") then this.profile.addKey "FirstTimeUser", true
	if not this.profile.isValid("Hobbies") then this.profile.addKey "Hobbies", "n/a"
	if not this.profile.isValid("Birthday") then this.profile.addKey "Birthday", "n/a"
	' Create a custom ignore list in the user's profile.
	' When you ignore someone, normal VWorlds behavior adds them to the "Ignoring" list in your profile.
	' For people on this list, avatar.GetMenuList returns a menu containing only "Un-ignore".
	' In this sample world this behavior is overridden by using a customIgnoreList in the
	' avatar profile and custom methods to maintain it.
	' The customIgnoreList is a propertyList containing pointers to avatar objects being ignored.
	if not this.profile.isValid("customIgnoreList") then
		set pList = world.CreatePropertyList
		this.profile.addKey "customIgnoreList", pList
	end if
	
	' Add custom avatar body parts.
	' Body parts are added here rather than in an avatar_onCreate because the avatar model to use depends
	' on the "gender" key in the avatar profile, and the profile is not available when avatar_onCreate runs.
	' AddDefaultKeys runs while the user is connecting to the world, when the profile is available.
	if this.contents.count < 4 then
		this.hair = world.CreateInstance("hair", "bodyPart")
		this.skin = world.CreateInstance("skin", "bodyPart")
		this.shirt = world.CreateInstance("shirt", "bodyPart")
		this.pants = world.CreateInstance("pants", "bodyPart")
		this.shoes = world.CreateInstance("shoes", "bodyPart")
		this.graphic = world.CreateInstance("graphic", "bodyPart")
		this.graphic.partName = "graphic"
		this.mood = world.CreateInstance("mood", "moodPart")
		this.icam = world.CreateInstance("icam", "InnerCamera")
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_DoGesture
'//  Purpose:	Client-side method to make an avatar's body parts perform a gesture.
'//				Overrides the built-in DoGesture method.
'//  Arguments: iGesture: the index number of a gesture to perform. 
'//  Called by:	deskbots_module.vbs:bot_OnLButtonUp
'//				deskbots_module.vbs:bot_OnIntersectee
'//	
'//	 Note: VWorlds has 13 built-in avatar gestures (see the Gestures topic in VWorlds Help)
'////////////////////////////////////////////////////////////////////////
sub avatar_DoGesture (iGesture)
	dim n, item
	for n = 0 to this.contents.count - 1
		set item = this.contents.property(n)
		if item.type = "bodyPart" then
			if isObject(item.geometry) then item.geometry.CurrentGesture = iGesture
		end if
	next
	this.InvokeSuperMethod(array(iGesture))
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_Profile
'//  Purpose:	handler for the avatar menu "Profile" item; 
'//				tells the UI that the Profile menu item was selected
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub avatar_Profile
	world.FireUIEvent world.user, "ShowProfile", array(this.id)
end sub

'////////////////////////////////////////////////////////////////////////
'//
'//		VWorlds clients communicate via the VWorlds server, not directly with each other.
'//		The ignore/unignore methods illustrate a programming pattern commonly used when 
'//		one client essentially wants to run a client-side method on another client.
'//
'//		 1.	The user clicks on an option from an object's right-click menu,
'//			triggering a client-side method that corresponds to the menu item;
'//			this method runs only on the client where the click was performed.
'//			[Note: in this sample world, avatars are the only objects that have right-click menus.]
'//		 2.	The client-side method invokes a server-side method on the clicked object.
'//		 3.	The server-side method invokes a second client-side method. When a server-side method
'//			invokes a client-side method, the client-side method always runs on all clients.
'//		 4.	On each client, the second client-side method decides whether or not to act,
'//			based on who the client's user is.
'//
'//			All three methods must be designed so the second client-side method gets the
'//			information necessary to decide whether to act. Sometimes it is enough to check
'//			if the user's avatar is the object on which the method was called. Other times 
'//			the originating client's avatar must be passed as an argument.
'//
'////////////////////////////////////////////////////////////////////////

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_Ignore
'//  Purpose:	Client-side method called when the user selects "Ignore" on this avatar's menu.
'//				Menu methods are client-side		
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub avatar_Ignore
	this.ServerHandleIgnore world.user
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_ServerHandleIgnore
'//  Purpose:	Server-side method called by an the avatar's client-side Ignore method;
'//				Calls the ignoring avatar's secureAddIgnore method to tell it to ignore the "this" avatar,
'//				and calls the "this" avatar's client-side ClientHandleIgnore method.
'//  Arguments: AvatarIgnoring: the avatar of the user who is ignoring "this" avatar
'////////////////////////////////////////////////////////////////////////
sub avatar_ServerHandleIgnore (AvatarIgnoring)		
	AvatarIgnoring.secureAddIgnore this
	this.ClientHandleIgnore AvatarIgnoring
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_secureAddIgnore
'//  Purpose:	ignore an avatar; adds the avatar to "this" avatar's ignore list.
'//  Arguments: AvatarToIgnore: the avatar to be added to the ignore list
'//  Called by:	avatar_serverHandleIgnore
'////////////////////////////////////////////////////////////////////////
sub avatar_secureAddIgnore (AvatarToIgnore)
	'add the person if not already on the ignore list
	dim ignoredlist, avObj
	set ignoredlist =  this.profile.keyvalue("customIgnoreList")
	for each avObj in ignoredlist
		if avObj is AvatarToIgnore then exit sub
	next
	ignoredlist.add AvatarToIgnore
	this.profile.keyvalue("customIgnoreList") = ignoredlist
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_ClientHandleIgnore
'//  Purpose:	Client-side method to handle ignoring this avatar.
'//				Called by ServerHandleIgnore.
'//				Here is another example of a server-side method invoking a client-side method;
'//				the method runs on all clients and each client checks what its role is, if any.
'//				If the user is the one being ignored, we simply want to inform the UI.
'//				If the user is doing the ignoring then we want to gray out the ignored avatar's
'//				bodyparts in the 3d renderer, and also inform the UI.
'//				Manipulating the geometry frame changes the colors on the local client only.
'//  Arguments: AvatarIgnoring: the avatar who has added "this" avatar to their ignoring list
'//  Called by:	avatar_ServerHandleIgnore
'////////////////////////////////////////////////////////////////////////
sub avatar_ClientHandleIgnore (AvatarIgnoring)
	if this is world.user then
		' notify the UI that the user's avatar is being ignored by AvatarIgnoring
		world.fireuievent AvatarIgnoring, "IgnoredByUser", array(0)
	elseif world.user is avatarignoring then
		' this avatar is being ignored by the user's avatar;
		' colorize this avatar in the 3d renderer and notify the UI
		if this.IsValidProperty("IsConnected") then
			dim icolor,red,green,blue
			icolor = 6579300
			red = (icolor MOD 256) / 255
			green = ((icolor MOD 65536) - (icolor MOD 256)) / 65535
			blue = (icolor - (icolor MOD 65536)) / 16777215
			this.shirt.GetGeometryFrame.SetMeshColor -1, red, green, blue 
			this.skin.GetGeometryFrame.SetMeshColor -1, red, green, blue 
			this.hair.GetGeometryFrame.SetMeshColor -1, red, green, blue 
			this.pants.GetGeometryFrame.SetMeshColor -1, red, green, blue 
			this.shoes.GetGeometryFrame.SetMeshColor -1, red, green, blue
		end if
		world.fireuievent this, "IgnoredUser", array(0)
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_Unignore
'//  Purpose:	Client-side method called on this avatar when the user selects
'//				the "Un-Ignore" item on this avatar's menu.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub avatar_Unignore
	this.serverHandleUnignore world.user
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_ServerHandleUnIgnore
'//  Purpose:	Server-side method to un-ignore an avatar;
'//				removes the avatar from "this" avatar's ignore list.
'//  Arguments: avToRemove: the avatar to be removed from the ignore list
'////////////////////////////////////////////////////////////////////////
sub avatar_ServerHandleUnIgnore (AvatarIgnoring)
	AvatarIgnoring.secureRemoveIgnore this
	this.ClientHandleUnIgnore AvatarIgnoring
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_secureRemoveIgnore
'//  Purpose:	un-ignore an avatar; removes the avatar from "this" avatar's ignore list.
'//  Arguments: avToRemove: the avatar to be removed from the ignore list
'//  Called by:	avatar_ServerHandleUnIgnore
'////////////////////////////////////////////////////////////////////////
sub avatar_secureRemoveIgnore (avToRemove)
	'remove the avatar if on the list
	dim ignoredlist, avObj
	set ignoredlist = this.profile.keyvalue("customIgnoreList")
	for each avObj in ignoredlist
		if avObj is avToRemove then
			ignoredlist.remove avObj
			this.profile.keyvalue("customIgnoreList") = ignoredlist
			exit sub
		end if
	next
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_ClientHandleUnignore
'//  Purpose:	Client-side method to handle un-ignoring an avatar; 
'//				restores the unignored avatar's normal bodypart colors
'//				and fires an event on both the ignoring and ignored clients. 
'//				To colorize the body parts locally we do not set color properties, we modify the
'//				colors at the frame level on the local client only.
'//  Arguments: AvatarIgnoring: the avatar who has removed "this" avatar from their ignoring list;
'//				we only want to take action if AvatarIgnoring = the current user.
'//  Called by:	avatar_ServerHandleUnIgnore
'////////////////////////////////////////////////////////////////////////
sub avatar_ClientHandleUnignore (AvatarIgnoring)
	if this is world.user then		
		world.fireuievent AvatarIgnoring, "UnignoredByUser", array(0)
	else
		if world.user is avatarignoring then
			if this.IsValidProperty("IsConnected") then
				dim red, green, blue
		
				red = (this.hair.color MOD 256) / 255
				green = ((this.hair.color MOD 65536) - (this.hair.color MOD 256)) / 65535
				blue = (this.hair.color - (this.hair.color MOD 65536)) / 16777215
				this.hair.GetGeometryFrame.SetMeshColor -1, red, green, blue 
		
				red = (this.skin.color MOD 256) / 255
				green = ((this.skin.color MOD 65536) - (this.skin.color MOD 256)) / 65535
				blue = (this.skin.color - (this.skin.color MOD 65536)) / 16777215
				this.skin.GetGeometryFrame.SetMeshColor -1, red, green, blue 
				
				red = (this.shirt.color MOD 256) / 255
				green = ((this.shirt.color MOD 65536) - (this.shirt.color MOD 256)) / 65535
				blue = (this.shirt.color - (this.shoes.color MOD 65536)) / 16777215
				this.shirt.GetGeometryFrame.SetMeshColor -1, red, green, blue 
				
				red = (this.pants.color MOD 256) / 255
				green = ((this.pants.color MOD 65536) - (this.pants.color MOD 256)) / 65535
				blue = (this.pants.color - (this.pants.color MOD 65536)) / 16777215
				this.pants.GetGeometryFrame.SetMeshColor -1, red, green, blue 
				
				red = (this.shoes.color MOD 256) / 255
				green = ((this.shoes.color MOD 65536) - (this.shoes.color MOD 256)) / 65535
				blue = (this.shoes.color - (this.shoes.color MOD 65536)) / 16777215
				this.shoes.GetGeometryFrame.SetMeshColor -1, red, green, blue 
			end if
			world.fireuievent this, "UnignoredUser", array(0)
		end if
	end if
end sub


'///////////////////////////////////////////////////////////////////////////////////////
'//
'//		The friend methods illustrate a more complex series of client/server interactions
'//		whereby one user makes an request that remains pending until another user responds.
'//		Basically one user invites another to become a friend; the request stays pending
'//		until the second user responds, or until either user disconnects. The second user 
'//		is initially added to the FriendsPending list in the first user's avatar profile,  
'//		and is moved to the Friends list if they agree.
'//
'//		1.	User A clicks on the Make Friend menu option on avatar B, which runs the client-side
'//			method B.MakeFriend. Note that this method runs only on the copy of avatar B that is
'//			on user A's machine.
'//		2.	MakeFriend calls a built-in server-side method, A.BefriendAvatar, passing it a 
'//			pointer to avatar B.
'//	 	3.	BefriendAvatar adds avatar B to the "FriendsPending" list in avatar A's profile,
'//			and calls a built-in client-side method, B.ConfirmFriend, passing it a pointer to
'//			avatar A.
'//		4.	The client-side ConfirmFriend method runs on all clients because it was called by
'//			the server. If the user's avatar is avatar B (the requestee), ConfirmFriend fires
'//			a UI event to tell the UI to ask the user to respond to the request. 
'//			In this case the UI event is "ReceiveFriendRequest" and the UI component that 
'//			handles it is chatBox.htm, which opens a dialog called FriendRequest.htm
'//		5.	When avatar B's user responds to the dialog, FriendRequest.htm calls a built-in 
'//			server-side method A.FinalizeFriend, passing it user B's response. If the response
'//			is TRUE, FinalizeFriend adds avatar B to the Friends list in avatar A's profile,
'//			and in any case removes B from A's FriendsPending list. 
'//		6.	FriendRequest.htm also calls a server side method A.NotifyFriend, passing it 
'//			pointers to the user and the avatar B. The server-side method calls another client-side
'//			method A.ClientNotifyFriend, which runs on all clients. ClientNotifyFriend checks if
'//			the user's avatar is either A or B, and fires an appropriate UI event to tell the 
'//			user what happened.
'//		7.	When a user disconnects, VWorlds fires a UI event called "LeaveWorld" on all clients.
'//			In this sample the main UI page client.htm calls ClientCancelFriendPending to cancel 
'//			any pending friend request from the user's avatar to the departing avatar. 
'//			ClientCancelFriendPending runs locally on each client that calls it. 
'//			This client-side method could have been invoked by a server-side method as in the 
'//			case of ClientNotifyFriend, but using the automatically fired LeaveWorld UI event 
'//			requires no additional network traffic.
'//
'///////////////////////////////////////////////////////////////////////////////////////

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_MakeFriend
'//  Purpose:	Client-side method called when the user selects "Make Friend" on this avatar's menu.
'//  Arguments: none. 
'////////////////////////////////////////////////////////////////////////
sub avatar_MakeFriend
	' Notify the UI that the user made a friendship request. This is to ensure that the
	' UI knows when this method is invoked through the right-click menu in the 3d renderer.
	world.fireuievent this, "MakeFriendRequest", array(0)
	
	' BefriendAvatar is an undocumented built-in method that adds the avatar to the FriendsPending
	' list in the user's avatar profile, and calls the requestee avatar's ConfirmFriend method
	' (see below).
	world.user.BefriendAvatar this
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_serverNotifyFriend
'//  Purpose:	Server-side method called by the UI when someone responds to a friendship
'//				request from this avatar. Calls the client-side method avatar_clientNotifyFriend,
'//				which runs on all clients.
'//				This is a good example of how a server-side method invokes a client-side method 
'//				on all clients, and the individual clients decide whether it concerns them.
'//  Arguments: RespondingAvatar: the avatar accepting or rejecting a friendship request
'//				bAccepted: true = accepted, false = rejected 
'//  Called by:	FriendRequest.htm:ReplyToFriendRequest
'////////////////////////////////////////////////////////////////////////
sub avatar_serverNotifyFriend (RespondingAvatar,bAccepted)	
	this.ClientNotifyFriend RespondingAvatar,bAccepted
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_ConfirmFriend
'//  Purpose:	Client-side method to ask for a response to a friendship request;
'//				the requesting avatar's BefriendAvatar method calls this method
'//				on the target avatar whose friendship is being requested.
'//  Arguments: RequestingAvatar: the avatar making a friendship request
'//  Called by:	BefriendAvatar (built-in avatar method)
'////////////////////////////////////////////////////////////////////////
sub avatar_ConfirmFriend(RequestingAvatar)
	' When this method is called on the user's avatar it fires a UI event, otherwise
	' it does nothing. The UI will ask the user to accept or reject the request,
	' and will call a built-in Avatar method called FinalizeFriend on the requesting avatar.
	' [FinalizeFriend is an undocumented method which moves the responder from the 
	' requester's FriendsPending list to their Friends list in the avatar profile.]
	'
	' Note: For UI events that need no additional arguments, a standard practice
	' throughout this sample is to use array(0) as the third argument of FireUIEvent.
	if this is world.user then
		world.fireuievent RequestingAvatar, "ReceiveFriendRequest", array(0)
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_clientNotifyFriend
'//  Purpose:	Client-side method called by the server-side method avatar_serverNotifyFriend
'//				when someone responds to a friendship request from this avatar. 
'//				Fires a UI event if the user's avatar is the requester or the responder,
'//				otherwise does nothing.
'//				This is a good example of how a server-side method invokes a client-side method 
'//				on all clients, and the individual clients decide whether it concerns them.
'//  Arguments: RespondingAvatar: the avatar accepting or rejecting the request
'//				bAccepted: true = accepted, false = rejected 
'////////////////////////////////////////////////////////////////////////
sub avatar_clientNotifyFriend(RespondingAvatar,bAccepted)
	dim menuItem
	if this is world.user then
		' the user is the requester
		world.fireuievent RespondingAvatar, "FriendRequestReturned" , array(bAccepted)
	elseif RespondingAvatar is world.user then
		' the user is the responder
		world.fireuievent this, "FriendRequestVerify", array(bAccepted)
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_clientCancelFriendPending
'//  Purpose:	Remove avatarToCancel from this avatar's FriendsPending list, thus cancelling any
'//				pending friendship request made by this avatar which avatarToCancel has not answered.
'//				If we did not do this, an avatar who disconnected without responding to a request
'//				would remain in the requester's FriendsPending list permanently, preventing
'//				future requests.
'//				This method is only called by client.htm on the user's avatar.
'//  Arguments: avatarToCancel
'////////////////////////////////////////////////////////////////////////
sub avatar_clientCancelFriendPending (avatarToCancel)
	dim avList, avObj
	' remove avatarToCancel from the FriendsPending list in this avatar's profile;
	' first make sure the FriendsPending list exists and is available.
	if world.user.profile.isValid("FriendsPending") then
		set avList = world.user.profile.keyvalue("FriendsPending")
		if avList.count > 0 then
			for each avObj in avList
				if avatarToCancel is avObj then
					avList.Remove avObj
					world.user.profile.keyValue("FriendsPending") = avList
					' notify the user we cancelled the request
					world.fireUIEvent avatarToCancel, "FriendRequestCancelled", array(this)
					exit sub
				end if
			next
		end if
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_UnMakeFriend
'//  Purpose:	Client-side method called when the user selects Undo Friend on an avatar's menu.
'//				The processing of UnMakeFriend is simpler than MakeFriend, and is more similar
'//				to UnIgnore (see above).
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub avatar_UnMakeFriend
	' When the user selects "Undo Friend" on this avatar's menu, this method calls the
	' user's UnBefriendAvatar method, a built-in method that removes an avatar from the
	' Friends list in the user's avatar profile.
	world.user.unbefriendavatar this
	' Notify the removed avatar
	this.clientNotifyRemovedFriend world.user
	' Notify the UI
	world.fireUIEvent this, "YouRemovedFriend", array(0)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_ClientNotifyRemovedFriend
'//  Purpose:	Client-side method called by avatarUnmakeFriend when the avatar 
'//				has been removed from someone's friend list.
'//  Arguments: avRemover: the avatar that removed this avatar from their friend list
'////////////////////////////////////////////////////////////////////////
sub avatar_ClientNotifyRemovedFriend (avRemover)
	' Notify the user that they have been removed from avRemover's friend list.
	' This method runs on all clients, but is only relevant if the user is the one who was removed.
	if this is world.user then
		world.FireUIEvent avRemover, "NotifyRemovedFriend", array(0)
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_whisper
'//  Purpose:	Client-side method to tell the UI to open a whisper dialog to this avatar.
'//				Called when the user selects "Whisper" on this avatar's menu.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub avatar_whisper
	world.FireUIEvent this, "WhisperTo", this
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_viewWebPage
'//  Purpose:	Client-side method called when the user selects "View Web Page" on this avatar's menu;
'//				tells the UI to display this avatar's web page.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub avatar_viewWebPage
	world.FireUIEvent this, "ViewUserWebPage", array(this.id)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_sendNote
'//  Purpose:	Client-side method called when the user selects "Send Note" on this avatar's menu;
'//				tells the UI to display a note editor page.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub avatar_sendNote	
	' Tell the UI to display the web page for composing notes
	world.fireuievent world.user, "SendNote" , array(this.id)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_receiveNote
'//  Purpose:	Server-side method called by the UI on the avatar to whom the note is to be sent;
'//				this avatar uses the passed arguments to create the actual note object. 
'//				This avatar thereby owns the note object and will be able to delete it later.
'//  Arguments: objectName: the name of the note object (always = "Note" in this sample world)
'//				senderName: the name of the avatar that sent the note
'//				msgText: the text of the note
'//				stationery: string identifying the stationery for the note; 
'//					can be used by the UI to determine background image, font, etc.
'//  Called by:	noteSend.htm:SendNote
'////////////////////////////////////////////////////////////////////////
sub avatar_receiveNote (objectName, senderName, msgText, stationery)
	' (server-side)
	' The recipient creates the note object so the recipient will be able to destroy it.
	' Creating the object fires the UI event "OnEnterInventory"
	dim note, noteExemp, today, avSender
	set note = world.CreateInstance (objectName, "noteexemplar", this.container)
	' set note.date as yyyymmddhhmm
	today = now
	note.date = string(4-len(Year(today)),"0") & Year(today) & string(2-len(Month(today)),"0") & Month(today) & string(2-len(Day(today)),"0") & Day(today) & string(2-len(Hour(today)),"0") & Hour(today) & string(2-len(Minute(today)),"0") & Minute(today) & string(2-len(Second(today)),"0") & Second(today)
	note.from = senderName
	note.message = msgText
	note.showPage = "ShowNote.htm"
	note.displayName = "Note"
	note.stationery = stationery
	note.moveInto this
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_makeGift
'//  Purpose:	Server-side method called by the UI on an avatar to whom a gift is being sent; 
'//				the receiving avatar creates an instance of a gift object. 
'//				Since the receiving avatar owns that gift object, that avatar will be able to delete it.
'//				The gift itself is a composition of images with individual x,y positions, meant to be displayed
'//				on a web page. There is also a generic graphic to represent the gift in the 3d renderer.
'//  Arguments: objectName: the name of the gift object ("Bouquest of flowers", etc)
'//				showPage: the URL of a web page to display a gift of this type
'//				senderName: the name of the avatar that sent the gift
'//				msgText: the text accompanying the gift, like a gift card in the real world
'//				graphicList: property list containing URLs of images that compose the gift 
'//				posXList: property list containing x positions of the images 
'//				posYList: property list containing y positions of the images
'//				inworldGraphic: URL of a graphic to represent the gift in the world renderer
'//  Called by:	CartBalloons.htm:SendGift
'//				CartFlowers.htm:SendGift
'////////////////////////////////////////////////////////////////////////
sub avatar_makeGift (objectName, showPage, senderName, msgText, graphicList, posXList, posYList, inworldGraphic)
	dim gift, item, giftExemp, today
	' The recipient creates the gift object so the recipient will be allowed to destroy it later.
	set gift = world.CreateInstance (objectName, "giftexemplar", this.container)
	gift.scale.set 0.25, 0.25, 0.25
	' set gift.date as yyyymmddhhmm
	today = now
	gift.date = string(4-len(Year(today)),"0") & Year(today) & string(2-len(Month(today)),"0") & Month(today) & string(2-len(Day(today)),"0") & Day(today) & string(2-len(Hour(today)),"0") & Hour(today) & string(2-len(Minute(today)),"0") & Minute(today) & string(2-len(Second(today)),"0") & Second(today)
	gift.from = senderName
	gift.message = msgText
	gift.showPage = showPage
	gift.displayName = "Gift"
	gift.HTMLgraphics = graphicList
	gift.HTMLposX = posXList
	gift.HTMLposY = posYList
	gift.moveInto this
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_approach
'//  Purpose:	Method called when the user selects "Approach" on an avatar's menu.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub avatar_approach
	world.user.approachAnother this
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_approachAnother
'//  Purpose:	Approach this avatar to another avatar, using auto-navigation if necessary
'//				to first move to the same area of the world as the target avatar.
'//  Arguments: avToApproach: the avatar which this avatar is approaching.
'//  Called by:	chatHistory.htm:ApproachAvatar
'//				area_module.vbs:path_move
'//				avatar_module.vbs:avatar_approach
'////////////////////////////////////////////////////////////////////////
sub avatar_approachAnother (avToApproach)
	' The reason for using auto-navigation to get to the same area as the target avatar is to
	' prevent the avatar from walking through walls; the Approach method disregards boundaries.
	' When auto-navigation to the target area is complete it will call back this method back.
	' When this avatar and the target avatar are in the same area, the Approach method is used.
	if this.from = avToApproach.from then
		if this.viewType = "inworld" then
			' we are inworld so just approach the person
			set this.avApproaching = Nothing
			this.approach avToApproach
		else
			' we are in overview so fly down first
			set this.avApproaching = avToApproach
			world.user.camerahelper.flyin_start
		end if
	else
		' Use auto-navigation to go where the other avatar is;
		' first store avToApproach so auto-navigation can call back when we get there.
		set this.avApproaching = avToApproach
		this.path_start avToApproach.from
	end if
end sub


'////////////////////////////////////////////////////////////////////////
'//
'//  The "Check..." methods are invoked by the VWorlds menu system
'//  to determine whether or not menu items should be displayed.
'//  Each menu item can have a check method assigned to it.
'//
'////////////////////////////////////////////////////////////////////////


'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_CheckMakeFriend
'//  Purpose:	Determine if the "Make a Friend" item should on the avatar's menu.
'//  Arguments: MenuItem: menu item object for "Make a Friend"
'////////////////////////////////////////////////////////////////////////
sub	avatar_CheckMakeFriend (MenuItem)
	' This = either an avatar or a body part.
	' Avatars in this sample world are not directly clickable, only their bodyparts are.
	dim avList, avatar, avObj
	if this.exemplar.name = "bodyPart_Exemplar" then
		' this is a bodypart the user right-clicked on, so display its avatar's menu
		set avatar = this.container
	else
		' this is an avatar whose menu the UI programmatically asked for
		set avatar = this
	end if
	if avatar is world.user then
		' can't make yourself a friend
		menuItem.Flags = World.MI_INVISIBLE
		exit sub
	elseif avatar.IsValidProperty("IsConnected") then
		'do not display Make a Friend if this avatar is on the user's list of pending friends
		if world.user.profile.isValid("FriendsPending") then
			set avList = world.user.profile.keyvalue("FriendsPending")
			for each avObj in avList
				if avObj is avatar then
					menuItem.Flags = World.MI_INVISIBLE
					exit sub
				end if
			next
		end if

		'do not display if we are in the user's list of friends...
		set avList = world.user.profile.keyvalue("Friends")
		for each avObj in avList
			if avObj is avatar then
				menuItem.Flags = World.MI_INVISIBLE
				exit sub
			end if
		next

		' do not display if the user is on the avatar's ignored list;
		' i.e. you cannot make a friend request to a person who is ignoring you.
		if avatar.profile.isValid("customIgnoreList") then
			set avList = avatar.profile.keyvalue("customIgnoreList")
			for each avObj in avList
				if avObj is world.user then
					menuItem.Flags = World.MI_INVISIBLE
					exit sub
				end if
			next
		end if

		' If we didn't make it invisible and exit, make it visible
		menuItem.Flags = World.MI_DEFAULT
		
		' Finally, do not allow Make Friend with someone who is being ignored
		avatar.CheckIgnore (menuItem)
	else
		' avatar is not connected; cannot be made a friend
		menuItem.Flags = World.MI_INVISIBLE
	end if

end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_CheckUndoFriend
'//  Purpose:	Determine if the "Undo Friend" item should on the avatar's menu.
'//  Arguments: MenuItem: menu item object for "Undo Friend"
'////////////////////////////////////////////////////////////////////////
sub avatar_CheckUndoFriend (menuItem)
	dim avList, avatar, avObj
	if this.exemplar.name = "bodyPart_Exemplar" then
		' this is a bodypart the user right-clicked on, so display its avatar's menu
		set avatar = this.container
	else
		' this is an avatar whose menu the UI programmatically asked for
		set avatar = this
	end if
	
	if avatar is world.user then
		' can't make yourself a friend
		menuItem.Flags = World.MI_INVISIBLE
	else
		'see if the avatar is in the user's friend list
		set avList = world.user.profile.keyvalue("Friends")
		for each avObj in avList
			if avObj is avatar then
				menuItem.Flags = World.MI_DEFAULT
				exit sub
			end if
		next
		menuItem.Flags = World.MI_INVISIBLE
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_CheckWhisper
'//  Purpose:	Determine if the "Whisper" item should on the avatar's menu.
'//  Arguments: MenuItem: menu item object for "Whisper"
'////////////////////////////////////////////////////////////////////////
sub avatar_CheckWhisper (menuItem)
	dim avList, avatar, avObj
	if this.exemplar.name = "bodyPart_Exemplar" then
		' this is a bodypart the user right-clicked on, so display its avatar's menu
		set avatar = this.container
	else
		' this is an avatar whose menu the UI programmatically asked for
		set avatar = this
	end if

	if avatar is world.user then
		' can't whisper to yourself
		menuItem.Flags = World.MI_INVISIBLE
	elseif avatar.isvalidproperty("IsConnected") then
		if avatar.IsConnected = true then
			menuItem.Flags = World.MI_DEFAULT
		else
			menuItem.Flags = World.MI_INVISIBLE
		end if
	else
		menuItem.Flags = World.MI_INVISIBLE
	end if

	' do not display if the user is on the avatar's ignore list
	if avatar.profile.isValid("customIgnoreList") then
		set avList = avatar.profile.keyvalue("customIgnoreList")
		for each avObj in avList
			if avObj is world.user then
				menuItem.Flags = World.MI_INVISIBLE
				exit sub
			end if
		next
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_CheckViewWebPage
'//  Purpose:	Determine if the "View Web Page" item should on the avatar's menu.
'//  Arguments: MenuItem: menu item object for "View Web Page"
'////////////////////////////////////////////////////////////////////////
sub avatar_CheckViewWebPage (MenuItem)
	' Determine if we should display the menu item
	dim avList, avatar, avObj
	if this.exemplar.name = "bodyPart_Exemplar" then
		' this is a bodypart the user right-clicked on, so display its avatar's menu
		set avatar = this.container
	else
		' this is an avatar whose menu the UI programmatically asked for
		set avatar = this
	end if

	' do not display if the user is on the avatar's ignore list
	if avatar.profile.isValid("customIgnoreList") then
		set avList = avatar.profile.keyvalue("customIgnoreList")
		for each avObj in avList
			if avObj is world.user then
				menuItem.Flags = World.MI_INVISIBLE
				exit sub
			end if
		next
	end if

	menuItem.Flags = World.MI_DEFAULT
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_CheckSendNote
'//  Purpose:	Determine if the "Send Note" item should on the avatar's menu.
'//  Arguments: MenuItem: menu item object for "Send Note"
'////////////////////////////////////////////////////////////////////////
sub avatar_CheckSendNote (MenuItem)
	' Determine if we should display the menu item
	dim avList, avatar, avObj
	if this.exemplar.name = "bodyPart_Exemplar" then
		' this is a bodypart the user right-clicked on, so display its avatar's menu
		set avatar = this.container
	else
		' this is an avatar whose menu the UI programmatically asked for
		set avatar = this
	end if

	' do not display if the user is on the avatar's ignore list
	if avatar.profile.isValid("customIgnoreList") then
		set avList = avatar.profile.keyvalue("customIgnoreList")
		for each avObj in avList
			if avObj is world.user then
				menuItem.Flags = World.MI_INVISIBLE
				exit sub
			end if
		next
	end if

	menuItem.Flags = World.MI_DEFAULT
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_CheckApproach
'//  Purpose:	Determine if the "Approach" item should on the avatar's menu.
'//  Arguments: MenuItem: menu item object for "Approach"
'////////////////////////////////////////////////////////////////////////
sub avatar_CheckApproach (menuItem)
' world.trace "avatar_CheckApproach"
	dim avList, avatar
	if this.exemplar.name = "bodyPart_Exemplar" then
		' this is a bodypart the user right-clicked on, so display its avatar's menu
		set avatar = this.container
	else
		' this is an avatar whose menu the UI programmatically asked for
		set avatar = this
	end if

	if avatar is world.user then
		' can't approach yourself
		menuItem.Flags = World.MI_INVISIBLE
	elseif avatar.isvalidproperty("IsConnected") then
		if avatar.IsConnected = true then
			menuItem.Flags = World.MI_DEFAULT
		else
			menuItem.Flags = World.MI_INVISIBLE
		end if
	else
		menuItem.Flags = World.MI_INVISIBLE
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_CheckIgnore
'//  Purpose:	Determine if the "Ignore" item should on the avatar's menu.
'//  Arguments: MenuItem: menu item object for "Ignore"
'////////////////////////////////////////////////////////////////////////
sub avatar_CheckIgnore (menuItem)
' world.trace "avatar_CheckIgnore"
	dim avList, avatar, avObj
	if this.exemplar.name = "bodyPart_Exemplar" then
		' this is a bodypart the user right-clicked on, so display its avatar's menu
		set avatar = this.container
	else
		' this is an avatar whose menu the UI programmatically asked for
		set avatar = this
	end if

	if avatar is world.user then
		' can't ignore or unignore yourself
		menuItem.Flags = World.MI_INVISIBLE
	else
		'see if they are in the user's list of ignores...
		set avList = world.user.profile.keyvalue("customIgnoreList")
		for each avObj in avList
			if avObj is avatar then
				menuItem.Flags = World.MI_INVISIBLE
				exit sub
			end if
		next
		menuItem.Flags = World.MI_DEFAULT
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_CheckUnIgnore
'//  Purpose:	Determine if the "UnIgnore" item should on the avatar's menu.
'//  Arguments: MenuItem: menu item object for "UnIgnore"
'////////////////////////////////////////////////////////////////////////
sub avatar_CheckUnIgnore (menuItem)
' world.trace "avatar_CheckUnIgnore"
	dim avList, avatar, avObj
	if this.exemplar.name = "bodyPart_Exemplar" then
		' this is a bodypart the user right-clicked on, so display its avatar's menu
		set avatar = this.container
	else
		' this is an avatar whose menu the UI programmatically asked for
		set avatar = this
	end if

	if avatar is world.user then
		' can't ignore or unignore yourself
		menuItem.Flags = World.MI_INVISIBLE
	else
		'see if the avatar is on the user's ignore list
		set avList = world.user.profile.keyvalue("customIgnoreList")
		for each avObj in avList
			if avObj is avatar then
				menuItem.Flags = World.MI_DEFAULT
				exit sub
			end if
		next
		menuItem.Flags = World.MI_INVISIBLE
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_OnConnect
'//  Purpose:	Handles the OnConnect method for the avatar object.
'//				Moves the avatar's bodyparts into the avatar's contents and initializes
'//				the inner camera. In essence each avatar in this sample world is an
'//				invisible object carrying a bunch of bodypart objects. In order to make
'//				the bodyparts visible the avatar is an open container.
'//  Arguments: who: the avatar connecting.
'//
'//  Note: Moving the bodyparts into the avatar's contents is really only necessary
'//		on the initial connect, because avatar contents persist between sessions.
'////////////////////////////////////////////////////////////////////////
sub avatar_OnConnect (who)
	dim pos,dir
	dim profileCopy, ignoreList

	this.hair.moveinto this
	this.skin.moveinto this
	this.shirt.moveinto this
	this.pants.moveinto this
	this.shoes.moveinto this
	this.graphic.moveinto this
	this.mood.moveinto this
	if this.mood.CurrentMood <> 0 then this.mood.CurrentMood = 0
	this.IsContentsVisible = true
	this.from = world.global.entryArea

	set pos = this.icam.pos.property(CStr(this.icam.shot))
	set dir = this.icam.dir.property(CStr(this.icam.shot))
	this.icam.position.set pos.x,pos.y,pos.z
	this.icam.direction.set dir.x,dir.y,dir.z
	this.icam.moveinto this
	this.cameraHelper = world.global.camera_helper

	this.InvokeSuperMethod (array(who))
	this.geometryName = ""

end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_OnDisconnect
'//  Purpose:	Handles the OnDisconnect method for the avatar object;
'//				makes the avatar's contents invisible.
'//  Arguments: who: the avatar connecting.
'////////////////////////////////////////////////////////////////////////
sub avatar_OnDisconnect (who)
	' Do normal disconnect processing
	this.InvokeSuperMethod (array(who))
	' Make the avatar's bodyparts invisible or they will continue to be seen after the avatar leaves.
	this.IsContentsVisible = false
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_OnLoadGeometry
'//  Purpose:	Handles the OnLoadGeometry method for the avatar object.
'//				In this sample world the avatar objects themselves have no graphics; they are 
'//				represented visually by a group of bodypart objects in the avatar's contents. 
'//				For the bodyparts to be visible the avatar must be an open container, and the
'//				avatar itself must be visible. If no graphics are specified for an avatar,
'//				VWorlds assigns a default graphic (the mannequin body). To avoid displaying
'//				this graphic, it is necessary to delete all the avatar's graphics frames.
'//  Arguments: frame: the new frame containing the avatar's geometry
'////////////////////////////////////////////////////////////////////////
sub avatar_OnLoadGeometry (frame)
	dim mframe,  flist, aflist
	this.InvokeSuperMethod (array(frame))
	set mframe = this.getframe
	if not (mFrame is Nothing) then
		' delete all of the avatar's graphics frames to prevent displaying the default body
		set flist = mframe.getchildren
		if flist.count > 0 then 
			set aflist = flist.property(0).getchildren
			if aflist.count > 0 then
				flist.property(0).deletechild aflist.property(0)
				mframe.deletechild flist.property(0)
			end if
		end if
	end if
		
	' initialize client-side animations
	if (this is world.user) and (user.container.name = "Lobby Room") then this.container.initAnimations

	' Hide the avatar's name label. The reason for this is that VWorlds automatically positions
	' the avatar name label above the avatar's head based on the height of the avatar graphics.
	' The label position cannot be set programmatically. Avatars in this sample world have no 
	' graphics, so the label floats about waist-high. To hide this label it is blanked here.
	' In bodyPart_OnLoadGeometry the Hair object is given its own label, which floats above
	' the avatar's head.
	this.label = " "
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_setPartName
'//  Purpose:	Change the name of a bodypart to the avatar's name, for tooltips.
'//  Arguments: bodypart: the bodypart object
'//	 Called by: avatar_module.vbs:bodyPart_onCreate
'//				avatar_module.vbs:moodPart_onCreate
'////////////////////////////////////////////////////////////////////////
sub avatar_setPartName (bodypart)
' Avatar body parts are renamed to the avatar's name so that when the user hovers the mouse
' over a body part the tooltip displays the avatar's name rather than the bodypart name.
' The actual bodypart name is stored in the partName property.
	bodypart.partName = bodypart.name
	bodypart.name = this.name 
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		innerCamera_OnCreate
'//  Purpose:	Initialize and position the inner camera object with no graphics
'//  Arguments: cameraObject: the inner camera object
'////////////////////////////////////////////////////////////////////////
sub innerCamera_OnCreate (cameraObject)
	' the innerCamera object provides the 3d renderer with a point of view for displaying the world.
	this.InitializeGraphics "", 0.0, 0.0, 0.0, 0.0, 0.0, 1.0
	this.InvokeSuperMethod(cameraObject)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		moodPart_OnCreate
'//  Purpose:	Initialize graphics and position the avatar's mood object
'//  Arguments: moodPart: the mood object, an object whose graphics show the avatar's mood
'//
'//		The moodpart is carried around in the avatar's contents, like bodyparts.
'////////////////////////////////////////////////////////////////////////
sub moodPart_OnCreate(moodPart)
	this.InitializeSpriteGraphics world.LobbyGraphicsPath & "moods.spr", 0.5,0.7,0.0,0.0,0.0,1.0
	this.scale.set 0.25,0.25,0.25
	this.InvokeSuperMethod(moodPart)
	this.owner.setPartName(this)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		moodPart_OnCurrentMoodChanged
'//  Purpose:	OnPropertyChanged event handler for the moodPart object's CurrentMood property;
'//				set the mood object's CurrentGesture property. which causes its graphic to change.
'//  Arguments: hint: required argument for all OnPropertyChanged methods; not used here
'//				hintData:  required argument for all OnPropertyChanged methods; not used here
'////////////////////////////////////////////////////////////////////////
sub moodPart_OnCurrentMoodChanged (hint, hintData)
	' The Hint argument indicates how the property changed. A value of 101 means the property
	' was modified, as opposed to added or removed. See the OnPropertyChanged topic in VWorlds
	' Help for more information about Hint and HintData and their possible values.
	if hint = 101 then
		this.geometry.CurrentGesture = this.currentMood
		this.InvokeSuperMethod(array(hint, hintData))
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_setAvatarModel
'//  Purpose:	Change bodypart graphics to a specified model.
'//  Arguments: modelName: a string used in sprite file names: "Sean", "Betty" etc
'//  Called by:	MyAppearance.htm:applyChanges
'////////////////////////////////////////////////////////////////////////
sub avatar_setAvatarModel (modelName)
	dim part,iSlash,iDot,n
	' To limit network traffic, we only change geometry if the model name has actually changed.
	' Bodypart geometry names end in "\" + modelName + one digit + ".spr", as in "Alice5.spr"
	' First we get the model name from the the hair bodypart, check it, and if the specified
	' modelName is different we change the geometry on all 5 bodyparts.

	set part = this.hair
	iSlash = instrRev(part.GeometryName, "\")
	iDot = instrRev(part.GeometryName, ".")

	if uCase(mid(part.GeometryName, iSlash + 1, iDot - iSlash - 2)) <> uCase(modelName) then
		for each part in this.contents
			if part.isValidProperty("partName") then
				n = world.global.bodyPartNames.find(part.partName)
				if n >= 0 then
					part.setGeometry world.global.avGraphicsPath & modelName & CStr(n+1) & ".spr"
				elseif part.Name = "graphic" then
					part.setGeometry world.global.avGraphicsPath & "graphic.spr"
				end if
			end if
		next
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		avatar_setBodyColors
'//  Purpose:	Set colorizing values for avatar bodypart objects, and set mood gesture value
'//  Arguments: rgbHair, rgbSkin, rgbShirt, rgbPants, rgbShoes: rgb value for Hair, skin, etc.
'//				mood: current gesture number for the avatar's mood object
'//  Called by:	MyAppearance.htm:applyChanges
'////////////////////////////////////////////////////////////////////////
sub avatar_setBodyColors (rgbHair, rgbSkin, rgbShirt, rgbPants, rgbShoes, mood)
	dim part
	set part = this.hair
	if part.color <> rgbHair then part.color = rgbHair
	set part = this.skin
	if part.color <> rgbSkin then part.color = rgbSkin
	set part = this.shirt
	if part.color <> rgbShirt then part.color = rgbShirt
	set part = this.pants
	if part.color <> rgbPants then part.color = rgbPants
	set part = this.shoes
	if part.color <> rgbShoes then part.color = rgbShoes
	set part = this.graphic
	if mood <> this.mood.CurrentMood then this.mood.CurrentMood = mood
	world.FireUIEvent this, "BodyColorsChanged", array(0)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bodyPart_OnCreate
'//  Purpose:	setup bodypart graphics, using a default avatar model based on gender
'//  Arguments: theThing: required argument, equal to the "this" object; not used
'////////////////////////////////////////////////////////////////////////
sub bodyPart_OnCreate(theThing)
' world.trace "bodyPart_OnCreate " & this.Name
	dim defaultModel
	if this.owner.profile.keyvalue("gender") = "female" then
		defaultModel = "betty"
	else
		defaultModel = "sean" 
	end if
	
	dim n
	n = world.global.bodyPartNames.find(this.name)
	if n >= 0 then
		' we found the body part name ("hair" etc.)
		this.InitializeSpriteGraphics world.global.avGraphicsPath & defaultModel & CStr(n+1) & ".spr", 0.0,0,0.0,0.0,0.0,1.0
		' default body part colors are every 5th item in each "ColorsXXXX" proplist in avatarModels 
		this.color = CLng(world.global.avatarModels.property("Colors" & defaultModel).property(n * 5))
	elseif this.Name = "graphic" then
		this.InitializeSpriteGraphics world.global.avGraphicsPath & "graphic.spr", 0.0,0,0.0,0.0,0.0,1.0
	end if
	' adjust the scale of some of the graphics; 
	' images not created to the same scale can be adjusted
	select case this.Name
		case "shoes"
			this.scale.set 0.5, 0.25, 0.5
			this.position.set 0.0, -0.75, 0.0	' could set in initializespritegraphics
		case "pants"
			this.scale.set 0.5, 1, 0.5
		case "hair"
			this.scale.set 0.5, 0.5, 0.5
			this.position.set 0.0, 0.5, 0.0
	end select
	this.InvokeSuperMethod(this)
	' Change the bodypart name to its owner avatar's name, to ensure that the tooltips
	' in the 3d renderer will say the avatar's name rather than "pants" etc.
	' [Note: because of this, bodyparts cannot be found by name using the findwithin method.]
	this.owner.setPartName(this)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bodyPart_UpdateOwnerNameOnMenu
'//  Purpose:	Set the text of the "UNKNOWN" item at the top of each bodypart object's right-click menu. 
'//				This menu item's only purpose is to put the avatar name on the menu.
'//				This method illustrates how to customize menu item text at runtime.
'//  Arguments: menuItem: the menu item object for the "UNKNOWN" bodypart menu item.
'////////////////////////////////////////////////////////////////////////
sub bodyPart_UpdateOwnerNameOnMenu (menuItem)
	menuItem.MenuText = this.container.name
	'if ignored, can check here!
	if this.container is world.user then
		menuItem.MenuText = menuItem.Menutext + " (you)"
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bodyPart_setGeometry
'//  Purpose:	Set the geometry name of a bodypart object; when the user changes avatar models 
'//				we must change the bodypart graphics accordingly; security does not permit the 
'//				avatar object to set the bodypart's geometryName property directly, so the avatar 
'//				calls this method.
'//  Arguments: geomName: the URL of a graphic file.
'//  Called by:	avatar_setAvatarModel
'////////////////////////////////////////////////////////////////////////
sub bodyPart_setGeometry (geomName)
	' the bodypart must change its own geometry because of security doesn't permit the avatar to do it
	this.GeometryName = geomName
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bodyPart_RefreshColors
'//  Purpose:	Client-side method to colorize a bodypart in the 3d renderer, by calling 
'//				SetMeshColor on the bodypart's geometry frame, using the bodypart.color property.
'//				if the avatar is being ignored by the user, colorize the bodyparts grey.
'//  Arguments: none
'//  Called by:	bodypart_onLoadGeometry
'//				bodypart_onColorChanged
'////////////////////////////////////////////////////////////////////////
sub bodyPart_RefreshColors
	'how we set colors depends on if this bodypart's container avatar is in the world user's ignored list
	dim ignoredlist
	dim icolor
	dim red, green, blue, geomFrame
	dim gFrame, avObj
	if not (this.container is world.user) then
		' gray the avatar if being ignored
		if world.user.profile.isValid("customIgnoreList") then
			set ignoredlist = world.user.profile.keyvalue("customIgnoreList")
			for each avObj in ignoredlist
				if avObj is this.container then
					'they are being ignored, so grey them out and exit the sub
					icolor = CLng(&HE0E0E0)
					red = (icolor MOD 256) / 255
					green = ((icolor MOD 65536) - (icolor MOD 256)) / 65535
					blue = (icolor - (icolor MOD 65536)) / 16777215
					this.GetGeometryFrame.SetMeshColor -1, red, green, blue 
					exit sub
				end if
			next
		end if
	end if

	red = (this.color MOD 256) / 255
	green = ((this.color MOD 65536) - (this.color MOD 256)) / 65535
	blue = (this.color - (this.color MOD 65536)) / 16777215

	set gFrame = this.GetGeometryFrame
	if not (gFrame is Nothing) then gFrame.SetMeshColor -1, red, green, blue 
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bodyPart_OnColorChanged
'//  Purpose:	OnPropertyChanged event handler for the bodypart.Color property;
'//				calls RefreshColors to colorize that bodypart in the 3d renderer.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub bodyPart_OnColorChanged (hint, hintData)
	this.RefreshColors
	this.InvokeSuperMethod(array(hint, hintData))
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		bodyPart_OnLoadGeometry
'//  Purpose:	OnLoadGeometry event handler for the bodypart object;
'//				calls RefreshColors to colorize that bodypart in the 3d renderer,
'//				and adds an overhead label to the "hair" bodypart.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub bodyPart_OnLoadGeometry (frame)
'	Each body part colorizes itself
	this.RefreshColors
	this.InvokeSuperMethod(frame)
	if this.partName = "hair" then
		this.label = this.name
'		the following code would set the user's name label color to a preset color (in this case white):
'		if this.container is world.user then this.labelFontColor = world.createVector(1,1,1)
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//
'//		Bodypart menu item methods
'//
'//		These bodypart menu methods simply call the corresponding methods on their container,
'//		which is always an avatar. These methods are necessary because in this sample world
'//		the avatar object has no geometry of its own, and is therefore not clickable.
'//	
'////////////////////////////////////////////////////////////////////////

sub bodyPart_OwnerProfile
	this.container.New_Profile
end sub

sub bodypart_OwnerMakeFriend
	this.container.New_MakeFriend
end sub

sub bodypart_OwnerUndoFriend
	this.container.New_UndoFriend
end sub

sub bodypart_OwnerIgnore
	this.container.New_Ignore
end sub

sub bodypart_OwnerUnIgnore
	this.container.New_UnIgnore
end sub

sub bodypart_OwnerWhisper
	this.container.New_Whisper
end sub

sub bodypart_OwnerViewWebPage
	this.container.ViewWebPage
end sub

sub bodypart_OwnerSendNote
	this.container.SendNote
end sub

sub bodypart_OwnerApproach
	this.container.New_Approach
end sub

