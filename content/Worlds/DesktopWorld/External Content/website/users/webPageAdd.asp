<%@ Language=VBScript %>

<%
option explicit

dim conn, rs
set conn = server.CreateObject ("ADODB.Connection")
conn.open "DesktopWorldPages"
set rs = conn.Execute ("SELECT * FROM pages WHERE AvatarName='" & request("user") & "'")
if rs.EOF then	' there is no such user
	conn.Execute ("INSERT INTO pages (AvatarName,DateModified) VALUES ('" & request("user") & "','" & Now & "')")
'Response.Write 	"INSERT INTO pages (AvatarName,DateModified) VALUES ('" & request("user") & "'," & Now & ")"
end if

%>

<html><head></head><body>user=<%=request("user")%><br></body></html>

