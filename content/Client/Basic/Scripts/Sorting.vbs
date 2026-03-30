'======================================
' Desc: This file is included on pages where
'       sorting the items of a SELECT element
'       is needed. Sort order is ascending.
'======================================
Option Explicit



'======================================
' Name: PosInList
' Args: objEl - Object reference of SELECT element
'       strItem - String value of item to be added
'                 to SELECT element (list box).
' Ret:  Integer indicating the position in the list
'       where the item should be added.
' Desc: Returns the position where an item should
'       be added in the SELECT element.
'--------------------------------------
Function PosInList(objEl, strItem)
	Dim intCount

	PosInList = objEl.length
	For intCount = 0 To objEl.length - 1
		If StrComp(strItem, objEl.options.item(intCount).text, vbTextCompare) = -1 Then
			PosInList = intCount
			Exit For
		End If
	Next
End Function
'======================================
