<%@ Language=VBScript %>
<%
const localPath = "file://c:\Program Files\Microsoft Virtual Worlds\Local Content\Worlds\DesktopWorld\Client\HTML\"
Response.Redirect localPath & request("page")
%>
