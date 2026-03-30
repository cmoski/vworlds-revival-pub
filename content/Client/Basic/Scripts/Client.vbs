'======================================
' Desc: This file contains the script for
'       Client.htm. These two files are
'       the main client page.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sintUseHWAcceleration, sintDrawFastWhenMoving,
'       sintColorModel, sblnAutoDownloadAvatars,
'       sblnForceBackBufferingsobjTop, sblnShowThumbnailsOnly,
'       sblnPlaySoundFX, sblnShowGestures, sblnShowEvents, and
'       sblnShowSysMsgs are used to store the preferences set in
'       the options dialog.
'       sstrUser is a string used to store the most recently
'       selected avatar from the logon dialog.
'       sarrWantsEventsList is an array used to track pages that
'       want to recieve UI events.
'       sblnLoggedOn is a flag used by child pages to determine
'       when it is safe to continue initialization.
'       sblnWillfulDisconnect is a flag used to show the user deliberately
'       chose to disconnect.
'       sstrChatText is a string used to store the value from the
'       chat text box.
'       sstrAppName is a string used for the title in most messages.
'       sblnAllowContextMenu is a flag used for debugging purposes. If set to
'       true will allow the context menus to generate. Problems have been
'       encountered on the Render page is the refresh option is chosen on
'       this menu.
'       sblnLoggedOff is a flag used to determine if the user was logged of by
'       a host.
'       sobjMoreAbout, sobjCamera, sarrWhisper are variable that store object
'       references to modeless dialogs. They are used to close these dialogs
'       at certain times or to limit the number of dialogs that show.
'       blnAppClosing, blnCloseWhispDialogs are flags used to indicate to other
'       pages that the app is closing or the whisper dialog(s) are closing.
'--------------------------------------
Public sintUseHWAcceleration, sintDrawFastWhenMoving, sintColorModel, sblnAutoDownloadAvatars, sblnForceBackBuffering
Public sblnShowThumbnailsOnly, sblnPlaySoundFX, sblnShowGestures, sblnShowEvents, sblnShowSysMsgs
Public sstrUser
Public sarrWantsEventsList
Public sblnLoggedOn
Public sblnWillfulDisconnect
Public sstrChatText
Public sstrAppName
Public sblnAllowContextMenu
Public sblnLoggedOff
Public sstrWorldURL
Public sobjMoreAbout, sobjCamera, sarrWhisper
Public blnAppClosing, blnCloseWhispDialogs
'======================================



'======================================
' Name: Public Initializations
' Desc: Initial values are set for global variables.
'--------------------------------------
'Section 1
sintUseHWAcceleration = -1
sblnForceBackBuffering = True
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
sblnAllowContextMenu = False
sarrWantsEventsList = Array()
sblnLoggedOff = False
Set sobjMoreAbout = Nothing
Set sobjCamera = Nothing
sarrWhisper = Array()
blnAppClosing = False
blnCloseWhispDialogs = False
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page has loaded.
'       First the CountChildren routine is
'       called to register all pages that
'       want events, next an attempt is made
'       to load the preferences. If this fails
'       the app exits.
'       If the screen is less that 800x600
'       a warning message is displayed.
'       Finally the ShowLogon routine is called
'       in a timeout (so as to avoid stacking routine
'       and function calls).
'--------------------------------------
Sub window_onload
	CountChildren window
	If LoadPrefs = False Then
		window.close
		Exit Sub
	End If
	If screen.width < 800 Or screen.height < 600 Then
		MsgBox "This Virtual Worlds client may not display properly at resolutions less than 800x600.", vbOkOnly + vbExclamation, sstrAppName
	End If
	window.setTimeout "ShowLogon", 0, "vbs"
End Sub
'======================================



