Option Explicit

'======================================
' Public declaration area
'--------------------------------------
'The following variables are references to the Client, World, and User objects
Public sobjVWClient, sobjWorld, sobjUser
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
' Name: document_onclick
' Desc: When a thumbnail is clicked on the item is approached
'--------------------------------------
Sub document_onclick
End Sub
'======================================


'======================================
' Name: document_oncontextmenu
' Desc: Fires
'--------------------------------------
Sub document_oncontextmenu
	Select Case window.event.srcElement.tagName
	Case "INPUT", "TEXTAREA"
	Case Else
		window.event.returnValue = top.sblnAllowContextMenu
	End Select
End Sub
'======================================


'======================================
' Name: OnTopLoad
' Desc:
'--------------------------------------
Sub OnTopLoad
	If StrComp(top.document.readyState, "complete", vbTextCompare) <> 0 Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If

	' register this window to recieve UI events
'	top.AddToEventList window
	' get references to the client
	Set sobjVWClient = top.objClient.VWClient
	If top.sblnLoggedOn Then
		Set sobjWorld = sobjVWClient.World
		Set sobjUser = sobjWorld.User
		RegenAvatarList
	End If
'dim objItem
'	For Each objItem in sobjUser.Container.Contents
'		If sobjWorld.IsAvatar(objItem) And Not objItem.IsStub Then
'			If objItem.IsValidProperty("IsConnected") Then
'				msgbox objItem.name
'			End If
'		End If
'	Next
End Sub
'======================================


Sub RegenAvatarList
	Dim objItem, arrAvatars

	divUser.innerHTML = ""
	divFriends.innerHTML = ""
	divFriends.style.display = "none"
	divOthers.innerHTML = ""
	divOthers.style.display = "none"
	divIgnores.innerHTML = ""
	divIgnores.style.display = "none"
	For Each objItem in sobjUser.Container.Contents
		If sobjWorld.IsAvatar(objItem) And Not objItem.IsStub Then
			If objItem.IsValidProperty("IsConnected") Then
				AddUserToList objItem
			End If
		End If
	Next
	If divFriends.children.length > 0 Then divFriends.style.display = ""
	If divOthers.children.length > 0 Then divOthers.style.display = ""
	If divIgnores.children.length > 0 Then divIgnores.style.display = ""
End Sub


