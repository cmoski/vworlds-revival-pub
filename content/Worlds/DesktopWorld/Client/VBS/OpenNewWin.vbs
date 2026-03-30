option explicit

'////////////////////////////////////////////////////////////////////////
'//  Sub:  		OpenNewWin(strURL)
'//  Purpose:  	Opens a new modeless window with the given ht, wd, left and top.
'//	 Inputs:	strURL - the url of the page to open
'////////////////////////////////////////////////////////////////////////

' uses window.open
' problem with staying on top
dim intWinCascade, blnCascOn, arrWinName(20)
intWinCascade = 0
blnCascOn = 1
CONST intWinBorder = 22
arrWinName(0) = ""

sub OpenNewWin(strURL) 
	dim NewWin, strWinName, intL, intT, intW, intH
	dim i
	for i = 0 to UBound(arrWinName)
'msgbox arrWinName(i)
		if IsNull(arrWinName(i)) _
		or arrWinName(i) = "" then
'msgbox "1"
			arrWinName(i) = NewWin
			exit for

		else
			dim foo
			set foo = arrWinName(i)

		if foo.closed then
'msgbox "2"
			arrWinName(i) = NewWin	
			exit for
		else
			arrWinName(i) = NewWin 	
'msgbox "3"
		end if
		end if
	next
	intWinCascade = i
	intL = (top.screenLeft + top.document.body.clientWidth - _
	top.clientBrowserIframe.document.body.clientWidth + 93) + intWinBorder*(intWinCascade)
	intT = (top.screenTop + 99) + intWinBorder*(intWinCascade)
	intH = top.clientBrowserIframe.document.body.clientHeight + 18 
	intW = top.clientBrowserIframe.document.body.clientWidth - 75
	strWinName = Replace(Replace(Replace(Now," ",""),"/",""),":","")
	set NewWin = window.Open(strURL, strWinName, _
  	"Height=" & intH & _
	"px,Width=" & intW & _
	"px,Top=" & intT & _
	"px,Left=" & intL & _
	"px,resizable=yes,status=no,scrollbars=yes,location=no",false)
end sub

sub document_OnResize
	intWinCascade = 0
end sub


