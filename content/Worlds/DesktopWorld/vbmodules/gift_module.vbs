'////////////////////////////////////////////////////////////////////////
'//  File:		gift_module.vbs
'//  Purpose:	Methods for gifts and notes
'//				Avatars in this sample world can send each other gifts of flowers and balloons.
'//				The receiving avatar actually creates the gift object;
'//				the sending avatar merely sends specifications.
'////////////////////////////////////////////////////////////////////////
option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		gift_onCreate
'//  Purpose:	Handler for the OnCreate event on a Gift object.
'//				Initializes the gift object's in-world graphics.
'//				Note: Graphics are initialized here rather than in the avatar_makeGift method
'//				because of security; an object's graphics can be initialized only by a wizard
'//				or by the object itself. The OnCreate method is a convenient place to do it.
'//  Arguments: theThing: the gift object
'////////////////////////////////////////////////////////////////////////
sub gift_onCreate (theThing)
	dim nameSplit, filename
	nameSplit = split(this.name)
	filename = world.lobbyGraphicsPath & "gift_" & nameSplit(2) & ".gif"
	this.InitializeSpriteGraphics filename, -0.25, 0.15, 0.1, 0, 0, 1
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		gift_Destroy
'//  Purpose:	Client-side method called when the user selects the gift's "Destroy" menu item
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub gift_Destroy
	world.destroyObject this
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		gift_Hold
'//  Purpose:	Client-side method called when the user selects the gift's "Hold" menu item
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub gift_Hold
	dim obj
	' put away any other held gifts first
	for each obj in this.container.contents
		if obj.isOfType("giftexemplar") and obj.isVisible then obj.UnHold
	next
	this.isvisible = true
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		gift_UnHold
'//  Purpose:	Client-side method called when the user selects the gift's "UnHold" menu item
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub gift_UnHold
	this.isVisible = false
end sub

'////////////////////////////////////////////////////////////////////////
'//
'//  The "Check..." methods are invoked by the VWorlds menu system
'//  to determine whether or not menu items should be displayed.
'//  Each menu item can have a check method assigned to it.
'//
'////////////////////////////////////////////////////////////////////////

'////////////////////////////////////////////////////////////////////////
'//  Sub:		gift_checkDestroy
'//  Purpose:	Determine if the "Throw Away" menuitem should appear
'//  Arguments: menuItem: the "Throw Away" menuitem object
'////////////////////////////////////////////////////////////////////////
sub gift_checkDestroy (menuItem)
	if this.container is world.user then
		menuItem.Flags = World.MI_DEFAULT
	else
		menuItem.Flags = World.MI_INVISIBLE
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		gift_checkHold
'//  Purpose:	Determine if the "Hold" menuitem should appear
'//  Arguments: menuItem: the "Hold" menuitem object
'////////////////////////////////////////////////////////////////////////
sub gift_checkHold (menuItem)
	if this.container is world.user then
		if this.isvisible = true then
			menuItem.Flags = World.MI_INVISIBLE
		else
			menuItem.Flags = World.MI_DEFAULT
		end if
	else
		menuItem.Flags = World.MI_INVISIBLE
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		gift_checkUnHold
'//  Purpose:	Determine if the "UnHold" menuitem should appear
'//  Arguments: menuItem: the "UnHold" menuitem object
'////////////////////////////////////////////////////////////////////////
sub gift_checkUnHold (menuItem)
	if this.container is world.user then
		if this.isvisible then
			menuItem.Flags = World.MI_DEFAULT
		else
			menuItem.Flags = World.MI_INVISIBLE
		end if
	else
		menuItem.Flags = World.MI_INVISIBLE
	end if
end sub

dim atCart		' the name of the cart object the user is currently interacting with
atCart = ""

'////////////////////////////////////////////////////////////////////////
'//  Sub:		cart_enable
'//  Purpose:	Set the atCart string = the name of this gift cart, to indicate that
'//				the user is interacting with this cart. Called by the gift editor pages
'//				when they open.
'//  Arguments: none
'//  Called by:	cartBalloons.htm:window_onLoad
'//				cartFlowers.htm:window_onLoad
'////////////////////////////////////////////////////////////////////////
sub cart_enable
	atCart = this.Name
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		cart_disable
'//  Purpose:	Clear the atCart string to indicate that the user is no longer
'//				interacting with this gift cart. Called by the gift editor pages
'//				when they close.
'//  Arguments: menuItem: the "Take" menuitem object
'//  Called by:	cartBalloons.htm:window_onUnLoad
'//				cartFlowers.htm:window_onUnLoad
'////////////////////////////////////////////////////////////////////////
sub cart_disable
	atCart = ""
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		cart_OnLButtonUp
'//  Purpose:	The OnLButtonUp event handler for cart objects;
'//				fire a UI event to display the gift editor web page for this cart
'//  Arguments: hwnd: window handle of the 3d renderer control
'//             x: mouse x coordinate in the renderer
'//             y: mouse y coordinate in the renderer
'////////////////////////////////////////////////////////////////////////
sub cart_OnLButtonUp (Window, x, y)
	world.FireUIEvent this, "SurfToSampleURL", array(this.editPage)
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		giftPiece_OnLButtonUp
'//  Purpose:	The OnLButtonUp event handler for giftPiece objects.
'//				The giftPiece object's container is presumed to be a gift cart. 
'//				If the cart name is the same as the global atCart value, then the user is already
'//				interacting with that cart, so tell the UI to add a piece to the current gift.
'//				Otherwise tell the UI to start a new gift by displaying the cart's editor page.
'//				Note: this is an example of making the actions of the UI and the world interdependent;
'//				when gift editor pages open they call the specified cart's cart_enable method to set
'//				atCart; when they close they call cart_disable to clear atCart.
'//  Arguments: hwnd: window handle of the 3d renderer control
'//             x: mouse x coordinate in the renderer
'//             y: mouse y coordinate in the renderer
'////////////////////////////////////////////////////////////////////////
sub giftPiece_OnLButtonUp (Window, x, y)
	if atCart = this.container.Name then
		world.FireUIEvent this, "AddGiftPiece", array()
	else
		world.FireUIEvent this, "SurfToSampleURL", array(this.container.editPage)
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		note_Destroy
'//  Purpose:	Client-side method that runs when the user selects a note's "Destroy" menu item
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub note_Destroy
	world.destroyObject this
end sub
