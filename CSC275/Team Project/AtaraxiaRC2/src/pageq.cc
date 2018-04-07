/*
PageQueue source code
Cody Adams
*/

#include "../header/pageq.h"


#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <cctype>
#include <queue>

using namespace std;

/*
pageq  a queue class of page numbers, for occurances of a word in the book.
Minimum operations required for this class include:
	1.	constructor  make an empty queue
		**pageq()**
	2.	Qinsert (PageNum)  If PageNum is not in the queue, add  PageNum to the end of this queue.
		**add(int)**
	3.	PrintQ ()  prints out from front to back the numbers in this queue.
		**printQ()**
*/

//add member function used to append data to the queue
// PRE:>  	value of type int is passed
// POST:> 	passed integer is appended to the back of the stl queue container

void pageq::add(int pagenum)
{
  pq.push(pagenum);
}

// PRE:>  	none
// POST:> 	currents contents of the queue are displayed by stepping through the queue with a for loop
//       	+ print the current front entry and then perform a pop and push to put the value to the back
//       	+ so that when the function is done, the queue is back in its original order.

void pageq::printQ(ostream &vout)
{
  int temp;		//temp variable used to store the current value so that it is not lost during the pop/push
  for (int x = 0; x < pq.front(); x++)
    {
      temp = pq.front();		
      if ( x == 0 )
        vout << " " << temp << ", ";
      else
        vout << temp << ", ";
      pq.pop();	
      pq.push(temp);
    }	
}
