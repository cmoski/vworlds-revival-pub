'======================================
' Desc: This file is included on pages where
'       selection of the contents is not
'       desired. Controls where selection
'       would logically be expected are
'       exempted from this selection disabling.
'======================================
Option Explicit



'======================================
' Name: document_onselectstart
' Desc: Fires when selection begins. A check
'       is made to determine if the control should
'       be exempted from selection suppression. If
'       not the selection is cancelled.
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
