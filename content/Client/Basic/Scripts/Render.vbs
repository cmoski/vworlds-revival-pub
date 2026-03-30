'======================================
' Desc: This file contains the script for
'       Render.htm. The purpose of
'       these two files is to display the
'       menu bar and renderview in the client.
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
'       sblnWantEvents flag is set to indicate
'       to the top most client page this page
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
'       The routine to disable buttons is
'       called, the window is unregistered for
'       receiving UI events, the sound control's
'       references to the client and the renderview
'       are cleared, and the renderview control's
'       reference to the client is cleared.
'--------------------------------------
Sub window_onunload()
	EnableButtons False
	top.RemoveFromEventList window
	If IsObject(objVWSound) And Not IsNull(objVWSound) Then
		Set objVWSound.VWClient = Nothing
		Set objVWSound.RenderRoot = Nothing
	End If
	Set objRenderView.VWClient = Nothing
End Sub
'======================================



'======================================
' Name: objRenderView_AlphaKeyPressed
' Args: intAscii - interger containing the ASCII
'                  value of the key pressed.
' Desc: Fires when a key is pressed.
'       This routine fires a UI event
'       indicating a key has been pressed.
'--------------------------------------
Sub objRenderView_AlphaKeyPressed(intAscii)
	sobjWorld.FireUIEvent sobjUser, "vwRenderKeyPress", intAscii
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
'       Section 4 calls the EnableButtons routine to enables
'       buttons, calls the UpdateWorldRoomTextDisplay
'       routine to show the world and room names, connects
'       the sound control to the client, connects the sound
'       control to the renderview control, sets the sound
'       control's audio enabled setting to the Play Sound
'       Effects option, and initialize the Explicit Requested
'       Hardware flag to False
'       Section 5 sets necessary renderer options before
'       renderer is fully initialized. These settings are
'       set based on options found in the Options dialog.
'       Section 6 connects the renderview control to the
'       client.
'       Section 7 checks if hardware acceleration failed if
'       requested. If so display a message indicating so and
'       clear the UseHWAcceleration flag; otherwise set
'       UseHWAcceleration flag. Then call the SavePrefs routine
'       so save changes made to the flag.
'--------------------------------------
Sub OnTopLoad
	Dim blnExplicitlyRequestedHW

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
	UpdateWorldRoomTextDisplay True
	objVWSound.VWClient = sobjVWClient
	Set objVWSound.RenderRoot = objRenderView
	objVWSound.enable = top.sblnPlaySoundFX
	blnExplicitlyRequestedHW = False
	'Section 5
	If CInt(top.sintUseHWAcceleration) = 0 Then
		objRenderView.RenderRoot.UseHWAcceleration = False
	ElseIf CInt(top.sintUseHWAcceleration) = 1 Then
		blnExplicitlyRequestedHW = True
	End If
	if CBool(top.sblnForceBackBuffering) = True then
		objRenderView.RenderRoot.ForceBackBuffer = True
	end if
	If CInt(top.sintDrawFastWhenMoving) = 0 Then
		objRenderView.RenderRoot.FastModeEnabled = False
	End If
	If CInt(top.sintColorModel) > -1 Then
		objRenderView.RenderRoot.ColorModel = CInt(top.sintColorModel)
	End If
	'Section 6
	objRenderView.VWClient = sobjVWClient
	'Section 7
	' We may not have gotten HW acceleration even though we requested it.
	If objRenderView.RenderRoot.UseHWAcceleration = False Then
		If blnExplicitlyRequestedHW = True Then
			MsgBox "No hardware acceleration was found, reverting to software.", vbOkOnly + vbInformation, top.sstrAppName
		End If
		top.sintUseHWAcceleration = 0
	Else
		top.sintUseHWAcceleration = 1
	End If
	top.SavePrefs
End Sub
'======================================



'======================================
' Name: UpdateWorldRoomTextDisplay
' Args: blnShow - flag indicating that the
'                 room and world names are
'                 to be displayed.
' Desc: This routine displays or hides the
'       world and room names that appear on
'       menu bar.
'       The previous values are cleared, the
'       routine is called after a timeout of
'       1/4 second if the room doesn't exist,
'       and if the argument is True the new
'       names are inserted.
'--------------------------------------
Sub UpdateWorldRoomTextDisplay(blnShow)
	divWorldRoom.innerHTML = ""
	divWorldRoom.title = ""
	If Not sobjUser Is Nothing Then
		If sobjUser.Container Is Nothing Then
			window.setTimeout "UpdateWorldRoomTextDisplay " & blnShow, 250, "vbs"
			Exit Sub
		End If
		If blnShow Then
			divWorldRoom.innerHTML = "<nobr>" & sobjWorld.WorldName & " : " & sobjUser.Container.Name & "</nobr>"
			divWorldRoom.title = "Current world is " & sobjWorld.WorldName & "," & vbCrLf & _
				"Current room is " & sobjUser.Container.Name
		End If
	End If
