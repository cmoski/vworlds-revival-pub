option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		make_gadget_exemplar
'//  Purpose:	Create the exemplar for gadget objects; clickable objects that 
'//				can make sounds and cause web pages to display in the client.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub make_gadget_exemplar
	Dim ArtifactExemplar
	Dim gadget 
	set ArtifactExemplar = world.Exemplar ("Artifact")
	set gadget = world.CreateExemplar("gadget", ArtifactExemplar)
	gadget.IsOpen = true
	gadget.IsVisible = true
	gadget.IsContentsVisible = true
	gadget.IsUiVisible = true
	' properties for displaying a web page
	gadget.AddProperty "clickURL", "", , world.PS_ALL_RWA
	gadget.AddProperty "showSampleLinks", false, , world.PS_ALL_RWA		' show the URL as a subpage within the SampleLinks page
	gadget.AddProperty "clickWinTitle", "", , world.PS_ALL_RWA			' window title bar
	gadget.AddProperty "clickWinName", "", , world.PS_ALL_RWA			' programmatic access to window
	gadget.CreateAndAddMethod World.METHOD_CLIENT, gadget_module, "gadget_onLButtonUp", "onLButtonUp",  , world.PS_ALL_E + world.PS_ALL_RWA
end sub


'////////////////////////////////////////////////////////////////////////
'//  Sub:		make_ChessPiece_exemplar
'//  Purpose:	Create the exemplar for chess piece objects; the in-world objects for the chess game.
'//				Chess pieces are gadgets that report when their position changes
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub make_ChessPiece_exemplar
	Dim gadgetExemplar
	Dim ChessPiece 
	set gadgetExemplar = world.Exemplar ("Gadget")
	set ChessPiece = world.CreateExemplar("ChessPiece", gadgetExemplar)
	ChessPiece.IsOpen = true
	ChessPiece.IsVisible = true
	ChessPiece.IsContentsVisible = true
	ChessPiece.IsUiVisible = true
	ChessPiece.ShowSampleLinks = true
	ChessPiece.PositionDuration = 0
	ChessPiece.ClickURL = "Game_Chess.htm"
	ChessPiece.AddProperty "Team", 0, , world.PS_ALL_RWA				' 0 = black, 1 = white
	ChessPiece.AddProperty "Mover", NULL, , world.PS_ALL_RWA			' avatar who moved the piece
	ChessPiece.AddProperty "Home", NULL, , world.PS_ALL_RWA			' the home of the piece
	ChessPiece.AddProperty "OrigY", .3, , world.PS_ALL_RWA			' the original y coordinate
	ChessPiece.CreateAndAddMethod World.METHOD_CLIENT, gadget_module, "ChessPiece_onLoadGeometry", "onLoadGeometry",  , world.PS_ALL_E + world.PS_ALL_RWA
	ChessPiece.CreateAndAddMethod World.METHOD_CLIENT, gadget_module, "chessPiece_setPosition", "setPosition",  , world.PS_ALL_E + world.PS_ALL_RWA
	ChessPiece.CreateAndAddMethod World.METHOD_CLIENT, gadget_module, "ChessPiece_onPositionChanged", "onPositionChanged",  , world.PS_ALL_E + world.PS_ALL_RWA
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		make_contentArtifact_exemplar
'//  Purpose:	Create the exemplar for contentArtifact objects;
'//				these are objects that become invisible when carried by an avatar.
'//				The body parts of the multi-part avatars in this world are implemented as objects in the avatar's contents.
'//				To make the body parts visible the avatar is an open container, which means any other objects carried 
'//				by an avatar will also be visible. 
'//				The contentArtifact exemplar is meant to provide objects that are visible in the world but invisible
'//				when carried by an avatar. ContentArtifact has an OnContainerChanged method that sets the object's 
'//				IsVisible property false when the object's container is an avatar and true otherwise. 
'//				There are no instances of contentArtifact objects in sample world, but the exemplar was left in place
'//				to allow for such objects.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub make_contentArtifact_exemplar
	dim ArtifactExemplar
	dim contentArtifact
	set ArtifactExemplar = world.Exemplar ("Artifact")
	set contentArtifact = world.CreateExemplar("contentArtifact", ArtifactExemplar)
	contentArtifact.isTakeable = true
	contentArtifact.createandaddmethod World.METHOD_SERVER, gadget_module, "contentArtifact_onContainerChanged", "onContainerChanged",  , world.PS_ALL_E + world.PS_ALL_RWA
end sub

