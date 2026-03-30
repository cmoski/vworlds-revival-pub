Sub Install( module )
	' Create the DoorPortal exemplar
	Dim DoorPortal
	Dim PortalExemplar
	set PortalExemplar = Exemplar ("Portal")
	set DoorPortal = CreateExemplar("DoorPortal", PortalExemplar)
	DoorPortal.ContentsVisible = True

	' Create DoorPortal menu
	Dim OldDoorPortalMenu
	Dim DoorPortalMenu
	set OldDoorPortalMenu = DoorPortal.menu
	set DoorPortalMenu = Global.CreateMenu
	OldDoorPortalMenu.copyto DoorPortalMenu
	DoorPortal.Menu = DoorPortalMenu

	Dim DoorPortalMenuOpenClose
	Set DoorPortalMenuOpenClose = Global.CreateMenuItem("Open", 0, DoorPortal, "UpdateOpenClose", "OnOpenClose" )
	DoorPortal.Menu.Add DoorPortalMenuOpenClose

	' Add properties to DoorPortal
	DoorPortal.AddProperty "IsDoorOpen"
	DoorPortal.AddProperty "MotionType"
	DoorPortal.AddProperty "DoorGeom"
	DoorPortal.AddProperty "FrameGeom"
	DoorPortal.AddProperty "ViewGeom"

	' Set some default states
	DoorPortal.IsDoorOpen = False
	DoorPortal.MotionType = "SwingIn"

	' Add methods to DoorPortal
	DoorPortal.CreateAndAddMethod world.METHOD_CLIENT, module, "OnOpenClose"
	DoorPortal.CreateAndAddMethod world.METHOD_CLIENT, module, "UpdateOpenClose"
	DoorPortal.CreateAndAddMethod world.METHOD_CLIENT, module, "OnMotionTypeChanged"

	' add the OnCreate method to put the contents in the DoorPortal
	Dim OnCreateDoorPortalMethod
	set OnCreateDoorPortalMethod = CreateMethod(world.METHOD_SERVER, module, "OnCreateDoorPortal")
	DoorPortal.AddMethod "OnCreate", OnCreateDoorPortalMethod

	' make the DoorPortal show the correct texture on load
	' KIRKM: OnLoadGeometry must be METHOD_CLIENT since geometry doesn't exist on server
	' DAVEVR: And it must be put instead of added, since one is already there.
	Dim OnLoadDoorPortal
	set OnLoadDoorPortal = CreateMethod(world.METHOD_CLIENT, module, "OnLoadDoorPortalGeom")
	DoorPortal.Method("OnLoadGeometry") = OnLoadDoorPortal

	' Add properties to the Advanced Edit Map (appear on menu of properties dialogue)
	Dim AdvEditMap
	Dim GraphicsTab
	Dim PortalTab

	set AdvEditMap = Global.CreateMenu
	set GraphicsTab = Global.CreateMenuItem("Graphics|Import new textures or geometry", 0, DoorPortal, "", "")
	GraphicsTab.statusText = "..\exemplar\doorport\advgraph.htm"
	set PortalTab = Global.CreateMenuItem("Portal|Portal settings", 0, DoorPortal, "", "")
	PortalTab.statusText = "..\exemplar\doorport\port.htm"

	DoorPortal.AdvancedEditMap = AdvEditMap
	DoorPortal.AdvancedEditMap.Add GraphicsTab
	DoorPortal.AdvancedEditMap.Add PortalTab

	set GraphicsTab = Nothing
	set PortalTab = Nothing
	set AdvEditMap = Nothing

	' Add properties to the Builder Edit Map (appear on menu of properties dialogue)
	Dim BuilderEditMap
	set BuilderEditMap = Global.CreateMenu
	set GraphicsTab = Global.CreateMenuItem("Graphics|Import new textures or geometry", 0, DoorPortal, "", "")
	GraphicsTab.statusText = "..\exemplar\doorport\advgraph.htm"
	set PortalTab = Global.CreateMenuItem("Portal|Portal settings", 0, DoorPortal, "", "")
	PortalTab.statusText = "..\exemplar\doorport\port.htm"

	DoorPortal.BuilderEditMap = BuilderEditMap
	DoorPortal.BuilderEditMap.Add GraphicsTab
	DoorPortal.BuilderEditMap.Add PortalTab

	set GraphicsTab = Nothing
	set PortalTab = Nothing
	set BuilderEditMap = Nothing

	' Add properties to the Owner Edit Map (appear on menu of properties dialogue)
	Dim OwnerEditMap
	set OwnerEditMap = Global.CreateMenu
	set GraphicsTab = Global.CreateMenuItem("Graphics|Import new textures or geometry", 0, DoorPortal, "", "")
	GraphicsTab.statusText = "..\exemplar\doorport\advgraph.htm"
	set PortalTab = Global.CreateMenuItem("Portal|Portal settings", 0, DoorPortal, "", "")
	PortalTab.statusText = "..\exemplar\doorport\port.htm"

	DoorPortal.OwnerEditMap = OwnerEditMap
	DoorPortal.OwnerEditMap.Add GraphicsTab
	DoorPortal.OwnerEditMap.Add PortalTab

	set GraphicsTab = Nothing
	set PortalTab = Nothing
	set OwnerEditMap = Nothing