End Sub
'======================================



'======================================
' Name: EnableButtons
' Args: blnEnabled - flag indicating the type
'                    of operation to be done.
' Desc: This routine enables or disables the
'       menu items based on the value of the
'       argument flag.
'--------------------------------------
Sub EnableButtons(blnEnabled)
	mnuLogOff.enabled = blnEnabled
	mnuDirectory.enabled = blnEnabled
	mnuCamera.enabled = blnEnabled
	mnuOptions.enabled = blnEnabled
End Sub
'======================================



'======================================
' Name: UpdateUserCamera
' Desc: This routine determines where the
'       camera should be positioned.
'       Section 1 ensures that the room is present
'       on before continuing. If it isn't this
'       routine is called again in 1/4 second.
'       Section 2 retrieves the previous camera
'       mode. If it's *FIRSTPERSON* nothing is
'       done as this is the default setting. If it's
'       *WINGMAN* or *FACING* the routine SetCamera
'       is called with appropiate arguments. If it's
'       none of the above positions the room is
'       searched for an object with the same name
'       as the camera mode string, if no object is found
'       a warning is displayed and the profile setting
'       is set to *FIRSTPERSON*, otherwise the routine
'       SetCamera is called.
'--------------------------------------
Sub UpdateUserCamera
	Dim strCameraMode, objCameraLoc

	'Section 1
	If sobjUser.Container Is Nothing Then
		window.setTimeout "UpdateUserCamera", 250, "vbs"
		Exit Sub
	End If
	'Section 2
	strCameraMode = sobjUser.Profile.KeyValue("CameraPreference")
	Select Case strCameraMode
	Case "*FIRSTPERSON*"
		' do nothing - this is the default
	Case "*WINGMAN*"
		SetCamera sobjUser, Array(0.5, 1.0, -3.0)
	Case "*FACING*"
		SetCamera sobjUser, Array(0.0, 0.0, 3.0, 0.0, 0.0, -1.0)
	Case Else
		Set objCameraLoc = sobjUser.Container.FindWithin(strCameraMode, True)
		If objCameraLoc Is Nothing Then
			' reset the profile
			MsgBox "Unable to determine camera position, setting to 'Through my eyes'.", vbOkOnly + vbInformation, top.sstrAppName
			sobjUser.Profile.KeyValue("CameraPreference") = "*FIRSTPERSON*"
		Else
			' stick it onto the object
			SetCamera sobjUser, Array(0.0, 0.0, 0.0)
		End If
	End Select
End Sub
'======================================



'======================================
' Name: SetCamera
' Args: objFrom - object reference of item
'                 to which camera will be attached.
'       arrArgs - array containing camera positioning
'                 values
' Desc: This routine changes the camera position.
'       It sets the renderview control's camera
'       setting to the objFrom argument, sets a
'       reference to the camera object, retrieves
'       the frame for the object, sets the position
'       of the camera, and if 5 arguements are passed
'       the argument array the camera orientation is
'       set.
'--------------------------------------
Sub SetCamera(objFrom, arrArgs)
	Dim objCamera, objGeom

	objRenderView.SetCamera objFrom
	Set objCamera = objRenderView.RenderRoot.Camera
	Set objGeom = objFrom.GetFrame
	objCamera.SetPositionEx objGeom, arrArgs(0), arrArgs(1), arrArgs(2)
	If UBound(arrArgs) = 5 Then
		objCamera.SetOrientationEx objGeom, arrArgs(3), arrArgs(4), arrArgs(5), 0.0, 1.0, 0.0
	End If
End Sub
'======================================



