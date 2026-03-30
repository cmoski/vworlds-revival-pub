'======================================
' Desc: This file contains the script for
'       ProfFriends.htm. The purpose of
'       these two files is to display the
'       friends tab of the Profile dialog.
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
'       sarrFriends is a array used to store
'       the list of current friends.
'--------------------------------------
Public sblnAllowContextMenu
Public sblnDataDirty
Public sarrFriends
'======================================



'======================================
' Name: Public Initializations
' Desc: sblnAllowContextMenu is set from a variable
'       on the top most client page.
'       For sblnDataDirty an initial value
'       of False is made as the user hasn't
'       made any changes to the data yet.
'       sarrFriends is set to nothing until
'       it can be initialized later on.
'--------------------------------------
sblnAllowContextMenu = False
sblnDataDirty = False
Set sarrFriends = Nothing
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
'       is on the list of friends. If it is
'       the double click method of the list is
'       called; otherwise the click action of
'       the OK button is called.
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		top.close
	Case 13
		If document.activeElement Is lstFriends Then
			lstFriends_ondblclick
		Else
			top.btnOK.click
		End If
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: lstFriends_ondblclick
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
Sub lstFriends_ondblclick
	If lstFriends.options(lstFriends.selectedIndex).style.color = "" Then
		lstFriends.options(lstFriends.selectedIndex).style.color = "maroon"
		If Left(lstFriends.options(lstFriends.selectedIndex).text, 2) = "  " Then
			lstFriends.options(lstFriends.selectedIndex).text = ">" & _
				Mid(lstFriends.options(lstFriends.selectedIndex).text, 3)
		End If
		sblnDataDirty = True
		top.btnApply.disabled = False
	Else
		lstFriends.options(lstFriends.selectedIndex).style.color = ""
		If Left(lstFriends.options(lstFriends.selectedIndex).text, 1) = ">" Then
			lstFriends.options(lstFriends.selectedIndex).text = "  " & _
				Mid(lstFriends.options(lstFriends.selectedIndex).text, 2)
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
	RefreshFriendList
End Sub
'======================================



'======================================
' Name: RefreshFriendList
' Desc: This routine clears the list box then
'       rebuilds it.
'       Section 1 saves any selected items in
'       the list box into a temporary array, then
'       the list box is cleared. Selected items are
'       colored maroon.
'       Section 2 retrieves a list of Friends from
'       the profile. If the list is empty the list
'       box is disabled; otherwise the list is iterated
'       and each friend is added to the list box if they
'       are not a stub, meaning that they have been in
'       the world before.
'       Section 3 disables the list box if there are no
'       entries in it; otherwise the temporary array of
'       selected friends is compared to the friends in the
'       list box and where they are the same the list box
'       friend is selected.
'--------------------------------------
Sub RefreshFriendList
	Dim objFriends, objFriend, objEl, arrSelected, intCount

	'Section 1
	If lstFriends.length > 0 Then
		For Each objFriend In lstFriends.options
			If objFriend.style.color = "maroon" Then
				If VarType(arrSelected) = vbEmpty Then
					arrSelected = Array(objFriend.value)
				Else
					ReDim Preserve arrSelected(UBound(arrSelected) + 1)
					arrSelected(UBound(arrSelected)) = objFriend.value
				End If
			End If
		Next
	End If
	Do While lstFriends.length > 0
		lstFriends.remove(0)
	Loop
	'Section 2
	Set objFriends = top.sarrArgs(1).Profile.KeyValue("Friends")
	If objFriends.Count = 0 Then
		lstFriends.disabled = True
	Else
		lstFriends.disabled = False
		For Each objFriend In objFriends
			If Not objFriend.IsStub Then
				Set objEl = document.createElement("OPTION")
				objEl.text = "  " & objFriend.name
				objEl.value = objFriend.id
				lstFriends.add objEl, PosInList(lstFriends, objEl.text)
			End If
		Next
	'Section 3
		If lstFriends.length = 0 Then
			lstFriends.disabled = True
		Else
			lstFriends.selectedIndex = 0
			For Each objFriend In lstFriends.options
				If VarType(arrSelected) <> vbEmpty Then
					For intCount = 0 To UBound(arrSelected)
						If CInt(objFriend.value) = CInt(arrSelected(intCount)) Then
							objFriend.style.color = "maroon"
							If Left(objFriend.text, 2) = "  " Then
								objFriend.text = ">" & Mid(objFriend.text, 3)
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
'       friends from the list and from the
'       user's profile.
'       First a list of friends is retrieved
'       from the profile. Then a check is made
'       to see if there are friends in both
'       the list and the list box. If there are
'       the two lists are compared. If a friend is
'       found in both and it is selected in the list
'       box (color is maroon) the UnbefriendAvatar
'       method is called (remove friend from profile
'       list) and the list box item is removed.
'       Finally if the list box is empty it is disabled.
'--------------------------------------
Sub SaveChanges
	Dim objFriends, objFriend, objEl

	Set objFriends = top.sarrArgs(1).Profile.KeyValue("Friends")
	If lstFriends.length > 0 And objFriends.Count > 0 Then
		For Each objEl In lstFriends.options
			For Each objFriend in objFriends
				If CInt(objEl.value) = CInt(objFriend.id) And objEl.style.color = "maroon" Then
					top.sobjUser.UnbefriendAvatar objFriend
					objEl.removeNode True
				End If
			Next
		Next
		If lstFriends.length = 0 Then lstFriends.disabled = True
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
	If lstFriends.disabled Then
		top.sobjCurEl.focus
	Else
		lstFriends.focus
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
'       The code for the OnNameChanged, Befriended, and
'       Unbefriended events calls the routine that will
'       update the list of friends.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	If IsEmpty(sobjVWClient) Or sobjVWClient Is Nothing Then Exit Sub
	Select Case strEventName
	Case "OnNameChanged", "Befriended", "Unbefriended"
		RefreshFriendList
	Case Else
	End Select
End Sub
'======================================
