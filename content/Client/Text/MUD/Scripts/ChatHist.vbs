Option Explicit

'======================================
' Public declaration area
'--------------------------------------
'The following variables are references to the Client, World, and User objects
Public sobjVWClient, sobjWorld, sobjUser

'OnTell event type constants
Public Const conTCSay = 0
Public Const conTCEmote = 1
Public Const conTCThink = 2
Public Const conTCWhisper = 3
Public Const conTCAnnounce = 4
Public Const conTCGesture = 5
Public Const conTCShout = 6
Public Const conTCReport = 7
Public Const conTCAction = 8

'Other UI Event constants used by this page
Public Const conUINone = 0
Public Const conUILogOff = 1
Public Const conUIWelcome = 2
Public Const conUIEvent = 3
Public Const conUIMUDReport = 4

'Report type constants
Public Const conVWR_Error = -1
Public Const conVWR_Print = 0
Public Const conVWR_Echo = 1
Public Const conVWR_Eval = 2
Public Const conVWR_Prompt = 3
Public Const conVWR_PerfLog = 4
Public Const conVWR_Page = 5

'Node type constants
Public Const conElementNode = 1
Public Const conTextNode = 3
Public sblnWantEvents
'======================================


'======================================
' Initialization area
'--------------------------------------
Set sobjVWClient = Nothing
Set sobjWorld = Nothing
Set sobjUser = Nothing
sblnWantEvents = True
'======================================


'======================================
' Name: window_onload
' Desc: Get things started
'--------------------------------------
Sub window_onload
	OnTopLoad
End Sub
'======================================


'======================================
' Name: window_onunload
' Desc: Clean up on shut down
'--------------------------------------
Sub window_onunload()
	top.RemoveFromEventList window
End Sub
'======================================


'======================================
' Name: OnTopLoad
' Desc: Fires when the client is loggon to a world
'--------------------------------------
Sub OnTopLoad
	If StrComp(top.document.readyState, "complete", vbTextCompare) <> 0 Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If

	' register this window to recieve UI events
	If top.sblnAllowContextMenu Then top.AddToEventList window

	' get references to the client
	Set sobjVWClient = top.objClient.VWClient
	If top.sblnLoggedOn Then
		Set sobjWorld = sobjVWClient.World
		Set sobjUser = sobjWorld.User
	Else
		window.setTimeout "OnTopLoad", 250, "vbs"
	End If
End Sub
'======================================


