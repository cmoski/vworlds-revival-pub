Sub Install( module )

	' Create the SubDoor exemplar
	Dim SubDoor
	Dim SubThingExemplar
	set SubThingExemplar = Exemplar ("SubThing")
	set SubDoor = CreateExemplar("SubDoor", SubThingExemplar)

	' Create SubDoor menu
	Dim SubThingMenu
	Dim SubDoorMenu
	set SubThingMenu = SubThingExemplar.menu
	set SubDoorMenu = Global.CreateMenu
	SubThingMenu.copyto SubDoorMenu

	' Add properties to SubDoor and set their default values
	SubDoor.AddProperty "CoordTop"
	SubDoor.AddProperty "CoordLeft"
	SubDoor.AddProperty "CoordRight"
	SubDoor.CoordTop = 2.2
	SubDoor.CoordLeft = 0.0
	SubDoor.CoordRight = -1.0

	' Add methods to SubDoor
	SubDoor.CreateAndAddMethod world.METHOD_SERVER, module, "OpenDoor"
	SubDoor.CreateAndAddMethod world.METHOD_SERVER, module, "CloseDoor"
	SubDoor.CreateAndAddMethod world.METHOD_CLIENT, module, "SetPosAndDir"

	' Set duration for movement.
	SubDoor.PositionDuration = 3000
	SubDoor.DirectionDuration = 3000
	SubDoor.ScaleDuration = 3000

end sub

sub OpenDoor

	Select Case this.container.MotionType
		case "SwingIn"
			this.Direction.set -0.9, 0.0, 0.3
		case "Revolving"
			this.Direction.set 0.0, 0.0, 1.0
		case "SquashLeft"
			this.Position.set (this.CoordLeft), 0.0, 0.0
			this.Direction.set 0.0, 0.0, -1.0
			this.Scale.set 0.01, 1.0, 0.01
		case "SquashRight"
			this.Position.set (this.CoordRight), 0.0, 0.0
			this.Direction.set 0.0, 0.0, -1.0
			this.Scale.set 0.01, 1.0, 0.01
		case "SquashUp"
			this.Position.set 0.0, (this.CoordTop), 0.0
			this.Direction.set 0.0, 0.0, -1.0
			this.Scale.set 1.0, 0.01, 1.0
		case "SlideLeft"
			this.Position.set (this.CoordLeft + (this.CoordLeft-this.CoordRight)), 0.0, 0.0
			this.Direction.set 0.0, 0.0, -1.0
		case "SlideRight"
			this.Position.set (this.CoordRight), 0.0, 0.0
			this.Direction.set 0.0, 0.0, -1.0
		case "SlideUp"
			this.Position.set 0.0, (this.CoordTop), 0.0
			this.Direction.set 0.0, 0.0, -1.0
		case "other"
			'do nothing
	end select

end sub

sub CloseDoor

	this.Position.set 0.0, 0.0, 0.0
	this.Direction.set 0.0, 0.0, -1.0
	this.Scale.set 1.0, 1.0, 1.0

end sub

sub SetPosAndDir(xp, yp, zp, xd, yd, zd)

	this.position.set xp, yp, zp
	this.direction.set xd, yd, zd

end sub