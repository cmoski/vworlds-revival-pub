Option Explicit

'======================================
' Public declaration area
'--------------------------------------
'The following variables are references to the Client, World, and User objects
Public sobjVWClient, sobjWorld, sobjUser

Public sarrKeywords	'used to store predefined gesture strings
Public sblnWantEvents

Public	strConfusion, strNoLook, strCarrySomething, _
		strCarryNothing, strNoTake, strYouTake, _
		strNoDrop, strYouDrop, strTeleport, _
		strNewObjCreated, strHelp, strDestroyRoom, _
		strNoDestroyRoom, strNoDestroyImpl, strNotIsTakeable, _
		strNoDestroyPerm
		
'======================================


'======================================
' Initialization area
'--------------------------------------
Set sobjVWClient = Nothing
Set sobjWorld = Nothing
Set sobjUser = Nothing
sblnWantEvents = True

sarrKeywords = Array(_
	Array("wave", "WAVE"), _
	Array("waves", "WAVE"), _
	Array("bye", "WAVE"), _
	Array("hello", "WAVE"), _
	Array("hi", "WAVE"), _
	Array("goodbye", "WAVE"), _
	Array("turn around", "TURN"), _
	Array("turns around", "TURN"), _
	Array("happy", "SMILE"), _
	Array(":)", "SMILE"), _
	Array(":-)", "SMILE"), _
	Array("smile", "SMILE"), _
	Array("smiles", "SMILE"), _
	Array("laugh", "LAUGH"), _
	Array("laughs", "LAUGH"), _
	Array("lol", "LAUGH"), _
	Array("what", "LAUGH"), _
	Array("flirt", "FLIRT"), _
	Array("flirts", "FLIRT"), _
	Array(";(", "FLIRT"), _
	Array(";-(", "FLIRT"), _
	Array("shrug", "SHRUG"), _
	Array("shrugs", "SHRUG"), _
	Array("?", "SHRUG"), _
	Array("blush", "BLUSH"), _
	Array("blushes", "BLUSH"), _
	Array("angry", "ANGRY"), _
	Array("mad", "ANGRY"), _
	Array("sad", "ANGRY"), _
	Array(":(", "ANGRY"), _
	Array(":-(", "ANGRY"), _
	Array("sleep", "SLEEP"), _
	Array("sleeps", "SLEEP"), _
	Array("pose", "TRICK 3"), _
	Array("poses", "TRICK 3"), _
	Array("action", "TRICK 1"), _
	Array("act", "TRICK 1"), _
	Array("acts", "TRICK 1"))

'--------------------------------------
' Define strings for system replies
'--------------------------------------

strConfusion =		"Huh?"
strNoLook =			"There is no ~0 to examine."
strCarrySomething =	"You are carrying the following: "
strCarryNothing =	"You are carrying nothing."
strNoTake =			"There is no ~0 available to take."
strNotIsTakeable =	"You cannot take ~0."
strYouTake =		"You take "
strNoDrop =			"There is no ~0 in your inventory."
strYouDrop =		"You drop "
strNewObjCreated =	"New object [~0] created."

strDestroyRoom =	"You close your eyes and envision [~0] in your mind.  As the image fully coalesces on your inner eye, "+ _
					"you imagine a swirling wind enveloping the space.  As the wind grows into a chaotic tempest, [~0] begins "+ _
					"to break apart, it's shimmering pieces pulled into the cyclone.  Suddenly, all goes silent and you open "+ _
					"your eyes to find yourself in [~1], all vestiges of [~0] gone forever."

strNoDestroyRoom =	"There is no room by the name of [~0].  Nothing will be destroyed."

strNoDestroyPerm =	"You do not have permission to destroy ~0."

strNoDestroyImpl =	"There is no destroy function implemented for that object.  Use !destroyobject <Object> instead."

strTeleport =		"A shimmering portal appears in space.  "+ _
					"As you look through the light-warping haze, you get the impression that there is something behind it.  "+ _
					"You take a deep breath and step into the haze, greeting the brief dizziness that overcomes you."+vbCRLF+ _
					"You are teleported to [~0]!"

