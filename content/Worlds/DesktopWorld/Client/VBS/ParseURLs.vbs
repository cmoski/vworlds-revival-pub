'////////////////////////////////////////////////////////////
' ParseURLs
' Replace URLs within a string with <A> tags, adding http:// where missing
'

function ParseURLs(inText)
	dim outText, offset, spacePos, urlLen
	' first insert "http://" wherever missing, by replacing "www." with "http://www."
	' and then removing any duplicate "http://" strings.
	outText = inText
	if outText > "" then
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
				outText = mid(outText,1,offset-1) & "<a href=""" & mid(outText,offset,urlLen) & """ target=_scurl>" _
					& mid(outText,offset,urlLen) & "</a>" & mid(outText,offset+urlLen,len(outText))
				offset = instr(offset+urlLen, outText, "http://")
			end if
		loop until offset = 0
	end if
	ParseURLs = outText
end function

