Public Class MyListForm
    Dim List As New MyList

    Private Sub DisplayButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles DisplayButton.Click
        ListBox1.Items.Clear()
        Dim x As Integer
        If List.Size() > 0 Then
            For x = 0 To (List.Size() - 1)
                ListBox1.Items.Add(List.middle(x))
            Next
        End If
    End Sub

    Private Sub PushFrontButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PushFrontButton.Click
        List.push_front(Int(InputTextBox.Text))
    End Sub

    Private Sub PushBackButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PushBackButton.Click
        List.push_back(Int(InputTextBox.Text))
    End Sub

    Private Sub CopyButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CopyButton.Click
        Dim x As Integer
        Dim newlist As New MyList
        ListBox2.Items.Clear()
        newlist = List.make_copy
        If newlist.Size() > 0 Then
            For x = 0 To (List.Size() - 1)
                ListBox2.Items.Add(List.middle(x))
            Next
        Else
            MessageBox.Show("Original List Empty, Copy Not Done !! ")
        End If
    End Sub

    Private Sub ClearButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ClearButton.Click
        List.Clear()
        ListBox1.Items.Clear()
    End Sub

    Private Sub AppendButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles AppendButton.Click
        List.append(Int(InputTextBox.Text))
    End Sub

    Private Sub PrependButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PrependButton.Click
        List.prepend(Int(InputTextBox.Text))
    End Sub

    Private Sub InsertButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles InsertButton.Click
        Dim temp As Integer
        temp = Int(InputBox("Insert at which Index ?? ", "Insert", 0))
        List.insert(temp, Int(InputTextBox.Text))
    End Sub

    Private Sub UniqueButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles UniqueButton.Click
        Dim newlist As MyList
        ListBox2.Items.Clear()
        If List.Size() > 0 Then
            newlist = List.unique()
            For x = 0 To (newlist.Size() - 1)
                ListBox2.Items.Add(newlist.middle(x))
            Next
        Else
            MessageBox.Show("Original List Empty, Copy Not Done !! ")
        End If
    End Sub

    Private Sub SortButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles SortButton.Click
        Dim start As Integer
        Dim ending As Integer
        start = InputBox("Start sort at what index ?? ", "Sort Start Value")
        ending = InputBox("End sort at what index ?? ", "Sort End Value")
        List.sort(start, ending)
        ListBox1.Items.Clear()
        If List.Size() > 0 Then
            For x = 0 To (List.Size() - 1)
                ListBox1.Items.Add(List.middle(x))
            Next
        Else
            MessageBox.Show("Original List Empty, Copy Not Done !! ")
        End If
    End Sub

    Private Sub FrontButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles FrontButton.Click
        MessageBox.Show("Front Item is :" & List.front)
    End Sub

    Private Sub BackButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BackButton.Click
        MessageBox.Show("Back Item is :" & List.back)
    End Sub

    Private Sub MiddleButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MiddleButton.Click
        MessageBox.Show(List.middle(InputBox("Show what index ?? ")))
    End Sub

    Private Sub DeleteButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles DeleteButton.Click
        List.delete(InputBox("Delete what index ?? "))
    End Sub
End Class
