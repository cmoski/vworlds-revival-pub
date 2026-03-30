option explicit

sub FirePieceMoved(hint, hintData)
	World.FireUIEvent this, "PieceMoved", array(this.Mover, this.PositionXY)
end sub
