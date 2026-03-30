Option Explicit

'======================================
' Name: PosInList
' Desc: Sorts a listbox as it is built
'--------------------------------------
Function PosInList(objEl, strItem)
	Dim intCount

	PosInList = objEl.length
	For intCount = 0 To objEl.length - 1
		If StrComp(strItem, objEl.options.item(intCount).text, vbTextCompare) = 0 Then
			PosInList = intCount
			Exit For
		End If
	Next
End Function

