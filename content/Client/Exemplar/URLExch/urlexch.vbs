Sub Install( module )

	' Create the URLExchanger Exemplar
	Dim URLExchanger
	Dim WebPageExemplar
	Dim OldURLExchangerMenu
	Dim URLExchangerMenu
	Dim URLExchangerMenuCustomize

	set WebPageExemplar = Exemplar ("WebPage")
	set URLExchanger = CreateExemplar("URLExchanger", WebPageExemplar)

	' Modify the menu (make a copy and add "Customize"
	set OldURLExchangerMenu = URLExchanger.menu
	set URLExchangerMenu = Global.CreateMenu
	OldURLExchangerMenu.copyto URLExchangerMenu
	URLExchanger.Menu = URLExchangerMenu
	Set URLExchangerMenuCustomize = Global.CreateMenuItem("Customize...", 0, URLExchanger, "", "OnSelectCustomize")
	URLExchanger.Menu.Add URLExchangerMenuCustomize
	
	'Set IsTakeable to false so it can be taken and dropped
	URLExchanger.IsTakeable = False

	' Add the customize method to the URLExchanger Exemplar
	URLExchanger.CreateAndAddMethod Global.METHOD_CLIENT, module, "OnSelectCustomize"

End Sub

sub OnSelectCustomize
	URLPath = "plazas\commons\fileshar\filegen.htm"
	ShowURLEx "URLExchangerWindow", "URLExchanger", URLPath, This, 45, 45, 407, 126
end sub