strHelp = 			"VWorlds MUD Client — Commands:"+vbCRLF+vbCRLF+ _
					"LOOK: describe the room and its contents"+vbCRLF+ _
					"LOOK <name>: examine an object or person"+vbCRLF+ _
					"SAY <text> or ""<text>: speak to the room"+vbCRLF+ _
					"EMOTE <text> or :<text>: express an action"+vbCRLF+ _
					"INVENTORY: list what you are carrying"+vbCRLF+ _
					"TAKE <name>: pick up an object"+vbCRLF+ _
					"DROP <name>: drop an object"+vbCRLF+ _
					"MOVE <direction>: move through a portal (N/S/E/W/NE/SE/NW/SW/U/D)"+vbCRLF+ _
					"N, S, E, W: shorthand for movement directions"+vbCRLF+vbCRLF+ _
					"Builder commands:"+vbCRLF+ _
					"@list rooms: lists all the rooms in the world"+vbCRLF+ _
					"@create room <name>: create a room and teleport to it"+vbCRLF+ _
					"@create object <name>: create an object in this room"+vbCRLF+ _
					"@create portal <roomname>: create a portal and return portal"+vbCRLF+ _
					"@destroy room <name>: destroy a room"+vbCRLF+vbCRLF+ _
					"!<script>: execute VBScript directly"+vbCRLF

'======================================


'======================================
' Name: window_onload
' Desc: Get things started
'--------------------------------------
Sub window_onload
	OnTopLoad
	scriptocx.VwClient = top.objClient.VWClient
End Sub
'======================================


'======================================
' Name: window_onunload
' Desc: Clean up on shut down
'--------------------------------------
Sub window_onunload()
	EnableButtons False
	top.RemoveFromEventList window
End Sub
'======================================


'======================================
' Name: txtChat_onfocus
' Desc:
'--------------------------------------
Sub txtChat_onfocus
	If txtChat.value = "" Then
		sobjWorld.FireUIEvent sobjUser, "vwRenderKeyNavEnabled", True
	End If
End Sub
'======================================


'======================================
' Name: txtChat_onblur
' Desc:
'--------------------------------------
Sub txtChat_onblur
	If Not(sobjVWClient Is Nothing) Then
		top.sstrChatText = txtChat.value
		sobjWorld.FireUIEvent sobjUser, "vwRenderKeyNavEnabled", False
	End If
End Sub
'======================================


'======================================
' Name: txtChat_onkeypress
' Desc:
'--------------------------------------
Sub txtChat_onkeypress
	If window.event.keyCode  = 13 Then
		If window.event.shiftkey Then
			DoEmote
		Else
			DoSay
		End If
	End If
End Sub
'======================================


'======================================
' Name: txtChat_onkeyup
' Desc:
'--------------------------------------
Sub txtChat_onkeyup
	If txtChat.value = "" Then
		sobjWorld.FireUIEvent sobjUser, "vwRenderKeyNavEnabled", True
	Else
		sobjWorld.FireUIEvent sobjUser, "vwRenderKeyNavEnabled", False
	End If
End Sub
'======================================


'======================================
' Name: OnTopLoad
' Desc:
'--------------------------------------
Sub OnTopLoad
	If StrComp(top.document.readyState, "complete", vbTextCompare) <> 0 Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If

	' register this window to recieve UI events
	If top.sblnAllowContextMenu Then top.AddToEventList window

	' get references to the client
	Set sobjVWClient = top.objClient.VWClient
	If top.sblnLoggedOn Then
		Set sobjWorld = sobjVWClient.World
		Set sobjUser = sobjWorld.User
		EnableButtons True
		txtChat.select
		txtChat.focus
		' Show welcome and help on first connect
		sobjWorld.FireUIEvent sobjUser, "MUDReport", "Welcome to " & sobjWorld.WorldName & "." & vbCRLF & "Type HELP for a list of commands. Type LOOK to see your surroundings." & vbCRLF
	Else
		window.setTimeout "OnTopLoad", 250, "vbs"
	End If

	top.sstrChatText = txtChat.value
End Sub
'======================================


