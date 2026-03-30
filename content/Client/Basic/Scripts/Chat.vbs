'======================================
' Desc: This file contains the script for
'       Chat.htm. The purpose of
'       these two files is to display the
'       chat section of the client.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjVWClient, sobjWorld, sobjUser are
'       critical objects needed for the page
'       to function correctly.
'       sarrKeywords is an array used to store
'       predefined gesture strings.
'       sblnWantEvents is a flag that is used
'       to let the top most client page know
'       that this client should be registered
'       to receive UI events.
'--------------------------------------
Public sobjVWClient, sobjWorld, sobjUser
Public sarrKeywords
Public sblnWantEvents
'======================================



'======================================
' Name: Public Initializations
' Desc: sobjVWClient, sobjWorld, sobjUser are
'       initialized to nothing.
'       sblnWantEvents flag is set to indicate
'       to the top most client page this page
'       want to receive UI events.
'       sarrKeywords array is initialized with
'       predefined gesture values.
'--------------------------------------
Set sobjVWClient = Nothing
Set sobjWorld = Nothing
Set sobjUser = Nothing
sblnWantEvents = True

sarrKeywords = Array(_
	Array("wave", "WAVE"), _
	Array("waves", "WAVE"), _
	Array("bye", "WAVE"), _
	Array("hello", "WAVE"), _
	Array("hi", "WAVE"), _
	Array("goodbye", "WAVE"), _
	Array("turn around", "TURN"), _
	Array("turns around", "TURN"), _
	Array("happy", "SMILE"), _
	Array(":)", "SMILE"), _
	Array(":-)", "SMILE"), _
	Array("smile", "SMILE"), _
	Array("smiles", "SMILE"), _
	Array("laugh", "LAUGH"), _
	Array("laughs", "LAUGH"), _
	Array("lol", "LAUGH"), _
	Array("what", "LAUGH"), _
	Array("flirt", "FLIRT"), _
	Array("flirts", "FLIRT"), _
	Array(";(", "FLIRT"), _
	Array(";-(", "FLIRT"), _
	Array("shrug", "SHRUG"), _
	Array("shrugs", "SHRUG"), _
	Array("?", "SHRUG"), _
	Array("blush", "BLUSH"), _
	Array("blushes", "BLUSH"), _
	Array("angry", "ANGRY"), _
	Array("mad", "ANGRY"), _
	Array("sad", "ANGRY"), _
	Array(":(", "ANGRY"), _
	Array(":-(", "ANGRY"), _
	Array("sleep", "SLEEP"), _
	Array("sleeps", "SLEEP"), _
	Array("pose", "TRICK 3"), _
	Array("poses", "TRICK 3"), _
	Array("action", "TRICK 1"), _
	Array("act", "TRICK 1"), _
	Array("acts", "TRICK 1"))
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page has loaded.
'       The routine OnTopLoad is called to
'       finish the rest of page initialization.
'--------------------------------------
Sub window_onload
	OnTopLoad
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is unloading.
'       The buttons are disabled, and the
'       window is unregistered for receiving
'       UI events.
'--------------------------------------
Sub window_onunload()
	EnableButtons False
	top.RemoveFromEventList window
End Sub
'======================================



'======================================
' Name: txtChat_onfocus
' Desc: Fires when the text box receives focus.
'       This routine fires a UI event
'       to indicate that the renderer
'       should intercept keystrokes.
'--------------------------------------
Sub txtChat_onfocus
	If txtChat.value = "" Then
		sobjWorld.FireUIEvent sobjUser, "vwRenderKeyNavEnabled", True
	End If
End Sub
'======================================



'======================================
' Name: txtChat_onblur
' Desc: Fires when the text box loses focus.
'       This routine sets a variable on the
'       top most client page with the contents
'       of the text box, and fires a UI event
'       to indicate that the renderer
'       should not intercept keystrokes.
'--------------------------------------
Sub txtChat_onblur
	If Not sobjVWClient Is Nothing Then
		top.sstrChatText = txtChat.value
		sobjWorld.FireUIEvent sobjUser, "vwRenderKeyNavEnabled", False
	End If
End Sub
'======================================



'======================================
' Name: txtChat_onkeypress
' Desc: Fires after a key is pressed.
'       This routine determines if the enter
'       key is pressed, if so then checks if
'       the shift key was pressed. Thus, if
'       the Enter and Shift keys are pressed
'       simultaneously the routine DoEmote is
'       called, or if just the Enter key is
'       pressed the routine DoSay is called.
'--------------------------------------
Sub txtChat_onkeypress
	If window.event.keyCode = 13 Then
		If window.event.shiftkey Then
			DoEmote
		Else
			DoSay
		End If
	End If
End Sub
'======================================



