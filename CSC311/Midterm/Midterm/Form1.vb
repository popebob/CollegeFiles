'Cody Adams
'CSC311-01
'Midterm Project
'Winter 2010

Public Class payrollForm
    'I realized that I since my file location could be stored in the control's propety list,
    'the user could pick a file once and I could call it whenever from wherever
    'so I decided to make the program reparse the text each time a sort is needed.  This allowed
    'me to avoid a global array and still have dynamic control flow
    'Performance was good even with large files in my testing

    Public Function CalcPay() As Integer
        Dim iFile As System.IO.StreamReader     'input file handle
        Dim oFile As System.IO.StreamWriter     'output file handle
        Dim count As Integer                    'total record count, not used at this time
        Dim name As String                      'intermediate so string library methods are available
        Dim EmpOutput As String                 'intermediate so string library methods are available
        Dim EmpData As Employee                 'Data Structure for Employee Data
        Dim WriteTime As String                 'intermediate so string library methods are available
        Dim progres As Integer                  'for output feedback

        'Initialize count, read last initial
        name = nameTextBox.Text
        count = 0
        If openfileDialog.FileName <> "Input Data File" Then    'Check if its still the default value
            If savefileDialog.FileName <> "Output Data File" Then   'Check if its still the default value
                oFile = IO.File.AppendText(savefileDialog.FileName) 'open output file
                iFile = IO.File.OpenText(openfileDialog.FileName)   'open input file
                oFile.AutoFlush = True                              'always write buffer to file
                WriteTime = "Written on: " & DateValue(Now) & " at: " & TimeValue(Now)  'timestamp
                oFile.WriteLine(Chr(13))                            'Carriage return to seperate new entry
                oFile.WriteLine(WriteTime)                          'write timestamp
                oFile.WriteLine("Searching for : " & name)          'write display context
                'Output format : name       hours   OT  rate	pay 
                EmpOutput = "Name" & Space(18) & "Hours OverTime Hourly Rate Net Pay"
                oFile.WriteLine(EmpOutput)  'write header
                While iFile.Peek <> -1      'while the next item exists (goes to EOF)
                    count = count + 1
                    'Parse data records in structure
                    EmpData.EmpName = iFile.ReadLine()
                    EmpData.Phone = iFile.ReadLine()
                    EmpData.Address = iFile.ReadLine()
                    EmpData.HoursWorked = iFile.ReadLine()
                    EmpData.Rate = iFile.ReadLine()
                    'Determine search context, process records accordingly
                    If name = "" Then   'nameTextBox is blank, display all records
                        If EmpData.HoursWorked > 40 Then    'check for overtime, process pay
                            EmpData.OTHours = EmpData.HoursWorked - 40
                            EmpData.RegHours = EmpData.HoursWorked - EmpData.OTHours
                            EmpData.Pay = (EmpData.RegHours * EmpData.Rate) + (EmpData.OTHours * (EmpData.Rate * 1.5))
                        Else    'no overtime, process pay
                            EmpData.RegHours = EmpData.HoursWorked
                            EmpData.Pay = EmpData.RegHours * EmpData.Rate
                        End If
                        'ouput to ListBoxes, big advantage of structure
                        nameListBox.Items.Add(EmpData.EmpName)
                        hoursListBox.Items.Add(EmpData.RegHours)
                        otListBox.Items.Add(EmpData.OTHours)
                        rateListBox.Items.Add(EmpData.Rate)
                        payListBox.Items.Add(EmpData.Pay)
                        'To match : Name               Hours OverTime Hourly Rate Net Pay
                        'truncate long name
                        If Len(EmpData.EmpName) > 22 Then
                            EmpData.EmpName = Strings.Left(EmpData.EmpName, 21)
                        End If
                        'Build output, dump to file
                        EmpOutput = EmpData.EmpName & Space(22 - Len(EmpData.EmpName)) & EmpData.HoursWorked & Space(4) & EmpData.OTHours & Space(8) & "$" & EmpData.Rate & Space(12 - Len(Str$(EmpData.Rate))) & "$" & EmpData.Pay
                        oFile.WriteLine(EmpOutput)
                    Else        'nameTextBox is not blank, get character and process accordingly
                        If StrComp((EmpData.EmpName.Substring(0, 1)), (name)) = 0 Then
                            If EmpData.HoursWorked > 40 Then        'check for overtime, process pay
                                EmpData.OTHours = EmpData.HoursWorked - 40
                                EmpData.RegHours = EmpData.HoursWorked - EmpData.OTHours
                                EmpData.Pay = (EmpData.RegHours * EmpData.Rate) + (EmpData.OTHours * (EmpData.Rate * 1.5))
                            Else    'no overtime, process pay
                                EmpData.RegHours = EmpData.HoursWorked
                                EmpData.Pay = EmpData.RegHours * EmpData.Rate
                            End If
                            'ouput to ListBoxes, big advantage of structure
                            nameListBox.Items.Add(EmpData.EmpName)
                            hoursListBox.Items.Add(EmpData.RegHours)
                            otListBox.Items.Add(EmpData.OTHours)
                            rateListBox.Items.Add(EmpData.Rate)
                            payListBox.Items.Add(EmpData.Pay)
                            'To match : Name               Hours OverTime Hourly Rate Net Pay
                            'truncate long name
                            If Len(EmpData.EmpName) > 22 Then
                                EmpData.EmpName = Strings.Left(EmpData.EmpName, 21)
                            End If
                            'Build output, dump to file
                            EmpOutput = EmpData.EmpName & Space(22 - Len(EmpData.EmpName)) & EmpData.HoursWorked & Space(4) & EmpData.OTHours & Space(8) & "$" & EmpData.Rate & Space(12 - Len(Str$(EmpData.Rate))) & "$" & EmpData.Pay
                            oFile.WriteLine(EmpOutput)
                        End If
                    End If
                    EmpData.OTHours = 0     'only value that is not always overwritten, clean-up manually
                End While
                oFile.Close()   'mind your manners, close the door behind you, notify user
                outputLabel.Text = "Data successfully output to: ..." & Strings.Mid(savefileDialog.FileName, InStrRev(savefileDialog.FileName, "\", -1))
                outputProgressBar.Visible = True
                outputLabel.Visible = True
                For progres = 0 To 100 Step 20  'could never get a difference in speed, but this code looks good
                    outputProgressBar.Value = progres
                Next
            Else    'Cancel clicked in saveFileDialog, clear form, report error
                nameListBox.Items.Clear()
                hoursListBox.Items.Clear()
                otListBox.Items.Clear()
                rateListBox.Items.Clear()
                payListBox.Items.Clear()
                outputLabel.Visible = False
                outputProgressBar.Visible = False
                MsgBox("Enter a file name to save output to!")
            End If
        Else    'Cancel clicked in openFileDialog, clear form, report error
            nameListBox.Items.Clear()
            hoursListBox.Items.Clear()
            otListBox.Items.Clear()
            rateListBox.Items.Clear()
            payListBox.Items.Clear()
            outputLabel.Visible = False
            outputProgressBar.Visible = False
            MsgBox("Enter a file name to get data from!")
        End If
        Return 0
    End Function

    Private Sub ExitToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ExitToolStripMenuItem.Click
        End
    End Sub

    Private Sub AboutToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles AboutToolStripMenuItem.Click
        MsgBox("Cody Adams" & Chr(13) & "CSC311-01" & Chr(13) & "Midterm" & Chr(13) & "Winter 2010")
    End Sub

    Private Sub OpenFileToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles OpenFileToolStripMenuItem.Click
        If (openfileDialog.ShowDialog() = DialogResult.OK) Then
            If (savefileDialog.ShowDialog() = DialogResult.OK) Then 'Reset form, process data
                nameListBox.Items.Clear()
                hoursListBox.Items.Clear()
                otListBox.Items.Clear()
                rateListBox.Items.Clear()
                payListBox.Items.Clear()
                outputLabel.Visible = False
                outputProgressBar.Visible = False
                CalcPay()
            Else    'Cancel clicked in saveFileDialog, clear form, report error
                nameListBox.Items.Clear()
                hoursListBox.Items.Clear()
                otListBox.Items.Clear()
                rateListBox.Items.Clear()
                payListBox.Items.Clear()
                outputLabel.Visible = False
                outputProgressBar.Visible = False
                MsgBox("Enter a file name to save output to!")
            End If
        Else    'Cancel clicked in openFileDialog, clear form, report error
            nameListBox.Items.Clear()
            hoursListBox.Items.Clear()
            otListBox.Items.Clear()
            rateListBox.Items.Clear()
            payListBox.Items.Clear()
            outputLabel.Visible = False
            outputProgressBar.Visible = False
            MsgBox("Enter a file name to get data from!")
        End If
    End Sub

    Private Sub payrollForm_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        MsgBox("Cody Adams" & Chr(13) & "CSC311-01" & Chr(13) & "Midterm" & Chr(13) & "Winter 2010")
    End Sub

    Private Sub nameTextBox_TextChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles nameTextBox.TextChanged
        'Real-time search is nifty, although this implementation can lead to writing to the file a lot
        'nameTextBox changed, re-process data, CalcPay handles file errors
        nameListBox.Items.Clear()
        hoursListBox.Items.Clear()
        otListBox.Items.Clear()
        rateListBox.Items.Clear()
        payListBox.Items.Clear()
        nameListBox.Items.Clear()
        hoursListBox.Items.Clear()
        otListBox.Items.Clear()
        rateListBox.Items.Clear()
        payListBox.Items.Clear()
        outputLabel.Visible = False
        outputProgressBar.Visible = False
        CalcPay()
    End Sub
End Class
