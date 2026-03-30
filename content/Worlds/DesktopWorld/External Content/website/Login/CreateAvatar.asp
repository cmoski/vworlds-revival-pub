<%@ Language=VBScript %>
<%
'////////////////////////////////////////////////////////////////////
'//  File:			CreateAvatar.asp
'//  Description:	This file helps create a new avatar before entering the world
'//					This file is popped up in a new window.
'////////////////////////////////////////////////////////////////////////

Option Explicit

' Display a modal dialog asking for a new username/password and attempt to insert a db record,
' until either this succeeds or the user Cancels out of the dialog.

' This page is designed to be in a hidden frame in the login page.

' When opened by the login page, the formMode parameter is blank and the ASP code generates
' a form page whose window_onLoad opens a modal dialog (newAvatar.htm) that prompts the user
' for a new user/pwd. The modal dialog returns a lexically validated user/pwd as a comma-separated
' string, or returns an empty string if the user cancelled.
' If the dialog returns nothing, the window_onload finishes by calling parent.CreateAvatar
' with a blank result, telling the login page that the user cancelled. Otherwise the window_onload
' fills in the form fields and resubmits createAvatar.asp with formMode = "create".

' When formMode = "create". The ASP code attempts to insert a new user db record.
' If successful the ASP code sets formMode = "done" to tell window_onload to call
' parent.CreateAvatar with the new username/password.
' If unsuccessful the ASP code sets formMode = "error" to tell window_onload to redisplay
' the modal dialog with an error msg.
' This process continues until either we get a valid user/pwd or the user cancels.

main

function insertAvatar (avatarName, password)
	' execute a database INSERT command, returning TRUE if it works and FALSE if not
	dim conn, n
	set conn = server.CreateObject ("ADODB.Connection")
	conn.open "DesktopWorldPages"
	on error resume next
	conn.Execute ("INSERT INTO pages (AvatarName,Password,DateModified) VALUES ('" & avatarname & "','" & password & "','" & Now & "')")
	insertAvatar = conn.Errors.count
end function

sub main
	dim formMode, username, password, errorMsg
	formMode = Request("txtFormMode")
	username = Request("txtUsername")
	password = Request("txtPassword1")
	errorMsg = ""
	if formMode = "create" then
		' The user entered info in the form and hit Ok, so try to insert the avatar in the db.
		' If this works then formMode "create" tell window_onload to tell the login page to create an av in the world,
		' otherwise we will set formMode to "error" to tell window_onload to redisplay the page with an error msg.
		if insertAvatar(username,password) = 0 then
			' tell window_onload to tell the caller that the user has been created
			formMode = "done"
		else
			' tell window_onLoad to redisplay the new-avatar modal dialog with error info
			errorMsg = "This name has already been used. Please enter another name."
			formMode = "create"
		end if
	else
		' formMode = blank; the login page opened this page;
		' tell window_onload to display the new-avatar modal dialog
		formMode = "create"
	end if
%>
<html>
<head>
<title>New Avatar</title>
<link rel=stylesheet href=../shared/global.css>
<!--include scripts-->
<script language="vbscript" src="../vbs/document_OnSelectStart.vbs">
</script>
<!--end include scripts-->
<script language="VBscript">
Option Explicit

dim caller		' calling window (Login.asp)

sub window_onload
	dim formMode, errmsg
	formMode = form1.txtFormMode.value
	
	if formMode = "create" then
		' Display newAvatar.htm in a modal dialog to get a username and password.
		' If the dialog returns data then fill in the form fields and submit the form,
		' otherwise do nothing.
		doModalDialog
	elseif formMode = "done" then
		errmsg = ""
		parent.CreateAvatar form1.txtUsername.value, form1.txtPassword1.value, errmsg
		if errmsg > "" then
			form1.txtError.value = errmsg
			form1.txtFormMode.value = "create"
			doModalDialog
		end if
	end if
end sub

sub doModalDialog
	dim result, arrResult
	result = window.showModalDialog ("newAvatar.htm?" & form1.txtError.value, window, "dialogTop:280px;dialogHeight:250px;dialogWidth:292px;help:no;status:no;")
	arrResult = split(result,",")
	if UBound(arrResult) > 0 then
		' the user entered a new user/pwd
		form1.txtUsername.value = arrResult(0)
		form1.txtPassword1.value = arrResult(1)
		form1.submit
	end if
end sub

</script>
</head>
<body style=background-color:white;>
  <form id=form1 action=CreateAvatar.asp method=post>
	<input type=text id=txtFormMode name=txtFormMode value="<%=formMode%>">
	<input type=text id=txtUsername name=txtUsername value="<%=userName%>">
	<input type=password id=txtPassword1 name=txtPassword1 value="<%=password%>">
	<input type=text id=txtError name=txtError value="<%=errorMsg%>">
  </form>
</BODY>
</HTML>

<%
end sub	' main
%>