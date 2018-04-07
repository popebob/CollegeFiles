Public Class Homework5Form

    'Set string constants
    Const Ext1 As String = "Hand Wash"
    Const Ext2 As String = "Hand Wax"
    Const Ext3 As String = "Check Engine Fluids"
    Const Ext4 As String = "Detail Engine Compartment"
    Const Ext5 As String = "Detail Under Carriage"

    Const Int1 As String = "Fragrance"
    Const Int2 As String = "Shampoo Carpets"
    Const Int3 As String = "Shampoo Upholstery"
    Const Int4 As String = "Interior Protection Coat (Dashboard and Console)"
    Const Int5 As String = "Scotchgard"


    Private Sub ComboBox1_SelectedIndexChanged(ByVal sender As Object, ByVal e As System.EventArgs) Handles ComboBox1.SelectedIndexChanged

    End Sub

    Private Sub PackageListBox_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PackageListBox.SelectedIndexChanged

        'Clear the interior and exterior listboxes as user chooses options
        InteriorListBox.Items.Clear()
        ExteriorListBox.Items.Clear()

        'Display standard package options
        If PackageListBox.SelectedIndex = 0 Then
            InteriorListBox.Items.Add(Int1)
            ExteriorListBox.Items.Add(Ext1)

            'Display Deluxe package options
        ElseIf PackageListBox.SelectedIndex = 1 Then
            InteriorListBox.Items.Add(Int1)
            InteriorListBox.Items.Add(Int2)
            ExteriorListBox.Items.Add(Ext1)
            ExteriorListBox.Items.Add(Ext2)

            'Display Executive package options
        ElseIf PackageListBox.SelectedIndex = 2 Then
            InteriorListBox.Items.Add(Int1)
            InteriorListBox.Items.Add(Int2)
            InteriorListBox.Items.Add(Int4)
            ExteriorListBox.Items.Add(Ext1)
            ExteriorListBox.Items.Add(Ext2)
            ExteriorListBox.Items.Add(Ext3)

            'Display Luxury package options
        ElseIf PackageListBox.SelectedIndex = 3 Then
            InteriorListBox.Items.Add(Int1)
            InteriorListBox.Items.Add(Int2)
            InteriorListBox.Items.Add(Int3)
            InteriorListBox.Items.Add(Int5)
            ExteriorListBox.Items.Add(Ext1)
            ExteriorListBox.Items.Add(Ext2)
            ExteriorListBox.Items.Add(Ext3)
            ExteriorListBox.Items.Add(Ext4)
            ExteriorListBox.Items.Add(Ext5)
        End If
    End Sub

    Private Sub ClearToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ClearToolStripMenuItem.Click
        PackageListBox.SelectedIndex = -1
        ComboBox1.SelectedIndex = -1
        InteriorListBox.Items.Clear()
        ExteriorListBox.Items.Clear()
    End Sub

    Private Sub ExitToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ExitToolStripMenuItem.Click
        Me.Close()
    End Sub

    Private Sub AboutToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles AboutToolStripMenuItem.Click
        MessageBox.Show("Cody Adams" & Chr(13) & "CSC311-01" & Chr(13) & "Homework 5" & Chr(13) & "Winter 2010")
    End Sub

    Private Sub PrintDocument1_PrintPage(ByVal sender As System.Object, ByVal e As System.Drawing.Printing.PrintPageEventArgs) Handles PrintDocument1.PrintPage
        Dim printLine As String
        Dim ItemFont As New Font("Courier New", 16)
        Dim HeadingFont As New Font("Courier New", 22)
        Dim TitleFont As New Font("Courier New", 30)
        Dim Horizontal As Single = e.MarginBounds.Left
        Dim Vertical As Single = e.MarginBounds.Top
        Dim Height As Single = ItemFont.Height

        'Print heading
        printLine = "VB Auto Center Report"
        e.Graphics.DrawString(printLine, TitleFont, Brushes.Blue, Horizontal, Vertical)
        Vertical += Height * 4

        'Print selection details
        printLine = PackageListBox.SelectedItem.ToString & " Package includes:"
        e.Graphics.DrawString(printLine, HeadingFont, Brushes.Green, Horizontal, Vertical)
        Vertical += Height * 3

        'Print interior options
        printLine = "Interior Options chosen : "
        e.Graphics.DrawString(printLine, HeadingFont, Brushes.Green, Horizontal, Vertical)
        Vertical += Height
        For index = 0 To InteriorListBox.Items.Count - 1
            printLine = InteriorListBox.Items(index)
            e.Graphics.DrawString(printLine, ItemFont, Brushes.Black, Horizontal, Vertical)
            Vertical += Height * 2
        Next

        'Print fragrance choice
        Vertical += Height * 2
        printLine = "Fragrance Chosen: " & ComboBox1.SelectedItem.ToString
        e.Graphics.DrawString(printLine, HeadingFont, Brushes.Green, Horizontal, Vertical)
        Vertical += Height * 4

        'Print exterior options
        printLine = "Exterior Options chosen : "
        e.Graphics.DrawString(printLine, HeadingFont, Brushes.Green, Horizontal, Vertical)
        Vertical += Height * 3
        For index = 0 To ExteriorListBox.Items.Count - 1
            printLine = ExteriorListBox.Items(index)
            e.Graphics.DrawString(printLine, ItemFont, Brushes.Black, Horizontal, Vertical)
            Vertical += Height * 1.5
        Next
    End Sub

    Private Sub PrintToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PrintToolStripMenuItem.Click
        'Handle missing information before printing
        If PackageListBox.SelectedIndex <> -1 Then
            If ComboBox1.SelectedIndex <> -1 Then
                PrintPreviewDialog1.Document = PrintDocument1
                PrintPreviewDialog1.ShowDialog()
            Else
                MessageBox.Show("You Must Choose a Fragrance", "Missing Information", MessageBoxButtons.RetryCancel, MessageBoxIcon.Exclamation)
            End If
        Else
            MessageBox.Show("You Must Choose a Package", "Missing Information", MessageBoxButtons.RetryCancel, MessageBoxIcon.Exclamation)
        End If
    End Sub
End Class
