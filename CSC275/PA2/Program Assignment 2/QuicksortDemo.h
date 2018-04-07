// QuicksortDemo.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include &lt;cstdlib&gt;
#include &lt;ctime&gt;   // required for time(0)
using namespace std;
const int LIST_SIZE=10;
const bool DEBUG = true;

void swap(int &amp; item1, int&amp; item2);
void quicksort(int theArray[], int first, int last);
void partition(int theArray[], int first, int last, int&amp; pivotIndex);
void printList (int data[], int size); 

int main()
{  
   int data [LIST_SIZE];
   int seed = static_cast&lt;int&gt;(time(0));
   srand(seed);
    //Load random numbers in integer list
   int i, nextRand;
   for (i = 0; i &lt; LIST_SIZE; i++)
   {  
      nextRand = rand();
	  if (DEBUG)  cout &lt;&lt; nextRand &lt;&lt; "\n";
	  data[i] = nextRand/1000;
   }
    cout &lt;&lt;endl&lt;&lt;"Unsorted List"&lt;&lt; endl;
   	printList (data, LIST_SIZE);
   // Sort the data using Quicksort routine
    quicksort(data, 0, LIST_SIZE-1);
	cout &lt;&lt;"\n\nSorted List:\n";
	printList (data, LIST_SIZE);
}
void printList (int data[], int size)
{
    for (int i = 0; i &lt; size; i++)
    {  
      cout &lt;&lt;   data[i]&lt;&lt; "\t";
    }

	cout &lt;&lt; endl;
    for (int i = 0; i &lt; size; i++)
    {  
      cout &lt;&lt;  "["&lt;&lt;i&lt;&lt;"] \t";
    }
	cout &lt;&lt; "\nEnd of data:\n";
}

void swap(int &amp; item1, int&amp; item2)

// Postcondition:
//     item1 equals item2@entry AND item2 equals item1@entry
{
    int tempItem;
    tempItem = item1;
    item1 = item2;
    item2 = tempItem;
}


/** Partitions an array for quicksort.
 * @pre theArray[first..last] is an array; first &lt;= last.
 * @post Partitions theArray[first..last] such that:
 *    S1 = theArray[first..pivotIndex-1] &lt;  pivot
 *         theArray[pivotIndex]          == pivot
 *    S2 = theArray[pivotIndex+1..last]  &gt;= pivot
 * @param theArray  The given array.
 * @param first  The first element to consider in theArray.
 * @param last  The last element to consider in theArray.
 * @param pivotIndex  The index of the pivot after partitioning. */
void partition(int theArray[],int first, int last, int&amp; pivotIndex)
{
   // place pivot in theArray[first]
 
   int pivot = theArray[first];     // copy pivot

   // initially, everything but pivot is in unknown
   int lastS1 = first;           // index of last item in S1
   int firstUnknown = first + 1; // index of first item in
                                 // unknown

   // move one item at a time until unknown region is empty
   for (; firstUnknown &lt;= last; ++firstUnknown)
   {  // Invariant: theArray[first+1..lastS1] &lt; pivot
      //         theArray[lastS1+1..firstUnknown-1] &gt;= pivot

      // move item from unknown to proper region
      if (theArray[firstUnknown] &lt; pivot)
      {  // item from unknown belongs in S1
         ++lastS1;
         swap(theArray[firstUnknown], theArray[lastS1]);
         if (DEBUG)
		 { 
		   cout &lt;&lt; endl&lt;&lt; "pivot = " &lt;&lt; pivot&lt;&lt; ",   firstUnknown = "&lt;&lt;firstUnknown
			    &lt;&lt;", lastS1 = " &lt;&lt; lastS1&lt;&lt; endl;

			 cout &lt;&lt; endl&lt;&lt;"Swapping data at: ["&lt;&lt;firstUnknown&lt;&lt;"] and ["&lt;&lt;lastS1&lt;&lt;"]"
		    &lt;&lt; endl &lt;&lt; "Array after swap:\n";

		  printList(theArray, LIST_SIZE-1);
		 }

      }  // end if

      // else item from unknown belongs in S2
   }  // end for

   // place pivot in proper position and mark its location
   swap(theArray[first], theArray[lastS1]);
   pivotIndex = lastS1;
}  // end partition

/** Sorts the items in an array into ascending order.
 * @pre theArray[first..last] is an array.
 * @post theArray[first..last] is sorted.
 * @param theArray  The given array.
 * @param first  The first element to consider in theArray.
 * @param last  The last element to consider in theArray. */
void quicksort(int theArray[], int first, int last)
{
   int pivotIndex =0;

   if (first &lt; last)
   {  // create the partition: S1, pivot, S2
      if (DEBUG)
	    cout &lt;&lt;"\n\nCalling partition to partion array from first=" &lt;&lt;first
		&lt;&lt; ", last = "&lt;&lt;last&lt;&lt;",  with pivotIndex of: "&lt;&lt; pivotIndex &lt;&lt;endl;
		    
      partition(theArray, first, last, pivotIndex);

      // sort regions S1 and S2
      quicksort(theArray, first, pivotIndex-1);
      quicksort(theArray, pivotIndex+1, last);
   }  // end if
}  // end quicksort
