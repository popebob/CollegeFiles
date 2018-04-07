VERSION 5.00
Begin VB.Form frmAdvice 
   Caption         =   "Free Advice"
   ClientHeight    =   3345
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4125
   LinkTopic       =   "Form1"
   ScaleHeight     =   3345
   ScaleWidth      =   4125
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdExit 
      Caption         =   "E&xit"
      Height          =   495
      Left            =   2520
      TabIndex        =   4
      Top             =   2280
      Width           =   1215
   End
   Begin VB.CommandButton cmdWealth 
      Caption         =   "&Wealth"
      Height          =   495
      Left            =   480
      TabIndex        =   3
      Top             =   2280
      Width           =   1215
   End
   Begin VB.CommandButton cmdHealth 
      Caption         =   "&Health"
      Height          =   495
      Left            =   2520
      TabIndex        =   2
      Top             =   1560
      Width           =   1215
   End
   Begin VB.CommandButton cmdFriendship 
      Caption         =   "&Friendship"
      Height          =   495
      Left            =   480
      TabIndex        =   1
      Top             =   1560
      Width           =   1215
   End
   Begin VB.Label lblCredits 
      Alignment       =   2  'Center
      Caption         =   "by I.M. Wize"
      Height          =   255
      Left            =   120
      TabIndex        =   5
      Top             =   3000
      Width           =   3855
   End
   Begin VB.Label lblAdvice 
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   13.5
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1095
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   3855
   End
End
Attribute VB_Name = "frmAdvice"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
'Cody Adams
'CSC273 - Program #1
'Spring 2003

Private Sub cmdExit_Click()
    'Exit the program
    End
End Sub

Private Sub cmdFriendship_Click()
    'Display the saying on click
    lblAdvice.Caption = "A friend in need is a friend indeed."
End Sub


Private Sub cmdHealth_Click()
    'Display the saying on click
    lblAdvice.Caption = "An apple a day keeps the doctor away."
End Sub

Private Sub cmdWealth_Click()
    'Display the saying on click
    lblAdvice.Caption = "A penny saved is a penny earned."
End Sub
