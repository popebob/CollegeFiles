Public Class Homework4Form

    Function PayRate(ByVal Pieces As Integer)
        Dim Rate As Single
        Select Case Pieces
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
        AboutBox1.Show()
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
        Summary.TotalQuantityTextBox.Text = (Int(Summary.TotalQuantityTextBox.Text) + Quantity).ToString
        Summary.TotalPayTextBox.Text = (Val((Mid(Summary.TotalPayTextBox.Text, 2)).Replace(",", "")) + (rate * Quantity)).ToString("C")
        Summary.TotalEmployeesTextBox.Text = (Val(Summary.TotalEmployeesTextBox.Text) + 1).ToString
        Summary.AveragePayTextBox.Text = (Summary.TotalPayTextBox.Text / Summary.TotalEmployeesTextBox.Text).ToString("C")
    End Sub

    Private Sub EntriesToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles EntriesToolStripMenuItem.Click
        NameTextBox.Text = ""
        QuantityTextBox.Text = ""
        NameTextBox.Focus()
    End Sub

    Private Sub AllToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles AllToolStripMenuItem.Click
        If MsgBox("Clear ALL Entries?", vbYesNo, "CLEAR ALL?") = MsgBoxResult.Yes Then
            EntriesToolStripMenuItem_Click(Nothing, Nothing)
            Summary.TotalEmployeesTextBox.Text = "0"
            Summary.TotalPayTextBox.Text = "0"
            Summary.TotalQuantityTextBox.Text = "0"
            Summary.AveragePayTextBox.Text = "0"

        End If
    End Sub

    Private Sub LogoToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles LogoToolStripMenuItem.Click
        If LogoToolStripMenuItem.Checked = False Then
            LogoToolStripMenuItem.Checked = True
            LogoPictureBox.Visible = True
        Else
            LogoPictureBox.Visible = False
            LogoToolStripMenuItem.Checked = False
        End If

    End Sub

    Private Sub SloganToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles SloganToolStripMenuItem.Click
        If SloganToolStripMenuItem.Checked = False Then
            SloganLabel.Visible = True
            SloganToolStripMenuItem.Checked = True
        Else
            SloganToolStripMenuItem.Checked = False
            SloganLabel.Visible = False
        End If
    End Sub

    Private Sub SummaryToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles SummaryToolStripMenuItem.Click
        Summary.Show()
    End Sub
End Class
