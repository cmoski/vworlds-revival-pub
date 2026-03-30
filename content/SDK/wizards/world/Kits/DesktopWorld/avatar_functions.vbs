option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		modify_avatars
'//  Purpose:	create world properties and exemplars to implement 5-bodypart avatars.
'//				create color lists for the different avatar models;
'//				create an avatar exemplar with special properties and methods
'//				create the bodypart exemplar for bodypart objects;
'//				create the right-click menu for bodypart objects (replaces the avatar menu);
'//				create a camera object to do visual pans between the different avatar camera angles
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub modify_avatars

	' names and body part colors for pre-made avatar models
	' The names are in order corresponding to the numbers on the sprite and gif files.
	' For example, for model "alice" the shoes sprite = alice1.spr, pants = alice2.spr, ...
	dim bodyParts
	set bodyParts = world.CreatePropertyList
	bodyParts.add "shoes"
	bodyParts.add "pants"
	bodyParts.add "shirt"
	bodyParts.add "skin"
	bodyParts.add "hair"
	world.global.addproperty "bodyPartNames", bodyParts, ,world.PS_ALL_RWA
	
	' PropertyMaps can contain PropertyLists, but PropertyLists cannot be added to a PropertyMap after
	' the map has been added to the world. So we add all the lists and then add the map to the world.

	' Create avatar model color lists
	' world.avatarModels is a propertyMap containing a information about each model.
	' The property named "Colors" + modelName is a propertyList of bodypart colors.
	' Each list contains 25 colors for that model arranged in groups of 5 by bodypart:
	' 0-4: shoes (0=default, 1-4=presets),
	' 5-9: pants (5=default, 6-9=presets), etc for shirt, skin, hair.
	' To get the default color for a body part:
	'	color = world.avatarModels("ColorsBetty").property(5 * world.bodyPartNames.find("shoes"))

	' *** NOTE *** The numerical hex color values below are BGR, not RGB.
	' When you express a color as a hex string, as on a web page, the red part comes first, as in "#aabbcc".
	' When this value is stored as a number the red byte is stored first, in the least significant position.
	' When this value is expressed as a numerical value the red part comes last.
	' So the color string "#aabbcc" on a web page = the numerical value &Hccbbaa. 
	
	dim avModelMap, avColorList, avHandPos
	set avModelMap = world.CreatePropertyMap

' Alice
	set avColorList = world.CreatePropertyList
	avColorList.add CLng(&H487AA5)	' shoe default
	avColorList.add CLng(&H487AA5)	' shoe presets 1..4
	avColorList.add CLng(&HA8AAD5)
	avColorList.add CLng(&H000000)
	avColorList.add CLng(&HFFFFFF)

	avColorList.add CLng(&H25213D)	' pants default
	avColorList.add CLng(&H25213D)	' pants presets
	avColorList.add CLng(&H7179AA)
	avColorList.add CLng(&HA28D70)
	avColorList.add CLng(&H372F60)

	avColorList.add CLng(&H9F8256)	' shirt default
	avColorList.add CLng(&H9F8256)	' shirt presets
	avColorList.add CLng(&HC8A39B)
	avColorList.add CLng(&H786680)
	avColorList.add CLng(&HA03D37)

	avColorList.add CLng(&HBFD9FF)	' skin default
	avColorList.add CLng(&HBFD9FF)	' skin presets
	avColorList.add CLng(&H7FCFFF)
	avColorList.add CLng(&H5FA5FF)
	avColorList.add CLng(&H0050A0)

	avColorList.add CLng(&H0064A0)	' hair default
	avColorList.add CLng(&H0064A0)	' hair presets
	avColorList.add CLng(&H5EDCFF)
	avColorList.add CLng(&H000042)
	avColorList.add CLng(&HE0E0E0)

	avModelMap.property("ColorsAlice") = avColorList
	
