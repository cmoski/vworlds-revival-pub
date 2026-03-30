Option Explicit

'======================================
' Public declaration area
'--------------------------------------
'The following variables are references to the Client, World, and User objects
Public sobjVWClient, sobjWorld, sobjUser
Public sobjTop ' Top window object
Public sarrArgs

Public sblnRoomOnly
Public sobjNameList, sobjTargetList

Const conQanFlagAll = 0	'returns all avatars
Const conQanFlagConnected = 1	'returns connected avatars
Const conQanFlagIgnored = 2	'returns avatars I am not ignoring
Const conQanFlagIgnoring = 4	'returns avatars who are not ignoring me
Const conQanFlagFriend = 8	'returns avatars who are my friends
'======================================


'======================================
' Initialization area
'--------------------------------------
sarrArgs = Array()
sarrArgs = window.dialogArguments
Set sobjTop = sarrArgs(0)
Set sobjVWClient = sobjTop.theClient.VWClient
Set sobjWorld = sobjVWClient.World
Set sobjUser = sobjWorld.User
sblnRoomOnly = True
Set sobjNameList = sobjWorld.Global.CreatePropertyList
Set sobjTargetList = sobjWorld.Global.CreatePropertyList
'======================================


'======================================
' Name: window_onload
' Desc:
'--------------------------------------
Sub window_onload
	sobjWorld.FireUIEvent sobjUser, "EventRequest", window
	If sobjUser.Container.AllowWhispers Then
		chkShow.disabled = False
		txtWhisper.disabled = False
		EnableButton btnRefresh
		btnWhisper.enabled = True
		GenerateNameList
		If Not(sobjUser is sarrArgs(1)) Then
			sobjTargetList.Add sarrArgs(1).Name
			sobjNameList.Remove sarrArgs(1).Name
			txtWhisper.focus
		End If
		RefreshLists
	Else
		fraWhispHist.ShowNoWhisperMsg
	End If
End Sub
'======================================


'======================================
' Name: window_onunload
' Desc: Clean up on shut down
'--------------------------------------
Sub window_onunload()
	If Not sobjTop.blnAppClosing Then
		sobjTop.RemoveFromEventList window
		sobjWorld.FireUIEvent sobjUser, "vwWhisperClose", window
	End If
End Sub
'======================================


'======================================
' Name: document_onresize
' Desc:
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
' Desc:
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
' Desc:
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
' Desc:
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
' Desc:
'--------------------------------------
Sub RefreshLists
	Dim strItem, objEl

	'the next line was added to avoid a crashing bug when trying to remove all the items in a large list.
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

	'the next line was added to avoid a crashing bug when trying to remove all the items in a large list.
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
' Desc:
'--------------------------------------
sub DisableButton(objBtn)
	objBtn.disabled = True
	objBtn.className = "bDisabled"
end sub
'======================================


'======================================
' Name: EnableButton
' Desc:
'--------------------------------------
sub EnableButton(objBtn)
	objBtn.disabled = False
	objBtn.className = "bEnabled"
end sub
'======================================


'======================================
' Name: document_onmouseover
' Desc:
'--------------------------------------
Sub document_onmouseover
	Select Case window.event.srcElement.className
	Case "bEnabled"
		window.event.srcElement.className = "bHighlight"
	Case "vwHelp"
		imgHelp.src="..\shared\helpH.gif"
	Case Else
	End Select
End Sub
'======================================


'======================================
' Name: document_onmouseout
' Desc:
'--------------------------------------
Sub document_onmouseout
	Select Case window.event.srcElement.className
	Case "bHighlight"
		window.event.srcElement.className = "bEnabled"
	Case "vwHelp"
		imgHelp.src="..\shared\help.gif"
	Case Else
	End Select
End Sub
'======================================


'======================================
' Name: OnHelp
' Desc:
'--------------------------------------
Sub OnHelp
	Dim strHelp

	window.event.returnValue = False
	strHelp = "mk:@MSITStore:" & sobjWorld.Global.HelpPath
	strHelp = strHelp & "vworlds.chm::/uiref/cliels/whisper.htm>sdkall"
	window.showHelp strHelp
End Sub
'======================================


'======================================
' Name: DoRefresh
' Desc:
'--------------------------------------
Sub DoRefresh
	GenerateNameList
	sobjTargetList.RemoveAll
	RefreshLists
End Sub
'======================================


'======================================
' Name: UpdateButtons
' Desc:
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
' Desc:
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
' Desc:
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
' Desc:
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
' Desc:
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
' Desc:
'--------------------------------------
sub DoWhisper
	If sobjTargetList.Count = 0 Then
		MsgBox "First add an avatar to whisper to.", vbOkOnly + vbInformation, "Microsoft Virtual Worlds"
	ElseIf Trim(txtWhisper.value) <> "" Then
		sobjUser.Container.TransmitWhisper Trim(txtWhisper.value), sobjTargetList
		txtWhisper.Value = ""
	Else
		MsgBox "Enter text to whisper something.", vbOkOnly + vbInformation, "Microsoft Virtual Worlds"
		txtWhisper.Value = ""
	End If
	txtWhisper.focus
End Sub
'======================================


'======================================
' Name: HandleUIEvent
' Desc: Fires when the client gets a Handle UI event
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
				EnableButton btnRefresh
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
				DisableButton btnRefresh
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

