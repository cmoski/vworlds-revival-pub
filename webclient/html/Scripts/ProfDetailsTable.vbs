'======================================
' Desc: This file contains the script for
'       ProDetailsTable.htm. The purpose of
'       these two files is to display the
'       table in the details tab of the Profile
'       dialog.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sblnAllowContextMenu is a flag
'       used to control the display of
'       the context mouse menu. It is
'       intended to assist in the
'       development process.
'--------------------------------------
Public sblnAllowContextMenu
'======================================



'======================================
' Name: Public Initializations
' Desc: sblnAllowContextMenu is set from a variable
'       on the top most client page.
'--------------------------------------
sblnAllowContextMenu = False
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
'       pressed check to see which kind of
'       Profile is showing, the users or
'       another users. If it is the users,
'       determined by the flag sblnAllowEdit
'       on the top most page, call the click
'       action of the OK button; otherwise
'       close the dialog.
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		top.close
	Case 13
		If top.sblnAllowEdit Then
			top.btnOK.click
		Else
			top.close
		End If
	Case Else
	End Select
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
'       flag and then calls the routine
'       BuildTable.
'--------------------------------------
Sub OnTopLoad
	'Section 1
	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	'Section 2
	sblnAllowContextMenu = top.sblnAllowContextMenu
	BuildTable
End Sub
'======================================



