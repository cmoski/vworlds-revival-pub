option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:		make_bot_exemplar
'//  Purpose:	create the bot exemplar and define its methods
'//  Arguments: none
'////////////////////////////////////////////////////////////////////////
sub make_bot_exemplar
	' lastVisitDate is a property map keyed by avatar name, 
	' containing the date of each avatar's last visit to the world
	world.global.addProperty "lastVisitDate", world.CreatePropertyMap, , world.PS_ALL_RWA

	Dim ArtifactExemplar
	Dim bot 
	set ArtifactExemplar = world.Exemplar ("Artifact")
	set bot = world.CreateExemplar("bot", ArtifactExemplar)
	bot.IsVisible = true
	bot.IsContentsVisible = true
	bot.IsUiVisible = true

	' clickText is sent to the chat pane when the user clicks on the bot,
	' or enters the bot's secretWord in the chat text entry box
	bot.AddProperty "clickText", "", , world.PS_ALL_RWA
	' clickURL is the URL of a web page displayed in the web pane when the user clicks on the bot
	bot.AddProperty "clickURL", "", , world.PS_ALL_RWA
	' clickSound is played when the user clicks on the bot
	bot.AddProperty "clickSound", Nothing, , world.PS_ALL_RWA
	' typing secret_word in the chat text entry acts like clicking on the bot
	bot.AddProperty "secret_word", "", , world.PS_ALL_RWA

	' greetText is sent to the chat pane when a user logs in for the first time or after more than a 2-month absence
	bot.AddProperty "greetText", "", , world.PS_ALL_RWA
	' greetingEnabled and world.lastVisitDate control whether greetText is displayed 
	bot.AddProperty "greetingEnabled", false, , world.PS_ALL_RWA

	bot.CreateAndAddMethod World.METHOD_CLIENT, Deskbots_module, "bot_GreetUser", "GreetUser",  , world.PS_ALL_E + world.PS_ALL_RWA
	bot.CreateAndAddMethod World.METHOD_CLIENT, Deskbots_module, "bot_PeerTell", "OnPeerTell",  , world.PS_ALL_E + world.PS_ALL_RWA
	bot.CreateAndAddMethod World.METHOD_CLIENT, Deskbots_module, "bot_OnLButtonUp", "OnLButtonUp",  , world.PS_ALL_E + world.PS_ALL_RWA
	bot.CreateAndAddMethod World.METHOD_CLIENT, Deskbots_module, "bot_OnIntersectee", "OnIntersectee",  , world.PS_ALL_E + world.PS_ALL_RWA
end sub
