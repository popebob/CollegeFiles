/*
PageQueue source code
Cody Adams
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <cctype>
#include <queue>
#include "../header/pageq.h"

using namespace std;

/*
pageq – a queue class of page numbers, for occurances of a word in the book.
Minimum operations required for this class include:
	1.	constructor – make an empty queue
		**pageq()**
	2.	Qinsert (PageNum) – If PageNum is not in the queue, add  PageNum to the end of this queue.
		**add(int)**
	3.	PrintQ () – prints out from front to back the numbers in this queue.
		**printQ()**
	4.	destructor, if the queue is implemented as a dynamic data structure.
		**Maybe Not needed**
*/

void pageq::add(int pagenum)
{
    if ( pq.empty() )
   	{
        cout << "Pushing: " << pagenum;
        pq.push(pagenum);
    }
    else if ( pagenum != pq.back() ) 
	{
        cout << "Pushing: " << pagenum;
        pq.push(pagenum);
    }
}

void pageq::printQ()
{
	int size;
	size = pq.size();
    cout << "Printing queue of size: " << size << endl;
    for (int x = 0; x > pq.size(); x++)
	{
      int temp;
      temp = pq.front();
      cout << temp << ", " << endl;
      pq.pop();
      pq.push(temp);
    }
}
