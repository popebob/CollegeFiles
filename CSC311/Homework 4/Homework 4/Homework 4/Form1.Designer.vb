<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Homework4Form
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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Homework4Form))
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
        Me.OptionsToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.LogoToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.SloganToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.HelpToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.AboutToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.LogoPictureBox = New System.Windows.Forms.PictureBox
        Me.SloganLabel = New System.Windows.Forms.Label
        Me.SummaryToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.MenuStrip1.SuspendLayout()
        CType(Me.LogoPictureBox, System.ComponentModel.ISupportInitialize).BeginInit()
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
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.FileToolStripMenuItem, Me.ActionToolStripMenuItem, Me.OptionsToolStripMenuItem, Me.HelpToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(226, 24)
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
        Me.ActionToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.CalculateToolStripMenuItem, Me.ClearToolStripMenuItem, Me.SummaryToolStripMenuItem})
        Me.ActionToolStripMenuItem.Name = "ActionToolStripMenuItem"
        Me.ActionToolStripMenuItem.Size = New System.Drawing.Size(54, 20)
        Me.ActionToolStripMenuItem.Text = "&Action"
        '
        'CalculateToolStripMenuItem
        '
        Me.CalculateToolStripMenuItem.Name = "CalculateToolStripMenuItem"
        Me.CalculateToolStripMenuItem.Size = New System.Drawing.Size(123, 22)
        Me.CalculateToolStripMenuItem.Text = "&Calculate"
        '
        'ClearToolStripMenuItem
        '
        Me.ClearToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.EntriesToolStripMenuItem, Me.AllToolStripMenuItem})
        Me.ClearToolStripMenuItem.Name = "ClearToolStripMenuItem"
        Me.ClearToolStripMenuItem.Size = New System.Drawing.Size(123, 22)
        Me.ClearToolStripMenuItem.Text = "C&lear"
        '
        'EntriesToolStripMenuItem
        '
        Me.EntriesToolStripMenuItem.Name = "EntriesToolStripMenuItem"
        Me.EntriesToolStripMenuItem.Size = New System.Drawing.Size(109, 22)
        Me.EntriesToolStripMenuItem.Text = "&Entries"
        '
        'AllToolStripMenuItem
        '
        Me.AllToolStripMenuItem.Name = "AllToolStripMenuItem"
        Me.AllToolStripMenuItem.Size = New System.Drawing.Size(109, 22)
        Me.AllToolStripMenuItem.Text = "&All"
        '
        'OptionsToolStripMenuItem
        '
        Me.OptionsToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.LogoToolStripMenuItem, Me.SloganToolStripMenuItem})
        Me.OptionsToolStripMenuItem.Name = "OptionsToolStripMenuItem"
        Me.OptionsToolStripMenuItem.Size = New System.Drawing.Size(61, 20)
        Me.OptionsToolStripMenuItem.Text = "&Options"
        '
        'LogoToolStripMenuItem
        '
        Me.LogoToolStripMenuItem.Checked = True
        Me.LogoToolStripMenuItem.CheckState = System.Windows.Forms.CheckState.Checked
        Me.LogoToolStripMenuItem.Name = "LogoToolStripMenuItem"
        Me.LogoToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.LogoToolStripMenuItem.Text = "&Logo"
        '
        'SloganToolStripMenuItem
        '
        Me.SloganToolStripMenuItem.Checked = True
        Me.SloganToolStripMenuItem.CheckState = System.Windows.Forms.CheckState.Checked
        Me.SloganToolStripMenuItem.Name = "SloganToolStripMenuItem"
        Me.SloganToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.SloganToolStripMenuItem.Text = "&Slogan"
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
        'LogoPictureBox
        '
        Me.LogoPictureBox.Image = CType(resources.GetObject("LogoPictureBox.Image"), System.Drawing.Image)
        Me.LogoPictureBox.InitialImage = Nothing
        Me.LogoPictureBox.Location = New System.Drawing.Point(18, 105)
        Me.LogoPictureBox.Name = "LogoPictureBox"
        Me.LogoPictureBox.Size = New System.Drawing.Size(196, 81)
        Me.LogoPictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.LogoPictureBox.TabIndex = 8
        Me.LogoPictureBox.TabStop = False
        '
        'SloganLabel
        '
        Me.SloganLabel.AutoSize = True
        Me.SloganLabel.Location = New System.Drawing.Point(18, 189)
        Me.SloganLabel.Name = "SloganLabel"
        Me.SloganLabel.Size = New System.Drawing.Size(197, 13)
        Me.SloganLabel.TabIndex = 9
        Me.SloganLabel.Text = "We stand for the highest quality possible"
        '
        'SummaryToolStripMenuItem
        '
        Me.SummaryToolStripMenuItem.Name = "SummaryToolStripMenuItem"
        Me.SummaryToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.SummaryToolStripMenuItem.Text = "&Summary"
        '
        'Homework4Form
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(226, 210)
        Me.Controls.Add(Me.SloganLabel)
        Me.Controls.Add(Me.LogoPictureBox)
        Me.Controls.Add(Me.PayLabel)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.QuantityTextBox)
        Me.Controls.Add(Me.NameTextBox)
        Me.Controls.Add(Me.QuantityLabel)
        Me.Controls.Add(Me.NameLabel)
        Me.Controls.Add(Me.MenuStrip1)
        Me.MainMenuStrip = Me.MenuStrip1
        Me.Name = "Homework4Form"
        Me.Text = "Homework 4"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        CType(Me.LogoPictureBox, System.ComponentModel.ISupportInitialize).EndInit()
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
    Friend WithEvents OptionsToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents LogoToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents SloganToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents LogoPictureBox As System.Windows.Forms.PictureBox
    Friend WithEvents SloganLabel As System.Windows.Forms.Label
    Friend WithEvents SummaryToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem

End Class
