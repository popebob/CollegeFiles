//
// This is a simple list class.  The code is all written for you,
// but you will have to templatize it.
//
class SimpleList {
  private:
    int *array;			// An array of integers to be sorted
    int n;			// The number of elements in the array.
    int size;			// Maximum number of elements in array.
 
  public:
 
    SimpleList(int =50);	// Constructor, default number is 50 elements.
 
    void sort();		// This is a sort.  Since it won't be a
				// large file, I'll write an insert sort
				// for it.

    bool Largest(int&);		// Finds the largest if it exists.  Returns
				// false if not, true if it did.

    bool Smallest(int&);	// Finds the smallest if it exists.  Returns
				// false if not, true if it did.
 
    void print();		// This simply prints out the contents of the
				// array (whether sorted or not) to an output
				// stream.
 
    bool append(int);		// Used to append a data value to the end of
				// the array.  Returns true if successful.
};

