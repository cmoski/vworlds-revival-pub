Sub Install( module )
	' Create the SubThing exemplar
	Dim SubThing 
	Dim ArtifactExemplar
	set ArtifactExemplar = Exemplar ("Artifact")
	set SubThing  = CreateExemplar("SubThing", ArtifactExemplar)

	' Create SubThing menu
	Dim ArtifactMenu
	Dim SubThingMenu
	set ArtifactMenu = ArtifactExemplar.menu
	set SubThingMenu = Global.CreateMenu
	ArtifactMenu.copyto SubThingMenu

	' Add properties to SubThing
	SubThing.AddProperty "Texture"

	' Add methods to SubThing
	SubThing.CreateAndAddMethod world.METHOD_CLIENT, module, "SetTexture"
	SubThing.CreateAndAddMethod world.METHOD_CLIENT, module, "OnTextureChanged"
	SubThing.CreateAndAddMethod world.METHOD_CLIENT, module, "OnGeometryChanged"
	SubThing.CreateAndAddMethod world.METHOD_SERVER, module, "SetTextureURL"

	' add the GetMenuList method so SubThings will display their container's menu
	dim crLF
	crLF = chr(13) + chr(10)
	dim MenuCode
	MenuCode =          "function GetMenuList" + crLF
	MenuCode = MenuCode + "    set GetMenuList = This.Container.GetMenuList" + crLF
	MenuCode = MenuCode + "end function" + crLF
	Dim GetMenuListMethod
	set GetMenuListMethod = CreateInlineMethod(world.METHOD_CLIENT, "VBScript", "GetMenuList", MenuCode)
	SubThing.Method("GetMenuList") = GetMenuListMethod

end sub

sub OnTextureChanged(hint, newname)
	This.SetTexture
end sub

sub OnGeometryChanged(hint, newname)
	This.SetTexture
end sub

sub SetTexture
	Dim Geom
	Dim GeomFrame

	set Geom = This.GetFrame

	if Geom Is Nothing then
		World.Trace "SubThing::SetTexture: GetFrame returned NULL"
	else
		set GeomFrame = Geom.GetFrameByName("geom")

		if GeomFrame Is Nothing then
			World.Trace "SubThing::SetTexture: GetFrameByName returned NULL"
		else
			GeomFrame.SetMeshTextureFromURL 0, This.Texture
		end if
	end if
end sub

sub SetTextureURL(url)
	' NYI: verify that caller is owner or wizard

	this.Texture = url
end sub 

	
