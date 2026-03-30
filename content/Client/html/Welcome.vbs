Option Explicit

'======================================
' Public declaration area
'--------------------------------------
Public sobjTop
Public sobjVWClient, sobjWorld, sobjUser
'======================================


'======================================
' Initialization area
'--------------------------------------
Set sobjTop = window.dialogArguments
Set sobjVWClient = sobjTop.theClient.VWClient
Set sobjWorld = sobjVWClient.World
Set sobjUser = sobjWorld.User
window.returnValue = False
'======================================


'======================================
' Name: window_onload
' Desc: Fires
'--------------------------------------
Sub window_onload
	sobjTop.AddToEventList window
	UpdateThumbnailImage
	lblTitle.innerText = "Welcome to " & sobjWorld.WorldName & "!"
End Sub
'======================================


'======================================
' Name: window_onunload
' Desc: Fires
'--------------------------------------
Sub window_onunload
	If Not sobjTop.blnAppClosing Then
		sobjTop.RemoveFromEventList window
	End If
End Sub
'======================================


'======================================
' Name: document_onkeypress
' Desc: Fires
'--------------------------------------
Sub document_onkeypress
	If window.event.keyCode = 27 Then window.close
End Sub
'======================================


'======================================
' Name: DoProfile
' Desc:
'--------------------------------------
Sub DoProfile
	window.event.returnValue = False
	window.returnValue = True
	window.close
End Sub
'======================================


'======================================
' Name: DoClose
' Desc:
'--------------------------------------
Sub DoClose
	window.event.returnValue = False
	window.close
End Sub
'======================================


'======================================
' Name: UpdateThumbnailImage
' Desc:
'--------------------------------------
Sub UpdateThumbnailImage
	Dim strImage

	Err.Clear
	On Error Resume Next
	strImage = sobjUser.Geometry.ThumbnailName
	strImage = sobjWorld.Tool("INetFile").GetFile(strImage, True)
	If Err.Number <> 0 Then strImgFile = "../shared/tdefault.gif"
	imgThumbNail.src = strImage
end sub
'======================================


'======================================
' Name: HandleUIEvent
' Desc: Fires when the client gets a Handle UI event
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Select Case strEventName
	Case "OnGeometryChanged"
		UpdateThumbnailImage
	Case "vwCloseAllDialogs"
			window.close
	Case Else
	End Select
End Sub
'======================================
