#include <iostream>
using namespace std;
#include "bnode.cpp"

//***********************************************************************
// This main program illustrates a few things:
//
// First, it illustrates the general format of how I like to see code
// 'done right'.  That is, the class definition is contained
// in a header file (bnode.h, associated with this program),
// the implementation of the class is contained in another file
// called bnode.cpp, then the main program #includes the files
// as needed.  In this case, my bnode.cpp uses an include to
// read the header file.  That part of it is minor.
//
// Second, the program illustrates generally my personal comment
// and indentation style.  I indent two spaces whenever indentation
// is appropriate, and my comments tend to be "off to the right" for
// single statements or I have a block of comments above a passage
// of code, usually encased in a couple of lines of asterisks.
//
// Finally, it illustrates a couple of ways to 'use' a BinNode as
// implemented in the class.  Kind of a "nonpointer vs pointer"
// example.
//***********************************************************************

int main() {

//***************************************************************
// Create a couple of nodes, bob and bob2, without really
// using pointers.  Note how bob sets its left child pointer
// to bob2.
//***************************************************************
  BinNode bob('x',NULL,NULL);
  cout << "The Bob node contains:  " << bob.val() << endl;

  cout << "The Bob node is a";
  cout << ((bob.isLeaf()) ? " leaf." : "n internal.");
  cout << endl;

  BinNode bob2('y',NULL,NULL);		// Uses the complex constructor
  bob.setLeft(&bob2);			// Notice the '&' to make it a pointer

//***********************************************
// Note the use of the conditional operator
// in the middle 'cout' here.
//***********************************************
  cout << "The Bob node is now a";
  cout << ((bob.isLeaf()) ? " leaf." : "n internal.");
  cout << endl;

//***************************************************************
// Create a couple more nodes, joe and left child of joe,
// using pointers.  Note the syntactic differences from above.
//***************************************************************

  BinNode *joe = new BinNode('p',NULL,NULL);
  cout << "The Joe binary node contains:  " << joe -> val() << endl;

//***************************************************************
// This creates a new node as joe's left child without
// associating it with a specific variable:
//***************************************************************
  joe ->setLeft(new BinNode('q',NULL,NULL));

  cout << "The Joe node is a";
  cout << ((joe -> isLeaf()) ? " leaf." : "n internal.");
  cout << endl;

  cout << "Joe's child node is a";
  cout << ((joe -> left() -> isLeaf()) ? " leaf." : "n internal.");
  cout << endl;

  cout << "and it contains:  " << joe -> left() -> val() << endl;

  return 0;
}
