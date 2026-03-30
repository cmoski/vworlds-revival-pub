'////////////////////////////////////////////////////////////////////////
'//  File:		gadget_module.vbs
'//  Purpose:	Methods for gadget objects and chess pieces.
'//				A gadget is an object that displays a web page when clicked.
'//				Chess pieces are special gadgets that interact with the UI.
'////////////////////////////////////////////////////////////////////////
option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		gadget_onLButtonUp
'//  Purpose:	OnLButtonUp event handler for gadget objects;
'//				display a web page when the user clicks on the object
'//  Arguments: hwnd: window handle of the 3d renderer control
'//             x: mouse x coordinate in the renderer
'//             y: mouse y coordinate in the renderer
'////////////////////////////////////////////////////////////////////////
sub gadget_onLButtonUp (Window, x, y)
	this.InvokeSuperMethod(array(Window, x, y))
	if this.ClickURL <> "" then 
		if this.showSampleLinks then
			' show the URL as a sub-page within the SampleLinks page
			world.fireUIEvent world.user, "SurfToSampleURL", array(this.clickURL)	
		else
			' show the URL in the entire web pane
			world.fireUIEvent world.user, "SurfToURL", array(this.clickURL, this.clickWinName, this.clickWinTitle)
		end if
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		chessPiece_onPositionChanged
'//  Purpose:	OnPositionChanged event handler for chesspiece objects
'//  Arguments: hint: required argument, not used here
'//				hintData: required argument, not used here
'////////////////////////////////////////////////////////////////////////
sub chessPiece_onPositionChanged (hint, hintData)
	'dim px,py,pz, pmap
    'if isobject(this.getframe) then
	'	this.getframe.getposition this.container.getframe, px,py,pz
	'	set pmap = world.createpropertymap()
	'	pmap.property ("0") = world.createvector (px,py,pz)
	'	pmap.property ("1000") = world.createvector (this.position.x,this.position.y,this.position.z)
	'	this.startanimation "position" , pmap, , A_ONCE + A_LOCAL 
    'end if
	world.FireUIEvent this, "ChessPieceMoved", array(this.position.x, this.position.y, this.position.z, this.Mover)
	this.InvokeSuperMethod(array(hint, hintData))
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		chessPiece_setPosition
'//  Purpose:	Move a chessPiece object
'//  Arguments: numX,etc - the coordinate number
'//  Called by:	game_chess.htm:document_OnMouseUp
'//				game_chess.htm:SyncPieces
'//				game_chess.htm:ResetBoard
'////////////////////////////////////////////////////////////////////////
sub chessPiece_setPosition (numX,numY,numZ, strMover, bAnimate)
	this.mover = strMover
	this.position.set numX,numY,numZ
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		chessPiece_OnLoadGeometry
'//  Purpose:	OnLoadGeometry event handler for chessPiece objects;
'//				colorize the mesh of polygons that make up the object's geometry.
'//  Arguments: frame: the geometry frame of the chesspiece object
'////////////////////////////////////////////////////////////////////////
sub chessPiece_OnLoadGeometry (frame)
	this.InvokeSuperMethod(array(frame))
	dim colors, red, green, blue
	' The colors array contains RGB values for the white team and black teams.
	' White team RGB values are array elements 0,1,2 respectively;
	' black team RGB values are elements 3,4,5.
	' Note: these are mesh color values, which use the range 0 through 1 (not 0-255). 
	colors = array(0.939844, 0.25625, 0.304688, 0.261719, 0.578125, 0.926563)
	red = colors(this.team * 3)
	green = colors(this.team * 3 + 1)
	blue = colors(this.team * 3 + 2)
	if not (frame is Nothing) then 
		frame.SetMeshColor -1, red, green, blue 
		' the second argument is mesh number; 
		' a value of -1 applies the color settings to all meshes in the frame
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		contentArtifact_OnContainerChanged
'//  Purpose:	OnContainerChanged event handler for contentArtifact objects.
'//				Become invisible when carried by an avatar, otherwise become visible.
'//  Arguments: hint: required argument, not used here
'//				hintData: required argument, not used here
'//
'//		Avatars in this sample world must be open containers in order to make their body 
'//		parts visible. This means that any other objects carried by an avatar will also be
'//		visible unless specifically made invisible.
'//		A ContentArtifact is an artifact that becomes invisible when carried by an avatar,
'//		i.e. when an avatar is the object's container. This method implements that behavior.
'//
'////////////////////////////////////////////////////////////////////////
sub contentArtifact_onContainerChanged (hint, hintData)
	if this.container.isOfType("Avatar") then
		this.isVisible = False
	else
		this.isVisible = True
	end if
	this.InvokeSuperMethod(array(hint, hintData))
end sub