'======================================
' Name: EnableButtons
' Desc:
'--------------------------------------
Sub EnableButtons(blnEnabled)
	txtChat.disabled = Not blnEnabled
	btnSay.enabled = blnEnabled
	btnEmote.enabled = blnEnabled
End Sub
'======================================

'======================================
' Name: DoBtnSay
' Desc: Fires when the say button is explicitly clicked
'--------------------------------------
sub DoBtnSay()
	txtChat.value = chr(34)+txtChat.value
	DoSay
end sub
'======================================

'======================================
' Name: DoSay
' Desc: Fires when the text is entered
'--------------------------------------
sub DoSay()
	Dim theText, lcasesubject, arrSubject, tmpObject, tmpObject2
	Dim tmpRoomS, tmpRoomD, tmpPortalS, tmpPortalD
	Dim verb, subject, description, CurUser, theThing
	
	theText = Trim(txtChat.value)
	if (theText <> "") and (not (isWhiteSpace(theText))) and (theText <> "Type here and press ENTER to speak")  then
		set CurUser = sObjUser
		
		' check to see if this is a script command
		if left(theText,1)="!" then
			scriptocx.invoke right(theText, len(theText)-1)
		else
			verb = ""
			
			' Check special cases
			' Check for " shortcut to SAY
			if left(theText,1)=chr(34) then
				theText = right(theText,len(theText)-1)
				verb = "SAY"
			' Check for : shortcut to EMOTE
			elseif left(theText,1)=":" then
				theText = right(theText,len(theText)-1)
				verb = "EMOTE"
			end if
			
			' parse for MUD command and strip the subject from the text
			if verb = "" then
				verb=parseverb(theText)
				subject=getsubject(theText)
			end if
			
			lcasesubject = lcase(subject)
			
			select case verb
				case "LOOK"
					if subject <> "" then
						if lcasesubject="me" or lcasesubject="self" then
							set theThing = CurUser
						else
							set theThing = CurUser.Container.FindWithin(subject)
							if theThing is nothing then
								' Try a more hard core search through the objects in the room
								set theThing = findobject(CurUser.Container, subject, True)
							end if
						end if
						
						if theThing is nothing then
							description = FillInTemplate(strNoLook, array(lcase(subject)))
						else
							description = DoLook(theThing, CurUser)
						end if
					else
						' describe the contents of the room
						description = DoLook(CurUser.Container, CurUser)
					end if
					
				case "INVENTORY"
					description = strCarrySomething
					dim stuff
					stuff = Describe("Artifact", CurUser, CurUser)
					if stuff = "" then
						description = strCarryNothing
					else
						description = description + stuff
					end if
					
				case "TAKE"
					if subject <> "" then
						set theThing = findobject(CurUser.Container, subject, False)

						if theThing is nothing then
							description = FillInTemplate(strNoTake, array(lcase(subject)))
						else
							if not(theThing.isTakeable) then
								description = FillInTemplate(strNotIsTakeable, array(lcase(subject)))
							else
								description = strYouTake + theThing.Name
								theThing.MoveInto CurUser
							end if
						end if

						description = description + addperiod(description)

					else
						description = strConfusion
					end if
					
				case "DROP"
					if subject <> "" then
						set theThing = findobject(CurUser, subject, False)
						if theThing is nothing then
							description = FillInTemplate(strNoDrop, array(lcase(subject)))	
						else
							description = strYouDrop + theThing.Name
							description = description + addperiod(description)
						end if

						if not theThing is nothing then
							' Do the drop operation.
							theThing.MoveInto CurUser.Container
						end if
					else
						description = strConfusion
					end if
					
				case "MOVE"
					if subject <> "" then
						description = ""
						movethroughportal subject, CurUser, description, False
					else
						description = strConfusion
					end if
					
				case "SAY"
					' this will result in theText being "said"
					description = ""
					CurUser.Say theText
					
				case "EMOTE"
					' this will result in theText being "gestured"
					description = ""
					CurUser.SayGesture theText
	
				case "LIST"
					if lcasesubject <> "" then
						arrSubject = split(lcasesubject, " ")

						select case arrsubject(0)
							case "rooms"
								description = TraceRoomList(False)
							case "allrooms"
								description = TraceRoomList(True)
							case else
								description = strConfusion
						end select
					else
						description = strConfusion
					end if
				
				case "DESTROY"
					' for destroy, we want the whole command line after the create verb
					' so we use theText instead of subject, which is parsed for common words
					lcasesubject = lcase(theText)
					
					if lcasesubject <> "" then
						arrSubject = split(lcasesubject, " ")
						if ubound(arrSubject) >= 1 then
							'put the entire end of the command into a string for later analysis
							'preserve the case just in case the user wants to be case sensitive
							subject=trim(right(theText, len(theText)-len(arrsubject(0))))
						end if
						
						set tmpObject = nothing
						
						select case arrsubject(0)
							case "room"
								if ubound(arrSubject) < 1 then
									' no name was given, so we'll destroy the current room
									set tmpObject = sobjUser.container
								else
									set tmpObject = FindRoomByName(subject)
								end if
								if not(tmpObject is nothing) then
									if sobjWorld.checkpolicy(tmpObject, sobjWorld.CP_OWNER + sobjWorld.CP_WIZARD + sobjWorld.CP_WORLDOWNER) then
										sobjUser.moveinto tmpObject
										description = FillInTemplate(strDestroyRoom, array(tmpObject.name, sobjWorld.DefaultRoom.name))
										tmpObject.name = "@destroyed_"+tmpObject.name
										sobjUser.moveinto sobjWorld.DefaultRoom
									else
										description = FillInTemplate(strNoDestroyPerm, array(subject))
									end if
								else
									description = FillInTemplate(strNoDestroyRoom, array(subject))
								end if
							case else
								description = strNoDestroyImpl
						end select
					end if
			
				case "CREATE"
					' for create, we want the whole command line after the create verb
					' so we use theText instead of subject, which is parsed for common words
					lcasesubject = lcase(theText)
					
					if lcasesubject <> "" then
						arrSubject = split(lcasesubject, " ")
						if ubound(arrSubject) >= 1 then
							'put the entire end of the command into a string for later analysis
							'preserve the case just in case the user wants to be case sensitive
							subject=trim(right(theText, len(theText)-len(arrsubject(0))))
						end if
						
						select case arrsubject(0)
							case "object"
								if ubound(arrSubject) < 1 then
									' no name was given, so we'll make one up
									set tmpObject = sobjWorld.CreateInstance("tmpObj","Artifact",CurUser.container)
									tmpObject.name = "Object_"+cstr(tmpObject.id)
								else
									set tmpObject = sobjWorld.CreateInstance(subject, "Artifact", CurUser.container)
								end if
								tmpObject.IsTakeable = True
								description = FillInTemplate(strNewObjCreated, array(tmpObject.name))
							case "room"
								if ubound(arrSubject) < 1 then
									' no name was given, so we'll make one up
									set tmpObject = sobjWorld.CreateInstance("tmpRoom","Room")
									tmpObject.name = "Room_"+cstr(tmpObject.id)
								else
									set tmpObject = sobjWorld.CreateInstance(subject, "Room")
								end if					
								tmpObject.description = tmpObject.name
								CurUser.moveinto tmpObject
								description = FillInTemplate(strTeleport, array(tmpObject.name))
							case "portal"
								if ubound(arrSubject) < 1 then
									description = "You cannot create a portal without specifying a destination name."
								else
									set tmpRoomD = FindRoombyName(subject)
									
									if not(tmpRoomD is nothing) then
										'Create the portal in this room
										set tmpRoomS = CurUser.container
										set	tmpPortalS = sobjWorld.CreateInstance("portal to "+subject, "Portal", tmpRoomS)
										set tmpPortalD = sobjWorld.CreateInstance("portal to "+tmpRoomS.name, "Portal", tmpRoomS)
										tmpPortalS.description = tmpPortalS.name
										tmpPortalD.description = tmpPortalD.name
										tmpPortalS.destinations.add tmpPortalD
										tmpPortalD.destinations.add tmpPortalS
										tmpPortalD.moveinto tmpRoomD
									
										description = "Portals ["+tmpPortalS.name+"], ["+tmpPortalD.name+"] have been added!"
									else
										description = "No room by the name of ["+subject+"] could be located.  No portal was created."
									end if
								end if
							case else
								description = strConfusion
						end select
					else
						description = strConfusion
					end if
				
				case "HELP"
					description = strHelp
							
				case "UNKNOWN"
					movethroughportal subject, CurUser, description, True
						
			end select
			
			' cmds result in local updates; speech is forwarded on
			if description <> "" then
				description = description + chr(13) + chr(10)
				sobjWorld.FireUIEvent CurUser, "MUDReport", description
			end if
			
			txtChat.value = ""
		end if
	end if
	
	txtChat.Select
	txtChat.Focus
