Option Explicit

'======================================
' Public declaration area
'--------------------------------------
Public sblnDataDirty
'======================================


'======================================
' Initialization area
'--------------------------------------
sblnDataDirty = False
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
	txtTitle.innerHTML = "<nobr>" & top.sarrArgs(1).Name & "'s Details</nobr>"
End Sub
'======================================


'======================================
' Name: SaveChanges
' Desc:
'--------------------------------------
Sub SaveChanges
	document.frames("fraDetails").SaveChanges
End Sub
'======================================


'======================================
' Name: SetFocus
' Desc:
'--------------------------------------
Sub SetFocus
	document.frames("fraDetails").SetFocus
End Sub
'======================================
