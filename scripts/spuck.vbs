' spuck.vbs - Create Spuck, the animated stick figure
' Run in the Command Window or via cscript after ConnectLocal
' Uses the Machine Gear as body, trees as arms, column as head

Dim room
Set room = World.Global.DefaultRoom

' Body — machine gear (looks like a torso)
Set body = World.CreateInstance("Spuck_Body", World.Exemplar("Artifact"))
body.MoveInto room
body.InitializeGraphics "SDK\Library\models\_ScriptTutorial\Machine Gear.x", 3.0, 0.8, 3.0, 0.0, 0.0, 1.0

' Head — column (cylindrical, head-like)
Set head = World.CreateInstance("Spuck_Head", World.Exemplar("Artifact"))
head.MoveInto room
head.InitializeGraphics "SDK\Library\models\interior\column-doric4.X", 3.0, 2.0, 3.0, 0.0, 0.0, 1.0

' Left arm — tree
Set larm = World.CreateInstance("Spuck_LeftArm", World.Exemplar("Artifact"))
larm.MoveInto room
larm.InitializeGraphics "SDK\Library\models\_EmptyLandscape\tree1.X", 2.0, 1.5, 3.0, 0.0, 0.0, 1.0

' Right arm — tree
Set rarm = World.CreateInstance("Spuck_RightArm", World.Exemplar("Artifact"))
rarm.MoveInto room
rarm.InitializeGraphics "SDK\Library\models\_EmptyLandscape\tree2.X", 4.0, 1.5, 3.0, 0.0, 0.0, 1.0

World.Trace "Spuck assembled! Look at position (3, 0, 3)"
