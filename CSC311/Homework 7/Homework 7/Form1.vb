Imports System.IO

Public Class Homework7Form
    'It's easier if these are global
    Public InputFile As StreamReader
    Public Number As Integer
    Public Cities() As City

    Private Sub LoadButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles LoadButton.Click
        'Reset form
        ComboBox1.Items.Clear()
        ComboBox2.Items.Clear()
        'Read the data file
        Dim x As Integer = 0
        Dim Position As Integer = 1
        Dim Line(x) As String
        'Open file, the dialog handles error control
        OpenFileDialog.ShowDialog()
        'Read first line to determine how many cities are in the file
        Number = Int(InputFile.ReadLine())
        'Adjust Array sizes not that we know how many Cities we are pushing into it
        ReDim Line(Number)
        ReDim Cities(Number)
        'Starting at Line 2, put all the data into an array to be parsed
        For x = 0 To Number - 1
            Line(x) = InputFile.ReadLine().ToString()
        Next
        'Close input file, we're done with it
        InputFile.Close()
        Dim temp As Integer = 0
        Dim oldPosition
        'Parse data into two-dimensional array
        For x = 0 To Number - 1
            'Reset position from last run
            Position = 1
            'VB makes you initialize like this
            Cities(x) = New City(Number)
            Do While Line(x).Substring(Position, 1) <> ","
                Position = Position + 1
            Loop
            'Get City Name from first field and populate the ComboBoxes with them
            Cities(x).Name = Mid(Line(x), 1, Position)
            ComboBox1.Items.Add(Cities(x).Name)
            ComboBox2.Items.Add(Cities(x).Name)
            'Step over comma and onto next chararcter
            Position = Position + 1
            oldPosition = Position
            'pull out each field until are have reached the maximum number of fields
            Do While temp < Number - 1
                Do While Line(x).Substring(Position, 1) <> ","
                    Position = Position + 1
                Loop
                'Step over comma
                oldPosition = oldPosition + 1
                Position = Position + 1
                'Get each distance
                Cities(x).Distances(temp) = Val(Mid(Line(x), oldPosition, (Position - oldPosition)))
                temp = temp + 1
            Loop
            'Parsing only up to last comma means you have to get the last field by hand
            Cities(x).Distances(temp) = Val(Mid(Line(x), Position + 1))
            temp = 0
        Next
    End Sub

    Private Sub OpenFileDialog1_FileOk(ByVal sender As System.Object, ByVal e As System.ComponentModel.CancelEventArgs) Handles OpenFileDialog.FileOk
        If OpenFileDialog.FileName = "" Then
            MessageBox.Show("Select a file to open!")
            Exit Sub
        Else
            If InputFile IsNot Nothing Then
                InputFile.Close()
            End If
            InputFile = New StreamReader(OpenFileDialog.FileName)
            Panel1.Visible = True
        End If
    End Sub

    Private Sub LookUpButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles LookUpButton.Click
        Dim StartCity As String
        Dim DestCity As String
        StartCity = ComboBox1.SelectedItem.ToString
        DestCity = ComboBox2.SelectedItem.ToString
        Dim x As Integer
        Dim StartIndex As Integer
        Dim DestIndex As Integer
        For x = 0 To Number - 1
            If Cities(x).Name = StartCity Then
                StartIndex = x
            End If
            If Cities(x).Name = DestCity Then
                DestIndex = x
            End If
        Next
        MessageBox.Show("Departure City is : " & StartCity & Chr(13) & "Destination City : " & DestCity & Chr(13) & "Distance : " & Cities(StartIndex).Distances(DestIndex))
    End Sub
End Class
