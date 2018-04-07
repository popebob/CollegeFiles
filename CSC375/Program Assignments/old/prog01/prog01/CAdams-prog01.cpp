#include <iostream>
#include <fstream>
using namespace std;
#include "cityrec.cpp"
#include "slist.cpp"

//***************************************************************
// Name:	Cody Adams
// Program:	CSC 375 Program 1
// Due Date:	01/30/08
// Compiler:	GNU C++
//
// This program uses a "simple list" to read a list of
// integers from a data file specified on the command line.
// The user also specifies the size of the array on the
// command line.  No error checking is really provided for that,
// so be careful about using this.
// 
// The program reads the data file in, sorts the data, then prints
// out the sorted contents to the output file.  Code for
// all of this is provided for you.  However, you must 'templatize'
// the code and add some logic that checks for the data type.  Your
// program must support int, float, and Srec data types.
// It has to be done by modifying the command-line interface.
//
// Current usage:
//
// prog01 n infilename outfilename
//
// Templated Usage:
//
// prog01 n type infilename outfilename
//
// where 'type' is a single letter indicating the data type.
// 'i' for int, 'f' for float, 'c' for city record (CityRec).
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

  if (argc != 4) {
    cout << "Usage: " << endl;
    cout << argv[0] << " n infile outfile" << endl;
    return 0;
  }

  ifstream infile;			// The input file, of course.
  infile.open(argv[2],ios::in);
  ofstream outfile;			// The output file, of course.
  outfile.open(argv[3],ios::out);

  int i;				// Loop iterator
  int sz = atoi(argv[1]);		// Size of list to allocate

  SimpleList L1(sz);			// A single instance of simple list.
  bool rval;				// Return value to indicate success
					// or failure for various functions.
  int temp;				// Value being returned, inserted,
					// etc.

//
// Read the entire input file, inserting into the "simple list".
// Yes, I know this isn't really general code; I just don't care.
//
  for (i = 0; i < sz; i++) {
    infile >> temp;
    rval = L1.append(temp);
    if (rval == false) {
      cout << "Error while appending!" << endl;
      return 0;
    }
  }

//
// Sort the list and print out the sorted version.
//
  L1.sort();		// Sort contents of list.
  L1.print(outfile);	// Print contents of list.
  return 0;
}
