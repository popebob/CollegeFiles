#include "slist.h"

//
// This is the implementation file for the SimpleList class.
// You will have to templatize this.
//

template <class newt>
SimpleList::SimpleList(newt sz) {
  size = sz;
  array = new newtype[size];
  n = 0;
}

// Sort does a very simple sort - a bubble sort that's not
// very efficient.
//template <class newtype>
void SimpleList::sort() {
  newtype i, j;
  for (i = 1; i < n; i++)
    for (j = i; ((j > 0) && (array[j] < array[j - 1])); j--)
      swap(array[j], array[j - 1]);
}

//template <class newtype>
void SimpleList::print(ofstream & of) {
  newtype i;
  for (i = 0; i < n; i++)
    of << array[i] << endl;
}

//template <class newtype>
bool SimpleList::append(newtype x) {
  if (n == size)
    return false;
  array[n++] = x;
  return true;
}
