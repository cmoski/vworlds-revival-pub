Option Explicit

'======================================
' Public declaration area
'--------------------------------------
Public sblnDataDirty
Public sstrRemoteAvatarURL
Public sstrAvatarURL
Public sstrOldAvatarURL
Public sblnShownInputBox
'======================================


'======================================
' Initialization area
'--------------------------------------
sblnDataDirty = False
sstrRemoteAvatarURL = ""
sstrAvatarURL = ""
sstrOldAvatarURL = ""
sblnShownInputBox = False
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
		top.btnOK.click
	Case Else
	End Select
End Sub
'======================================


'======================================
' Name: lstAvatars_onclick
' Desc:
'--------------------------------------
Sub lstAvatars_onclick
	If Not sblnShownInputBox Then
		lstAvatars_onchange
	End If
end Sub
'======================================


'======================================
' Name: lstAvatars_onchange
' Desc:
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
' Desc:
'--------------------------------------
Sub OnTopLoad
	Dim objProfile

	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	objSelfView.HandleWorldEvents = False
	objSelfView.SetBackgroundColor 244, 244, 232
	Set objSelfView.VWClient = top.sobjVWClient
	PopulateAvatarList
	Set objProfile = top.sarrArgs(1).Profile
	If objProfile.isValid("LastRemoteSpriteURL") = False Then
		objProfile.AddKey "LastRemoteSpriteURL", ""
	End If
	sstrRemoteAvatarURL = objProfile.KeyValue("LastRemoteSpriteURL")
	sstrOldAvatarURL = LCase(objProfile.KeyValue("SpriteGeometry"))
	sstrAvatarURL = sstrOldAvatarURL
	If lstAvatars.length > 0 Then
		If StrComp(sstrAvatarURL, sstrRemoteAvatarURL, vbTextCompare) = 0 Then
			lstAvatars.value = "(remote avatar)"
		Else
			lstAvatars.value = sstrAvatarURL
		End If
	End If
	UpdateAvatarGraphic
End Sub
'======================================


'======================================
' Name: UpdateAvatarGraphic
' Desc:
'--------------------------------------
Sub UpdateAvatarGraphic
	objSelfView.GeometryName = sstrAvatarURL
	objSelfView.CurrentGesture = 1
End Sub
'======================================


'======================================
' Name: PopulateAvatarList
' Desc:
'--------------------------------------
Sub PopulateAvatarList
	Dim arrCostumeNames, intSlash, strName, objEl

	arrCostumeNames = objAvatarAccessControl.CostumeList
	' set the default sprite path
	If UBound(arrCostumeNames) < LBound(arrCostumeNames) Then
		MsgBox "Avatar graphics were not found on this computer.", vbExclamation, top.sobjTop.sstrAppName
		lstAvatars.disabled = True
	Else
		for each strName in arrCostumeNames
			intSlash = InStrRev(strName, "\")
			Set objEl = document.createElement("OPTION")
			strName = Right(strName, Len(strName) - intSlash)
			objEl.value = strName
			objEl.text = Left(strName, Len(strName) - 4)
			objEl.text = UCase(Left(objEl.text, 1)) & Mid(objEl.text, 2)
			lstAvatars.add objEl, PosInList(lstAvatars, objEl.text)
		Next
		' ok, now add the custom setting
		Set objEl = document.createElement("OPTION")
		objEl.value = "(remote avatar)"
		objEl.text = "(remote avatar)"
		lstAvatars.add objEl
	End If
End Sub
'======================================


'======================================
' Name: SaveChanges
' Desc:
'--------------------------------------
Sub SaveChanges
	top.sarrArgs(1).Profile.KeyValue("SpriteGeometry") = sstrAvatarURL
	top.sarrArgs(1).Profile.KeyValue("LastRemoteSpriteURL") = sstrRemoteAvatarURL
	top.sobjUser.GeometryName = sstrAvatarURL
End Sub
'======================================


'======================================
' Name: SetFocus
' Desc:
'--------------------------------------
Sub SetFocus
	lstAvatars.focus
	top.sblnMouseClicked = False
End Sub
'======================================
