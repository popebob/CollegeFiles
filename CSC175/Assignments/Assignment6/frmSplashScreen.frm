VERSION 5.00
Begin VB.Form frmSplashScreen 
   BorderStyle     =   0  'None
   ClientHeight    =   4515
   ClientLeft      =   0
   ClientTop       =   0
   ClientWidth     =   6465
   LinkTopic       =   "Form1"
   ScaleHeight     =   4515
   ScaleWidth      =   6465
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdContinue 
      Caption         =   "&Continue"
      Height          =   495
      Left            =   2640
      TabIndex        =   1
      Top             =   3840
      Width           =   1215
   End
   Begin VB.Frame Frame1 
      Height          =   3615
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   6135
      Begin VB.Label lblCopyright 
         Caption         =   "Copyright 2003"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   9.75
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   3600
         TabIndex        =   4
         Top             =   2880
         Width           =   1575
      End
      Begin VB.Label lblVersionNumber 
         Caption         =   "Version 6.0"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   12
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   3600
         TabIndex        =   3
         Top             =   2520
         Width           =   1575
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
         Left            =   2880
         TabIndex        =   2
         Top             =   720
         Width           =   2895
      End
      Begin VB.Image imgIcon 
         Height          =   1680
         Left            =   600
         Picture         =   "frmSplashScreen.frx":0000
         Stretch         =   -1  'True
         Top             =   1200
         Width           =   2040
      End
   End
End
Attribute VB_Name = "frmSplashScreen"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub cmdContinue_Click()
Load frmMainMenu
frmMainMenu.Show
Unload Me
End Sub
