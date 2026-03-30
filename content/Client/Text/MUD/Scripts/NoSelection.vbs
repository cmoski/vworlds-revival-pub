Option Explicit

'======================================
' Name: document_onselectstart
' Desc: Disables all selection except for text controls
'--------------------------------------
Sub document_onselectstart
	Select Case window.event.srcElement.tagName
	Case "INPUT", "TEXTAREA"
		Select Case window.event.srcElement.type
		Case "text", "textarea", "file", "password"
		Case Else
			window.event.returnValue = False
		End Select
	Case Else
		window.event.returnValue = False
	End Select
End Sub
'======================================
