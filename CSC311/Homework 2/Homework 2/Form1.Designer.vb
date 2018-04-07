<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class BookSalesForm
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
        Me.QuantityLabel = New System.Windows.Forms.Label
        Me.QuantityTextBox = New System.Windows.Forms.TextBox
        Me.TitleLabel = New System.Windows.Forms.Label
        Me.UnitPriceLabel = New System.Windows.Forms.Label
        Me.ExtendedPriceLabel = New System.Windows.Forms.Label
        Me.Label5 = New System.Windows.Forms.Label
        Me.Label6 = New System.Windows.Forms.Label
        Me.Label7 = New System.Windows.Forms.Label
        Me.Label8 = New System.Windows.Forms.Label
        Me.Label9 = New System.Windows.Forms.Label
        Me.NumberSoldLabel = New System.Windows.Forms.Label
        Me.CalculateButton = New System.Windows.Forms.Button
        Me.ClearButton = New System.Windows.Forms.Button
        Me.ExitButton = New System.Windows.Forms.Button
        Me.TitleTextBox = New System.Windows.Forms.TextBox
        Me.UnitPriceTextBox = New System.Windows.Forms.TextBox
        Me.ExtendedPriceTextBox = New System.Windows.Forms.TextBox
        Me.DiscountTextBox = New System.Windows.Forms.TextBox
        Me.DiscountedPriceTextBox = New System.Windows.Forms.TextBox
        Me.TotalDiscountsTextBox = New System.Windows.Forms.TextBox
        Me.TotalFinalPriceTextBox = New System.Windows.Forms.TextBox
        Me.NumberSoldTextBox = New System.Windows.Forms.TextBox
        Me.Label11 = New System.Windows.Forms.Label
        Me.AverageDiscountTextBox = New System.Windows.Forms.TextBox
        Me.Label12 = New System.Windows.Forms.Label
        Me.SuspendLayout()
        '
        'QuantityLabel
        '
        Me.QuantityLabel.AutoSize = True
        Me.QuantityLabel.Location = New System.Drawing.Point(15, 60)
        Me.QuantityLabel.Name = "QuantityLabel"
        Me.QuantityLabel.Size = New System.Drawing.Size(46, 13)
        Me.QuantityLabel.TabIndex = 0
        Me.QuantityLabel.Text = "Quantity"
        '
        'QuantityTextBox
        '
        Me.QuantityTextBox.Location = New System.Drawing.Point(84, 53)
        Me.QuantityTextBox.Name = "QuantityTextBox"
        Me.QuantityTextBox.Size = New System.Drawing.Size(189, 20)
        Me.QuantityTextBox.TabIndex = 1
        '
        'TitleLabel
        '
        Me.TitleLabel.AutoSize = True
        Me.TitleLabel.Location = New System.Drawing.Point(15, 86)
        Me.TitleLabel.Name = "TitleLabel"
        Me.TitleLabel.Size = New System.Drawing.Size(27, 13)
        Me.TitleLabel.TabIndex = 2
        Me.TitleLabel.Text = "Title"
        '
        'UnitPriceLabel
        '
        Me.UnitPriceLabel.AutoSize = True
        Me.UnitPriceLabel.Location = New System.Drawing.Point(15, 108)
        Me.UnitPriceLabel.Name = "UnitPriceLabel"
        Me.UnitPriceLabel.Size = New System.Drawing.Size(50, 13)
        Me.UnitPriceLabel.TabIndex = 3
        Me.UnitPriceLabel.Text = "UnitPrice"
        '
        'ExtendedPriceLabel
        '
        Me.ExtendedPriceLabel.AutoSize = True
        Me.ExtendedPriceLabel.Location = New System.Drawing.Point(35, 138)
        Me.ExtendedPriceLabel.Name = "ExtendedPriceLabel"
        Me.ExtendedPriceLabel.Size = New System.Drawing.Size(79, 13)
        Me.ExtendedPriceLabel.TabIndex = 4
        Me.ExtendedPriceLabel.Text = "Extended Price"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(35, 164)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(72, 13)
        Me.Label5.TabIndex = 5
        Me.Label5.Text = "15% Discount"
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Location = New System.Drawing.Point(35, 193)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(88, 13)
        Me.Label6.TabIndex = 6
        Me.Label6.Text = "Discounted Price"
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Font = New System.Drawing.Font("Microsoft Sans Serif", 13.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label7.Location = New System.Drawing.Point(12, 212)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(187, 22)
        Me.Label7.TabIndex = 7
        Me.Label7.Text = "Summary at day's end"
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Location = New System.Drawing.Point(15, 303)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(91, 13)
        Me.Label8.TabIndex = 8
        Me.Label8.Text = "Total of discounts"
        '
        'Label9
        '
        Me.Label9.AutoSize = True
        Me.Label9.Location = New System.Drawing.Point(13, 277)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(129, 13)
        Me.Label9.TabIndex = 9
        Me.Label9.Text = "Total of discounted prices"
        '
        'NumberSoldLabel
        '
        Me.NumberSoldLabel.AutoSize = True
        Me.NumberSoldLabel.Location = New System.Drawing.Point(15, 251)
        Me.NumberSoldLabel.Name = "NumberSoldLabel"
        Me.NumberSoldLabel.Size = New System.Drawing.Size(110, 13)
        Me.NumberSoldLabel.TabIndex = 10
        Me.NumberSoldLabel.Text = "Number of books sold"
        '
        'CalculateButton
        '
        Me.CalculateButton.Location = New System.Drawing.Point(12, 369)
        Me.CalculateButton.Name = "CalculateButton"
        Me.CalculateButton.Size = New System.Drawing.Size(79, 37)
        Me.CalculateButton.TabIndex = 4
        Me.CalculateButton.Text = "&Calculate"
        Me.CalculateButton.UseVisualStyleBackColor = True
        '
        'ClearButton
        '
        Me.ClearButton.Location = New System.Drawing.Point(106, 369)
        Me.ClearButton.Name = "ClearButton"
        Me.ClearButton.Size = New System.Drawing.Size(79, 37)
        Me.ClearButton.TabIndex = 5
        Me.ClearButton.Text = "C&lear Sale"
        Me.ClearButton.UseVisualStyleBackColor = True
        '
        'ExitButton
        '
        Me.ExitButton.Location = New System.Drawing.Point(198, 369)
        Me.ExitButton.Name = "ExitButton"
        Me.ExitButton.Size = New System.Drawing.Size(79, 37)
        Me.ExitButton.TabIndex = 6
        Me.ExitButton.Text = "E&xit"
        Me.ExitButton.UseVisualStyleBackColor = True
        '
        'TitleTextBox
        '
        Me.TitleTextBox.Location = New System.Drawing.Point(84, 79)
        Me.TitleTextBox.Name = "TitleTextBox"
        Me.TitleTextBox.Size = New System.Drawing.Size(189, 20)
        Me.TitleTextBox.TabIndex = 2
        '
        'UnitPriceTextBox
        '
        Me.UnitPriceTextBox.Location = New System.Drawing.Point(84, 101)
        Me.UnitPriceTextBox.Name = "UnitPriceTextBox"
        Me.UnitPriceTextBox.Size = New System.Drawing.Size(189, 20)
        Me.UnitPriceTextBox.TabIndex = 3
        '
        'ExtendedPriceTextBox
        '
        Me.ExtendedPriceTextBox.Enabled = False
        Me.ExtendedPriceTextBox.Location = New System.Drawing.Point(129, 131)
        Me.ExtendedPriceTextBox.Name = "ExtendedPriceTextBox"
        Me.ExtendedPriceTextBox.Size = New System.Drawing.Size(143, 20)
        Me.ExtendedPriceTextBox.TabIndex = 16
        '
        'DiscountTextBox
        '
        Me.DiscountTextBox.Enabled = False
        Me.DiscountTextBox.Location = New System.Drawing.Point(129, 157)
        Me.DiscountTextBox.Name = "DiscountTextBox"
        Me.DiscountTextBox.Size = New System.Drawing.Size(143, 20)
        Me.DiscountTextBox.TabIndex = 17
        '
        'DiscountedPriceTextBox
        '
        Me.DiscountedPriceTextBox.Enabled = False
        Me.DiscountedPriceTextBox.Location = New System.Drawing.Point(129, 186)
        Me.DiscountedPriceTextBox.Name = "DiscountedPriceTextBox"
        Me.DiscountedPriceTextBox.Size = New System.Drawing.Size(143, 20)
        Me.DiscountedPriceTextBox.TabIndex = 18
        '
        'TotalDiscountsTextBox
        '
        Me.TotalDiscountsTextBox.Enabled = False
        Me.TotalDiscountsTextBox.Location = New System.Drawing.Point(156, 296)
        Me.TotalDiscountsTextBox.Name = "TotalDiscountsTextBox"
        Me.TotalDiscountsTextBox.Size = New System.Drawing.Size(118, 20)
        Me.TotalDiscountsTextBox.TabIndex = 19
        Me.TotalDiscountsTextBox.Text = "0"
        '
        'TotalFinalPriceTextBox
        '
        Me.TotalFinalPriceTextBox.Enabled = False
        Me.TotalFinalPriceTextBox.Location = New System.Drawing.Point(156, 270)
        Me.TotalFinalPriceTextBox.Name = "TotalFinalPriceTextBox"
        Me.TotalFinalPriceTextBox.Size = New System.Drawing.Size(118, 20)
        Me.TotalFinalPriceTextBox.TabIndex = 20
        Me.TotalFinalPriceTextBox.Text = "$0"
        '
        'NumberSoldTextBox
        '
        Me.NumberSoldTextBox.Enabled = False
        Me.NumberSoldTextBox.Location = New System.Drawing.Point(156, 244)
        Me.NumberSoldTextBox.Name = "NumberSoldTextBox"
        Me.NumberSoldTextBox.Size = New System.Drawing.Size(118, 20)
        Me.NumberSoldTextBox.TabIndex = 21
        Me.NumberSoldTextBox.Text = "0"
        '
        'Label11
        '
        Me.Label11.AutoSize = True
        Me.Label11.Font = New System.Drawing.Font("Microsoft Sans Serif", 17.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label11.Location = New System.Drawing.Point(33, 9)
        Me.Label11.Name = "Label11"
        Me.Label11.Size = New System.Drawing.Size(132, 29)
        Me.Label11.TabIndex = 22
        Me.Label11.Text = "Book sales"
        '
        'AverageDiscountTextBox
        '
        Me.AverageDiscountTextBox.Enabled = False
        Me.AverageDiscountTextBox.Location = New System.Drawing.Point(156, 324)
        Me.AverageDiscountTextBox.Name = "AverageDiscountTextBox"
        Me.AverageDiscountTextBox.Size = New System.Drawing.Size(118, 20)
        Me.AverageDiscountTextBox.TabIndex = 24
        Me.AverageDiscountTextBox.Text = "0"
        '
        'Label12
        '
        Me.Label12.AutoSize = True
        Me.Label12.Location = New System.Drawing.Point(15, 331)
        Me.Label12.Name = "Label12"
        Me.Label12.Size = New System.Drawing.Size(135, 13)
        Me.Label12.TabIndex = 23
        Me.Label12.Text = "Average discount per book"
        '
        'BookSalesForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(286, 411)
        Me.Controls.Add(Me.AverageDiscountTextBox)
        Me.Controls.Add(Me.Label12)
        Me.Controls.Add(Me.Label11)
        Me.Controls.Add(Me.NumberSoldTextBox)
        Me.Controls.Add(Me.TotalFinalPriceTextBox)
        Me.Controls.Add(Me.TotalDiscountsTextBox)
        Me.Controls.Add(Me.DiscountedPriceTextBox)
        Me.Controls.Add(Me.DiscountTextBox)
        Me.Controls.Add(Me.ExtendedPriceTextBox)
        Me.Controls.Add(Me.UnitPriceTextBox)
        Me.Controls.Add(Me.TitleTextBox)
        Me.Controls.Add(Me.ExitButton)
        Me.Controls.Add(Me.ClearButton)
        Me.Controls.Add(Me.CalculateButton)
        Me.Controls.Add(Me.NumberSoldLabel)
        Me.Controls.Add(Me.Label9)
        Me.Controls.Add(Me.Label8)
        Me.Controls.Add(Me.Label7)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.ExtendedPriceLabel)
        Me.Controls.Add(Me.UnitPriceLabel)
        Me.Controls.Add(Me.TitleLabel)
        Me.Controls.Add(Me.QuantityTextBox)
        Me.Controls.Add(Me.QuantityLabel)
        Me.Name = "BookSalesForm"
        Me.Text = "Book sales"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents QuantityLabel As System.Windows.Forms.Label
    Friend WithEvents QuantityTextBox As System.Windows.Forms.TextBox
    Friend WithEvents TitleLabel As System.Windows.Forms.Label
    Friend WithEvents UnitPriceLabel As System.Windows.Forms.Label
    Friend WithEvents ExtendedPriceLabel As System.Windows.Forms.Label
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents Label7 As System.Windows.Forms.Label
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents Label9 As System.Windows.Forms.Label
    Friend WithEvents NumberSoldLabel As System.Windows.Forms.Label
    Friend WithEvents CalculateButton As System.Windows.Forms.Button
    Friend WithEvents ClearButton As System.Windows.Forms.Button
    Friend WithEvents ExitButton As System.Windows.Forms.Button
    Friend WithEvents TitleTextBox As System.Windows.Forms.TextBox
    Friend WithEvents UnitPriceTextBox As System.Windows.Forms.TextBox
    Friend WithEvents ExtendedPriceTextBox As System.Windows.Forms.TextBox
    Friend WithEvents DiscountTextBox As System.Windows.Forms.TextBox
    Friend WithEvents DiscountedPriceTextBox As System.Windows.Forms.TextBox
    Friend WithEvents TotalDiscountsTextBox As System.Windows.Forms.TextBox
    Friend WithEvents TotalFinalPriceTextBox As System.Windows.Forms.TextBox
    Friend WithEvents NumberSoldTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label11 As System.Windows.Forms.Label
    Friend WithEvents AverageDiscountTextBox As System.Windows.Forms.TextBox
    Friend WithEvents Label12 As System.Windows.Forms.Label

End Class
