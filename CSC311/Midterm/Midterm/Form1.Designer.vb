<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class payrollForm
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
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip
        Me.FileToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.OpenFileToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ExitToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.HelpToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.AboutToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.openfileDialog = New System.Windows.Forms.OpenFileDialog
        Me.savefileDialog = New System.Windows.Forms.SaveFileDialog
        Me.nameListBox = New System.Windows.Forms.ListBox
        Me.hoursListBox = New System.Windows.Forms.ListBox
        Me.otListBox = New System.Windows.Forms.ListBox
        Me.rateListBox = New System.Windows.Forms.ListBox
        Me.payListBox = New System.Windows.Forms.ListBox
        Me.nameLabel = New System.Windows.Forms.Label
        Me.hoursLabel = New System.Windows.Forms.Label
        Me.otLabel = New System.Windows.Forms.Label
        Me.rateLabel = New System.Windows.Forms.Label
        Me.payLabel = New System.Windows.Forms.Label
        Me.filterLabel = New System.Windows.Forms.Label
        Me.nameTextBox = New System.Windows.Forms.TextBox
        Me.Panel1 = New System.Windows.Forms.Panel
        Me.outputProgressBar = New System.Windows.Forms.ProgressBar
        Me.outputLabel = New System.Windows.Forms.Label
        Me.MenuStrip1.SuspendLayout()
        Me.Panel1.SuspendLayout()
        Me.SuspendLayout()
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.FileToolStripMenuItem, Me.HelpToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(780, 24)
        Me.MenuStrip1.TabIndex = 0
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'FileToolStripMenuItem
        '
        Me.FileToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.OpenFileToolStripMenuItem, Me.ExitToolStripMenuItem})
        Me.FileToolStripMenuItem.Name = "FileToolStripMenuItem"
        Me.FileToolStripMenuItem.Size = New System.Drawing.Size(37, 20)
        Me.FileToolStripMenuItem.Text = "&File"
        '
        'OpenFileToolStripMenuItem
        '
        Me.OpenFileToolStripMenuItem.Name = "OpenFileToolStripMenuItem"
        Me.OpenFileToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.OpenFileToolStripMenuItem.Text = "&Open File"
        '
        'ExitToolStripMenuItem
        '
        Me.ExitToolStripMenuItem.Name = "ExitToolStripMenuItem"
        Me.ExitToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.ExitToolStripMenuItem.Text = "E&xit"
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
        'openfileDialog
        '
        Me.openfileDialog.DefaultExt = "txt"
        Me.openfileDialog.FileName = "Input Data File"
        Me.openfileDialog.Filter = "Text Data File (*.txt)|*.txt|All files (*.*)|*.*"
        Me.openfileDialog.SupportMultiDottedExtensions = True
        Me.openfileDialog.Title = "Input Data File"
        '
        'savefileDialog
        '
        Me.savefileDialog.DefaultExt = "txt"
        Me.savefileDialog.FileName = "Output Data File"
        Me.savefileDialog.Filter = "Text Data File (*.txt)|*.txt|All files (*.*)|*.*"
        Me.savefileDialog.OverwritePrompt = False
        Me.savefileDialog.Title = "Output Data File"
        '
        'nameListBox
        '
        Me.nameListBox.FormattingEnabled = True
        Me.nameListBox.Location = New System.Drawing.Point(15, 76)
        Me.nameListBox.Name = "nameListBox"
        Me.nameListBox.Size = New System.Drawing.Size(146, 368)
        Me.nameListBox.TabIndex = 1
        '
        'hoursListBox
        '
        Me.hoursListBox.FormattingEnabled = True
        Me.hoursListBox.Location = New System.Drawing.Point(167, 76)
        Me.hoursListBox.Name = "hoursListBox"
        Me.hoursListBox.Size = New System.Drawing.Size(146, 368)
        Me.hoursListBox.TabIndex = 2
        '
        'otListBox
        '
        Me.otListBox.FormattingEnabled = True
        Me.otListBox.Location = New System.Drawing.Point(319, 76)
        Me.otListBox.Name = "otListBox"
        Me.otListBox.Size = New System.Drawing.Size(146, 368)
        Me.otListBox.TabIndex = 3
        '
        'rateListBox
        '
        Me.rateListBox.FormatString = "C2"
        Me.rateListBox.FormattingEnabled = True
        Me.rateListBox.Location = New System.Drawing.Point(471, 76)
        Me.rateListBox.Name = "rateListBox"
        Me.rateListBox.Size = New System.Drawing.Size(146, 368)
        Me.rateListBox.TabIndex = 4
        '
        'payListBox
        '
        Me.payListBox.FormatString = "C2"
        Me.payListBox.FormattingEnabled = True
        Me.payListBox.Location = New System.Drawing.Point(623, 76)
        Me.payListBox.Name = "payListBox"
        Me.payListBox.Size = New System.Drawing.Size(146, 368)
        Me.payListBox.TabIndex = 5
        '
        'nameLabel
        '
        Me.nameLabel.AutoSize = True
        Me.nameLabel.Location = New System.Drawing.Point(12, 60)
        Me.nameLabel.Name = "nameLabel"
        Me.nameLabel.Size = New System.Drawing.Size(35, 13)
        Me.nameLabel.TabIndex = 6
        Me.nameLabel.Text = "Name"
        '
        'hoursLabel
        '
        Me.hoursLabel.AutoSize = True
        Me.hoursLabel.Location = New System.Drawing.Point(164, 60)
        Me.hoursLabel.Name = "hoursLabel"
        Me.hoursLabel.Size = New System.Drawing.Size(76, 13)
        Me.hoursLabel.TabIndex = 7
        Me.hoursLabel.Text = "Hours Worked"
        '
        'otLabel
        '
        Me.otLabel.AutoSize = True
        Me.otLabel.Location = New System.Drawing.Point(316, 60)
        Me.otLabel.Name = "otLabel"
        Me.otLabel.Size = New System.Drawing.Size(125, 13)
        Me.otLabel.TabIndex = 8
        Me.otLabel.Text = "OverTime Hours Worked"
        '
        'rateLabel
        '
        Me.rateLabel.AutoSize = True
        Me.rateLabel.Location = New System.Drawing.Point(468, 60)
        Me.rateLabel.Name = "rateLabel"
        Me.rateLabel.Size = New System.Drawing.Size(84, 13)
        Me.rateLabel.TabIndex = 9
        Me.rateLabel.Text = "Hourly Pay Rate"
        '
        'payLabel
        '
        Me.payLabel.AutoSize = True
        Me.payLabel.Location = New System.Drawing.Point(620, 60)
        Me.payLabel.Name = "payLabel"
        Me.payLabel.Size = New System.Drawing.Size(84, 13)
        Me.payLabel.TabIndex = 10
        Me.payLabel.Text = "Net Weekly Pay"
        '
        'filterLabel
        '
        Me.filterLabel.AutoSize = True
        Me.filterLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Underline), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.filterLabel.Location = New System.Drawing.Point(3, 10)
        Me.filterLabel.Name = "filterLabel"
        Me.filterLabel.Size = New System.Drawing.Size(119, 13)
        Me.filterLabel.TabIndex = 11
        Me.filterLabel.Text = "Filter by Last Initial:"
        '
        'nameTextBox
        '
        Me.nameTextBox.Location = New System.Drawing.Point(127, 7)
        Me.nameTextBox.MaxLength = 1
        Me.nameTextBox.Name = "nameTextBox"
        Me.nameTextBox.Size = New System.Drawing.Size(17, 20)
        Me.nameTextBox.TabIndex = 12
        '
        'Panel1
        '
        Me.Panel1.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.Panel1.Controls.Add(Me.filterLabel)
        Me.Panel1.Controls.Add(Me.nameTextBox)
        Me.Panel1.Location = New System.Drawing.Point(15, 24)
        Me.Panel1.Name = "Panel1"
        Me.Panel1.Size = New System.Drawing.Size(160, 33)
        Me.Panel1.TabIndex = 13
        '
        'outputProgressBar
        '
        Me.outputProgressBar.Location = New System.Drawing.Point(200, 30)
        Me.outputProgressBar.Name = "outputProgressBar"
        Me.outputProgressBar.Size = New System.Drawing.Size(568, 23)
        Me.outputProgressBar.TabIndex = 15
        Me.outputProgressBar.Tag = ""
        Me.outputProgressBar.Visible = False
        '
        'outputLabel
        '
        Me.outputLabel.AutoSize = True
        Me.outputLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.0!, CType((System.Drawing.FontStyle.Bold Or System.Drawing.FontStyle.Underline), System.Drawing.FontStyle), System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.outputLabel.Location = New System.Drawing.Point(197, 8)
        Me.outputLabel.Name = "outputLabel"
        Me.outputLabel.Size = New System.Drawing.Size(117, 15)
        Me.outputLabel.TabIndex = 16
        Me.outputLabel.Text = "FileSaveLocation"
        Me.outputLabel.Visible = False
        '
        'payrollForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.AutoSize = True
        Me.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink
        Me.ClientSize = New System.Drawing.Size(780, 453)
        Me.Controls.Add(Me.outputLabel)
        Me.Controls.Add(Me.outputProgressBar)
        Me.Controls.Add(Me.Panel1)
        Me.Controls.Add(Me.payLabel)
        Me.Controls.Add(Me.rateLabel)
        Me.Controls.Add(Me.otLabel)
        Me.Controls.Add(Me.hoursLabel)
        Me.Controls.Add(Me.nameLabel)
        Me.Controls.Add(Me.payListBox)
        Me.Controls.Add(Me.rateListBox)
        Me.Controls.Add(Me.otListBox)
        Me.Controls.Add(Me.hoursListBox)
        Me.Controls.Add(Me.nameListBox)
        Me.Controls.Add(Me.MenuStrip1)
        Me.MaximizeBox = False
        Me.Name = "payrollForm"
        Me.Text = "Payroll"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.Panel1.ResumeLayout(False)
        Me.Panel1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents MenuStrip1 As System.Windows.Forms.MenuStrip
    Friend WithEvents FileToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents OpenFileToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ExitToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents HelpToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents AboutToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents openfileDialog As System.Windows.Forms.OpenFileDialog
    Friend WithEvents savefileDialog As System.Windows.Forms.SaveFileDialog
    Friend WithEvents nameListBox As System.Windows.Forms.ListBox
    Friend WithEvents hoursListBox As System.Windows.Forms.ListBox
    Friend WithEvents otListBox As System.Windows.Forms.ListBox
    Friend WithEvents rateListBox As System.Windows.Forms.ListBox
    Friend WithEvents payListBox As System.Windows.Forms.ListBox
    Friend WithEvents nameLabel As System.Windows.Forms.Label
    Friend WithEvents hoursLabel As System.Windows.Forms.Label
    Friend WithEvents otLabel As System.Windows.Forms.Label
    Friend WithEvents rateLabel As System.Windows.Forms.Label
    Friend WithEvents payLabel As System.Windows.Forms.Label
    Friend WithEvents filterLabel As System.Windows.Forms.Label
    Friend WithEvents nameTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Panel1 As System.Windows.Forms.Panel
    Friend WithEvents outputProgressBar As System.Windows.Forms.ProgressBar
    Friend WithEvents outputLabel As System.Windows.Forms.Label

End Class
