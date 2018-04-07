Public Class Homework1Form

    Private Sub ExitButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ExitButton.Click
        Me.Close()
    End Sub

    Private Sub VisibleCheckBox_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles VisibleCheckBox.CheckedChanged
        Select Case VisibleCheckBox.Checked
            Case True
                DisplayTextBox.Visible = True
            Case False
                DisplayTextBox.Visible = False
        End Select
    End Sub

    Private Sub ClearButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ClearButton.Click
        NameTextBox.Text = ""
        MessageTextBox.Text = ""
        DisplayTextBox.Text = ""
        VisibleCheckBox.Checked = False
    End Sub

    Private Sub DisplayButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles DisplayButton.Click
        VisibleCheckBox.Checked = True
        DisplayTextBox.Text = NameTextBox.Text & " " & MessageTextBox.Text
    End Sub

    Private Sub RedRadioButton_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles RedRadioButton.CheckedChanged
        If RedRadioButton.Checked = True Then
            DisplayTextBox.ForeColor = Color.Red
        End If
    End Sub

    Private Sub GreenRadioButton_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles GreenRadioButton.CheckedChanged
        If GreenRadioButton.Checked = True Then
            DisplayTextBox.ForeColor = Color.Green
        End If
    End Sub

    Private Sub BlueRadioButton_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BlueRadioButton.CheckedChanged
        If BlueRadioButton.Checked = True Then
            DisplayTextBox.ForeColor = Color.Blue
        End If
    End Sub

    Private Sub BlackRadioButton_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BlackRadioButton.CheckedChanged
        If BlackRadioButton.Checked = True Then
            DisplayTextBox.ForeColor = Color.Black
        End If
    End Sub
End Class