' Betty
	set avColorList = world.CreatePropertyList
	avColorList.add CLng(&H487AA5)	' shoe default
	avColorList.add CLng(&H487AA5)	' shoe presets 1..4
	avColorList.add CLng(&HA8AAD5)
	avColorList.add CLng(&H000000)
	avColorList.add CLng(&HFFFFFF)

	avColorList.add CLng(&H514D44)	' pants default
	avColorList.add CLng(&H514D44)	' pants presets
	avColorList.add CLng(&H7A8299)
	avColorList.add CLng(&HF1EDEA)
	avColorList.add CLng(&H379FB8)

	avColorList.add CLng(&HFAE8C2)	' shirt default
	avColorList.add CLng(&HFAE8C2)	' shirt presets
	avColorList.add CLng(&HE9A98D)
	avColorList.add CLng(&HBA5567)
	avColorList.add CLng(&H799799)

	avColorList.add CLng(&HBFD9FF)	' skin default
	avColorList.add CLng(&HBFD9FF)	' skin presets
	avColorList.add CLng(&H7FCFFF)
	avColorList.add CLng(&H5FA5FF)
	avColorList.add CLng(&H0050A0)

	avColorList.add CLng(&H0064A0)	' hair default
	avColorList.add CLng(&H0064A0)	' hair presets
	avColorList.add CLng(&H5EDCFF)
	avColorList.add CLng(&H000042)
	avColorList.add CLng(&HE0E0E0)

	avModelMap.property("ColorsBetty") = avColorList
	
' Lili
	set avColorList = world.CreatePropertyList
	avColorList.add CLng(&H487AA5)	' shoe default
	avColorList.add CLng(&H487AA5)	' shoe presets 1..4
	avColorList.add CLng(&HA8AAD5)
	avColorList.add CLng(&H000000)
	avColorList.add CLng(&HFFFFFF)

	avColorList.add CLng(&H797166)	' pants default
	avColorList.add CLng(&H797166)	' pants presets
	avColorList.add CLng(&HC2B193)
	avColorList.add CLng(&HF0D890)
	avColorList.add CLng(&H74828B)

	avColorList.add CLng(&H379FB8)	' shirt default
	avColorList.add CLng(&H379FB8)	' shirt presets
	avColorList.add CLng(&H5372B5)
	avColorList.add CLng(&H5B3580)
	avColorList.add CLng(&H1B5267)

	avColorList.add CLng(&HBFD9FF)	' skin default
	avColorList.add CLng(&HBFD9FF)	' skin presets
	avColorList.add CLng(&H7FCFFF)
	avColorList.add CLng(&H5FA5FF)
	avColorList.add CLng(&H0050A0)

	avColorList.add CLng(&H0064A0)	' hair default
	avColorList.add CLng(&H0064A0)	' hair presets
	avColorList.add CLng(&H5EDCFF)
	avColorList.add CLng(&H000042)
	avColorList.add CLng(&HE0E0E0)

	avModelMap.property("ColorsLili") = avColorList
	
' Russ
	set avColorList = world.CreatePropertyList
	avColorList.add CLng(&H487AA5)	' shoe default
	avColorList.add CLng(&H487AA5)	' shoe presets 1..4
	avColorList.add CLng(&HA8AAD5)
	avColorList.add CLng(&H000000)
	avColorList.add CLng(&HFFFFFF)

	avColorList.add CLng(&H516280)	' pants default
	avColorList.add CLng(&H516280)	' pants presets
	avColorList.add CLng(&H342D59)
	avColorList.add CLng(&H1B5267)
	avColorList.add CLng(&H0B0C10)

	avColorList.add CLng(&H535F85)	' shirt default
	avColorList.add CLng(&H535F85)	' shirt presets
	avColorList.add CLng(&HBE5157)
	avColorList.add CLng(&HF7D689)
	avColorList.add CLng(&HC2C9A0)

	avColorList.add CLng(&HBFD9FF)	' skin default
	avColorList.add CLng(&HBFD9FF)	' skin presets
	avColorList.add CLng(&H7FCFFF)
	avColorList.add CLng(&H5FA5FF)
	avColorList.add CLng(&H0050A0)

	avColorList.add CLng(&H0064A0)	' hair default
	avColorList.add CLng(&H0064A0)	' hair presets
	avColorList.add CLng(&H5EDCFF)
	avColorList.add CLng(&H000042)
	avColorList.add CLng(&HE0E0E0)

	avModelMap.property("ColorsRuss") = avColorList
	
