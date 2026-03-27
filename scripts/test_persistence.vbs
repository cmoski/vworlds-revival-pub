' test_persistence.vbs - Test save/reload cycle
' Run with: C:\Windows\SysWOW64\cscript.exe /nologo test_persistence.vbs [save|verify]
' Phase 1 (save):  Create world, set a marker property, SaveDatabase
' Phase 2 (verify): Reconnect to same world, check marker property exists
Option Explicit
On Error Resume Next

Dim Client, World, Room, Global
Dim mode

If WScript.Arguments.Count > 0 Then
    mode = LCase(WScript.Arguments(0))
Else
    mode = "save"
End If

Set Client = CreateObject("VWSYSTEM.Client.1")
If Err.Number <> 0 Then : WScript.Echo "FAIL: " & Err.Description : WScript.Quit 1 : End If
Client.Initialize : Err.Clear

If mode = "save" Then
    ' --- PHASE 1: Create world (ConnectLocal) and save ---
    WScript.Echo "=== Phase 1: Create and Save ==="

    Set World = Client.ConnectLocal("PersistTest")
    If Err.Number <> 0 Then : WScript.Echo "FAIL ConnectLocal: " & Err.Description : WScript.Quit 1 : End If
    WScript.Echo "Connected to PersistTest"

    World.CreateCOMModule "Multimedia", "VWSYSTEM.MultimediaEx.1", 3 : Err.Clear
    World.CreateCOMModule "Foundation", "VWEXEMP.FoundationExemplars.1", 3 : Err.Clear

    ' Create a room with a marker property
    Set Room = World.CreateInstance("TestRoom", World.Exemplar("Room"))
    If Err.Number <> 0 Then : WScript.Echo "FAIL Room: " & Err.Description : WScript.Quit 1 : End If
    World.Global.DefaultRoom = Room : Err.Clear
    Room.GeometryName = "" : Err.Clear

    ' Set marker on the Room (we created it, so we have write access)
    Room.Description = "PersistenceMarker_12345"
    If Err.Number <> 0 Then
        WScript.Echo "WARN: Room.Description set failed: " & Err.Description
        Err.Clear
    Else
        WScript.Echo "Set Room.Description = 'PersistenceMarker_12345'"
    End If
    ' Verify it stuck
    Dim checkDesc
    checkDesc = Room.Description
    WScript.Echo "Readback Room.Description = '" & checkDesc & "'"

    ' Create an artifact to verify object persistence
    Dim obj
    Set obj = World.CreateInstance("PersistCube", World.Exemplar("Artifact"))
    If Err.Number <> 0 Then
        WScript.Echo "WARN: Artifact create: " & Err.Description
        Err.Clear
    Else
        obj.MoveInto Room : Err.Clear
        WScript.Echo "Created PersistCube in TestRoom"
    End If

    ' Save
    World.SaveDatabase
    If Err.Number <> 0 Then
        WScript.Echo "FAIL SaveDatabase: " & Err.Description
        WScript.Quit 1
    End If
    WScript.Echo "SaveDatabase succeeded!"

    ' Verify the .vwc file exists
    Dim fso
    Set fso = CreateObject("Scripting.FileSystemObject")
    Dim vwcPath
    vwcPath = "F:\VWorlds\Microsoft Virtual Worlds\Worlds\persisttest.vwc"
    If fso.FileExists(vwcPath) Then
        Dim f
        Set f = fso.GetFile(vwcPath)
        WScript.Echo "VWC file: " & vwcPath & " (" & f.Size & " bytes)"
    Else
        WScript.Echo "WARN: VWC file not found at " & vwcPath
    End If

    WScript.Echo "=== Phase 1 DONE. Now restart server and run with 'verify' ==="

ElseIf mode = "verify" Then
    ' --- PHASE 2: Connect to server and verify ---
    WScript.Echo "=== Phase 2: Verify Persistence ==="

    Client.ConnectToServer "localhost", True
    If Err.Number <> 0 Then : WScript.Echo "FAIL ConnectToServer: " & Err.Description : WScript.Quit 1 : End If

    Set World = Client.Connect("localhost/PersistTest")
    If Err.Number <> 0 Then : WScript.Echo "FAIL Connect: " & Err.Description : WScript.Quit 1 : End If
    WScript.Echo "Connected to world"

    ' Must log in to receive full object graph from server
    Dim User
    Set User = World.Connect("Verifier", "")
    If Err.Number <> 0 Then
        WScript.Echo "WARN: World.Connect (login): " & Err.Description
        Err.Clear
    Else
        WScript.Echo "Logged in as Verifier"
    End If

    ' Check world version (always exists on Global)
    Dim ver
    ver = World.Version
    If Err.Number <> 0 Then
        WScript.Echo "INFO: World.Version error: " & Err.Description
        Err.Clear
    Else
        WScript.Echo "World.Version = '" & ver & "'"
    End If

    ' Check Global properties — these survive in the .vwc
    Dim g
    Set g = World.Global
    If Err.Number <> 0 Then
        WScript.Echo "FAIL: World.Global: " & Err.Description
        Err.Clear
    Else
        WScript.Echo "PASS: World.Global accessible"

        ' Check DefaultSpriteFile (set during creation by our VBS)
        Dim spf
        spf = g.DefaultSpriteFile
        If Err.Number <> 0 Then
            WScript.Echo "INFO: DefaultSpriteFile: " & Err.Description
            Err.Clear
        Else
            WScript.Echo "Global.DefaultSpriteFile = '" & spf & "'"
            If spf = "default.spr" Then
                WScript.Echo "PASS: DefaultSpriteFile survived restart!"
            End If
        End If

        ' Check Description (we couldn't set this due to security, but check what it is)
        Dim gDesc
        gDesc = g.Description
        If Err.Number <> 0 Then
            WScript.Echo "INFO: Global.Description: " & Err.Description
            Err.Clear
        Else
            WScript.Echo "Global.Description = '" & gDesc & "'"
        End If

        ' Check DefaultRoom — it's an object reference, should persist
        Dim dr
        Set dr = g.DefaultRoom
        If Err.Number <> 0 Then
            WScript.Echo "INFO: DefaultRoom: " & Err.Description
            Err.Clear
        Else
            If dr Is Nothing Then
                WScript.Echo "FAIL: DefaultRoom is Nothing"
            Else
                Dim drName
                drName = dr.Name
                If Err.Number <> 0 Then
                    WScript.Echo "INFO: DefaultRoom.Name: " & Err.Description
                    Err.Clear
                Else
                    WScript.Echo "PASS: DefaultRoom.Name = '" & drName & "' (room survived!)"
                End If

                ' Check our marker on the room
                Dim drDesc
                drDesc = dr.Description
                If Err.Number <> 0 Then
                    WScript.Echo "INFO: Room.Description: " & Err.Description
                    Err.Clear
                ElseIf drDesc = "PersistenceMarker_12345" Then
                    WScript.Echo "PASS: Room.Description = '" & drDesc & "' (MARKER SURVIVED RESTART!)"
                Else
                    WScript.Echo "INFO: Room.Description = '" & drDesc & "'"
                End If
            End If
        End If
    End If

    WScript.Echo "=== Phase 2 DONE ==="
Else
    WScript.Echo "Usage: test_persistence.vbs [save|verify]"
    WScript.Quit 1
End If

WScript.Quit 0
