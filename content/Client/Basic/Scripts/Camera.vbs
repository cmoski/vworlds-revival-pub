'======================================
' Desc: This file contains the script for
'       Camera.htm. These two files are
'       the dialog for changing the camera's
'       view point perspective.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjTop is an object used to
'       reference the top most page of the
'       client.
'       sobjWorld and sobjUser are critical
'       objects needed for the page to
'       function correctly.
'       sintLoadTimer is an integer used to store
'       the id of an IE timeout.
'--------------------------------------
Public sobjTop
Public sobjWorld
Public sobjUser
Public sintLoadTimer
'======================================



'======================================
' Name: Public Initializations
' Desc: sobjTop is assigned the argument
'       passed to the dialog.
'       sobjWorld and sobjUser are
'       initialized to nothing.
'       sintLoadTimer is initialized to 0
'       indicating no timeout is currently
'       queued up.
'--------------------------------------
Set sobjTop = window.dialogArguments
Set sobjWorld = sobjTop.objClient.VWClient.World
Set sobjUser = sobjWorld.User
sintLoadTimer = 0
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       Section 1 populates the Attach To list
'       with the locations a camera can be
'       attached to in the current room.
'       Section 2 If there are items in the
'       Attach To list the first item is selected;
'       otherwise the list is disabled and the
'       associated option button is disabled.
'       Section 3 retrieves the current camera view
'       mode from the profile. If the mode is
'       FIRSTPERSON the option button Through My Eyes
'       is enabled, the focus is set to this option,
'       the associated description is displayed, and
'       the list box is disabled. If the mode is
'       WINGMAN the option button Over My Shoulder
'       is enabled, the focus is set to this option,
'       the associated description is displayed, and
'       the list box is disabled. If the mode is
'       FACING the option button Facing Me
'       is enabled, the focus is set to this option,
'       the associated description is displayed, and
'       the list box is disabled. If the mode is none
'       of the above the option button Attached To
'       is enabled, the focus is set to this option,
'       the associated description is displayed, and
'       the list box is enabled.
'--------------------------------------
Sub window_onload
	Dim objItem, objEl, strCurMode

	'Section 1
	For Each objItem In sobjUser.Container.Contents
		If objItem.IsCameraAnchor Then
			Set objEl = document.createElement("OPTION")
			objEl.value = objItem.id
			objEl.text = objItem.name
			lstObjects.add objEl, PosInList(lstObjects, objEl.text)
		End If
	Next
	'Section 2
	If lstObjects.length > 0 Then
		lstObjects.options(0).selected = True
		lblAttached.style.color = ""
	Else
		optAttached.disabled = True
		lblAttached.style.color = "gray"
		lstObjects.disabled = True
	End If
	'Section 3
	strCurMode = sobjUser.Profile.KeyValue("CameraPreference")
	Select Case strCurMode
	Case "*FIRSTPERSON*"
		lstObjects.disabled = True
		divFirstPerson.style.display = ""
		optEyes.checked = True
		optEyes.focus
	Case "*WINGMAN*"
		lstObjects.disabled = True
		divWingMan.style.display = ""
		optShoulder.checked = True
		optShoulder.focus
	Case "*FACING*"
		lstObjects.disabled = True
		divFacing.style.display = ""
		optFacing.checked = True
		optFacing.focus
	Case Else
		divAttached.style.display = ""
		optAttached.checked = True
		lstObjects.value = sobjUser.Container.FindWithin(strCurMode, True).ID
		lstObjects.focus
	End Select
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is unloading.
'       If the app is not closing this page
'       is unregistered for receiving UI events
'       and an event is fired to indicate the page
'       is closing.
'--------------------------------------
Sub window_onunload()
	If Not sobjTop.blnAppClosing Then
		sobjWorld.FireUIEvent sobjUser, "vwCameraClose", True
	End If
