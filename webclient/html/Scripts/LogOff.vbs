'======================================
' Desc: This file contains the script for
'       Logoff.htm. The purpose of
'       these two files is to display the
'       dialog asking the reason a host
'       is logging off a user.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: The variables sobjVWClient, sobjWorld, and
'       sobjUser are object reference to critical
'       Virtual Worlds objects used in this script.
'       The variable sarrArgs is used for
'       the arguments the dialog was called
'       with.
'--------------------------------------
Public sobjVWClient, sobjWorld, sobjUser
Public sarrArgs
'======================================



'======================================
' Name: Public Initializations
' Desc: The first line initializes sarrArgs
'       as an array.
'       The second line assigns the arguments
'       passed to the dialog to sarrArgs.
'       The third through fifth lines set the
'       critical object references.
'--------------------------------------
sarrArgs = Array()
sarrArgs = window.dialogArguments
Set sobjVWClient = sarrArgs(0).objClient.VWClient
Set sobjWorld = sobjVWClient.World
Set sobjUser = sobjWorld.User
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       The label for the description field
'       is customized with the name of the user
'       being logged off, and the page is
'       registered to receive UI events.
'--------------------------------------
Sub window_onload
	lblDesc.innerText = "Reason for logging off " & sarrArgs(1).Name & ":"
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
' Name: DoLogOff
' Desc: Called if the logoff button is pressed.
'       The LogOff method on the host is called
'       along with a reference to the user being
'       logged off and the reason for the log off.
'--------------------------------------
Sub DoLogOff
	sobjUser.LogOff sarrArgs(1), Trim(txtReason.Value)
	window.close
end sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the dialog
'       is closed.
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		window.close
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
			If vntArgs Is sobjUser Then
				window.close
			End If
		End If
	Case Else
	End Select
End Sub
'======================================

