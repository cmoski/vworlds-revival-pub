// This file is for script functions that can be used by both client and world wizard
// These check that avatar names are valid


//===========================================
//  Sub:		checkLength
//  Purpose:  	validate avatar name length
//  Called by:	vwStart.htm:OnDoneCreatingAvatar
//===========================================
function checkLength(name)
	{
	if ((name.length<3)||(name.length>12))
		return false;
	else
		return true;
	}


//===========================================
//  Sub:		checkChars
//  Purpose:  	checks for blanks or "&" chars in a name
//  Called by:	vwStart.htm:OnDoneCreatingAvatar
//===========================================

function checkChars(name)
	{
	var invalidCharacters = new Array();
	var returnVal = true;

	invalidCharacters[0] = " ";
	invalidCharacters[1] = "&";
	invalidCharacters[2] = "\\";
	invalidCharacters[3] = "/";
	invalidCharacters[4] = ":";
	invalidCharacters[5] = "?";
	invalidCharacters[6] = "\"";
	invalidCharacters[7] = "<";
	invalidCharacters[8] = ">";
	invalidCharacters[9] = "|";
	invalidCharacters[10]= "	";  //tab

	for (var i=0; i< invalidCharacters.length; i++)
		{
		if (name.indexOf(invalidCharacters[i])>-1)
			{
			returnVal = false;
			break;
			}
		}
	return returnVal;
	}
	
	