'======================================
' Desc: This file contains the script for
'       ProfDetails.htm. The purpose of
'       these two files is to display the
'       details tab of the Profile dialog.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sblnAllowContextMenu is a flag
'       used to control the display of
'       the context mouse menu. It is
'       intended to assist in the
'       development process.
'       sblnDataDirty is a flag used to
'       indicate that the user has changed
'       the data on this page.
'--------------------------------------
Public sblnAllowContextMenu
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
'       on the top most page, call the click
'       action of the OK button; otherwise
'       close the dialog.
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
' Desc: Completes the initialization of
'       the page.
'       Section 1 ensures that the top
'       most page is loaded before continuing.
'       If it isn't this routine is called in
'       1/4 second.
'       Section 2 sets the Context menu show
'       flag and then sets the title for this
'       page.
'--------------------------------------
Sub OnTopLoad
	'Section 1
	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	'Section 2
	sblnAllowContextMenu = top.sblnAllowContextMenu
	txtTitle.innerHTML = "<nobr>" & top.sarrArgs(1).Name & "'s Details</nobr>"
End Sub
'======================================



'======================================
' Name: SaveChanges
' Desc: This routine passes the same call
'       to the frame containing the details
'       table.
'--------------------------------------
Sub SaveChanges
	document.frames("fraDetails").SaveChanges
End Sub
'======================================



'======================================
' Name: SetFocus
' Desc: This routine passes the same call
'       to the frame containing the details
'       table.
'--------------------------------------
Sub SetFocus
	document.frames("fraDetails").SetFocus
End Sub
'======================================
