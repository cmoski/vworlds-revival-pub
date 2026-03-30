'======================================
' Desc: This file is included on pages where control
'       over the context menu is desired.
'======================================
Option Explicit



'======================================
' Name: document_oncontextmenu
' Desc: Fires before any context menu appears. This
'       routine uses a variable on the top most page
'       to determine whether the context menu should
'       be displayed. Two HTML elements are excluded
'       from the control of the context menu, INPUT
'       and TEXTAREA.
'--------------------------------------
Sub document_oncontextmenu
	Select Case window.event.srcElement.tagName
	Case "INPUT", "TEXTAREA"
	Case Else
		window.event.returnValue = top.sblnAllowContextMenu
	End Select
End Sub
'======================================

