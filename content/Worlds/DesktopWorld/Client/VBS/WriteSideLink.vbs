'///////////////////////////////////////////////////////////////////////
'// Sub:	WriteSideLink
'// Purpose:	To dynamically insert a sidelink button span with the
'// 			appropriate attributes.
'///////////////////////////////////////////////////////////////////////
option explicit
CONST bltArrowR = "4"
CONST bltArrowD = "6"
CONST bltCube = "<"
CONST bltDash = "-"

sub WriteSideLink(inID, inClass, inLinkName, inClickFunc, inBltStyle)
	dim elem 
	set elem = document.createElement("span")
	elem.id = inID
	elem.className = inClass
	if InStr(LCase(inClass),"menuiii") = 0 then
		elem.setAttribute "origClass", inClass
		elem.setAttribute "hoverClass", inClass & "_MO"
		if inBltStyle = 1 then
			elem.setAttribute "clickClass", inClass & "_CLK"
		else
			elem.setAttribute "clickClass", inClass & "_X_CLK"
		end if
	end if
	elem.setAttribute "func", inClickFunc
	elem.style.display = "block"
	elem.innerText = inLinkName
	document.all.SideLinks.insertAdjacentElement "BeforeEnd", elem

	' insert notes count span
	if elem.id = "lnkMyNotes" then 
		dim NotesCount
		set NotesCount = document.createElement("span")
		NotesCount.innerText = " (0)"
		NotesCount.id = "NotesCount"
		document.all.item(elem.id).insertAdjacentElement "BeforeEnd", NotesCount	
		set NotesCount = nothing
		' insert the new note
		dim imgNewNote
		set imgNewNote = document.createElement("img")
		imgNewNote.src = "../Images/icnNewThing.gif"
		imgNewNote.id = "imgNewNote"
		imgNewNote.className = "NewImg"
		document.all.item(elem.id).insertAdjacentElement "BeforeEnd", imgNewNote	
		set imgNewNote = nothing
	end if
	'  insert gift count span
	if elem.id = "lnkMyGifts" then 
		dim GiftsCount
		set GiftsCount = document.createElement("span")
		GiftsCount.innerText = " (0)"
		GiftsCount.id = "GiftsCount"
		document.all.item(elem.id).insertAdjacentElement "BeforeEnd", GiftsCount	
		set GiftsCount = nothing
		
		' insert the new gift img
		dim imgNewGift
		set imgNewGift = document.createElement("img")
		imgNewGift.src = "../Images/icnNewThing.gif"
		imgNewGift.id = "imgNewGift"
		imgNewGift.className = "NewImg"
		document.all.item(elem.id).insertAdjacentElement "BeforeEnd", imgNewGift	
		set imgNewGift = nothing
	end if

	' create the bullet to insert into
	if inBltStyle = 0 then exit sub
	
	dim bltElem 
	set bltElem = document.createElement("span")
	bltElem.id = "blt" & inID
	'msgbox bltElem.id
	
	' inBltStyle
	'0 = None	1 = Standard cube, MenuI	2 = Arrow, MenuI	3 = Cube, MenuII
	'4 = Arrow, MenuII	5 = Dash, MenuIII
	if inBltStyle = 2 then
		bltElem.innerText = bltArrowR
		bltElem.setAttribute "bltOrig", bltArrowR
		bltElem.setAttribute "bltClick", bltArrowD
		bltElem.className = "bltArrow"
	elseif inBltStyle = 3 then
		bltElem.innerText = bltCube
		bltElem.className = "bltCubeII"
	elseif inBltStyle = 4 then
		bltElem.innerText = bltArrowR
		bltElem.setAttribute "bltOrig", bltArrowR
		bltElem.setAttribute "bltClick", bltArrowD
		bltElem.className = "bltArrowII"
	elseif inBltStyle = 5 then
		bltElem.innerText = bltDash
		bltElem.className = "bltCubeIII"
	else 'inBltStyle = 1 then
	 	bltElem.innerText = bltCube
		bltElem.className = "bltCube"
	end if
	
	'document.all.SideLinks.insertAdjacentElement "BeforeEnd", elem
	elem.insertAdjacentElement "afterBegin", bltElem
	set elem = nothing
	set bltElem = nothing
end sub 'WriteSideLink
'///////////////////////////////////////////////////////////////////////