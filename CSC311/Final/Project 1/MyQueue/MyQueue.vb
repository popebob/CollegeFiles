Public Class MyQueue

    Const TOTALSIZE As Integer = 30
    Private element(TOTALSIZE) As Integer
    Dim USEDSIZE As Integer

    'Constructor
    Public Sub New()
        USEDSIZE = 0
    End Sub

    'Push(data)	puts an integer in the back of the queue
    Function Push(ByVal data As Integer) As Boolean
        If USEDSIZE < TOTALSIZE Then
            element(USEDSIZE) = data
            USEDSIZE = USEDSIZE + 1
        Else
            MessageBox.Show("MyQueue is too big already !! ")
        End If
    End Function


    'Pop()		removes the integer in the front of the queue
    Function Pop() As Integer
        Dim temp As Integer
        Dim x As Integer
        If USEDSIZE > 0 Then
            temp = element(0)
            For x = 0 To USEDSIZE
                element(x) = element(x + 1)
            Next x
            USEDSIZE = USEDSIZE - 1
            Return temp
        Else
            MessageBox.Show("MyQueue is already empty !! ")
        End If

    End Function

    'Front()		returns the data in the front of the queue
    Function Front() As Integer
        If USEDSIZE > 0 Then
            Return element(0)
        Else
            MessageBox.Show("MyQueue is empty !! ")
        End If
    End Function

    'Back()		returns the data in the back of the queue
    Function Back() As Integer
        If USEDSIZE > 0 Then
            Return element(USEDSIZE - 1)
        Else

            MessageBox.Show("MyQueue is empty !! ")
        End If
    End Function
    'Clear()		clears all the data from the queue and makes the queue empty
    Function Clear() As Integer
        Dim temp As Boolean
        temp = Empty()
        While temp = False
            Pop()
            temp = Empty()
        End While
    End Function

    'Empty()		returns true if the queue is empty otherwise returns false
    Function Empty()
        If USEDSIZE = 0 Then
            Return True
        Else
            Return False
        End If
    End Function

    'Size()         return current size of MyQueue
    Function Size() As Integer
        Return USEDSIZE
    End Function

End Class
