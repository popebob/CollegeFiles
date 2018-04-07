#include <iostream>
#include <fstream>
using namespace std;
#include "srec.cpp"
#include "slist.cpp"


//***************************************************************
// Name:	Cody Adams
// Program:	CSC 375 Program 1
// Compiler:	Visual C++ 2008 Express on Vista64
//
// This program uses a "simple list" to read a list of
// integers from a data file specified on the command line.
// The user also specifies the max size of the array on the
// command line.  No error checking is really provided for that,
// so when you run it, make sure the array size is big enough
// for your data file.
// 
// The program reads the data file in, prints out the largest and
// smallest values found, then prints out the entire array contents,
// then sorts it and prints out the sorted contents.  Code for
// all of this is provided for you.  However, you must 'templatize'
// the code and add some logic that checks for the data type.  Your
// program must support int, float, and Srec data types.
// It has to be done by modifying the command-line interface.
//
// Templated Usage:
//
// prog01 n type infilename
//
// where 'type' is a single letter indicating the data type.
// 'i' for int, 'f' for float, 's' for student record (Srec).
//
// Specific types of modifications:
//
// * this file must have templating added, with additional
//   program logic to support 3 data types.
//
// * Modify slist.h and slist.cpp to be templated.
//
// * Modify srec.h and srec.cpp to overload certain operators
//   dictated by what's being done in this file and in slist.cpp
//***************************************************************
int main(int argc, char *argv[]) {

  if (argc != 3) {
    cout << "Usage: " << endl;
    cout << argv[0] << " n file " << endl;
    return 0;
  }

  ifstream infile;			// The input file, of course.
  infile.open(argv[2],ios::in);

  SimpleList L1;			// A single instance of simple list.
  bool rval;				// Return value to indicate success
					// or failure for various functions.
  int temp;				// Value being returned, inserted,
					// etc.

//
// Read the entire input file, inserting into the "simple list".
//
  while (infile >> temp) {
    rval = L1.append(temp);
    if (rval == false) {
      cout << "Error while appending!" << endl;
      return 0;
    }
  }

//
// Try to print out the largest and smallest to see
// if those functions are working correctly.
//
  rval = L1.Largest(temp);
  if (rval == true)
    cout << "Largest value is " << temp << endl;
  else
    cout << "No largest, no elements in array!" << endl;

  rval = L1.Smallest(temp);
  if (rval == true)
    cout << "Smallest value is " << temp << endl;
  else
    cout << "No smallest, no elements in array!" << endl;

//
// Print out the unsorted version of the list.
// Then, sort it and print out the sorted version.
//
  cout << "Unsorted" << endl;
  cout << "--------" << endl;
  L1.print();		// Print contents of list.
  L1.sort();		// Sort contents of list.
  cout << endl << endl << "Sorted" << endl;
  cout << "------" << endl;
  L1.print();		// Print contents of list.
  return 0;
}