end sub
'======================================

function FindRoombyName(strRoomName)
	Dim listRoomIDs, listRoomNames, idFoundRoom, intRoomIndex, objRoom
	
	' Build list of room names from the world.
	set listRoomIDs = sobjWorld.global.createpropertylist
	for each objRoom in sobjWorld.global.rooms
		listRoomIDs.add objRoom.id
	next
	set listRoomNames = sobjWorld.global.GetNamesFromIDs(listRoomIDs)
	
	idFoundRoom = 0
	for intRoomIndex = 0 to listRoomNames.count-1
		if listRoomNames.property(intRoomIndex)=strRoomName then
			idFoundRoom = listRoomIDs.property(intRoomIndex)
			exit for
		end if
	next
	
	if idFoundRoom <> 0 then
		set FindRoombyName = sobjWorld.ObjectByID(idFoundRoom)
	else
		set FindRoombyName = nothing
	end if
	
end function

function TraceRoomList(boolListDestroyed)
	Dim listRoomIDs, listRoomNames, intRoomIndex, objRoom
	
	' Build list of room names from the world.
	set listRoomIDs = sobjWorld.global.createpropertylist
	for each objRoom in sobjWorld.global.rooms
		listRoomIDs.add objRoom.id
	next
	set listRoomNames = sobjWorld.global.GetNamesFromIDs(listRoomIDs)
	
	TraceRoomList = "[<room name>]:<room id>"+vbCRLF
	for intRoomIndex = 0 to listRoomNames.count-1
		if boolListDestroyed then
			TraceRoomList = TraceRoomList + "["+listRoomNames.property(intRoomIndex)+"]:"+cstr(listRoomIDs.property(intRoomIndex))+vbCRLF
		elseif instr(listRoomNames.property(intRoomIndex),"@destroyed_") = 0 then
			TraceRoomList = TraceRoomList + "["+listRoomNames.property(intRoomIndex)+"]:"+cstr(listRoomIDs.property(intRoomIndex))+vbCRLF
		end if
	next
	
