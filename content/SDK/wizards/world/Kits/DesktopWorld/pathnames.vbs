' pathnames.vbs

' =======================================================
' Paths to server-side components
' used by DesktopWorld.htm to build the world
' =======================================================

' This is the path to the content on the web server;
' if you place this content on the client instead, the path must be relative
' to the client.htm file, for example: "../../external content/website/content/"
CONST strWebContentPath = "http://DesktopWorld/website/content/"


' World location: vworlds ServerName/WorldName
CONST worldLocation = "DesktopWorld/DesktopWorld"


' Local path on the UserPagesServer to the upload directory for image files for user pages
CONST userImagesPath = "c:\DesktopWorld\website\users\images\"


' URL of the web server hosting the BBS
CONST strBBSServer = "http://DesktopWorld"


' URL of the web server hosting user-created pages
CONST strUserPagesServer = "http://DesktopWorld"


' Path to user web page ASPs on the UserPagesServer, relative to strUserPagesServer.
CONST strUserPagesPath = "/website/users/"
