option explicit


sub ant_click (hwnd, x, y)

	world.trace "sub ant-click called on object "&this.name&"..."

	world.ShowURLEx "Ant Control", "Ant Control", _       
	"sdk\library\html\_ScriptTutorial\tutexample.htm", _  
	world.user, 80,80,350,380	
		
	dim result
	result = this.invokesupermethod(Array(hwnd,x,y))
end sub


sub ant_done_moving ()
	world.trace "called sub ant_done_moving() as callback for position change"
	world.fireUIevent this, "ant_control_showposition"  
						'this is the command
						'that notifies any external
						'web pages listening in on a 
						'v-world. We can't know
						'if there are any, but
						'if there are the scripts
						'inside them will
						'get our custom message
						'and decide what to do with it
end sub


sub install (module)

end sub