end function

function FillInTemplate(strTemplate, arrParameters)
	Dim intI
	
	FillInTemplate = strTemplate
	for intI = 0 to ubound(arrParameters)
		FillInTemplate = replace(FillInTemplate, "~"+cstr(intI), cstr(arrParameters(intI)))
	next
end function

function parseverb(inString)
	parseverb="UNKNOWN"
	
	if findandskipverb(inString, "L,LOOK,EXAMINE,WATCH,READ") then
		parseverb="LOOK"
		exit function
	end if
	
	if findandskipverb(inString, "GET,TAKE,PICK UP") then
		parseverb="TAKE"
		exit function
	end if

	if findandskipverb(inString, "DROP,THROW,PUT DOWN") then
		parseverb="DROP"
		exit function
	end if

	if findandskipverb(inString, "MOVE,GO,WALK,RUN") then
		parseverb="MOVE"
		exit function
	end if
	
	if findandskipverb(inString, "I,INVENTORY") then
		parseverb="INVENTORY"
		exit function
	end if

	if findandskipverb(inString, "SAY,COMMENT,YELL,SCREAM,SPEAK") then
		parseverb="SAY"
		exit function
	end if
	
	if findandskipverb(inString, "EMOTE,EMIT,GESTURE") then
		parseverb="EMOTE"
		exit function
	end if

	if findandskipverb(inString, "@CREATE") then
		parseverb="CREATE"
		exit function
	end if
	
	if findandskipverb(inString, "@TELEPORT") then
		parseverb="TELEPORT"
		exit function
	end if
	
	if findandskipverb(inString, "HELP,?,@HELP") then
		parseverb="HELP"
		exit function
	end if
	
	if findandskipverb(inString, "@LIST") then
		parseverb="LIST"
		exit function
	end if

	if findandskipverb(inString, "@DESTROY") then
		parseverb="DESTROY"
		exit function
	end if
	
