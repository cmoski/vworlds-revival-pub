Option Explicit

'======================================
' Public declaration area
'--------------------------------------
'======================================


'======================================
' Initialization area
'--------------------------------------
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
' Desc:
'--------------------------------------
Sub OnTopLoad
	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	BuildTable
End Sub
'======================================


'======================================
' Name: BuildTable
' Desc:
'--------------------------------------
Sub BuildTable
	Dim objTable, strKeyName, objRow, objCell, strReadOnly, strDisabled
	Dim strPublic, strFriend, strPrivate, intAccess, objSel, objOpt, objInp

	If Not top.sblnAllowEdit Then
		strReadOnly = " readonly"
	End If
	Set objTable = document.body.all.tags("table")(0)
	For Each strKeyName In top.sarrArgs(1).Profile.Keys
		If IsKeyVisible(strKeyName) Then
			Set objRow = objTable.insertRow
			objRow.style.height = "10px"
			Set objCell = objRow.insertCell
			objCell.className = "vwText"
			objCell.style.width = "10px"
			objCell.innerHTML = "<nobr>" & strKeyName & "&nbsp;&nbsp;</nobr>"
			Set objCell = objRow.insertCell
			If Not(top.sarrArgs(1).Profile.KeyOwner(strKeyName) Is top.sobjUser) And top.sblnAllowEdit Then
				strDisabled = " disabled"
			End If
			Set objInp = document.createElement("<input class=vwInput onkeydown=CheckForDirty id=""inp" & strKeyName & _
				""" style=width:100%; value=""" & GetKeyAsText(strKeyName) & """" & strReadOnly & strDisabled & ">")
			objCell.appendChild objInp
			If top.sblnAllowEdit Then
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
	Set objRow = objTable.insertRow
End Sub
'======================================


'======================================
' Name: CheckForDirty
' Desc:
'--------------------------------------
Sub CheckForDirty
	If top.sblnAllowEdit Then
		Select Case window.event.srcElement.tagName
		Case "INPUT"
			window.setTimeout "CheckInputForChange """ & window.event.srcElement.id & """", 0, "vbs"
		Case "SELECT"
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
' Desc:
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
' Desc:
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
' Desc:
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
' Desc:
'--------------------------------------
Function KeyToText(strKeyValue)
	Dim strText, strItem

	Select Case TypeName(strKeyValue)
	Case "IPropertyList"
		If strKeyValue.Count > 0 Then
			For Each strItem In strKeyValue
				strText = strText & KeyToText(strItem) & ", "
			Next
			strText = Left(strText, Len(strText) - 2)
		Else
			strText = "-empty list-"
		End If
		KeyToText = strText
	Case "IThing"
		KeyToText = strKeyValue.Name
	Case Else
		KeyToText = CStr(strKeyValue)
	End Select
End Function
'======================================


'======================================
' Name: SaveChanges
' Desc:
'--------------------------------------
Sub SaveChanges
	Dim objInp, strKeyName

	For Each objInp In document.all.tags("input")
		strKeyName = Mid(objInp.id, 4)
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
		top.sarrArgs(1).Profile.KeyAccess(strKeyName) = CInt(document.all("sel" & strKeyName).value)
	Next
End Sub
'======================================


'======================================
' Name: SetFocus
' Desc:
'--------------------------------------
Sub SetFocus
	document.all.tags("input")(0).select
	document.all.tags("input")(0).focus
	top.sblnMouseClicked = False
End Sub
'======================================
