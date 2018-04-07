VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Begin VB.Form frmAutoCenter 
   Caption         =   "VB Auto Center"
   ClientHeight    =   4320
   ClientLeft      =   2235
   ClientTop       =   3300
   ClientWidth     =   6615
   LinkTopic       =   "Form1"
   ScaleHeight     =   4320
   ScaleWidth      =   6615
   Begin MSComDlg.CommonDialog dlgFont 
      Left            =   6120
      Top             =   3240
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin MSComDlg.CommonDialog dlgColor 
      Left            =   6120
      Top             =   3840
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin VB.TextBox txtTradeIn 
      Alignment       =   1  'Right Justify
      Height          =   405
      Left            =   4560
      TabIndex        =   12
      Text            =   "0"
      Top             =   3120
      Width           =   1575
   End
   Begin VB.TextBox txtSalesPrice 
      Alignment       =   1  'Right Justify
      Height          =   405
      Left            =   4560
      TabIndex        =   8
      Top             =   240
      Width           =   1575
   End
   Begin VB.Frame fraFinish 
      Caption         =   "Car Exterior Finsh"
      Height          =   1695
      Left            =   120
      TabIndex        =   4
      Top             =   2520
      Width           =   2295
      Begin VB.OptionButton optFinish 
         Caption         =   "Customized &Detailing"
         Height          =   375
         Index           =   2
         Left            =   240
         TabIndex        =   7
         Top             =   1200
         Width           =   1935
      End
      Begin VB.OptionButton optFinish 
         Caption         =   "P&earlized"
         Height          =   255
         Index           =   1
         Left            =   240
         TabIndex        =   6
         Top             =   840
         Width           =   1455
      End
      Begin VB.OptionButton optFinish 
         Caption         =   "S&tandard"
         Height          =   375
         Index           =   0
         Left            =   240
         TabIndex        =   5
         Top             =   360
         Value           =   -1  'True
         Width           =   1455
      End
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
      TabIndex        =   19
      Top             =   3960
      Width           =   930
   End
   Begin VB.Label Label5 
      AutoSize        =   -1  'True
      Caption         =   "&Trade-In Allowance:"
      Height          =   195
      Left            =   3000
      TabIndex        =   18
      Top             =   3240
      Width           =   1425
   End
   Begin VB.Label Label4 
      AutoSize        =   -1  'True
      Caption         =   "Subtotal:"
      Height          =   195
      Left            =   3840
      TabIndex        =   17
      Top             =   2520
      Width           =   630
   End
   Begin VB.Label Label3 
      AutoSize        =   -1  'True
      Caption         =   "Sales Tax (8%):"
      Height          =   195
      Left            =   3360
      TabIndex        =   16
      Top             =   1800
      Width           =   1095
   End
   Begin VB.Label Label2 
      AutoSize        =   -1  'True
      Caption         =   "Accessories && Finish:"
      Height          =   195
      Left            =   3000
      TabIndex        =   15
      Top             =   1080
      Width           =   1485
   End
   Begin VB.Label Label1 
      AutoSize        =   -1  'True
      Caption         =   "C&ar's Sales Price:"
      Height          =   195
      Left            =   3240
      TabIndex        =   14
      Top             =   360
      Width           =   1230
   End
   Begin VB.Label lblAmountDue 
      Alignment       =   1  'Right Justify
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4560
      TabIndex        =   13
      Top             =   3840
      Width           =   1575
   End
   Begin VB.Label lblSubTotal 
      Alignment       =   1  'Right Justify
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4560
      TabIndex        =   11
      Top             =   2400
      Width           =   1575
   End
   Begin VB.Label lblTax 
      Alignment       =   1  'Right Justify
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4560
      TabIndex        =   10
      Top             =   1680
      Width           =   1575
   End
   Begin VB.Label lblAccessories 
      Alignment       =   1  'Right Justify
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4560
      TabIndex        =   9
      Top             =   960
      Width           =   1575
   End
   Begin VB.Menu mnuFile 
      Caption         =   "&File"
      Begin VB.Menu mnuPrint 
         Caption         =   "&Print Form"
      End
      Begin VB.Menu mnuExit 
         Caption         =   "E&xit"
      End
   End
   Begin VB.Menu mnuEdit 
      Caption         =   "&Edit"
      Begin VB.Menu mnuCalculate 
         Caption         =   "&Calculate"
      End
      Begin VB.Menu mnuClear 
         Caption         =   "C&lear"
      End
      Begin VB.Menu mnuSeperator 
         Caption         =   "-"
      End
      Begin VB.Menu mnuFont 
         Caption         =   "&Font"
      End
      Begin VB.Menu mnuColor 
         Caption         =   "C&olor"
      End
   End
   Begin VB.Menu mnuHelp 
      Caption         =   "&Help"
      Begin VB.Menu mnuAbout 
         Caption         =   "&About"
      End
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
'Another problem, I could not get the font dialog to work on my system, it kept saying that I had non installed
'I know I do, if this problem continues, i would like to be given a chance to further troubleshoot,
'I have been working on it all day, even recuited my roomate, who finished this class last fall, to no avail
Option Explicit
'Variable declarations for all major program values
Public SalesPrice As Currency, Accessories As Currency, Total As Currency, TradeInValue As Currency
Public Finish As Currency, SubTotal As Currency, Tax As Currency

Private Sub mnuAbout_Click()
'Display programmer information
MsgBox "VB Auto Center" & Chr(13) & Chr(13) & "Programmed by Cody Adams", , "About Auto Center"
End Sub

Private Sub mnuCalculate_Click()
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

Private Sub mnuClear_Click()
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

Private Sub mnuColor_Click()
'Show the color dialog
dlgColor.ShowColor
'Set the calculated font color to the user selected one
lblAmountDue.ForeColor = dlgColor.Color
End Sub

Private Sub mnuExit_Click()
'Exits the program
End
End Sub

Private Sub mnuFont_Click()
'Show the font dialog
dlgFont.ShowFont
'Set the calculated font to the user selected one (See above comment in general declarations section)
lblAmountDue.Font = dlgFont.FontName
End Sub

Private Sub mnuPrint_Click()
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
