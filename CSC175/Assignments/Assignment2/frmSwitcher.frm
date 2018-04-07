VERSION 5.00
Begin VB.Form frmSwitcher 
   Caption         =   "Form1"
   ClientHeight    =   5055
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4965
   ForeColor       =   &H00000000&
   LinkTopic       =   "Form1"
   ScaleHeight     =   5055
   ScaleWidth      =   4965
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdExit 
      Cancel          =   -1  'True
      Caption         =   "E&xit"
      Height          =   495
      Left            =   3360
      TabIndex        =   6
      Top             =   4440
      Width           =   1215
   End
   Begin VB.CommandButton cmdClear 
      Caption         =   "&Clear"
      Default         =   -1  'True
      Height          =   495
      Left            =   3360
      TabIndex        =   5
      Top             =   3840
      Width           =   1215
   End
   Begin VB.Frame fraTextColor 
      Caption         =   "Text Color"
      Height          =   2175
      Left            =   240
      TabIndex        =   10
      Top             =   960
      Width           =   1935
      Begin VB.OptionButton optGreen 
         Caption         =   "&Green"
         Height          =   255
         Left            =   240
         TabIndex        =   4
         Top             =   1800
         Width           =   975
      End
      Begin VB.OptionButton optRed 
         Caption         =   "&Red"
         Height          =   255
         Left            =   240
         TabIndex        =   3
         Top             =   1320
         Width           =   975
      End
      Begin VB.OptionButton optBlue 
         Caption         =   "B&lue"
         Height          =   255
         Left            =   240
         TabIndex        =   2
         Top             =   840
         Width           =   1095
      End
      Begin VB.OptionButton optBlack 
         Caption         =   "&Black"
         Height          =   255
         Left            =   240
         TabIndex        =   1
         Top             =   360
         Value           =   -1  'True
         Width           =   975
      End
   End
   Begin VB.TextBox txtName 
      Height          =   375
      Left            =   1800
      TabIndex        =   0
      Top             =   240
      Width           =   2655
   End
   Begin VB.Image imgOn 
      BorderStyle     =   1  'Fixed Single
      Height          =   1815
      Left            =   2400
      Picture         =   "frmSwitcher.frx":0000
      Stretch         =   -1  'True
      ToolTipText     =   "Click here to turn the light off"
      Top             =   1080
      Visible         =   0   'False
      Width           =   1935
   End
   Begin VB.Image imgOff 
      BorderStyle     =   1  'Fixed Single
      Height          =   1815
      Left            =   2400
      Picture         =   "frmSwitcher.frx":0442
      Stretch         =   -1  'True
      ToolTipText     =   "Click here to turn the light on"
      Top             =   1080
      Width           =   1935
   End
   Begin VB.Label lblProgrammerInfo 
      AutoSize        =   -1  'True
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Programmer : Cody Adams"
      Height          =   255
      Left            =   360
      TabIndex        =   8
      Top             =   4320
      Width           =   1920
   End
   Begin VB.Label lblOutput 
      AutoSize        =   -1  'True
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Turn the light on, ."
      Height          =   255
      Left            =   2040
      TabIndex        =   7
      Top             =   3360
      Width           =   1350
   End
   Begin VB.Label lblName 
      AutoSize        =   -1  'True
      Caption         =   "Name"
      Height          =   195
      Left            =   360
      TabIndex        =   9
      Top             =   360
      Width           =   420
   End
End
Attribute VB_Name = "frmSwitcher"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
'Cody Adams
'CSC273 - Program #2
'Spring 2003
Option Explicit
Dim UserName As String

Private Sub cmdClear_Click()
    'Clear lblOutput
    lblOutput.Caption = ""
    'Clear txtName
    txtName.Text = ""
    'Reset the focus to txtName
    txtName.SetFocus
    'Clear the UserName variable
    UserName = ""
End Sub

Private Sub cmdExit_Click()
    'Exit the program
    End
End Sub

Private Sub imgOff_Click()
    'Turn the off light invisible, turn the on light visible
    imgOff.Visible = False
    imgOn.Visible = True
    'Change the message in lblOutput
    lblOutput.Caption = "Turn the light off, " & UserName
End Sub

Private Sub imgOn_Click()
    'Turn the on light invisible, turn the off light visible
    imgOn.Visible = False
    imgOff.Visible = True
    'Change the message in lblOutput
    lblOutput.Caption = "Turn the light on, " & UserName
End Sub

Private Sub optBlack_Click()
    'Change the lblOutput ForeColor to Black
    lblOutput.ForeColor = &H80000012
End Sub

Private Sub optBlue_Click()
    'Change the lblOutput ForeColor to Blue
    lblOutput.ForeColor = &HFF0000
End Sub

Private Sub optGreen_Click()
    'Change the lblOutput ForeColor to Green
    lblOutput.ForeColor = &H8000&
End Sub

Private Sub optRed_Click()
    'Change the lblOutput ForeColor to Red
    lblOutput.ForeColor = &HFF&
End Sub

Private Sub txtName_Change()
    UserName = txtName.Text
    'Change the message in lblOutput
    lblOutput.Caption = "Turn the light off, " & UserName
End Sub
