VERSION 5.00
Begin VB.Form frmAutoCenter 
   Caption         =   "VB Auto Center"
   ClientHeight    =   5340
   ClientLeft      =   2235
   ClientTop       =   3015
   ClientWidth     =   6615
   LinkTopic       =   "Form1"
   ScaleHeight     =   5340
   ScaleWidth      =   6615
   Begin VB.TextBox txtTradeIn 
      Alignment       =   1  'Right Justify
      Height          =   405
      Left            =   4560
      TabIndex        =   16
      Text            =   "0"
      Top             =   3120
      Width           =   1575
   End
   Begin VB.TextBox txtSalesPrice 
      Alignment       =   1  'Right Justify
      Height          =   405
      Left            =   4560
      TabIndex        =   12
      Top             =   240
      Width           =   1575
   End
   Begin VB.Frame fraFinish 
      Caption         =   "Car Exterior Finsh"
      Height          =   1695
      Left            =   120
      TabIndex        =   8
      Top             =   2520
      Width           =   2295
      Begin VB.OptionButton optFinish 
         Caption         =   "Customized &Detailing"
         Height          =   375
         Index           =   2
         Left            =   240
         TabIndex        =   11
         Top             =   1200
         Width           =   1935
      End
      Begin VB.OptionButton optFinish 
         Caption         =   "P&earlized"
         Height          =   255
         Index           =   1
         Left            =   240
         TabIndex        =   10
         Top             =   840
         Width           =   1455
      End
      Begin VB.OptionButton optFinish 
         Caption         =   "S&tandard"
         Height          =   375
         Index           =   0
         Left            =   240
         TabIndex        =   9
         Top             =   360
         Value           =   -1  'True
         Width           =   1455
      End
   End
   Begin VB.CommandButton cdmExit 
      Caption         =   "E&xit"
      Height          =   495
      Left            =   5280
      TabIndex        =   7
      Top             =   4680
      Width           =   1215
   End
   Begin VB.CommandButton cmdPrint 
      Caption         =   "&Print Form"
      Height          =   495
      Left            =   3600
      TabIndex        =   6
      Top             =   4680
      Width           =   1215
   End
   Begin VB.CommandButton cmdClear 
      Cancel          =   -1  'True
      Caption         =   "C&lear"
      Height          =   495
      Left            =   1920
      TabIndex        =   5
      Top             =   4680
      Width           =   1215
   End
   Begin VB.CommandButton cmdCalculate 
      Caption         =   "&Calculate"
      Default         =   -1  'True
      Height          =   495
      Left            =   240
      TabIndex        =   4
      Top             =   4680
      Width           =   1215
   End
   Begin VB.Frame fraAccessories 
      Caption         =   "Accessories"
      Height          =   1695
      Left            =   120
      TabIndex        =   0
      Top             =   240
      Width           =   2295
      Begin VB.CheckBox chkAccessories 
         Caption         =   "Computer &Navigation"
         Height          =   195
         Index           =   2
         Left            =   240
         TabIndex        =   3
         Top             =   1320
         Width           =   1935
      End
      Begin VB.CheckBox chkAccessories 
         Caption         =   "Leather &Interior"
         Height          =   195
         Index           =   1
         Left            =   240
         TabIndex        =   2
         Top             =   840
         Width           =   1575
      End
      Begin VB.CheckBox chkAccessories 
         Caption         =   "&Stereo System"
         Height          =   195
         Index           =   0
         Left            =   240
         TabIndex        =   1
         Top             =   360
         Width           =   1455
      End
   End
   Begin VB.Label Label6 
      AutoSize        =   -1  'True
      Caption         =   "Amount Due:"
      Height          =   195
      Left            =   3480
      TabIndex        =   23
      Top             =   3960
      Width           =   930
   End
   Begin VB.Label Label5 
      AutoSize        =   -1  'True
      Caption         =   "&Trade-In Allowance:"
      Height          =   195
      Left            =   3000
      TabIndex        =   22
      Top             =   3240
      Width           =   1425
   End
   Begin VB.Label Label4 
      AutoSize        =   -1  'True
      Caption         =   "Subtotal:"
      Height          =   195
      Left            =   3840
      TabIndex        =   21
      Top             =   2520
      Width           =   630
   End
   Begin VB.Label Label3 
      AutoSize        =   -1  'True
      Caption         =   "Sales Tax (8%):"
      Height          =   195
      Left            =   3360
      TabIndex        =   20
      Top             =   1800
      Width           =   1095
   End
   Begin VB.Label Label2 
      AutoSize        =   -1  'True
      Caption         =   "Accessories && Finish:"
      Height          =   195
      Left            =   3000
      TabIndex        =   19
      Top             =   1080
      Width           =   1485
   End
   Begin VB.Label Label1 
      AutoSize        =   -1  'True
      Caption         =   "C&ar's Sales Price:"
      Height          =   195
      Left            =   3240
      TabIndex        =   18
      Top             =   360
      Width           =   1230
   End
   Begin VB.Label lblAmountDue 
      Alignment       =   1  'Right Justify
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4560
      TabIndex        =   17
      Top             =   3840
      Width           =   1575
   End
   Begin VB.Label lblSubTotal 
      Alignment       =   1  'Right Justify
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4560
      TabIndex        =   15
      Top             =   2400
      Width           =   1575
   End
   Begin VB.Label lblTax 
      Alignment       =   1  'Right Justify
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4560
      TabIndex        =   14
      Top             =   1680
      Width           =   1575
   End
   Begin VB.Label lblAccessories 
      Alignment       =   1  'Right Justify
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4560
      TabIndex        =   13
      Top             =   960
      Width           =   1575
   End
