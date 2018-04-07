#ifndef INDEXLIST_H
#define INDEXLIST_H

#include <string>
#include <vector>
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
      string word;
      pageq pages;
      index_node* next;
      index_node(string input, int page, index_node *next1=NULL)
        {
          word=input;
          pages.add(page);
          next=next1;
        }
    };
  index_node *head;
};
#endif


/*
struct index     //figure out how to use this!!!!!!
{
  string word;    //Currently refered as book.word (varible)
  pageq pages;    //currently refered as book.pages.fuction (varible)
  index* next;
}
*/


/*
class indexlist
{
public:
  indexlist() { };
  long exist (const string);
  void insert(const string, const unsigned int);
  void sort();
  void printlist(ostream&);
  ~indexlist() { };
private:
  vector<index> book;
  string tc(const string key);
};
*/
