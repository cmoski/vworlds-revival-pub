'======================================
' Desc: This file contains the script for
'       PortalDesc.htm. The purpose of
'       these two files is to display a
'       description of a portal.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: This variable is used to control
'       the display of the context mouse
'       menu. It is intended to assist
'       in the development process.
'--------------------------------------
Public sblnAllowContextMenu
'======================================



'======================================
' Name: Public Initializations
' Desc: sblnAllowContextMenu is set from a variable
'       on the top most client page. Here it is
'       set to False until the value from the top
'       most client page can be retrieved.
'--------------------------------------
sblnAllowContextMenu = False
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       Section 1 ensures that the top
'       most page is loaded before continuing.
'       Section 2 sets the flag for allowing
'       context menus and then adds the
'       portals description to the document.
'--------------------------------------
Sub window_onload
	'Section 1
	If StrComp(top.document.readyState, "complete", vbTextCompare) <> 0 Then
		window.setTimeout "window_onload", 250, "vbs"
		Exit Sub
	End If

	'Section 2
	sblnAllowContextMenu = top.sblnAllowContextMenu
	document.body.innerText = top.sarrArgs(1).Description
End Sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the dialog
'       is closed. If the Enter key is
'       pressed call the DoEnter routine on
'       the top most page is called.
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
