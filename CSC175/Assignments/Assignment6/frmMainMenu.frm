VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Begin VB.Form frmMainMenu 
   Caption         =   "VB Auto Center"
   ClientHeight    =   4215
   ClientLeft      =   165
   ClientTop       =   735
   ClientWidth     =   6270
   LinkTopic       =   "Form1"
   ScaleHeight     =   4215
   ScaleWidth      =   6270
   StartUpPosition =   3  'Windows Default
   Begin MSComDlg.CommonDialog dlgFont 
      Left            =   240
      Top             =   3600
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin MSComDlg.CommonDialog dlgColor 
      Left            =   240
      Top             =   3120
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin VB.Line linAccent 
      BorderWidth     =   2
      X1              =   2280
      X2              =   4320
      Y1              =   2040
      Y2              =   2040
   End
   Begin VB.Label lblSlogan 
      Alignment       =   2  'Center
      AutoSize        =   -1  'True
      Caption         =   "Meeting all your vehicle's needs"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   12
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   300
      Left            =   2160
      TabIndex        =   1
      Top             =   2400
      Width           =   3315
   End
   Begin VB.Label lblProgName 
      Alignment       =   2  'Center
      Caption         =   "Visual Basic Auto Center"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   18
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   975
      Left            =   480
      TabIndex        =   0
      Top             =   600
      Width           =   2895
   End
   Begin VB.Menu mnuFile 
      Caption         =   "&File"
      Begin VB.Menu mnuInputSale 
         Caption         =   "Input &Sale"
      End
      Begin VB.Menu mnuExit 
         Caption         =   "E&xit"
      End
   End
   Begin VB.Menu mnuEdit 
      Caption         =   "&Edit"
      Begin VB.Menu mnuColor 
         Caption         =   "&Color"
      End
      Begin VB.Menu mnuFont 
         Caption         =   "&Font"
      End
   End
   Begin VB.Menu mnuHelp 
      Caption         =   "&Help"
      Begin VB.Menu mnuAbout 
         Caption         =   "&About"
      End
   End
End
Attribute VB_Name = "frmMainMenu"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub mnuAbout_Click()
'Display programmer "About form"
Load frmAbout
frmAbout.Show vbModal
End Sub

Private Sub mnuColor_Click()
'Show the color dialog
dlgColor.ShowColor
'Set the calculated font color to the user selected one
lblProgName.ForeColor = dlgColor.Color
lblSlogan.ForeColor = dlgColor.Color
linAccent.BorderColor = dlgColor.Color
End Sub

Private Sub mnuExit_Click()
'Exits the program
End
End Sub

Private Sub mnuFont_Click()
'Show the font dialog
dlgFont.ShowFont
'Set the calculated font to the user selected one (See above comment in general declarations section)
lblProgName.Font = dlgFont.FontName
lblSlogan.Font = dlgFont.FontName
End Sub


Private Sub mnuInputSale_Click()
Load frmAutoCenter
frmAutoCenter.Show
End Sub