' Sean
	set avColorList = world.CreatePropertyList
	avColorList.add CLng(&H487AA5)	' shoe default
	avColorList.add CLng(&H487AA5)	' shoe presets 1..4
	avColorList.add CLng(&HA8AAD5)
	avColorList.add CLng(&H000000)
	avColorList.add CLng(&HFFFFFF)

	avColorList.add CLng(&H25213D)	' pants default
	avColorList.add CLng(&H25213D)	' pants presets
	avColorList.add CLng(&H7179AA)
	avColorList.add CLng(&HA28D70)
	avColorList.add CLng(&H372F60)

	avColorList.add CLng(&HE8C726)	' shirt default
	avColorList.add CLng(&HE8C726)	' shirt presets
	avColorList.add CLng(&H393373)
	avColorList.add CLng(&HA1022A)
	avColorList.add CLng(&H213B38)

	avColorList.add CLng(&HBFD9FF)	' skin default
	avColorList.add CLng(&HBFD9FF)	' skin presets
	avColorList.add CLng(&H7FCFFF)
	avColorList.add CLng(&H5FA5FF)
	avColorList.add CLng(&H0050A0)

	avColorList.add CLng(&H0064A0)	' hair default
	avColorList.add CLng(&H0064A0)	' hair presets
	avColorList.add CLng(&H5EDCFF)
	avColorList.add CLng(&H000042)
	avColorList.add CLng(&HE0E0E0)

	avModelMap.property("ColorsSean") = avColorList
	