end sub

sub OnCreateDoorPortal(who)

	' Create the contents of the DoorPortal
	Dim DoorGeom
	set DoorGeom = World.CreateInstance("DoorPortal Door Geometry", "SubDoor")
	DoorGeom.InitializeGraphics "exemplar\doorport\DPdoor.3ds", 0.0, 0.0, 0.0, 0.0, 0.0, -1.0
	set This.DoorGeom = DoorGeom
	DoorGeom.MoveInto This
	DoorGeom.IsNoticeable = True
	DoorGeom.SetTextureURL  "exemplar\doorport\plainwoo.gif"

	Dim FrameGeom
	set FrameGeom = World.CreateInstance("DoorPortal Frame Geometry", "SubThing")
	FrameGeom.InitializeGraphics "exemplar\doorport\DPframe.3ds", 0.0, 0.0, 0.0, 0.0, 0.0, -1.0
	set This.FrameGeom = FrameGeom
	FrameGeom.MoveInto This
	FrameGeom.IsNoticeable = True
	FrameGeom.SetTextureURL "exemplar\doorport\woodfram.gif"

	Dim ViewGeom
	set ViewGeom = World.CreateInstance("DoorPortal View Geometry", "SubThing")
	ViewGeom.InitializeGraphics "exemplar\doorport\DPview.3ds", 0.0, 0.0, 0.0, 0.0, 0.0, -1.0
	set This.ViewGeom = ViewGeom
	ViewGeom.MoveInto This
	ViewGeom.IsNoticeable = True
	ViewGeom.SetTextureURL "exemplar\doorport\watview.gif"
end sub

sub OnLoadDoorPortalGeom(vwf)
	This.DoorGeom.SetTexture
	This.FrameGeom.SetTexture
	This.ViewGeom.SetTexture
	' crucial to call the next method
	This.InvokeSuperMethod vwf
end sub

sub OnOpenClose
	World.Trace "in OnOpenClose now"

	if this.IsDoorOpen = True then
		World.Trace "in if"
		'this.contents.property(0).CloseDoor
		this.DoorGeom.CloseDoor
		this.IsDoorOpen = False
		World.Trace "set IsDoorOpen to False"
	else
		World.Trace "in else"
		'this.contents.property(0).OpenDoor
		this.DoorGeom.OpenDoor
		this.IsDoorOpen = True
		World.Trace "set IsDoorOpen to True"
	end if
end sub

' Changes the right-click menu name
sub UpdateOpenClose(MenuItem)
	if this.IsDoorOpen = False then
		MenuItem.MenuText = "Open"
		World.Trace "just set menuitem to open"
	else
		MenuItem.MenuText = "Close"
		World.Trace "just set menuitem to close"
	end if
end sub

sub OnMotionTypeChanged (hint, newname)
	if this.IsDoorOpen = true then
		World.Trace "about to set closed position and direction"
		this.DoorGeom.SetPosAndDir 0.0, 0.0, 0.0, 1.0, 0.0, 0.0
		this.DoorGeom.OpenDoor
	end if
end sub