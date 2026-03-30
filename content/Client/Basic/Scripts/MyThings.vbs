'======================================
' Desc: This file contains the script for
'       MyThings.htm. The purpose of
'       these two files is to display a
'       list of items in the user's inventory.
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
'       The last line sets the flag to tell
'       the top most client page this page
'       want to receive UI events.
'--------------------------------------
Set sobjVWClient = Nothing
Set sobjWorld = Nothing
Set sobjUser = Nothing
sblnWantEvents = True
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page is loading.
'       Calls OnTopLoad to initialize the
'       rest of the page.
'--------------------------------------
Sub window_onload
	OnTopLoad
End Sub
'======================================



'======================================
' Name: window_onunload
' Desc: Fires when the page is unloading.
'       Unregisters this page for receiving
'       UI events.
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
'       Section 4 the routine RegenObjectList is
'       called. This builds the list for the first time.
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
' Desc: This routine clears the list then
'       iterates through each item the user
'       is carrying and, if it is visible the
'       AddToList routine is called.
'--------------------------------------
Sub RegenObjectList
	Dim objItem

	divThings.innerHTML = ""
	For Each objItem in sobjUser.Contents
		If objItem.IsUIVisible Then
			AddToList objItem
		End If
	Next
End Sub
'======================================


'======================================
' Name: AddToList
' Args: objItem - object reference of item
'                 to be added to the list.
' Desc: This routine adds an entry to the list
'       for the argument passed to it.
'       Section 1 creates a table containing a
'       thumbnail image and name of the argument.
'       Section 2 adds the table to the document
'       in alphabetical order.
'--------------------------------------
Sub AddToList(objItem)
	Dim objTable, objTBody, objRow, objCell, intCount, blnAdded, objImg, objText, intID

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
	If divThings.children.length = 0 Then
		divThings.appendChild objTable
	Else
		blnAdded = False
		For intCount = 0 To divThings.children.length - 1
			intID = Mid(divThings.children(intCount).id, 5)
			If StrComp(objItem.Name, sobjWorld.ObjectByID(intID).Name, vbTextCompare) = -1 Then
				divThings.insertBefore objTable, divThings.children(intCount)
				blnAdded = True
				Exit For
			End If
		Next
		If Not blnAdded Then divThings.appendChild objTable
	End If
End Sub
'======================================



'======================================
' Name: GetItemImage
' Args: objItem - object reference for an
'                 item in the user's inventory.
' Ret:  String containing the path/filename of
'       the thumbnail image.
' Desc: This function returns the appropriate
'       thumbnail image to display in the
'       inventory list.
'       The return value is set to an general
'       image. Then checks are made to determine
'       if the item is a portal, an artifact, or
'       an accessory and the return value is
'       set to an appropriate image.
'--------------------------------------
Function GetItemImage(objItem)
	Dim strImgFile

	strImgFile = "images/iconthng.gif"
	If objItem.IsOfType("Portal") Then
		strImgFile = "images/icondoor.gif"
	ElseIf objItem.IsOfType("Artifact") Then
		If objItem.IsAccessory Then
			strImgFile = "images/iconunwr.gif"
			If objItem.IsWorn Then strImgFile = "images/iconwear.gif"
		End If
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
'       The code for OnUserConnect sets, if the
'       connecting avatar is the user, critical
'       object references and calls the routine
'       RegenObjectList to build the inventory list.
'       The code for OnUserDisconnect clears the object
'       references and inventory list.
'       The code for OnNameChanged, OnUIElementChanged,
'       OnWear, OnUnWear, and OnGeometryChanged checks to
'       see if the item is already in the list and removes
'       it. Then it adds the item to the list.
'       The code for the OnEnterInventory adds the item to
'       inventory list.
'       The code for the OnLeaveInventory remove the item
'       from the inventory list.
'       The code for OnFinishSceneComposite updates each
'       list items image.
'--------------------------------------
Sub HandleUIEvent(objFrom, strEventName, vntArgs)
	Dim objItem, objImg
	If IsEmpty(sobjVWClient) Or sobjVWClient Is Nothing Then Exit Sub

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
			divThings.innerHTML = ""
		End If
	Case "OnNameChanged", "OnUIElementChanged", "OnWear", "OnUnWear", "OnGeometryChanged"
		Set objItem = document.body.all("Item" & objFrom.ID)
		If Not objItem Is Nothing Then objItem.removeNode True
		If objFrom.Container Is sobjUser Then AddToList objFrom
	Case "OnEnterInventory"
		If vntArgs.IsUIVisible And vntArgs.Container Is sobjUser Then
			Set objItem = document.body.all("Item" & vntArgs.ID)
			If Not objItem Is Nothing Then objItem.removeNode True
			AddToList vntArgs
		End If
	Case "OnLeaveInventory"
		document.body.all("Item" & vntArgs.ID).removeNode True
	Case "OnFinishSceneComposite"
		For Each objImg In document.body.all.tags("img")
			objImg.src = GetItemImage(sobjWorld.ObjectByID(objImg.linkedItemID))
		Next
	Case Else
	End Select
End Sub
'======================================
