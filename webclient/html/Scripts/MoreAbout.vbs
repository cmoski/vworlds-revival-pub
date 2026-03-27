'======================================
' Desc: This file contains the script for
'       MoreAbout.htm. The purpose of
'       these two files is to display a
'       dialog containing a description
'       of an object.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: The variable sarrArgs is used for
'       the arguments the dialog was called
'       with.
'       sblnAllowContextMenu is a flag
'       used to control the display of
'       the context mouse menu. It is
'       intended to assist in the development
'       process.
'       The variable sobjTop is used to store
'       a reference to the top most window of the
'       client.
'       The variables sobjWorld and sobjUser are
'       used to store critical references.
'--------------------------------------
Public sarrArgs
Public sblnAllowContextMenu
Public sobjTop
Public sobjWorld
Public sobjUser
'======================================



'======================================
' Name: Public Initializations
' Desc: The first line initializes sarrArgs
'       as an array.
'       The second line assigns the arguments
'       passed to the dialog to sarrArgs.
'       The third line sets the top most window
'       variable.
'       The fourth & fifth lines set the critical
'       object references.
'       sblnAllowContextMenu is set from a variable
'       on the top most client page.
'       And the seventh line sets the title bar text
'       for the dialog.
'--------------------------------------
sarrArgs = Array()
sarrArgs = window.dialogArguments
Set sobjTop = sarrArgs(0)
Set sobjWorld = sobjTop.objClient.VWClient.World
Set sobjUser = sobjWorld.User
sblnAllowContextMenu = sobjTop.sblnAllowContextMenu
document.title = "More about " & sarrArgs(1).Name
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       The description is entered as the body
'       text for the dialog. If there is no description
'       a generic message is inserted instead.
'--------------------------------------
Sub window_onload
	If Trim(sarrArgs(1).Description) <> "" Then
		document.body.innerText = sarrArgs(1).Description
	Else
		document.body.innerText = "No description available."
	End if
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is loading.
'       A Virtual World UI event is fired to
'       signal the dialog is closing. This is
'       used by the top most page to manage
'       the open dialogs during certain situations.
'--------------------------------------
Sub window_onunload
	sobjWorld.FireUIEvent sobjUser, "vwMoreAboutClose", True
End Sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the dialog
'       is closed.
'--------------------------------------
Sub document_onkeypress
	If window.event.keyCode = 27 Then window.close
End Sub
'======================================
