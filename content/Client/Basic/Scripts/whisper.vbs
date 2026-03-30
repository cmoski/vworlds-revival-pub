'======================================
' Desc: This file contains the script for
'       whisper.htm. These two files are
'       the dialog for whispering.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjTop is an object used to
'       reference the top most page of the
'       client.
'       sobjVWClient, sobjWorld, and sobjUser
'       are critical objects needed for the
'       page to function correctly.
'       sarrArgs is an array used for
'       the arguments the dialog was called
'       with.
'       sblnAllowContextMenu is a flag
'       used to control the display of
'       the context mouse menu. It is
'       intended to assist in the
'       development process.
'       sblnRoomOnly is a flag used to indicate
'       the scope for the list of avatars.
'       sobjNameList, and sobjTargetList are
'       object references used to store the lists
'       corresponding to the list boxes.
'       The rest of this section sets constants
'       for use in later code.
'--------------------------------------
Public sobjTop
Public sobjVWClient, sobjWorld, sobjUser
Public sarrArgs
Public sblnAllowContextMenu
Public sblnRoomOnly
Public sobjNameList, sobjTargetList

Const conQanFlagAll = 0	'returns all avatars
Const conQanFlagConnected = 1	'returns connected avatars
Const conQanFlagIgnored = 2	'returns avatars I am not ignoring
Const conQanFlagIgnoring = 4	'returns avatars who are not ignoring me
Const conQanFlagFriend = 8	'returns avatars who are my friends
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
'       sblnAllowContextMenu is set from a variable
'       on the top most client page.
'       sblnRoomOnly is set to True so that only
'       avatars in the current room will show initially.
'       sobjNameList, and sobjTargetList are initialized
'       as property lists.
'--------------------------------------
sarrArgs = Array()
sarrArgs = window.dialogArguments
Set sobjTop = sarrArgs(0)
Set sobjVWClient = sobjTop.objClient.VWClient
Set sobjWorld = sobjVWClient.World
Set sobjUser = sobjWorld.User
sblnAllowContextMenu = sobjTop.sblnAllowContextMenu
sblnRoomOnly = True
Set sobjNameList = sobjWorld.Global.CreatePropertyList
Set sobjTargetList = sobjWorld.Global.CreatePropertyList
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       Section 1 registers this page to receive
'       UI events.
'       Section 2: If whispering is allowed
'       enable the controls, call the
'       GenerateNameList routine, move
'       the user argument from the Name
'       list to the Target list if it isn't
'       this user, and finally call the
'       RefreshLists routine.
'       Section 3: If no whispering is
'       allowed call the ShowNoWhisperMsg
'       routine of the child page.
'--------------------------------------
Sub window_onload
	'Section 1
	sobjTop.AddToEventList window
	If sobjUser.Container.AllowWhispers Then
	'Section 2
		chkShow.disabled = False
		txtWhisper.disabled = False
		btnRefresh.disabled = False
		btnWhisper.enabled = True
		GenerateNameList
		If Not(sobjUser is sarrArgs(1)) Then
			sobjTargetList.Add sarrArgs(1).Name
			sobjNameList.Remove sarrArgs(1).Name
			txtWhisper.focus
		End If
		RefreshLists
	Else
	'Section 3
		fraWhispHist.ShowNoWhisperMsg
	End If
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is unloading.
'       If the app is not closing and the
'       dialog is shutting down normally this page
'       is unregistered for receiving UI events
'       and an event is fired to indicate the dialog
'       is closing.
'--------------------------------------
Sub window_onunload()
	If Not sobjTop.blnAppClosing Then
		If Not sobjTop.blnCloseWhispDialogs Then
			sobjTop.RemoveFromEventList window
			sobjWorld.FireUIEvent sobjUser, "vwWhisperClose", window
		End If
	End If
End Sub
'======================================



'======================================
' Name: document_onresize
' Desc: Fires when the dialog is resized.
'       This routine prevents the routine
'       from getting any smaller then a
'       certain size.
'--------------------------------------
Sub window_onresize
	If Left(window.dialogWidth, Len(window.dialogWidth) - 2) < 350 Then
		window.dialogWidth = "350px"
	End If
	If Left(window.dialogHeight, Len(window.dialogHeight) - 2) < 325 Then
		window.dialogHeight = "325px"
	End If
End Sub
'======================================



'======================================
' Name: document_ondblclick
' Desc: Fires when a double click occurs.
'       This routine calls the DoAdd routine
'       if this event occurred in Names
'       list, and it calls the DoRemove Routine
'       if this event occurred in Targets list.
'--------------------------------------
Sub document_ondblclick
	If window.event.srcElement.id = "lstNames" Then
		DoAdd
	ElseIf window.event.srcElement.id = "lstTargets" Then
		DoRemove
	End If
End Sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the dialog
'       is closed. If the enter key is pressed
'       and the event occurred in (a) the
'       Whisper text box the DoWhisper routine
'       is called, (b) the Names list the DoAdd
'       routine is called, or (c) the Targets
'       list the DoRemove routine is called.
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 13
		Select Case window.event.srcElement.id
		Case "txtWhisper"
			DoWhisper
		Case "lstNames"
			DoAdd
			If lstNames.length = 0 Then lstTargets.focus
		Case "lstTargets"
			DoRemove
			If lstTargets.length = 0 Then lstNames.focus
		Case Else
		End Select
	Case 27
		window.close
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: GenerateNameList
' Desc: This routine builds a list avatars
'       the user can chat with. The first
'       Section limits that list to just the
'       room and the second section show all
'       the avatar in the world.
'--------------------------------------
Sub GenerateNameList
	Dim objThing

	sobjNameList.RemoveAll
	If sblnRoomOnly Then
		For Each objThing In sobjUser.Container.Contents
			If sobjWorld.IsAvatar(objThing) Then
				If objThing.IsValidProperty("IsConnected") Then
					If objThing.IsConnected Then
						If Not(objThing Is sobjUser) Then
							If Not(sobjUser.IsInUserProfileList(objThing, "Ignoring")) And objThing.Container.AllowWhispers Then
								sobjNameList.Add objThing.Name
							End If
						End If
					End If
				End If
			End If
		Next
	Else
		Set sobjNameList = sobjWorld.Global.QueryAvatarNames(conQanFlagConnected + conQanFlagIgnored)
		sobjNameList.Remove sobjUser.Name
	End If
End Sub
'======================================



'======================================
' Name: RefreshLists
' Desc: This routine clears each list then
'       rebuilds them. It update controls
'       to reflect the state of the rebuilt
'       lists.
'--------------------------------------
Sub RefreshLists
	Dim strItem, objEl

	'the next line was added to avoid a crashing bug
	'when trying to remove all the items in a large list.
	lstNames.innerHTML = "<option>"
	Do While lstNames.length > 0
		lstNames.remove(0)
	Loop
	For Each strItem In sobjNameList
		Set objEl = document.createElement("OPTION")
		objEl.value = strItem
		objEl.text = strItem
		lstNames.add objEl, PosInList(lstNames, objEl.text)
	Next
	If lstNames.length > 0 Then
		lstNames.disabled = false
		EnableButton btnAdd
		lstNames.selectedIndex = 0
	Else
		lstNames.disabled = true
		DisableButton btnAdd
	End If

	'the next line was added to avoid a crashing bug
	'when trying to remove all the items in a large list.
	lstTargets.innerHTML = "<option>"
	Do While lstTargets.length > 0
		lstTargets.remove(0)
	Loop
	For Each strItem In sobjTargetList
		Set objEl = document.createElement("OPTION")
		objEl.value = strItem
		objEl.text = strItem
		lstTargets.add objEl, PosInList(lstTargets, objEl.text)
	Next
	If lstTargets.length > 0 Then
		lstTargets.disabled = false
		EnableButton btnRemove
		lstTargets.selectedIndex = 0
	Else
		lstTargets.disabled = true
		DisableButton btnRemove
	End If

End Sub
'======================================



'======================================
' Name: DisableButton
' Desc: This routine disables the chat button.
'--------------------------------------
sub DisableButton(objBtn)
	objBtn.children(0).src = objBtn.children(0).imgDisabled
	objBtn.children(0).style.cursor = "default"
	objBtn.disabled = True
end sub
'======================================


'======================================
' Name: EnableButton
' Desc: This routine enables the chat button.
'--------------------------------------
sub EnableButton(objBtn)
	objBtn.children(0).src = objBtn.children(0).imgEnabled
	objBtn.children(0).style.cursor = "hand"
	objBtn.disabled = False
end sub
'======================================


'======================================
' Name: DoRefresh
' Desc: This routine updates the lists
'       with the current world population.
'--------------------------------------
Sub DoRefresh
	GenerateNameList
	sobjTargetList.RemoveAll
	RefreshLists
End Sub
'======================================



'======================================
' Name: UpdateButtons
' Desc: This routine is used to update
'       the add and remove buttons after
'       the lists have changed.
'--------------------------------------
Sub UpdateButtons
	Dim blnSelection, objItem

		blnSelection = False
		For Each objItem In window.event.srcElement.options
			If objItem.selected Then
				blnSelection = True
				Exit For
			End If
		Next
		If blnSelection Then
			If window.event.srcElement.id = "lstNames" Then
				EnableButton btnAdd
			Else
				EnableButton btnRemove
			End If
		Else
			If window.event.srcElement.id = "lstNames" Then
				DisableButton btnAdd
			Else
				DisableButton btnRemove
			End If
		End If