'======================================
' Name: window_onbeforeunload
' Desc: Fires before the unload event is fired.
'       If the user is logged on a message box
'       will be displayed asking the user to confirm
'       their action, usually the app being closed.
'--------------------------------------
Sub window_onbeforeunload
	If sblnLoggedOn Then
		window.event.returnValue = "You will be logged out of Microsoft Virtual Worlds if you leave."
	End If
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is closed.
'       A flag is set to indicate the app
'       is closing and if the world object
'       is still valid the willful disconnect flag
'       is set, the avatar is disconnected, and the
'       server is disconnected.
'--------------------------------------
Sub window_onunload
	blnAppClosing = True
	If Not objClient.VWClient.World Is Nothing Then
		sblnWillfulDisconnect = True
		objClient.VWClient.World.Disconnect
		objClient.VWClient.Disconnect
	End If
End Sub
'======================================



'======================================
' Name: CountChildren
' Args: objWnd - object reference of the page
'                to be searched in.
' Desc: This routine interates through each child
'       page in the argument page. It will wait (looping)
'       until the child page has loaded. Then if
'       the page has indicated it wants UI events
'       (by sblnWantEvents) the AddToEventList
'       routine is called. If the child page has children
'       this routine is called for the child page.
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
' Args: objWindow - object reference for page
'                   requesting to be added.
' Desc: This routine adds the page to the
'       event request list. It first checks
'       to see if the array variable has been
'       initialized. Then it checks to see if
'       the page is already registered. If not
'       the page is added.
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
' Args: objWindow - object reference for page
'                   requesting to be removed.
' Desc: This routine removes the page from the
'       event request list. It first checks
'       to see if the array variable has been
'       initialized, has at least one item, and that
'       the argument is an object. Then it searches
'       through the array for the window and removes it.
'       The array items that follow the deleted item
'       are shifted up on, and finally the array is
'       reduced in size by one.
'       Note: Timing issues may be experienced if more
'       than one registered page tries to unregister
'       at the same time. An error indicating the array
'       is locked is most common in those situations.
'       Several of the global flags are used just to
'       avoid these types of situations.
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
		If blnFound Then
			If intUB = 1 Then
				sarrWantsEventsList = Array()
			Else
				ReDim Preserve sarrWantsEventsList(intUB - 1)
			End If
		End If
	End If
End Sub
'======================================



