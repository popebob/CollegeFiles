<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class MyQueueForm
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
        Me.OutputLabel = New System.Windows.Forms.Label
        Me.PushButton = New System.Windows.Forms.Button
        Me.PopButton = New System.Windows.Forms.Button
        Me.InputTextBox = New System.Windows.Forms.TextBox
        Me.ClearButton = New System.Windows.Forms.Button
        Me.EmptyButton = New System.Windows.Forms.Button
        Me.FirstButton = New System.Windows.Forms.Button
        Me.BackButton = New System.Windows.Forms.Button
        Me.DisplayListBox = New System.Windows.Forms.ListBox
        Me.Label1 = New System.Windows.Forms.Label
        Me.SizeLabel = New System.Windows.Forms.Label
        Me.SuspendLayout()
        '
        'OutputLabel
        '
        Me.OutputLabel.AutoSize = True
        Me.OutputLabel.Location = New System.Drawing.Point(162, 449)
        Me.OutputLabel.Name = "OutputLabel"
        Me.OutputLabel.Size = New System.Drawing.Size(39, 13)
        Me.OutputLabel.TabIndex = 0
        Me.OutputLabel.Text = "Output"
        '
        'PushButton
        '
        Me.PushButton.Location = New System.Drawing.Point(84, 394)
        Me.PushButton.Name = "PushButton"
        Me.PushButton.Size = New System.Drawing.Size(75, 52)
        Me.PushButton.TabIndex = 1
        Me.PushButton.Text = "Push(data) !! "
        Me.PushButton.UseVisualStyleBackColor = True
        '
        'PopButton
        '
        Me.PopButton.Location = New System.Drawing.Point(165, 394)
        Me.PopButton.Name = "PopButton"
        Me.PopButton.Size = New System.Drawing.Size(75, 52)
        Me.PopButton.TabIndex = 2
        Me.PopButton.Text = "Pop() !! "
        Me.PopButton.UseVisualStyleBackColor = True
        '
        'InputTextBox
        '
        Me.InputTextBox.Location = New System.Drawing.Point(84, 368)
        Me.InputTextBox.Name = "InputTextBox"
        Me.InputTextBox.Size = New System.Drawing.Size(75, 20)
        Me.InputTextBox.TabIndex = 3
        '
        'ClearButton
        '
        Me.ClearButton.Location = New System.Drawing.Point(246, 394)
        Me.ClearButton.Name = "ClearButton"
        Me.ClearButton.Size = New System.Drawing.Size(75, 52)
        Me.ClearButton.TabIndex = 4
        Me.ClearButton.Text = "Clear !! "
        Me.ClearButton.UseVisualStyleBackColor = True
        '
        'EmptyButton
        '
        Me.EmptyButton.Location = New System.Drawing.Point(327, 394)
        Me.EmptyButton.Name = "EmptyButton"
        Me.EmptyButton.Size = New System.Drawing.Size(75, 52)
        Me.EmptyButton.TabIndex = 5
        Me.EmptyButton.Text = "Is Empty ?? "
        Me.EmptyButton.UseVisualStyleBackColor = True
        '
        'FirstButton
        '
        Me.FirstButton.Location = New System.Drawing.Point(3, 394)
        Me.FirstButton.Name = "FirstButton"
        Me.FirstButton.Size = New System.Drawing.Size(75, 52)
        Me.FirstButton.TabIndex = 6
        Me.FirstButton.Text = "Show first in line"
        Me.FirstButton.UseVisualStyleBackColor = True
        '
        'BackButton
        '
        Me.BackButton.Location = New System.Drawing.Point(408, 394)
        Me.BackButton.Name = "BackButton"
        Me.BackButton.Size = New System.Drawing.Size(75, 52)
        Me.BackButton.TabIndex = 7
        Me.BackButton.Text = "Show last in line"
        Me.BackButton.UseVisualStyleBackColor = True
        '
        'DisplayListBox
        '
        Me.DisplayListBox.FormattingEnabled = True
        Me.DisplayListBox.Location = New System.Drawing.Point(12, 12)
        Me.DisplayListBox.Name = "DisplayListBox"
        Me.DisplayListBox.Size = New System.Drawing.Size(471, 355)
        Me.DisplayListBox.TabIndex = 8
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(39, 371)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(31, 13)
        Me.Label1.TabIndex = 9
        Me.Label1.Text = "Input"
        '
        'SizeLabel
        '
        Me.SizeLabel.AutoSize = True
        Me.SizeLabel.Location = New System.Drawing.Point(81, 449)
        Me.SizeLabel.Name = "SizeLabel"
        Me.SizeLabel.Size = New System.Drawing.Size(27, 13)
        Me.SizeLabel.TabIndex = 10
        Me.SizeLabel.Text = "Size"
        '
        'MyQueueForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(488, 471)
        Me.Controls.Add(Me.SizeLabel)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.DisplayListBox)
        Me.Controls.Add(Me.BackButton)
        Me.Controls.Add(Me.FirstButton)
        Me.Controls.Add(Me.EmptyButton)
        Me.Controls.Add(Me.ClearButton)
        Me.Controls.Add(Me.InputTextBox)
        Me.Controls.Add(Me.PopButton)
        Me.Controls.Add(Me.PushButton)
        Me.Controls.Add(Me.OutputLabel)
        Me.Name = "MyQueueForm"
        Me.Text = "MyQueue"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents OutputLabel As System.Windows.Forms.Label
    Friend WithEvents PushButton As System.Windows.Forms.Button
    Friend WithEvents PopButton As System.Windows.Forms.Button
    Friend WithEvents InputTextBox As System.Windows.Forms.TextBox
    Friend WithEvents ClearButton As System.Windows.Forms.Button
    Friend WithEvents EmptyButton As System.Windows.Forms.Button
    Friend WithEvents FirstButton As System.Windows.Forms.Button
    Friend WithEvents BackButton As System.Windows.Forms.Button
    Friend WithEvents DisplayListBox As System.Windows.Forms.ListBox
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents SizeLabel As System.Windows.Forms.Label

End Class
