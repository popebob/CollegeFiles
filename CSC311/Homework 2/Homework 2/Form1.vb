Public Class BookSalesForm
    'Cody Adams
    'CSC311-01
    'Winter 2010
    'Assignment 2

    'When the project starts, user enters quantity, title and unit price of the book he wants
    'When he clicks calculate, the extended price, discount and discounted price get displayed
    'Clear sale clears the entries and provides the summary info and becomes ready for the next “title” to be entered
    'Exit provides the day’s summary and waits for the user to click ok and then stops

    Private Sub ExitButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ExitButton.Click
        MsgBox("Number of books sold: " & NumberSoldTextBox.Text & Chr(13) & "Total of discounted prices: " & TotalFinalPriceTextBox.Text & Chr(13) & "Total of discounts: " & TotalDiscountsTextBox.Text & Chr(13) & "Average Discount per Book: " & AverageDiscountTextBox.Text, MsgBoxStyle.Information)
        End
    End Sub

    Private Sub ClearButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ClearButton.Click
        If DiscountedPriceTextBox.Text = "" Then
            MsgBox("Calculate First!")
            Exit Sub
        End If
        Dim NumSold As Integer
        Dim TotalDiscounts As Double
        Dim TotalSales As Double
        TotalSales = Val(Mid(TotalFinalPriceTextBox.Text, 2) + Val(Mid(DiscountedPriceTextBox.Text, 2)))
        TotalDiscounts = Val(Mid(TotalDiscountsTextBox.Text, 2)) + Val(Mid(DiscountTextBox.Text, 2))
        NumSold = Int(QuantityTextBox.Text)
        QuantityTextBox.Text = ""
        TitleTextBox.Text = ""
        UnitPriceTextBox.Text = ""
        ExtendedPriceTextBox.Text = ""
        DiscountedPriceTextBox.Text = ""
        DiscountTextBox.Text = ""
        NumberSoldTextBox.Text = (Int(NumberSoldTextBox.Text) + NumSold).ToString
        TotalFinalPriceTextBox.Text = TotalSales.ToString("C")
        AverageDiscountTextBox.Text = (TotalDiscounts / NumSold).ToString("C")
        TotalDiscountsTextBox.Text = TotalDiscounts.ToString("C")
        QuantityTextBox.Focus()
    End Sub

    Private Sub CalculateButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CalculateButton.Click
        If QuantityTextBox.Text = "" Then
            MsgBox("Please enter a quantity!")
            Exit Sub
        End If
        If UnitPriceTextBox.Text = "" Then
            MsgBox("Please enter a Unit Price!")
            Exit Sub
        End If
        Dim qtyInteger As Integer, uPriceDec As Single
        Dim xPriceDec As Single, discountDec As Single
        Dim discountedPriceDec As Single
        Const DISCOUNT_RATE_decimal = 0.15
        qtyInteger = Integer.Parse(QuantityTextBox.Text)
        uPriceDec = Single.Parse(UnitPriceTextBox.Text)
        discountDec = uPriceDec * DISCOUNT_RATE_decimal
        xPriceDec = qtyInteger * uPriceDec
        discountedPriceDec = qtyInteger * (uPriceDec - discountDec)
        ExtendedPriceTextBox.Text = Format(xPriceDec, "Currency")
        DiscountTextBox.Text = Format((qtyInteger * (discountDec)), "Currency")
        DiscountedPriceTextBox.Text = Format(discountedPriceDec, "Currency")
        ClearButton.Focus()
    End Sub

End Class
