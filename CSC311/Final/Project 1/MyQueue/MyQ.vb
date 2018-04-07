Public Class MyQueueForm
    Dim MyQ As New MyQueue

    Private Sub PushButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PushButton.Click
        If InputTextBox.Text = "" Then
            MessageBox.Show("Enter something to push !! ")
            Exit Sub
        End If
        MyQ.Push(Int(InputTextBox.Text))
        DisplayListBox.Items.Add(MyQ.Back())
        SizeLabel.Text = Int(MyQ.Size())
    End Sub

    Private Sub PopButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PopButton.Click
        If MyQ.Pop() Then
            DisplayListBox.Items.RemoveAt(0)
        End If
    End Sub

    Private Sub ClearButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ClearButton.Click
        MyQ.Clear()
        DisplayListBox.Items.Clear()
        SizeLabel.Text = 0
    End Sub

    Private Sub EmptyButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles EmptyButton.Click
        MessageBox.Show(MyQ.Empty)
    End Sub

    Private Sub FirstButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles FirstButton.Click
        MessageBox.Show(MyQ.Front)
    End Sub

    Private Sub BackButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BackButton.Click
        MessageBox.Show(MyQ.Back)
    End Sub

End Class
