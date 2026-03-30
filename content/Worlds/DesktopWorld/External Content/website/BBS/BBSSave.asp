<%@ Language=VBScript %>
<%
option explicit
dim strSQL

if Request("Title") <> "" then
	Insert
end if

sub Insert()
	dim Conn, rs

	dim strTitle, strAuthor, strAuthorInvis, strContent, IsTopic, strTopicId
	
	Set Conn = Server.CreateObject("ADODB.Connection")
	Conn.Open "DesktopWorldBBS"
	
	strTitle = Replace(Request("Title"),"'", "`")
	strAuthor = Request("Author")
	strAuthorInvis = Request("AuthorInvis")
	strContent = Replace(Request("Content"),"'", "`")
	IsTopic = CBool(Request("IsTopic"))
	strTopicId = Request("TopicId")

	if not isTopic then
		' if the topic we are replying to exists, save the reply and update the topic record
		strSQL = "SELECT MessageId FROM Messages WHERE MessageId=" & strTopicId
		set rs = Conn.Execute(strSQL)
		if not rs.EOF then
			' save new msg
			strSQL = "INSERT INTO Messages (Title,Author,AuthorInvis,Content,CreateDate,IsTopic,MsgCount,TopicId,NewestDate)" &_
				" VALUES ('" & strTitle & "','" & strAuthor & "','" & strAuthorInvis & "','" & strContent & "','" & Now & _
				"',false,0," & strTopicId & ",'" & Now & "')"
			Conn.Execute (strSQL)
			' update topic
			strSQL = "UPDATE Messages SET MsgCount=MsgCount+1,NewestDate='" & Now & "' WHERE MessageId=" & strTopicId
			Conn.Execute (strSQL)
		else
			' topic we are supposed to reply to does not exist, so make this msg a topic
			IsTopic = true
		end if
	end if

	if isTopic then
		strSQL = "INSERT INTO Messages (Title,Author,AuthorInvis,Content,CreateDate,IsTopic,MsgCount,TopicId,NewestDate)" &_
			" VALUES ('" & strTitle & "','" & strAuthor & "','" & strAuthorInvis & "','" & strContent & "','" & Now & _
			"',true,1,0,'" & Now & "')"
		Conn.Execute (strSQL)
	end if
	
end sub
%>
<script language="vbscript">
'msgbox "<%=strSQL%>"
</script>
<html>
<script language="vbscript">
window.history.back()
</script>
</html>


