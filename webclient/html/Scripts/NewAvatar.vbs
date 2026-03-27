'======================================
' Desc: This file contains the script for
'       NewAvatar.htm. These two files are
'       the dialog for creating a new
'       avatar.
'======================================
Option Explicit



'======================================
' Name: Public Declarations
' Desc: sobjTop is an object used to
'       reference the top most page of the
'       client.
'--------------------------------------
Public sobjTop
'======================================



'======================================
' Name: Public Initializations
' Desc: sobjTop is assigned the value of
'       a variable, sobjTop, from the calling
'       dialog. The arguemnt passed to this
'       dialog is a reference to the calling
'       dialog.
'--------------------------------------
Set sobjTop = window.dialogArguments.sobjTop
'======================================



'======================================
' Name: document_onkeypress
' Desc: Fires after a key is pressed. If
'       the Esc key is pressed the diaog
'       is closed. If the Enter key is pressed
'       and the active element is not a button
'       then the OK button routine is called.
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
' Desc: This routine checks to make sure
'       avatar's name is valid, then attempts
'       to create a new avatar.
'       Section 1 retrieves an object that
'       contains information about the avatars
'       on the machine.
'       Section 2 determines if the new avatar name
'       already exists on this machine.
'       Section 3 checks the validity of the avatar
'       name, starting first with the length. The
'       maximum length is limited with the MAXLENGTH
'       attribute of the element. The second check is
'       for invalid characters. The third check uses
'       the results from section 2 to determine if the
'       name is new and unique.
'       Section 4 is where the attempt is made to create
'       the new avatar. If successful then the return
'       value for the dialog is set to the new name and
'       the dialog is closed; otherwise an error message
'       is displayed and the focus is returned to the text
'       box.
'--------------------------------------
Sub btnOK_onclick
	Dim objAvatars, strName, blnInList

	'Section 1
	Set objAvatars = sobjTop.objAvatars
	blnInList = False

	'Section 2
	'See if the avatar already exists
	For Each strName In objAvatars.avatarList
		If StrComp(strName, txtName.value, vbTextCompare) = 0 Then
			blnInList = True
			Exit For
		End If
	Next

	'Section 3
	If Len(txtName.value) < 2 Then	'Check for minimum length
		MsgBox "Avatar nicknames must be between 2 and 12 characters in length. Enter a new nickname.", vbOkOnly + vbInformation, sobjTop.sstrAppName
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
	'Section 4
	Else
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
' Args: strName - string containing the name of
'                 the new avatar to be checked.
' Ret:  Boolean - A value of True is returned
'                 of all the characters in the
'                 argument are valid; otherwise
'                 a value of False is returned.
' Desc: This routine checks to see if there are
'       any invalid characters in the avatar name.
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
