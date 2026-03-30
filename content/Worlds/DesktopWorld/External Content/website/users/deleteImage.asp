<%@ Language=VBScript %>
<%
option explicit

dim user, imgNum
user = Request.QueryString("user")
imgNum = Request.QueryString("imgNum")
if (user > "") and (imgNum > "") then deleteFromDB user,imgNum

sub deleteFromDB (user, imgNum)
	dim conn, strSQL
	on error resume next
	set conn = Server.CreateObject("ADODB.Connection")
	conn.Open "DesktopWorldPages"
	strSQL = "update pages set image" & imgNum & "='' where avatarName='" & user & "'"
	conn.Execute strSQL
	conn.close
end sub

%>

<html>
</head>
<body>
</body>
</html>

