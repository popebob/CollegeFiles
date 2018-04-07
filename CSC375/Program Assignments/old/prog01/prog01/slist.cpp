#include "slist.h"
#include <iostream>
using namespace std;

//
// This is the implementation file for the SimpleList class.
// You will have to templatize this.
//

/*
template <class T> void swap(T& x, T& y)
{
  T temp;
  // code as in your question
}
*/

SimpleList::SimpleList(int sz) {
  size = sz;
  array = new int[size];
  n = 0;
}

void SimpleList::sort() {
  int i, j;
  for (i = 1; i < n; i++)
    for (j = i; ((j > 0) && (array[j] < array[j - 1])); j--)
      swap(array[j], array[j - 1]);
}
 
bool SimpleList::Largest(int & l) {
  int i;
  if (n == 0) return false;
  l = array[0];
  i = 0;
  while (i < n) {
    if (array[i] > l)
      l = array[i];
    i++;
  }
  return true;
}

bool SimpleList::Smallest(int & s) {
  int i;
  if (n == 0) return false;
  s = array[0];
  i = 0;
  while (i < n) {
    if (array[i] < s)
      s = array[i];
    i++;
  }
  return true;
}
 
void SimpleList::print() {
  int i;
  for (i = 0; i < n; i++)
    cout << array[i] << endl;
}
 
bool SimpleList::append(int x) {
  if (n == size)
    return false;
  array[n++] = x;
  return true;
}
