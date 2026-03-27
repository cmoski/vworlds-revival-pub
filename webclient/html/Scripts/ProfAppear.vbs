'======================================
' Desc: This file contains the script for
'       ProfAppear.htm. The purpose of
'       these two files is to display the
'       appearance tab of the Profile dialog.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sblnAllowContextMenu is a flag
'       used to control the display of
'       the context mouse menu. It is
'       intended to assist in the
'       development process.
'       sblnDataDirty is a flag used to
'       indicate that the user has changed
'       the data on this page.
'       sstrRemoteAvatarURL is a string used
'       to store the remote avatar URL.
'       sstrAvatarURL is a string used to store
'       the name or URL of the currently
'       selected avatar.
'       sstrAvatarURL is a string used to store
'       the name or URL of the existing avatar.
'       sblnShownInputBox is a flag that indicates
'       that the remote avatar URL input box has
'       been shown.
'--------------------------------------
Public sblnAllowContextMenu
Public sblnDataDirty
Public sstrRemoteAvatarURL
Public sstrAvatarURL
Public sstrOldAvatarURL
Public sblnShownInputBox
'======================================



'======================================
' Name: Public Initializations
' Desc: sblnAllowContextMenu is set from a variable
'       on the top most client page.
'       For sblnDataDirty an initial value
'       of False is made as the user hasn't
'       made any changes to the data yet.
'       sstrRemoteAvatarURL, sstrAvatarURL,
'       and sstrOldAvatarURL are pre-initialized
'       to empty strings.
'       sblnShownInputBox is initialized to False
'--------------------------------------
sblnAllowContextMenu = False
sblnDataDirty = False
sstrRemoteAvatarURL = ""
sstrAvatarURL = ""
sstrOldAvatarURL = ""
sblnShownInputBox = False
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       Calls OnTopLoad to initialize the
'       rest of the page.
'--------------------------------------
Sub window_onload
	OnTopLoad
End Sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the dialog
'       is closed. If the Enter key is
'       pressed the dialog's OK button click
'       action is called.
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		top.close
	Case 13
		top.btnOK.click
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: lstAvatars_onclick
' Desc: Fires when the avatar list is clicked.
'       This routine is here to catch when
'       the user clicks on (remote avatar)
'       when that item is already selected.
'       The flag is needed to stop the input
'       box from showing twice.
'--------------------------------------
Sub lstAvatars_onclick
	If Not sblnShownInputBox Then
		lstAvatars_onchange
	End If
End Sub
'======================================



'======================================
' Name: lstAvatars_onchange
' Desc: Fires when the avatar list has changed.
'       This routine updates the variable containing
'       then name or URL of the currently chosen
'       avatar.
'       First a check is made to see if the user
'       has chosen the remote avatar option. If the
'       check is True see section 1x notes, if False
'       see section 2 notes.
'       Section 1a displays an input box asking for the
'       URL of the remote avatar
'       Section 1b if the user cancelled out of the input
'       box the list box selection returned to the item
'       select just before remote avatar was selected;
'       otherwise the remote avatar URL is stored and the
'       UpdateAvatarGraphic routine is called to update
'       the selfview control.
'       Section 1c sets the flag indicating the input box
'       was just shown, a time out is set to clear the same
'       flag. (This is done so that there won't be a second
'       instance of the input box. The lstAvatars_onclick calls
'       this routine only if the flag is cleared and some
'       actions cause both events to fire.)
'       Section 2 the avatar URL is stored and the
'       UpdateAvatarGraphic routine is called to update
'       the selfview control.
'       Section 3 determines if the user has made a change that
'       would necessitate setting the data dirty flat and enabling
'       the dialog's Apply button.
'--------------------------------------
Sub lstAvatars_onchange
	Dim strTempURL

	If lstAvatars.value = "(remote avatar)" Then
	'Section 1a
		strTempURL = Trim(InputBox("Please enter the full URL of the remote avatar graphic:", "Remote Avatar URL", sstrRemoteAvatarURL))
	'Section 1b
		If strTempURL = "" Then
			If StrComp(sstrAvatarURL, sstrRemoteAvatarURL, vbTextCompare) <> 0 Then
				lstAvatars.value = sstrAvatarURL
			End If
		Else
			sstrRemoteAvatarURL = strTempURL
			sstrAvatarURL = strTempURL
			UpdateAvatarGraphic
		End If
	'Section 1c
		sblnShownInputBox = True
		window.setTimeout "sblnShownInputBox = False", 0, "vbs"
	else
	'Section 2
		sstrAvatarURL = lstAvatars.value
		UpdateAvatarGraphic
	end if
	'Section 3
	If StrComp(sstrAvatarURL, sstrOldAvatarURL, vbTextCompare) <> 0 Then
		sblnDataDirty = True
		top.btnApply.disabled = False
	End If
End Sub
'======================================



