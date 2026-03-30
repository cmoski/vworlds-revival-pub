<%
' pathnames.vbs

' =======================================================
' Paths to server-side components
' used by login.asp for user login
' =======================================================


' This is the path to the content on the web server;
' if you place this content on the client instead, the path must be relative
' to the client.htm file, for example: "../../external content/website/content/"
CONST strWebContentPath = "http://samples.vworlds.org/website/content/"


' World location: vworlds ServerName/WorldName
' This string is the base name for the world; a number will be appended to get the
' actual world name, i.e. dtw1, dtw2...
CONST worldLocation = "samples.vworlds.org/dtw"


' Number of worlds available (generates the world number selection dropdown on the login page)
CONST worldCount = 2


' URL of the web server hosting the BBS
CONST strBBSServer = "http://samples.vworlds.org"


' URL of the web server hosting user-created pages
CONST strUserPagesServer = "http://samples.vworlds.org"


' Path to user web page ASPs on the UserPagesServer, relative to strUserPagesServer.
CONST strUserPagesPath = "/website/users/"


' Local path on the UserPagesServer to the upload directory for image files for user pages
CONST userImagesPath = "c:\DesktopWorld\website\users\images\"


%>