End Sub
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
' Name: ChangeView
' Desc: This routine sets a timeout to call
'       the routine that loads a camera view.
'       Section 1 clears any previously queued
'       timeout.
'       Section 2 determines which option button
'       was clicked and then sets a timeout that
'       calls the appropriate routine after 1/4 second.
'--------------------------------------
Sub ChangeView
	'Section 1
	If sintLoadTimer <> 0 Then
		window.clearTimeout sintLoadTimer
	End If
	'Section 2
	Select Case window.event.srcElement.id
	Case "optEyes"
		sintLoadTimer = window.setTimeout("ThruEyes : sintLoadTimer = 0", 250, "vbs")
	Case "optFacing"
		sintLoadTimer = window.setTimeout("FromFront : sintLoadTimer = 0", 250, "vbs")
	Case "optShoulder"
		sintLoadTimer = window.setTimeout("OverShoulder : sintLoadTimer = 0", 250, "vbs")
	Case "optAttached"
		sintLoadTimer = window.setTimeout("FromObject : sintLoadTimer = 0", 250, "vbs")
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: ThruEyes
' Desc: This routine shows the camera
'       view point through the user's eyes.
'       Section 1 disables the Attach To
'       list box.
'       Section 2 hides descriptions not
'       associated with the selected option
'       button and then shows the appropriate
'       description.
'       Section 3 saves the new camera view
'       setting in the profile and then fires
'       an event requesting the camera view to
'       be set.
'--------------------------------------
Sub ThruEyes
	'Section 1
	lstObjects.disabled = True
	'Section 2
	divFacing.style.display = "none"
	divWingMan.style.display = "none"
	divAttached.style.display = "none"
	divFirstPerson.style.display = ""
	'Section 3
	sobjUser.Profile.KeyValue("CameraPreference") = "*FIRSTPERSON*"
	sobjWorld.FireUIEvent sobjUser, "vwSetCamera", Array(0.0, 0.7, 0.0)
End Sub
'======================================



'======================================
' Name: FromFront
' Desc: This routine shows the camera view
'       from in front of the user, facing the user.
'       Section 1 disables the Attach To
'       list box.
'       Section 2 hides descriptions not
'       associated with the selected option
'       button and then shows the appropriate
'       description.
'       Section 3 saves the new camera view
'       setting in the profile and then fires
'       an event requesting the camera view to
'       be set.
'--------------------------------------
Sub FromFront
	'Section 1
	lstObjects.disabled = True
	'Section 2
	divAttached.style.display = "none"
	divFirstPerson.style.display = "none"
	divWingMan.style.display = "none"
	divFacing.style.display = ""
	'Section 3
	sobjUser.Profile.KeyValue("CameraPreference") = "*FACING*"
	sobjWorld.FireUIEvent sobjUser, "vwSetCamera", Array(0.0, 0.0, 3.0, 0.0, 0.0, -1.0)
End Sub
'======================================



'======================================
' Name: OverShoulder
' Desc: This routine shows the camera view
'       from over the shoulder of the user.
'       Section 1 disables the Attach To
'       list box.
'       Section 2 hides descriptions not
'       associated with the selected option
'       button and then shows the appropriate
'       description.
'       Section 3 saves the new camera view
'       setting in the profile and then fires
'       an event requesting the camera view to
'       be set.
'--------------------------------------
Sub OverShoulder
	'Section 1
	lstObjects.disabled = True
	'Section 2
	divFacing.style.display = "none"
	divAttached.style.display = "none"
	divFirstPerson.style.display = "none"
	divWingMan.style.display = ""
	'Section 3
	sobjUser.Profile.KeyValue("CameraPreference") = "*WINGMAN*"
	sobjWorld.FireUIEvent sobjUser, "vwSetCamera", Array(0.5, 1.0, -3.0)
End Sub
'======================================



'======================================
' Name: FromObject
' Desc: This routine shows the camera view
'       from the chosen view point in the list.
'       Section 1 enables the Attach To
'       list box.
'       Section 2 hides descriptions not
'       associated with the selected option
'       button and then shows the appropriate
'       description.
'       Section 3 if an item is selected in the
'       list the new camera view setting is saved
'       in the profile and then an event is fired
'       requesting the camera view to be set.
'--------------------------------------
Sub FromObject
	Dim intSel

	'Section 1
	lstObjects.disabled = False
	'Section 2
	divFirstPerson.style.display = "none"
	divWingMan.style.display = "none"
	divFacing.style.display = "none"
	divAttached.style.display = ""
	optAttached.checked = True
	'Section 3
	intSel = lstObjects.selectedIndex
	If intSel > -1 Then
		sobjUser.profile.keyValue("CameraPreference") = lstObjects.item(intSel).text
		sobjWorld.FireUIEvent sobjWorld.ObjectByID(lstObjects.item(intSel).value), "vwSetCamera", Array(0.0, 0.0, 0.0)
	End If
End Sub
'======================================
