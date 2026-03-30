'======================================
' Desc: This file contains the script for
'       Options.htm. These two files are
'       the dialog for showing the current
'       option settings.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjTop is an object used to
'       reference the top most page of the
'       client.
'--------------------------------------
Public sobjTop
'======================================



'======================================
' Name: Public Initializations
' Desc: sobjTop is assigned the argument
'       passed to the dialog.
'       The second line sets the dialog return
'       value to a default of False, indicating
'       that no options were changed.
'--------------------------------------
set sobjTop = window.dialogArguments
window.returnValue = False
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page has loaded.
'       This routine initializes the dialog's
'       check boxes and option buttons to the
'       corresponding to variables set on the
'       top most client page. It also registers
'       this page for UI events.
'--------------------------------------
Sub window_onload
	if CInt(sobjTop.sintUseHWAcceleration) = 0 then
		chkTurnOffHW.checked = true
		chkDrawFast.checked = true
		if CInt(sobjTop.sintDrawFastWhenMoving) = 0 then
			chkDrawFast.checked = false
		end if
		optPerformance.checked = TRUE
		if CInt(sobjTop.sintColorModel) = 2 then
			optGraphics.checked = TRUE
		end if
		chkForceBB.checked=FALSE
		chkForceBB.disabled=TRUE
		lblForceBB.style.color = "gray"
	else
		chkTurnOffHW.checked = false
		chkDrawFast.checked=FALSE
		chkDrawFast.disabled=TRUE
		lblDrawFast.style.color = "gray"
		optGraphics.checked = TRUE
		optPerformance.disabled=TRUE
		lblPerformance.style.color = "gray"
		optGraphics.disabled=TRUE
		lblGraphics.style.color = "gray"
		lblOptimize.style.color = "gray"
		chkForceBB.checked=sobjTop.sblnForceBackBuffering
	end if
	chkAutoDl.checked = sobjTop.sblnAutoDownloadAvatars
	chkSndFX.checked = sobjTop.sblnPlaySoundFX
	chkShowGest.checked = sobjTop.sblnShowGestures
	chkShowMsg.checked = sobjTop.sblnShowSysMsgs
	chkShowEvent.checked = sobjTop.sblnShowEvents
	sobjTop.AddToEventList window
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
'       the Esc key is pressed the dialog
'       is closed. If the Enter key is pressed
'       and a button doesn't have the focus
'       the OK button click method is called.
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		window.close
	Case 13
		If window.event.srcElement.tagName <> "BUTTON" Then btnOK_onclick
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: chkTurnOffHW_onclick
' Desc: Fires when the Turn Off Hardware
'       Acceleration button is clicked.
'       This routine enables or disables
'       several options depending on the
'       state of the check box.
'--------------------------------------
Sub chkTurnOffHW_onclick
	If chkTurnOffHW.checked = True Then
		chkDrawFast.disabled = False
		lblDrawFast.style.color = "black"
		optPerformance.disabled = False
		lblPerformance.style.color = "black"
		optGraphics.disabled = False
		lblGraphics.style.color = "black"
		lblOptimize.style.color = "black"
		chkForceBB.checked=FALSE
		chkForceBB.disabled=TRUE
		lblForceBB.style.color = "gray"
	Else
		chkDrawFast.checked = False
		chkDrawFast.disabled = True
		lblDrawFast.style.color = "gray"
		optGraphics.checked = True
		optPerformance.disabled = True
		lblPerformance.style.color = "gray"
		optGraphics.disabled = True
		lblGraphics.style.color = "gray"
		lblOptimize.style.color = "gray"
		chkForceBB.disabled=False
		lblForceBB.style.color = "black"
	End If
End Sub
'======================================



'======================================
' Name: btnOK_onclick
' Desc: This fires when the OK button is
'       clicked.
'       This routine checks whether cookies
'       are enabled. If they aren't an error
'       dialog is displayed; otherwise the variables
'       on the top most client page are updated with
'       the values in this page, a method on the top most
'       client page is called to save the new values, the
'       dialog return value is set to indicate that the
'       options have changed. Lastly the dialog is closed.
'--------------------------------------
Sub btnOK_onclick
	If Not navigator.cookieEnabled Then
		MsgBox "Microsoft Virtual Worlds has detected that cookies are disabled in your browser. Virtual Worlds will not save your preferences. Enable cookies and set the options again.", vbOkOnly + vbWarning, sobjTop.sstrAppName
	Else
		If chkTurnOffHW.checked = False Then
			sobjTop.sintUseHWAcceleration = 1
			sobjTop.sblnForceBackBuffering = chkForceBB.checked
		Else
			sobjTop.sintUseHWAcceleration = 0
			If chkDrawFast.checked = True Then
				sobjTop.sintDrawFastWhenMoving = 1
			Else
				sobjTop.sintDrawFastWhenMoving = 0
			End If
			If optGraphics.checked = True Then
				sobjTop.sintColorModel = 2
			Else
				sobjTop.sintColorModel = 1
			End if
		End If
		sobjTop.sblnAutoDownloadAvatars = chkAutoDl.checked
		sobjTop.sblnPlaySoundFX = chkSndFX.checked
		sobjTop.sblnShowGestures = chkShowGest.checked
		sobjTop.sblnShowEvents = chkShowEvent.checked
		sobjTop.sblnShowSysMsgs = chkShowMsg.checked
		sobjTop.SavePrefs
		window.returnValue = True
	End If
	window.close
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
			If vntArgs Is sobjTop.objClient.VWClient.World.User Then
				window.close
			End If
		End If
	Case Else
	End Select
End Sub
'======================================

