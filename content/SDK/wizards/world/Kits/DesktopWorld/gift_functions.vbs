option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		modify_artifact_exemplar
'//  Purpose:	Add properties to the artifact exemplar to enable avatars to send objects to each other. 
'//				The VWorlds security model does not permit one user's avatar to delete objects created by
'//				another user's avatar. To conform to this model, avatars do not actually "send" objects to 
'//				each other. A sender avatar calls a method on a recipient avatar to make an object, passing
'//				information about how to make it. The recipient avatar makes the object and is thus able to 
'//				delete it. The two types of objects in the World that can be "sent" in this way are 
'//				Gift objects and Note objects.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub modify_artifact_exemplar
	dim artifactexemplar, theMenu
   	set artifactexemplar = world.Exemplar ("Artifact")
   	' URL of a web page to display info about the artifact
	artifactexemplar.AddProperty "showPage", "showgeneric.htm", ,world.PS_ALL_RWA
	' flag indicating if the object, sent to someone, has been examined by the recipient
	artifactexemplar.AddProperty "isOpened", false, ,world.PS_ALL_RWA
	' thumbnails are graphics to display an opened and closed object differently in the UI
	artifactexemplar.AddProperty "thumbnailopen", "..\images\tdefaultopen.gif" , ,world.PS_ALL_RWA
	artifactexemplar.AddProperty "thumbnailclosed", "..\images\tdefaultclosed.gif" , ,world.PS_ALL_RWA
	' The "from" property is a reference to the avatar who "sent" the object to its owner;
	' the sender does not actually send an object to a recipient; the sender calls an avatar method 
	' on the recipient telling the recipient to make an object and how to make it.
	' In the sample world the two kinds of things that can be sent are 
	artifactexemplar.AddProperty "from" , "" , ,world.PS_ALL_RWA
	artifactexemplar.AddProperty "date", "", ,world.PS_ALL_RWA
	artifactexemplar.AddProperty "showincontentslist", true, ,world.PS_ALL_RWA
	artifactexemplar.AddProperty "displayname", "Artifact", ,world.PS_ALL_RWA
	set theMenu = world.CreateMenu
	artifactexemplar.Menu = theMenu
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		make_gifts_and_notes
'//  Purpose:	Create exemplars for gift and note objects;
'//				Gift and Note instances are created at runtime by the recipient avatar 
'//				at the request of the sender avatar.
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub make_gifts_and_notes
	dim artifactexemplar, noteexemplar, giftexemplar
	dim theMenu
	
	set artifactexemplar = world.Exemplar ("Artifact")

	' A note is a text message with a formatting string (stationery)
	set noteexemplar = world.CreateExemplar("noteexemplar", artifactexemplar)
	noteexemplar.addProperty "message", "", ,world.PS_ALL_RWA		' msg text
	noteexemplar.addProperty "stationery", "", ,world.PS_ALL_RWA
	noteexemplar.from = "nobody"
	noteexemplar.date = "19990320"
	noteexemplar.isvisible = false
	noteexemplar.istakeable = false
	noteexemplar.displayname = "Note"
	noteexemplar.thumbnailopen = "..\images\icnNoteOpen.gif"
	noteexemplar.thumbnailclosed = "..\images\icnNoteClosed.gif"
	noteexemplar.createandaddmethod World.METHOD_SERVER, gift_module, "note_Destroy", "DestroyNote",  , world.PS_ALL_E + world.PS_ALL_RWA
	noteexemplar.isOpen = true
	noteexemplar.isContentsVisible = true

	Set TheMenu = World.CreateMenu
	noteexemplar.Menu = TheMenu
	noteexemplar.Menu.Add World.CreateMenuItem("Throw Away", world.MI_DEFAULT, noteexemplar, "", "DestroyNote")

	' A gift is an open container for gift pieces
	set giftexemplar = world.CreateExemplar("giftexemplar", artifactexemplar)
	giftexemplar.AddProperty "message", "", ,world.PS_ALL_RWA
	' property lists for HTML display of pieces
	giftexemplar.addProperty "HTMLgraphics", null, ,world.PS_ALL_RWA
	giftexemplar.addProperty "HTMLposX", null, ,world.PS_ALL_RWA
	giftexemplar.addProperty "HTMLposY", null, ,world.PS_ALL_RWA
	giftexemplar.from = "nobody" 
	giftexemplar.date = "19990320"
	giftexemplar.isvisible = false
	giftexemplar.istakeable = false
	giftexemplar.displayname = "Gift"
	giftexemplar.thumbnailopen = "../images/icnGiftOpen.gif"
	giftexemplar.thumbnailclosed = "../images/icnGiftClose.gif"
	' in case we want to carry the gift around visibly:
	giftexemplar.isOpen = true
	giftexemplar.isContentsVisible = true

	giftexemplar.createandaddmethod World.METHOD_SERVER, gift_module, "gift_OnCreate", "OnCreate",  , world.PS_ALL_E + world.PS_ALL_RWA
	giftexemplar.createandaddmethod World.METHOD_SERVER, gift_module, "gift_Destroy", "Destroy",  , world.PS_ALL_E + world.PS_ALL_RWA
	giftexemplar.createandaddmethod World.METHOD_SERVER, gift_module, "gift_Hold", "Hold",  , world.PS_ALL_E + world.PS_ALL_RWA
	giftexemplar.createandaddmethod World.METHOD_SERVER, gift_module, "gift_UnHold", "UnHold",  , world.PS_ALL_E + world.PS_ALL_RWA
	giftexemplar.createandaddmethod World.METHOD_CLIENT, gift_module, "gift_checkDestroy", "CheckDestroy",  , world.PS_ALL_E + world.PS_ALL_RWA
	giftexemplar.createandaddmethod World.METHOD_CLIENT, gift_module, "gift_checkHold", "CheckHold",  , world.PS_ALL_E + world.PS_ALL_RWA
	giftexemplar.createandaddmethod World.METHOD_CLIENT, gift_module, "gift_checkUnHold", "CheckUnHold",  , world.PS_ALL_E + world.PS_ALL_RWA

	Set TheMenu = World.CreateMenu
	giftexemplar.Menu = TheMenu
	giftexemplar.Menu.Add World.CreateMenuItem("Throw Away", world.MI_DEFAULT, giftexemplar, "CheckDestroy", "Destroy")
	giftexemplar.Menu.Add World.CreateMenuItem("Hold", world.MI_DEFAULT, giftexemplar, "CheckHold", "Hold")
	giftexemplar.Menu.Add World.CreateMenuItem("UnHold", world.MI_DEFAULT, giftexemplar, "CheckUnHold", "UnHold")

	dim cart
	set cart = world.CreateExemplar("giftCart", artifactexemplar)
	cart.AddProperty "editPage", "showgeneric.htm" , ,world.PS_ALL_RWA
	' Name to assign to gift objects made with each cart (e.g. "bouquet")
	' and a graphic to display in-world when the gift is held.
	cart.AddProperty "makesGiftName", "Gift" , ,world.PS_ALL_RWA
	cart.AddProperty "inWorldGraphic", "" , ,world.PS_ALL_RWA
	
	' the cart enable/disable methods fire UI events to help the UI keep track of whether or not
	' the user is already interacting with a given cart, so clicks can be handled differently.
	cart.createandaddmethod World.METHOD_CLIENT, gift_module, "cart_enable", "enable", , world.PS_ALL_E + world.PS_ALL_RWA
	cart.createandaddmethod World.METHOD_CLIENT, gift_module, "cart_disable", "disable", , world.PS_ALL_E + world.PS_ALL_RWA
	cart.createandaddmethod World.METHOD_CLIENT, gift_module, "cart_OnLButtonUp", "OnLButtonUp", , world.PS_ALL_E + world.PS_ALL_RWA
	cart.IsOpen = true
	cart.IsContentsVisible = true
	cart.displayname = "Gift Cart"
	cart.showPage = "showGift.htm"
	world.global.createandaddmethod World.METHOD_CLIENT, gift_module, "world_getCart", "getCart", , world.PS_ALL_E + world.PS_ALL_RWA

	' Create an exemplar for world objects that will be clicked to compose gifts;
	' the GiftPiece exemplar provides the OnLButtonUp method and a graphic to use in the UI.
	dim giftPiece
	set giftPiece = world.CreateExemplar("giftPiece", artifactexemplar)
	giftPiece.createandaddmethod World.METHOD_CLIENT, gift_module, "giftPiece_OnLButtonUp", "OnLButtonUp",  , world.PS_ALL_E + world.PS_ALL_RWA
	giftPiece.addProperty "HTMLgraphic", "", ,world.PS_ALL_RWA		' file to display in web page
	
end sub

