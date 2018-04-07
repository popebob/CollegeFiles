VERSION 5.00
Begin VB.Form frmShipping 
   Caption         =   "Shipping Charges by Cody Adams"
   ClientHeight    =   3195
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   3195
   ScaleWidth      =   4680
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdClose 
      Caption         =   "&Close"
      Height          =   495
      Left            =   3240
      TabIndex        =   9
      Top             =   2520
      Width           =   1215
   End
   Begin VB.CommandButton cmdClear 
      Caption         =   "Clea&r"
      Height          =   495
      Left            =   1680
      TabIndex        =   8
      Top             =   2520
      Width           =   1215
   End
   Begin VB.CommandButton cmdCalculate 
      Cancel          =   -1  'True
      Caption         =   "Calcula&te Charges"
      Height          =   495
      Left            =   240
      TabIndex        =   7
      Top             =   2520
      Width           =   1215
   End
   Begin VB.Frame fraData 
      Caption         =   "Shipping Data"
      Height          =   2175
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   4455
      Begin VB.TextBox txtCharges 
         BackColor       =   &H80000000&
         Height          =   375
         Left            =   2520
         Locked          =   -1  'True
         TabIndex        =   6
         Top             =   1560
         Width           =   1335
      End
      Begin VB.TextBox txtDistance 
         Height          =   375
         Left            =   2520
         TabIndex        =   5
         Top             =   960
         Width           =   1335
      End
      Begin VB.TextBox txtWeight 
         Height          =   375
         Left            =   2520
         TabIndex        =   4
         Top             =   360
         Width           =   1335
      End
      Begin VB.Label lblCharges 
         Alignment       =   1  'Right Justify
         Caption         =   "Shipping Charges:"
         Height          =   255
         Left            =   240
         TabIndex        =   3
         Top             =   1560
         Width           =   2175
      End
      Begin VB.Label lblDistance 
         Alignment       =   1  'Right Justify
         Caption         =   "Distance of delivery:"
         Height          =   255
         Left            =   240
         TabIndex        =   2
         Top             =   960
         Width           =   2175
      End
      Begin VB.Label lblWeight 
         Alignment       =   1  'Right Justify
         Caption         =   "Package weight (in kilograms):"
         Height          =   375
         Left            =   240
         TabIndex        =   1
         Top             =   360
         Width           =   2175
      End
   End
End
Attribute VB_Name = "frmShipping"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
'Cody Adams
'CSC273 - Program #3
'Spring 2003
Option Explicit
Dim Weight As Single, Distance As Single, ShipRate As Currency

Private Sub cmdCalculate_Click()
txtCharges.Text = ""
If Weight <= 0 Or Weight > 20 Then
    MsgBox "Enter a weight in the range of 0 - 20 kilograms.", vbOKOnly, "Input Error"
    txtWeight.SetFocus
    Exit Sub
End If
If Distance < 10 Or Distance > 3000 Then
    MsgBox "Enter a distance in the range of 10 - 3000 miles.", vbOKOnly, "Input Error"
    txtDistance.SetFocus
    Exit Sub
End If
If Weight <= 2 And Weight > 0 Then ShipRate = 0.01
If Weight <= 6 And Weight > 2 Then ShipRate = 0.015
If Weight <= 10 And Weight > 6 Then ShipRate = 0.02
If Weight <= 20 And Weight > 10 Then ShipRate = 0.025
txtCharges.Text = FormatCurrency(ShipRate * Distance)
End Sub

Private Sub cmdClear_Click()
txtDistance.Text = ""
txtWeight.Text = ""
txtCharges.Text = ""
End Sub

Private Sub cmdClose_Click()
End
End Sub

Private Sub txtDistance_Change()
Distance = Val(txtDistance.Text)
End Sub

Private Sub txtWeight_Change()
Weight = Val(txtWeight.Text)
End Sub
