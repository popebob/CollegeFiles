<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Summary
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.SummaryGroupBox = New System.Windows.Forms.GroupBox
        Me.TotalEmployeesTextBox = New System.Windows.Forms.TextBox
        Me.Label5 = New System.Windows.Forms.Label
        Me.AveragePayTextBox = New System.Windows.Forms.TextBox
        Me.Label4 = New System.Windows.Forms.Label
        Me.TotalPayTextBox = New System.Windows.Forms.TextBox
        Me.Label3 = New System.Windows.Forms.Label
        Me.TotalQuantityTextBox = New System.Windows.Forms.TextBox
        Me.Label2 = New System.Windows.Forms.Label
        Me.SummaryGroupBox.SuspendLayout()
        Me.SuspendLayout()
        '
        'SummaryGroupBox
        '
        Me.SummaryGroupBox.Controls.Add(Me.TotalEmployeesTextBox)
        Me.SummaryGroupBox.Controls.Add(Me.Label5)
        Me.SummaryGroupBox.Controls.Add(Me.AveragePayTextBox)
        Me.SummaryGroupBox.Controls.Add(Me.Label4)
        Me.SummaryGroupBox.Controls.Add(Me.TotalPayTextBox)
        Me.SummaryGroupBox.Controls.Add(Me.Label3)
        Me.SummaryGroupBox.Controls.Add(Me.TotalQuantityTextBox)
        Me.SummaryGroupBox.Controls.Add(Me.Label2)
        Me.SummaryGroupBox.Location = New System.Drawing.Point(41, 38)
        Me.SummaryGroupBox.Name = "SummaryGroupBox"
        Me.SummaryGroupBox.Size = New System.Drawing.Size(203, 187)
        Me.SummaryGroupBox.TabIndex = 8
        Me.SummaryGroupBox.TabStop = False
        Me.SummaryGroupBox.Text = "Summary"
        '
        'TotalEmployeesTextBox
        '
        Me.TotalEmployeesTextBox.Location = New System.Drawing.Point(18, 153)
        Me.TotalEmployeesTextBox.Name = "TotalEmployeesTextBox"
        Me.TotalEmployeesTextBox.Size = New System.Drawing.Size(178, 20)
        Me.TotalEmployeesTextBox.TabIndex = 8
        Me.TotalEmployeesTextBox.Text = "0"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(6, 137)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(134, 13)
        Me.Label5.TabIndex = 7
        Me.Label5.Text = "Number of Employees Paid"
        '
        'AveragePayTextBox
        '
        Me.AveragePayTextBox.Location = New System.Drawing.Point(18, 114)
        Me.AveragePayTextBox.Name = "AveragePayTextBox"
        Me.AveragePayTextBox.Size = New System.Drawing.Size(178, 20)
        Me.AveragePayTextBox.TabIndex = 6
        Me.AveragePayTextBox.Text = "0"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(6, 98)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(135, 13)
        Me.Label4.TabIndex = 5
        Me.Label4.Text = "Average Pay per Employee"
        '
        'TotalPayTextBox
        '
        Me.TotalPayTextBox.Location = New System.Drawing.Point(18, 75)
        Me.TotalPayTextBox.Name = "TotalPayTextBox"
        Me.TotalPayTextBox.Size = New System.Drawing.Size(178, 20)
        Me.TotalPayTextBox.TabIndex = 4
        Me.TotalPayTextBox.Text = "0"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(6, 59)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(132, 13)
        Me.Label3.TabIndex = 3
        Me.Label3.Text = "Total Pay to All Employees"
        '
        'TotalQuantityTextBox
        '
        Me.TotalQuantityTextBox.Location = New System.Drawing.Point(19, 36)
        Me.TotalQuantityTextBox.Name = "TotalQuantityTextBox"
        Me.TotalQuantityTextBox.Size = New System.Drawing.Size(178, 20)
        Me.TotalQuantityTextBox.TabIndex = 2
        Me.TotalQuantityTextBox.Text = "0"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(7, 20)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(147, 13)
        Me.Label2.TabIndex = 0
        Me.Label2.Text = "Total Number of Pieces Done"
        '
        'Summary
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 262)
        Me.Controls.Add(Me.SummaryGroupBox)
        Me.Name = "Summary"
        Me.Text = "Summary"
        Me.SummaryGroupBox.ResumeLayout(False)
        Me.SummaryGroupBox.PerformLayout()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents SummaryGroupBox As System.Windows.Forms.GroupBox
    Friend WithEvents TotalEmployeesTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents AveragePayTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents TotalPayTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents TotalQuantityTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label2 As System.Windows.Forms.Label
End Class
