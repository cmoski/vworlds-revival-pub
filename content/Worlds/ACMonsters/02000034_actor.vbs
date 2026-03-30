' VWorlds Actor creation script for AC Setup 02000034
' 17 bones

' Assumes World and Room are already set up

Dim actor
Set actor = World.CreateInstance("AC_02000034", World.Exemplar("Actor"))
actor.MoveInto Room
actor.InitializeGraphics "02000034.x", 0.0, 0.0, 0.0, 0.0, 0.0, 1.0

' Joint names available for SetJointRotation:
'   Bone0 (bone 0, parent: Bone13)
'   Bone1 (bone 1, parent: Bone0)
'   Bone2 (bone 2, parent: Bone1)
'   Bone3 (bone 3, parent: Bone2)
'   Bone4 (bone 4, parent: Bone3)
'   Bone5 (bone 5, parent: Bone4)
'   Bone6 (bone 6, parent: Bone5)
'   Bone7 (bone 7, parent: Bone6)
'   Bone8 (bone 8, parent: Bone13)
'   Bone9 (bone 9, parent: Bone8)
'   Bone10 (bone 10, parent: Bone9)
'   Bone11 (bone 11, parent: Bone13)
'   Bone12 (bone 12, parent: Bone11)
'   Bone13 (bone 13, parent: Bone12)
'   Bone14 (bone 14, parent: Bone1)
'   Bone15 (bone 15, parent: Bone10)
'   Bone16 (bone 16, parent: Bone13)

' Example: wave gesture
' For i = 0 To 30
'     angle = Sin(i * 0.2) * 1.5
'     actor.SetJointRotation "Bone4", angle
'     WScript.Sleep 33
' Next
