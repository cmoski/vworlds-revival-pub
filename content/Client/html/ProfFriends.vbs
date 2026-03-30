Option Explicit

'======================================
' Public declaration area
'--------------------------------------
Public sblnDataDirty
Public sarrFriends
'======================================


'======================================
' Initialization area
'--------------------------------------
sblnDataDirty = False
Set sarrFriends = Nothing
'======================================


'======================================
' Name: window_onload
' Desc: Initialize controls & values
'--------------------------------------
Sub window_onload
	OnTopLoad
End Sub
'======================================


'======================================
' Name: document_onkeypress
' Desc:
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
' Desc:
'--------------------------------------
Sub lstFriends_ondblclick
	Dim intCount

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
' Desc:
'--------------------------------------
Sub OnTopLoad
	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	top.sobjTop.AddToEventList window
	RefreshFriendList
End Sub
'======================================


'======================================
' Name: RefreshFriendList
' Desc:
'--------------------------------------
Sub RefreshFriendList
	Dim objFriends, objFriend, objEl, arrSelected, intCount

	Set objFriends = top.sarrArgs(1).Profile.KeyValue("Friends")
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
' Desc:
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
' Desc:
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
' Desc: Fires when the client gets a Handle UI event
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Dim intCount

	Select Case strEventName
	Case "OnNameChanged", "Befriended", "Unbefriended"
		RefreshFriendList
	Case Else
	End Select
End Sub
'======================================
