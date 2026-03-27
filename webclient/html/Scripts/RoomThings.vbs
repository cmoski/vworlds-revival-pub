'======================================
' Desc: This file contains the script for
'       RoomThings.htm. The purpose of
'       these two files is to display the
'       Things In Room tab in the client.
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
	RegenObjectList
End Sub
'======================================



'======================================
' Name: RegenObjectList
' Desc: This routine adds any appropriate
'       item in the room to the list.
'       Section 1 ensures that the room exists
'       on before continuing. If it isn't this
'       routine is called again in 1/4 second.
'       Section 2 clears the list, checks each
'       item in the room. If it isn't an avatar
'       and it isn't a stub and it's visible then
'       the routine AddToList is called to have
'       item added to the list.
'--------------------------------------
Sub RegenObjectList
	Dim objItem

	'Section 1
	If sobjUser.Container Is Nothing Then
		window.setTimeout "RegenObjectList", 250, "vbs"
		Exit Sub
	End If
	'Section 2
	divPortals.innerHTML = ""
	divPortals.style.display = "none"
	divThings.innerHTML = ""
	divThings.style.display = "none"
	For Each objItem in sobjUser.Container.Contents
		If Not sobjWorld.IsAvatar(objItem) And Not objItem.IsStub And objItem.IsUIVisible Then
			AddToList objItem
		End If
	Next
End Sub
'======================================



