'Student Structure to better associate the distances with the cities
Public Class City
    Public Name As String
    Public Distances() As Integer

    'Construcor
    Public Sub New(ByVal NumCities As Integer)
        Name = ""
        ReDim Distances(NumCities)
    End Sub
End Class
