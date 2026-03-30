option explicit

public DialogWin
set DialogWin = nothing

sub ShowDialog(strMsg,strBkg) 
	dim blnShowDialog	
	blnShowDialog = false 
	if DialogWin is nothing then
		blnShowDialog = true
	elseif DialogWin.Closed then
		blnShowDialog = true
	end if
	if blnShowDialog = true then
		set DialogWin = window.showModelessDialog("MsgBox.htm", strMsg, _
	  	"dialogHeight:97px;dialogWidth:250px;help:no;resizable:no;status:no") 		 
	end if
end sub

sub ShowConfirmation(strMsg,strBkg) 
	dim blnShowDialog	
	blnShowDialog = false 
	if DialogWin is nothing then
		blnShowDialog = true
	elseif DialogWin.Closed then
		blnShowDialog = true
	end if
	if blnShowDialog = true then
		on error resume next
		set DialogWin = window.showModalDialog("MsgBox.htm", strMsg, _
	  	"dialogHeight:97px;dialogWidth:250px;help:no;resizable:no;status:no") 		 
	end if
end sub
