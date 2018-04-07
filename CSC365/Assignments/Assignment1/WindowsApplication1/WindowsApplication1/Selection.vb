Public Class frmChoose

    Private Sub btn8_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btn8.Click
        frm8.Show()
        Me.Hide()
    End Sub

    Private Sub btn10_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btn10.Click
        frm10.Show()
        Me.Hide()
    End Sub

    Private Sub frmExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles frmExit.Click
        Close()
    End Sub
End Class