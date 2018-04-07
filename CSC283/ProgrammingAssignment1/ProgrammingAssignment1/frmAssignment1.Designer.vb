<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment1
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
        Me.txtFile = New System.Windows.Forms.TextBox
        Me.cmdInput = New System.Windows.Forms.Button
        Me.lblFile = New System.Windows.Forms.Label
        Me.lblProgress = New System.Windows.Forms.Label
        Me.prbProgress = New System.Windows.Forms.ProgressBar
        Me.cdlOpen = New System.Windows.Forms.OpenFileDialog
        Me.lblInstructions = New System.Windows.Forms.Label
        Me.SuspendLayout()
        '
        'txtFile
        '
        Me.txtFile.Location = New System.Drawing.Point(74, 76)
        Me.txtFile.Name = "txtFile"
        Me.txtFile.ReadOnly = True
        Me.txtFile.Size = New System.Drawing.Size(338, 21)
        Me.txtFile.TabIndex = 1
        Me.txtFile.Text = "Use the Select... Button to open the file"
        '
        'cmdInput
        '
        Me.cmdInput.Location = New System.Drawing.Point(438, 71)
        Me.cmdInput.Name = "cmdInput"
        Me.cmdInput.Size = New System.Drawing.Size(82, 26)
        Me.cmdInput.TabIndex = 2
        Me.cmdInput.Text = "Select..."
        Me.cmdInput.UseVisualStyleBackColor = True
        '
        'lblFile
        '
        Me.lblFile.AutoSize = True
        Me.lblFile.Location = New System.Drawing.Point(43, 55)
        Me.lblFile.Name = "lblFile"
        Me.lblFile.Size = New System.Drawing.Size(91, 18)
        Me.lblFile.TabIndex = 3
        Me.lblFile.Text = "File to analyze:"
        '
        'lblProgress
        '
        Me.lblProgress.AutoSize = True
        Me.lblProgress.Location = New System.Drawing.Point(43, 154)
        Me.lblProgress.Name = "lblProgress"
        Me.lblProgress.Size = New System.Drawing.Size(107, 18)
        Me.lblProgress.TabIndex = 4
        Me.lblProgress.Text = "File Load Progess:"
        '
        'prbProgress
        '
        Me.prbProgress.Location = New System.Drawing.Point(156, 153)
        Me.prbProgress.Name = "prbProgress"
        Me.prbProgress.Size = New System.Drawing.Size(364, 19)
        Me.prbProgress.TabIndex = 5
        '
        'cdlOpen
        '
        Me.cdlOpen.FileName = "Select a file to analyze"
        '
        'lblInstructions
        '
        Me.lblInstructions.AutoSize = True
        Me.lblInstructions.Location = New System.Drawing.Point(12, 21)
        Me.lblInstructions.MaximumSize = New System.Drawing.Size(600, 0)
        Me.lblInstructions.Name = "lblInstructions"
        Me.lblInstructions.Size = New System.Drawing.Size(546, 18)
        Me.lblInstructions.TabIndex = 6
        Me.lblInstructions.Text = "This program will analyze a specified file and output information about its chara" & _
            "cter composition"
        Me.lblInstructions.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'frmAssignment1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 18.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.AutoScroll = True
        Me.ClientSize = New System.Drawing.Size(570, 219)
        Me.Controls.Add(Me.lblInstructions)
        Me.Controls.Add(Me.prbProgress)
        Me.Controls.Add(Me.lblProgress)
        Me.Controls.Add(Me.lblFile)
        Me.Controls.Add(Me.cmdInput)
        Me.Controls.Add(Me.txtFile)
        Me.Font = New System.Drawing.Font("Trebuchet MS", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Margin = New System.Windows.Forms.Padding(3, 4, 3, 4)
        Me.Name = "frmAssignment1"
        Me.Text = "File Character Analysis"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

    End Sub
    Friend WithEvents Label1 As System.Windows.Forms.Label

    Private Sub Label1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs)

    End Sub
    Friend WithEvents lblInstuctions As System.Windows.Forms.Label

    Private Sub lblInstuctions_Click(ByVal sender As System.Object, ByVal e As System.EventArgs)

    End Sub

    Private Sub Panel1_Paint(ByVal sender As System.Object, ByVal e As System.Windows.Forms.PaintEventArgs)
    End Sub
    Friend WithEvents txtFile As System.Windows.Forms.TextBox
    Friend WithEvents cmdInput As System.Windows.Forms.Button
    Friend WithEvents lblFile As System.Windows.Forms.Label
    Friend WithEvents lblProgress As System.Windows.Forms.Label
    Friend WithEvents prbProgress As System.Windows.Forms.ProgressBar
    Friend WithEvents cdlOpen As System.Windows.Forms.OpenFileDialog

    Private Sub OpenFileDialog1_FileOk(ByVal sender As System.Object, ByVal e As System.ComponentModel.CancelEventArgs) Handles cdlOpen.FileOk

    End Sub
    Friend WithEvents lblInstructions As System.Windows.Forms.Label

    Private Sub cmdInput_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles cmdInput.Click
        cdlOpen.ShowDialog()
        txtFile.Text = cdlOpen.FileName
        prbProgress.Value = 100
    End Sub
End Class