'======================================
' Name: txtChat_onkeyup
' Desc: Fires when a key is released.
'       This routine checks if any text
'       has been entered in the text box.
'       If so a UI event is fired to
'       indicate that the renderer
'       should not intercept keystrokes,
'       otherwise a UI event is fired to
'       indicate that the renderer
'       should intercept keystrokes.
'--------------------------------------
Sub txtChat_onkeyup
	If txtChat.value = "" Then
		sobjWorld.FireUIEvent sobjUser, "vwRenderKeyNavEnabled", True
	Else
		sobjWorld.FireUIEvent sobjUser, "vwRenderKeyNavEnabled", False
	End If
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
'       Section 4 the buttons are enabled, initial focus
'       is set, and sets a variable on the top most client
'       page with the contents of the chat text box.
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
	txtChat.select
	txtChat.focus
	top.sstrChatText = txtChat.value
End Sub
'======================================



'======================================
' Name: EnableButtons
' Args: blnEnabled - a flag indicating whether
'                    buttons should be enabled.
' Desc: This routine sets the enabled state
'       of the controls on this page according
'       to the argument flag value.
'--------------------------------------
Sub EnableButtons(blnEnabled)
	txtChat.disabled = Not blnEnabled
	btnSay.enabled = blnEnabled
	btnEmote.enabled = blnEnabled
End Sub
'======================================



'======================================
' Name: DoSay
' Desc: This routine is fired when the user
'       clicks the chat button or presses enter.
'       The contents of the text box is check, if
'       it isn't empty and it isn't the initial default
'       the Say method of the user is called, otherwise
'       an error message is displayed asking the user
'       to enter something chat.
'       Finally the text box is cleared and the focus is
'       set to it.
'--------------------------------------
Sub DoSay
	Dim strText

	strText = Trim(txtChat.value)
	If strText <> "" And strText <> "Type here and press Enter to speak" Then
		sobjUser.Say strText
	Else
		MsgBox "Enter text to say something.", vbOKOnly + vbInformation, top.sstrAppName
	End If
	txtChat.value = ""
	txtChat.focus
End Sub
'======================================



'======================================
' Name: DoEmote
' Desc: This routine is fired when the user
'       clicks the emote button or presses shift + enter.
'       The contents of the text box is check, if
'       it isn't empty and it isn't the initial default
'       value the contents of the text box is compared to the
'       predefined list of gestures. If a match is made that
'       gesture is called; otherwise the user's SayGesture
'       method is called. If the text box is empty or it
'       still contains the initial value an error message
'       is displayed asking the user to enter something chat.
'       Finally the text box is cleared and the focus is
'       set to it.
'--------------------------------------
Sub DoEmote
	Dim strText, arrKeyWord, blnDidEmote

	blnDidEmote = False
	strText = Trim(txtChat.value)
	If strText <> "" And strText <> "Type here and press Enter to speak" Then
		For Each arrKeyWord In sarrKeywords
			If StrComp(strText, arrKeyWord(0), vbTextCompare) = 0 Then
				sobjUser.Emote arrKeyWord(1)
				blnDidEmote = True
				Exit For
			End If
		Next
		If Not blnDidEmote Then sobjUser.SayGesture strText
	Else
		MsgBox "Enter text to emote.", vbOKOnly + vbInformation, top.sstrAppName
	End If
	txtChat.value = ""
	txtChat.focus
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
'       The code for OnUserConnect initializes
'       object variables, calls a routine to enable
'       controls, sets the focus, and selects the contents
'       of the text box.
'       The code for OnUserDisconnect clears
'       object variables, and calls a routine to disable
'       controls if the user is disconnecting.
'       The code for vwRenderKeyPress checks the argument
'       for which key was pressed. If the enter key the
'       routine DoSay is called; otherwise the key character
'       is appended to the chat text box.
'       The code for vwClearChatInput clears the contents of
'       the chat text box and clears the variable storing the
'       contents on the top most client page.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	If IsEmpty(sobjVWClient) Or sobjVWClient Is Nothing Then Exit Sub
	Select Case strEventName
	Case "OnUserConnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = sobjVWClient.World
			Set sobjUser = sobjWorld.User
			EnableButtons True
			txtChat.select
			txtChat.focus
		End If
	Case "OnUserDisconnect"
		If Not vntArgs Is Nothing Then
			If vntArgs Is sobjVWClient.World.User Then
				Set sobjWorld = Nothing
				Set sobjUser = Nothing
				EnableButtons False
			End If
		End If
	Case "vwRenderKeyPress"
		Select Case vntArgs
		Case 13
			If Not sobjUser Is Nothing Then DoSay
		Case Else
			txtChat.value = txtChat.value & Chr(vntArgs)
		End Select
	Case "vwClearChatInput"
		txtChat.value = ""
		top.sstrChatText = txtChat.value
	Case Else
	End Select
End Sub
'======================================
