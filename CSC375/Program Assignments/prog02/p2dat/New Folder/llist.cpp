// First, get the declaration for the derived linked list class
#include "llist.h"

//**************************************************************
// Insert a value at the current fence position.  This
// function returns true if successful and false otherwise.
//**************************************************************
using namespace std;
//************Programmer's Additions*************************//

//****************************end*********************************//

template <class T>
bool LList::insert(T item) 
{
  fence->next = new Link(item, fence->next);  
  if (tail == fence) tail = fence->next;  // New tail
  rightcnt++;
  return true;
}

//**************************************************************
// Append a value to the end of the list.  This
// function returns true if successful and false otherwise.
//**************************************************************

template <class T>
//bool
T LList::append(T item) {
  tail = tail->next = new Link(item, NULL);
  rightcnt++;
  return true;
}

//**************************************************************
// Remove and return first int in right partition
// This function returns true if successful and false otherwise.
//**************************************************************
//bool
template <class T>
T LList::remove(T& it) {
  if (fence->next == NULL) return false; // Empty right
  it = fence->next->element;       // Remember value
  Link* ltemp = fence->next; // Remember link node
  fence->next = ltemp->next;       // Remove from list
  if (tail == ltemp) tail = fence; // Reset tail
  delete ltemp;                    // Reclaim space
  rightcnt--;
  return true;
}

//**************************************************************
// Move fence one step left; no change if left is empty
//**************************************************************
void LList::prev() {
  Link* temp = head;
  if (fence == head) return; // No previous int
  while (temp->next!=fence) temp=temp->next;
  fence = temp;
  leftcnt--; rightcnt++;
}

//**************************************************************
// Set the size of left partition to pos
//**************************************************************
//bool
template <class T>
T LList::setPos(T pos) 
{
  if ((pos < 0) || (pos > rightcnt+leftcnt)) return false;
  rightcnt = rightcnt + leftcnt - pos; // Set counts
  leftcnt = pos;
  fence = head;
  for(int i=0; i<pos; i++) fence = fence->next;
  return true;
}

//**************************************************************
// Print the contents of the list.
//**************************************************************
void LList::print() 
{
  Link* temp = head;
  cout << "< ";
  while (temp != fence) {
    cout << temp->next->element << " ";
    temp = temp->next;
  }
  cout << "| ";
  while (temp->next != NULL) {
    cout << temp->next->element << " ";
    temp = temp->next;
  }
  cout << ">\n";
}
