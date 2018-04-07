#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#include "../header/indexlist.h"
#include "./pageq.cc"
bool DEBUG = true;
using namespace std;

void
indexlist::insertNode(string word1, int page)
{
// insertNode first checks to see if linked list is empty.  If so,
//+ make a new link, and assign it to the head pointer.  If it is not,
//+ then assign the pointer PREVIOUS to the first link in the list, and
//+ progress through the list until the object theword of the currently linked
//+ item is less than the string value word1.  When that is true, test for
//+ the case where the entry one step behind the current pointer position
//+ (previous) if it already exists in the list.  If so, then call that link's
//+ Qinsert (add) function to append the current page number to the pageq's 
//+ linked list.  If the theword does not equal the state of PREVIOUS, then
//+ insert a new link in the list in order.

// PRE:>  inputed values are of proper syntax.
// POST:> insertQ function is called if the string currently exists,
//       + if not, the string item is inserted into list in alphabetical
//       + order, creating a new link.

  index_node *node, *previous;
  if (head == NULL || head->theword > word1)
    {
      putmaxword(word1.size());
      head=new index_node(word1, page, head);
    }
  else
    {
      previous = head;
      node = head->next;
      while (node!=NULL && node->theword <= word1)
        { 
          previous=node;
          node=node->next;
        }
      if (word1 == previous->theword)
        previous->pages.add(page);
      else
        {
          putmaxword (word1.size());
          previous->next= new index_node(word1, page, node);
        }
    }
}

void 
indexlist::displayList(ostream &vout)
{
// displayList creates a new pointer variable and follows through
//+ the linked list in entirety, calling the function printQ to
//+ print out all pages that a theword appears on.

// PRE:>  linked list holds at least one entry
// POST:> Onscreen printout of everything held in the linked list

  index_node* node;
  node=head;
  vout<<"\n     *------------------------------------------------------------------"<<endl
      <<"     *                  ____  ____    __    __  __                      *"<<endl
      <<"     *                 (_  _)( ___)  /__\\  (  \\/  )                     *"<<endl
      <<"     *                   )(   )__)  /(__)\\  )    (                      *"<<endl
      <<"     *                  (__) (____)(__)(__)(_/\\/\\_)                     *"<<endl
      <<"     *         __   ____   __    ____    __    _  _  ____    __         *"<<endl
      <<"     *        /__\\ (_  _) /__\\  (  _ \\  /__\\  ( \\/ )(_  _)  /__\\        *"<<endl
      <<"     *       /(__)\\  )(  /(__)\\  )   / /(__)\\  )  (  _)(_  /(__)\\       *"<<endl
      <<"     *      (__)(__)(__)(__)(__)(_)\\_)(__)(__)(_/\\_)(____)(__)(__)      *"<<endl
      <<"     *                                                                  *"<<endl
      <<"     *    Team Information                                              *"<<endl
      <<"     *                                                                  *"<<endl
      <<"     *     |      Name        |          Responcibilites        |       *"<<endl
      <<"     *     |------------------|---------------------------------|       *"<<endl
      <<"     *     |  Robert Knuuti   |         (main, IndexList)       |       *"<<endl
      <<"     *     |  Scott Wolforth  |            (SearchList)         |       *"<<endl
      <<"     *     |  Cody Adams      |              (PageQ)            |       *"<<endl
      <<"     *                                                                  *"<<endl
      <<"     *------------------------------------------------------------------*"<<endl
      <<endl<<endl
      <<"Word Index\n\n\n";
  while(node)
    {
      vout<<"  "<<setw(getmaxword()+1)<<node->theword<<" | ";
      node->pages.printQ(vout);
      vout<<endl;
      node =  node->next;
    }
}
