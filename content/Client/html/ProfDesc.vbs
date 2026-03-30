Option Explicit

'======================================
' Public declaration area
'--------------------------------------
Public strOldDesc
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
			If Not document.activeElement Is txtDesc Then
				top.btnOK.click
			End If
		Else
			top.close
		End If
	Case Else
	End Select
End Sub
'======================================


'======================================
' Name: txtDesc_onkeyup
' Desc:
'--------------------------------------
Sub txtDesc_onkeyup
	If top.sblnAllowEdit And Not sblnDataDirty Then
		window.setTimeout "CheckForChange", 250, "vbs"
	End If
End Sub
'======================================


'======================================
' Name: txtDesc_onmouseup
' Desc:
'--------------------------------------
Sub txtDesc_onmouseup
	If top.sblnAllowEdit And Not sblnDataDirty Then
		window.setTimeout "CheckForChange", 250, "vbs"
	End If
End Sub
'======================================


'======================================
' Name: txtDesc_oncut
' Desc:
'--------------------------------------
Sub txtDesc_oncut
	If top.sblnAllowEdit And Not sblnDataDirty Then
		window.setTimeout "CheckForChange", 250, "vbs"
	End If
End Sub
'======================================


'======================================
' Name: txtDesc_onpaste
' Desc:
'--------------------------------------
Sub txtDesc_onpaste
	If top.sblnAllowEdit And Not sblnDataDirty Then
		window.setTimeout "CheckForChange", 250, "vbs"
	End If
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
	txtTitle.innerHTML = "<nobr>" & top.sarrArgs(1).Name & "'s Description</nobr>"
	If Not top.sblnAllowEdit Then
		txtDesc.readOnly = True
	End If
	strOldDesc = top.sarrArgs(1).Profile.KeyValue("quote")
	txtDesc.value = strOldDesc
End Sub
'======================================


'======================================
' Name: CheckForChange
' Desc:
'--------------------------------------
Sub CheckForChange
	If txtDesc.value <> strOldDesc Then
		sblnDataDirty = True
		top.btnApply.disabled = False
	End If
End Sub
'======================================


'======================================
' Name: SaveChanges
' Desc:
'--------------------------------------
Sub SaveChanges
	top.sarrArgs(1).Profile.KeyValue("quote") = txtDesc.value
	strOldDesc = txtDesc.value
	sblnDataDirty = False
End Sub
'======================================


'======================================
' Name: SetFocus
' Desc:
'--------------------------------------
Sub SetFocus
	txtDesc.focus
	top.sblnMouseClicked = False
End Sub
'======================================
