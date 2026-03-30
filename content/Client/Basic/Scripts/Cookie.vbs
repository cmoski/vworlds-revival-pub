'======================================
' Desc: This file is included on pages where
'       preferences need to be read or written
'       from or to the cookie.
'======================================
Option Explicit



'======================================
' Name: LoadPrefs
' Desc: Loads the preferences from the cookie
'--------------------------------------
Function LoadPrefs
	Dim arrCookies, arrCookie, strCookie

	If Not navigator.cookieEnabled Then
		LoadPrefs = False
		MsgBox "Microsoft Virtual Worlds has detected that cookies are disabled in your browser. Virtual Worlds will not operate correctly without cookies enabled. Enable cookies and restart Virtual Worlds.", vbOkOnly + vbInformation, top.sstrAppName
	Else
		LoadPrefs = True
		'Separate each cookie.
		arrCookies = Split(document.cookie, "; ")
		For Each strCookie In arrCookies
			arrCookie = Split(strCookie, "=")
			If UBound(arrCookie) = 1 Then
				Select Case arrCookie(0)
				Case "sintUseHWAcceleration"
					sintUseHWAcceleration = CInt(arrCookie(1))
				Case "sblnForceBackBuffering"
					sblnForceBackBuffering = CBool(arrCookie(1))
				Case "sintDrawFastWhenMoving"
					sintDrawFastWhenMoving = CInt(arrCookie(1))
				Case "sintColorModel"
					sintColorModel = CInt(arrCookie(1))
				Case "sblnAutoDownloadAvatars"
					sblnAutoDownloadAvatars = CBool(arrCookie(1))
				Case "sblnShowThumbnailsOnly"
					sblnShowThumbnailsOnly = CBool(arrCookie(1))
				Case "sblnPlaySoundFX"
					sblnPlaySoundFX = CBool(arrCookie(1))
				Case "sblnShowGestures"
					sblnShowGestures = CBool(arrCookie(1))
				Case "sblnShowEvents"
					sblnShowEvents = CBool(arrCookie(1))
				Case "sblnShowSysMsgs"
					sblnShowSysMsgs = CBool(arrCookie(1))
				Case "sstrUser"
					sstrUser = CStr(Trim(arrCookie(1)))
				Case Else
				End Select
			End If
		Next
	End If
End Function
'======================================



'======================================
' Name: SavePrefs
' Desc: Saves the preferences to the cookie
'--------------------------------------
Sub SavePrefs
	document.cookie = "sintUseHWAcceleration=" & sintUseHWAcceleration & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
	document.cookie = "sblnForceBackBuffering=" & sblnForceBackBuffering & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
	document.cookie = "sintDrawFastWhenMoving=" & sintDrawFastWhenMoving & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
	document.cookie = "sintColorModel=" & sintColorModel & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
	document.cookie = "sblnAutoDownloadAvatars=" & sblnAutoDownloadAvatars & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
	document.cookie = "sblnShowThumbnailsOnly=" & sblnShowThumbnailsOnly & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
	document.cookie = "sblnPlaySoundFX=" & sblnPlaySoundFX & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
	document.cookie = "sblnShowGestures=" & sblnShowGestures & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
	document.cookie = "sblnShowEvents=" & sblnShowEvents & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
	document.cookie = "sblnShowSysMsgs=" & sblnShowSysMsgs & ";path=/;expires=Fri, 1 Jan 2038 00:00:00 GMT"
End Sub
'======================================