'======================================
' Name: BuildTable
' Desc: This routine builds a table of editing
'       control for each profile key that
'       is not excluded from being displayed on
'       this tab.
'       Section 1 sets a string to be included in
'       certain elements if the dialog is view
'       only, and sets an object reference to the
'       table element.
'       Section 2 iterates through each profile key,
'       if the key can be shown a table row is created
'       and a cell with the key name is added.
'       Section 3 sets a string to be included in
'       certain elements if the user isn't the owner of
'       the key.
'       Section 4 adds an text box for the value of the
'       key. This is where the two string variables
'       mentioned above are used.
'       Section 5, if the user can edit the data, builds
'       a list box for the access level of the key.
'       Section 6 builds a string that will be included to
'       complete the element and select the appropriate
'       item in the list.
'       Section 7 adds a spacing row to the table.
'--------------------------------------
Sub BuildTable
	Dim objTable, strKeyName, objRow, objCell, strReadOnly, strDisabled
	Dim strPublic, strFriend, strPrivate, intAccess, objSel, objOpt, objInp

	'Section 1
	If Not top.sblnAllowEdit Then
		strReadOnly = " readonly"
	End If
	Set objTable = document.body.all.tags("table")(0)
	'Section 2
	For Each strKeyName In top.sarrArgs(1).Profile.Keys
		If IsKeyVisible(strKeyName) Then
			Set objRow = objTable.insertRow
			objRow.style.height = "10px"
			Set objCell = objRow.insertCell
			objCell.className = "vwText"
			objCell.style.width = "10px"
			objCell.innerHTML = "<nobr>" & strKeyName & "&nbsp;&nbsp;</nobr>"
			Set objCell = objRow.insertCell
	'Section 3
			If Not(top.sarrArgs(1).Profile.KeyOwner(strKeyName) Is top.sobjUser) And top.sblnAllowEdit Then
				strDisabled = " disabled"
			End If
	'Section 4
			Set objInp = document.createElement("<input class=vwInput onkeydown=CheckForDirty id=""inp" & strKeyName & _
				""" style=width:100%; value=""" & GetKeyAsText(strKeyName) & """" & strReadOnly & strDisabled & ">")
			objCell.appendChild objInp
	'Section 5
			If top.sblnAllowEdit Then
	'Section 6
				strPublic = ">"
				strFriend = ">"
				strPrivate = ">"
				Select Case top.sarrArgs(1).Profile.KeyAccess(strKeyName)
				Case 0
					strPublic = " selected>"
				Case 1
					strFriend = " selected>"
				Case 2
					strPrivate = " selected>"
				Case Else
				End Select
				Set objCell = objRow.insertCell
				objCell.width = "40px"
				Set objSel = document.createElement("<select class=vwInput id=""sel" & strKeyName & _
					""" onchange=CheckForDirty onclick=CheckForDirty>")
				objCell.appendChild objSel
				Set objOpt = document.createElement("<option value=0" & strPublic)
				objOpt.innerText = "Public"
				objSel.appendChild objOpt
				Set objOpt = document.createElement("<option value=1" & strFriend)
				objOpt.innerText = "Friend"
				objSel.appendChild objOpt
				Set objOpt = document.createElement("<option value=2" & strPrivate)
				objOpt.innerText = "Private"
				objSel.appendChild objOpt
			End If
		End If
	Next
	'Section 7
	Set objRow = objTable.insertRow
End Sub
'======================================



'======================================
' Name: CheckForDirty
' Desc: This routine is called when an
'       action has occurred in one of the
'       controls and checks for any changes.
'       Section 1 calls the routine
'       CheckInputForChange on a timeout if
'       the control modified was a text box.
'       Section 2 checks if the access level
'       has been changed. If so dirty flag is
'       set and the apply button is enabled.
'--------------------------------------
Sub CheckForDirty
	If top.sblnAllowEdit Then
		Select Case window.event.srcElement.tagName
		Case "INPUT"
	'Section 1
			window.setTimeout "CheckInputForChange """ & window.event.srcElement.id & """", 0, "vbs"
		Case "SELECT"
	'Section 2
			If CInt(top.sarrArgs(1).Profile.KeyAccess(Mid(window.event.srcElement.id, 4))) <> CInt(window.event.srcElement.value) Then
				parent.sblnDataDirty = True
				top.btnApply.disabled = False
			End If
		Case Else
		End Select
	End If
End Sub
'======================================



'======================================
' Name: CheckInputForChange
' Args: strElID - string containing the ID
'                 for the element where a
'                 change occurred.
' Desc: This routine compares the value of
'       the key with the contents in the
'       corresponding text box. If they are
'       different the dirty flag is set
'       and the apply button is enabled.
'--------------------------------------
Sub CheckInputForChange(strElID)
	If document.all(strElID).value <> GetKeyAsText(Mid(strElID, 4)) Then
		parent.sblnDataDirty = True
		top.btnApply.disabled = False
	End If
End Sub
'======================================



'======================================
' Name: IsKeyVisible
' Args: strKeyName - string containing the
'                    name of a profile key.
' Ret:  boolean indicating whether the key
'       should be shown in the tab.
' Desc: This function checks the name of the
'       key against a list of proscribed keys.
'       If it isn't on the list a value of True
'       is returned indicating the key can
'       be show on the tab.
'--------------------------------------
Function IsKeyVisible(strKeyName)
	' ignore some keys
	IsKeyVisible = False
	Select Case strKeyName
	Case "Friends"
	Case "FriendsPending"
	Case "Ignoring"
	Case "Quote"
	Case "RecentWorlds"
	Case "GestureText"
	Case "Chat?"
	Case "SpriteGeometry"
	Case "GUID"
	Case "CameraPreference"
	Case "NamedGestures"
	Case "GUID"
	Case "FirstTimeUser"
	Case "Password"
	Case "LastWorld"
	Case "AvatarCameraPosition"
	Case "PreferredName"
	Case Else
		IsKeyVisible = True
	End Select
End Function
'======================================



'======================================
' Name: GetKeyAsText
' Args: strKeyName - string containing the
'                    name of a profile key.
' Ret:  string containing the value of the key.
' Desc: This function assigns the value of
'       the key to a variable and then calls
'       the function KeyToText to convert this
'       value to a string.
'--------------------------------------
Function GetKeyAsText(strKeyName)
	Dim vntKeyValue

	Select Case VarType(top.sarrArgs(1).Profile.KeyValue(strKeyName))
	Case 2, 3, 4, 5, 6, 7, 8, 11
		vntKeyValue = top.sarrArgs(1).Profile.KeyValue(strKeyName)
	Case 9
		Set vntKeyValue = top.sarrArgs(1).Profile.KeyValue(strKeyName)
	Case Else
	End Select
	GetKeyAsText = KeyToText(vntKeyValue)
End Function
'======================================



'======================================
' Name: KeyToText
' Args: vntKeyValue - variant containing the
'                     value of a profile key.
' Ret:  string containing the value of the key.
' Desc: This function converts argument
'       value to a string.
'       Section 1 converts a property list to a
'       comma delimited list.
'       Section 2 sets the return to the name of
'       the object.
'       Section 3 passes through the value of the
'       argument.
'--------------------------------------
Function KeyToText(vntKeyValue)
	Dim strText, strItem

	Select Case TypeName(vntKeyValue)
	Case "IPropertyList"
	'Section 1
		If vntKeyValue.Count > 0 Then
			For Each strItem In vntKeyValue
				strText = strText & KeyToText(strItem) & ", "
			Next
			strText = Left(strText, Len(strText) - 2)
		Else
			strText = "-empty list-"
		End If
		KeyToText = strText
	Case "IThing"
	'Section 2
		KeyToText = vntKeyValue.Name
	Case Else
	'Section 3
		KeyToText = CStr(vntKeyValue)
	End Select
End Function
'======================================



'======================================
' Name: SaveChanges
' Desc: This routine saves the changes to
'       the displayed profile keys
'       Section 1 iterates through each text
'       box, and sets a variable to the
'       corresponding key name.
'       Section 2 only saves the key if it isn't
'       an object.
'       Section 3 sets the access level for the key.
'--------------------------------------
Sub SaveChanges
	Dim objInp, strKeyName

	'Section 1
	For Each objInp In document.all.tags("input")
		strKeyName = Mid(objInp.id, 4)
	'Section 2
		Select Case VarType(top.sarrArgs(1).Profile.KeyValue(strKeyName))
		Case 2, 3, 4, 5, 6, 7, 8, 11
			top.sarrArgs(1).Profile.KeyValue(strKeyName) = objInp.value
		Case 9
			Select Case TypeName(top.sarrArgs(1).Profile.KeyValue(strKeyName))
			Case "IPropertyList"
				' to do - parse a string
			Case "IThing"
				' to do - find this thing...
			Case Else
			End Select
		Case Else
		End Select
	'Section 3
		top.sarrArgs(1).Profile.KeyAccess(strKeyName) = CInt(document.all("sel" & strKeyName).value)
	Next
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
	document.all.tags("input")(0).select
	document.all.tags("input")(0).focus
	top.sblnMouseClicked = False
End Sub
'======================================
