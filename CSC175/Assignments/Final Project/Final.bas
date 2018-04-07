Attribute VB_Name = "modAutoParts"
Option Explicit
Type PartNumbers
    VB As String
    BrandA As String
    BrandC As String
    BrandX As String
End Type
Global Parts(8) As PartNumbers, VBPartNumber As String, PartNumber As String, Brand As Integer