end function

function findandskipverb(inString, searchtokens)
	findandskipverb = false

	dim tokarray
	tokarray=split(searchtokens,",")
	dim stringascmd
	stringascmd = split(inString, " ", 2)
	
	dim cmd	
	dim index
	cmd = UCase(stringascmd(0))
	
	for index = 0 to ubound(tokarray)
		if tokarray(index) = cmd then
			findandskipverb = true
			if UBound(stringascmd) > 0 then
				inString = stringascmd(1)
			else
				inString = ""
			end if
			exit for
		end if		
	next
	
end function

function getsubject(inString)
	dim cw
	cw=array("AND","THE","AN","A","SOME","ONE","AT","IN","INSIDE","THROUGH","TO")
	getsubject=UCase(" " + inString)
	
	dim index
	for index = 0 to ubound(cw)
		getsubject=replace(getsubject, " " + cw(index) + " ", " ")
	next
	getsubject=replace(getsubject,"  "," ")
	getsubject=trim(getsubject)
end function

function DoLook(what, CurUser)
	dim AddString
	AddString = ""
	
	DoLook = what.Description
	DoLook = DoLook + addperiod(DoLook)

	if what.type = "Room" then
		
		if ucase(left(DoLook,3))<>"YOU" then
			DoLook = "You are in "+DoLook
		end if
		
		if not what.contents is nothing then
			' look through the room objects and describe them
			DoLook = DoLook + Describe("Artifact", what, CurUser)

			' look through the portals in the room if any and describe them
			AddString = Describe("Portal", what, CurUser)
			if AddString <> "" then
				DoLook = DoLook + chr(13) + chr(10) + AddString
			end if
				
			'look through other avatars in the room and describe them
			AddString = Describe("Avatar", what, CurUser)
			if AddString <> "" then
				DoLook = DoLook + chr(13) + chr(10) + "Also in the room : "+AddString
			end if
		end if
	else
		' in case the Description was blank
		if DoLook = "" then
			DoLook = what.Name
			DoLook = DoLook + addperiod(DoLook)
		end if
	end if
end function

function Describe(thingtype, where, whosaskin)
	Describe=""
	dim RoomObject
	dim textprefix
	dim skipname
	
	' we don't want to describe ourselves
	if whosaskin is nothing then
		skipname=""
	else
		skipname=whosaskin.name
	end if

	for each RoomObject in where.contents
		if (RoomObject.type=thingtype) and (RoomObject.isVisible) then
			if where.type="Room" then
				select case thingtype
					case "Artifact"
						if Describe <> "" then
							Describe = Describe + ", "
						else
							Describe = "  Here you see "
						end if
						Describe = Describe + RoomObject.Name
					case "Portal"
						if Describe <> "" then
							Describe=Describe+ "  "
						end if
						Describe = Describe + RoomObject.Description
					case "Avatar"
						if RoomObject.isValidProperty("IsConnected") then
							if RoomObject.Name <> skipname then
								if Describe <> "" then
									Describe = Describe + ", "
								end if
								Describe = Describe + RoomObject.Name
							end if
						end if
				end select
			end if
			if where.type="Avatar" then
				if Describe <> "" then
					Describe = Describe + ", " + RoomObject.Name
				else
					Describe = RoomObject.Name
				end if
			end if
		end if
	next
	
	Describe = Describe + addperiod(Describe)
	set RoomObject=nothing
end function

function findobject(aContainer, thedesc, allowavatars)
	dim aThing
	set findobject=nothing
	for each aThing in aContainer.contents
		if (aThing.type="Artifact" or (allowavatars and aThing.type="Avatar")) and aThing.isVisible then
			if (instr(ucase(aThing.name),thedesc) > 0) or (instr(ucase(aThing.Description),thedesc) >0) then
				set findobject=aThing
				exit for
			end if
		end if
	next
