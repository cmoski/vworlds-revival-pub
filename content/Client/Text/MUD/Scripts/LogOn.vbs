'======================================
' Desc: This file contains the script for
'       Directory.htm. These two files are
'       the dialog for listing a directory
'       of worlds the user may choose to visit.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjTop is an object used to
'       reference the top most page of the
'       client.
'       sobjVWClient is a critical object
'       needed for the page to function correctly.
'       sintAvatar is an integer containing the
'       position in the list of the current avatar.
'--------------------------------------
Public sobjTop
Public sobjClient
Public sintAvatar
'======================================



'======================================
' Name: Public Initializations
' Desc: sobjTop is assigned the argument
'       passed to the dialog.
'       sobjVWClient is initialized to
'       a corresponding object from the
'       top most client page.
'       The last line sets the initial dialog
'       return value to an empty string.
'--------------------------------------
Set sobjTop = window.dialogArguments
Set sobjClient = sobjTop.objClient.VWClient
window.returnValue = ""
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page has loaded.
'       Section 1 connects and disconnects
'       the avatar access control in an effort
'       to get the spinning cube in the
'       renderview control.
'       Section 2 calls the RefreshAvatarList
'       routine to populate the avatar list.
'       Section 3 calls the DisableControls routine
'       if either the number of avatars in the
'       avatar list is less than 2 or the avatar list
'       doesn't have a selection.
'       Section 4 set the value of the avatar list to a
'       global variable from the top most page in an
'       effort to select on of the avatars in the list.
'       Section 5 checks the avatar list for a selection. If
'       there still isn't any the first item is selected;
'       otherwise the lstAvatars_onchange is called so
'       the other controls will be populated correctly.
'       Section 6 checks the number if items in the avatar
'       list. If there aren't any a message is displayed,
'       and the CreateAvatar routine is called.
'--------------------------------------
Sub window_onload
	'Section 1
	sobjTop.objAvatars.ConnectAvatar "", ""
	sobjTop.objAvatars.DisconnectAvatar
	'Section 2
	RefreshAvatarList
	'Section 3
	If lstAvatars.length < 2 Then
		DisableControls
	ElseIf lstAvatars.value = "" Then
		DisableControls
	End If
	'Section 4
	If Len(sobjTop.sstrUser) > 0 Then
		lstAvatars.value = sobjTop.sstrUser
	End If
	'Section 5
	If lstAvatars.value = "" Then
		lstAvatars.selectedIndex = 0
	Else
		lstAvatars_onchange
	End If
	'Section 6
	If lstAvatars.length <= 1 Then
		MsgBox "Before using Virtual Worlds, you must create an avatar.", vbOkOnly + vbInformation, sobjTop.sstrAppName
		CreateAvatar
	End If
End Sub
'======================================



'======================================
' Name: document_OnKeyDown
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the diaog
'       is closed. If the enter key is pressed
'       and the active control isn't a button
'       the btnLogon_onclick routine is called.
'--------------------------------------

Sub document_OnKeyDown
	' Check for <ENTER>
	If window.event.keycode = 13 Then
		If window.event.srcElement.id = "lstPreviousWorlds" Then
			btnLogon_onclick
		ElseIf window.event.srcElement.id = "txtNewWorld" Then 
			btnLogonNew_onclick
		End If
	' Check for <ESC>
	Elseif window.event.keycode = 27 then
		window.close
	End If
End Sub


'======================================
' Name: lstAvatars_onchange
' Desc: Fired when the list changes.
'       Section 1 calls the CreateAvatar
'       routine if the (new avatar) item is
'       selected.
'       Section 2 if an avatar is selected
'       it will attempt to connect to the
'       avatar using the avatar access control.
'       If this attempt fails the user is prompted
'       at to whether the possibly defective avatar
'       should be deleted. If yes the DeleteBadAvatar
'       routine is called; otherwise the avatar access
'       control is disconnected and the UpdateUI is called.
'       Section 3, where the avatar was successfully
'       connected to, saves the list position of the selected
'       avatar, and calls the UpdateUI routine.
'       Section 4 disconnects the avatar access control, and
'       calls the UpdateUI routine.
'--------------------------------------
Sub lstAvatars_onchange
	Dim strMsg

	If Trim(lstAvatars.value) = "(new avatar)" Then
	'Section 1
		lstAvatars.selectedIndex = sintAvatar
		CreateAvatar
	ElseIf lstAvatars.value <> "" Then
	'Section 2
		If sobjTop.objAvatars.ConnectAvatar(lstAvatars.value, "") = False Then
			strMsg = "The selected avatar could not be loaded. It may be defective. Delete defective avatar now?"
			If MsgBox(strMsg, vbYesNo + vbQuestion, sobjTop.sstrAppName) = vbYes Then
				DeleteBadAvatar lstAvatars.value
			Else
				sobjTop.objAvatars.DisconnectAvatar
				UpdateUI ""
			End If
		Else
	'Section 3
			sintAvatar = lstAvatars.selectedIndex
			UpdateUI lstAvatars.value
		End If
	Else
	'Section 4
		sobjTop.objAvatars.DisconnectAvatar
		UpdateUI lstAvatars.value
	End If
