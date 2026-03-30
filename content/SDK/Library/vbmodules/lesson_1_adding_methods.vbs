option explicit


sub planet_click (hwnd, x, y)
	dim avector
	world.trace "sub planet_click called on object "&this.name&"..."
	set avector = world.global.createvector( rnd(), rnd(), rnd() )
	this.rotationaxis = avector
	this.rotationrate = (rnd()/3.0 - rnd()/3.0)
	dim result
	result = this.invokesupermethod(Array(hwnd,x,y))
end sub


sub install (module)

end sub
