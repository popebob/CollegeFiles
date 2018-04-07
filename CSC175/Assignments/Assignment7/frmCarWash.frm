VERSION 5.00
Begin VB.Form frmCarWash 
   Caption         =   "VB Auto Center - Car Wash"
   ClientHeight    =   4260
   ClientLeft      =   165
   ClientTop       =   735
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   4260
   ScaleWidth      =   4680
   StartUpPosition =   3  'Windows Default
   Begin VB.ListBox lstPackages 
      Height          =   645
      ItemData        =   "frmCarWash.frx":0000
      Left            =   2760
      List            =   "frmCarWash.frx":0010
      TabIndex        =   5
      Top             =   120
      Width           =   1215
   End
   Begin VB.ComboBox cboFragances 
      Height          =   315
      ItemData        =   "frmCarWash.frx":0039
      Left            =   2400
      List            =   "frmCarWash.frx":004F
      TabIndex        =   4
      Text            =   "Select a Fragance"
      Top             =   2760
      Visible         =   0   'False
      Width           =   1575
   End
   Begin VB.ListBox lstInterior 
      Height          =   1230
      Left            =   240
      TabIndex        =   1
      Top             =   2760
      Width           =   3735
   End
   Begin VB.ListBox lstExterior 
      Height          =   1230
      Left            =   240
      TabIndex        =   0
      Top             =   960
      Width           =   3735
   End
   Begin VB.Label lblInstructions 
      Alignment       =   2  'Center
      Caption         =   "Select a Detail Package from the list"
      Height          =   435
      Left            =   840
      TabIndex        =   6
      Top             =   120
      Width           =   1935
   End
   Begin VB.Label lblInterior 
      AutoSize        =   -1  'True
      Caption         =   "Interior"
      Height          =   195
      Left            =   240
      TabIndex        =   3
      Top             =   2400
      Width           =   480
   End
   Begin VB.Label lblExterior 
      AutoSize        =   -1  'True
      Caption         =   "Exterior"
      Height          =   195
      Left            =   240
      TabIndex        =   2
      Top             =   600
      Width           =   525
   End
   Begin VB.Menu mnufile 
      Caption         =   "&File"
      Begin VB.Menu mnuPrint 
         Caption         =   "&Print"
      End
      Begin VB.Menu mnuClear 
         Caption         =   "&Clear"
      End
      Begin VB.Menu mnuExit 
         Caption         =   "E&xit"
      End
   End
   Begin VB.Menu mnuHelp 
      Caption         =   "&Help"
      Begin VB.Menu mnuAbout 
         Caption         =   "&About"
      End
   End
End
Attribute VB_Name = "frmCarWash"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
'Cody Adams
'CSC273 - Program #7
'Spring 2003
Option Explicit

Private Sub lstPackages_Click()
'Find out which package is selected
Select Case lstPackages.ListIndex
    Case 0  'Standard
        lstExterior.Clear
        lstInterior.Clear
        lstExterior.AddItem "Hand Wash"
        lstInterior.AddItem "Fragance"
        cboFragances.Visible = True
    Case 1  'Deluxe
        lstExterior.Clear
        lstInterior.Clear
        lstExterior.AddItem "Hand Wash"
        lstExterior.AddItem "Hand Wax"
        lstInterior.AddItem "Fragance"
        lstInterior.AddItem "Shampoo Carpets"
        cboFragances.Visible = True
    Case 2  'Executive
        lstExterior.Clear
        lstInterior.Clear
        lstExterior.AddItem "Hand Wash"
        lstExterior.AddItem "Hand Wax"
        lstExterior.AddItem "Check Engine Fluids"
        lstInterior.AddItem "Fragance"
        lstInterior.AddItem "Shampoo Carpets"
        lstInterior.AddItem "Interior Protection Coat"
        cboFragances.Visible = True
    Case 3  'Luxury
        lstExterior.Clear
        lstInterior.Clear
        lstExterior.AddItem "Hand Wash"
        lstExterior.AddItem "Hand Wax"
        lstExterior.AddItem "Check Engine Fluids"
        lstExterior.AddItem "Detail Engine Compartment"
        lstExterior.AddItem "Detail Under Carriage"
        lstInterior.AddItem "Fragance"
        lstInterior.AddItem "Shampoo Carpets"
        lstInterior.AddItem "Interior Protection Coat"
        lstInterior.AddItem "Shampoo Upholstery"
        cboFragances.Visible = True
End Select
End Sub

Private Sub mnuAbout_Click()
'Show about form
frmAbout.Show
End Sub

Private Sub mnuClear_Click()
'Clear the listboxes
lstPackages.ListIndex = 0
lstPackages.ListIndex = -1
lstExterior.Clear
lstInterior.Clear
cboFragances.ListIndex = 0
cboFragances.ListIndex = -1
cboFragances.Visible = False
End Sub

Private Sub mnuExit_Click()
'Exit the program
End
End Sub

Private Sub mnuPrint_Click()
'Self-explanationatory, print the form
PrintForm
End Sub
