/*
PageQueue source code
Cody Adams
*/

#ifndef PAGEQ_H
#define PAGEQ_H

#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <cctype>
#include <queue>

using namespace std;

//Header class used to define pageq constructor and it member functions, add and printQ

class pageq
{
  public:
		//Default constructor
		pageq(){};
		//add member function used to append data to the queue
		void add(int);
		//printQ member function used to print the queue to the screen
		void printQ(ostream&);
  
  private:
    	//private class variable of type queue used to perform all class function operations
		queue<int> pq;
};
#endif
