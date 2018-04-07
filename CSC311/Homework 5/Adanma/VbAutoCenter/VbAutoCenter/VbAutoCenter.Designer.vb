<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class VbAutoCenter
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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(VbAutoCenter))
        Me.detailListBox = New System.Windows.Forms.ListBox
        Me.interiorListBox = New System.Windows.Forms.ListBox
        Me.exteriorListBox = New System.Windows.Forms.ListBox
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip
        Me.FileToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.PrintOrderToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ToolStripSeparator1 = New System.Windows.Forms.ToolStripSeparator
        Me.ClearToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.ExitToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem
        Me.fragranceComboBox = New System.Windows.Forms.ComboBox
        Me.detailLabel = New System.Windows.Forms.Label
        Me.interiorLabel = New System.Windows.Forms.Label
        Me.PrintPreviewDialog1 = New System.Windows.Forms.PrintPreviewDialog
        Me.exteriorLabel = New System.Windows.Forms.Label
        Me.PrintDocument1 = New System.Drawing.Printing.PrintDocument
        Me.MenuStrip1.SuspendLayout()
        Me.SuspendLayout()
        '
        'detailListBox
        '
        Me.detailListBox.FormattingEnabled = True
        Me.detailListBox.Items.AddRange(New Object() {"Standard", "Deluxe", "Executive", "Luxury"})
        Me.detailListBox.Location = New System.Drawing.Point(229, 55)
        Me.detailListBox.Name = "detailListBox"
        Me.detailListBox.Size = New System.Drawing.Size(120, 56)
        Me.detailListBox.TabIndex = 0
        '
        'interiorListBox
        '
        Me.interiorListBox.FormattingEnabled = True
        Me.interiorListBox.Location = New System.Drawing.Point(90, 159)
        Me.interiorListBox.Name = "interiorListBox"
        Me.interiorListBox.Size = New System.Drawing.Size(259, 95)
        Me.interiorListBox.TabIndex = 1
        '
        'exteriorListBox
        '
        Me.exteriorListBox.FormattingEnabled = True
        Me.exteriorListBox.Location = New System.Drawing.Point(90, 296)
        Me.exteriorListBox.Name = "exteriorListBox"
        Me.exteriorListBox.Size = New System.Drawing.Size(259, 95)
        Me.exteriorListBox.TabIndex = 2
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.FileToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(443, 24)
        Me.MenuStrip1.TabIndex = 3
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'FileToolStripMenuItem
        '
        Me.FileToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.PrintOrderToolStripMenuItem, Me.ToolStripSeparator1, Me.ClearToolStripMenuItem, Me.ExitToolStripMenuItem})
        Me.FileToolStripMenuItem.Name = "FileToolStripMenuItem"
        Me.FileToolStripMenuItem.Size = New System.Drawing.Size(37, 20)
        Me.FileToolStripMenuItem.Text = "&File"
        '
        'PrintOrderToolStripMenuItem
        '
        Me.PrintOrderToolStripMenuItem.Name = "PrintOrderToolStripMenuItem"
        Me.PrintOrderToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.PrintOrderToolStripMenuItem.Text = "&Print Order"
        '
        'ToolStripSeparator1
        '
        Me.ToolStripSeparator1.Name = "ToolStripSeparator1"
        Me.ToolStripSeparator1.Size = New System.Drawing.Size(149, 6)
        '
        'ClearToolStripMenuItem
        '
        Me.ClearToolStripMenuItem.Name = "ClearToolStripMenuItem"
        Me.ClearToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.ClearToolStripMenuItem.Text = "&Clear"
        '
        'ExitToolStripMenuItem
        '
        Me.ExitToolStripMenuItem.Name = "ExitToolStripMenuItem"
        Me.ExitToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.ExitToolStripMenuItem.Text = "E&xit"
        '
        'fragranceComboBox
        '
        Me.fragranceComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.fragranceComboBox.FormattingEnabled = True
        Me.fragranceComboBox.Items.AddRange(New Object() {"Hawaiian Mist", "Baby Powder", "Pine", "Country Floral", "Pina Colada", "Vanilla"})
        Me.fragranceComboBox.Location = New System.Drawing.Point(253, 159)
        Me.fragranceComboBox.Name = "fragranceComboBox"
        Me.fragranceComboBox.Size = New System.Drawing.Size(96, 21)
        Me.fragranceComboBox.TabIndex = 4
        '
        'detailLabel
        '
        Me.detailLabel.AutoSize = True
        Me.detailLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.detailLabel.Location = New System.Drawing.Point(68, 55)
        Me.detailLabel.Name = "detailLabel"
        Me.detailLabel.Size = New System.Drawing.Size(155, 17)
        Me.detailLabel.TabIndex = 5
        Me.detailLabel.Text = "Choose Detail Package"
        '
        'interiorLabel
        '
        Me.interiorLabel.AutoSize = True
        Me.interiorLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.interiorLabel.Location = New System.Drawing.Point(87, 139)
        Me.interiorLabel.Name = "interiorLabel"
        Me.interiorLabel.Size = New System.Drawing.Size(105, 17)
        Me.interiorLabel.TabIndex = 6
        Me.interiorLabel.Text = "Interior Options"
        '
        'PrintPreviewDialog1
        '
        Me.PrintPreviewDialog1.AutoScrollMargin = New System.Drawing.Size(0, 0)
        Me.PrintPreviewDialog1.AutoScrollMinSize = New System.Drawing.Size(0, 0)
        Me.PrintPreviewDialog1.ClientSize = New System.Drawing.Size(400, 300)
        Me.PrintPreviewDialog1.Enabled = True
        Me.PrintPreviewDialog1.Icon = CType(resources.GetObject("PrintPreviewDialog1.Icon"), System.Drawing.Icon)
        Me.PrintPreviewDialog1.Name = "PrintPreviewDialog1"
        Me.PrintPreviewDialog1.Visible = False
        '
        'exteriorLabel
        '
        Me.exteriorLabel.AutoSize = True
        Me.exteriorLabel.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.exteriorLabel.Location = New System.Drawing.Point(87, 276)
        Me.exteriorLabel.Name = "exteriorLabel"
        Me.exteriorLabel.Size = New System.Drawing.Size(109, 17)
        Me.exteriorLabel.TabIndex = 7
        Me.exteriorLabel.Text = "Exterior Options"
        '
        'PrintDocument1
        '
        '
        'VbAutoCenter
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(443, 429)
        Me.Controls.Add(Me.exteriorLabel)
        Me.Controls.Add(Me.interiorLabel)
        Me.Controls.Add(Me.detailLabel)
        Me.Controls.Add(Me.fragranceComboBox)
        Me.Controls.Add(Me.exteriorListBox)
        Me.Controls.Add(Me.interiorListBox)
        Me.Controls.Add(Me.detailListBox)
        Me.Controls.Add(Me.MenuStrip1)
        Me.MainMenuStrip = Me.MenuStrip1
        Me.Name = "VbAutoCenter"
        Me.Text = "VB Auto Center"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents detailListBox As System.Windows.Forms.ListBox
    Friend WithEvents interiorListBox As System.Windows.Forms.ListBox
    Friend WithEvents exteriorListBox As System.Windows.Forms.ListBox
    Friend WithEvents MenuStrip1 As System.Windows.Forms.MenuStrip
    Friend WithEvents fragranceComboBox As System.Windows.Forms.ComboBox
    Friend WithEvents detailLabel As System.Windows.Forms.Label
    Friend WithEvents FileToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents interiorLabel As System.Windows.Forms.Label
    Friend WithEvents ToolStripSeparator1 As System.Windows.Forms.ToolStripSeparator
    Friend WithEvents ClearToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents ExitToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents PrintPreviewDialog1 As System.Windows.Forms.PrintPreviewDialog
    Friend WithEvents exteriorLabel As System.Windows.Forms.Label
    Friend WithEvents PrintOrderToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents PrintDocument1 As System.Drawing.Printing.PrintDocument

End Class
