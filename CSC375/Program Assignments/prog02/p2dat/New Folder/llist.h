#define DefaultListSize 50

//************Programmer's Additions*************************//
using namespace std;
//****************************end*********************************//

// Linked list implementation
//
template <class T>
class LList 
{
  
  private:
    Link* head;				// Pointer to list header
    Link* tail;				// Pointer to last int in list 
    Link* fence;			// Last element on left side
    T leftcnt;            		// Size of left partition
    T rightcnt;			// Size of right partition

    //**************************************************************
    // Initialization routine.  Create a dummy Link node and set
    // all the list pointers to point at it.
    // note that it's inline.
    //**************************************************************
    void init() {
      fence = tail = head = new Link;
      leftcnt = rightcnt = 0;
    }

    //**************************************************************
    // Returns the link nodes to the free store.
    // note that it's inline.
    //**************************************************************
    void removeall() {
      while(head != NULL) {
        fence = head;
        head = head->next;
        delete fence;
      }
    }

  public:
    //**************************************************************
    // To construct, simply call the init helper routine.
    //**************************************************************
    LList(int size=DefaultListSize) { init(); }

    //**************************************************************
    // To destruct, simply call the removeall helper routine.
    //**************************************************************
    ~LList() { removeall(); }  // Destructor

    //**************************************************************
    // Remove all elements from the list.  Use the helper routines
    // to do that.
    //**************************************************************
    void clear() 
    { 
         removeall(); 
         init(); 
    }

    // Non-inline functions:
    
    bool insert(T);		// insert an element at current fence location
    bool append(T);		// append an element to the list.
    bool remove(T);			// remove an element from current fence location

    //**************************************************************
    // Move the fence all the way to the left.
    //**************************************************************
    void setStart()
      { fence = head; rightcnt += leftcnt; leftcnt = 0; }

    //**************************************************************
    // Move the fence all the way to the right
    //**************************************************************
    void setEnd()
      { fence = tail; leftcnt += rightcnt; rightcnt = 0; }

    //**************************************************************
    // Move the fence one position right.
    //**************************************************************
    void next() {
      if (fence != tail) // Don't move fence if right empty
        { fence = fence->next; rightcnt--; leftcnt++; }
    }

    //**************************************************************
    // Move the fence one position left (why do you suppose this
    // one is not inline?)
    //**************************************************************
    void prev();

    //**************************************************************
    // Report the left and right lengths.
    //**************************************************************
    T leftLength() const  { return leftcnt; }
    T rightLength() const { return rightcnt; }

    bool setPos(T pos);		// Set position to random location

    //**************************************************************
    // Return the value stored at current fence position.
    //**************************************************************
    bool getValue(T& it) const {
      if(rightLength() == 0) return false;
      it = fence->next->element;
      return true;
    }

    void print() const;			// Print the list.
};
