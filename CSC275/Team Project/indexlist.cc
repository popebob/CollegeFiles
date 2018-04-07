#include <iostream>
#include <fstream>
#include <string>

#include "../header/indexlist.h"
#include "./pageq.cc"

using namespace std;



void
indexlist::insertNode(string word1, int page)
{
// insertNode first checks to see if linked list is empty.  If so,
//+ make a new link, and assign it to the head pointer.  If it is not,
//+ then assign the pointer PREVIOUS to the first link in the list, and
//+ progress through the list until the object word of the currently linked
//+ item is less than the string value WORD1.  When that is true, test for
//+ the case where the entry one step behind the current pointer position
//+ (previous) if it already exists in the list.  If so, then call that link's
//+ Qinsert (add) function to append the current page number to the pageq's 
//+ linked list.  If the word does not equal the state of PREVIOUS, then
//+ insert a new link in the list in order.

// PRE:>  inputed values are of proper syntax.
// POST:> insertQ function is called if the string currently exists,
//       + if not, the string item is inserted into list in alphabetical
//       + order, creating a new link.
  index_node *node, *previous;
  if (head == NULL || head->word >= word1)
    head=new index_node(word1, page, head);
  else
    {
      previous=head;
      node= head->next;
      while(node!=NULL && node->word < word1)
        {
          previous=node;
          node=node->next;
        }
      if (previous->word == word1)
	previous->pages.add(page);
      else
	previous->next= new index_node(word1, page, node);
    }
}

void 
indexlist::displayList()
{
// displayList creates a new pointer variable and follows through
//+ the linked list in entirety, calling the function printQ to
//+ print out all pages that a word appears on.

// PRE:>  linked list holds at least one entry
// POST:> Onscreen printout of everything held in the linked list
  index_node* node;
  node=head;
  while(node)
    {
      cout <<node->word<<" " << node->pages.printQ() << endl;
      node =  node->next;
    }
}


/*
void 
indexlist::appendNode(string word1, int page)
{
  if (head==NULL)
    head = new index_node(word1, page);
  else
    {
      index_node* node;
      node= head;
      while (node->next != NULL)
        node=node->next;
      node->next = new index_node(word1, page);
    }
}
*/

/*
void
indexlist::deleteNode(string word1, int page)
{
  index_node *node, *previous;

  if (head->word == word1)
    {
      node=head;
      head= head->next;
      delete node;
    }
  else
    {
      node=head;
      while (node != NULL && node->word != word1)
        {
          previous=node;
          node=node->next;
        }
      if (node)
        {
          previous->next = node->next;
          delete node;
        }
    }
}
*/




/*
void
indexlist::insert(const string key, const unsigned int page)
{
  if (exist(key)==-1)
    {
      head=new index_node(key, 
    }
  else
      book[exist(key)].pages.Qinsert(page);
}

long 
indexlist::exist (const string key)
{
  for (long i=0; i<book.size(); i++)
    if (key==book[i].word)
      return i;
  return -1;
}

void
indexlist::sort()
{
  sort(book.word.begin(), book.word.end());
}

string
indexlist::tc(const string key)
{
  string hold;
  hold[0]=toupper(key[0]);
  for (int i=1; i<key.length(); i++)
    hold[i]=tolower(key[i]);
  return hold;
}

void
indexlist::printlist(ostream& vout)
{
  for (long i=0; i<book.word.size(); i++)
    vout<<tc(book[i].word)<<" "<<book[i].pages.printQ();
}
*/
