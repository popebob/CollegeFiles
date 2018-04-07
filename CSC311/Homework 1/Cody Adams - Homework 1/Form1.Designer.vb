<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Homework1Form
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
        Me.NameTextBox = New System.Windows.Forms.TextBox
        Me.MessageTextBox = New System.Windows.Forms.TextBox
        Me.NameLabel = New System.Windows.Forms.Label
        Me.MessageLabel = New System.Windows.Forms.Label
        Me.VisibleCheckBox = New System.Windows.Forms.CheckBox
        Me.RedRadioButton = New System.Windows.Forms.RadioButton
        Me.GreenRadioButton = New System.Windows.Forms.RadioButton
        Me.BlueRadioButton = New System.Windows.Forms.RadioButton
        Me.DisplayButton = New System.Windows.Forms.Button
        Me.ClearButton = New System.Windows.Forms.Button
        Me.ExitButton = New System.Windows.Forms.Button
        Me.BlackRadioButton = New System.Windows.Forms.RadioButton
        Me.DisplayTextBox = New System.Windows.Forms.TextBox
        Me.SuspendLayout()
        '
        'NameTextBox
        '
        Me.NameTextBox.Location = New System.Drawing.Point(86, 26)
        Me.NameTextBox.Name = "NameTextBox"
        Me.NameTextBox.Size = New System.Drawing.Size(365, 20)
        Me.NameTextBox.TabIndex = 0
        '
        'MessageTextBox
        '
        Me.MessageTextBox.Location = New System.Drawing.Point(86, 62)
        Me.MessageTextBox.Multiline = True
        Me.MessageTextBox.Name = "MessageTextBox"
        Me.MessageTextBox.Size = New System.Drawing.Size(364, 44)
        Me.MessageTextBox.TabIndex = 1
        '
        'NameLabel
        '
        Me.NameLabel.AutoSize = True
        Me.NameLabel.Location = New System.Drawing.Point(26, 29)
        Me.NameLabel.Name = "NameLabel"
        Me.NameLabel.Size = New System.Drawing.Size(41, 13)
        Me.NameLabel.TabIndex = 2
        Me.NameLabel.Text = "&Name :"
        '
        'MessageLabel
        '
        Me.MessageLabel.AutoSize = True
        Me.MessageLabel.Location = New System.Drawing.Point(27, 60)
        Me.MessageLabel.Name = "MessageLabel"
        Me.MessageLabel.Size = New System.Drawing.Size(53, 13)
        Me.MessageLabel.TabIndex = 3
        Me.MessageLabel.Text = "&Message:"
        '
        'VisibleCheckBox
        '
        Me.VisibleCheckBox.AutoSize = True
        Me.VisibleCheckBox.Location = New System.Drawing.Point(30, 112)
        Me.VisibleCheckBox.Name = "VisibleCheckBox"
        Me.VisibleCheckBox.Size = New System.Drawing.Size(102, 17)
        Me.VisibleCheckBox.TabIndex = 4
        Me.VisibleCheckBox.Text = "Message &Visible"
        Me.VisibleCheckBox.UseVisualStyleBackColor = True
        '
        'RedRadioButton
        '
        Me.RedRadioButton.AutoSize = True
        Me.RedRadioButton.Location = New System.Drawing.Point(29, 157)
        Me.RedRadioButton.Name = "RedRadioButton"
        Me.RedRadioButton.Size = New System.Drawing.Size(45, 17)
        Me.RedRadioButton.TabIndex = 5
        Me.RedRadioButton.TabStop = True
        Me.RedRadioButton.Text = "&Red"
        Me.RedRadioButton.UseVisualStyleBackColor = True
        '
        'GreenRadioButton
        '
        Me.GreenRadioButton.AutoSize = True
        Me.GreenRadioButton.Location = New System.Drawing.Point(29, 192)
        Me.GreenRadioButton.Name = "GreenRadioButton"
        Me.GreenRadioButton.Size = New System.Drawing.Size(54, 17)
        Me.GreenRadioButton.TabIndex = 6
        Me.GreenRadioButton.TabStop = True
        Me.GreenRadioButton.Text = "&Green"
        Me.GreenRadioButton.UseVisualStyleBackColor = True
        '
        'BlueRadioButton
        '
        Me.BlueRadioButton.AutoSize = True
        Me.BlueRadioButton.Location = New System.Drawing.Point(29, 227)
        Me.BlueRadioButton.Name = "BlueRadioButton"
        Me.BlueRadioButton.Size = New System.Drawing.Size(46, 17)
        Me.BlueRadioButton.TabIndex = 7
        Me.BlueRadioButton.TabStop = True
        Me.BlueRadioButton.Text = "&Blue"
        Me.BlueRadioButton.UseVisualStyleBackColor = True
        '
        'DisplayButton
        '
        Me.DisplayButton.Location = New System.Drawing.Point(50, 320)
        Me.DisplayButton.Name = "DisplayButton"
        Me.DisplayButton.Size = New System.Drawing.Size(92, 28)
        Me.DisplayButton.TabIndex = 8
        Me.DisplayButton.Text = "&Display"
        Me.DisplayButton.UseVisualStyleBackColor = True
        '
        'ClearButton
        '
        Me.ClearButton.Location = New System.Drawing.Point(209, 320)
        Me.ClearButton.Name = "ClearButton"
        Me.ClearButton.Size = New System.Drawing.Size(92, 28)
        Me.ClearButton.TabIndex = 9
        Me.ClearButton.Text = "&Clear"
        Me.ClearButton.UseVisualStyleBackColor = True
        '
        'ExitButton
        '
        Me.ExitButton.Location = New System.Drawing.Point(359, 320)
        Me.ExitButton.Name = "ExitButton"
        Me.ExitButton.Size = New System.Drawing.Size(92, 28)
        Me.ExitButton.TabIndex = 10
        Me.ExitButton.Text = "E&xit"
        Me.ExitButton.UseVisualStyleBackColor = True
        '
        'BlackRadioButton
        '
        Me.BlackRadioButton.AutoSize = True
        Me.BlackRadioButton.Location = New System.Drawing.Point(30, 262)
        Me.BlackRadioButton.Name = "BlackRadioButton"
        Me.BlackRadioButton.Size = New System.Drawing.Size(52, 17)
        Me.BlackRadioButton.TabIndex = 11
        Me.BlackRadioButton.TabStop = True
        Me.BlackRadioButton.Text = "Bla&ck"
        Me.BlackRadioButton.UseVisualStyleBackColor = True
        '
        'DisplayTextBox
        '
        Me.DisplayTextBox.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.DisplayTextBox.Location = New System.Drawing.Point(106, 135)
        Me.DisplayTextBox.Multiline = True
        Me.DisplayTextBox.Name = "DisplayTextBox"
        Me.DisplayTextBox.Size = New System.Drawing.Size(344, 171)
        Me.DisplayTextBox.TabIndex = 12
        Me.DisplayTextBox.Visible = False
        '
        'Homework1Form
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(480, 371)
        Me.Controls.Add(Me.DisplayTextBox)
        Me.Controls.Add(Me.BlackRadioButton)
        Me.Controls.Add(Me.ExitButton)
        Me.Controls.Add(Me.ClearButton)
        Me.Controls.Add(Me.DisplayButton)
        Me.Controls.Add(Me.BlueRadioButton)
        Me.Controls.Add(Me.GreenRadioButton)
        Me.Controls.Add(Me.RedRadioButton)
        Me.Controls.Add(Me.VisibleCheckBox)
        Me.Controls.Add(Me.MessageLabel)
        Me.Controls.Add(Me.NameLabel)
        Me.Controls.Add(Me.MessageTextBox)
        Me.Controls.Add(Me.NameTextBox)
        Me.Name = "Homework1Form"
        Me.Text = "Cody Adams - Homework 1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents NameTextBox As System.Windows.Forms.TextBox
    Friend WithEvents MessageTextBox As System.Windows.Forms.TextBox
    Friend WithEvents NameLabel As System.Windows.Forms.Label
    Friend WithEvents MessageLabel As System.Windows.Forms.Label
    Friend WithEvents VisibleCheckBox As System.Windows.Forms.CheckBox
    Friend WithEvents RedRadioButton As System.Windows.Forms.RadioButton
    Friend WithEvents GreenRadioButton As System.Windows.Forms.RadioButton
    Friend WithEvents BlueRadioButton As System.Windows.Forms.RadioButton
    Friend WithEvents DisplayButton As System.Windows.Forms.Button
    Friend WithEvents ClearButton As System.Windows.Forms.Button
    Friend WithEvents ExitButton As System.Windows.Forms.Button
    Friend WithEvents BlackRadioButton As System.Windows.Forms.RadioButton
    Friend WithEvents DisplayTextBox As System.Windows.Forms.TextBox

End Class
