template <class ELEM>
List<ELEM>::List(int sz)                 // Constructor: initialize
  { msize = sz; numinlist = 0; curr = 0; listarray = new ELEM[sz]; }

template <class ELEM>
List<ELEM>::~List()                      // Destructor: return array space
  { delete [] listarray; }

template <class ELEM>
void List<ELEM>::clear()                 // Remove all ELEMs from list
  { numinlist = 0; curr = 0; }     // Simply reinitialize values

// Insert ELEM at current position
template <class ELEM>
void List<ELEM>::insert(const ELEM item) {
  // Array must not be full and curr must be a legal position
  assert((numinlist < msize) && (curr >=0) && (curr <= numinlist));
  for(int i=numinlist; i>curr; i--) // Shift ELEMs up to make room
    listarray[i] = listarray[i-1];
  listarray[curr] = item;
  numinlist++;                     // Increment current list size
}

template <class ELEM>
void List<ELEM>::append(const ELEM item) { // Insert ELEM at tail of list
  assert(numinlist < msize);       // List must not be full
  listarray[numinlist++] = item;   // Increment list size
}

template <class ELEM>
ELEM List<ELEM>::remove() {              // Remove and return current ELEM
  assert(!isEmpty() && isInList());   // Must be an ELEM to remove
  ELEM temp = listarray[curr];        // Store removed ELEM
  for(int i=curr; i<numinlist-1; i++) // Shift elements down
    listarray[i] = listarray[i+1];
  numinlist--;                     // Decrement current list size
  return temp;
}

template <class ELEM>
void List<ELEM>::setFirst()              // Set curr to first position
  { curr = 0; }

template <class ELEM>
void List<ELEM>::prev()                  // Move curr to previous position
  { curr--; }

template <class ELEM>
void List<ELEM>::next()                  // Move curr to next position
  { curr++; }

template <class ELEM>
int List<ELEM>::length() const           // Return current length of list
  { return numinlist; }

template <class ELEM>
void List<ELEM>::setPos(int pos)         // Set curr to specified position
  {curr = pos; }
