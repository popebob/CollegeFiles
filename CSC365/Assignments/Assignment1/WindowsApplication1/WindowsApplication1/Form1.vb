Option Explicit On

Public Class frmEight

    Private Sub btnConvert_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnConvert.Click
        lblUnsigned1.Text = txt1.Text * lblUnsigned1.Text
        lblUnsigned2.Text = txt2.Text * lblUnsigned2.Text
        lblUnsigned3.Text = txt3.Text * lblUnsigned3.Text
        lblUnsigned4.Text = txt4.Text * lblUnsigned4.Text
        lblUnsigned5.Text = txt5.Text * lblUnsigned5.Text
        lblUnsigned6.Text = txt6.Text * lblUnsigned6.Text
        lblUnsigned7.Text = txt7.Text * lblUnsigned7.Text
        lblUnsigned8.Text = txt8.Text * lblUnsigned8.Text
        Dim Unsigned As Integer
        Unsigned = Int(lblUnsigned1.Text) + Int(lblUnsigned2.Text) + Int(lblUnsigned3.Text) + Int(lblUnsigned4.Text) + Int(lblUnsigned5.Text) + Int(lblUnsigned6.Text) + Int(lblUnsigned7.Text) + Int(lblUnsigned8.Text)
        lblUnsigned.Text = Unsigned
        lblSigned1.Text = txt1.Text * lblSigned1.Text
        lblSigned2.Text = txt2.Text * lblSigned2.Text
        lblSigned3.Text = txt3.Text * lblSigned3.Text
        lblSigned4.Text = txt4.Text * lblSigned4.Text
        lblSigned5.Text = txt5.Text * lblSigned5.Text
        lblSigned6.Text = txt6.Text * lblSigned6.Text
        lblSigned7.Text = txt7.Text * lblSigned7.Text
        lblSigned8.Text = txt8.Text * lblSigned8.Text
        Dim Signed As Integer
        signed = Int(lblSigned1.Text) + Int(lblSigned2.Text) + Int(lblSigned3.Text) + Int(lblSigned4.Text) + Int(lblSigned5.Text) + Int(lblSigned6.Text) + Int(lblSigned7.Text) + Int(lblSigned8.Text)
        lblSigned.Text = Signed
        btnConvert.Enabled = False
    End Sub

    Private Sub lblReset_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles lblReset.Click
        btnConvert.Enabled = True
        lblUnsigned1.Text = 1
        lblUnsigned2.Text = 2
        lblUnsigned3.Text = 4
        lblUnsigned4.Text = 8
        lblUnsigned5.Text = 16
        lblUnsigned6.Text = 32
        lblUnsigned7.Text = 64
        lblUnsigned8.Text = 128
        lblSigned1.Text = 1
        lblSigned2.Text = 2
        lblSigned3.Text = 4
        lblSigned4.Text = 8
        lblSigned5.Text = 16
        lblSigned6.Text = 32
        lblSigned7.Text = 64
        lblSigned8.Text = 128
        txt1.Text = ""
        txt2.Text = ""
        txt3.Text = ""
        txt4.Text = ""
        txt5.Text = ""
        txt6.Text = ""
        txt7.Text = ""
        txt8.Text = ""
    End Sub
End Class
