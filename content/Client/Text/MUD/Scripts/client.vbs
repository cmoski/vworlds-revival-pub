Option Explicit

'======================================
' Public declaration area
'--------------------------------------
'The following variables are used to store the preferences set in the Options dialog
Public sintUseHWAcceleration, sintDrawFastWhenMoving, sintColorModel, sblnAutoDownloadAvatars
Public sblnShowThumbnailsOnly, sblnPlaySoundFX, sblnShowGestures, sblnShowEvents, sblnShowSysMsgs

Public sstrUser	'stores the last used user name used to loggon

Public sarrWantsEventsList	'Array used to track windows that want events

Public sblnLoggedOn	'This flag is used by child windows to determine if they should load
Public sblnWillfulDisconnect	'This flag is used to indicate the user intentionally disconnected from a world

Public sstrChatText	'used to store the value of the chat textbox
Public sstrAppName	'used for message box titles
Public sblnAllowContextMenu	'used for debugging when the developer want's to allow the IE right mouse menu
'======================================


'======================================
' Initialization area
'--------------------------------------
sintUseHWAcceleration = -1
sintDrawFastWhenMoving = -1
sintColorModel = -1
sblnAutoDownloadAvatars = True
sblnShowThumbnailsOnly = False
sblnPlaySoundFX = True
sblnShowGestures = True
sblnShowEvents = True
sblnShowSysMsgs = False

sblnLoggedOn = False
sblnWillfulDisconnect = False
sstrAppName = "Microsoft Virtual Worlds"
sblnAllowContextMenu = True
sarrWantsEventsList = Array()
'======================================


'======================================
' Name: window_onload
' Desc: Get things started
'--------------------------------------
Sub window_onload
	CountChildren window
	If LoadPrefs = False Then
		window.close
		Exit Sub
	End If
	set objAvatars.VWClient = objClient.VWClient
	If screen.width < 800 Or screen.height < 600 Then
		MsgBox "This Virtual Worlds client may not display properly at resolutions less than 800x600.", vbOkOnly + vbExclamation, sstrAppName
	End If
	window.setTimeout "ShowLogon", 0, "vbs"
End Sub
'======================================


'======================================
' Name: window_onbeforeunload
' Desc:
'--------------------------------------
Sub window_onbeforeunload
	If sblnLoggedOn Then
		window.event.returnValue = "You will be logged out of Microsoft Virtual Worlds if you leave."
	End If
End Sub
'======================================


'======================================
' Name: window_onunload
' Desc:
'--------------------------------------
Sub window_onunload
	If Not objClient.VWClient.World Is Nothing Then
		sblnWillfulDisconnect = True
		' disconnect from avatar
		objClient.VWClient.World.Disconnect
		' disconnect from server
		objClient.VWClient.Disconnect
	End If
End Sub
'======================================


'======================================
' Name: CountChildren
' Desc:
'--------------------------------------
Sub CountChildren(objWnd)
	Dim intCount

	For intCount = 0 to objWnd.frames.length - 1
		Do While objWnd.frames(intCount).document.readyState <> "complete"
		Loop
		If objWnd.frames(intCount).sblnWantEvents Then
			AddToEventList objWnd.frames(intCount)
		End If
		If objWnd.frames(intCount).frames.length > 0 Then
			CountChildren objWnd.frames(intCount)
		End If
	Next
End Sub
'======================================


'======================================
' Name: AddToEventList
' Desc: Adds the item to the event list
'--------------------------------------
Sub AddToEventList(objWindow)
	Dim intUB, objItem, blnFound

	blnFound = False
	If TypeName(sarrWantsEventsList) = "Empty" Then
		sarrWantsEventsList = Array()
	End If
	For Each objItem in sarrWantsEventsList
		If objItem Is objWindow Then
			blnFound = True
			Exit For
		End If
	Next
	If Not blnFound Then
		intUB = UBound(sarrWantsEventsList) + 1
		ReDim Preserve sarrWantsEventsList(intUB)
		Set sarrWantsEventsList(intUB) = objWindow
	End If
End Sub
'======================================