End Sub
'======================================



'======================================
' Name: btnDelete_onclick
' Desc: Fires when the button is clicked.
'       This routine deletes the current avatar.
'       The user is is first asked to confirm, the
'       list position is saved, the avatar is deleted,
'       the list is regenerated, an item in the list
'       is selected (either the next item or the
'       first item), and the list onchange routine is
'       called to update other dialog values.
'--------------------------------------
Sub btnDelete_onclick
	Dim strMsg, intCurAvatar

	strMsg = "Do you want to permanently delete the avatar '" & lstAvatars.value & "'?"
	If MsgBox(strMsg, vbYesNo + vbDefaultButton2 + vbQuestion, sobjTop.sstrAppName) = vbYes Then
		intCurAvatar = lstAvatars.selectedIndex
		sobjTop.objAvatars.DeleteAvatar
		RefreshAvatarList
		'Now, set current avatar to be the next one on the list
		'If the deleted avatar was the last one, select the first of element of the list
		if intCurAvatar < lstAvatars.Length - 1 then
			lstAvatars.selectedIndex = intCurAvatar
		else
			lstAvatars.selectedIndex = 0
		end if
		lstAvatars_onchange
	End If
End Sub
'======================================

'======================================
' Name: btnLogon_onclick
' Desc: Fires when the button is clicked.
'       This routine logs onto the world
'       entered using the selected avatar.
'       Checks are made to ensure valid values
'       have been selected and entered. If
'       an problems are found an appropriate
'       message is displayed and the focus is
'       set on the problem area; otherwise
'       selected avatar is stored in a variable
'       on the top most page and in the cookie,
'       the world URL is set as the return value
'       for the dialog, and the dialog is closed.
'--------------------------------------
Sub btnLogon_onclick
	Dim strWorldURL

	strWorldURL = Trim(lstPreviousWorlds.Value)
	If Trim(lstAvatars.value) = "(new avatar)" Or Trim(lstAvatars.value) = "" Then
		MsgBox "Select an avatar nickname from the Avatar name list box.", vbOkOnly + vbInformation, sobjTop.sstrAppName
		lstAvatars.focus
	Else
		sobjTop.sstrUser = lstAvatars.value
		document.cookie = "sstrUser=" & lstAvatars.value & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
		'set return value indicating user didn't cancel dialog
		window.returnValue = strWorldURL
		window.close
	End If
End Sub
'======================================


