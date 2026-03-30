<%@ Language=VBScript %>
<%
option explicit
%>
<!-- #include FILE = ../vbs/pathnames.vbs -->
<%
dim user, imgNum
dim uploader, statusMsg

sub createUploadObject
	on error resume next
	Set uploader = Server.CreateObject("Microsoft.FileUpload")
end sub

sub uploadFile
	dim srcFile, destFile
	dim conn, strSQL
	on error resume next
	srcFile = uploader.Form("hidFilename")
' the images directory path is hard-coded because fileSystemObject.getAbsolutePathName("images")
' returns "c:\winnt\system32\images" (presumably it's looking at the scripting engine path??)
	destFile = user & imgNum  & right(srcFile,4)
	uploader.SaveFileAs "file", userImagesPath & destFile, TRUE
	if err.number = 0 then
		set conn = Server.CreateObject("ADODB.Connection")
		conn.Open "DesktopWorldPages"
		strSQL = "update pages set image" & imgNum & "='" & strUserPagesServer & "/Website/users/images/" & destFile & "' where avatarName='" & user & "'"
		conn.Execute strSQL
		conn.close
	end if
end sub

createUploadObject
user = uploader.Form("user")
imgNum = uploader.Form("imgNum")
uploadFile

%>

<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
<link rel=stylesheet href=../shared/global.css>
<script language="VBScript">
sub window_onLoad
	window.close
end sub
</script>
</HEAD>
<BODY class=vtext>
<!--
<P><%=statusMsg%></P>
<input type=button id=btnClose class=vtext value="Ok" onClick="window.close">
-->
</BODY>
</HTML>