Sub AddUserToList(objUser)
	Dim objTable, objTBody, objRow, objCell, intCount, blnAdded, objImg, objText

	Set objTable = document.createElement("<table cellpadding=0 cellspacing=0 linkedUserID=""" & _
		objUser.ID & """ style=margin-left:5;>")
	Set objTBody = document.createElement("tbody")
	objTable.appendChild objTBody
	Set objRow = document.createElement("tr")
	objTBody.appendChild objRow
	Set objCell = document.createElement("<td class=" & GetObjClass(objUser) & " linkedUserID=""" & _
		objUser.ID & """ style=vertical-align:baseline;>")
	objRow.appendChild objCell
	Set objImg = document.createElement("<img class=vwThumbnailImage name=Thumbnail src=""" & _
		GetItemImage(objUser) & """ style=cursor:hand;>")
	objCell.appendChild objImg
	Set objText = document.createTextNode(objUser.Name)
	objCell.appendChild objText
	If objUser Is sobjUser Then
		divUser.appendChild objTable
	ElseIf sobjUser.IsInUserProfileList(objUser, "Friends") Then
		If divFriends.children.length = 0 Then
			divFriends.appendChild objTable
		Else
			blnAdded = False
			For intCount = 0 To divFriends.children.length - 1
				If StrComp(objUser.Name, sobjWorld.ObjectByID(divFriends.children(intCount).linkedUserID).Name, vbTextCompare) = -1 Then
					divFriends.insertBefore objTable, divFriends.children(intCount)
					blnAdded = True
					Exit For
				End If
			Next
			If Not blnAdded Then divFriends.appendChild objTable
		End If
	ElseIf sobjUser.IsInUserProfileList(objUser, "Ignoring") Then
		If divIgnores.children.length = 0 Then
			divIgnores.appendChild objTable
		Else
			blnAdded = False
			For intCount = 0 To divIgnores.children.length - 1
				If StrComp(objUser.Name, sobjWorld.ObjectByID(divIgnores.children(intCount).linkedUserID).Name, vbTextCompare) = -1 Then
					divIgnores.insertBefore objTable, divIgnores.children(intCount)
					blnAdded = True
					Exit For
				End If
			Next
			If Not blnAdded Then divIgnores.appendChild objTable
		End If
	Else
		If divOthers.children.length = 0 Then
			divOthers.appendChild objTable
		Else
			blnAdded = False
			For intCount = 0 To divOthers.children.length - 1
				If StrComp(objUser.Name, sobjWorld.ObjectByID(divOthers.children(intCount).linkedUserID).Name, vbTextCompare) = -1 Then
					divOthers.insertBefore objTable, divOthers.children(intCount)
					blnAdded = True
					Exit For
				End If
			Next
			If Not blnAdded Then divOthers.appendChild objTable
		End If
	End If
End Sub


Function GetObjClass(objUser)
	GetObjClass = "vwAvatarOther"
	If objUser Is sobjUser Then
		GetObjClass = "vwAvatarSelf"
	ElseIf sobjUser.IsInUserProfileList(objUser, "Ignoring") Then
		GetObjClass = "vwAvatarIgnore"
	ElseIf sobjUser.IsInUserProfileList(objUser, "Friends") Then
		GetObjClass = "vwAvatarFriend"
	End If
End Function


Function GetItemImage(objItem)
	dim strImgFile, strGeomName, intSlash

	If objItem.IsOfType("Host") Then
		strImgFile = "images/host.gif"
	Else
		Err.Clear
		On Error Resume Next
		strImgFile = objItem.Geometry.ThumbnailName
		If strImgFile = "" Then
			strImgFile = "images/tdefault.gif"
		Else
			strGeomName = objItem.GeometryName
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
	End If
	GetItemImage = strImgFile
end function


'======================================
' The next 6 routines are required as part of the client event chain.
' If the client gets an event that event is passed down to each window
' that has registered itself to recieve events.
'======================================


'======================================
' Name: HandleOnConnect
' Desc: Fires when the client connects to a server
'--------------------------------------
Sub HandleOnConnect(objWorld)
End Sub
'======================================


'======================================
' Name: HandleOnDisconnect
' Desc: Fires when the client disconnects to a server
'--------------------------------------
Sub HandleOnDisconnect(objWorld)
End Sub
'======================================


'======================================
' Name: HandleUserConnect
' Desc: Fires when a user connects to a world
'--------------------------------------
Sub HandleUserConnect(objUser)
	If objUser is sobjVWClient.World.User Then
		Set sobjWorld = sobjVWClient.World
		Set sobjUser = sobjWorld.User
		RegenAvatarList
	End If
End Sub
'======================================


'======================================
' Name: HandleUserDisconnect
' Desc: Fires when a user disconnects from a world
'--------------------------------------
Sub HandleUserDisconnect(objUser)
	If objUser is sobjVWClient.World.User Then
		Set sobjWorld = Nothing
		Set sobjUser = Nothing
		divUser.innerHTML = ""
		divFriends.innerHTML = ""
		divFriends.style.display = "none"
		divOthers.innerHTML = ""
		divOthers.style.display = "none"
		divIgnores.innerHTML = ""
		divIgnores.style.display = "none"
	End If
End Sub
'======================================


'======================================
' Name: HandleEvent
' Desc: Fires when the client gets an event.
'--------------------------------------
Sub HandleEvent(objFrom, strEventName, vntArgs)
	Select Case strEventName
	Case Else
	End Select
End Sub
'======================================
