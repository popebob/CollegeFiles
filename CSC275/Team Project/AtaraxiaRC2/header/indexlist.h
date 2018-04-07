#ifndef INDEXLIST_H
#define INDEXLIST_H

#include <string>
#include <fstream>
#include "./pageq.h"

using namespace std;


class indexlist
{
public:
  indexlist() { head= NULL; maxsize=0; }                              // Initalize linked list and maxsize varible
  void insertNode(string, int);                                       // See indexlist.cc or readme for commenting
  void displayList(ostream&);                                         // See indexlist.cc or readme for commenting 
  void putmaxword (unsigned int b) { if (maxsize < b)  maxsize=b;  } // Assigns a wordsize maximum
  unsigned int getmaxword () { return maxsize; }                    // Returns the maximum wordsize
  ~indexlist() { };
private:
  class index_node
    {
      friend class indexlist;
      string theword;
      pageq pages;
      index_node *next;
      index_node(string input, int page, index_node *next1=NULL)
        {

        //Constructer which takes in a word, a number and a linked list pointer
        //+ that allows the list to increase size by one unit, assigning the
        //+ varibles taken in to the varibles set in the current link.  This
        //+ is the actual function to make an additional link in the list.

        //PRE:  legal premitive datatypes taken in
        //POST: linked list increases size by one, and assigned designated values to
        //      + the varibles.

          theword=input;
          pages.add(page);
          next=next1;
        }
    };
  unsigned int maxsize;
  index_node *head;
};

#endif
