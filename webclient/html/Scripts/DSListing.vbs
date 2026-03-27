'======================================
' Desc: This file contains the script for
'       DSListing.htm. These two files show
'       the list of worlds the user can visit.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sarrWorlds is a variable length array
'       used to store the data about available
'       worlds.
'--------------------------------------
Public sarrWorlds()
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
' Name: document_onclick
' Desc: Fires when any element in the document
'       This routine the navigation to a world
'       or the launching of a web link.
'       Section 1 determines if the event came
'       from an A element.
'       Section 2 cancels the default navigation
'       attempt for the A element. This is needed
'       as the element has an empty string assigned
'       to the href attribute. If this wasn't done
'       the window is navigated to a folder view.
'       Section 3 determines if the click occurred
'       on a world. If so and if the element has
'       an attribute worldURL that isn't empty
'       the dialog return value is set to the world
'       URL and the dialog is closed.
'       Section 4 determines if the click occurred
'       on a web page link. If so a new window is
'       opened to that web page.
'--------------------------------------
Sub document_onclick
	'Section 1
	If window.event.srcElement.tagName = "A" Then
	'Section 2
		window.event.returnValue = False
	'Section 3
		If window.event.srcElement.name = "world" Then
			If window.event.srcElement.worldURL <> "" Then
				top.returnValue = window.event.srcElement.worldURL
				top.close
			End If
	'Section 4
		ElseIf window.event.srcElement.name = "webpage" Then
			top.open window.event.srcElement.href
		End If
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
		top.close
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: OnTopLoad
' Desc: Completes the initialization of
'       the page.
'       Section 1 ensures that the top
'       most page is loaded before continuing.
'       If it isn't this routine is called in
'       1/4 second.
'       Section 2 initializes a counter. Then, if
'       the property DirectoryServicePage exists and
'       has been set, gets a local array of world entries.
'       Section 3 iterates through each world entry in the
'       local array and separates the world URL, the number
'       of current users, and the world web page. These
'       values are assigned to the script level world array.
'       Section 4 checks if any valid worlds were found. If
'       so the SortList routine is called to sort them;
'       otherwise the allow sorting flag is set to False and
'       the NoWorlds routine is called.
'       Section 5 sets the date/time stamp.
'--------------------------------------
Sub OnTopLoad
	Dim arrWorlds, arrWorld, intCount, strWorld

	'Section 1
	If top.document.readyState <> "complete" Then
		window.setTimeout "OnTopLoad", 250, "vbs"
		Exit Sub
	End If
	'Section 2
	intCount = 0
	If top.sobjTop.objClient.VWClient.World.global.IsValidProperty("DirectoryServicePage") Then
		If Trim(top.sobjTop.objClient.VWClient.World.global.DirectoryServicePage) <> "" Then
	'Section 3
			arrWorlds = Split(top.sobjTop.objWebHelper.fetchUrlText("http://vworldsint/ds.asp"), vbCrLf)
			For Each strWorld In arrWorlds
				If Len(strWorld) <> 0 Then
					arrWorld = Split(strWorld, vbTab)
					If UBound(arrWorld) = 3 Then
						ReDim Preserve sarrWorlds(3, intCount)
						If StrComp(Left(Trim(arrWorld(0)), 2), vbCrLf, vbTextCompare) = 0 Then
							sarrWorlds(0, intCount) = Mid(Trim(arrWorld(0)), 3)
						Else
							sarrWorlds(0, intCount) = Trim(arrWorld(0))
						End If
						sarrWorlds(1, intCount) = Trim(arrWorld(1))
						sarrWorlds(2, intCount) = Trim(arrWorld(2))
						sarrWorlds(3, intCount) = Trim(arrWorld(3))
						intCount = intCount + 1
					End If
				End If
			Next
		End If
	End If
	'Section 4
	If intCount > 0 Then
		SortList
	Else
		top.sblnAllowSorting = False
		NoWorlds
	End If
	'Section 5
	top.divTime.innerHTML = "As of " & FormatDateTime(Now())
End Sub
'======================================