' Tab
	set avColorList = world.CreatePropertyList
	avColorList.add CLng(&H487AA5)	' shoe default
	avColorList.add CLng(&H487AA5)	' shoe presets 1..4
	avColorList.add CLng(&HA8AAD5)
	avColorList.add CLng(&H000000)
	avColorList.add CLng(&HFFFFFF)

	avColorList.add CLng(&H514D44)	' pants default
	avColorList.add CLng(&H514D44)	' pants presets
	avColorList.add CLng(&H7A8299)
	avColorList.add CLng(&HF1EDEA)
	avColorList.add CLng(&H379FB8)

	avColorList.add CLng(&HA44D53)	' shirt default
	avColorList.add CLng(&HA44D53)	' shirt presets
	avColorList.add CLng(&H464237)
	avColorList.add CLng(&HEEDC9E)
	avColorList.add CLng(&HCEAA60)

	avColorList.add CLng(&HBFD9FF)	' skin default
	avColorList.add CLng(&HBFD9FF)	' skin presets
	avColorList.add CLng(&H7FCFFF)
	avColorList.add CLng(&H5FA5FF)
	avColorList.add CLng(&H0050A0)

	avColorList.add CLng(&H0064A0)	' hair default
	avColorList.add CLng(&H0064A0)	' hair presets
	avColorList.add CLng(&H5EDCFF)
	avColorList.add CLng(&H2F2F2F)
	avColorList.add CLng(&HE0E0E0)

	avModelMap.property("ColorsTab") = avColorList
	
	' Add the position of the avatar's left hand for holding gifts, etc.
	' When an object is Held it will be placed at this position relative to the avatar.
	set avHandPos = world.CreateVector (-0.2, 0.15, 0.1)
	avModelMap.property("HandAlice") = avHandPos
	set avHandPos = world.CreateVector (-0.35, 0.1, 0.1)
	avModelMap.property("HandBetty") = avHandPos
	set avHandPos = world.CreateVector (-0.2, 0.15, 0.1)
	avModelMap.property("HandLili") = avHandPos
	set avHandPos = world.CreateVector (-0.2, 0.1, 0.1)
	avModelMap.property("HandRuss") = avHandPos
	set avHandPos = world.CreateVector (-0.35, 0.2, 0.1)
	avModelMap.property("HandSean") = avHandPos
	set avHandPos = world.CreateVector (-0.35, 0.2, 0.1)
	avModelMap.property("HandTab") = avHandPos
	
	world.global.addproperty "avatarModels", avModelMap, ,world.PS_ALL_RWA

	' path to avatar graphics
	world.global.addproperty "avGraphicsPath", "\worlds\DesktopWorld\Models\Lobby\", ,world.PS_ALL_RWA

	' initial location of avatars entering the world
	world.global.addproperty "entryArea", "Lobby", ,world.PS_ALL_RWA

	dim avatarexemplar, sampleAvatarExemplar, artifactexemplar
	set avatarexemplar = world.Exemplar ("Avatar")
	set artifactexemplar = world.Exemplar ("Artifact")

	set sampleAvatarExemplar = world.CreateExemplar("SampleAvatar", avatarexemplar)

	sampleAvatarExemplar.isauthor = true

	' add body parts
	dim bodyPart
	set bodyPart = world.CreateExemplar("bodyPart", ArtifactExemplar)
	bodyPart.showincontentslist = false
	bodyPart.displayname = "Body Part"
	bodyPart.AddProperty "partName", "", ,world.PS_ALL_RWA
	' After a bodyPart is created, the partName property of each bodypart will be set equal to 
	' the bodypart's Name property, and the Name property will be set to avatar.name. 
	' This is to make tooltips in the 3d renderer say the avatar name instead of "pants" etc
	' when the mouse hovers over a bodypart (see sub avatar_onConnect in avatar_module.vbs).
	' Because of this, code that needs to know the bodypart name must use the bodypart.partName 
	' property instead of the .Name property.
	bodyPart.AddProperty "color", CLng(&Hffffff), ,world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module, "bodyPart_OnLoadGeometry", "OnLoadGeometry",  , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module, "bodyPart_RefreshColors", "RefreshColors",  , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module, "bodyPart_OnColorChanged", "OnColorChanged",  , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_SERVER, avatar_module, "bodyPart_OnCreate", "OnCreate",  , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_SERVER, avatar_module, "bodyPart_setGeometry", "setGeometry",  , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module, "bodyPart_UpdateOwnerNameOnMenu", "UpdateOwnerNameOnMenu",  , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module, "bodyPart_OwnerProfile", "OwnerProfile",  , world.PS_ALL_E + world.PS_ALL_RWA

	'these pass through menu options to their owner...
	
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "bodypart_OwnerMakeFriend",  "OwnerMakeFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "bodypart_OwnerUndoFriend",  "OwnerUndoFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "bodypart_OwnerIgnore",  "OwnerIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "bodypart_OwnerUnIgnore",  "OwnerUnIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "bodypart_OwnerSendNote",  "OwnerSendNote" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "bodypart_OwnerApproach",  "OwnerApproach" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,    "bodyPart_OwnerWhisper", "OwnerWhisper",  , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,    "bodyPart_OwnerViewWebPage", "OwnerViewWebPage",  , world.PS_ALL_E + world.PS_ALL_RWA

	'these can be reused from avatars  since they simply check world.user conditions against profiles and alter menuitems passed to them
	
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckMakeFriend", "CheckMakeFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckUndoFriend", "CheckUndoFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckWhisper",  	"CheckWhisper" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckWebPage",  	"CheckViewWebPage" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckApproach",  	"CheckApproach" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckIgnore",  	"CheckIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckUnIgnore",  	"CheckUnIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckSendNote",  	"CheckSendNote" , , world.PS_ALL_E + world.PS_ALL_RWA

	bodyPart.Menu = World.CreateMenu()

	bodyPart.Menu.add World.CreateMenuItem("UNKNOWN", world.MI_DISABLED, bodyPart, "UpdateOwnerNameOnMenu", "")
	'BUG -- cant make a separator?
	bodyPart.Menu.add World.CreateMenuItem("   Profile", world.MI_DEFAULT , bodyPart, "", "OwnerProfile")
	bodyPart.Menu.add World.CreateMenuItem("   Make a Friend", world.MI_DEFAULT , bodyPart, "CheckMakeFriend", "OwnerMakeFriend")
	bodyPart.menu.add World.CreateMenuItem("   Undo Friend", world.MI_DEFAULT, bodyPart, "CheckUndoFriend", "OwnerUndoFriend")
	bodyPart.menu.add World.CreateMenuItem("   Ignore", world.MI_DEFAULT, bodyPart, "CheckIgnore", "OwnerIgnore")
	bodyPart.menu.add World.CreateMenuItem("   Undo Ignore", world.MI_DEFAULT, bodyPart, "CheckUnIgnore", "OwnerUnIgnore")
	bodyPart.menu.add World.CreateMenuItem("   Whisper To", world.MI_DEFAULT, bodyPart, "CheckWhisper", "OwnerWhisper")
	bodyPart.menu.add World.CreateMenuItem("   View Web Page", world.MI_DEFAULT, bodyPart, "CheckWebPage", "OwnerViewWebPage")
	bodyPart.menu.add World.CreateMenuItem("   Send a Note", world.MI_DEFAULT, bodyPart, "CheckSendNote", "OwnerSendNote")
	bodyPart.menu.add World.CreateMenuItem("   Approach", world.MI_DEFAULT, bodyPart, "CheckApproach", "OwnerApproach")
		
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,  "bodyPart_onLButtonUp", "onLButtonUp",  , world.PS_ALL_E + world.PS_ALL_RWA
	bodyPart.createandaddmethod World.METHOD_CLIENT, avatar_module,  "bodyPart_onRButtonDown", "onRButtonDown",  , world.PS_ALL_E + world.PS_ALL_RWA

	'THIS REMOVES ALL RIGHT CLICK EDITING FROM ALL OBJECTS...
	'since the editmenu is not copyonget we are changing it on the thing exemplar...
	'but we are ok with this
	bodyPart.EditMenu.removeall

	' mood is another extra graphic that is not a bodyPart
	' mood values:  0:none, 1:happy, 2:neutral, 3:not used, 4:sad, 5:angry
	dim moodPart
	set moodPart = world.CreateExemplar("moodPart", ArtifactExemplar)
	moodPart.addproperty "currentMood", 0, , world.PS_ALL_RWA
	moodPart.addproperty "partName", "", , world.PS_ALL_RWA
	moodPart.createandaddmethod World.METHOD_SERVER, avatar_module, "moodPart_OnCreate", "OnCreate",  , world.PS_ALL_E + world.PS_ALL_RWA
	moodPart.createandaddmethod World.METHOD_CLIENT, avatar_module, "moodPart_OnCurrentMoodChanged", "OnCurrentMoodChanged",  , world.PS_ALL_E + world.PS_ALL_RWA
	moodPart.showincontentslist = false
	moodPart.displayname = "Mood Part"
	
     ' we need an inner camera object to do camera transitions...
	dim innerCamera
	set innerCamera = world.CreateExemplar("innerCamera", ArtifactExemplar)
	innerCamera.createandaddmethod World.METHOD_CLIENT, camera_module, "innerCamera_PanStart", "PanStart",  , world.PS_ALL_E + world.PS_ALL_RWA
	innerCamera.createandaddmethod World.METHOD_CLIENT, camera_module, "innerCamera_PanInterpolate1", "PanInterpolate1",  , world.PS_ALL_E + world.PS_ALL_RWA
	innerCamera.createandaddmethod World.METHOD_CLIENT, camera_module, "innerCamera_PanInterpolate2", "PanInterpolate2",  , world.PS_ALL_E + world.PS_ALL_RWA
	innerCamera.createandaddmethod World.METHOD_CLIENT, camera_module, "innerCamera_PanInterpolate3", "PanInterpolate3",  , world.PS_ALL_E + world.PS_ALL_RWA
	innerCamera.createandaddmethod World.METHOD_CLIENT, camera_module, "innerCamera_PanInterpolate4", "PanInterpolate4",  , world.PS_ALL_E + world.PS_ALL_RWA
	innerCamera.createandaddmethod World.METHOD_CLIENT, camera_module, "innerCamera_SetupCamera", "SetupCamera",  , world.PS_ALL_E + world.PS_ALL_RWA
	innerCamera.createandaddmethod World.METHOD_CLIENT, camera_module, "innerCamera_ToggleShot", "ToggleShot",  , world.PS_ALL_E + world.PS_ALL_RWA
	innerCamera.createandaddmethod World.METHOD_CLIENT, camera_module, "innerCamera_SetShot", "SetShot",  , world.PS_ALL_E + world.PS_ALL_RWA
	innerCamera.addproperty "panTime" , 20, World.PSBIT_NOTREMOTED,world.PS_ALL_RWA	' number of frames to switch camera shots
	innerCamera.addproperty "shot" , 1, World.PSBIT_NOTREMOTED, world.PS_ALL_RWA	' the current camera shot 
	innerCamera.addproperty "newShot" , 1, World.PSBIT_NOTREMOTED, world.PS_ALL_RWA	' shot we are toggling to
	innerCamera.showincontentslist = false
	innerCamera.displayname = "Inner Camera"
	innerCamera.geometryName = ""
	
	' Define camera angles
	dim ShotDescription
	set ShotDescription = world.createpropertymap
	innerCamera.addproperty "ShotDescription", ShotDescription, ,world.PS_ALL_RWA
	innerCamera.ShotDescription.property("0") = "looking through your eyes"
	innerCamera.ShotDescription.property("1") = "looking over your shoulder"
	innerCamera.ShotDescription.property("2") = "facing you"
	dim Pos
	set Pos = world.createpropertymap
	innerCamera.addproperty "Pos", Pos, ,world.PS_ALL_RWA
	innerCamera.Pos.property("0") = world.createvector(0,0.7,0)
	innerCamera.Pos.property("1") = world.createvector(0,1,-2.2)
	innerCamera.Pos.property("2") = world.createvector(0,0.25,2.2)
	dim Dir
	set Dir = world.createpropertymap
	innerCamera.addproperty "Dir", Dir, ,world.PS_ALL_RWA
	innerCamera.Dir.property("0") = world.createvector(0,0,1)
	innerCamera.Dir.property("1") = world.createvector(0,0,1)
	innerCamera.Dir.property("2") = world.createvector(0,0,-1)

	' add properties and methods to the sample avatar exemplar, for creating future avatars
	customize_avatar(sampleAvatarExemplar)

	' the avatar of the wizard creating the world already exists when this code executes,
	' so add the custom properties and methods to the wizard (current user) avatar object.
	customize_avatar(world.user)

	' now assign values to the custom avatar methods on the wizard object
	world.user.hair = world.CreateInstance("hair", "bodyPart", world.user)
	world.user.skin = world.CreateInstance("skin", "bodyPart", world.user)
	world.user.shirt = world.CreateInstance("shirt", "bodyPart", world.user)
	world.user.pants = world.CreateInstance("pants", "bodyPart", world.user)
	world.user.shoes = world.CreateInstance("shoes", "bodyPart", world.user)
	world.user.graphic = world.CreateInstance("graphic", "bodyPart", world.user)
	world.user.mood = world.CreateInstance("mood", "moodPart", world.user)
	world.user.icam = world.CreateInstance("icam", "innerCamera", world.user)
	world.user.icam.shot = 1
	world.user.icam.position.set 0,1,-2.2

	' make the sample avatar exemplar the default for this world so it will be used to create new avatars.
	world.defaultavatarexemplar = sampleAvatarExemplar
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		customize_avatar
'//  Purpose:	add custom avatar properties and methods
'//				Add body parts, mood, inner camera and other properties.
'//				Create the right-click avatar menu; this menu is not actually clickable because the avatar
'//					object itself has no graphics to click on; the menu functions are invoked in UI script.
'//  Arguments: avatar: an avatar object instance or exemplar.
'//		This method is used to add custom properties and methods to the sample avatar exemplar, to give them 
'//		to new avatars created in the sample World, and to add these same properties and methods to the wizard avatar
'//		instance that is creating the world, because that avatar already exists at the time this code is run.
'////////////////////////////////////////////////////////////////////////
sub customize_avatar (avatar)
	' Journey, Stage and AvApproaching do not need to be remoted.
	' From must be remoted so other avatars know where to go to Approach us.
	' Journey is the name of the auto-navigation path we are following
	avatar.addproperty "journey" , "none" , World.PSBIT_NOTREMOTED, world.PS_ALL_RWA
	' Stage is the current step number in our current auto-nav path 
	avatar.addproperty "stage" , 0, World.PSBIT_NOTREMOTED, world.PS_ALL_RWA
	' AvApproaching is an avatar we are currently approaching
	avatar.addproperty "avApproaching" , Nothing, World.PSBIT_NOTREMOTED, world.PS_ALL_RWA
	' the "From" property is the name of the area where we currently are in the world
	avatar.addproperty "from" , "Lobby" , , world.PS_ALL_RWA
	
	avatar.addproperty "hair" , , , world.PS_ALL_RWA
	avatar.addproperty "skin" , , , world.PS_ALL_RWA
	avatar.addproperty "shirt" , , , world.PS_ALL_RWA
	avatar.addproperty "pants" , , , world.PS_ALL_RWA
	avatar.addproperty "shoes" , , , world.PS_ALL_RWA
	avatar.addproperty "graphic" , , , world.PS_ALL_RWA
	avatar.addproperty "mood" , , , world.PS_ALL_RWA
	avatar.addproperty "icam" , , , world.PS_ALL_RWA
	avatar.addproperty "viewType" , "overview", World.PSBIT_NOTREMOTED, world.PS_ALL_RWA
	avatar.addproperty "cameraHelper" , "null", ,world.PS_ALL_RWA
	avatar.isopen = true
	avatar.iscontentsvisible = true
	avatar.approachDistance = 2.5	' distance where other things stop when approaching the avatar
