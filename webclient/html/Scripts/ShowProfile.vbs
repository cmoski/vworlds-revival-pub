'======================================
' Desc: This file contains the script for
'       ShowProfile.htm. These two files are
'       the Profile dialog for showing another
'       users profile
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjVWClient, sobjWorld, sobjUser are
'       critical objects needed for the page
'       to function correctly.
'       sobjTop is an object used to
'       reference the top most page of the
'       client.
'       sarrArgs is an array used for
'       the arguments the dialog was called
'       with.
'       sobjCurEl is an object used to track
'       the label element of the selected tab.
'       sobjCurFrame is an object used to track
'       the frame element associated with the
'       selected tab.
'       sblnAllowContextMenu is a flag
'       used to control the display of
'       the context mouse menu. It is
'       intended to assist in the
'       development process.
'       sblnAllowEdit is a flag used to indicate
'       whether this dialog's contents can be edited.
'       sblnMouseClicked is a flag used to determine
'       when a tab is selected by the mouse.
'--------------------------------------
Public sobjVWClient, sobjWorld, sobjUser
Public sobjTop
Public sarrArgs
Public sobjCurEl, sobjCurFrame
Public sblnAllowContextMenu
Public sblnAllowEdit
Public sblnMouseClicked
'======================================



'======================================
' Name: Public Initializations
' Desc: sarrArgs is initially set to an
'       empty array. Then the arguments
'       passed to the dialog are assigned
'       to it.
'       sobjTop, sobjVWClient, sobjWorld, and
'       sobjUser are derived from the first
'       item in the argument array.
'       The seventh line sets the dialog title
'       using the second item in the argument
'       array, the user whose profile is being
'       viewed.
'       sobjCurEl and sobjCurFrame are set to
'       nothing to avoid errors in code checks.
'       sblnAllowContextMenu is set from a variable
'       on the top most client page.
'       sblnAllowEdit is set to False as this is
'       the read only version of the Profile dialog.
'       sblnMouseClicked is set to it's initial
'       default value.
'--------------------------------------
sarrArgs = Array()
sarrArgs = window.dialogArguments
Set sobjTop = sarrArgs(0)
Set sobjVWClient = sobjTop.objClient.VWClient
Set sobjWorld = sobjVWClient.World
Set sobjUser = sobjWorld.User
document.title = "Profile of " & sarrArgs(1).Name
Set sobjCurEl = Nothing
Set sobjCurFrame = Nothing
sblnAllowContextMenu = sarrArgs(0).sblnAllowContextMenu
sblnAllowEdit = False
sblnMouseClicked = False
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       The first line requests that this page
'       be registered to receive UI events.
'       The second and third lines set the initial
'       object references for the tab selection.
'       The fourth line calls the routine that
'       updates the thumbnail image for the user
'       whose profile is being viewed.
'       The last line calls the click method for the
'       current label element, this causes the same
'       behavior as clicking on a tab.
'--------------------------------------
Sub window_onload
	sobjTop.AddToEventList window
	Set sobjCurEl = lblDesc
	Set sobjCurFrame = document.all("fraDesc")
	UpdateThumbnailImage
	sobjCurEl.click
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is unloading.
'       Each frame associated with the tabs
'       and this page are requested to be
'       unregistered for receiving UI events.
'--------------------------------------
Sub window_onunload()
	Dim intCount

	For intCount = 0 to document.frames.length - 1
		sobjTop.RemoveFromEventList document.frames(intcount)
	Next
	sobjTop.RemoveFromEventList window
End Sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc or Enter keys are pressed
'       the dialog is closed.
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27, 13
		window.close
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: MenuClick
' Desc: This routine is called when a tab
'       is clicked. It hides the currently
'       displayed frame, sets the current frame
'       object to the frame corresponding to the
'       tab clicked, shows this new frame, and
'       calls the routine that will highlight the
'       clicked tab.
'--------------------------------------
Sub MenuClick
	sobjCurFrame.style.display = "none"
	Set sobjCurFrame = document.body.all("fra" & Mid(window.event.srcElement.id, 4))
	sobjCurFrame.style.display = ""
	SetHighlight document.all(window.event.srcElement.sourceIndex + 2)
End Sub
'======================================



'======================================
' Name: SetHighlight
' Args: objEl - Object reference for the label
'               associated with the clicked tab.
' Desc: This routine unselects the last clicked
'       tab, selects the newly clicked tab, and
'       updates the current element object reference.
'--------------------------------------
Sub SetHighlight(objEl)
	sobjCurEl.style.backgroundColor = ""
	sobjCurEl.style.color = ""
	sobjCurEl.parentElement.style.backgroundColor = ""
	objEl.style.backgroundColor = "#9c9b8b"
	objEl.style.color = "white"
	objEl.style.textDecoration = ""
	objEl.parentElement.style.backgroundColor = "#9c9b8b"
	Set sobjCurEl = objEl
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
	Dim strImgFile

	Err.Clear
	On Error Resume Next
	strImgFile = sarrArgs(1).Geometry.ThumbnailName
	strImgFile = sobjWorld.Tool("INetFile").GetFile(strImgFile, True)
	If Err.Number <> 0 Then strImgFile = "images/tdefault.gif"
	imgThumbNail.src = strImgFile
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
'       if this page is registered to receive
'       UI events.
'       The code for OnGeometryChanged calls the
'       routine that will update the thumbnail image
'       in the event that it is changed while
'       the dialog is showing.
'       The code vwOnProfileChange checks to see if the
'       event originated from the user whose profile is
'       represented by this dialog. If this is the
'       case then each tab is reloaded to refresh
'       it's contents with any changes that were made
'       by the other user.
'       The code for OnUserDisconnect closes this dialog
'       if the user is disconnected.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Dim intCount

	Select Case strEventName
	Case "OnGeometryChanged"
	'Section 1
		UpdateThumbnailImage
	Case "vwOnProfileChange"
	'Section 2
		If objFrom Is sarrArgs(1) Then
			For intCount = 0 To document.frames.length - 1
				document.frames(intCount).location.reload
			Next
		End If
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

