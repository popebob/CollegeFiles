<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmChoose
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
        Me.btn8 = New System.Windows.Forms.Button
        Me.btn10 = New System.Windows.Forms.Button
        Me.frmExit = New System.Windows.Forms.Button
        Me.SuspendLayout()
        '
        'btn8
        '
        Me.btn8.Location = New System.Drawing.Point(40, 31)
        Me.btn8.Name = "btn8"
        Me.btn8.Size = New System.Drawing.Size(75, 23)
        Me.btn8.TabIndex = 0
        Me.btn8.Text = "8-Bit"
        Me.btn8.UseVisualStyleBackColor = True
        '
        'btn10
        '
        Me.btn10.Location = New System.Drawing.Point(217, 31)
        Me.btn10.Name = "btn10"
        Me.btn10.Size = New System.Drawing.Size(75, 23)
        Me.btn10.TabIndex = 1
        Me.btn10.Text = "10-Bit"
        Me.btn10.UseVisualStyleBackColor = True
        '
        'frmExit
        '
        Me.frmExit.Location = New System.Drawing.Point(129, 56)
        Me.frmExit.Name = "frmExit"
        Me.frmExit.Size = New System.Drawing.Size(75, 23)
        Me.frmExit.TabIndex = 2
        Me.frmExit.Text = "Exit"
        Me.frmExit.UseVisualStyleBackColor = True
        '
        'frmChoose
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(341, 91)
        Me.Controls.Add(Me.frmExit)
        Me.Controls.Add(Me.btn10)
        Me.Controls.Add(Me.btn8)
        Me.Name = "frmChoose"
        Me.Text = "Please choose length of binary to convert"
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents btn8 As System.Windows.Forms.Button
    Friend WithEvents btn10 As System.Windows.Forms.Button
    Friend WithEvents frmExit As System.Windows.Forms.Button
End Class