'======================================
' Name: HandleOnTell
' Desc:
'--------------------------------------
Sub HandleOnTell(objFrom, objTo, strMsg, intTCType, intUIType)
	Dim arrCells, objCell1, objCell2, objText, strArray, intI

	Select Case intUIType
	Case conUINone
		'exit the routine if the this user is being ignored
		If sobjUser.IsInUserProfileList(objFrom, "Ignoring") = True Then Exit Sub
		Select Case intTCType
		Case conTCSay
			arrCells = BuildCellArray(objFrom, _
				SetCellClass(objFrom), objFrom.Name & " says,", "vwSpokenText", """" & strMsg & """")
		Case conTCEmote
			If top.sblnShowGestures Then
				arrCells = BuildCellArray(objFrom, _
					"vwEmoteText", objFrom.Name, "vwEmoteText", strMsg)
			End If
		Case conTCThink
			arrCells = BuildCellArray(objFrom, _
				SetCellClass(objFrom), objFrom.Name & " thinks,", "vwThinkText", """" & strMsg & """")
		Case conTCWhisper
			arrCells = BuildCellArray(objFrom, _
				SetCellClass(objFrom), objFrom.Name & " whispers to " & objTo.Name & ",", "vwWhisperText", """" & strMsg & """")
		Case conTCAnnounce
			arrCells = BuildCellArray(objFrom, _
				SetCellClass(objFrom), objFrom.Name & " announces,", "vwAnnounceText", """" & strMsg & """")
		Case conTCGesture
			If top.sblnShowGestures Then
				arrCells = BuildCellArray(objFrom, _
					SetCellClass(objFrom), objFrom.Name & " gestures,", "vwGestureText", strMsg)
			End If
		Case conTCShout
			arrCells = BuildCellArray(objFrom, _
				SetCellClass(objFrom), objFrom.Name & " shouts,", "vwShoutText", """" & strMsg & """")
		Case conTCReport
			arrCells = BuildCellArray(objFrom, _
				SetCellClass(objFrom), objFrom.Name & " reports,", "vwSpokenText", """" & strMsg & """")
		Case conTCAction
			If top.sblnShowEvents Then
				Set objCell1 = document.createElement("<td class=vwActionText style=vertical-align:baseline;padding-top:5;>")
				Set objText = document.createTextNode(strMsg)
				objCell1.appendChild objText
				arrCells = Array(objCell1)
			End If
		Case Else
		End Select
	Case conUILogOff
		If top.sblnShowEvents Then
			arrCells = BuildCellArray(objFrom, "vwMsgText", _
				"Host " & objFrom.Name & " logs off " & objTo.Name & ". Reason:", "vwMsgText", strMsg)
		End If
	Case conUIWelcome
		Set objCell1 = document.createElement("<td class=vwWelcomeText style=vertical-align:baseline;padding-top:5;>")
		Set objText = document.createTextNode(strMsg)
		objCell1.appendChild objText
		arrCells = Array(objCell1)
	Case conUIEvent
		If top.sblnShowEvents Then
			Set objCell1 = document.createElement("<td class=vwMsgText style=vertical-align:baseline;padding-top:5;>")
			Set objText = document.createTextNode(strMsg)
			objCell1.appendChild objText
			arrCells = Array(objCell1)
		End If
	Case conUIMUDReport
		DisplayMultiLineBlock strMsg
		set arrCells = nothing
	Case Else
	End Select
	If IsArray(arrCells) Then AppendHistory arrCells
End Sub
'======================================


'======================================
' Name: BuildCellArray
' Desc:
'--------------------------------------
Function BuildCellArray(objFrom, strClass1, strText1, strClass2, strText2)
	Dim objCell1, objImg, objNoBr, objText, objCell2, objItem, objSubItem

	Set objCell1 = document.createElement("<td class=" & strClass1 & " style=vertical-align:baseline;>")
	Set objNoBr = document.createElement("nobr")
	objCell1.appendChild objNoBr
	Set objText = document.createTextNode(strText1)
	objNoBr.appendChild objText
	Set objCell2 = document.createElement("<td class=" & strClass2 & _
		" style=vertical-align:baseline;padding-left:3;padding-top:5;>")
	Set objText = document.createTextNode(strText2)
	For Each objItem In ParseURLs(objText)
		If objItem.nodeType = conTextNode Then
			For Each objSubItem In ParseEmoticons(objItem)
				objCell2.appendChild objSubItem
			Next
		Else
			objCell2.appendChild objItem
		End If
	Next
	BuildCellArray = Array(objCell1, objCell2)
End Function
'======================================


'======================================
' Name:   SetCellClass
' Desc:   This function sets the class based on the user
'	Return:	A string containing the classname
'--------------------------------------
Function SetCellClass(objFrom)
	If objFrom Is sobjUser Then
		SetCellClass = "vwMyName"
	Else
		SetCellClass = "vwOtherName"
	End If
End Function
'======================================


'======================================
' Name:   ParseEmoticons
' Desc:
'--------------------------------------
Function ParseEmoticons(ByVal objText)
	Dim arrRetItems

	arrRetItems = Array()
	ReDim arrRetItems(UBound(arrRetItems) + 1)
	Set arrRetItems(UBound(arrRetItems)) = objText
	ParseSingleEmoticon arrRetItems, ":-)", "images/emosmilesm.gif"
	ParseSingleEmoticon arrRetItems, ":)", "images/emosmilesm.gif"
	ParseSingleEmoticon arrRetItems, ":-(", "images/emofrownsm.gif"
	ParseSingleEmoticon arrRetItems, ":(", "images/emofrownsm.gif"
	ParseSingleEmoticon arrRetItems, ";-)", "images/emosillysm.gif"
	ParseSingleEmoticon arrRetItems, ";)", "images/emosillysm.gif"
	ParseEmoticons = arrRetItems
End Function
'======================================


'======================================
' Name:   ParseSingleEmoticon
' Desc:
'--------------------------------------
Sub ParseSingleEmoticon(arrRetItems, strEmote, strImgFile)
	Dim objItem, arrNewItems, intOffset, strOldText

	arrNewItems = Array()
	For Each objItem In arrRetItems
		If objItem.nodeType = conTextNode Then
			strOldText = objItem.data
			intOffset = InStr(strOldText, strEmote)
			Do Until intOffset = 0
				If intOffset - 1 > 0 Then
					ReDim Preserve arrNewItems(UBound(arrNewItems) + 1)
					Set arrNewItems(UBound(arrNewItems)) = document.createTextNode(Left(strOldText, intOffset - 1))
				End If
				ReDim Preserve arrNewItems(UBound(arrNewItems) + 1)
				Set arrNewItems(UBound(arrNewItems)) = document.createElement("<img class=vwEmoticonImage src=" & strImgFile & ">")
				strOldText = Mid(strOldText, intOffset + Len(strEmote))
				intOffset = InStr(strOldText, strEmote)
			Loop
			If Len(strOldText) > 0 Then
				ReDim Preserve arrNewItems(UBound(arrNewItems) + 1)
				Set arrNewItems(UBound(arrNewItems)) = document.createTextNode(strOldText)
			End If
		Else
			ReDim Preserve arrNewItems(UBound(arrNewItems) + 1)
			Set arrNewItems(UBound(arrNewItems)) = objItem
		End If
	Next
	arrRetItems = arrNewItems
End Sub
'======================================


'======================================
' Name:   ParseURLs
' Desc:
'--------------------------------------
Function ParseURLs(objText)
	Dim intOffset, intSpaceLoc, intURLLen, strLastChar, strNewText, arrRetItems

	arrRetItems = Array()
	strNewText = objText.data
	Do
		'get the start point of the last URL in the text
		intOffset = FindURLInitOffset(strNewText)
		If intOffset > 0 Then
			intSpaceLoc = InStr(intOffset, strNewText, " ", vbTextCompare)
			If intSpaceLoc = 0 Then intSpaceLoc = Len(strNewText) + 1
			intURLLen = intSpaceLoc - intOffset
			strLastChar = Mid(strNewText, intSpaceLoc - 1, 1)
			If InStr(".!,?""", strLastChar) > 0 Then intURLLen = intURLLen - 1
			strNewText = ReplaceURLWithHTML(arrRetItems, strNewText, intOffset, intURLLen)
		End If
	Loop Until intOffset = 0
	If Len(strNewText) > 0 Then
		ReDim Preserve arrRetItems(UBound(arrRetItems) + 1)
		Set arrRetItems(UBound(arrRetItems)) = document.createTextNode(strNewText)
	End If
	ParseURLs = arrRetItems
End Function
'======================================


'======================================
' Name:   FindURLInitOffset
' Desc:
'--------------------------------------
Function FindURLInitOffset(strText)
	Dim intOffsetHTTP, intOffsetWWW

	FindURLInitOffset = 0
	intOffsetHTTP = InStr(1, strText, "http://", vbTextCompare)
	intOffsetWWW = InStr(1, strText, "www.", vbTextCompare)
	If intOffsetWWW And intOffsetHTTP Then
		If intOffsetWWW < intOffsetHTTP Then
			FindURLInitOffset = intOffsetWWW
		Else
			FindURLInitOffset = intOffsetHTTP
		End If
	ElseIf intOffsetWWW Then
		FindURLInitOffset = intOffsetWWW
	ElseIf intOffsetHTTP Then
		FindURLInitOffset = intOffsetHTTP
	End If
End Function
'======================================


'======================================
' Name:   ReplaceURLWithHTML
' Desc:
'--------------------------------------
Function ReplaceURLWithHTML(arrRetItems, strText, intOffset, intURLLen)
	Dim strURLPart, strFullURL, objAnchor, objText

	If intOffset - 1 > 0 Then
		ReDim Preserve arrRetItems(UBound(arrRetItems) + 1)
		Set arrRetItems(UBound(arrRetItems)) = document.createTextNode(Left(strText, intOffset - 1))
	End If
	strURLPart = Mid(strText, intOffset, intURLLen)
	strFullURL = strURLPart
	If StrComp(Left(strFullURL, 1), "w", vbTextCompare) = 0 Then
		strFullURL = "http://" & strFullURL
	End If
	Set objAnchor = document.createElement("<a target=_blank href=""" & strFullURL & """>")
	Set objText = document.createTextNode(strURLPart)
	objAnchor.appendChild objText
	ReDim Preserve arrRetItems(UBound(arrRetItems) + 1)
	Set arrRetItems(UBound(arrRetItems)) = objAnchor
	ReplaceURLWithHTML = Right(strText, Len(strText) - (intOffset + intURLLen - 1))
End Function
'======================================


'======================================
' Name: GetObjectImage
' Desc: Find the appropiate thumbnail image for the object
'--------------------------------------
Function GetObjectImage(objFrom)
	Dim strImgFile, strGeomName, intSlash

	Err.Clear
	On Error Resume Next
	strImgFile = objFrom.Geometry.ThumbnailName
	If strImgFile = "" Then
		If objFrom.IsOfType("Portal") Then
			strImgFile = "images/icondoor.gif"
		ElseIf objFrom.IsOfType("Artifact") Then
			strImgFile = "images/iconthng.gif"
			If objFrom.IsValidProperty("IsAccessory") = True Then
				If objFrom.IsAccessory = True Then
					strImgFile = "images/iconunwr.gif"
					If objFrom.IsWorn = True Then
						strImgFile = "images/iconwear.gif"
					End If
				End If
			End If
		Else
			strImgFile = "images/tdefault.gif"
		End If
	Else
		strGeomName = objFrom.GeometryName
		intSlash = InStrRev(strGeomName, "/")
		If intSlash = 0 Then
			intSlash = InStrRev(strGeomName, "\")
		End If
		If intSlash > 0 Then
			strGeomName = Left(strGeomName, intSlash)
			strImgFile = strGeomName & strImgFile
		End If

		strImgFile = sobjWorld.Tool("INetFile").GetFile(strImgFile, True)
		If Err.Number <> 0 Then strImgFile = "images/tdefault.gif"
	End If
	GetObjectImage = strImgFile
End Function
'======================================


'======================================
' Name: AppendHistory
' Desc: Creates a table and appends it to the body
'--------------------------------------
Sub AppendHistory(arrCells)
	Dim objTable, objTBody, objRow, objCell

	Set objTable = document.createElement("<table cellpadding=0 cellspacing=0>")
	Set objTBody = document.createElement("tbody")
	objTable.appendChild objTBody
	Set objRow = document.createElement("tr")
	objTBody.appendChild objRow
	For Each objCell In arrCells
		objRow.appendChild objCell
	Next
	document.body.appendChild objTable

	If StrComp(document.selection.type, "none", vbTextCompare) = 0 Then
		objTable.scrollIntoView True
	End If

End Sub
'======================================

'======================================
' Name: DisplayMultiLineBlock
' Desc: Creates a table from a multi line text block and appends it to the body
'--------------------------------------
Sub DisplayMultiLineBlock(strText)
	Dim objTable, objTBody, objRow, objCell, objCol, objText, strArray, intI

	Set objTable = document.createElement("<table cellpadding=0 cellspacing=0>")
	Set objTBody = document.createElement("tbody")
	objTable.appendChild objTBody
	Set objRow = document.createElement("tr")
	objTBody.appendChild objRow

	set objCol = document.createElement("<td class=vwWhisperText style=vertical-align:baseline;padding-top:5;>")
	objRow.appendChild objCol

	strArray = split(strText, chr(13)+chr(10))
	for intI = 0 to ubound(strArray)
		if intI > 0 then
			set objRow = document.createElement("tr")
			objTBody.appendChild objRow
			set objCol = document.createElement("<td class=vwWhisperText style=vertical-align:baseline;>")
			objRow.appendChild objCol
		end if
		Set objText = document.createTextNode(strArray(intI))
		objCol.appendChild objText
	next

	document.body.appendChild objTable

	If StrComp(document.selection.type, "none", vbTextCompare) = 0 Then
		objTable.scrollIntoView True
	End If

End Sub
'======================================

'======================================
' Name: ExtractUser
' Desc: Returns a reference to the user who whispered
'--------------------------------------
Function ExtractUser(strMsg)
	Dim strName

	strName = Left(strMsg, InStr(strMsg, "whispers") - 2)
	Set ExtractUser = sobjUser.Container.FindWithin(strName, True)
End Function
'======================================


'======================================
' Name: HandleUIEvent
' Desc: Fires when the client gets a Handle UI event
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Dim objCell1, objText, arrCells, objUser, strWhisperLeft, strWhisperRight

	Select Case strEventName
	Case "OnEnterWorld"
			Set sobjWorld = sobjVWClient.World
			Set sobjUser = sobjWorld.User
			If (sobjUser is objFrom) Then
				HandleOnTell "", "", "Welcome to " & sobjWorld.WorldName, 0, conUIWelcome
				HandleOnTell "", "", "You enter " & sobjWorld.Global.WorldName & ".", 0, conUIEvent
			Else
				HandleOnTell "", "", objFrom.name & " has connected.", 0, conUIEvent
			End If
	Case "OnUserDisconnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = Nothing
			Set sobjUser = Nothing
			document.body.innerHTML = ""
		End If
	Case "OnLeaveWorld"
		If Not (objFrom is sobjVWClient.World.User) Then
			HandleOnTell "", "", objFrom.name & " has disconnected.", 0, conUIEvent
		End If
	Case "OnReport"
		Select Case vntArgs(1)
			Case conVWR_Error
				arrCells = FormatReport("***" & vntArgs(0), "vwErrorText")
			Case conVWR_Print
				arrCells = FormatReport(vntArgs(0), "vwScriptText")
			Case conVWR_Echo
				arrCells = FormatReport(">> " & vntArgs(0), "vwScriptText")
			Case conVWR_Eval
				arrCells = FormatReport(vntArgs(0), "vwScriptText")
			Case conVWR_Prompt
				arrCells = FormatReport(vntArgs(0), "vwScriptText")
			Case conVWR_PerfLog
			Case conVWR_Page
				If Not(sobjUser Is Nothing) Then
					Set objUser = ExtractUser(vntArgs(0))
					strWhisperLeft = Left(vntArgs(0), InStr(vntArgs(0), """") - 1)
					strWhisperRight = Mid(vntArgs(0), InStr(vntArgs(0), """"), InStrRev(vntArgs(0), """") + 1 - _
						InStr(vntArgs(0), """"))
					arrCells = BuildCellArray(objUser, "vwMyName", _
						strWhisperLeft, "vwWhisperText", strWhisperRight)
				End If
			Case Else
		End Select
		If IsArray(arrCells) Then AppendHistory arrCells
	Case "OnTell"
		If Not(sobjUser Is Nothing) Then
			HandleOnTell vntArgs.Property(0), vntArgs.Property(1), vntArgs.Property(2), vntArgs.Property(3), conUINone
		End If
	Case "OnLogOff"
		HandleTell vntArgs.Property(0), vntArgs.Property(1), vntArgs.Property(2), 0, conUILogOff
	Case "IgnoredUser"
		HandleOnTell "", "", "You are ignoring " & vntArgs.Name & ".", 0, conUIEvent
	Case "UnignoredUser"
		HandleOnTell "", "", "You are no longer ignoring " & vntArgs.Name & ".", 0, conUIEvent
	Case "IgnoredByUser"
		HandleOnTell "", "", vntArgs.Name & " is ignoring you.", 0, conUIEvent
	Case "UnignoredByUser"
		HandleOnTell "", "", vntArgs.Name & " is no longer ignoring you.", 0, conUIEvent
	Case "PortalDestinationNotSet"
		If  Not (objFrom Is Nothing) Then
			If Not objFrom.IsStub Then
				HandleOnTell "", "", "The Portal '" & objFrom.Name & "' has no destination set.", 0, conUIEvent
			End If
		End If
	Case "PortalDestinationInvalid"
		If Not (objFrom Is Nothing) Then
			If Not objFrom.IsStub Then
				curWorld.Report "The Portal '" & who.name & "' has an invalid destination.", 6
				HandleOnTell "", "", "The Portal '" & objFrom.Name & "' has an invalid destination.", 0, conUIEvent
			End If
		End If
	Case "ReconnectFailed"
		HandleOnTell "", "", "'" & vntArgs & "' is not valid.", 0, conUIEvent
	Case "MUDReport"
		HandleOnTell "", "", vntArgs, 0, conUIMUDReport
	Case "OnTrace"
		arrCells = FormatReport(vntArgs, "vwTraceText")
		If IsArray(arrCells) Then AppendHistory arrCells
	Case Else
	End Select
End Sub
'======================================

'======================================
' Name: FormatReport
' Desc: Creates an appropriate HTML element from the report string
'		and returns the element as an array to the calling routine
'--------------------------------------
function FormatReport(strReportString, strClass)
	Dim objCell1, objText

	if left(strReportString,3)=">> " then
		Set objCell1 = document.createElement("<td class=" & strClass & " style=vertical-align:baseline;padding-top:5;>")
	else
		Set objCell1 = document.createElement("<td class=" & strClass & " style=vertical-align:baseline;>")
	end if
	Set objText = document.createTextNode(strReportString)
	objCell1.appendChild objText
	FormatReport = Array(objCell1)

end function
'======================================