End
Attribute VB_Name = "frmAutoCenter"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
'Cody Adams
'CSC273 - Program #4
'Spring 2003
'The instructor's example exe lists the leather interior accessories at the price of 987.41
'I used the 987.47 listed on the website, if graded against the exe, this discrepancy will be found
Option Explicit
'Variable declarations for all major program values
Public SalesPrice As Currency, Accessories As Currency, Total As Currency, TradeInValue As Currency
Public Finish As Currency, SubTotal As Currency, Tax As Currency

Private Sub cdmExit_Click()
'Exits the program
End
End Sub

Private Sub cmdCalculate_Click()
'Declaring the dummy variable used in the for...next statement below
Dim Dummy As Integer
'Check to make sure there is a valid value in txtSalesPrice, if not, prompt for one and reset the focus
If SalesPrice = 0 Then
    MsgBox "Please enter a valid sale price."
    txtSalesPrice.Text = ""
    txtSalesPrice.SetFocus
    Exit Sub
End If
'Initialize variables
Accessories = 0
Finish = 0
'Use the dummy variable to step through the checkbox and option button arrays, checking which ones are selected
For Dummy = 0 To 2
    If chkAccessories(Dummy).Value = 1 Then     'Current array element is checked
        Select Case Dummy   'Find which one is the current element
            Case 0  'First element (Stereo System)
                Accessories = Accessories + 425.76
            Case 1  'Second element (Leather Interior, see comments in general section of frmAutoCenter)
                Accessories = Accessories + 987.47
            Case 2  'Third element (Computer Navigation)
                Accessories = Accessories + 1741.23
        End Select
    End If
    If optFinish(Dummy).Value = True Then   'Current array element is selected
        Select Case Dummy   'Find which one is the current element, Standard is run-time enabled, so it is skipped
            Case 1  'Second element (Pearlized Finish)
                Finish = 345.72
            Case 2  'Third element (Customized Detailing)
                Finish = 599.99
        End Select
    End If
Next Dummy
'Calculate tax
Tax = (SalesPrice + Accessories + Finish) * 0.08
'Calculate subtotal
SubTotal = SalesPrice + Accessories + Finish + Tax
'Display all information with the proper formatting
lblAccessories.Caption = FormatCurrency((Accessories + Finish))
lblTax.Caption = FormatCurrency(Tax)
lblSubTotal.Caption = FormatCurrency(SubTotal)
txtTradeIn.Text = FormatCurrency(TradeInValue)
lblAmountDue = FormatCurrency(SubTotal - TradeInValue)
txtSalesPrice.Text = FormatCurrency(SalesPrice)
'Reset the focus for next input
txtSalesPrice.SetFocus
End Sub

Private Sub cmdClear_Click()
'Declare dummy variable use to reset the checkbox array
Dim Dummy As Integer
'Step through the array
For Dummy = 0 To 2
    chkAccessories(Dummy).Value = False
Next Dummy
'Reset the checkbox array
optFinish(0).Value = True
'Reset all the textboxes and labels
txtSalesPrice = ""
lblAccessories.Caption = ""
lblTax.Caption = ""
lblSubTotal.Caption = ""
txtTradeIn.Text = 0
lblAmountDue.Caption = ""
'Reset the focus for next input
txtSalesPrice.SetFocus
End Sub

Private Sub cmdPrint_Click()
'Pretty self-explanatory; PrintForm...Prints the form
PrintForm
End Sub

Private Sub txtSalesPrice_Change()
'Read the sales price value as it is entered
SalesPrice = Val(txtSalesPrice.Text)
End Sub

Private Sub txtTradeIn_Change()
'Read the trade-in value as it is entered
TradeInValue = Val(txtTradeIn.Text)
End Sub
