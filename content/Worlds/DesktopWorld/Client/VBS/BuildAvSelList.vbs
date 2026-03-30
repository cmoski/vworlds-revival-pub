option explicit
CONST strAllFriends = "All My Friends"

'////////////////////////////////////////////////////////////////////////
'//  Sub:		BuildAvSelList
'//  Purpose:  	Populates a select box with all avatar names in ABC order.
'//				Also adds "All My Friends" at the top, with a separator.
'//	 Inputs:	blnRecipSel - true if there is a default selection in mind
'//  Called by:	CartBalloons.htm:window_onLoad
'//				CartFlowers.htm:window_onLoad
'//				NoteSend.htm:refreshUserList
'////////////////////////////////////////////////////////////////////////
sub BuildAvSelList(blnRecipSel)
	dim avatar, userId, opt, lstFriends

	dim i, count
	count = userlist.length
	for i = 0 to count
		userlist.remove(0)
	next

	userId = world.user.Id

	for each avatar in world.user.Container.Avatars
		Dim intCount, PosInList
		PosInList = UserList.length
		For intCount = 0 To UserList.length - 1
			If StrComp(avatar.Name, UserList.options.item(intCount).text, vbTextCompare) = -1 Then
				PosInList = intCount
				Exit For
			End If
		Next
		set opt = document.CreateElement("OPTION")
		opt.value = avatar.Id
		opt.text = avatar.Name
			
		if blnRecipSel then
			if avatar.Id = recipient then opt.selected = true
		end if
		userList.add opt, posinlist
	next
	if top.ClientUserPtr.profile.IsValid("Friends") then
		set lstFriends = top.ClientUserPtr.profile.keyvalue("Friends")		
		if lstFriends.count > 0 then
			set opt = document.CreateElement("OPTION")
			opt.value = -1
			opt.text = strAllFriends
			userList.add opt, 0
			set opt = document.CreateElement("OPTION")
			opt.value = 0
			opt.text = "-----------------------------"
			userList.add opt, 1
		end if
	end if
	
	' desired avatar is not available; may have disconnected
	if blnRecipSel then
		if userList.selectedIndex = -1 then recipient = 0
		curReceiver = userList.selectedIndex
	else
		userList.selectedIndex = 0
	end if
end sub

'////////////////////////////////////////////////////////////////////////
'//  Sub:		CheckReceiver
'//  Purpose:  	move the userList selection up or down if user selects the separator
'//  Called by:	CartBalloons.htm:userList onChange handler
'//				CartFlowers.htm:userList onChange handler
'//				NoteSend.htm:userList onChange handler
'////////////////////////////////////////////////////////////////////////
sub CheckReceiver
	if userList.options(userList.selectedIndex).value = 0 then
		userList.selectedIndex = userList.selectedIndex - 1
	end if
end sub