'	avatar.approachTime = 750		' approach speed of the avatar toward other things;
									' the bigger the value the slower the speed; default = 125
	
	avatar.selfmenu = world.createmenu()
	avatar.selfmenu.add World.CreateMenuItem("My Profile", world.MI_DEFAULT, avatar, "", "New_Profile")
	avatar.selfmenu.add World.CreateMenuItem("View My Web Page", world.MI_DEFAULT, avatar, "CheckViewWebPage", "ViewWebPage")

	avatar.peermenu = world.createmenu()
	avatar.containermenu = world.createmenu()
	avatar.editmenu = world.createmenu()
	
	avatar.menu = world.createmenu()
	avatar.menu.add World.CreateMenuItem("Profile", world.MI_DEFAULT, avatar, "", "New_Profile")
	avatar.menu.add World.CreateMenuItem("Make a Friend", world.MI_DEFAULT, avatar, "CheckMakeFriend", "New_MakeFriend")
	avatar.menu.add World.CreateMenuItem("Undo Friend", world.MI_DEFAULT, avatar, "CheckUndoFriend", "New_UndoFriend")
	avatar.menu.add World.CreateMenuItem("Ignore", world.MI_DEFAULT, avatar, "CheckIgnore", "New_Ignore")
	avatar.menu.add World.CreateMenuItem("Undo Ignore", world.MI_DEFAULT, avatar, "CheckUnIgnore", "New_UnIgnore")
	avatar.menu.add World.CreateMenuItem("Whisper To", world.MI_DEFAULT, avatar, "CheckWhisper", "New_Whisper")
	avatar.menu.add World.CreateMenuItem("View Web Page", world.MI_DEFAULT, avatar, "CheckViewWebPage", "ViewWebPage")
	avatar.menu.add World.CreateMenuItem("Send a Note", world.MI_DEFAULT, avatar, "CheckSendNote", "SendNote")
	avatar.menu.add World.CreateMenuItem("Approach", world.MI_DEFAULT, avatar, "CheckApproach", "New_Approach")

	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_Profile",  "New_Profile" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_MakeFriend",  "New_MakeFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_UnMakeFriend",  "New_UndoFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckMakeFriend",  "CheckMakeFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckUndoFriend",  	"CheckUndoFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_ConfirmFriend",  	"ConfirmFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,   "avatar_ServerNotifyFriend",  	"NotifyFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_ClientNotifyFriend",  	"ClientNotifyFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_ClientNotifyRemovedFriend",  "ClientNotifyRemovedFriend" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_Ignore",  "New_Ignore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_UnIgnore",  "New_UnIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckIgnore",  	"CheckIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckUnIgnore",  	"CheckUnIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckSendNote",  	"CheckSendNote" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,   "avatar_ServerHandleIgnore",  	"ServerHandleIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,   "avatar_ServerHandleUnIgnore",  	"ServerHandleUnIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_ClientHandleIgnore",  	"ClientHandleIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_ClientHandleUnIgnore",  	"ClientHandleUnIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,   "avatar_SecureAddIgnore",  "SecureAddIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,   "avatar_SecureRemoveIgnore",  "SecureRemoveIgnore" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_Whisper",  "New_Whisper" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_ViewWebPage",  "ViewWebPage" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_SendNote",  "SendNote" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,   "avatar_ReceiveNote",  "ReceiveNote" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_Approach",  "New_Approach" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_ApproachAnother",  "approachAnother" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckWhisper",  	"CheckWhisper" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckViewWebPage",  	"CheckViewWebPage" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,   "avatar_CheckApproach",  	"CheckApproach" , , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, area_module,  "path_start", "path_start",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, area_module,  "path_move", "onapproachdone",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,  "avatar_setBodyColors", "setBodyColors",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,  "avatar_setAvatarModel", "setAvatarModel",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,  "avatar_OnConnect", "OnConnect",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,  "avatar_OnDisconnect", "OnDisconnect",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,  "avatar_OnLoadGeometry", "OnLoadGeometry",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,  "avatar_DoGesture", "DoGesture",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,  "avatar_MakeGift", "MakeGift",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,  "avatar_setPartName", "setPartName",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_SERVER, avatar_module,  "avatar_AddDefaultKeys", "AddDefaultKeys",  , world.PS_ALL_E + world.PS_ALL_RWA
	avatar.createandaddmethod World.METHOD_CLIENT, avatar_module,  "avatar_clientCancelFriendPending", "ClientCancelFriendPending",  , world.PS_ALL_E + world.PS_ALL_RWA
end sub
