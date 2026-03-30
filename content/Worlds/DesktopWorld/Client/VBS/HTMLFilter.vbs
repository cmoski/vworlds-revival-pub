'////////////////////////////////////////////////////////////////////////////
'// function:	HTMLFilter
'// purpose:	Remove user-entered HTML tags by stuffing a string into a DIV's innerHTML
'//				and retrieving innerText, letting IE do the work of removing the tags.
'// Called by:	chatbox.htm:doSay
'// NOTE: Calling page must contain a hidden DIV with id="htmlFilter"
'////////////////////////////////////////////////////////////////////////////

function HTMLFilter(strText)
    if (inStr(strText, "<") > 0) and (inStr(strText, ">") > 0) then
		document.all("htmlFilter").innerHTML = ""
    	document.all("htmlFilter").innerHTML = strText
		HTMLFilter = document.all("htmlFilter").innerText   
    elseif (inStr(strText, "<") > 0) then
	    HTMLFilter = Replace(strText,"<","< ")
	else
		HTMLFilter = strText
	end if
end function

'////////////////////////////////////////////////////////////////////////////
' ParseURLs
' Replace Find URLs in a string and convert to <A> tags, adding http:// where missing
'////////////////////////////////////////////////////////////////////////////

function ParseURLs(inText)
	dim outText, urlStart, urlEnd, urlLen
	' first insert "http://" wherever missing, by replacing "www." with "http://www."
	' and then removing any duplicate "http://" strings.
	outText = replace(intext,vbCRLF," " & vbCRLF)
	if outText > "" then
		outText = replace(outText,"www.","http://www.",1,-1,1)
		outText = replace(outText,"http://http://","http://",1,-1,1)
		' for each "http://" find the end of the URL and wrap the URL in an <a> tag
		urlStart = 0
		do
			urlStart = instr(urlStart+1, outText, "http://")
			if urlStart > 0 then
				' find the first blank space or end of string
				urlEnd = instr(urlStart, outText & " ", " ", 1)
				' search leftward to the first terminator char
				do while instr(".!,?)];'<", mid(outText, urlEnd-1, 1)) > 0 
					urlEnd = urlEnd - 1
				loop
				' generate an <A> tag around the URL
				urlLen = urlEnd - urlStart
				outText = mid(outText,1,urlStart-1) & "<a href=""" & mid(outText,urlStart,urlLen) & """ target=_scurl>" _
					& mid(outText,urlStart,urlLen) & "</a>" & mid(outText,urlStart+urlLen,len(outText))
				' look for more URLs
				urlStart = instr(urlStart+urlLen, outText, "http://")
			end if
		loop until urlStart = 0
	end if
	ParseURLs = replace (outText,vbCRLF & " ",vbCRLF)
end function

