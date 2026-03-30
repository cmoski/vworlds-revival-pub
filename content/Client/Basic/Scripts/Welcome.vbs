'======================================
' Desc: This file contains the script for
'       Welcome.htm. The purpose of
'       these two files is to display the
'       Welcome dialog.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjTop is an object used to
'       reference the top most page of the
'       client.
'       sobjVWClient, sobjWorld, sobjUser are
'       critical objects needed for the page
'       to function correctly.
'--------------------------------------
Public sobjTop
Public sobjVWClient, sobjWorld, sobjUser
'======================================



'======================================
' Name: Public Initializations
' Desc: sobjTop is assigned the arguemnt
'       passed to the dialog.
'       sobjVWClient, sobjWorld, sobjUser are
'       initialized to corresponding object
'       from the top most client page.
'       The last line sets the initial dialog
'       return value to False indicating
'       that the Profile option was not chosen.
'--------------------------------------
Set sobjTop = window.dialogArguments
Set sobjVWClient = sobjTop.objClient.VWClient
Set sobjWorld = sobjVWClient.World
Set sobjUser = sobjWorld.User
window.returnValue = False
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page has loaded.
'       The first line registers this page
'       for recieving UI events.
'       The second line calls a routine to
'       update the thumbnail image in the dialog.
'       The third line updates the title with
'       the world name.
'--------------------------------------
Sub window_onload
	sobjTop.AddToEventList window
	UpdateThumbnailImage
	lblTitle.innerText = "Welcome to " & sobjWorld.WorldName & "!"
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is unloading.
'       If the app is not closing this page
'       is unregistered for recieving UI events.
'--------------------------------------
Sub window_onunload
	If Not sobjTop.blnAppClosing Then
		sobjTop.RemoveFromEventList window
	End If
End Sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the diaog
'       is closed.
'--------------------------------------
Sub document_onkeypress
	If window.event.keyCode = 27 Then window.close
End Sub
'======================================



'======================================
' Name: DoProfile
' Desc: This routine is associated to an
'       A element on the page. The first
'       line cancels any navigation the
'       A element may try.
'       The second line sets the dialog
'       return value to indicat the Profile
'       option was chosen.
'       And finally the dialog is closed.
'--------------------------------------
Sub DoProfile
	window.event.returnValue = False
	window.returnValue = True
	window.close
End Sub
'======================================



'======================================
' Name: DoClose
' Desc: This routine is associated to an
'       A element on the page. The first
'       line cancels any navigation the
'       A element may try. Then the dialog
'       is closed.
'--------------------------------------
Sub DoClose
	window.event.returnValue = False
	window.close
End Sub
'======================================



'======================================
' Name: UpdateThumbnailImage
' Desc: This routine update the thumbnail
'       image displayed in the dialog.
'       The Thumbnail file name is retrieved.
'       Then the Internet File Manager tool is
'       then used to verify and retrieve a
'       complete path and filename. If it
'       unable to do so and an error occurs
'       a default image is displayed.
'--------------------------------------
Sub UpdateThumbnailImage
	Dim strImage

	Err.Clear
	On Error Resume Next
	strImage = sobjUser.Geometry.ThumbnailName
	strImage = sobjWorld.Tool("INetFile").GetFile(strImage, True)
	If Err.Number <> 0 Then strImgFile = "images/tdefault.gif"
	imgThumbNail.src = strImage
end sub
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
'       if this page is registered to recieve
'       UI events.
'       The code for OnGeometryChanged calls the
'       routine that will update the thumbnail image
'       in the event that it is changed while
'       the dialog is showing.
'       The code for OnUserDisconnect closes this dialog
'       if the user is disconnected.
'       Note: Since the dialog is currently modal
'             this routine and the two lines that
'             register and unregister the dialog for
'             recieving UI events should rarely be
'             called or needed. If you decide to
'             make this dialog modeless then they are
'             critical to show an accurate image.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	If IsEmpty(sobjVWClient) Or sobjVWClient Is Nothing Then Exit Sub
	Select Case strEventName
	Case "OnGeometryChanged"
		UpdateThumbnailImage
	Case "OnUserDisconnect"
		If Not vntArgs Is Nothing Then
			If vntArgs Is sobjVWClient.World.User Then window.close
		End If
	Case Else
	End Select
End Sub
'======================================
