<%@ Language=VBScript %>

<%
option explicit
const defaultImage = "images/space.gif"

dim conn, rs

function OpenDatabase() 
	on error resume next
	OpenDatabase = false
	
	set conn = server.CreateObject ("ADODB.Connection")
	conn.open "DesktopWorldPages"
	set rs = conn.Execute ("SELECT * FROM pages WHERE AvatarName='" & request("user") & "'")
	
	if Err.number <> 0 then
		exit function
	end if
	OpenDatabase = true
end function

function CloseDatabase()
	set rs = nothing
	conn.Close
end function


function ParseHTML(inText, outText)
	on error resume next
	parseHTML = false
	dim offset, spacePos, urlLen
	outText = inText
	if outText > "" then
		' deactivate user-entered HTML tags
		outText = replace(outText,"<","&lt")
		outText = replace(outText,">","&gt")
		' convert linebreaks to <BR> tags
		outText = replace(outText,vbCRLF,"<BR>")
		' insert "http://" wherever missing, by replacing "www." with "http://www."
		' and then removing any duplicate "http://" strings.
		outText = replace(outText,"www.","http://www.",1,-1,1)
		outText = replace(outText,"http://http://","http://",1,-1,1)
		' for each "http://" find the end of the URL and wrap the URL in an <a> tag
		offset = 0
		do
			offset = instr(offset+1, outText, "http://")
			if offset > 0 then
				spacePos = instr(offset, outText & " ", " ", 1)
				if instr(".!,?)];'", mid(outText, spacePos-1, 1)) > 0 then
					urlLen = spacePos - offset - 1
				else
					urlLen = spacePos - offset
				end if
				outText = mid(outText,1,offset-1) & "<a href=""" & mid(outText,offset,urlLen) & """>" _
					& mid(outText,offset,urlLen) & "</a>" & mid(outText,offset+urlLen,len(outText))
				offset = instr(offset+urlLen, outText, "http://")
			end if
		loop until offset = 0
	end if
	parseHTML = outText
	
	if Err.number <> 0 then
		exit function
	end if
	
	parseHTML = true
	
end function

' probably should check here if rs.EOF then redirect to a "no such user" page

%>

<html>
<head>
<meta name="refresh" content="0"> 
<title>DesktopWorld User Page</title>
<style>
	P { font-family:Arial,Helvetica,sans-serif; }
</style>
<script language="VBScript">

' max dimensions of image 0 ("My Picture") -- smaller than other images because it can have text beside it
const MAX_IMAGE0_WIDTH = 200
const MAX_IMAGE0_HEIGHT = 200

' max dimensions of My Photo Album images
const MAX_IMAGE_WIDTH = 400
const MAX_IMAGE_HEIGHT = 400

sub imgReadyStateChange
	' restrict the image tag to max dimensions
	dim img, w, h, wMax, hMax
	set img = window.event.srcElement
	w = img.width
	h = img.height
	if img.id = "image0" then
		wMax = MAX_IMAGE0_WIDTH
		hMax = MAX_IMAGE0_HEIGHT
	else
		wMax = MAX_IMAGE_WIDTH
		hMax = MAX_IMAGE_HEIGHT
	end if
	if img.height > MAX_IMAGE_HEIGHT then 
		img.style.width = w * (MAX_IMAGE_HEIGHT / h)
		img.style.height = MAX_IMAGE_HEIGHT
	end if
	if img.width > MAX_IMAGE_WIDTH then 
		img.style.height = h * (MAX_IMAGE_WIDTH / w)
		img.style.width = MAX_IMAGE_WIDTH
	end if
end sub

</script>
</head>
<%
	if OpenDatabase() = false then
		Response.Write "Error: Failed to open database<br>"
	end if
%>	
<body bgcolor="<%=rs("backgroundColor")%>" text="#000000" link="#000066" vlink="#FFFFCC" alink="#000099">

<p><font size="4"><b><%=rs("avatarName")%></b></font>
<br>
<font size="3"><i>Welcome to my page!</i></font>
</p>

<%

dim image0
image0 = rs("image0")
if isNull(image0) then image0 = ""
if len(image0) > 0 then
	' insert the user's picture and caption in a table at the left;
	' text items will be to the right and will wrap underneath if necessary.
%>
	<table width="40%" border="0" cellspacing="2" cellpadding="2" align="left">
	  <tr> 
	    <td valign="top" align="left" width="100%"> 
	      <p align="center"><img id=image0 src="<%=image0%>" alt="image" border="0" onReadyStateChange=imgReadyStateChange><br>
	        <font face="Verdana, Arial, Helvetica, sans-serif" size="1">
	        <br>
	        <%=rs("Caption0")%></font></p>
	      </td>
	  </tr>
	</table>
<% end if %>
<font face="Verdana, Arial, Helvetica, sans-serif" size="2">
<p><b>About Me:</b><br> <%

dim strTemp
if parseHTML(rs("aboutMe"), strTemp) = false then
	Response.Write "Error: could not parse URL: " & rs("aboutMe")
else
	Response.Write strTemp	
end if
Response.Write " </p><p><b>Other Information:</b><br>"
if parseHTML(rs("otherInfo"), strTemp) = false then
	Response.Write "Error: could not parse URL: " & rs("otherInfo")
else
	Response.Write strTemp	
end if

%></p>
<p clear=left><b>FAVORITE LINKS:</b></p>
<%	dim n, webURL
	for n = 1 to 4		' 5
	  if rs("LinkURL" & n) > "" then
		webURL = rs("LinkURL" & n)
		if left(webURL,7) <> "http://" then webURL = "http://" & webURL
		Response.Write "<p><a ID=link" & n & " href=""" & webURL & """>" & rs("LinkName" & n) & "</a></p>"
	  end if
	next
	if rs("hotmailName") > "" then %>
<p><a href="http://www.hotmail.com"><b>Email me!</b></a></p>
<%	end if %>
<br>
<%	for n = 1 to 4
		if rs("image" & n) > "" then
			Response.Write "<hr><p><img id=image" & n & " src=""" & rs("image" & n) & """ onReadyStateChange=imgReadyStateChange>" & vbCrLf
			Response.Write "<br><font face=""Verdana, Arial, Helvetica, sans-serif"" size=""1"">" & rs("caption" & n) & "</font></p>"
		end if
	next

CloseDatabase()
%>

</body>
</html>

