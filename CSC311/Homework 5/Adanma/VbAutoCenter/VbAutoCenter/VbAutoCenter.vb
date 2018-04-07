Public Class VbAutoCenter

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

    Private Sub detailListBox_SelectedIndexChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles detailListBox.SelectedIndexChanged

        'Clear the interior and exterior listboxes as user chooses options
        interiorListBox.Items.Clear()
        exteriorListBox.Items.Clear()

        'Display standard package options
        If detailListBox.SelectedIndex = 0 Then
            interiorListBox.Items.Add(Int1)
            exteriorListBox.Items.Add(Ext1)

            'Display Deluxe package options
        ElseIf detailListBox.SelectedIndex = 1 Then
            interiorListBox.Items.Add(Int1)
            interiorListBox.Items.Add(Int2)
            exteriorListBox.Items.Add(Ext1)
            exteriorListBox.Items.Add(Ext2)

            'Display Executive package options
        ElseIf detailListBox.SelectedIndex = 2 Then
            interiorListBox.Items.Add(Int1)
            interiorListBox.Items.Add(Int2)
            interiorListBox.Items.Add(Int4)
            exteriorListBox.Items.Add(Ext1)
            exteriorListBox.Items.Add(Ext2)
            exteriorListBox.Items.Add(Ext3)

            'Display Luxury package options
        ElseIf detailListBox.SelectedIndex = 3 Then
            interiorListBox.Items.Add(Int1)
            interiorListBox.Items.Add(Int2)
            interiorListBox.Items.Add(Int3)
            interiorListBox.Items.Add(Int5)
            exteriorListBox.Items.Add(Ext1)
            exteriorListBox.Items.Add(Ext2)
            exteriorListBox.Items.Add(Ext3)
            exteriorListBox.Items.Add(Ext4)
            exteriorListBox.Items.Add(Ext5)
        End If

    End Sub


    Private Sub PrintDocument1_PrintPage(ByVal sender As System.Object, ByVal e As System.Drawing.Printing.PrintPageEventArgs) Handles PrintDocument1.PrintPage
        Dim printLine As String
        Dim font As New Font("Times New Roman", 12)
        Dim horiz As Single = e.MarginBounds.Left
        Dim vert As Single = e.MarginBounds.Top
        Dim ht As Single = font.GetHeight

        'Print programmer name
        printLine = "Programmer Name: Adanma Nkume"
        e.Graphics.DrawString(printLine, font, Brushes.Green, horiz, vert)
        vert += ht * 4

        'Print heading
        printLine = "VB Auto Center Report"
        e.Graphics.DrawString(printLine, font, Brushes.Black, horiz, vert)
        vert += ht * 2

        'Print selection details
        printLine = detailListBox.SelectedItem.ToString & " option includes:"
        e.Graphics.DrawString(printLine, font, Brushes.Black, horiz, vert)
        vert += ht

        'Print interior options
        printLine = "Interior:"
        e.Graphics.DrawString(printLine, font, Brushes.Red, horiz, vert)
        vert += ht
        For index = 0 To interiorListBox.Items.Count - 1
            printLine = interiorListBox.Items(index)
            e.Graphics.DrawString(printLine, font, Brushes.Black, horiz, vert)
            vert += ht
        Next

        'Print fragrance choice
        printLine = "Fragrance Chosen: " & fragranceComboBox.SelectedItem.ToString
        e.Graphics.DrawString(printLine, font, Brushes.Black, horiz, vert)
        vert += ht * 2

        'Print exterior options
        printLine = "Exterior:"
        e.Graphics.DrawString(printLine, font, Brushes.Red, horiz, vert)
        vert += ht
        For index = 0 To exteriorListBox.Items.Count - 1
            printLine = exteriorListBox.Items(index)
            e.Graphics.DrawString(printLine, font, Brushes.Black, horiz, vert)
            vert += ht
        Next
    End Sub

    Private Sub PrintOrderToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PrintOrderToolStripMenuItem.Click

        'Handle missing information before printing
        If detailListBox.SelectedIndex <> -1 Then
            If fragranceComboBox.SelectedIndex <> -1 Then
                PrintPreviewDialog1.Document = PrintDocument1
                PrintPreviewDialog1.ShowDialog()
            Else
                MessageBox.Show("You Must Choose a Fragrance", "Missing Information", MessageBoxButtons.RetryCancel, MessageBoxIcon.Exclamation)
            End If
        Else
            MessageBox.Show("You Must Choose a Package", "Missing Information", MessageBoxButtons.RetryCancel, MessageBoxIcon.Exclamation)
        End If
    End Sub

    Private Sub ClearToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ClearToolStripMenuItem.Click
        'Clear the form
        detailListBox.SelectedIndex = -1
        interiorListBox.Items.Clear()
        fragranceComboBox.SelectedIndex = -1
        exteriorListBox.Items.Clear()
    End Sub

    Private Sub ExitToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ExitToolStripMenuItem.Click
        'Close the program
        Me.Close()
    End Sub
End Class