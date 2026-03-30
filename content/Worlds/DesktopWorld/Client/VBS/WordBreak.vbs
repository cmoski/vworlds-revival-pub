'////////////////////////////////////////////////////////////////////////
'//  Function:	WordBreak
'//  Purpose:  	Breaks a string of words into the size specified in intMaxLen.
'//				Respects HREF's and breaks around them.
'//	 Inputs:	strText 	- the original string to be operated on.
'//				intMaxLenth	- the max length of a string, 0 goes with
'//							inMaxLenDefault
'////////////////////////////////////////////////////////////////////////

function WordBreak(strText,intMaxLen)
	dim intStartChar, intTextLen, intBreakAt, intSpaceAt, intLineLineBreakAt, intSpacerLen, strBreak
	dim intHREFStart, intHREFEnd, strLeftText, strRightText, intCutChar
	CONST strATag = "</a>"
	CONST intMaxLenDefault = 35

	if intMaxLen = 0 then intMaxLen = intMaxLenDefault
	strBreak = " "
	intStartChar = 1
	' appending a space so we will find at least one
	strText = strText & " " 
	intTextLen = Len(strText)
	intSpacerLen = 1
	' this will go until the last space that was appended to the word		
	do while inStr(intStartChar,strText," ") <> 0
		intHREFStart = 0
		intHREFEnd = 0
		' the position of the space 
		intSpaceAt = inStr(intStartChar,strText," ")
		if intSpaceAt - intStartChar > intMaxLen then
			intLineBreakAt = inStr(intStartChar,strText,vbCR)
			if (intLineBreakAt < intSpaceAt) and (intLineBreakAt > 0) then
				intSpaceAt = intLineBreakAt
			end if
		end if
		' when the break position minus the intStartChar is greater than the max allowed,
		' we need to insert a space
		if intSpaceAt - intStartChar > intMaxLen then
			' do not break URLs, img src paths or onclick names
			intHREFStart = inStr(intStartChar, LCase(strText), "href")
			if intHREFStart = 0 then intHREFStart = inStr(intStartChar, LCase(strText), "src")
			if intHREFStart = 0 then intHREFStart = inStr(intStartChar, LCase(strText), "onclick")

'			if inStr(intStartChar, LCase(strText), "href") then
'				intHREFStart = inStr(intStartChar, LCase(strText), "href") 
'			end if
'			if inStr(intStartChar, LCase(strText), "</a") then
'				intHREFStart = inStr(intStartChar, LCase(strText), "</a")
'			end if

			' special handling for embedded href tags
			' if there is an href
			if intHREFStart > 0 then
				' find the next > (the end of the tag)
				intHREFEnd = inStr(intHREFStart, strText, ">")				
			end if
			
			' for those with a href, dont break in the middle of the url
			' reset the intStartChar after the href and send back thru
			if intHREFEnd >= intStartChar + intMaxLen -1 then 
				intCutChar = intHREFEnd
				intStartChar = intHREFEnd
			' for non href long words, go ahead and break whereever
			else
			    intCutChar = intStartChar + intMaxLen
				intStartChar = intStartChar + intMaxLen + intSpacerLen
				strLeftText = ""
				strRightText = ""
				' special case for </a> tags, to break around them
				if InStr(LCase(strText), strATag) then
					intBeginATag = InStr(Lcase(strText),strATag)
					intEndATag = InStr(Lcase(strText),strATag) + Len(strATag)-1
				end if
				if intBeginATag <= intCutChar and _
				  intEndATag >= intCutChar then
				  	intCutChar = intEndATag
				end if
				'left of the cut char and right of the cut char
				strLeftText = Left(strText, intCutChar)
				strRightText = Mid(strText, intCutChar + 1, intTextLen)
				' add the strBreak
				strText = strLeftText & strBreak & strRightText
				' add the length of the spacer
				intTextLen = intTextLen + intSpacerLen
			end if
		else
			' assign a new start char, after the next space 
            if intStartChar > 0 then
				intStartChar = intSpaceAt + 1
			end if			
		end if
	loop 
	
	WordBreak = Left(strText,Len(strText)-1)
end function
