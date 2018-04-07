Imports System.IO

Public Class IncomeForm
    'Declare structure and variables
    Structure IncomeSurvey
        Dim id As Integer
        Dim numPersons As Integer
        Dim income As Decimal
        Dim residence As String
    End Structure
    'Declare structure that contains inforamtion
    'from IncomeSurvey structure
    Structure SurveyResults
        Dim results As IncomeSurvey
    End Structure
    'Declare variables to read file input, store structure variables 
    'into an array and a counter to return the number of data items
    Private input As StreamReader
    Private i(100) As SurveyResults
    Private resultCounter As Integer

    Private Function data_upto_comma(ByRef x As String) As String
        'This code retrieves data upto the 1st comma and also shrinks original string
        Dim i As Integer = 0
        Dim temp As String = ""
        Dim y As String = x
        Do While y.Substring(i, 1) <> ","
            i += 1
        Loop
        temp = y.Substring(0, i)
        'Strip out the data from string
        x = y.Substring(temp.Length() + 1, y.Length() - temp.Length() - 1)
        Return temp
    End Function
    'Get data from file one letter at a time, store with appropriate 
    'structure variable and convert if needed
    Private Sub get_data_from_IncomeSurvey(ByRef x As String, ByRef info As IncomeSurvey)
        info.id = Integer.Parse(data_upto_comma(x))
        info.numPersons = Integer.Parse(data_upto_comma(x))
        info.income = Decimal.Parse(data_upto_comma(x))
        info.residence = x
    End Sub

    Private Sub IncomeForm_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Dim resp As DialogResult
        Dim inputLine As String
        Dim j As Integer = 0

        'Prompt user for a input file name
        If input IsNot Nothing Then 'if file already open, close it
            input.Close()
        End If
        'User selects file to read
        OpenFileDialog1.InitialDirectory = Application.StartupPath
        resp = OpenFileDialog1.ShowDialog()

        If resp <> DialogResult.Cancel Then
            input = New StreamReader(OpenFileDialog1.FileName)
        Else
            'If user cancels file retrieval, close project
            MessageBox.Show("No file selected, project will close", "Closing Project", MessageBoxButtons.OK, MessageBoxIcon.Exclamation)
            Me.Close()
        End If
        'Read information one line at a time
        Do While input.Peek <> -1 'read from file line by line
            inputLine = input.ReadLine().ToString()
            get_data_from_IncomeSurvey(inputLine, i(j).results)
            j += 1
        Loop
        resultCounter = j

        'Close file after all data has been read
        input.Close()
    End Sub

    Private Sub ReportsToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ReportsToolStripMenuItem.Click
        'Variables to calculate total income and average income        
        Dim incomeTotal As Integer
        Dim AvgIncome As Decimal

        'Add items from data file to listboxes
        For r As Integer = 0 To resultCounter - 1
            idListBox.Items.Add(i(r).results.id)
            personListBox.Items.Add(i(r).results.numPersons)
            incomeListBox.Items.Add(i(r).results.income)
            resideListBox.Items.Add(i(r).results.residence)
        Next

        'Calculate total income
        For s As Integer = 0 To incomeListBox.Items.Count - 1
            incomeTotal += i(s).results.income
        Next

        'Calculate average income
        AvgIncome = incomeTotal / incomeListBox.Items.Count
        averageLabel.Text = "Average Income" & vbNewLine & AvgIncome.ToString("C")

        'Display income above and below average by income and/or id
        For t As Integer = 0 To idListBox.Items.Count - 1
            If i(t).results.income > AvgIncome Then
                abvIdListBox.Items.Add(i(t).results.id)
                abvIncomeListBox.Items.Add(i(t).results.income)
            ElseIf i(t).results.income < AvgIncome Then
                pvtyListBox.Items.Add(i(t).results.id)
            End If
        Next
    End Sub

    Private Sub ExitToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ExitToolStripMenuItem.Click
        'Exit the project
        Me.Close()
    End Sub
End Class
