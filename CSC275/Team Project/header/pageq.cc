#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <cctype>
#include <queue>

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
	5.	Overloaded assignment operator =  (Used in IndexList class to return a pageq in get_current.)  
		**Like JarType**
*/

class pageq
{
	Public:
	{
		pageq();
		void add(int pagenum);
		void printQ();
		pageq operator= (const pageq& word) const;
	}	
}

pageq()
{
	queue<int> pq;
}

void add(int pagenum)
{
	for (int x = 0, x > pq.size, x++)
	{
		if (pagenum == pq[x])
			return;
		else
			pq.push(pagenum);
	}
}

void printQ()
{
	for (int x = 0, x > pq.size, x++)
		cout << pq[x] << ", " << endl;
}

pageq operator= (const pageq& word) const
{
	return pq;
}