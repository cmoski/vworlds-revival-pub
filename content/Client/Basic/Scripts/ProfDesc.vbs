'======================================
' Desc: This file contains the script for
'       ProfDesc.htm. The purpose of
'       these two files is to display the
'       description tab of the Profile dialog.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sblnAllowContextMenu is a flag
'       used to control the display of
'       the context mouse menu. It is
'       intended to assist in the
'       development process.
'       strOldDesc is a string to store the
'       previous description.
'       sblnDataDirty is a flag used to
'       indicate that the user has changed
'       the data on this page.
'--------------------------------------
Public sblnAllowContextMenu
Public strOldDesc
Public sblnDataDirty
'======================================



'======================================
' Name: Public Initializations
' Desc: sblnAllowContextMenu is set from a variable
'       on the top most client page.
'       For sblnDataDirty an initial value
'       of False is made as the user hasn't
'       made any changes to the data yet.
'--------------------------------------
sblnAllowContextMenu = False
sblnDataDirty = False
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       Calls OnTopLoad to initialize the
'       rest of the page.
'--------------------------------------
Sub window_onload
	OnTopLoad
End Sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the dialog
'       is closed. If the Enter key is
'       pressed check to see which kind of
'       Profile is showing, the users or
'       another users. If it is the users,
'       determined by the flag sblnAllowEdit
'       on the top most page, and the text box
'       doesn't have the focus the click
'       action of the OK button is called; otherwise
'       close the dialog.
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
' Desc: Fires when a key is released.
'       This routine calls another routine
'       that has the text checked for
'       changes if editing is allowed and
'       if the text hasn't been changed yet.
'       A delay of 1/4 second is added before
'       the call is made so as not to slow
'       the response down.
'--------------------------------------
Sub txtDesc_onkeyup
	If top.sblnAllowEdit And Not sblnDataDirty Then
		window.setTimeout "CheckForChange", 250, "vbs"
	End If
End Sub
'======================================



'======================================
' Name: txtDesc_onmouseup
' Desc: Fires when a mouse button is released.
'       See the description for the routine txtDesc_onkeyup.
'--------------------------------------
Sub txtDesc_onmouseup
	If top.sblnAllowEdit And Not sblnDataDirty Then
		window.setTimeout "CheckForChange", 250, "vbs"
	End If
End Sub
'======================================



'======================================
' Name: txtDesc_oncut
' Desc: Fires when a cut action happens.
'       See the description for the routine txtDesc_onkeyup.
'--------------------------------------
Sub txtDesc_oncut
	If top.sblnAllowEdit And Not sblnDataDirty Then
		window.setTimeout "CheckForChange", 250, "vbs"
	End If
End Sub
'======================================



'======================================
' Name: txtDesc_onpaste
' Desc: Fires when a paste action happens.
'       See the description for the routine txtDesc_onkeyup.
'--------------------------------------
Sub txtDesc_onpaste
	If top.sblnAllowEdit And Not sblnDataDirty Then
		window.setTimeout "CheckForChange", 250, "vbs"
	End If
End Sub
'======================================



'======================================
' Name: OnTopLoad
' Desc: Completes the initialization of
'       the page.
'       Section 1 ensures that the top
'       most page is loaded before continuing.
'       If it isn't this routine is called in
'       1/4 second.
'       Section 2 sets the Context menu show
'       flag, sets the title for this page,
'       set the description text box to read
'       only if this is not the edit profile
'       dialog, and finally enters the current
'       description into the text box.
'--------------------------------------
Sub OnTopLoad
	'Section 1
	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	'Section 2
	sblnAllowContextMenu = top.sblnAllowContextMenu
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
' Desc: This routine compares the old description
'       with the current description. If they are
'       different the data dirty flag is set and
'       the apply button on the top most page is
'       enabled.
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
' Desc: This routine saves the description
'       in the profile, updates the old description
'       variable with the new value and clears
'       the data dirty flag.
'--------------------------------------
Sub SaveChanges
	top.sarrArgs(1).Profile.KeyValue("quote") = txtDesc.value
	strOldDesc = txtDesc.value
	sblnDataDirty = False
End Sub
'======================================



'======================================
' Name: SetFocus
' Desc: This routine sets the focus and
'       sets a flag on the top most page
'       that is used during mouse navigation
'       of the tabs.
'--------------------------------------
Sub SetFocus
	txtDesc.focus
	top.sblnMouseClicked = False
End Sub
'======================================
