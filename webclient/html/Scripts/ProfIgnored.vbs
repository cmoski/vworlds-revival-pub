'======================================
' Desc: This file contains the script for
'       ProfIgnored.htm. The purpose of
'       these two files is to display the
'       Ignored tab of the Profile dialog.
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
'       sarrIgnored is a array used to store
'       the list of ignored users.
'--------------------------------------
Public sblnAllowContextMenu
Public sblnDataDirty
Public sarrIgnored
'======================================



'======================================
' Name: Public Initializations
' Desc: sblnAllowContextMenu is set from a variable
'       on the top most client page.
'       For sblnDataDirty an initial value
'       of False is made as the user hasn't
'       made any changes to the data yet.
'       sarrIgnored is set to nothing until
'       it can be initialized later on.
'--------------------------------------
sblnAllowContextMenu = False
sblnDataDirty = False
Set sarrIgnored = Nothing
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
'       pressed check to see if the focus
'       is on the list of ignored users. If it is
'       the double click method of the list is
'       called; otherwise the click action of
'       the OK button is called.
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		top.close
	Case 13
		If document.activeElement Is lstIgnored Then
			lstIgnored_ondblclick
		Else
			top.btnOK.click
		End If
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: lstIgnored_ondblclick
' Desc: Fires when the list is double clicked.
'       This routine indicates selection of a
'       list item by (if not selected) changing
'       the text color to maroon and adding an
'       indicator before the list item, and
'       (if selected) changing the text color
'       back to the default and removing the
'       indicator. If the user has made any
'       selections the dirty flag is set and
'       the Apply button is enabled.
'--------------------------------------
Sub lstIgnored_ondblclick
	If lstIgnored.options(lstIgnored.selectedIndex).style.color = "" Then
		lstIgnored.options(lstIgnored.selectedIndex).style.color = "maroon"
		If Left(lstIgnored.options(lstIgnored.selectedIndex).text, 2) = "  " Then
			lstIgnored.options(lstIgnored.selectedIndex).text = ">" & _
				Mid(lstIgnored.options(lstIgnored.selectedIndex).text, 3)
		End If
		sblnDataDirty = True
		top.btnApply.disabled = False
	Else
		lstIgnored.options(lstIgnored.selectedIndex).style.color = ""
		If Left(lstIgnored.options(lstIgnored.selectedIndex).text, 1) = ">" Then
			lstIgnored.options(lstIgnored.selectedIndex).text = "  " & _
				Mid(lstIgnored.options(lstIgnored.selectedIndex).text, 2)
		End If
	End if
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
'       Section 2 sends a request that this page
'       be registered to receive events, sets the
'       Context menu show flag, sets the title
'       for this page, and finally calls the
'       routine that refreshes the list to populate
'       it.
'--------------------------------------
Sub OnTopLoad
	'Section 1
	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	'Section 2
	top.sobjTop.AddToEventList window
	sblnAllowContextMenu = top.sblnAllowContextMenu
	RefreshIgnoredList
End Sub
'======================================



'======================================
' Name: RefreshIgnoredList
' Desc: This routine clears the list box then
'       rebuilds it.
'       Section 1 saves any selected items in
'       the list box into a temporary array, then
'       the list box is cleared. Selected items are
'       colored maroon.
'       Section 2 retrieves a list of ignored users from
'       the profile. If the list is empty the list
'       box is disabled; otherwise the list is iterated
'       and each ignored user is added to the list box if they
'       are not a stub, meaning that they have been in
'       the world before.
'       Section 3 disables the list box if there are no
'       entries in it; otherwise the temporary array of
'       selected ignored users is compared to the ignored users
'       in the list box and where they are the same the list box
'       ignored user is selected.
'--------------------------------------
Sub RefreshIgnoredList
	Dim objIgnored, objIgnore, objEl, arrSelected, intCount

	'Section 1
	If lstIgnored.length > 0 Then
		For Each objIgnore In lstIgnored.options
			If objIgnore.style.color = "maroon" Then
				If VarType(arrSelected) = vbEmpty Then
					arrSelected = Array(objIgnore.value)
				Else
					ReDim Preserve arrSelected(UBound(arrSelected) + 1)
					arrSelected(UBound(arrSelected)) = objIgnore.value
				End If
			End If
		Next
	End If
	Do While lstIgnored.length > 0
		lstIgnored.remove(0)
	Loop
	'Section 2
	Set objIgnored = top.sarrArgs(1).Profile.KeyValue("Ignoring")
	If objIgnored.Count = 0 Then
		lstIgnored.disabled = True
	Else
		lstIgnored.disabled = False
		For Each objIgnore In objIgnored
			If Not objIgnore.IsStub Then
				Set objEl = document.createElement("OPTION")
				objEl.text = "  " & objIgnore.name
				objEl.value = objIgnore.id
				lstIgnored.add objEl, PosInList(lstIgnored, objEl.text)
			End If
		Next
	'Section 3
		If lstIgnored.length = 0 Then
			lstIgnored.disabled = True
		Else
			lstIgnored.selectedIndex = 0
			For Each objIgnore In lstIgnored.options
				If VarType(arrSelected) <> vbEmpty Then
					For intCount = 0 To UBound(arrSelected)
						If CInt(objIgnore.value) = CInt(arrSelected(intCount)) Then
							objIgnore.style.color = "maroon"
							If Left(objIgnore.text, 2) = "  " Then
								objIgnore.text = ">" & Mid(objIgnore.text, 3)
							End If
							Exit For
						End If
					Next
				End If
			Next
		End If
	End If
End Sub
'======================================



'======================================
' Name: SaveChanges
' Desc: This routine removes any selected
'       ignored users from the list and from the
'       user's profile.
'       First a list of ignored users is retrieved
'       from the profile. Then a check is made
'       to see if there are ignored users in both
'       the list and the list box. If there are
'       the two lists are compared. If an ignored user is
'       found in both and it is selected in the list
'       box (color is maroon) the UnignoreAvatar
'       method is called (remove unignored user from
'       profile list) and the list box item is removed.
'       Finally if the list box is empty it is disabled.
'--------------------------------------
Sub SaveChanges
	Dim objIgnored, objIgnore, objEl

	Set objIgnored = top.sarrArgs(1).Profile.KeyValue("Ignoring")
	If lstIgnored.length > 0 And objIgnored.Count > 0 Then
		For Each objEl In lstIgnored.options
			For Each objIgnore in objIgnored
				If CInt(objEl.value) = CInt(objIgnore.id) And objEl.style.color = "maroon" Then
					top.sobjUser.UnignoreAvatar objIgnore
					objEl.removeNode True
				End If
			Next
		Next
		If lstIgnored.length = 0 Then lstIgnored.disabled = True
	End If
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
	If lstIgnored.disabled Then
		top.sobjCurEl.focus
	Else
		lstIgnored.focus
	End If
	top.sblnMouseClicked = False
End Sub
'======================================



'======================================
' Name: HandleUIEvent
' Args: objFrom - object reference usually
'                 of the object that initiated
'                 the UI event.
'       strEventName - string containing the
'                      name of the event being
'                      fired.
'       vntArgs - variant that may contain one
'                 or more values/variables that
'                 are typically needed for processing
'                 the UI event.
' Desc: This routine is called by the top
'       most client page. It is required
'       if this page is registered to receive
'       UI events.
'       The code for the OnNameChanged, IgnoredUser, and
'       UnignoredUser events calls the routine that will
'       update the list of ignored users.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Select Case strEventName
	Case "OnNameChanged", "IgnoredUser", "UnignoredUser"
		RefreshIgnoredList
	Case Else
	End Select
End Sub
'======================================
