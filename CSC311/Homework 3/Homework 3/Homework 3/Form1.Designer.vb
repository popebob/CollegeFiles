<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Homework3Form
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
        Me.NameLabel = New System.Windows.Forms.Label
        Me.QuantityLabel = New System.Windows.Forms.Label
        Me.NameTextBox = New System.Windows.Forms.TextBox
        Me.QuantityTextBox = New System.Windows.Forms.TextBox
        Me.Label1 = New System.Windows.Forms.Label
        Me.PayLabel = New System.Windows.Forms.Label
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip
        Me.FileToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ExitToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ActionToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.CalculateToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ClearToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.EntriesToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.AllToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.HelpToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.AboutToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.SummaryGroupBox = New System.Windows.Forms.GroupBox
        Me.TotalEmployeesTextBox = New System.Windows.Forms.TextBox
        Me.Label5 = New System.Windows.Forms.Label
        Me.AveragePayTextBox = New System.Windows.Forms.TextBox
        Me.Label4 = New System.Windows.Forms.Label
        Me.TotalPayTextBox = New System.Windows.Forms.TextBox
        Me.Label3 = New System.Windows.Forms.Label
        Me.TotalQuantityTextBox = New System.Windows.Forms.TextBox
        Me.Label2 = New System.Windows.Forms.Label
        Me.MenuStrip1.SuspendLayout()
        Me.SummaryGroupBox.SuspendLayout()
        Me.SuspendLayout()
        '
        'NameLabel
        '
        Me.NameLabel.AutoSize = True
        Me.NameLabel.Location = New System.Drawing.Point(26, 30)
        Me.NameLabel.Name = "NameLabel"
        Me.NameLabel.Size = New System.Drawing.Size(35, 13)
        Me.NameLabel.TabIndex = 0
        Me.NameLabel.Text = "Name"
        '
        'QuantityLabel
        '
        Me.QuantityLabel.AutoSize = True
        Me.QuantityLabel.Location = New System.Drawing.Point(26, 57)
        Me.QuantityLabel.Name = "QuantityLabel"
        Me.QuantityLabel.Size = New System.Drawing.Size(46, 13)
        Me.QuantityLabel.TabIndex = 1
        Me.QuantityLabel.Text = "Quantity"
        '
        'NameTextBox
        '
        Me.NameTextBox.Location = New System.Drawing.Point(115, 27)
        Me.NameTextBox.Name = "NameTextBox"
        Me.NameTextBox.Size = New System.Drawing.Size(100, 20)
        Me.NameTextBox.TabIndex = 2
        '
        'QuantityTextBox
        '
        Me.QuantityTextBox.AcceptsReturn = True
        Me.QuantityTextBox.Location = New System.Drawing.Point(115, 54)
        Me.QuantityTextBox.Name = "QuantityTextBox"
        Me.QuantityTextBox.Size = New System.Drawing.Size(100, 20)
        Me.QuantityTextBox.TabIndex = 3
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(26, 87)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(62, 13)
        Me.Label1.TabIndex = 4
        Me.Label1.Text = "Pay Earned"
        '
        'PayLabel
        '
        Me.PayLabel.AutoSize = True
        Me.PayLabel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.PayLabel.Location = New System.Drawing.Point(115, 87)
        Me.PayLabel.Name = "PayLabel"
        Me.PayLabel.Size = New System.Drawing.Size(27, 15)
        Me.PayLabel.TabIndex = 5
        Me.PayLabel.Text = "Pay"
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.FileToolStripMenuItem, Me.ActionToolStripMenuItem, Me.HelpToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(235, 24)
        Me.MenuStrip1.TabIndex = 6
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'FileToolStripMenuItem
        '
        Me.FileToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.ExitToolStripMenuItem})
        Me.FileToolStripMenuItem.Name = "FileToolStripMenuItem"
        Me.FileToolStripMenuItem.Size = New System.Drawing.Size(37, 20)
        Me.FileToolStripMenuItem.Text = "&File"
        '
        'ExitToolStripMenuItem
        '
        Me.ExitToolStripMenuItem.Name = "ExitToolStripMenuItem"
        Me.ExitToolStripMenuItem.Size = New System.Drawing.Size(92, 22)
        Me.ExitToolStripMenuItem.Text = "E&xit"
        '
        'ActionToolStripMenuItem
        '
        Me.ActionToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.CalculateToolStripMenuItem, Me.ClearToolStripMenuItem})
        Me.ActionToolStripMenuItem.Name = "ActionToolStripMenuItem"
        Me.ActionToolStripMenuItem.Size = New System.Drawing.Size(54, 20)
        Me.ActionToolStripMenuItem.Text = "&Action"
        '
        'CalculateToolStripMenuItem
        '
        Me.CalculateToolStripMenuItem.Name = "CalculateToolStripMenuItem"
        Me.CalculateToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.CalculateToolStripMenuItem.Text = "&Calculate"
        '
        'ClearToolStripMenuItem
        '
        Me.ClearToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.EntriesToolStripMenuItem, Me.AllToolStripMenuItem})
        Me.ClearToolStripMenuItem.Name = "ClearToolStripMenuItem"
        Me.ClearToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.ClearToolStripMenuItem.Text = "C&lear"
        '
        'EntriesToolStripMenuItem
        '
        Me.EntriesToolStripMenuItem.Name = "EntriesToolStripMenuItem"
        Me.EntriesToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.EntriesToolStripMenuItem.Text = "&Entries"
        '
        'AllToolStripMenuItem
        '
        Me.AllToolStripMenuItem.Name = "AllToolStripMenuItem"
        Me.AllToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.AllToolStripMenuItem.Text = "&All"
        '
        'HelpToolStripMenuItem
        '
        Me.HelpToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.AboutToolStripMenuItem})
        Me.HelpToolStripMenuItem.Name = "HelpToolStripMenuItem"
        Me.HelpToolStripMenuItem.Size = New System.Drawing.Size(44, 20)
        Me.HelpToolStripMenuItem.Text = "&Help"
        '
        'AboutToolStripMenuItem
        '
        Me.AboutToolStripMenuItem.Name = "AboutToolStripMenuItem"
        Me.AboutToolStripMenuItem.Size = New System.Drawing.Size(107, 22)
        Me.AboutToolStripMenuItem.Text = "&About"
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
        Me.SummaryGroupBox.Location = New System.Drawing.Point(12, 125)
        Me.SummaryGroupBox.Name = "SummaryGroupBox"
        Me.SummaryGroupBox.Size = New System.Drawing.Size(203, 187)
        Me.SummaryGroupBox.TabIndex = 7
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
        'Homework3Form
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(235, 329)
        Me.Controls.Add(Me.SummaryGroupBox)
        Me.Controls.Add(Me.PayLabel)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.QuantityTextBox)
        Me.Controls.Add(Me.NameTextBox)
        Me.Controls.Add(Me.QuantityLabel)
        Me.Controls.Add(Me.NameLabel)
        Me.Controls.Add(Me.MenuStrip1)
        Me.MainMenuStrip = Me.MenuStrip1
        Me.Name = "Homework3Form"
        Me.Text = "Homework 3"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.SummaryGroupBox.ResumeLayout(False)
        Me.SummaryGroupBox.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents NameLabel As System.Windows.Forms.Label
    Friend WithEvents QuantityLabel As System.Windows.Forms.Label
    Friend WithEvents NameTextBox As System.Windows.Forms.TextBox
    Friend WithEvents QuantityTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents PayLabel As System.Windows.Forms.Label
    Friend WithEvents MenuStrip1 As System.Windows.Forms.MenuStrip
    Friend WithEvents FileToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ExitToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ActionToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents CalculateToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ClearToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents EntriesToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents AllToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents HelpToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents AboutToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents SummaryGroupBox As System.Windows.Forms.GroupBox
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents TotalEmployeesTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents AveragePayTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents TotalPayTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents TotalQuantityTextBox As System.Windows.Forms.TextBox

End Class
