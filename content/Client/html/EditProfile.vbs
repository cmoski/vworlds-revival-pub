Option Explicit

'======================================
' Public declaration area
'--------------------------------------
'The following variables are references to the Client, World, and User objects
Public sobjVWClient, sobjWorld, sobjUser
Public sobjTop
Public sarrArgs
Public sobjCurEl, sobjCurFrame
Public sblnAllowEdit	'used to determine if controls can be edited
Public sblnMouseClicked
'======================================


'======================================
' Initialization area
'--------------------------------------
sarrArgs = Array()
sarrArgs = window.dialogArguments
Set sobjTop = sarrArgs(0)
Set sobjVWClient = sobjTop.theClient.VWClient
Set sobjWorld = sobjVWClient.World
Set sobjUser = sobjWorld.User
document.title = "Profile of " & sarrArgs(1).Name
Set sobjCurEl = Nothing
Set sobjCurFrame = Nothing
sblnAllowEdit = True
sblnMouseClicked = True
'======================================


'======================================
' Name: window_onload
' Desc:
'--------------------------------------
Sub window_onload
	sobjTop.AddToEventList window
	Set sobjCurEl = lblAppear
	Set sobjCurFrame = document.all("fraAppear")
	UpdateThumbnailImage
	sobjCurEl.click
	sobjCurEl.focus
	sblnMouseClicked = False
End Sub
'======================================


'======================================
' Name: window_onunload
' Desc: Clean up on shut down
'--------------------------------------
Sub window_onunload()
	If Not sobjTop.blnAppClosing Then
		sobjTop.RemoveFromEventList window
		sobjWorld.FireUIEvent sobjUser, "vwProfileClose", True
	End If
End Sub
'======================================


'======================================
' Name: document_onkeypress
' Desc:
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		window.close
	Case 13
		If window.event.srcElement.tagName <> "BUTTON" Then btnOK.click
	Case Else
	End Select
End Sub
'======================================

'======================================
' Name: document_onmouseup
' Desc:
'--------------------------------------
Sub document_onmouseup
	sblnMouseClicked = True
End Sub
'======================================


'======================================
' Name: btnApply_onclick
' Desc:
'--------------------------------------
Sub btnApply_onclick
	Dim intCount, objClientList, blnItemsSaved

	blnItemsSaved = False
	For intCount = 0 To document.frames.length - 1
		If document.frames(intCount).sblnDataDirty Then
			document.frames(intCount).SaveChanges
			blnItemsSaved = True
		End If
	Next
	If blnItemsSaved Then
		Set objClientList = sobjUser.Container.Avatars
		sobjWorld.FireRemoteUIEvent objClientList, sobjUser, "vwOnProfileChange", True
	End If
	document.frames(sobjCurFrame.id).SetFocus
	btnApply.disabled = True
End Sub
'======================================


'======================================
' Name: btnOK_onclick
' Desc:
'--------------------------------------
Sub btnOK_onclick
	btnApply_onclick
	window.close
End Sub
'======================================


'======================================
' Name: MenuClick
' Desc:
'--------------------------------------
Sub MenuClick
	If Not sobjCurFrame Is document.body.all("fra" & Mid(window.event.srcElement.id, 4)) Then
		sobjCurFrame.style.display = "none"
		Set sobjCurFrame = document.body.all("fra" & Mid(window.event.srcElement.id, 4))
		sobjCurFrame.style.display = ""
		If sblnMouseClicked Then document.frames(sobjCurFrame.id).SetFocus
		SetHighlight document.all(window.event.srcElement.sourceIndex + 2)
	End If
End Sub
'======================================


'======================================
' Name: SetHighlight
' Desc:
'--------------------------------------
Sub SetHighlight(objEl)
	sobjCurEl.style.backgroundColor = ""
	sobjCurEl.style.color = ""
	sobjCurEl.parentElement.style.backgroundColor = ""
	objEl.style.backgroundColor = "#9c9b8b"
	objEl.style.color = "white"
	objEl.style.textDecoration = ""
	objEl.parentElement.style.backgroundColor = "#9c9b8b"
	Set sobjCurEl = objEl
End Sub
'======================================


'======================================
' Name: UpdateThumbnailImage
' Desc:
'--------------------------------------
Sub UpdateThumbnailImage
	Dim strImgFile, strGeomName, intSlash

	Err.Clear
	On Error Resume Next
	strImgFile = sarrArgs(1).Geometry.ThumbnailName
	If strImgFile = "" Then
		strImgFile = "images/tdefault.gif"
	Else
		strGeomName = sarrArgs(1).GeometryName
		intSlash = InStrRev(strGeomName, "/")
		If intSlash = 0 Then
			intSlash = instrrev(strGeomName, "\")
		End If
		If intSlash > 0 Then
			strGeomName = Left(strGeomName, intSlash)
			strImgFile = strGeomName & strImgFile
		End If

		strImgFile = sobjWorld.Tool("INetFile").GetFile(strImgFile, True)
		If Err.Number <> 0 Then strImgFile = "images/tdefault.gif"
	End If
	imgThumbNail.src = strImgFile
end sub
'======================================


'======================================
' Name: OnHelp
' Desc:
'--------------------------------------
Sub OnHelp
	window.event.returnValue = False
	Dim helpstringsList
	Set helpstringsList = sobjWorld.global.CreatePropertyList
	helpstringsList.add "client"
	helpstringsList.add "profile"
	sobjWorld.FireUIEvent sobjUser, "Help", helpstringsList
End Sub
'======================================


'======================================
' Name: HandleUIEvent
' Desc: Fires when the client gets a Handle UI event
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Select Case strEventName
	Case "OnGeometryChanged"
		UpdateThumbnailImage
	Case Else
	End Select
End Sub
'======================================

