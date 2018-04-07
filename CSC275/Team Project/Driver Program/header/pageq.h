/*
PageQueue header file
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


class pageq
{
  public:
		pageq(){};
		void add(int);
		void printQ();
  
  private:
    	queue<int> pq;
};

#endif
