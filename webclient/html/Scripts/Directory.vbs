'======================================
' Desc: This file contains the script for
'       Directory.htm. These two files are
'       the dialog for listing a directory
'       of worlds the user may choose to visit.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjTop is an object used to
'       reference the top most page of the
'       client.
'       sobjSortCol is an object reference to
'       the current column element being sorted.
'       sblnAscending is a flag indicating the
'       type of sort.
'       sstrSavedDate is a string used to store
'       the value in the date field while that field
'       is used to display a status message.
'       sblnAllowSorting is a flag used to indicate
'       that sorting is either allowed or not allowed.
'       sblnAllowContextMenu is a flag used to control
'       the display of the context mouse menu. It is
'       intended to assist in the development process.
'--------------------------------------
Public sobjTop
Public sobjSortCol
Public sblnAscending
Public sstrSavedDate
Public sblnAllowSorting
Public sblnAllowContextMenu
'======================================



'======================================
' Name: Public Initializations
' Desc: sblnAscending is set to True indicating
'       the sort type is ascending.
'       sstrSavedDate is set to an empty string.
'       sobjTop is assigned the argument
'       passed to the dialog.
'       sblnAllowSorting is set to True indicating
'       that sorting is allowed.
'       sblnAllowContextMenu is set from a variable
'       on the top most client page.
'       The last line sets the initial dialog
'       return value to an empty string indicating
'       that no world was chosen.
'--------------------------------------
sblnAscending = True
sstrSavedDate = ""
Set sobjTop = window.dialogArguments
sblnAllowSorting = True
sblnAllowContextMenu = sobjTop.sblnAllowContextMenu
window.returnValue = ""
'======================================



'======================================
' Name: window_onload
' Desc: Fires when the page has loaded.
'       The first line sets the initial value
'       of the sort column object.
'       The second line added an up arrow to the
'       end of the text in the column name.
'       The third line sets the initial focus.
'       The last line requests this page be
'       registered to receive UI events
'--------------------------------------
Sub window_onload
	Set sobjSortCol = divCol1
	sobjSortCol.innerHTML = sobjSortCol.ColName & "<font face=Webdings style=position:relative;top:-1;>5</font>"
	document.frames("fraServerList").focus
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
' Name: document_onclick
' Desc: Fires when any element in the document
'       is clicked.
'       This routine handles sorting.
'       Section 1 checks to see if sorting is allowed
'       and that a column name was clicked.
'       Section 2 saves the date/time stamp, displays
'       status text, and removes the arrow from the most
'       recent sort column's name.
'       Section 3 set an object variable to the column
'       clicked on. The if check is to set the correct
'       reference if the arrow was clicked upon or the
'       text was clicked upon.
'       Section 4 checks to see if a different column was
'       clicked. If so then the sort column object is set
'       to the new column. and the sort type is set to
'       ascending for the first column and descending for
'       the other columns (The reason for this distinction
'       is that there may be more interest in worlds with
'       large number of people in them or more interest
'       in worlds that have URLs assigned.); otherwise the
'       sort type flag is reversed.
'       Section 5 adds the appropriate arrow indicator to the
'       column name, the world list is cleared, and the SortList
'       method of the page containing the list is called. This
'       method is called with a timeout to give the screen a chance
'       to refresh and show the status text and erase the old list.
'--------------------------------------
Sub document_onclick
	Dim objNewSortCol

	'Section 1
	If sblnAllowSorting Then
		Select Case window.event.srcElement.id
		Case "divCol1", "divCol2", "divCol3"
	'Section 2
			sstrSavedDate = divTime.innerHTML
			divTime.innerHTML = "Sorting Directory... Please Wait..."
			sobjSortCol.innerText = sobjSortCol.ColName
	'Section 3
			If window.event.srcElement.tagName = "FONT" Then
				Set objNewSortCol = window.event.srcElement.document.activeElement.children(0)
			Else
				Set objNewSortCol = window.event.srcElement
			End If
	'Section 4
			If sobjSortCol.SortID <> objNewSortCol.SortID Then
				Set sobjSortCol = objNewSortCol
				If sobjSortCol.SortID = "1" Then
					sblnAscending = True
				Else
					sblnAscending = False
				End If
			Else
				sblnAscending = Not sblnAscending
			End If
	'Section 5
			If sblnAscending Then
				sobjSortCol.innerHTML = sobjSortCol.ColName & "<font face=webdings style=position:relative;top:-1;>5</font>"
			Else
				sobjSortCol.innerHTML = sobjSortCol.ColName & "<font face=webdings style=position:relative;top:-1;>6</font>"
			End If
			window.frames("fraServerList").divWorldList.innerHTML = ""
			'fire off the command in a timeout to get the screen a chance to refresh, clearing the old list.
			window.setTimeout "window.frames(""fraServerList"").SortList", 0, "vbs"
		Case Else
		End Select
	End If
End Sub
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the dialog
'       is closed.
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keycode
	Case 27
		window.close
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: btnRefresh_onclick
' Desc: Fires when the Refresh button is
'       clicked. This routine updates the
'       time/date label with a status
'       message and then tells the page
'       containing the list to reload thus
'       forcing a re-query and rebuild of the list.
'--------------------------------------
Sub btnRefresh_onclick
	divTime.innerHTML = "Querying Directory... Please Wait..."
	fraServerList.location.reload True
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
'       if this page is registered to recieve
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
