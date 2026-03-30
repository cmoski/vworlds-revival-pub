'======================================
' Desc: This file contains the script for
'       ChatHist.htm. The purpose of
'       these two files is to display the
'       chat history section of the client.
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
'       The rest of this section sets constants
'       for use in later code.
'--------------------------------------
Public sobjVWClient, sobjWorld, sobjUser
Public sblnWantEvents

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

'Maximum lines in the history window
Public Const conMaxHistoryLines = 500

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
'       The window is unregistered for
'       receiving UI events.
'--------------------------------------
Sub window_onunload()
	top.RemoveFromEventList window
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
'--------------------------------------
Sub OnTopLoad
	'Section 1
	If StrComp(top.document.readyState, "complete", vbTextCompare) <> 0 Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	'Section 2
	If top.sblnAllowContextMenu Then top.AddToEventList window
	'Section 3
	Set sobjVWClient = top.objClient.VWClient
	If top.sblnLoggedOn Then
		Set sobjWorld = sobjVWClient.World
		Set sobjUser = sobjWorld.User
	End If
End Sub
'======================================



'======================================
' Name: HandleOnTell
' Args: objFrom - object reference for the source
'                 of the communication.
'       objTo - object reference for the destination
'               of the communication.
'       strMsg - string containing the text of the
'                communication.
'       intTCType - integer containing value that indicates
'                   the type of OnTell event this is.
'       intUIType - integer containing value that indicates
'                   the type of UI communication this is.
' Desc: This routine determines what kind of communication was
'       sent, builds an array of cells to be use for creating
'       a table containing the communication, and call the
'       routine that will build the table and insert it on
'       the page.
'--------------------------------------
Sub HandleOnTell(objFrom, objTo, strMsg, intTCType, intUIType)
	Dim arrCells, objCell1, objText

	Select Case intUIType
	Case conUINone
		If sobjUser.IsInUserProfileList(objFrom, "Ignoring") = True Then Exit Sub
		Select Case intTCType
		Case conTCSay
			arrCells = BuildCellArray(objFrom, _
				SetCellClass(objFrom), objFrom.Name & " says,", "vwSpokenText", """" & strMsg & """")
		Case conTCEmote
			If top.sblnShowGestures Then
				arrCells = BuildCellArray(objFrom, _
					SetCellClass(objFrom), objFrom.Name, "vwEmoteText", strMsg)
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
				Set objCell1 = document.createElement("<td class=vwActionText style=vertical-align:baseline;>")
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
		Set objCell1 = document.createElement("<td class=vwWelcomeText style=vertical-align:baseline;>")
		Set objText = document.createTextNode(strMsg)
		objCell1.appendChild objText
		arrCells = Array(objCell1)
	Case conUIEvent
		If top.sblnShowEvents Then
			Set objCell1 = document.createElement("<td class=vwMsgText style=vertical-align:baseline;>")
			Set objText = document.createTextNode(strMsg)
			objCell1.appendChild objText
			arrCells = Array(objCell1)
		End If
	Case Else
	End Select
	If IsArray(arrCells) Then AppendHistory arrCells
End Sub
'======================================



'======================================
' Name: BuildCellArray
' Args: objFrom - object reference for the source
'                 of the communication.
'       strClass1 - string containing the class
'                   name to be used in the first cell.
'       strText1 - string containing the text to be
'                  displayed in the first cell.
'       strClass2 - string containing the class
'                   name to be used in the second cell.
'       strText2 - string containing the text to be
'                  displayed in the second cell.
' Ret: Array containing the cells used to build the table.
' Desc: This routine creates two table cells. The first contains
'       a thumbnail image and the communication sender's name. The
'       second contains the text of the communication. This text is
'       parsed for URLs and Emoticons and they replace any valid
'       instances.
'--------------------------------------
Function BuildCellArray(objFrom, strClass1, strText1, strClass2, strText2)
	Dim objCell1, objImg, objNoBr, objText, objCell2, objItem, objSubItem

	Set objCell1 = document.createElement("<td class=" & strClass1 & " style=vertical-align:baseline;>")
	Set objNoBr = document.createElement("nobr")
	objCell1.appendChild objNoBr
	Set objImg = document.createElement("<img class=vwThumbnailHist name=Thumbnail src=""" & GetObjectImage(objFrom) & """>")
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
' Name: SetCellClass
' Args: objFrom - object reference for the source
'                 of the communication.
' Ret:  String containing the class name to be used.
' Desc: This function sets the class name based on
'       if the argument is this user or any other source.
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
' Name: ParseEmoticons
' Args: objText - object reference to text
'                 node.
' Ret:  Array containing objects.
' Desc: This function places the argument
'       into an array and then calls the
'       ParseSingleEmoticon for each emoticon
'       that is desired to be replaced.
'--------------------------------------
Function ParseEmoticons(ByVal objText)
	Dim arrRetItems

	arrRetItems = Array()
	ReDim arrRetItems(UBound(arrRetItems) + 1)
	Set arrRetItems(UBound(arrRetItems)) = objText
	ParseSingleEmoticon arrRetItems, ":-)", "images/emosmile.gif"
	ParseSingleEmoticon arrRetItems, ":)", "images/emosmile.gif"
	ParseSingleEmoticon arrRetItems, ":-(", "images/emofrown.gif"
	ParseSingleEmoticon arrRetItems, ":(", "images/emofrown.gif"
	ParseSingleEmoticon arrRetItems, ";-)", "images/emosilly.gif"
	ParseSingleEmoticon arrRetItems, ";)", "images/emosilly.gif"
	ParseEmoticons = arrRetItems
End Function
'======================================



'======================================
' Name: ParseSingleEmoticon
' Args: arrRetItems - array containing text nodes.
'       strEmote - string containing emoticon to be replaced.
'       strImgFile - string containing the path of the image
'                    that will replace the emoticon.
' Desc: This routine iterates through each item in
'       the argument and checks if it is a text node.
'       If yes, then the node is searched for occupancies
'       of the emoticon. The node is then broken into
'       sections of text nodes and image objects and
'       append to the return array.
'       If no, the item is simply appended to the return
'       array.
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
' Name: ParseURLs
' Args: objText - object reference to text
'                 node.
' Ret:  Array containing objects.
' Desc: This function parses the text in the
'       text node and convert any URLs to
'       links.
'       Section 1 initializes the return array,
'       stores the initial text in a working
'       variable, and loops looking for URLs.
'       Section 2 locates the first URL by calling
'       the FindURLInitOffset function.
'       Section 3 If a URL is found the first space
'       following it is located. If none is found the
'       URL is at the end of the line. The length of
'       the URL is calculated and the last character is
'       retrieved. If the last character is not valid
'       the URL length is reduced by one. Lastly the
'       ReplaceURLWithHTML function is called; which
'       returns the part of the string that was not
'       searched as well as the return array with the
'       updated objects.
'       Section 4 converts the last segment of text, if
'       any to a text node and adds it to the return
'       array.
'--------------------------------------
Function ParseURLs(objText)
	Dim intOffset, intSpaceLoc, intURLLen, strLastChar, strNewText, arrRetItems

	'Section 1
	arrRetItems = Array()
	strNewText = objText.data
	Do
	'Section 2
		intOffset = FindURLInitOffset(strNewText)
		If intOffset > 0 Then
	'Section 3
			intSpaceLoc = InStr(intOffset, strNewText, " ", vbTextCompare)
			If intSpaceLoc = 0 Then intSpaceLoc = Len(strNewText) + 1
			intURLLen = intSpaceLoc - intOffset
			strLastChar = Mid(strNewText, intSpaceLoc - 1, 1)
			If InStr(".!,?""", strLastChar) > 0 Then intURLLen = intURLLen - 1
			strNewText = ReplaceURLWithHTML(arrRetItems, strNewText, intOffset, intURLLen)
		End If
	Loop Until intOffset = 0
	'Section 4
	If Len(strNewText) > 0 Then
		ReDim Preserve arrRetItems(UBound(arrRetItems) + 1)
		Set arrRetItems(UBound(arrRetItems)) = document.createTextNode(strNewText)
	End If
	ParseURLs = arrRetItems
End Function
'======================================



'======================================
' Name: FindURLInitOffset
' Args: strText - string containing the
'                 text to be searched.
' Ret:  Integer containing the starting
'       point of the found URL.
' Desc: This routine returns the starting
'       point of the first URL found. If
'       none are found the 0 is returned.
'       It searches for two different types
'       of URLs. Those that begin with
'       "http://" and those that begin with
'       "www.".
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
' Name: ReplaceURLWithHTML
' Args: arrRetItems - array containing the
'                     return items of the
'                     calling function.
'       strText - string containing text to
'                 be searched.
'       intOffset - integer containing the start
'                   of the URL.
'       intURLLen - integer containing the length
'                   of the URL.
' Desc: This routine replaces the specified URL
'       with an anchor object. It also creates a
'       text node for any text preceding or following
'       the URL. It returns the text, if any,
'       following the URL.
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
' Args: objFrom - object reference for item
'                 doing the communicating.
' Ret:  string containing the path and file name
'       of the thumbnail image.
' Desc: This function determines the thumbnail to
'       display for the chat entry.
'       Section 1: If the argument is an avatar,
'       attempt to retrieve and verify the thumbnail
'       file and path. If this fails use a default
'       image and path.
'       Section 2 checks if the item is a portal, an artifact,
'       an accessory, or anything else and returns the
'       appropriate image and path.
'--------------------------------------
Function GetObjectImage(objFrom)
	Dim strImgFile

	If sobjWorld.IsAvatar(objFrom) Then
	'Section 1
		Err.Clear
		On Error Resume Next
		strImgFile = objFrom.Geometry.ThumbnailName
		strImgFile = sobjWorld.Tool("INetFile").GetFile(strImgFile, True)
		If Err.Number <> 0 Then strImgFile = "images/tdefault.gif"
	Else
	'Section 2
		If objFrom.IsOfType("Portal") Then
			strImgFile = "images/icondoor.gif"
		ElseIf objFrom.IsOfType("Artifact") Then
			strImgFile = "images/iconthng.gif"
			If objFrom.IsValidProperty("IsAccessory") Then
				If objFrom.IsAccessory Then strImgFile = "images/iconunwr.gif"
			End If
		Else
			strImgFile = "images/tdefault.gif"
		End If
	End If
	GetObjectImage = strImgFile
End Function
'======================================



'======================================
' Name: AppendHistory
' Args: arrCells - array of cells to
'                  add to table.
' Desc: This routine creates a table,
'       adds the cells from the argument
'       array, and appends it to the body.
'       It then scrolls the new entry into
'       view if there is no selection.
'       Finally it checks to see if a max
'       number of entries has been exceeded
'       and removes the excess entries.
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

	'If we're over our maximum size, remove the first items in the history.
	Do While document.body.children.length > conMaxHistoryLines
		document.body.children(0).removenode True
	Loop

	document.body.appendChild objTable

	If StrComp(document.selection.type, "none", vbTextCompare) = 0 Then
		objTable.scrollIntoView True
	End If


End Sub
'======================================



'======================================
' Name: ExtractUser
' Args: strMsg - string containing the whisper.
' Ret:  object reference for whisperer.
' Desc: Returns a reference for the user
'       who whispered.
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
'       The code for OnEnterWorld sets critical
'       object references, and it sends messages
'       depending if the user caused the event
'       or some other item.
'       The code for OnUserDisconnect clears the
'       chat history and resets critical references
'       if the user disconnected.
'       The code for OnLeaveWorld sends a notification
'       message when anything other then the user leaves
'       the world.
'       The code for OnReport reports Errors and Pages.
'       Pages are really whispers. The reason this mechanism
'       is used to whisper is that you can whisper between rooms
'       where the standard whisper can't. The Page report
'       has to be parsed to separate the content of the message
'       from the address.
'       The code for all other events calls the HandleOnTell routine
'       after making appropriate checks.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	On Error Resume Next
	Dim objCell1, objText, arrCells, objUser, strWhisperLeft, strWhisperRight, objImg, objSpan, objCell2

	Select Case strEventName
		Case "OnEnterWorld"
			Set sobjWorld = sobjVWClient.World
			Set sobjUser = sobjWorld.User
			If sobjUser is objFrom Then
				HandleOnTell "", "", "Welcome to " & sobjWorld.WorldName, 0, conUIWelcome
				HandleOnTell "", "", "To move around the space, drag your mouse in the 3-D view above, or click in the view and use the arrow keys.", 0, conUIWelcome
				HandleOnTell "", "", "You enter " & sobjWorld.Global.WorldName & ".", 0, conUIEvent
			Else
				HandleOnTell "", "", objFrom.name & " has connected.", 0, conUIEvent
			End If
		Case "OnUserDisconnect"
			If IsObject(vntArgs) And Not vntArgs Is Nothing Then
			If vntArgs is sobjVWClient.World.User Then
				Set sobjWorld = Nothing
				Set sobjUser = Nothing
				document.body.innerHTML = ""
			End If
			End If
		Case "OnLeaveWorld"
			If Not objFrom Is sobjVWClient.World.User Then
				HandleOnTell "", "", objFrom.name & " has disconnected.", 0, conUIEvent
			End If
		Case "OnReport"
			Select Case vntArgs(1)
			Case conVWR_Error
				If top.sblnShowSysMsgs Then
					Set objCell1 = document.createElement("<td class=vwErrorText style=vertical-align:baseline;>")
					Set objText = document.createTextNode("***" & vntArgs(0))
					objCell1.appendChild objText
					arrCells = Array(objCell1)
				End If
			Case conVWR_Print
			Case conVWR_Echo
			Case conVWR_Eval
			Case conVWR_Prompt
			Case conVWR_PerfLog
			Case conVWR_Page
				If Not sobjUser Is Nothing Then
					Set objUser = ExtractUser(vntArgs(0))
					strWhisperLeft = Left(vntArgs(0), InStr(vntArgs(0), """") - 1)
					strWhisperRight = Mid(vntArgs(0), InStr(vntArgs(0), """"), InStrRev(vntArgs(0), """") + 1 - _
						InStr(vntArgs(0), """"))
					Set objCell1 = document.createElement("<td class=vwMyName style=vertical-align:baseline;>")
					Set objImg = document.createElement("<img class=vwThumbnailHist name=Thumbnail src=""" & GetObjectImage(objUser) & """>")
					objCell1.appendChild objImg
					Set objCell2 = document.createElement("<td class=vwMyName style=vertical-align:baseline;padding-top:4px;>")
					Set objText = document.createTextNode(strWhisperLeft)
					objCell2.appendChild objText
					Set objSpan = document.createElement("<span class=vwWhisperText style=font-weight:normal;>")
					objCell2.appendChild objSpan
					Set objText = document.createTextNode(strWhisperRight)
					objSpan.appendChild objText
					arrCells = Array(objCell1, objCell2)
				End If
			Case Else
			End Select
			If IsArray(arrCells) Then AppendHistory arrCells
		Case "OnTell"
			If Not sobjUser Is Nothing Then
				HandleOnTell vntArgs.Property(0), vntArgs.Property(1), vntArgs.Property(2), vntArgs.Property(3), conUINone
			End If
		Case "OnLogOff"
			HandleOnTell vntArgs.Property(0), vntArgs.Property(1), vntArgs.Property(2), 0, conUILogOff
		Case "IgnoredUser"
			HandleOnTell "", "", "You are ignoring " & vntArgs.Name & ".", 0, conUIEvent
		Case "UnignoredUser"
			HandleOnTell "", "", "You are no longer ignoring " & vntArgs.Name & ".", 0, conUIEvent
		Case "IgnoredByUser"
			HandleOnTell "", "", vntArgs.Name & " is ignoring you.", 0, conUIEvent
		Case "UnignoredByUser"
			HandleOnTell "", "", vntArgs.Name & " is no longer ignoring you.", 0, conUIEvent
		Case "PortalDestinationNotSet"
			If  Not objFrom Is Nothing Then
				If Not objFrom.IsStub Then
					HandleOnTell "", "", "The Portal '" & objFrom.Name & "' has no destination set.", 0, conUIEvent
				End If
			End If
		Case "PortalDestinationInvalid"
			If Not objFrom Is Nothing Then
				If Not objFrom.IsStub Then
					curWorld.Report "The Portal '" & who.name & "' has an invalid destination.", 6
					HandleOnTell "", "", "The Portal '" & objFrom.Name & "' has an invalid destination.", 0, conUIEvent
				End If
			End If
		Case "ReconnectFailed"
			HandleOnTell "", "", "'" & vntArgs & "' is not valid.", 0, conUIEvent
		Case Else
	End Select
End Sub
'======================================