'======================================
' Name: ShowLogon
' Desc: This routine shows the logon dialog and
'       if valid data is returned logs the user into
'       the chosen world.
'       Section 1 resets flags, disconnects from the
'       world and the client, and sets the client
'       reference in the avatar access control.
'       Section 2 displays the logon dialog modally,
'       and clears the client reference in the avatar
'       access control.
'       Section 3 closes the app if the logon dialog was
'       cancelled (no world URL was returned); otherwise,
'       if a world was returned the world and client are
'       disconnected, the logged on flag is cleared, the
'       status bar is updated, and the Logon routine is
'       called in a timeout (to avoid adding to the call
'       stack).
'--------------------------------------
Sub ShowLogon
	'Section 1
	sblnWillfulDisconnect = True
	If Not objClient.VWClient.World Is Nothing Then
		objClient.VWClient.world.Disconnect
	end if
	objClient.VWClient.Disconnect
	set objAvatars.VWClient = objClient.VWClient
	sblnLoggedOn = False
	'Section 2
	sstrWorldURL = ""
	sstrWorldURL = window.showModalDialog("LogOn.htm", top, "dialogHeight:200px;dialogWidth:370px;help:no;status:no;")
	set objAvatars.VWClient = Nothing
	'Section 3
	If sstrWorldURL = "" Then
		window.close
		Exit Sub
	Else
		sblnWillfulDisconnect = True
		objClient.VWClient.world.Disconnect
		objClient.VWClient.Disconnect
		sblnLoggedOn = False
		window.status = "Logging into " & sstrWorldURL & " as " & sstrUser & "..."
		window.setTimeout "Logon """ & sstrWorldURL & """", 0, "vbs"
	End If
End Sub
'======================================



'======================================
' Name: ConnectFromDS
' Args: strWorldURL - string containing the world
'                     URL to be connected to.
' Ret:  Boolean indicating the connect succeeded
'       or failed.
' Desc: This routine logs user onto the world
'       chosen in the Worlds dialog (directory service).
'       Section 1 displays a message if the user chicks
'       on the world they are connected to. This is
'       determined by comparing the global world URL to
'       the argument.
'       Section 2 gets a reference to the world, gets the
'       name of the current avatar from the profile, updates
'       the status bar, and calls the world's reconnect method.
'       The reconnect method first connects to the new world and
'       if it is successful then disconnects from the old world.
'       Section 3 checks for an error from the reconnect method.
'       If there is an error message is displayed and the return
'       is False; otherwise the return is True, the new world
'       URL is stored in the global variable, and the logged on
'       flag is set. Finally the status bar is cleared.
'--------------------------------------
Function ConnectFromDS(strWorldURL)
	Dim strCurAvatar, objWorld

	If sstrWorldURL = strWorldURL Then
	'Section 1
		MsgBox "You are already connected to " & strWorldURL, vbOkOnly + vbInformation, sstrAppName
		ConnectFromDS = False
	Else
	'Section 2
		Set objWorld = objClient.VWClient.World
		strCurAvatar = objWorld.User.Profile.KeyValue("PreferredName")
		window.status = "Logging into " & strWorldURL & " as " & strCurAvatar & "..."
		On Error Resume Next
		Err.clear
		objWorld.Reconnect strWorldURL, strCurAvatar, objWorld.user.password
	'Section 3
		If Err.Number < 0 Then
			MsgBox "Directory Service connection failed:(" & err.description & ")", vbOkOnly + vbInformation, sstrAppName
			ConnectFromDS = False
		Else
			ConnectFromDS = True
			sstrWorldURL = strWorldURL
			sblnLoggedOn = True
		End If
	End If
	window.status = ""
End Function
'======================================



'======================================
' Name: Logon
' Args: strWorldURL - string containing the world
'                     URL to be connected to.
' Desc: This routine logs user onto specified world.
'       Section 1 sets up error trapping, attempts
'       to connect to the world assigning an object
'       reference, and retrieves the error number
'       and message.
'       Section 2 If the world reference is not
'       initialized or is nothing an error occurred
'       and the error number is check, an appropiate
'       error message is displayed, and the ShowLogon
'       routine is called.
'       Section 3 We have a good world connection. Now
'       an attempt is made to log the user in and an object
'       reference set, the error number and description
'       are stored.
'       Section 4 If the user login fails the error number
'       is checked, an appropiate error message is displayed,
'       and the ShowLogon routine is called.
'       Section 5 sets the trace level to minimize noise
'       when trac is enabled, disables tracing, wait for
'       all objects to be send from the server, call the
'       SaveLastWorld routine, clear the willful disconnect
'       flag, set the logged on flag, and set auto
'       download of avatars to the Options dialog setting.
'       Finally clear the status bar text.
'--------------------------------------
Sub Logon(strWorldURL)
	Dim objWorld, objUser, intErrNum, sErrMsg

	'Section 1
	On Error Resume Next
	Err.Clear
	Set objWorld = objClient.VWClient.Connect(strWorldURL)
	intErrNum = Err.Number
	strErrMsg = Err.Description
	'Section 2
	If VarType(objWorld) = vbEmpty Or objWorld Is Nothing Then
		Select Case intErrNum
		Case -2147220901
			MsgBox "Failed to connect to " & strWorldURL & ".  The Virtual Worlds Server is running a different version than the Virtual Worlds client.", vbOkOnly + vbCritical, sstrAppName
		Case -2147220472
			MsgBox "Maximum number of users has been reached for the server containing """ & strWorldURL & """.  Try again later.", vbOkOnly + vbCritical, sstrAppName
		Case -2147467259
			MsgBox "You do not have permission to access the server containing """ & strWorldURL & """.  Contact the adminstrator for this server.", vbOkOnly + vbCritical, sstrAppName
		Case Else
			MsgBox "The world " & strWorldURL & " is currently unavailable. It may be offline, mispelled, or not exist. If the problem persists, contact the server administrator to verify the status of this world.", vbOkOnly + vbCritical, sstrAppName
		End Select
		window.setTimeout "ShowLogon", 0, "vbs"
	Else
	'Section 3
		Err.Clear
		Set objUser = objWorld.Connect(sstrUser, "")
		intErrNum = Err.Number
		strErrMsg = Err.Description
	'Section 4
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
	'Section 5
			objWorld.TraceLevel("*") = 4
			objWorld.EnableTrace False
			objWorld.Synchronize
			SaveLastWorld strWorldURL
			sblnWillfulDisconnect = False
			sblnLoggedOn = True
			objWorld.global.EnableAutoDownload = CBool(sblnAutoDownloadAvatars)
		End If
	End If
	window.status = ""
End Sub
'======================================



'======================================
' Name: SaveLastWorld
' Args: strWorldURL - string containing the world
'                     URL to be connected to.
' Desc: The routine saves the currently
'       world to the profile for use in the MRU.
'       Section 1 sets an object reference for
'       the user, and the LastWorld key is updated
'       in the profile.
'       Section 2 gets a list of recent worlds from
'       the profile, iterates through the list looking
'       for the current world, if it wasn't found
'       adds it to the list, and the adds the list
'       back into the profile.
'--------------------------------------
Sub SaveLastWorld(strWorldURL)
	Dim objUser, objWorldList, blnFound, intCount

	'Section 1
	Set objUser = objClient.VWClient.World.User
	objUser.Profile.KeyValue("LastWorld") = strWorldURL
	'Section 2
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
' Args: objHost - object reference for the user
'                 who is doing the logging off.
'       objTarget - object reference for the user
'                   who is being logged off.
'       strReason - string containing the reason
'                   the user is being logged off.
' Desc: This routine displays a message for the
'       user if they have been logged of by a host.
'--------------------------------------
Sub HandleLogOff(objHost, objTarget, strReason)
	Dim strMsg

	If objClient.VWClient.World.User Is objTarget Then
		sblnLoggedOff = True
		strMsg = "Host " & objHost.Name & " is logging you off for the following reason: " & strReason
		MsgBox strMsg, vbInformation, sstrAppName
	End If
End Sub
'======================================



'======================================
' Name: objClient_OnUserReconnect
' Args: objNewClient, objNewWorld, objNewAvatar are
'       object references to the new server, world,
'       and user objects.
' Desc: Event fired when the user reconnects to a world.
'       Section 1 iterates through each page registered
'       to receive UI events and calls the OnConnect,
'       OnUserDisconnect, and OnUserConnect UI events.
'       Section 2 sets the logged on flag, builds the
'       world URL, and calls the SaveLastWorld routine.
'--------------------------------------
Sub objClient_OnUserReconnect(objNewClient, objNewWorld, objNewAvatar)
	Dim objWnd, strNewWorld

	'Section 1
	For Each objWnd In sarrWantsEventsList
		objWnd.HandleUIEvent objClient.VWClient.World.User, "OnConnect", objNewWorld
		objWnd.HandleUIEvent objClient.VWClient.World.User, "OnUserDisconnect", objClient.VWClient.World.User
		objWnd.HandleUIEvent objClient.VWClient.World.User, "OnUserConnect", objNewAvatar
	Next
	'Section 2
	sblnLoggedOn = True
	strNewWorld = ""
	strNewWorld = objNewWorld.ServerName & "/" & objNewWorld.WorldName
	If strNewWorld <> "" Then
		SaveLastWorld strNewWorld
	End If
End Sub
'======================================



'======================================
' Name: objClient_OnUserConnect
' Args: objUser - object reference for the user
'                 who is connecting.
' Desc: Event fired when a user connects to a world
'       The routine checks for the world called
'       ~TemporaryWorldForCreatingAvatars as this is
'       the world created by the avatar access control
'       and the code should not propogate this event the
'       the child pages for this special world.
'       Otherwise call each page registered for events
'       pass along the data.
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
' Args: objUser - object reference for the user
'                 who is disconnecting.
' Desc: Event fired when a user disconnects to a world.
'       The routine checks for the world called
'       ~TemporaryWorldForCreatingAvatars as this is
'       the world created by the avatar access control
'       and the code should not propogate this event the
'       the child pages for this special world.
'       Otherwise the close whisper dialog flag is set
'       so the whisper dialogs will unregister themselves,
'       all whisper dialogs, the more about dialog,
'       and the camera dialog are closed. If the logged on
'       flag is set it is cleared and the ShowLogon routine
'       is called on a timeout.
'       Then the willful disconnect flag is checked and if
'       it isn't set the client is check a server connection.
'       If it is not connected true a message is displayed
'       indicating that the connection to the server was lost,
'       and the ShowLogon routine is called.
'				Finally, if the app isn't closing, each page registered
'       to recieve events is sent the event and the close
'       whisper dialog flag is cleared.
'--------------------------------------
Sub objClient_OnUserDisconnect(objUser)
	Dim objWnd, intUB

	If StrComp("~TemporaryWorldForCreatingAvatars", objUser.World.WorldName, vbTextCompare) <> 0 Then
		blnCloseWhispDialogs = True
		If objUser Is objClient.VWClient.World.User Then
			intUB = UBound(sarrWhisper)
			If intUB > -1 Then
				For Each objWnd In sarrWhisper
					RemoveFromEventList objWnd.document.frames(0)
					RemoveFromEventList objWnd
					objWnd.close
				Next
				sarrWhisper = Array()
			End If
			If Not sobjMoreAbout Is Nothing Then
				sobjMoreAbout.close
				Set sobjMoreAbout = Nothing
			End if
			If Not sobjCamera Is Nothing Then
				sobjCamera.close
				Set sobjCamera = Nothing
			End if
			If sblnLoggedOff Then
				sblnLoggedOff = False
				window.setTimeout "ShowLogon", 0, "vbs"
			End If
			If Not sblnWillfulDisconnect Then
				If Not objClient.VWClient.IsConnected Then
					sblnWillfulDisconnect = True
					MsgBox "The connection to the server has been unexpectedly terminated. To reconnect login as usual. To close the client click the Cancel button in the Login dialog.", vbOKOnly + vbCritical, sstrAppName
					window.setTimeout "ShowLogon", 0, "vbs"
				End If
			Else
				sblnWillfulDisconnect = False
			End If
			sblnLoggedOn = False
		End If
		For Each objWnd In sarrWantsEventsList
			If Not blnAppClosing Then
				objWnd.HandleUIEvent objClient.VWClient.World.User, "OnUserDisconnect", objUser
			End If
		Next
		blnCloseWhispDialogs = False
	End If
End Sub
'======================================



'======================================
' Name: objClient_OnConnect
' Args: objWorld - object reference for the world being
'                  connected to.
' Desc: Event fired when the world is connected.
'       If the user is logged on the event is sent to
'       each page registered to recieve events.
'--------------------------------------
Sub objClient_OnConnect(objWorld)
	Dim objWnd

	If sblnLoggedOn = False Then
		For Each objWnd In sarrWantsEventsList
			objWnd.HandleUIEvent objClient.VWClient.World.User, "OnConnect", objWorld
		Next
	End If
end sub
'======================================



'======================================
' Name: objClient_OnReport
' Args: strMsg - string containing the
'                report message.
'       lngType - long containing a number
'                 representing the report type.
' Desc: Event fired when there is a condition
'       warranting a report.
'       Section 1 sets a string with the name
'       of the report being generated.
'       Section 2 displays the report in a message
'       box if the world isn't valid or the user
'       isn't valid.
'       Section 3 sends the event to each page
'       registered to recieve events
'--------------------------------------
Sub objClient_OnReport(strMsg, lngType)
	Dim objWnd, strType

	'Section 1
	Select Case lngType
	Case -1
		strType = "Error"
	Case 0
		strType = "Print"
	Case 1
		strType = "Echo"
	Case 2
		strType = "Eval"
	Case 3
		strType = "Prompt"
	Case 4
		strType = "PerfLog"
	Case 5
		strType = "Page"
	Case Else
		strType = "Unknown"
	End Select
	'Section 2
	If objClient.VWClient.World Is Nothing Then
		MsgBox "Virtual Worlds " & strType & " report:" & vbCrLf & vbCrLf & strMsg, vbOKOnly + vbExclamation, sstrAppName
	Else
		If objClient.VWClient.World.User Is Nothing Then
			MsgBox "Virtual Worlds " & strType & " report:" & vbCrLf & vbCrLf & strMsg, vbOKOnly + vbExclamation, sstrAppName
		Else
	'Section 3
			For Each objWnd In sarrWantsEventsList
				If Not blnAppClosing Then
					objWnd.HandleUIEvent objClient.VWClient.World.User, "OnReport", Array(strMsg, lngType)
				End If
			Next
		End If
	End If
End Sub
'======================================


'======================================
' Name: objClient_OnUIEvent
' Args: objFrom - object reference for the source
'                 of the UI event.
'       strEventName - string containing the name
'                      of the event.
'       vntArgs - variant containing any arguments
'                 needed in responding to the event.
' Desc: This routine responds to UI events
'       generated by the client object.
'--------------------------------------
Sub objClient_OnUIEvent(objFrom, strEventName, vntArgs)
	Dim objWorld, objUser, intCount, objWnd, blnDispatchEvent
	Dim strWelcomeURL, blnFound, intUB, blnEditProfile

	'Exit if the world is not valid
	If objClient.VWClient.World Is Nothing Then Exit Sub
	'Set needed references
	Set objWorld = objClient.VWClient.World
	Set objUser = objWorld.user
	'Get the number of arguements passed in, if any
	If IsEmpty(vntArgs) Or VarType(vntArgs) = vbError Then
		intCount = 0
	ElseIf IsArray(vntArgs) Then
		intCount = UBound(vntArgs) + 1
	ElseIf IsObject(vntArgs) Then
		If vntArgs Is Nothing Then
			intCount = 0
		Else
			If TypeName(vntArgs) = "IPropertyList" Then
				intCount = vntArgs.Count
			Else
				intCount = 1
			End If
		End If
	Else
		intCount = 1
	End If
	'Handle the different events.
	Select Case strEventName
	Case "OnLeaveRoom"
	'If a More About dialog is showing close it.
		If Not sobjMoreAbout Is Nothing Then
			sobjMoreAbout.close
			Set sobjMoreAbout = Nothing
		End if
	Case "OnEditObject"
	'Properties were not implemented in this client.
	'This code is here to handle instances where this
	'client is installed on the same machine as the
	'authoring client. The menu item that fires this
	'event can be prevented from being fired by setting the reg key
	'HKEY_LOCAL_MACHINE\Software\Microsoft\V-Worlds\isSDK=0
		MsgBox "Properties can not be edited in this client. Use the Authoring client to edit properties. View the readme.txt file for more details.", vbOKOnly + vbInformation, sstrAppName
	Case "OnReconnect"
	'we should always be doing this intentionally
		sblnWillfulDisconnect = True
	Case "OnShowDialog"
		If intCount = 4 Then
			window.open vntArgs.Property(2).HTMLURL
	'Right now the only use for this UI
	'Event is with the web page exemplar.
	'This exemplar will show a web page
	'in a new IE window so the code below
	'is commented out. If you do use this
	'call to show a dialog for other
	'purposes you will need to make
	'modifications accordingly.
'			If vntArgs.Property(0) = True Then
'				window.ShowModalDialog vntArgs.Property(1), vntArgs.Property(2), vntArgs.Property(3)
'			Else
'				window.showModelessDialog vntArgs.Property(1), vntArgs.Property(2), vntArgs.Property(3)
'			End If
		Else
			objWorld.Trace "Show dialog arguments are incorrect (should be bIsModal, bstrURL, pArgument, bstrWindowFeatures)"
		End If
	Case "ShowHTML"
	Case "ShowURL"
	Case "OnStartSceneComposite"
		window.status = "Loading room...  Please wait..."
	Case "OnFinishSceneComposite"
	'Check to see if welcome property has been set for
	'the user in this world. If it hasn't then set it,
	'show the welcome dialog, and if the dialog return
	'value is true show the profile dialog.
		window.status = ""
		If Not objUser.IsValidProperty("SeenWelcome") Then
			objUser.AddProperty "SeenWelcome", True
			strWelcomeURL = objWorld.Global.WelcomeURL
			blnEditProfile = window.showModalDialog(strWelcomeURL, top, "dialogHeight:170px;dialogWidth:325px;status:no;help:no;resizable:no;")
			If blnEditProfile Then
				window.setTimeout "objClient.VWClient.World.User.EditProfile", 250, "vbs"
			End If
		End If
	Case "OnLogOff"
	'call the routine to show the log off reason dialog
		HandleLogOff vntArgs.property(0), vntArgs.property(1), vntArgs.property(2)
	Case "vwCameraClose"
	'Called by the dialog when it closes to
	'clear the reference that indicats it is open.
		Set sobjCamera = Nothing
	Case "vwShowCamera"
	'If the dialog is not showing open it;
	'otherwise set the focus to it.
		If sobjCamera Is Nothing Then
			Set sobjCamera = window.showModelessDialog("camera.htm", top, "dialogHeight:310px;dialogWidth:360px;status:no;help:no")
		Else
			sobjCamera.document.body.focus
		End If
	Case "vwTutorial"
	'This is here to catch the case where this
	'client might be used to visit a tutorial
	'world. Those types of worlds require the
	'authoring client.
		window.settimeout "MsgBox ""The Virtual Worlds Authoring client is required for correct completion of the Tutorial."", vbOkOnly + vbInformation, """ &  sstrAppName & """", 400, "vbs"
	Case "vwMoreAboutClose"
	'Called by the dialog when it closes to
	'clear the reference that indicats it is open.
		Set sobjMoreAbout = Nothing
	Case "OnMoreAbout"
	'If the dialog is open close it
	'before opening the new copy.
		If Not sobjMoreAbout Is Nothing Then
			sobjMoreAbout.close
			Set sobjMoreAbout = Nothing
		End If
		Set sobjMoreAbout = window.showModelessDialog("MoreAbout.htm", Array(top, objFrom), "dialogHeight:110px;dialogWidth:325px;status:no;help:no;resizable:yes;")
	Case "OnShowProfile"
	'Show the profile dialog for other users.
	'This version shows the information as
	'read only.
		window.showModalDialog "ShowProfile.htm", Array(top, objFrom), "dialogWidth:454px;dialogHeight:317px;status:no;help:no;resizable:no;"
	Case "OnEditProfile"
	'Show the profile dialog for this users.
	'This version allows the information to
	'be edited.
		window.showModalDialog "EditProfile.htm", Array(top, objFrom), "dialogWidth:454px;dialogHeight:317px;status:no;help:no;resizable:no;"
	Case "vwWhisperClose"
	'This code closes all instances
	'of the whisper dialog. It first sets a Found flag to False.
	'Then the array is check to see if it has been used or if the
	'CloseWhispDialogs flag has been set indicating an orderly
	'shut down. If both are true then each item in the array compared
	'to the event argument and if there is a match the dialog being
	'closed is removed from the list.
		blnFound = False
		If TypeName(sarrWhisper) <> "Empty" And Not blnCloseWhispDialogs Then
			intUB = UBound(sarrWhisper)
			If intUB > -1 Then
				For intCount = 0 To intUB
					If blnFound Then
						If intCount < intUB Then Set sarrWhisper(intCount) = sarrWhisper(intCount + 1)
					ElseIf sarrWhisper(intCount) Is vntArgs Then
						If intCount < intUB Then Set sarrWhisper(intCount) = sarrWhisper(intCount + 1)
						blnFound = True
					End If
				Next
				If blnFound then
					If intUB = 0 Then
						sarrWhisper = Array()
					Else
						ReDim Preserve sarrWhisper(intUB - 1)
					End If
				End If
			End If
		End If
	Case "OnWhisper"
	'The array used to track the open whisper dialogs is increased
	'by one. The dialog is opened and added to the array.
		intUB = UBound(sarrWhisper) + 1
		ReDim Preserve sarrWhisper(intUB)
		Set sarrWhisper(intUB) = window.showModelessDialog("Whisper.htm", Array(top, objFrom), "dialogWidth:350px;dialogHeight:325px;status:no;help:no;resizable:yes;")
	Case "OnShowLogoffDialog"
	'The host log off dialog is displayed. This
	'dialog is used by the host to provide a reason
	'for logging someone off the world.
		window.showModalDialog "LogOff.htm", Array(top, vntArgs), "dialogWidth:277px;dialogHeight:174px;status:no;help:no;resizable:no;"
	Case "OnShowTransportDialog"
	'The portal dialog is displayed. this dialog
	'appears when the user runs into a portal boundary
		window.showModalDialog "Portal.htm", Array(top, objFrom), "dialogHeight:137px;dialogWidth:450px;status:no;help:no;resizable:no;"
	Case "OnAllowFriendship"
	'prompts the user as to whether they want to accept a friendship
	'offer from another user. Action is taken based on user's response.
		If MsgBox("Allow " & vntArgs.Property(1).Name & " to make you a friend?", vbYesNo + vbQuestion, sstrAppName) = vbYes Then
			vntArgs.Property(1).FinalizeFriend vntArgs.Property(0), True
		Else
			vntArgs.Property(1).FinalizeFriend vntArgs.Property(0), False
		End If
	Case "OnPendingFriendship"
	Case "OnDeclineFriendship"
	'Informs the user that their offer of friendship was rejected.
		MsgBox vntArgs.Name & " doesn't want to be your friend!", vbOkOnly + vbInformation, sstrAppName
	Case "Befriended"
	'Informs the user that their offer of friendship was accepted
	'and the new friend was added to the friends list.
		MsgBox vntArgs.Name & " has been added to your Friends List. See your Profile to manager the list.", vbOkOnly + vbInformation, sstrAppName
	Case Else
	End Select
	'This section sets a flag that will be used to determine
	'if events should be send to child window. Some events
	'are sent even before Logged On flag might be set.
	blnDispatchEvent = sblnLoggedOn
	If blnDispatchEvent = False Then
		blnDispatchEvent = IsCriticalEvent(strEventName)
	End If
	'If events can be sent and the app isn't closing then send the
	'event to windows that have been register to receive events.
	If blnDispatchEvent Then
		For Each objWnd In sarrWantsEventsList
			If Not blnAppClosing Then
				objWnd.HandleUIEvent objFrom, strEventName, vntArgs
			End If
		Next
	End If
End Sub
'======================================



'======================================
' Name: IsCriticalEvent
' Args: strEvent - string containing the name of the
'                  event.
' Ret:  Boolean indicating that an event is critical or
'       not.
' Desc: This function determines if an event is critical
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

