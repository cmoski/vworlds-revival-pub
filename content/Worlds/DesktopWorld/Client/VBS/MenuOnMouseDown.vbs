'////////////////////////////////////////////////////////////////////////
'//  Sub:  GoOnMouseDown()
'//  Purpose:  When the image is clicked, set the Class to the pressedClass
'//				image (if specified).  This is an alternative to the 
'//				regular behavior which doesn't work when envoking an x.click method
'////////////////////////////////////////////////////////////////////////

dim isNavigationOk
isNavigationOk = false
' Note: isNavigationOk is a hack to special-case the NavigationEnabled check below.
' The NavigationEnabled variable was originally used in sampleLinks.htm to allow certain
' functions (in-world destination links, overview, change camera angle) to lock each other out
' during execution.
' When this code was generalized into this .vbs file and used in other pages, it locked out
' functions in People.htm and MyProfile.htm during auto-navigation. Setting isNavigationOk = true
' in these pages overrides the lockout.

sub MenuOnMouseDown(element)
	dim ClickClass, btnFunc, btnSpan
	set btnSpan = element
	if btnSpan.className = "MenuII" then
		dim child
		for each child in btnSpan.children
			if child.className = "MenuII_Title" then
				set btnSpan = child			
			end if
		next
	end if		
	if top.NavigationEnabled or isNavigationOk then
		ClickClass = btnSpan.getAttribute ("clickClass")
		if ClickClass <> "" then
			dim elem
			for each elem in window.document.all
				' take care of bullets
				if elem.className = "bltArrow" and _
					btnSpan.getAttribute("origClass") = "MenuI" then
					dim bltOrig
					bltOrig = elem.getAttribute ("bltOrig")
					if bltOrig <> "" then
						elem.innerText = bltOrig
					end if
					if elem.parentElement.id = btnSpan.id then
						dim bltClick
						bltClick = elem.getAttribute ("bltClick")
						if bltClick <> "" then
				 			elem.innerText = bltClick
						end if
					end if					
				end if
				if elem.getAttribute("origClass") = btnSpan.getAttribute("origClass") then
					'if old selected container
					if elem.className = elem.getAttribute ("clickClass") then
						elem.className = elem.getAttribute ("origClass")
						elem.style.behavior = ""							
					end if
				end if
			next
			btnSpan.className = ClickClass
			btnFunc = btnSpan.getAttribute ("func")
			if btnFunc <> "" then
				execScript btnFunc, "vbscript"
			end if
    	end if
	end if
end sub	