'======================================
' Name: SortList
' Desc: This routine sorts the world list
'       based on the chosen sort column.
'       Section 1 initializes the vertical
'       position variable intTop, and clears
'       the hidden sorting control.
'       Section 2 the sort type is by world
'       name.
'       Section 2a adds each name to the
'       sorting control.
'       Section 2b iterates through each item
'       in the sorting control, finds the corresponding
'       world in the script level array, and then calls the
'       AddItem routine to add the entry to the
'       page.
'       Section 3 the sort type is by number
'       of users in the world.
'       Section 3a concatenates the number of users
'       and the world name then adds this to the
'       sorting control.
'       Section 3b (see 2b).
'       Section 4 the sort type is by world
'       web page.
'       Section 4a concatenates the web page URL
'       and the world name then adds this to the
'       sorting control.
'       Section 4b (see 2b).
'       Section 5 restores the saved time/date stamp. Then
'       checks that there are worlds in the script level
'       array. If not the allow sorting flag is set to False
'       and the NoWorlds routine is called.
'--------------------------------------
Public Sub SortList
	Dim strItem, objEl, intCount, strText, intTop

	'Section 1
	intTop = 0
	Do While lstSort.length > 0
		lstSort.remove(0)
	Loop
	Select Case top.sobjSortCol.SortID
	'Section 2
	Case "1"
	'Section 2a
		For intCount = 0 To UBound(sarrWorlds, 2)
			Set objEl = document.createElement("OPTION")
			objEl.text = sarrWorlds(1, intCount)
			lstSort.add objEl, AddToList(lstSort, objEl.text)
		Next
	'Section 2b
		For Each strItem In lstSort.options
			For intCount = 0 To UBound(sarrWorlds, 2)
				If strItem.text = sarrWorlds(1, intCount) Then
					AddItem sarrWorlds(0, intCount), sarrWorlds(1, intCount), sarrWorlds(2, intCount), sarrWorlds(3, intCount), intTop
					Exit For
				End If
			Next
		Next
	'Section 3
	Case "2"
	'Section 3a
		For intCount = 0 To UBound(sarrWorlds, 2)
			Set objEl = document.createElement("OPTION")
			objEl.text = sarrWorlds(2, intCount) & "," & sarrWorlds(1, intCount)
			lstSort.add objEl, AddToList(lstSort, objEl.text)
		Next
	'Section 3b
		For Each strItem In lstSort.options
			strText = Right(CStr(strItem.text), Len(CStr(strItem.text)) - InStr(1, CStr(strItem.text), ",", vbTextCompare))
			For intCount = 0 To UBound(sarrWorlds, 2)
				If StrComp(strText, sarrWorlds(1, intCount), vbTextCompare) = 0 Then
					AddItem sarrWorlds(0, intCount), sarrWorlds(1, intCount), sarrWorlds(2, intCount), sarrWorlds(3, intCount), intTop
					Exit For
				End If
			Next
		Next
	'Section 4
	Case "3"
	'Section 4a
		For intCount = 0 To UBound(sarrWorlds, 2)
			Set objEl = document.createElement("OPTION")
			objEl.text = sarrWorlds(3, intCount) & "," & sarrWorlds(1, intCount)
			lstSort.add objEl, AddToList(lstSort, objEl.text)
		Next
	'Section 4b
		For Each strItem In lstSort.options
			strText = Right(CStr(strItem.text), Len(CStr(strItem.text)) - InStr(1, CStr(strItem.text), ",", vbTextCompare))
			For intCount = 0 To UBound(sarrWorlds, 2)
				If StrComp(strText, sarrWorlds(1, intCount), vbTextCompare) = 0 Then
					AddItem sarrWorlds(0, intCount), sarrWorlds(1, intCount), sarrWorlds(2, intCount), sarrWorlds(3, intCount), intTop
					Exit For
				End If
			Next
		Next
	Case Else
	End Select
	'Section 5
	top.divTime.innerHTML = top.sstrSavedDate
	Select Case UBound(sarrWorlds, 2)
	Case 0
	Case -1
		top.sblnAllowSorting = False
		NoWorlds
	Case Else
	End Select
