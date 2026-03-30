'======================================
' Desc: This file contains the script for
'       PortalDesc.htm. The purpose of
'       these two files is to display a
'       dialog containing a description
'       of a portal.
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
'--------------------------------------
Public sarrArgs
Public sblnAllowContextMenu
'======================================



'======================================
' Name: Public Initializations
' Desc: The first line initializes sarrArgs
'       as an array.
'       The second line assigns the arguments
'       passed to the dialog to sarrArgs.
'       sblnAllowContextMenu is set from a variable
'       on the top most client page.
'--------------------------------------
sarrArgs = Array()
sarrArgs = window.dialogArguments
sblnAllowContextMenu = sarrArgs(0).sblnAllowContextMenu
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       The title is set to the name of
'       the portal, then the focus is
'       set to the default button, and
'       registers this page for UI events.
'--------------------------------------
Sub window_onload
	lblTitle.innerText = sarrArgs(1).name
	btnEnter.focus
	sarrArgs(0).AddToEventList window
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is unloading.
'       If the app is not closing this page
'       is unregistered for recieving UI events.
'--------------------------------------
Sub window_onunload
	If Not sarrArgs(0).blnAppClosing Then
		sarrArgs(0).RemoveFromEventList window
	End If
End Sub
'======================================



'======================================
' Name: DoEnter
' Desc: This routine is called when the user
'       takes an action that indicates a desire
'       to continue on through the portal. It closes
'       the dialog and then executes the Transport
'       function of the portal.
'--------------------------------------
sub DoEnter
	window.close
	sarrArgs(1).Transport sarrArgs(1).World.User
end sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the dialog
'       is closed. If the Enter key is
'       pressed and the current element is
'       not a button DoEnter routine is called.
'--------------------------------------
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



'======================================
' Name: HandleUIEvent
' Args: objFrom - object reference usually
'                 of the object that initiated
'                 the UI event.
'       strEventName - string containing the
'                      name of the event being
'                      fired.
'       vntArgs - variant that may contain one
'                 or more values/variables that
'                 are typically needed for processing
'                 the UI event.
' Desc: This routine is called by the top
'       most client page. It is required
'       if this page is registered to receive
'       UI events.
'       The code for OnUserDisconnect closes this dialog
'       if the user is disconnected.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Select Case strEventName
	Case "OnUserDisconnect"
		If Not vntArgs Is Nothing Then
			If vntArgs Is sarrArgs(0).objClient.VWClient.World.User Then
				window.close
			End If
		End If
	Case Else
	End Select
End Sub
'======================================
