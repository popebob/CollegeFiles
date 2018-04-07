<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class IncomeForm
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
        Me.idListBox = New System.Windows.Forms.ListBox
        Me.personListBox = New System.Windows.Forms.ListBox
        Me.incomeListBox = New System.Windows.Forms.ListBox
        Me.resideListBox = New System.Windows.Forms.ListBox
        Me.abvIncomeListBox = New System.Windows.Forms.ListBox
        Me.abvIdListBox = New System.Windows.Forms.ListBox
        Me.pvtyListBox = New System.Windows.Forms.ListBox
        Me.idLabel = New System.Windows.Forms.Label
        Me.personLabel = New System.Windows.Forms.Label
        Me.incomeLabel = New System.Windows.Forms.Label
        Me.resideLabel = New System.Windows.Forms.Label
        Me.abvIdLabel = New System.Windows.Forms.Label
        Me.abvIncomeLabel = New System.Windows.Forms.Label
        Me.pvtyLabel = New System.Windows.Forms.Label
        Me.averageLabel = New System.Windows.Forms.Label
        Me.OpenFileDialog1 = New System.Windows.Forms.OpenFileDialog
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip
        Me.FileToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ReportsToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ToolStripSeparator1 = New System.Windows.Forms.ToolStripSeparator
        Me.ExitToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.MenuStrip1.SuspendLayout()
        Me.SuspendLayout()
        '
        'idListBox
        '
        Me.idListBox.FormattingEnabled = True
        Me.idListBox.Location = New System.Drawing.Point(77, 137)
        Me.idListBox.Name = "idListBox"
        Me.idListBox.Size = New System.Drawing.Size(93, 199)
        Me.idListBox.TabIndex = 0
        '
        'personListBox
        '
        Me.personListBox.FormattingEnabled = True
        Me.personListBox.Location = New System.Drawing.Point(176, 137)
        Me.personListBox.Name = "personListBox"
        Me.personListBox.Size = New System.Drawing.Size(52, 199)
        Me.personListBox.TabIndex = 1
        '
        'incomeListBox
        '
        Me.incomeListBox.FormattingEnabled = True
        Me.incomeListBox.Location = New System.Drawing.Point(234, 137)
        Me.incomeListBox.Name = "incomeListBox"
        Me.incomeListBox.Size = New System.Drawing.Size(93, 199)
        Me.incomeListBox.TabIndex = 2
        '
        'resideListBox
        '
        Me.resideListBox.FormattingEnabled = True
        Me.resideListBox.Location = New System.Drawing.Point(333, 137)
        Me.resideListBox.Name = "resideListBox"
        Me.resideListBox.Size = New System.Drawing.Size(52, 199)
        Me.resideListBox.TabIndex = 3
        '
        'abvIncomeListBox
        '
        Me.abvIncomeListBox.FormattingEnabled = True
        Me.abvIncomeListBox.Location = New System.Drawing.Point(551, 137)
        Me.abvIncomeListBox.Name = "abvIncomeListBox"
        Me.abvIncomeListBox.Size = New System.Drawing.Size(77, 108)
        Me.abvIncomeListBox.TabIndex = 4
        '
        'abvIdListBox
        '
        Me.abvIdListBox.FormattingEnabled = True
        Me.abvIdListBox.Location = New System.Drawing.Point(468, 137)
        Me.abvIdListBox.Name = "abvIdListBox"
        Me.abvIdListBox.Size = New System.Drawing.Size(77, 108)
        Me.abvIdListBox.TabIndex = 5
        '
        'pvtyListBox
        '
        Me.pvtyListBox.FormattingEnabled = True
        Me.pvtyListBox.Location = New System.Drawing.Point(697, 137)
        Me.pvtyListBox.Name = "pvtyListBox"
        Me.pvtyListBox.Size = New System.Drawing.Size(68, 121)
        Me.pvtyListBox.TabIndex = 6
        '
        'idLabel
        '
        Me.idLabel.AutoSize = True
        Me.idLabel.Location = New System.Drawing.Point(74, 121)
        Me.idLabel.Name = "idLabel"
        Me.idLabel.Size = New System.Drawing.Size(18, 13)
        Me.idLabel.TabIndex = 8
        Me.idLabel.Text = "ID"
        '
        'personLabel
        '
        Me.personLabel.Location = New System.Drawing.Point(176, 91)
        Me.personLabel.Name = "personLabel"
        Me.personLabel.Size = New System.Drawing.Size(52, 43)
        Me.personLabel.TabIndex = 9
        Me.personLabel.Text = "Number of Persons"
        '
        'incomeLabel
        '
        Me.incomeLabel.AutoSize = True
        Me.incomeLabel.Location = New System.Drawing.Point(231, 121)
        Me.incomeLabel.Name = "incomeLabel"
        Me.incomeLabel.Size = New System.Drawing.Size(42, 13)
        Me.incomeLabel.TabIndex = 10
        Me.incomeLabel.Text = "Income"
        '
        'resideLabel
        '
        Me.resideLabel.AutoSize = True
        Me.resideLabel.Location = New System.Drawing.Point(330, 121)
        Me.resideLabel.Name = "resideLabel"
        Me.resideLabel.Size = New System.Drawing.Size(58, 13)
        Me.resideLabel.TabIndex = 11
        Me.resideLabel.Text = "Residence"
        '
        'abvIdLabel
        '
        Me.abvIdLabel.Location = New System.Drawing.Point(465, 104)
        Me.abvIdLabel.Name = "abvIdLabel"
        Me.abvIdLabel.Size = New System.Drawing.Size(77, 30)
        Me.abvIdLabel.TabIndex = 12
        Me.abvIdLabel.Text = "IDs Above Average"
        Me.abvIdLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'abvIncomeLabel
        '
        Me.abvIncomeLabel.Location = New System.Drawing.Point(548, 91)
        Me.abvIncomeLabel.Name = "abvIncomeLabel"
        Me.abvIncomeLabel.Size = New System.Drawing.Size(80, 43)
        Me.abvIncomeLabel.TabIndex = 13
        Me.abvIncomeLabel.Text = "Above Average Income"
        Me.abvIncomeLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'pvtyLabel
        '
        Me.pvtyLabel.AutoSize = True
        Me.pvtyLabel.Location = New System.Drawing.Point(694, 121)
        Me.pvtyLabel.Name = "pvtyLabel"
        Me.pvtyLabel.Size = New System.Drawing.Size(94, 13)
        Me.pvtyLabel.TabIndex = 14
        Me.pvtyLabel.Text = "IDs Below Poverty"
        '
        'averageLabel
        '
        Me.averageLabel.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.averageLabel.Location = New System.Drawing.Point(468, 277)
        Me.averageLabel.Name = "averageLabel"
        Me.averageLabel.Size = New System.Drawing.Size(160, 59)
        Me.averageLabel.TabIndex = 15
        Me.averageLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'OpenFileDialog1
        '
        Me.OpenFileDialog1.FileName = "OpenFileDialog1"
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.FileToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(845, 24)
        Me.MenuStrip1.TabIndex = 16
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'FileToolStripMenuItem
        '
        Me.FileToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.ReportsToolStripMenuItem, Me.ToolStripSeparator1, Me.ExitToolStripMenuItem})
        Me.FileToolStripMenuItem.Name = "FileToolStripMenuItem"
        Me.FileToolStripMenuItem.Size = New System.Drawing.Size(37, 20)
        Me.FileToolStripMenuItem.Text = "&File"
        '
        'ReportsToolStripMenuItem
        '
        Me.ReportsToolStripMenuItem.Name = "ReportsToolStripMenuItem"
        Me.ReportsToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.ReportsToolStripMenuItem.Text = "&Reports"
        '
        'ToolStripSeparator1
        '
        Me.ToolStripSeparator1.Name = "ToolStripSeparator1"
        Me.ToolStripSeparator1.Size = New System.Drawing.Size(149, 6)
        '
        'ExitToolStripMenuItem
        '
        Me.ExitToolStripMenuItem.Name = "ExitToolStripMenuItem"
        Me.ExitToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.ExitToolStripMenuItem.Text = "E&xit"
        '
        'IncomeForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.AutoSize = True
        Me.ClientSize = New System.Drawing.Size(845, 418)
        Me.Controls.Add(Me.averageLabel)
        Me.Controls.Add(Me.pvtyLabel)
        Me.Controls.Add(Me.abvIncomeLabel)
        Me.Controls.Add(Me.abvIdLabel)
        Me.Controls.Add(Me.resideLabel)
        Me.Controls.Add(Me.incomeLabel)
        Me.Controls.Add(Me.personLabel)
        Me.Controls.Add(Me.idLabel)
        Me.Controls.Add(Me.pvtyListBox)
        Me.Controls.Add(Me.abvIdListBox)
        Me.Controls.Add(Me.abvIncomeListBox)
        Me.Controls.Add(Me.resideListBox)
        Me.Controls.Add(Me.incomeListBox)
        Me.Controls.Add(Me.personListBox)
        Me.Controls.Add(Me.idListBox)
        Me.Controls.Add(Me.MenuStrip1)
        Me.MainMenuStrip = Me.MenuStrip1
        Me.Name = "IncomeForm"
        Me.Text = "Income Form"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents idListBox As System.Windows.Forms.ListBox
    Friend WithEvents personListBox As System.Windows.Forms.ListBox
    Friend WithEvents incomeListBox As System.Windows.Forms.ListBox
    Friend WithEvents resideListBox As System.Windows.Forms.ListBox
    Friend WithEvents abvIncomeListBox As System.Windows.Forms.ListBox
    Friend WithEvents abvIdListBox As System.Windows.Forms.ListBox
    Friend WithEvents pvtyListBox As System.Windows.Forms.ListBox
    Friend WithEvents idLabel As System.Windows.Forms.Label
    Friend WithEvents personLabel As System.Windows.Forms.Label
    Friend WithEvents incomeLabel As System.Windows.Forms.Label
    Friend WithEvents resideLabel As System.Windows.Forms.Label
    Friend WithEvents abvIdLabel As System.Windows.Forms.Label
    Friend WithEvents abvIncomeLabel As System.Windows.Forms.Label
    Friend WithEvents pvtyLabel As System.Windows.Forms.Label
    Friend WithEvents averageLabel As System.Windows.Forms.Label
    Friend WithEvents OpenFileDialog1 As System.Windows.Forms.OpenFileDialog
    Friend WithEvents MenuStrip1 As System.Windows.Forms.MenuStrip
    Friend WithEvents FileToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ReportsToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ToolStripSeparator1 As System.Windows.Forms.ToolStripSeparator
    Friend WithEvents ExitToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem

End Class
