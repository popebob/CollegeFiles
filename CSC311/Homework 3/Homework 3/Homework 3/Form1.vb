Public Class Homework3Form

    Function PayRate(ByVal Pieces As Integer)
        Dim Rate As Single
        Select Pieces
            Case 1 To 199
                Rate = 0.5
            Case 200 To 399
                Rate = 0.55
            Case 400 To 599
                Rate = 0.6
            Case Is > 599
                Rate = 0.65
        End Select
        Return Rate
    End Function

    Private Sub AboutToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles AboutToolStripMenuItem.Click
        MsgBox("Cody Adams" & Chr(13) & "CSC311-01" & Chr(13) & "Homework 3")
    End Sub

    Private Sub ExitToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ExitToolStripMenuItem.Click
        End
    End Sub

    Private Sub CalculateToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CalculateToolStripMenuItem.Click
        Dim rate As Double
        Dim Pay As Double
        Dim Quantity As Integer
        If NameTextBox.Text.Length = 0 Then
            MsgBox("Enter a Name!")
            Exit Sub
        End If
        If QuantityTextBox.Text.Length = 0 Then
            MsgBox("Enter the Number of Pieces Done!")
            Exit Sub
        End If
        Quantity = Int(QuantityTextBox.Text)
        rate = PayRate(Quantity)
        PayLabel.Text = (Quantity * rate).ToString("C")
        TotalQuantityTextBox.Text = (Int(TotalQuantityTextBox.Text) + Quantity).ToString
        TotalPayTextBox.Text = (Val((Mid(TotalPayTextBox.Text, 2)).Replace(",", "")) + (rate * Quantity)).ToString("C")
        TotalEmployeesTextBox.Text = (Val(TotalEmployeesTextBox.Text) + 1).ToString
        AveragePayTextBox.Text = (TotalPayTextBox.Text / TotalEmployeesTextBox.Text).ToString("C")
    End Sub

    Private Sub EntriesToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles EntriesToolStripMenuItem.Click
        NameTextBox.Text = ""
        QuantityTextBox.Text = ""
        NameTextBox.Focus()
    End Sub

    Private Sub AllToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles AllToolStripMenuItem.Click
        If MsgBox("Clear ALL Entries?", vbYesNo, "CLEAR ALL?") = MsgBoxResult.Yes Then
            EntriesToolStripMenuItem_Click(Nothing, Nothing)
            TotalEmployeesTextBox.Text = "0"
            TotalPayTextBox.Text = "0"
            TotalQuantityTextBox.Text = "0"
            AveragePayTextBox.Text = "0"

        End If
    End Sub
End Class
