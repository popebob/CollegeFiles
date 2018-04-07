#include <iostream>

//***********************************************************************
// For CSC 375
// Author:  Stephen W. Turner
// Compiler:  GNU C++
// Description:
//   This program demonstrates the use of a templated function,
//   although it will not compile directly as-is.
//***********************************************************************

using namespace std;

//***********************************************************************
// This generic swap function will not compile because there is already
// a generic swap function in /usr/include/c++/3.2.2/bits/stl_algobase.h
// (on regal or probably any linux machine with a GNU C++ implementation)
//
// If you rename the swap routine, then it compiles correctly.
//***********************************************************************
template <class Stype>
void swap(Stype & left, Stype & right) {
  Stype temp = left;
  left = right;
  right = temp;
}


int main() {

  float x = 5.3;
  float y = 4.7;

  swap(x, y);

  cout << "x is " << x << " and y is " << y << endl;

  int s1 = 4;
  int s2 = 5;
  swap(s1, s2);
  cout << "s1 is " << s1 << " and s2 is " << s2 << endl;

  return 0;
}
