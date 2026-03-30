Option Explicit

'======================================
' Public declaration area
'--------------------------------------
Public sblnDataDirty
Public sarrIgnored
'======================================


'======================================
' Initialization area
'--------------------------------------
sblnDataDirty = False
Set sarrIgnored = Nothing
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
' Desc:
'--------------------------------------
Sub lstIgnored_ondblclick
	Dim intCount

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
' Desc:
'--------------------------------------
Sub OnTopLoad
	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	top.sobjTop.AddToEventList window
	RefreshIgnoredList
End Sub
'======================================


'======================================
' Name: RefreshIgnoredList
' Desc:
'--------------------------------------
Sub RefreshIgnoredList
	Dim objIgnored, objIgnore, objEl, arrSelected, intCount

	Set objIgnored = top.sarrArgs(1).Profile.KeyValue("Ignoring")
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
' Desc:
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
' Desc:
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
' Desc: Fires when the client gets a Handle UI event
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Dim intCount

	Select Case strEventName
	Case "OnNameChanged", "IgnoredUser", "UnignoredUser"
		RefreshIgnoredList
	Case Else
	End Select
End Sub
'======================================