'======================================
' Name: UpdateFromOptions
' Desc: This routine changes the renderview
'       and sound controls based on choices
'       made in the options dialog.
'       (Note: Care is needed in this code
'              as each property set on the
'              renderer can cause a device
'              rebuild if the renderor is
'              fully initialized.)
'--------------------------------------
Sub UpdateFromOptions
	sobjWorld.global.EnableAutoDownload = CBool(top.sblnAutoDownloadAvatars)
	If CInt(top.sintUseHWAcceleration) = 0 And objRenderView.RenderRoot.UseHWAcceleration = True Then
		objRenderView.RenderRoot.UseHWAcceleration = False
	ElseIf CInt(top.sintUseHWAcceleration) = 1 And objRenderView.RenderRoot.UseHWAcceleration = False Then
		objRenderView.RenderRoot.UseHWAcceleration = True
		If objRenderView.RenderRoot.UseHWAcceleration = False Then
			MsgBox "No hardware acceleration found, reverting to software acceleration.", vbOkOnly + vbInformation, top.sstrAppName
		End If
	End If
	if CBool(top.sblnForceBackBuffering) = True and objRenderView.RenderRoot.ForceBackBuffer = False then
		objRenderView.RenderRoot.ForceBackBuffer = True
	elseif CBool(top.sblnForceBackBuffering) = False and objRenderView.RenderRoot.ForceBackBuffer = True then
		objRenderView.RenderRoot.ForceBackBuffer = False
	end if
	If CInt(top.sintDrawFastWhenMoving) = 1 And objRenderView.EditMode <> 2 Then
		' Boundary edit mode always switches off fast mode.
		objRenderView.RenderRoot.FastModeEnabled = True
	Else
		objRenderView.RenderRoot.FastModeEnabled = False
	End If
	If CInt(top.sintColorModel) > -1 Then
		If Not(objRenderView.RenderRoot.VWRender3d Is Nothing) Then
			If objRenderView.RenderRoot.VWRender3d.ColorModel <> CInt(top.sintColorModel) Then
				objRenderView.RenderRoot.ColorModel = CInt(top.sintColorModel)
			End If
		Else
			objRenderView.RenderRoot.ColorModel = CInt(top.sintColorModel)
		End If
	End If
	' We may not have gotten HW acceleration even though we requested it.
	If objRenderView.RenderRoot.UseHWAcceleration = False Then
		top.sintUseHWAcceleration = 0
	Else
		top.sintUseHWAcceleration = 1
	End If
	top.SavePrefs
	objVWSound.enable = top.sblnPlaySoundFX
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
'       The code for OnUserConnect, if the
'       connecting avatar is the user, sets critical
'       object references, calls EableButtons routine
'       to enable menu items, and calls the routine
'       UpdateWorldRoomTextDisplay to update the world
'       and room names.
'       The code for OnUserDisconnect checks if the
'       disconnecting avatar is the user. If so the object
'       references are cleared, and calls the routine
'       UpdateWorldRoomTextDisplay to clear the world
'       and room names.
'       The code for vwSetCamera calls the SetCamera
'       routine to position the camera.
'       The code for OnEnterRoom checks the argument to see
'       if it is the user. If so the routine called
'       UpdateWorldRoomTextDisplay is called to update the
'       world and room names.
'       The code for OnNameChanged checks the source to see
'       if it is the room. If so the routine called
'       UpdateWorldRoomTextDisplay is called to update the
'       world and room names.
'       The code for vwRenderKeyNavEnabled calls a built in
'       tool that sets a flag for the renderer so it will know
'       whether or not to trap the keyboard events.
'       The code for OnFinishSceneComposite calls the
'       UpdateUserCamera if the user object is set.
'       The code for OnCenterCameraOnObject calls the
'       renderview's CenterViewOnObject.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	On Error Resume Next
	Select Case strEventName
	Case "OnUserConnect"
		If IsObject(vntArgs) And Not vntArgs Is Nothing Then
		If vntArgs Is sobjVWClient.World.User Then
			Set sobjWorld = sobjVWClient.World
			Set sobjUser = sobjWorld.User
			EnableButtons True
			UpdateWorldRoomTextDisplay True
		End If
		End If
	Case "OnUserDisconnect"
		If IsObject(vntArgs) And Not vntArgs Is Nothing Then
		If vntArgs Is sobjUser Then
			Set sobjWorld = Nothing
			Set sobjUser = Nothing
			EnableButtons False
			UpdateWorldRoomTextDisplay False
		End If
		End If
	Case "vwSetCamera"
		If Not objFrom Is Nothing Then SetCamera objFrom, vntArgs
	Case "OnEnterRoom"
		If Not sobjUser Is Nothing Then
			If sobjUser Is vntArgs Then
				UpdateWorldRoomTextDisplay True
			End If
		End If
	Case "OnNameChanged"
		If Not sobjUser Is Nothing Then
			If sobjUser.Container Is objFrom Then
				UpdateWorldRoomTextDisplay True
			End If
		End If
	Case "vwRenderKeyNavEnabled"
		If Not sobjUser Is Nothing Then
			sobjWorld.Tool("Navigate").KeyboardNavEnabled = vntArgs
		End If
	Case "OnFinishSceneComposite"
		If Not sobjUser Is Nothing Then UpdateUserCamera
	Case "OnCenterCameraOnObject"
		objRenderView.CenterViewOnObject vntArgs, False
	Case Else
	End Select
End Sub
'======================================