'======================================
' Name: RemoveFromEventList
' Desc: Removes the item from the specified event list
'--------------------------------------
Sub RemoveFromEventList(byVal objWindow)
	Dim intCount, intUB, blnFound

	blnFound = False
	If TypeName(sarrWantsEventsList) <> "Empty" Then
		intUB = UBound(sarrWantsEventsList)
		' exit routine if invalid values
		If intUB < 0 Then Exit Sub
		If Not IsObject(objWindow) Then Exit Sub
		' loop through array shifting all the entries following the item being remove forward one place
		For intCount = 0 To intUB
			If IsObject(sarrWantsEventsList(intCount)) Then
				If blnFound Then
					If intCount < intUB Then Set sarrWantsEventsList(intCount) = sarrWantsEventsList(intCount + 1)
				ElseIf sarrWantsEventsList(intCount) Is objWindow Then
					If intCount < intUB Then Set sarrWantsEventsList(intCount) = sarrWantsEventsList(intCount + 1)
					blnFound = True
				End If
			End If
		Next
		' remove the last place in the array
		If blnFound Then ReDim Preserve sarrWantsEventsList(intUB - 1)
	End If
End Sub
'======================================


'======================================
' Name: ShowLogon
' Desc: Shows the logon dialog
'--------------------------------------
Sub ShowLogon
	Dim strWorldURL

	sblnWillfulDisconnect = True
	If Not objClient.VWClient.World Is Nothing Then
		objClient.VWClient.world.Disconnect
	end if
	objClient.VWClient.Disconnect
	set objAvatars.VWClient = objClient.VWClient
	sblnLoggedOn = False
	' if we are going to to show the logon then we need to reload the render frame
	strWorldURL = window.showModalDialog("LogOn.htm", top, "dialogHeight:200px;dialogWidth:370px;help:no;status:no;")
	If strWorldURL = "" Then
		window.close
		Exit Sub
	Else
		sblnWillfulDisconnect = True
		objClient.VWClient.Disconnect
		sblnLoggedOn = False
		window.status = "Logging into " & strWorldURL & " as " & sstrUser & "..."
		window.setTimeout "Logon """ & strWorldURL & """", 0, "vbs"
	End If
End Sub
'======================================

'======================================
' Name: ConnectFromDS
' Desc: Logs user onto specified world from the DS page
'--------------------------------------
Function ConnectFromDS(strWorldURL)
	Dim strCurAvatar, objWorld

	Set objWorld = objClient.VWClient.World
	strCurAvatar = objWorld.User.Profile.KeyValue("PreferredName")
	window.status = "Logging into " & strWorldURL & " as " & strCurAvatar & "..."
	On Error Resume Next
	Err.clear
	objWorld.Reconnect strWorldURL, strCurAvatar, objWorld.user.password
	If Err.Number < 0 Then
		MsgBox "Directory Service connection failed: (" & err.description & ")", vbOkOnly + vbInformation, sstrAppName
		ConnectFromDS = False
	Else
		ConnectFromDS = True

		' set the flag so that any waiting child windows can load
		sblnLoggedOn = True
		' if we are going to to show the logon then we need to reload the render frame
	End If
	window.status = ""
End Function
'======================================


'======================================
' Name: Logon
' Desc: Logs user onto specified world
'--------------------------------------
Sub Logon(strWorldURL)
	Dim objWorld, objUser, intErrNum, sErrMsg

	' disable error trapping
	On Error Resume Next
	Err.Clear

	' start up client OC
	Set objWorld = objClient.VWClient.Connect(strWorldURL)
	intErrNum = Err.Number
	strErrMsg = Err.Description

	If objWorld Is Nothing Then
		Select Case intErrNum
		Case -2147220901
			MsgBox "Failed to connect to " & strWorldURL & ".  The Virtual Worlds Server is running a different version than the Virtual Worlds client.", vbOkOnly + vbCritical, sstrAppName
		Case Else
			MsgBox "Failed to connect to " & strWorldURL & ".  Check the spelling. If the problem persists, contact the server administrator.", vbOkOnly + vbCritical, sstrAppName
		End Select
		window.setTimeout "ShowLogon", 0, "vbs"
	Else
		' log the user in
		Err.Clear
		Set objUser = objWorld.Connect(sstrUser, "")
		intErrNum = Err.Number
		strErrMsg = Err.Description

		If TypeName(objUser) <> "IThing" Then
			Select Case intErrNum
			Case -2147220949
				MsgBox "Connection attempt failed.  This avatar is already connected to the world.", vbOkOnly + vbExclamation, sstrAppName
			Case -2147220917
				MsgBox "Connection attempt canceled.", vbOkOnly + vbExclamation, sstrAppName
			Case Else
				MsgBox "Connection attempt failed: " & strErrMsg & ".", vbOkOnly + vbCritical, sstrAppName
			End Select
			window.setTimeout "ShowLogon", 0, "vbs"
		Else
			' set trace level to minimize noise
			objWorld.TraceLevel("*") = 4
			' disable trace for speed
			objWorld.EnableTrace False
			' navigate windows to right spot
			objWorld.Synchronize
			'save the last world logged into
			SaveLastWorld strWorldURL
			' set the flag to false to handle accidental disconnect.
			sblnWillfulDisconnect = False
			' set the flag so that any waiting child windows can load
			sblnLoggedOn = True
			objWorld.global.EnableAutoDownload = CBool(sblnAutoDownloadAvatars)
		End If
	End If
	window.status = ""
End Sub
'======================================


'======================================
' Name: SaveLastWorld	(formerly UpdateAvatarProfile)
' Desc: Saves the currently logged world to the profile for use in the MRU
'--------------------------------------
Sub SaveLastWorld(strWorldURL)
	Dim objUser, objWorldList, blnFound, intCount

	' set the "LastWorld" key to this world
	Set objUser = objClient.VWClient.World.User

	objUser.Profile.KeyValue("LastWorld") = strWorldURL

	' add to the recent world list if it isn't already there
	Set objWorldList = objUser.Profile.KeyValue("RecentWorlds")
	blnFound = False

	If objWorldList.Count > 0 Then
		For intCount = 0 To objWorldList.Count - 1
			If strWorldURL = objWorldList.Property(intCount) Then
				blnFound = True
				Exit For
			End If
		Next
	End If

	If Not blnFound Then
		objWorldList.Add strWorldURL
		objUser.Profile.KeyValue("RecentWorlds") = objWorldList
	End If
End Sub
'======================================


'======================================
' Name: HandleLogOff
' Desc:
'--------------------------------------
Sub HandleLogOff(objHost, objTarget, strReason)
	Dim strMsg

	If objClient.VWClient.World.User Is objTarget Then
		strMsg = "Host " & objHost.Name & " is logging you off for the following reason: " & strReason
		MsgBox strMsg, vbInformation, sstrAppName
		ShowLogon
	End If
End Sub
'======================================


'======================================
' Name: objClient_OnUserReconnect
' Desc: Event fired when the user reconnects to a world
'--------------------------------------
Sub objClient_OnUserReconnect(objNewClient, objNewWorld, objNewAvatar)
	Dim objWnd, strNewWorld

'	strNewWorld = ""
'	' now fire the event to each window
'	For Each objWnd In sarrWantsEventsList
'		objWnd.HandleOnConnect objNewWorld
'		objWnd.HandleUserConnect objNewAvatar
'		objWnd.HandleUIEvent objClient.VWClient.World.User, "OnUserDisconnect", objUser
'	Next
'	sblnLoggedOn = true
'	strNewWorld = objNewWorld.ServerName & "/" & objNewWorld.WorldName
'	If strNewWorld <> "" Then
'		SaveLastWorld strNewWorld
'	End If
End Sub
'======================================


'======================================
' Name: objClient_OnDisconnect
' Desc: Event fired when the world is diconnected
'--------------------------------------
Sub objClient_OnDisconnect(objWorld)
	If sblnWillfulDisconnect = False Then
		If objClient.VWClient.isConnected = False Then
			sblnWillfulDisconnect = True
			If MsgBox("The connection to the server has been unexpectedly terminated.  Attempt to reconnect?", vbYesNo + vbQuestion, sstrAppName) = vbYes Then
				'attempt to logon again
				'top.navigate "client.htm"
			Else
				'show logon dialog
			End If
		End If
	Else
		sblnWillfulDisconnect = False
	End If

	sblnLoggedOn = False
'	bFirstTime = True
End Sub
'======================================


'======================================
' Name: objClient_OnUserConnect
' Desc: Event fired when the user connects to a world
'--------------------------------------
Sub objClient_OnUserConnect(objUser)
	Dim objWnd

	If StrComp("~TemporaryWorldForCreatingAvatars", objUser.World.WorldName, vbTextCompare) <> 0 Then
		For Each objWnd In sarrWantsEventsList
			objWnd.HandleUIEvent objClient.VWClient.World.User, "OnUserConnect", objUser
		Next
	End If
End Sub
'======================================


'======================================
' Name: objClient_OnUserDisconnect
' Desc: Event fired when the user disconnects from a world
'--------------------------------------
Sub objClient_OnUserDisconnect(objUser)
	Dim objWnd

	If StrComp("~TemporaryWorldForCreatingAvatars", objUser.World.WorldName, vbTextCompare) <> 0 Then
		For Each objWnd In sarrWantsEventsList
			objWnd.HandleUIEvent objClient.VWClient.World.User, "OnUserDisconnect", objUser
		Next
	End If
End Sub
'======================================


'======================================
' Name: objClient_OnConnect
' Desc: Event fired when the world is connected
'--------------------------------------
Sub objClient_OnConnect(objWorld)
	Dim objWnd, strTemp

	If sblnLoggedOn = False Then
		For Each objWnd In sarrWantsEventsList
			objWnd.HandleUIEvent objClient.VWClient.World.User, "OnConnect", objWorld
		Next
	End If
end sub
'======================================


'======================================
' Name: objClient_OnReport
' Desc: Event fired when there is a condition warranting a report
'--------------------------------------
Sub objClient_OnReport(strMsg, lngType)
	Dim objWnd

	For Each objWnd In sarrWantsEventsList
		objWnd.HandleUIEvent objClient.VWClient.World.User, "OnReport", Array(strMsg, lngType)
	Next
End Sub
'======================================

'======================================
' Name: objClient_OnTrace
' Desc: Event fired when a trace occurs
'--------------------------------------
Sub objClient_OnTrace(strMsg)
	Dim objWnd, theUser
	
	set theUser = SafeGetUser()

	For Each objWnd In sarrWantsEventsList
		if not(objWnd is Nothing) then
			objWnd.HandleUIEvent theUser, "OnTrace", strMsg
		end if
	Next

End Sub
'======================================

'======================================
' Name: objClient_OnUIEvent
' Desc: responds to UI events generated by the world
'--------------------------------------
Sub objClient_OnUIEvent(objFrom, strEventName, vntArgs)
	Dim objWorld, objUser, intCount, objWnd, blnDispatchEvent

	' If world isn't valid then exit
	If objClient.VWClient.World Is Nothing Then Exit Sub
	Set objWorld = objClient.VWClient.World
	Set objUser = objWorld.user

	' if empty or error (optional arg)
	If IsEmpty(vntArgs) Or VarType(vntArgs) = vbError Then
		intCount = 0
	ElseIf IsArray(vntArgs) Then
		intCount = UBound(vntArgs) + 1
	ElseIf IsObject(vntArgs) Then
		If vntArgs Is Nothing Then
			intCount = 0
		Else
			Select Case typename(vntArgs)
				Case "IThing"
					if vntArgs.isstub then
						intCount = 0
					end if
				Case "IPropertyList"
					intCount = vntArgs.Count
				Case Else
					intCount = 1
			End Select
		End If
	Else
		intCount = 1
	End If

	Select Case strEventName
		Case "OnLogOff"
			HandleLogOff vntArgs.property(0), vntArgs.property(1), vntArgs.property(2)
		Case Else
	End Select

	' send the event to other interested pages..
	blnDispatchEvent = sblnLoggedOn
	If blnDispatchEvent = False Then
		blnDispatchEvent = IsCriticalEvent(strEventName)
	End If
	If blnDispatchEvent Then
		For Each objWnd In sarrWantsEventsList
			objWnd.HandleUIEvent objFrom, strEventName, vntArgs
		Next
	End If
End Sub
'======================================


'======================================
' Name: IsCriticalEvent
' Desc: Determines if an event is critical
'--------------------------------------
Function IsCriticalEvent(strEvent)
	Select Case strEvent
	Case "OnEnterRoom", "OnEnterWorld", "OnFinishSceneComposite"
		IsCriticalEvent = True
	Case Else
		IsCriticalEvent = False
	End Select
End Function
'======================================

'======================================
' Name: SafeGetUser
' Desc: Safely walks the object line to get the User
'--------------------------------------
Function SafeGetUser
	set SafeGetUser = nothing
	if not(objClient is Nothing) then
		if not(objClient.VWClient is Nothing) then
			if not(objClient.VWClient.World is Nothing) then
				set SafeGetUser = objClient.VWClient.World.User
			end if
		end if
	end if
End Function
'======================================