End Sub
'======================================



'======================================
' Name: LiveUpdateAvatars
' Desc: This routine is used to update
'       the lists for certain events.
'       The items in the Targets list are
'       saved before refreshing the list
'       and then are restored.
'--------------------------------------
Sub LiveUpdateAvatars
	Dim objSavedTargets, objItem

	' save the old targets
	Set objSavedTargets = sobjWorld.Global.CreatePropertyList
	sobjTargetList.CopyTo objSavedTargets
	' regenerate everything
	GenerateNameList
	sobjTargetList.RemoveAll
	' add the old targets again
	For Each objItem In objSavedTargets
		If sobjNameList.Find(objItem) > -1 Then
			sobjNamelist.Remove objItem
			sobjTargetList.Add objItem
		End If
	Next
	RefreshLists
end sub
'======================================



'======================================
' Name: DoAdd
' Desc: This routine removes an item from
'       the name list, adds it to the
'       target list, and updates the buttons.
'--------------------------------------
Sub DoAdd
	Dim objItem

	' add the selected name
	If Not(btnAdd.disabled) Then
		For Each objItem In lstNames.options
			If objItem.selected Then
				sobjTargetList.Add objItem.text
				sobjNameList.Remove objItem.text
			End If
		Next
		RefreshLists
		If lstNames.length > 0 Then
			lstNames.selectedIndex = 0
		Else
			btnRemove.focus
			DisableButton btnAdd
		End If
	End If
End Sub
'======================================



'======================================
' Name: DoRemove
' Desc: This routine removes an item from
'       the target list, adds it to the
'       name list, and updates the buttons.
'--------------------------------------
Sub DoRemove
	Dim objItem

	' remove the selected name
	If Not(btnRemove.disabled) Then
		For Each objItem In lstTargets.options
			If objItem.selected Then
				sobjTargetList.Remove objItem.text
				sobjNameList.Add objItem.text
			End If
		Next
		RefreshLists
		If lstTargets.length > 0 Then
			lstTargets.selectedIndex = 0
		Else
			btnAdd.focus
			DisableButton btnRemove
		End If
	End If
End Sub
'======================================



'======================================
' Name: DoShow
' Desc: This routine toggles between showing
'       just avatars in the current room
'       and all the avatar in the world.
'--------------------------------------
Sub DoShow
	If chkShow.checked Then
		sblnRoomOnly = False
	Else
		sblnRoomOnly = True
	End If
	LiveUpdateAvatars
End Sub
'======================================



'======================================
' Name: DoWhisper
' Desc: This routine does the whispering.
'       It checks to see if the user has
'       entered something to whisper and
'       someone to whisper to before doing
'       the whisper.
'--------------------------------------
sub DoWhisper
	If sobjTargetList.Count = 0 Then
		MsgBox "First add an avatar to whisper to.", vbOkOnly + vbInformation, sobjTop.sstrAppName
	ElseIf Trim(txtWhisper.value) <> "" Then
		sobjUser.Container.TransmitWhisper Trim(txtWhisper.value), sobjTargetList
		txtWhisper.Value = ""
	Else
		MsgBox "Enter text to whisper something.", vbOkOnly + vbInformation, sobjTop.sstrAppName
		txtWhisper.Value = ""
	End If
	txtWhisper.focus
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
'       The code for OnNameChanged, IgnoredUser,
'       and UnignoredUser calls the LiveUpdateAvatars
'       routine.
'       The code for OnEnterRoom checks if
'       the event is caused by this user.
'       If so it checks to see if whispering
'       is allowed. If so it updates the state
'       of the controls and refreshes the lists.
'       If not the controls are disabled and the
'       ShowNoWhisperMsg routine in the child
'       page is called.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Select Case strEventName
	Case "OnNameChanged", "IgnoredUser", "UnignoredUser"
		LiveUpdateAvatars
	Case "OnEnterRoom"
		If vntArgs Is sobjUser Then
			If sobjUser.Container.AllowWhispers Then
				fraWhispHist.document.body.innerHTML = ""
				chkShow.disabled = False
				txtWhisper.disabled = False
				btnRefresh.disabled = False
				btnWhisper.enabled = True
				btnWhisper.style.cursor = "hand"
				GenerateNameList
				sobjTargetList.RemoveAll
				RefreshLists
			Else
				sobjTargetList.RemoveAll
				sobjNameList.RemoveAll
				RefreshLists
				lstNames.disabled = True
				DisableButton btnAdd
				DisableButton btnRemove
				btnRefresh.disabled = True
				lstTargets.disabled = True
				chkShow.disabled = True
				txtWhisper.disabled = True
				btnWhisper.enabled = False
				fraWhispHist.ShowNoWhisperMsg
			End If
		End If
	Case Else
	End Select
End Sub
'======================================

