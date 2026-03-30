'======================================
' Desc: This file contains the script for
'       Controls.htm. The purpose of
'       these two files is to display the
'       tabs, selfview control and gesture
'       buttons.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjVWClient, sobjWorld, sobjUser are
'       critical objects needed for the page
'       to function correctly.
'       sblnWantEvents is a flag that is used
'       to let the top most client page know
'       that this client should be registered
'       to receive UI events.
'--------------------------------------
Public sobjVWClient, sobjWorld, sobjUser
Public sblnWantEvents
'======================================



'======================================
' Name: Public Initializations
' Desc: sobjVWClient, sobjWorld, sobjUser are
'       initialized to nothing.
'       The last line sets the flag to tell
'       the top most client page this page
'       want to receive UI events.
'--------------------------------------
Set sobjVWClient = Nothing
Set sobjWorld = Nothing
Set sobjUser = Nothing
sblnWantEvents = True
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page has loaded.
'       The first line sets the selfview
'       background color to match the page
'       background color.
'       The second line calls a routine to
'       finish the rest of page initialization.
'--------------------------------------
Sub window_onload
	objSelfView.SetBackgroundColor 244, 244, 232	'F4 F4 E8
	OnTopLoad
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is unloading.
'       The buttons are disabled, the selfview
'       control is disconnected from the VWclient
'       object, and the window is unregistered
'       for receiving UI events.
'--------------------------------------
Sub window_onunload()
	EnableButtons False
	Set objSelfView.VWClient = Nothing
	top.RemoveFromEventList window
End Sub
'======================================



'======================================
' Name: OnTopLoad
' Desc: This routine finishes the initialization
'       of this page.
'       Section 1 ensures that the client is logged
'       on before continuing. If it isn't this
'       routine is called again in 1/4 second.
'       Section 2 registers this window to receive
'       UI events if the context menu can be shown.
'       Section 3 critical object references are
'       assigned their values.
'       Section 4 the buttons are enabled and the
'       selfview control is connected to the VWClient
'       object. This connection is needed for it to
'       display user actions and appearance correctly.
'--------------------------------------
Sub OnTopLoad
	'Section 1
	If Not top.sblnLoggedOn Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If

	'Section 2
	If top.sblnAllowContextMenu Then top.AddToEventList window

	'Section 3
	Set sobjVWClient = top.objClient.VWClient
	Set sobjWorld = sobjVWClient.World
	Set sobjUser = sobjWorld.User

	'Section 4
	EnableButtons True
	Set objSelfView.VWClient = sobjVWClient
End Sub
'======================================



'======================================
' Name: EnableButtons
' Args: blnEnabled - a flag indicating the
'                    enabled state to be applied.
' Desc: This routine updates an attribute, enabled,
'       to all IMG elements on this page. This will
'       be used by other code to determine if the
'       action associated with the IMG is to be taken.
'--------------------------------------
Sub EnableButtons(blnEnabled)
	Dim objEl

	For Each objEl in document.body.all.tags("img")
		objEl.enabled = blnEnabled
	Next
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
'       The two events below are responded to
'       in order to initialize object variables
'       when the user connects and to clear the
'       same object variables when the user disconnects.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	If IsEmpty(sobjVWClient) Or sobjVWClient Is Nothing Then Exit Sub
	Select Case strEventName
	Case "OnUserConnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = sobjVWClient.World
			Set sobjUser = sobjWorld.User
			EnableButtons True
		End If
	Case "OnUserDisconnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = Nothing
			Set sobjUser = Nothing
			EnableButtons False
		End If
	Case Else
	End Select
End Sub
'======================================
