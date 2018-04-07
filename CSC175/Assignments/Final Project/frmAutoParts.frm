VERSION 5.00
Begin VB.Form frmAutoParts 
   Caption         =   "VB Auto Center"
   ClientHeight    =   2925
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5985
   LinkTopic       =   "Form1"
   ScaleHeight     =   2925
   ScaleWidth      =   5985
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdExit 
      Caption         =   "E&xit"
      Height          =   495
      Left            =   3000
      TabIndex        =   3
      Top             =   2280
      Width           =   1215
   End
   Begin VB.CommandButton cmdClear 
      Cancel          =   -1  'True
      Caption         =   "Cl&ear"
      Height          =   495
      Left            =   1560
      TabIndex        =   2
      Top             =   2280
      Width           =   1215
   End
   Begin VB.CommandButton cmdLookup 
      Caption         =   "&Lookup"
      Default         =   -1  'True
      Height          =   495
      Left            =   120
      TabIndex        =   1
      Top             =   2280
      Width           =   1215
   End
   Begin VB.Frame fraSelect 
      Caption         =   "Select Brand and Enter Part Number"
      Height          =   1935
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   3255
      Begin VB.TextBox txtPartNumber 
         Height          =   285
         Left            =   1800
         TabIndex        =   6
         Top             =   840
         Width           =   1215
      End
      Begin VB.Frame fraBrand 
         Caption         =   "Brand"
         Height          =   1455
         Left            =   120
         TabIndex        =   4
         Top             =   240
         Width           =   1455
         Begin VB.OptionButton optBrands 
            Caption         =   "Brand &X"
            Height          =   195
            Index           =   2
            Left            =   240
            TabIndex        =   11
            Top             =   1080
            Width           =   1095
         End
         Begin VB.OptionButton optBrands 
            Caption         =   "Brand &C"
            Height          =   195
            Index           =   1
            Left            =   240
            TabIndex        =   10
            Top             =   720
            Width           =   1095
         End
         Begin VB.OptionButton optBrands 
            Caption         =   "Brand &A"
            Height          =   195
            Index           =   0
            Left            =   240
            TabIndex        =   9
            Top             =   360
            Width           =   1095
         End
      End
      Begin VB.Label lblTheir 
         Caption         =   "Their &Part Number"
         Height          =   255
         Left            =   1800
         TabIndex        =   5
         Top             =   480
         Width           =   1335
      End
   End
   Begin VB.Label lblEquivalent 
      AutoSize        =   -1  'True
      Caption         =   "Equivalent VB Part Number"
      Height          =   195
      Left            =   3840
      TabIndex        =   8
      Top             =   600
      Width           =   1935
   End
   Begin VB.Label lblPartNumber 
      BorderStyle     =   1  'Fixed Single
      Height          =   255
      Left            =   4080
      TabIndex        =   7
      Top             =   960
      Width           =   1455
   End
End
Attribute VB_Name = "frmAutoParts"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
'Cody Adams
'CSC273 - Final Project
'Spring 2003
'I have very much enjoyed this class, it has re-sparked my interest in programming.
'The online format was great for me, I hope any future online classes I take are as good as this one was
'Mr. Stahl was very helpful and fair in grading

Private Sub cmdClear_Click()
'Reset the option buttons
optBrands(0).Value = True
optBrands(0).Value = False
'Clear the input and ouput fields
lblPartNumber.Caption = ""
txtPartNumber.Text = ""
End Sub

Private Sub cmdExit_Click()
'Exit the program
End
End Sub

Private Sub cmdLookup_Click()
'Declare variables need to perform the look-up
Dim Index As Integer, Found As Boolean, Dummy As Integer
'Initialize variables
Found = False
Index = 0
'Begin lookup
Do Until Found Or Index > 8
    Select Case Brand   'Learn which option button is selected, brand comes from optBrands()_Click subroutine
        Case 0  'Brand A
            For Dummy = 0 To 8  'Go through array
                If PartNumber = Parts(Dummy).BrandA Then    'Eureka! We've done it! Found the right one.
                    VBPartNumber = Parts(Dummy).VB  'Convert the part number
                    Found = True
                End If
            Next
        Case 1  'Brand C
            For Dummy = 0 To 8
                If PartNumber = Parts(Dummy).BrandC Then
                    VBPartNumber = Parts(Dummy).VB
                    Found = True
                End If
            Next
        Case 2  'Brand X
                    For Dummy = 0 To 8
                If PartNumber = Parts(Dummy).BrandX Then
                    VBPartNumber = Parts(Dummy).VB
                    Found = True
                End If
            Next
    End Select
    Index = Index + 1   'Step the the next index in the array
Loop
If Found = True Then    'The part number was found
    lblPartNumber.Caption = VBPartNumber
Else    'The part number was not found
    MsgBox "Invalid part number, Please enter a valid part number", , "Invalid Part Number"
End If
End Sub

Private Sub Form_Load()
'Initialize the array of user-defines types
Parts(0).VB = "PR214"
Parts(0).BrandA = "MR43T"
Parts(0).BrandC = "RBL8"
Parts(0).BrandX = "14K22"

Parts(1).VB = "PR223"
Parts(1).BrandA = "R43"
Parts(1).BrandC = "RJ6"
Parts(1).BrandX = "14K24"

Parts(2).VB = "PR224"
Parts(2).BrandA = "R43N"
Parts(2).BrandC = "RN4"
Parts(2).BrandX = "14K30"

Parts(3).VB = "PR246"
Parts(3).BrandA = "R46N"
Parts(3).BrandC = "RN8"
Parts(3).BrandX = "14K32"

Parts(4).VB = "PR247"
Parts(4).BrandA = "R46TS"
Parts(4).BrandC = "RBL17Y"
Parts(4).BrandX = "14K33"

Parts(5).VB = "PR248"
Parts(5).BrandA = "R46TX"
Parts(5).BrandC = "RBL12-6"
Parts(5).BrandX = "14K35"

Parts(6).VB = "PR324"
Parts(6).BrandA = "S46"
Parts(6).BrandC = "J11"
Parts(6).BrandX = "14K38"

Parts(7).VB = "PR326"
Parts(7).BrandA = "SR46E"
Parts(7).BrandC = "XEJ8"
Parts(7).BrandX = "14K40"

Parts(8).VB = "PR444"
Parts(8).BrandA = "47L"
Parts(8).BrandC = "HT2"
Parts(8).BrandX = "14K44"
End Sub

Private Sub optBrands_Click(Index As Integer)
'Find out which brand is selected, value to be picked up by lookup in cmdLookup_Click subroutine
Select Case Index
    Case 0
        Brand = 0
    Case 1
        Brand = 1
    Case 2
        Brand = 2
End Select
End Sub

Private Sub txtPartNumber_Change()
'Pick up the partnumber entered, convert it to all caps to match lookup array
PartNumber = UCase(txtPartNumber.Text)
End Sub
