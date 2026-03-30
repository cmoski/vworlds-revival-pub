option explicit

'////////////////////////////////////////////////////////////////
'// Sub:		document_OnSelectStart
'// Purpose:	To prevent the user from selecting/highlighting
'//				content that is not to be highlighted.
'// Called by:	almost every page in the app
'////////////////////////////////////////////////////////////////
sub document_OnSelectStart
	dim i
	dim objElem
	set objElem = window.event.srcElement
	do until LCase(objElem.tagName) = "body"
		dim strCopyable
		strCopyable = objElem.getAttribute("Copyable")
		if strCopyable = "" or IsNull(strCopyable) then 
			if LCase(objElem.tagName) = "input" _
			or LCase(objElem.tagName) = "textarea" then
	 			if LCase(objElem.type) = "text" _
				or LCase(objElem.type) = "textarea" then
					exit sub
				end if
			end if
		elseif CBool(strCopyable) = true then 
			exit sub			
		end if
		set objElem = objElem.parentElement
	loop
	if LCase(objElem.tagName) = "body" then
		strCopyable = objElem.getAttribute("Copyable")
		if strCopyable = "" or IsNull(strCopyable) then 
			window.event.returnValue = false
		elseif CBool(strCopyable) = true then
			exit sub							
		end if
	end if
end sub 'document_OnSelectStart

'//////////////////////////////////////////////////////////////////