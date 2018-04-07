Public Class MyList

    Const TOTALSIZE As Integer = 20
    Private element(TOTALSIZE) As Integer
    Dim USEDSIZE As Integer

    'Constructor
    Public Sub New()
        USEDSIZE = 0
    End Sub

    'append(data)	same as push_back(data)
    Function append(ByVal data As Integer) As Boolean
        push_back(data)
    End Function

    'prepend(data)	same as push_front(data)
    Function prepend(ByVal data As Integer) As Boolean
        push_front(data)
    End Function

    'push_front(data)	puts data in the front
    Function push_front(ByVal data As Integer) As Boolean
        Dim x As Integer
        If USEDSIZE < TOTALSIZE Then
            USEDSIZE = USEDSIZE + 1
            For x = USEDSIZE To 1 Step -1
                element(x) = element(x - 1)
            Next x
            element(0) = data
        Else
            MessageBox.Show("MyList is too big already !! ")
            Return False
        End If
    End Function

    'push_back(data)	puts data in the back
    Function push_back(ByVal data) As Boolean
        If USEDSIZE < TOTALSIZE Then
            element(USEDSIZE) = data
            USEDSIZE = USEDSIZE + 1
        Else
            MessageBox.Show("MyList is too big already !! ")
            Return False
        End If
    End Function

    'pop_front()		removes data in the front
    Function pop_front() As Integer
        Dim temp As Integer
        Dim x As Integer
        If USEDSIZE > 0 Then
            temp = element(0)
            For x = 0 To USEDSIZE
                element(x) = element(USEDSIZE + 1)
            Next x
            USEDSIZE = USEDSIZE - 1
        Else
            MessageBox.Show("MyList is empty !! ")
            Return False
        End If
    End Function

    'pop_back()		removes data from the back
    Function pop_back() As Integer
        Dim temp As Integer
        If USEDSIZE > 0 Then
            temp = element(USEDSIZE - 1)
            USEDSIZE = USEDSIZE - 1
        Else
            MessageBox.Show("MyList is empty !! ")
            Return False
        End If
    End Function

    'middle(ndx)		returns the data at index: ndx
    Function middle(ByVal ndx) As Integer
        If USEDSIZE > 0 Then
            Return element(ndx)
        Else
            MessageBox.Show("MyList is empty !! ")
            Return False
        End If
    End Function

    'front()		returns the data in the front of the list
    Function front() As Integer
        If USEDSIZE > 0 Then
            Return element(0)
        Else
            MessageBox.Show("MyList is empty !! ")
            Return False
        End If
    End Function

    'back()		returns the data in the back of the list
    Function back() As Integer
        If USEDSIZE > 0 Then
            Return element(USEDSIZE - 1)
        Else

            MessageBox.Show("MyList is empty !! ")
            Return False
        End If
    End Function

    'Clear()		clears all the data from the List and makes the List empty
    Function Clear() As Integer
        Dim temp As Boolean
        temp = Empty()
        While temp = False
            pop_front()
            temp = Empty()
        End While
    End Function

    'Empty()		returns true if the List is empty otherwise returns false
    Function Empty()
        If USEDSIZE = 0 Then
            Return True
        Else
            Return False
        End If
    End Function

    'Size()         return current size of MyList
    Function Size() As Integer
        Return USEDSIZE
    End Function

    'delete(ndx)		deletes the data at the index ndx and moves following data items left one space
    Function delete(ByVal ndx As Integer) As Boolean
        Dim x As Integer
        If USEDSIZE > 0 Then
            For x = ndx To USEDSIZE
                element(x) = element(x + 1)
            Next
            USEDSIZE = USEDSIZE - 1
        Else
            MessageBox.Show("MyList is empty !! ")
            Return False
        End If
    End Function

    'insert(ndx, data)	insert data at the position ndx moving current data to the right
    Function insert(ByVal ndx As Integer, ByVal data As Integer) As Boolean
        Dim x As Integer
        If ndx <= USEDSIZE Then
            If ndx = 0 Then
                push_front(data)
            Else
                For x = USEDSIZE To ndx
                    element(x) = element(x - 1)
                Next
                USEDSIZE = USEDSIZE + 1
                element(ndx) = data
            End If
        Else
            MessageBox.Show("MyList is too small to insert at that index !! ")
            Return False
        End If
            If USEDSIZE >= TOTALSIZE Then
                MessageBox.Show("MyLisy is too big already !! ")
                Return False
            End If
    End Function

    'sort(ndx1, ndx2)	sort the data items in the range ndx1 to ndx2
    Function sort(ByVal ndx1 As Integer, ByVal ndx2 As Integer) As Boolean
        Dim x As Integer
        Dim min As Integer
        Dim max As Integer
        Dim Swap As Integer
        Dim SwapMade As Boolean
        If ndx2 > USEDSIZE Then
            ndx2 = USEDSIZE - 2
        End If
        min = ndx1
        max = ndx2
        Do
            SwapMade = False
            For x = min To max
                If element(x) > element(x + 1) Then
                    Swap = element(x)
                    element(x) = element(x + 1)
                    element(x + 1) = Swap
                    SwapMade = True
                End If
            Next
            max = max - 1
        Loop Until Not SwapMade
    End Function

    'make_copy()		make a copy of the list
    Function make_copy() As MyList
        Dim x As Integer
        Dim NewList As New MyList
        For x = 0 To (USEDSIZE - 1)
            NewList.push_back(element(x))
        Next
        Return NewList
    End Function

    'unique		given a sorted list, remove duplicates in the list and return this new list
    Function unique() As MyList
        Dim temp As Integer
        Dim x As Integer
        Dim y As Integer
        Dim ExistsInNew As Boolean
        Dim newlist As New MyList
        For x = 0 To USEDSIZE
            temp = element(x)
            For y = 0 To x
                If temp = newlist.element(y) Then
                    ExistsInNew = True
                End If
            Next
            If ExistsInNew = False Then
                newlist.push_back(temp)
            End If
            ExistsInNew = False
        Next
        Return newlist
    End Function

End Class