'======================================
' Name: AddToList
' Args: objItem - object reference for item
'                 to be added to list.
' Desc: This routine builds a table that
'       contains the item to be added and then
'       adds the table to the correct section of
'       the list.
'       Section 1 builds a table and adds a
'       thumbnail image for the item and the item
'       name to the table.
'       Section 2 determines which section the item
'       should be added to.
'       Section 3 checks the list section for the
'       number of existing items. If there aren't any
'       the item is added and the section is displayed;
'       otherwise the item is added alphabetically to
'       the section.
'--------------------------------------
Sub AddToList(objItem)
	Dim objTable, objTBody, objRow, objCell, intCount, blnAdded, objImg, objText, intID, objLocation

	'Section 1
	Set objTable = document.createElement("<table cellpadding=0 cellspacing=0 id=""Item" & objItem.ID & _
		""" style=margin-left:5;>")
	Set objTBody = document.createElement("tbody")
	objTable.appendChild objTBody
	Set objRow = document.createElement("<tr class=vwItem linkedItemID=""" & _
		objItem.ID & """ style=vertical-align:baseline;>")
	objTBody.appendChild objRow
	Set objCell = document.createElement("td")
	objRow.appendChild objCell
	Set objImg = document.createElement("<img class=vwThumbnailSmall name=Thumbnail linkedItemID=""" & _
		objItem.ID & """ src=""" & GetItemImage(objItem) & """ style=cursor:hand;>")
	objCell.appendChild objImg
	Set objCell = document.createElement("<td style=vertical-align:baseline;padding-top:5;>")
	objRow.appendChild objCell
	Set objText = document.createTextNode(objItem.Name)
	objCell.appendChild objText
	'Section 2
	If objItem.IsOfType("Portal") Then
		Set objLocation = divPortals
	Else
		Set objLocation = divThings
	End If
	'Section 3
	If objLocation.children.length = 0 Then
		objLocation.appendChild objTable
		objLocation.style.display = ""
	Else
		blnAdded = False
		For intCount = 0 To objLocation.children.length - 1
			intID = Mid(objLocation.children(intCount).id, 5)
			If Not sobjWorld.ObjectByID(intID).isStub Then
				If StrComp(objItem.Name, sobjWorld.ObjectByID(intID).Name, vbTextCompare) = -1 Then
					objLocation.insertBefore objTable, objLocation.children(intCount)
					blnAdded = True
					Exit For
				End If
			End If
		Next
		If Not blnAdded Then objLocation.appendChild objTable
	End If
End Sub
'======================================



'======================================
' Name: GetItemImage
' Args: objItem - object reference for item
'                 to be added to list.
' Ret:  string containing the path and file name
'       of the thumbnail image
' Desc: This function determines the thumbnail to
'       display with the item in the list.
'       An image is assigned based on whether the
'       item is a portal, an artifact, or anything
'       else.
'--------------------------------------
Function GetItemImage(objItem)
	Dim strImgFile

	strImgFile = "images/iconthng.gif"
	If objItem.IsOfType("Portal") Then
		strImgFile = "images/icondoor.gif"
	ElseIf objItem.IsOfType("Artifact") Then
		If objItem.IsAccessory Then strImgFile = "images/iconunwr.gif"
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
'       RegenObjectList to build the list.
'       The code for OnUserDisconnect clears the object
'       references and clears the list.
'       The code for OnNameChanged, OnUIElementChanged,
'       and OnGeometryChanged checks to see if the world
'       object reference has been set (this event might
'       be called before it has). Next the source of the
'       event is checked as a valid item to be added to the
'       list. Next if the item is in the list it is removed.
'       And finally the item is added to the list.
'       The code for OnEnterRoom checks the argument to see
'       if it is the user. If so the routine called
'       RegenObjectList is called to rebuild the list;
'       otherwise the item is added using the same process
'       as the previous section.
'       The code for OnLeaveRoom checks the argument to see
'       if it is the user. If so the list is cleared;
'       otherwise the item is remove using a similar process
'       as the previous section.
'       The code for OnFinishSceneComposite updates each
'       list items image.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Dim objItem, objImg

	Select Case strEventName
	Case "OnUserConnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = sobjVWClient.World
			Set sobjUser = sobjWorld.User
			RegenObjectList
		End If
	Case "OnUserDisconnect"
		If vntArgs is sobjVWClient.World.User Then
			Set sobjWorld = Nothing
			Set sobjUser = Nothing
			divPortals.innerHTML = ""
			divPortals.style.display = "none"
			divThings.innerHTML = ""
			divThings.style.display = "none"
		End If
	Case "OnNameChanged", "OnUIElementChanged", "OnGeometryChanged"
		If Not sobjWorld Is Nothing Then
			If Not sobjWorld.IsAvatar(objFrom) And Not objFrom.IsStub And objFrom.IsUIVisible Then
				Set objItem = document.body.all("Item" & objFrom.ID)
				If Not objItem Is Nothing Then
					If objItem.parentNode.children.length = 1 Then
						objItem.parentNode.style.display = "none"
					End If
					objItem.removeNode True
				End If
				AddToList objFrom
			End If
		End If
	Case "OnEnterRoom"
		If vntArgs Is sobjUser Then
			RegenObjectList
		ElseIf Not sobjWorld Is Nothing Then
			If Not sobjWorld.IsAvatar(vntArgs) And Not vntArgs.IsStub And vntArgs.IsUIVisible Then
				Set objItem = document.body.all("Item" & vntArgs.ID)
				If Not objItem Is Nothing Then
					If objItem.parentNode.children.length = 1 Then
						objItem.parentNode.style.display = "none"
					End If
					objItem.removeNode True
				End If
				AddToList vntArgs
			End If
		End If
	Case "OnLeaveRoom"
		If vntArgs Is sobjUser Then
			divPortals.innerHTML = ""
			divPortals.style.display = "none"
			divThings.innerHTML = ""
			divThings.style.display = "none"
		ElseIf Not sobjWorld Is Nothing Then
			If sobjWorld.IsAvatar(vntArgs) And Not vntArgs.IsStub And vntArgs.IsUIVisible Then
				Set objItem = document.body.all("Item" & vntArgs.ID)
				If Not objItem Is Nothing Then
					If objItem.parentNode.children.length = 1 Then
						objItem.parentNode.style.display = "none"
					End If
					objItem.removeNode True
				End If
			End If
		End If
	Case "OnFinishSceneComposite"
		If Not sobjWorld Is Nothing Then
			For Each objImg In document.body.all.tags("img")
				objImg.src = GetItemImage(sobjWorld.ObjectByID(objImg.linkedItemID))
			Next
		End If
	Case Else
	End Select
End Sub
'======================================
