Option Explicit

'======================================
' Public declaration area
'--------------------------------------
Public sobjTop ' Top window object
'======================================


'======================================
' Initialization area
'--------------------------------------
Set sobjTop = window.dialogArguments.sobjTop
'======================================


'======================================
' Name: document_onkeypress
' Desc: Trap for enter, esc
'--------------------------------------
Sub document_onkeypress
	Select Case window.event.keyCode
	Case 27
		window.close
	Case 13
		If window.event.srcElement.tagName <> "BUTTON" Then btnOK_onclick
	Case Else
	End Select
End Sub
'======================================


'======================================
' Name: btnOK_onclick
' Desc: Checks to make sure avatar's name is valid,
'       then attempts to create a new avatar.
'--------------------------------------
Sub btnOK_onclick
	Dim objAvatars, strName, blnInList

	Set objAvatars = sobjTop.objAvatars
	blnInList = False

	'See if the avatar already exists
	For Each strName In objAvatars.avatarList
		If StrComp(strName, txtName.value, vbTextCompare) = 0 Then
			blnInList = True
			Exit For
		End If
	Next

	If Len(txtName.value) < 3 Then	'Check for minimum length
		MsgBox "Avatar nicknames must be between 3 and 12 characters in length. Enter a new nickname.", vbOkOnly + vbInformation, sobjTop.sstrAppName
		txtName.focus
		txtName.select
	ElseIf Not ValidChars(txtName.value) Then	'Check for invalid characters
		MsgBox "An avatar nickname can not contain a space, a tab, or any of the following characters:" & vbcrlf & " / \ : ? "" < > | & " & vbcrlf & "Enter a new nickname.", vbOkOnly + vbExclamation, sobjTop.sstrAppName
		txtName.focus
		txtName.select
	ElseIf blnInList Then	'Check to see if already exists
		MsgBox "This avatar nickname already exists.  Choose a different nickname.", vbOkOnly + vbInformation, sobjTop.sstrAppName
		txtName.focus
		txtName.select
	Else	'Name is good so try and create it
		If objAvatars.CreateNewAvatar(txtName.value, "") = True Then
			window.returnValue = txtName.value
			window.close
		Else
			MsgBox "Unable to create an avatar.  Try using a different avatar name.  If this error persists, check your Virtual Worlds installation.", vbOkOnly + vbExclamation, sobjTop.sstrAppName
			txtName.focus
			txtName.select
		End If
	End If
End Sub
'======================================


'======================================
' Name: ValidChars
' Desc: Checks to see if there are any non-alphanumeric characters in the avatar name
'--------------------------------------
Function ValidChars(strName)
	Dim intCount

	ValidChars = True
	For intCount = 1 to Len(strName)
		Select Case Mid(strName, intCount, 1)
		Case " ", "&", "\", "/", ":", "?", """", "<", ">", "|", vbTab
			ValidChars = False
			Exit For
		Case Else
		End Select
	Next
End Function
'======================================