End Sub
'======================================



'======================================
' Name: AddToList
' Args: objEl - object reference to the list
'               control (SELECT).
'       strItem - Item to be added to the list.
' Ret:  Integer indicating the position in the
'       list where the item is to be added.
' Desc: This function finds the location an
'       item should be added to the list
'       depending on the type of sort requested,
'       either ascending or descending.
'       Section 1 sets the location to the end
'       of the list.
'       Section 2 iterates through each item in
'       the list comparing it with the new item.
'       Section 3 If the Ascending flag is set then
'       If the new item is less than the list item
'       the current position in the list is
'       returned.
'       Section 4 If the ascending flag isn't set then
'       If the new item is greater than the list item
'       the current position in the list is
'       returned.
'--------------------------------------
Function AddToList(objEl, strItem)
	Dim intCount

	'Section 1
	AddToList = objEl.length
	'Section 2
	For intCount = 0 To objEl.length - 1
		If top.sblnAscending Then
	'Section 3
			If StrComp(strItem, objEl.options.item(intCount).text, vbTextCompare) = -1 Then
				AddToList = intCount
				Exit For
			End If
		Else
	'Section 4
			If StrComp(strItem, objEl.options.item(intCount).text, vbTextCompare) = 1 Then
				AddToList = intCount
				Exit For
			End If
		End If
	Next
End Function
'======================================



'======================================
' Name: AddItem
' Args: strWorldURL - string containing the URL
'                     for the world.
'       strWorldDisplay - string containing the text
'                         to be shown in the list.
'       strNumConnected - string containing the number
'                         of currently connected users.
'       strWebURL - string containing the web page URL
'                   associated with the world.
'       intTop - integer containing the top position
'                for the new entry.
' Desc: This routine adds an world entry to the list.
'       (Note: absolute positioning is used instead of
'              a table because the overflow CSS attribute
'              doesn't seem to work in a table cell.)
'       Section 1 builds a string of HTML containing the
'       world name and number of users.
'       Section 2 adds the world web page URL to the HTML
'       string from section 1 if it isn't missing.
'       Section 3 inserts the HTML string at the end of
'       the page, and increases the top position variable
'       by 20.
'--------------------------------------
Sub AddItem(strWorldURL, strWorldDisplay, strNumConnected, strWebURL, ByRef intTop)
	Dim strHTML

	'Section 1
	strHTML = "<div class=vwText style=position:absolute;left:0;top:" & intTop & ";width:160;overflow:hidden;padding:2;>" & _
						"<nobr>" & _
							"<a name=world style=color:#002f5f; href="""" worldUrl=""" & strWorldURL & """ title=""" & strWorldDisplay & """>" & strWorldDisplay & "</a>" & _
						"</nobr>" & _
					"</div>" & _
					"<div class=vwText style=position:absolute;left:162;top:" & intTop & ";width:67;padding:2; align=center>" & _
						strNumConnected & _
					"</div>"
	'Section 2
	If strWebURL <> "" Then
		strHTML = strHTML & _
			"<div class=vwText style=position:absolute;left:242;top:" & intTop & ";width:200;overflow:hidden;padding:2;>" & _
				"<nobr>" & _
					"<a name=webpage target=_blank style=color:#002f5f; href=""" & strWebURL & """ title=""" & strWebURL & """>" & strWebURL & "</a>" & _
				"</nobr>" & _
			"</div>"
	End If
	'Section 3
	divWorldList.insertAdjacentHTML "beforeEnd", strHTML
	intTop = intTop + 20
End Sub
'======================================



'======================================
' Name: NoWorlds
' Desc: This routine displays a message
'       in the page if no worlds are found.
'--------------------------------------
sub NoWorlds
	divWorldList.innerHTML = "<div class=vwText style=position:absolute;left:5;top:5;>Either the Worlds Directory Service is not available or there are no worlds available.<p>Check with a world server administrator to make sure the Worlds Directory Service server is running.</div>"
end sub
'======================================
