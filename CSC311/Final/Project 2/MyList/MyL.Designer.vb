<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class MyListForm
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
        Me.DisplayButton = New System.Windows.Forms.Button
        Me.PushFrontButton = New System.Windows.Forms.Button
        Me.PushBackButton = New System.Windows.Forms.Button
        Me.InsertButton = New System.Windows.Forms.Button
        Me.UniqueButton = New System.Windows.Forms.Button
        Me.SortButton = New System.Windows.Forms.Button
        Me.MiddleButton = New System.Windows.Forms.Button
        Me.DeleteButton = New System.Windows.Forms.Button
        Me.PrependButton = New System.Windows.Forms.Button
        Me.AppendButton = New System.Windows.Forms.Button
        Me.BackButton = New System.Windows.Forms.Button
        Me.FrontButton = New System.Windows.Forms.Button
        Me.ListBox1 = New System.Windows.Forms.ListBox
        Me.InputTextBox = New System.Windows.Forms.TextBox
        Me.InputLabel = New System.Windows.Forms.Label
        Me.CopyButton = New System.Windows.Forms.Button
        Me.ListBox2 = New System.Windows.Forms.ListBox
        Me.ClearButton = New System.Windows.Forms.Button
        Me.SuspendLayout()
        '
        'DisplayButton
        '
        Me.DisplayButton.Location = New System.Drawing.Point(9, 411)
        Me.DisplayButton.Name = "DisplayButton"
        Me.DisplayButton.Size = New System.Drawing.Size(75, 43)
        Me.DisplayButton.TabIndex = 1
        Me.DisplayButton.Text = "Display to ListBox !! "
        Me.DisplayButton.UseVisualStyleBackColor = True
        '
        'PushFrontButton
        '
        Me.PushFrontButton.Location = New System.Drawing.Point(90, 411)
        Me.PushFrontButton.Name = "PushFrontButton"
        Me.PushFrontButton.Size = New System.Drawing.Size(75, 43)
        Me.PushFrontButton.TabIndex = 2
        Me.PushFrontButton.Text = "Push to Front !! "
        Me.PushFrontButton.UseVisualStyleBackColor = True
        '
        'PushBackButton
        '
        Me.PushBackButton.Location = New System.Drawing.Point(171, 411)
        Me.PushBackButton.Name = "PushBackButton"
        Me.PushBackButton.Size = New System.Drawing.Size(75, 43)
        Me.PushBackButton.TabIndex = 3
        Me.PushBackButton.Text = "Push to Back !! "
        Me.PushBackButton.UseVisualStyleBackColor = True
        '
        'InsertButton
        '
        Me.InsertButton.Location = New System.Drawing.Point(252, 411)
        Me.InsertButton.Name = "InsertButton"
        Me.InsertButton.Size = New System.Drawing.Size(75, 43)
        Me.InsertButton.TabIndex = 4
        Me.InsertButton.Text = "Insert at given index"
        Me.InsertButton.UseVisualStyleBackColor = True
        '
        'UniqueButton
        '
        Me.UniqueButton.Location = New System.Drawing.Point(333, 411)
        Me.UniqueButton.Name = "UniqueButton"
        Me.UniqueButton.Size = New System.Drawing.Size(75, 43)
        Me.UniqueButton.TabIndex = 5
        Me.UniqueButton.Text = "Make Unique !! "
        Me.UniqueButton.UseVisualStyleBackColor = True
        '
        'SortButton
        '
        Me.SortButton.Location = New System.Drawing.Point(414, 411)
        Me.SortButton.Name = "SortButton"
        Me.SortButton.Size = New System.Drawing.Size(75, 43)
        Me.SortButton.TabIndex = 6
        Me.SortButton.Text = "Sort !! "
        Me.SortButton.UseVisualStyleBackColor = True
        '
        'MiddleButton
        '
        Me.MiddleButton.Location = New System.Drawing.Point(333, 460)
        Me.MiddleButton.Name = "MiddleButton"
        Me.MiddleButton.Size = New System.Drawing.Size(75, 43)
        Me.MiddleButton.TabIndex = 12
        Me.MiddleButton.Text = "Show at given index"
        Me.MiddleButton.UseVisualStyleBackColor = True
        '
        'DeleteButton
        '
        Me.DeleteButton.Location = New System.Drawing.Point(252, 460)
        Me.DeleteButton.Name = "DeleteButton"
        Me.DeleteButton.Size = New System.Drawing.Size(75, 43)
        Me.DeleteButton.TabIndex = 11
        Me.DeleteButton.Text = "Delete a given index"
        Me.DeleteButton.UseVisualStyleBackColor = True
        '
        'PrependButton
        '
        Me.PrependButton.Location = New System.Drawing.Point(171, 460)
        Me.PrependButton.Name = "PrependButton"
        Me.PrependButton.Size = New System.Drawing.Size(75, 43)
        Me.PrependButton.TabIndex = 10
        Me.PrependButton.Text = "Prepend Data !! "
        Me.PrependButton.UseVisualStyleBackColor = True
        '
        'AppendButton
        '
        Me.AppendButton.Location = New System.Drawing.Point(90, 460)
        Me.AppendButton.Name = "AppendButton"
        Me.AppendButton.Size = New System.Drawing.Size(75, 43)
        Me.AppendButton.TabIndex = 9
        Me.AppendButton.Text = "Append Data !! "
        Me.AppendButton.UseVisualStyleBackColor = True
        '
        'BackButton
        '
        Me.BackButton.Location = New System.Drawing.Point(414, 460)
        Me.BackButton.Name = "BackButton"
        Me.BackButton.Size = New System.Drawing.Size(75, 43)
        Me.BackButton.TabIndex = 8
        Me.BackButton.Text = "Show Back"
        Me.BackButton.UseVisualStyleBackColor = True
        '
        'FrontButton
        '
        Me.FrontButton.Location = New System.Drawing.Point(9, 460)
        Me.FrontButton.Name = "FrontButton"
        Me.FrontButton.Size = New System.Drawing.Size(75, 43)
        Me.FrontButton.TabIndex = 7
        Me.FrontButton.Text = "Show Front"
        Me.FrontButton.UseVisualStyleBackColor = True
        '
        'ListBox1
        '
        Me.ListBox1.FormattingEnabled = True
        Me.ListBox1.Location = New System.Drawing.Point(12, 12)
        Me.ListBox1.Name = "ListBox1"
        Me.ListBox1.Size = New System.Drawing.Size(234, 355)
        Me.ListBox1.TabIndex = 0
        '
        'InputTextBox
        '
        Me.InputTextBox.Location = New System.Drawing.Point(65, 385)
        Me.InputTextBox.Name = "InputTextBox"
        Me.InputTextBox.Size = New System.Drawing.Size(100, 20)
        Me.InputTextBox.TabIndex = 13
        '
        'InputLabel
        '
        Me.InputLabel.AutoSize = True
        Me.InputLabel.Location = New System.Drawing.Point(6, 388)
        Me.InputLabel.Name = "InputLabel"
        Me.InputLabel.Size = New System.Drawing.Size(46, 13)
        Me.InputLabel.TabIndex = 16
        Me.InputLabel.Text = "Input -->"
        '
        'CopyButton
        '
        Me.CopyButton.Location = New System.Drawing.Point(333, 373)
        Me.CopyButton.Name = "CopyButton"
        Me.CopyButton.Size = New System.Drawing.Size(156, 28)
        Me.CopyButton.TabIndex = 17
        Me.CopyButton.Text = "Make a Copy"
        Me.CopyButton.UseVisualStyleBackColor = True
        '
        'ListBox2
        '
        Me.ListBox2.FormattingEnabled = True
        Me.ListBox2.Location = New System.Drawing.Point(255, 12)
        Me.ListBox2.Name = "ListBox2"
        Me.ListBox2.Size = New System.Drawing.Size(234, 355)
        Me.ListBox2.TabIndex = 18
        '
        'ClearButton
        '
        Me.ClearButton.Location = New System.Drawing.Point(171, 373)
        Me.ClearButton.Name = "ClearButton"
        Me.ClearButton.Size = New System.Drawing.Size(156, 28)
        Me.ClearButton.TabIndex = 19
        Me.ClearButton.Text = "Clear List !! "
        Me.ClearButton.UseVisualStyleBackColor = True
        '
        'MyListForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(501, 518)
        Me.Controls.Add(Me.ClearButton)
        Me.Controls.Add(Me.ListBox2)
        Me.Controls.Add(Me.CopyButton)
        Me.Controls.Add(Me.InputLabel)
        Me.Controls.Add(Me.InputTextBox)
        Me.Controls.Add(Me.MiddleButton)
        Me.Controls.Add(Me.DeleteButton)
        Me.Controls.Add(Me.PrependButton)
        Me.Controls.Add(Me.AppendButton)
        Me.Controls.Add(Me.BackButton)
        Me.Controls.Add(Me.FrontButton)
        Me.Controls.Add(Me.SortButton)
        Me.Controls.Add(Me.UniqueButton)
        Me.Controls.Add(Me.InsertButton)
        Me.Controls.Add(Me.PushBackButton)
        Me.Controls.Add(Me.PushFrontButton)
        Me.Controls.Add(Me.DisplayButton)
        Me.Controls.Add(Me.ListBox1)
        Me.Name = "MyListForm"
        Me.Text = "MyList"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents DisplayButton As System.Windows.Forms.Button
    Friend WithEvents PushFrontButton As System.Windows.Forms.Button
    Friend WithEvents PushBackButton As System.Windows.Forms.Button
    Friend WithEvents InsertButton As System.Windows.Forms.Button
    Friend WithEvents UniqueButton As System.Windows.Forms.Button
    Friend WithEvents SortButton As System.Windows.Forms.Button
    Friend WithEvents MiddleButton As System.Windows.Forms.Button
    Friend WithEvents DeleteButton As System.Windows.Forms.Button
    Friend WithEvents PrependButton As System.Windows.Forms.Button
    Friend WithEvents AppendButton As System.Windows.Forms.Button
    Friend WithEvents BackButton As System.Windows.Forms.Button
    Friend WithEvents FrontButton As System.Windows.Forms.Button
    Friend WithEvents ListBox1 As System.Windows.Forms.ListBox
    Friend WithEvents InputTextBox As System.Windows.Forms.TextBox
    Friend WithEvents InputLabel As System.Windows.Forms.Label
    Friend WithEvents CopyButton As System.Windows.Forms.Button
    Friend WithEvents ListBox2 As System.Windows.Forms.ListBox
    Friend WithEvents ClearButton As System.Windows.Forms.Button

End Class