'======================================
' Name: btnLogonNew_onclick
' Desc: Fires when the button is clicked.
'       This routine logs onto the world
'       entered using the selected avatar.
'       Checks are made to ensure valid values
'       have been selected and entered. If
'       an problems are found an appropriate
'       message is displayed and the focus is
'       set on the problem area; otherwise
'       selected avatar is stored in a variable
'       on the top most page and in the cookie,
'       the world URL is set as the return value
'       for the dialog, and the dialog is closed.
'--------------------------------------
Sub btnLogonNew_onclick
	Dim strWorldURL

	strWorldURL = Trim(txtNewWorld.Value)
	If Trim(lstAvatars.value) = "(new avatar)" Or Trim(lstAvatars.value) = "" Then
		MsgBox "Select an avatar nickname from the Avatar name list box.", vbOkOnly + vbInformation, sobjTop.sstrAppName
		lstAvatars.focus
	ElseIf strWorldURL = "" Or strWorldURL =  "Pick world or type in new one" Then
		MsgBox "Enter a destination.", vbOkOnly + vbInformation, sobjTop.sstrAppName
		txtNewWorld.Focus
	ElseIf Not sobjClient.world.ValidateWorldName(strWorldURL) Then
		MsgBox "A world name can not contain a file extension, a space, a tab, or any of the following characters:" & vbCrLf & " : ? "" < > | ! & ' ," & vbCrLf & "Enter a new world name.", vbOkOnly + vbExclamation, sobjTop.sstrAppName
		txtNewWorld.Focus
	ElseIf InStr(strWorldURL, "/") = 0 And InStr(strWorldURL, "\") = 0 Then
		MsgBox "A world name must be in the form of ServerName/WorldName.", vbOkOnly + vbExclamation, sobjTop.sstrAppName
		txtNewWorld.Focus
	Else
		sobjTop.sstrUser = lstAvatars.value
		document.cookie = "sstrUser=" & lstAvatars.value & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
		'set return value indicating user didn't cancel dialog
		window.returnValue = strWorldURL
		window.close
	End If
End Sub
'======================================



'======================================
' Name: GetDestinationMRU
' Desc: This routine populates the combo box
'       control with destination MRU list.
'       This list is retrieved from the profile,
'       the list is cleared, and the new items
'       are added.
'--------------------------------------
Sub GetDestinationMRU
	Dim objMRU, intCount, el

	Set objMRU = sobjTop.objAvatars.CurrentUser.Profile.KeyValue("RecentWorlds")
	Do While lstPreviousWorlds.Length > 0
		lstPreviousWorlds.Remove(0)
	Loop
	For intCount = 0 To objMRU.Count - 1
		Set el = document.CreateElement("OPTION")
		el.value = objMRU.property(intCount)
		el.text = objMRU.property(intCount)
		lstPreviousWorlds.add el
	Next
End Sub
'======================================



'======================================
' Name: DeleteBadAvatar
' Args: strDeadName - string containing the name
'                     of the avatar to be deleted.
' Desc: This routine deletes an avatar that
'       may be damaged. First the selection
'       location is saved, then the avatar
'       access control attempts to delete
'       the avatar. If successful the next
'       item in the list is selected. If
'       unsuccessful an error message is
'       displayed, the avatar access control
'       is disconnected and the UpdateUI
'       routine is called.
'--------------------------------------
Sub DeleteBadAvatar(strDeadName)
	Dim intCurAvatar

	intCurAvatar = lstAvatars.selectedIndex
	If sobjTop.objAvatars.DeleteDeadAvatar(strDeadName) = True Then
		RefreshAvatarList
		If intCurAvatar < lstAvatars.Length - 1 Then
			lstAvatars.selectedIndex = intCurAvatar
		Else
			lstAvatars.selectedIndex = 0
		End If
		lstAvatars_onchange
	Else
		MsgBox "Virtual Worlds could not delete the broken avatar.", vbOkOnly + vbCritical, sobjTop.sstrAppName
		sobjTop.objAvatars.DisconnectAvatar
		UpdateUI ""
	end if
end sub
'======================================



'======================================
' Name: CreateAvatar
' Desc: This routine displays a dialog asking
'       the user to enter an avatar name. If
'       a name is returned the RefreshAvatarList
'       is called, the new avatar is selected, the
'       list onchange routine is called, the
'       GetDestinationMRU routine is called, and a key
'       is added to the profile (this may be a line
'       of dead code, not used by anything else).
'       If no name is returned the list select cleared.
'--------------------------------------
Sub CreateAvatar
	Dim strNewAvatar

	strNewAvatar = ""
	strNewAvatar = window.showModalDialog("NewAvatar.htm", window, _
		"dialogHeight:135px;dialogWidth:295px;status:no;help:no")
	If strNewAvatar <> "" Then
		RefreshAvatarList
		lstAvatars.value = strNewAvatar
		lstAvatars_onchange
		GetDestinationMRU
		sobjTop.objAvatars.CurrentUser.Profile.AddKey "FirstTimeUser", True
	Else
		If lstAvatars.value = "(new avatar)" Then lstAvatars.selectedIndex = -1
	End If
End Sub
'======================================



'======================================
' Name: UpdateUI
' Args: strAvatar - string containing the name
'                   an avatar.
' Desc: This routine enables or disables the
'       controls if the avatar name is nothing.
'       Two different routines are called depending
'       on the state desired.
'--------------------------------------
Sub UpdateUI(strAvatar)
	If strAvatar <> "" Then
		EnableControls
	Else
		DisableControls
	End If
End Sub
'======================================



'======================================
' Name: EnableControls
' Desc: This routine updates values and
'       enables controls
'--------------------------------------
Sub EnableControls
	lstPreviousWorlds.disabled = False
	txtNewWorld.disabled = False
	btnDelete.disabled = False
	btnLogon.disabled = False
	GetDestinationMRU
	lstPreviousWorlds.value = sobjTop.objAvatars.CurrentUser.Profile.KeyValue("LastWorld")
end sub
'======================================



'======================================
' Name: DisableControls
' Desc: This routine disables controls and
'       clears values
'--------------------------------------
Sub DisableControls
	lstPreviousWorlds.value = ""
	lstPreviousWorlds.disabled = True
	txtNewWorld.disabled = True
	btnDelete.disabled = True
'	btnLogon.disabled = True
end sub
'======================================



'======================================
' Name: RefreshAvatarList
' Desc: This routine clears the avatar list,
'       iterates through each avatar in the
'       avatar access control and adds it in
'       alphabetical order, adds the (new
'       avatar) item, and if there is only the
'       (new avatar) in the list clears the
'       selection.
'--------------------------------------
Sub RefreshAvatarList
	Dim objEl, strName

	' Clear the list
	Do While lstAvatars.length > 0
		lstAvatars.remove(0)
	Loop
	' Create an entry for each avatar found
	For Each strName In sobjTop.objAvatars.avatarList
		Set objEl = document.createElement("OPTION")
		objEl.value = strName
		objEl.text = strName
		lstAvatars.add objEl, PosInList(lstAvatars, objEl.text)
	Next
	'Last, create default new user entry
	Set objEl = document.createElement("OPTION")
	objEl.value = "(new avatar)"
	objEl.text = "(new avatar)"
	lstAvatars.add objEl
	If lstAvatars.length = 1 Then lstAvatars.selectedIndex = -1
End Sub
'======================================
