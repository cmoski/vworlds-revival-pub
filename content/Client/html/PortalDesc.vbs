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
' Desc: Fires
'--------------------------------------
Sub window_onload
	If StrComp(top.document.readyState, "complete", vbTextCompare) <> 0 Then
		window.setTimeout "window_onload", 250, "vbs"
		Exit Sub
	End If
	document.body.innerText = top.sarrArgs(1).Description
End Sub
'======================================


'======================================
' Name: document_onkeypress
' Desc: Fires
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		top.close
	Case 13
		top.DoEnter
	Case Else
	End Select
End Sub
'======================================
