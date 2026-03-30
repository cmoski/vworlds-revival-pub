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
'======================================


'======================================
' Initialization area
'--------------------------------------
Set sobjVWClient = Nothing
Set sobjWorld = Nothing
Set sobjUser = Nothing
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
	If Not sobjWorld Is Nothing Then
		sobjWorld.FireUIEvent sobjUser, "EventRequestCancel", window
	End If
End Sub
'======================================


'======================================
' Name: document_onclick
' Desc:
'--------------------------------------
Sub document_onclick
	If window.event.srcElement.tagName = "A" Then
		window.event.returnValue = False
		top.open window.event.srcElement.href
	End If
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

	' get references to the client
	Set sobjVWClient = top.sobjVWClient
	Set sobjWorld = sobjVWClient.World
	Set sobjUser = sobjWorld.User

	' register this window to recieve UI events
	sobjWorld.FireUIEvent sobjUser, "EventRequest", window
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
	Set objImg = document.createElement("<img class=vwThumbnailHist linkedItemID=""" & objFrom.ID & _
		""" name=Thumbnail src=""" & GetObjectImage(objFrom) & """ style=cursor:hand;>")
	objNoBr.appendChild objImg
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
	ParseSingleEmoticon arrRetItems, ":-)", "emosmilesm.gif"
	ParseSingleEmoticon arrRetItems, ":)", "emosmilesm.gif"
	ParseSingleEmoticon arrRetItems, ":-(", "emofrownsm.gif"
	ParseSingleEmoticon arrRetItems, ":(", "emofrownsm.gif"
	ParseSingleEmoticon arrRetItems, ";-)", "emosillysm.gif"
	ParseSingleEmoticon arrRetItems, ";)", "emosillysm.gif"
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
				Set arrNewItems(UBound(arrNewItems)) = document.createElement("<img class=vwEmoticonImageWhisp src=" & strImgFile & ">")
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
	If intOffsetWWW > 0 And intOffsetHTTP > 0 Then
		If intOffsetWWW < intOffsetHTTP Then
			FindURLInitOffset = intOffsetWWW
		Else
			FindURLInitOffset = intOffsetHTTP
		End If
	ElseIf intOffsetWWW > 0 Then
		FindURLInitOffset = intOffsetWWW
	ElseIf intOffsetHTTP > 0 Then
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
	Dim strImgFile

	If sobjWorld.IsAvatar(objFrom) Then
		Err.Clear
		On Error Resume Next
		strImgFile = objFrom.Geometry.ThumbnailName
		strImgFile = sobjWorld.Tool("INetFile").GetFile(strImgFile, True)
		If Err.Number <> 0 Then strImgFile = "../shared/tdefault.gif"
	Else
		If objFrom.IsOfType("Portal") Then
			strImgFile = "icondoor.gif"
		ElseIf objFrom.IsOfType("Artifact") Then
			strImgFile = "iconthng.gif"
			If objFrom.IsValidProperty("IsAccessory") Then
				If objFrom.IsAccessory Then strImgFile = "iconunwr.gif"
			End If
		Else
			strImgFile = "../shared/tdefault.gif"
		End If
	End If
	GetObjectImage = strImgFile
End Function
'======================================


'======================================
' Name: AppendHistory
' Desc: Creates a table and appends it to the body
'--------------------------------------
Sub AppendHistory(arrCells)
	Dim objTable, objTBody, objRow, objCell, intMaxLines

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

	intMaxLines = 500
	If document.body.children.length > intMaxLines + 9 Then
		Do While document.body.children.length > intMaxLines
				document.body.removeChild document.body.children(0)
		Loop
	End If
End Sub
'======================================


'======================================
' Name: ExtractUser
' Desc: Returns a reference to the user who whispered
'--------------------------------------
Function ExtractUser(strMsg)
	Dim strName, strAvatar

	strName = Left(strMsg, InStr(strMsg, "whispers") - 2)
	For Each strAvatar In sobjWorld.Avatars
		If StrComp(strAvatar, strName, vbTextCompare) = 0 Then
			Set ExtractUser = sobjWorld.Avatars.Property(strAvatar)
		End If
	Next
End Function
'======================================


'======================================
' Name: ShowNoWhisperMsg
' Desc:
'--------------------------------------
Public Sub ShowNoWhisperMsg
	Dim objCell1, objText, arrCells

	Set objCell1 = document.createElement("<td class=vwMsgText style=vertical-align:baseline;>")
	Set objText = document.createTextNode("Whispering is disabled in this room.")
	objCell1.appendChild objText
	arrCells = Array(objCell1)
	If IsArray(arrCells) Then AppendHistory arrCells
End Sub
'======================================


'======================================
' Name: HandleReport
' Desc:
'--------------------------------------
Sub HandleUserConnect(objUser)
	If objUser is sobjVWClient.World.User Then
		Set sobjWorld = sobjVWClient.World
		Set sobjUser = sobjWorld.User
	End If
End Sub
'======================================


'======================================
' Name: HandleReport
' Desc:
'--------------------------------------
Sub HandleUserDisconnect(objUser)
	If objUser is sobjVWClient.World.User Then
		Set sobjWorld = Nothing
		Set sobjUser = Nothing
		top.close
	End If
End Sub
'======================================


'======================================
' Name: HandleReport
' Desc:
'--------------------------------------
Sub HandleReport(strMsg, intType)
	Dim arrCells, objUser, strWhisperLeft, strWhisperRight
	Select Case intType
	Case conVWR_Error
	Case conVWR_Print
	Case conVWR_Echo
	Case conVWR_Eval
	Case conVWR_Prompt
	Case conVWR_PerfLog
	Case conVWR_Page
		If Not(sobjUser Is Nothing) Then
			Set objUser = ExtractUser(strMsg)
			strWhisperLeft = objUser.Name & ":"
			strWhisperRight = Mid(strMsg, InStr(strMsg, """"), InStrRev(strMsg, """") + 1 - _
				InStr(strMsg, """"))
			arrCells = BuildCellArray(objUser, SetCellClass(objUser), _
				strWhisperLeft, "vwWhisperText", strWhisperRight)
		End If
	Case Else
	End Select
	If IsArray(arrCells) Then AppendHistory arrCells
End Sub
'======================================
