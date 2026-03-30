Option Explicit

'======================================
' Public declaration area
'--------------------------------------
Public sarrArgs	'used to hold passed variables
'======================================


'======================================
' Initialization area
'--------------------------------------
sarrArgs = Array()
sarrArgs = window.dialogArguments
'======================================


'======================================
' Name: window_onload
' Desc: Fires
'--------------------------------------
Sub window_onload
	sarrArgs(0).AddToEventList window
	lblTitle.innerText = sarrArgs(1).name
	btnEnter.focus
End Sub
'======================================

sub window_OnUnload
	If Not sarrArgs(0).blnAppClosing Then
		sarrArgs(0).RemoveFromEventList window
	end If
end sub

'======================================
' Name: HandleUIEvent
' Desc: Fires when the client gets a Handle UI event
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Select Case strEventName
	Case "vwCloseAllDialogs"
			window.close
	Case Else
	End Select
End Sub
'======================================

sub DoEnter
	window.close
	sarrArgs(1).Transport sarrArgs(1).World.User
end sub
'======================================

Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		window.close
	Case 13
		If window.event.srcElement.tagName <> "BUTTON" Then DoEnter
	Case Else
	End Select
End Sub
'======================================