end function

function findportal(theRoom, theDirection, implicit)
	dim aPortal
	set findportal=nothing
	theDirection = ucase(theDirection)

	select case theDirection
		case "N"
			theDirection = "NORTH"
		case "S"
			theDirection = "SOUTH"
		case "E"
			theDirection = "EAST"
		case "W"
			theDirection = "WEST"
		case "NE"
			theDirection = "NORTHEAST"
		case "SE"
			theDirection = "SOUTHEAST"
		case "NW"
			theDirection = "NORTHWEST"
		case "SW"
			theDirection = "SOUTHWEST"
		case "U"
			theDirection = "UP"
		case "D"
			theDirection = "DOWN"
	end select
	
	for each aPortal in theRoom.contents
		if aPortal.type="Portal" then
			if ucase(aPortal.name)=theDirection then
				set findportal=aPortal
				exit for
			end if
		end if
	next
	
	if findportal is nothing and not implicit then
		' Try a more hardcore search
		for each aPortal in theRoom.contents
			if aPortal.type="Portal" then
				if (instr(ucase(aPortal.name),theDirection) > 0) or (instr(ucase(aPortal.description),theDirection) > 0) then
					set findportal=aPortal
					exit for
				end if
			end if
		next
	end if

end function

sub movethroughportal(thePortal, theUser, description, implicit)
	dim mPortal
	set mPortal = findportal(theUser.Container, thePortal, implicit)
	if not mPortal is nothing then
		if mPortal.IsValidProperty("SuccessMessage") then
			if mPortal.SuccessMessage <> "" then
				description = mPortal.SuccessMessage
				description = description + addperiod(description)
				description = description + chr(13) + chr(10)
				sobjWorld.FireUIEvent theUser, "MUDReport", description
				description = ""
			end if
		end if
		mPortal.Transport theUser
		exit sub
	end if	
	description = "You cannot move in that direction."
end sub
	
function addperiod(inString)
	if inString = "" then
		addperiod = ""
	else
		if right(inString,1)="." then
			addperiod=""
		else
			addperiod="."
		end if
	end if
end function

function isWhiteSpace(text)
	dim copytext
	copytext = text
	copytext = replace(copytext," ","")
	copytext = replace(copytext,chr(9),"")
	if len(copytext) > 0 then
		isWhiteSpace = false
	else
		isWhiteSpace = true
	end if
end function


'======================================
' Name: DoEmote
' Desc: Fires when the emote button is clicked
'--------------------------------------
Sub DoEmote
	Dim strText, arrKeyWord, blnDidEmote

	blnDidEmote = False
	strText = Trim(txtChat.value)
	If strText <> "" And strText <> "Type here and press Enter to speak" Then
		For Each arrKeyWord In sarrKeywords
			If StrComp(strText, arrKeyWord(0), vbTextCompare) = 0 Then
				sobjUser.Emote arrKeyWord(1)
				blnDidEmote = True
				Exit For
			End If
		Next
		If Not blnDidEmote Then sobjUser.SayGesture strText
	Else
		MsgBox "Enter text to emote.", vbOKOnly + vbInformation, top.sstrAppName
	End If
	txtChat.value = ""
	txtChat.focus
End Sub
'======================================


'======================================
' Name: HandleUIEvent
' Desc: Fires when the client gets a Handle UI event
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Select Case strEventName
	Case "OnUserConnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = sobjVWClient.World
			Set sobjUser = sobjWorld.User
			EnableButtons True
			txtChat.select
			txtChat.focus
		End If
	Case "OnUserDisconnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = Nothing
			Set sobjUser = Nothing
			EnableButtons False
		End If
	Case "vwRenderKeyPress"
		Select Case vntArgs
		Case 13
			If Not(sobjUser Is Nothing) Then DoSay
		Case Else
			txtChat.value = txtChat.value & Chr(vntArgs)
		End Select
	Case "vwClearChatInput"
		txtChat.value = ""
		top.sstrChatText = txtChat.value
	Case Else
	End Select
End Sub
'======================================