'======================================
' Name: OnTopLoad
' Desc: Completes the initialization of
'       the page.
'       Section 1 ensures that the top
'       most page is loaded before continuing.
'       If it isn't this routine is called in
'       1/4 second.
'       Section 2 sets the Context menu show
'       flag, sets the title for this page,
'       set the description text box to read
'       only if this is not the edit profile
'       dialog, and finally enters the current
'       description into the text box.
'       Section 3 disconnects the selfview control
'       from responding to world events, sets the
'       background color for this control, and
'       connects this control to the VWClient object
'       on the top most page.
'       Section 4 calls a routine that populates the
'       avatar list, sets a local object reference
'       to the user's profile, adds the remote avatar
'       key to the profile if it doesn't exist,
'       retrieves the value of the remote avatar key,
'       and retrieves the value of the current avatar.
'       Section 5 if the avatar list isn't empty selects
'       the correct item in the list.
'       Section 6 calls the routine that updates the
'       selfview control to show the avatar.
'--------------------------------------
Sub OnTopLoad
	Dim objProfile

	'Section 1
	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	'Section 2
	sblnAllowContextMenu = top.sblnAllowContextMenu
	'Section 3
	objSelfView.HandleWorldEvents = False
	objSelfView.SetBackgroundColor 244, 244, 232
	Set objSelfView.VWClient = top.sobjVWClient
	'Section 4
	PopulateAvatarList
	Set objProfile = top.sarrArgs(1).Profile
	If objProfile.isValid("LastRemoteSpriteURL") = False Then
		objProfile.AddKey "LastRemoteSpriteURL", ""
	End If
	sstrRemoteAvatarURL = objProfile.KeyValue("LastRemoteSpriteURL")
	sstrOldAvatarURL = LCase(objProfile.KeyValue("SpriteGeometry"))
	sstrAvatarURL = sstrOldAvatarURL
	'Section 5
	If lstAvatars.length > 0 Then
		If StrComp(sstrAvatarURL, sstrRemoteAvatarURL, vbTextCompare) = 0 Then
			lstAvatars.value = "(remote avatar)"
		Else
			lstAvatars.value = sstrAvatarURL
		End If
	End If
	'Section 6
	UpdateAvatarGraphic
End Sub
'======================================



'======================================
' Name: UpdateAvatarGraphic
' Desc: This routine updates the selfview
'       control with the currently chosen
'       avatar image. Then the control is
'       told to play the wave gesture.
'--------------------------------------
Sub UpdateAvatarGraphic
	objSelfView.GeometryName = sstrAvatarURL
	objSelfView.CurrentGesture = 1
End Sub
'======================================



'======================================
' Name: PopulateAvatarList
' Desc: This routine populates the avatar
'       list
'       Section 1 retrieves an array of all
'       installed avatar appearances. If
'       none are found a warning message is
'       displayed and the list is disabled.
'       Section 2 iterates through each avatar
'       in the list and adds it's name to the
'       list in alphabetic order, and the remote
'       avatar item is added at the end of the
'       list.
'--------------------------------------
Sub PopulateAvatarList
	Dim arrCostumeNames, intSlash, strName, objEl

	'Section 1
	arrCostumeNames = objAvatarAccessControl.CostumeList
	If UBound(arrCostumeNames) < LBound(arrCostumeNames) Then
		MsgBox "Avatar graphics were not found on this computer.", vbExclamation, top.sobjTop.sstrAppName
		lstAvatars.disabled = True
	Else
	'Section 2
		For Each strName In arrCostumeNames
			intSlash = InStrRev(strName, "\")
			Set objEl = document.createElement("OPTION")
			strName = Right(strName, Len(strName) - intSlash)
			objEl.value = strName
			objEl.text = Left(strName, Len(strName) - 4)
			objEl.text = UCase(Left(objEl.text, 1)) & Mid(objEl.text, 2)
			lstAvatars.add objEl, PosInList(lstAvatars, objEl.text)
		Next
		Set objEl = document.createElement("OPTION")
		objEl.value = "(remote avatar)"
		objEl.text = "(remote avatar)"
		lstAvatars.add objEl
	End If
End Sub
'======================================



'======================================
' Name: SaveChanges
' Desc: This routine saves the new avatar
'       appearance in the profile, saves
'       the remote avatar URL in the profile,
'       and sets the users appearance to the
'       new appearance.
'--------------------------------------
Sub SaveChanges
	top.sarrArgs(1).Profile.KeyValue("SpriteGeometry") = sstrAvatarURL
	top.sarrArgs(1).Profile.KeyValue("LastRemoteSpriteURL") = sstrRemoteAvatarURL
	top.sobjUser.GeometryName = sstrAvatarURL
End Sub
'======================================



'======================================
' Name: SetFocus
' Desc: This routine sets the focus and
'       sets a flag on the top most page
'       that is used during mouse navigation
'       of the tabs.
'--------------------------------------
Sub SetFocus
	lstAvatars.focus
	top.sblnMouseClicked = False
End Sub
'======================================
