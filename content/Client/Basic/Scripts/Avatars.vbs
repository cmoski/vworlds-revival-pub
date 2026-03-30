'======================================
' Desc: This file contains the script for
'       Avatars.htm. The purpose of
'       these two files is to display the
'       Avatars tab in the client.
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
'       Section 4 routine is called that will build
'       the list.
'--------------------------------------
Sub OnTopLoad
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
	RegenAvatarList
End Sub
'======================================



'======================================
' Name: RegenAvatarList
' Desc: This routine adds any avatars
'       in the room to the list.
'       Section 1 ensures that the room exists
'       on before continuing. If it isn't this
'       routine is called again in 1/4 second.
'       Section 2 clears the list, checks each
'       item in the room. If it is an avatar
'       and it isn't a stub and it's connected then
'       the routine AddUserToList is called to have
'       the avatar added to the list.
'--------------------------------------
Sub RegenAvatarList
	Dim objItem

	'Section 1
	If sobjUser.Container Is Nothing Then
		window.setTimeout "RegenAvatarList", 250, "vbs"
		Exit Sub
	End If
	'Section 2
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
				If objItem.IsConnected Then AddUserToList objItem
			End If
		End If
	Next
End Sub
'======================================



'======================================
' Name: AddUserToList
' Args: objUser - object reference for avatar
'                 to be added to list.
' Desc: This routine builds a table that
'       contains the avatar to be added and then
'       adds the table to the correct section of
'       the list.
'       Section 1 check to see if the user is already
'       in the list and if they are the routine exits.
'       Section 2 builds a table and adds a
'       thumbnail image for the avatar and the avatar
'       name to the table.
'       Section 3 determines which section the avatar
'       should be added to.
'       Section 4 checks the list section for the
'       number of existing avatars. If there aren't any
'       the avatar is added and the section is displayed;
'       otherwise the avatar is added alphabetically to
'       the section.
'--------------------------------------
Sub AddUserToList(objUser)
	Dim objTable, objTBody, objRow, objCell, intCount, blnAdded, objImg, objText, intID, objLocation

	'Section 1
	If Not document.body.all("User" & objUser.ID) Is Nothing Then Exit Sub
	'Section 2
	Set objTable = document.createElement("<table cellpadding=0 cellspacing=0 id=""User" & objUser.ID & _
		""" style=margin-left:5;>")
	Set objTBody = document.createElement("tbody")
	objTable.appendChild objTBody
	Set objRow = document.createElement("tr")
	objTBody.appendChild objRow
	Set objCell = document.createElement("<td class=" & GetObjClass(objUser) & " linkedItemID=""" & _
		objUser.ID & """ oncontextmenu=DoContextMenu() onmouseover=DoMouseOver() onmouseout=DoMouseOut() onclick=DoClick() style=vertical-align:baseline;>")
	objRow.appendChild objCell
	Set objImg = document.createElement("<img class=vwThumbnailLarge name=Thumbnail linkedItemID=""" & _
		objUser.ID & """ src=""" & GetItemImage(objUser) & """ style=cursor:hand;>")
	objCell.appendChild objImg
	Set objText = document.createTextNode(objUser.Name)
	objCell.appendChild objText
	'Section 3
	If objUser is sobjUser Then
		Set objLocation = divUser
	ElseIf sobjUser.IsInUserProfileList(objUser, "Friends") Then
		Set objLocation = divFriends
	ElseIf sobjUser.IsInUserProfileList(objUser, "Ignoring") Then
		Set objLocation = divIgnores
	Else
		Set objLocation = divOthers
	End If
	'Section 4
	If objLocation.children.length = 0 Then
		objLocation.appendChild objTable
		objLocation.style.display = ""
	Else
		blnAdded = False
		For intCount = 0 To objLocation.children.length - 1
			intID = Mid(objLocation.children(intCount).id, 5)
			If StrComp(objUser.Name, sobjWorld.ObjectByID(intID).Name, vbTextCompare) = -1 Then
				objLocation.insertBefore objTable, objLocation.children(intCount)
				blnAdded = True
				Exit For
			End If
		Next
		If Not blnAdded Then objLocation.appendChild objTable
	End If
End Sub
'======================================



'======================================
' Name: GetObjClass
' Args: objUser - object reference for avatar.
' Ret:  string containing class name.
' Desc: This function determines which class
'       to use when building the table for the
'       avatar.
'       It returns a different class name for the
'       user, a friend, an ignored avatar, and all
'       others.
'--------------------------------------
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
'======================================



'======================================
' Name: GetItemImage
' Args: objItem - object reference for avatar
'                 to be added to list.
' Ret:  string containing the path and file name
'       of the thumbnail image.
' Desc: This function determines the thumbnail to
'       display with the avatar in the list.
'       If the user is a host default host thumbnail
'       image is used. If not the avatar geometry is
'       queried for a thumbnail and then verified through
'       the Internet file manager. If an error occurs
'       the verification failed and a default image is
'       returned; otherwise the verified image is.
'--------------------------------------
Function GetItemImage(objItem)
	dim strImgFile

	If objItem.IsOfType("Host") Then
		strImgFile = "images/host.gif"
	Else
		Err.Clear
		On Error Resume Next
		strImgFile = objItem.Geometry.ThumbnailName
		strImgFile = sobjWorld.Tool("INetFile").GetFile(strImgFile, True)
		If Err.Number <> 0 Then strImgFile = "images/tdefault.gif"
	End If
	GetItemImage = strImgFile
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
'       The code for OnUserConnect, if the
'       connecting avatar is the user, sets critical
'       object references and calls the routine
'       RegenAvatarList to build the list; otherwise
'       the avatar is added to the list.
'       The code for OnUserDisconnect checks if the
'       disconnecting avatar is the user. If so the object
'       references and the list are cleared; otherwise
'       the avatar is removed from the list.
'       The code for OnNameChanged, OnUIElementChanged,
'       and OnGeometryChanged checks to see if the world
'       object reference has been set (this event might
'       be called before it has). Next the source of the
'       event is checked for a valid avatar to be added to the
'       list. Next if the avatar is in the list it is removed.
'       And finally the avatar is added to the list.
'       The code for Befriended, Unbefriended, IgnoredUser,
'       UnignoredUser, IgnoredByUser, UnignoredByUser, and
'       OnHostStatusChanged check to see if the avatar
'       argument is in the list. If so it is remove. Then the
'       avatar is added to the list.
'       The code for OnEnterRoom checks the argument to see
'       if it is the user. If so the routine called
'       RegenAvatarList is called to rebuild the list;
'       otherwise the avatar is added to the list.
'       The code for OnLeaveRoom checks the argument to see
'       if it is the user. If so the list is cleared;
'       otherwise the avatar is removed from the list.
'       The code for OnFinishSceneComposite updates each
'       avatars image.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	If IsEmpty(sobjVWClient) Or sobjVWClient Is Nothing Then Exit Sub
	Dim objImg

	Select Case strEventName
	Case "OnUserConnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = sobjVWClient.World
			Set sobjUser = sobjWorld.User
			RegenAvatarList
		Else
			AddUserToList vntArgs
		End If
	Case "OnUserDisconnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = Nothing
			Set sobjUser = Nothing
			divUser.innerHTML = ""
			divFriends.innerHTML = ""
			divFriends.style.display = "none"
			divOthers.innerHTML = ""
			divOthers.style.display = "none"
			divIgnores.innerHTML = ""
			divIgnores.style.display = "none"
		Else
			If document.body.all("User" & vntArgs.ID).parentNode.children.length = 1 Then
				document.body.all("User" & vntArgs.ID).parentNode.style.display = "none"
			End If
			document.body.all("User" & vntArgs.ID).removeNode True
		End If
	Case "OnNameChanged", "OnUIElementChanged", "OnGeometryChanged"
		If Not sobjWorld Is Nothing Then
			If sobjWorld.IsAvatar(objFrom) Then
				If Not document.body.all("User" & objFrom.ID) Is Nothing Then
					If document.body.all("User" & objFrom.ID).parentNode.children.length = 1 Then
						document.body.all("User" & objFrom.ID).parentNode.style.display = "none"
					End If
					document.body.all("User" & objFrom.ID).removeNode True
				End If
				AddUserToList objFrom
			End If
		End If
	Case "Befriended", "Unbefriended", "IgnoredUser", "UnignoredUser", _
			"IgnoredByUser", "UnignoredByUser", "OnHostStatusChanged"
		If document.body.all("User" & vntArgs.ID).parentNode.children.length = 1 Then
			document.body.all("User" & vntArgs.ID).parentNode.style.display = "none"
		End If
		document.body.all("User" & vntArgs.ID).removeNode True
		AddUserToList vntArgs
	Case "OnEnterRoom"
		If vntArgs Is sobjUser Then
			RegenAvatarList
		ElseIf Not sobjWorld Is Nothing Then
			If sobjWorld.IsAvatar(vntArgs) Then AddUserToList vntArgs
		End If
	Case "OnLeaveRoom"
		If vntArgs Is sobjUser Then
			divUser.innerHTML = ""
			divFriends.innerHTML = ""
			divFriends.style.display = "none"
			divOthers.innerHTML = ""
			divOthers.style.display = "none"
			divIgnores.innerHTML = ""
			divIgnores.style.display = "none"
		ElseIf Not sobjWorld Is Nothing Then
			If sobjWorld.IsAvatar(vntArgs) Then
				If document.body.all("User" & vntArgs.ID).parentNode.children.length = 1 Then
					document.body.all("User" & vntArgs.ID).parentNode.style.display = "none"
				End If
				document.body.all("User" & vntArgs.ID).removeNode True
			End If
		End If
	Case "OnFinishSceneComposite"
		For Each objImg In document.body.all.tags("img")
			objImg.src = GetItemImage(sobjWorld.ObjectByID(objImg.linkedItemID))
		Next
	Case Else
	End Select
End Sub
'======================================

'======================================
' Name: DoMouseOver
' Desc: This routine is attached to the onmouseover
'       event. It underlines the text and changes
'       the status bar text of the element
'       to which the style is applied.
'--------------------------------------
Sub DoMouseOver
	window.event.srcElement.style.textDecoration = "underline"
	window.status = "Click for details, right-click for menu."
End Sub
'======================================



'======================================
' Name: DoMouseOut
' Desc: This routine is attached to the onmouseout
'       event. It remove the underline from the
'       text and clears the status bar text of
'       the element to which the style is applied.
'--------------------------------------
Sub DoMouseOut
	window.event.srcElement.style.textDecoration = ""
	window.status = ""
End Sub
'======================================



'======================================
' Name: DoContextMenu
' Desc: This routine is attached to the oncontextmenu
'       event. It prevents the IE context menu from
'       displaying and in instead shows the Virtual
'       Worlds context menu associated with the object
'       represented by the item receiving the mouse click.
'       The element that is associated with this event
'       is expected to have an attribute called linkedItemID
'       that is the Virtual Worlds ID for the represented
'       object.
'--------------------------------------
Sub DoContextMenu
	window.event.cancelBubble = True
	window.event.returnValue = False
	top.objWebHelper.TrackThingMenu sobjWorld.ObjectByID(window.event.srcElement.linkedItemID)
End Sub
'======================================


'======================================
' Name: DoClick
' Desc: This routine is attached to the onclick
'       event. It expects the element, to which the
'       style is applied, to has an attribute called
'       linkedItemID. The value of this attribute is
'       used to retrieve an object reference for an item
'       in the world. This in turn is used to either
'       display one of the Profile dialogs, the More
'       About dialog, or an error message.
'--------------------------------------
Sub DoClick
	Dim intObjID, objTarget

	intObjID = CInt(window.event.srcElement.linkedItemID)
	If intObjID <> 0 Then
		Set objTarget = sobjWorld.ObjectByID(intObjID)
		If objTarget Is Nothing Then
			MsgBox "This avatar or object has left the room.", vbInformation, top.sstrAppName
		ElseIf objTarget Is sobjUser then
			objTarget.EditProfile
		Else
			objTarget.LookAt
		End If
	End If
End Sub
'======================================
