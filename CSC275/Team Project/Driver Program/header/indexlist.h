#ifndef INDEXLIST_H
#define INDEXLIST_H

#include <string>
#include "./pageq.h"

using namespace std;

class indexlist
{
public:
  indexlist() { head= NULL; };
  void insertNode(string, int);
  void displayList();
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
          theword=input;
          pages.add(page);
          next=next1;
        }
    };
  index_node *head;
};
#endif
