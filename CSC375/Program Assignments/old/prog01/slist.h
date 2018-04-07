#include <fstream>
//
// This is a simple list class.  The code is all written for you,
// but you will have to templatize it.
//

template <class newtype>
class SimpleList {

  private:
	newtype *array;			// An array of newtypeegers to be sorted
    newtype n;			// The number of elements in the array.
    newtype size;			// Maximum number of elements in array.
 
  public:
 
    SimpleList(newtype =50);	// Constructor, default number is 50 elements.
 
    void sort();		// This is a sort.  Since it won't be a
				// large file, I'll write an insert sort
				// for it.

    void print(ofstream &);	// This simply print out the contents of the
				// array (whether sorted or not) to an output
				// stream.
 
    bool append(newtype);		// Used to append a data value to the end of
				// the array.  Returns true if successful.
};

