/***********
Cody Adams
CSC375-01 prog03
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
freq.cpp  --  letter frequency source file
***********/

#include <list>
#include <iostream>
#include "Huffman.h"

using namespace std;

//*************************void freq()****************************//
void frequ( list<Huffman> & hufflist, char let)
{
     int makenew = 1;
     list<Huffman>::iterator iter = hufflist.begin();
     for (list<Huffman>::iterator iter = hufflist.begin(); iter != hufflist.end(); ++iter)
     {
         if ( let == (*iter).letter )
         {
            (*iter).frequen++;
            makenew = 0;
         }
     }
     if (makenew)
     {
        Huffman temp;
        temp.letter = let;
        temp.frequen = 1;
        hufflist.push_back(temp);
        }
}
//****************************end*********************************//

//******************Overloading << operator**********************//
ostream & operator << ( ostream & output, const Huffman & huf )
{
     output << "letter: '" << huf.letter << "', times: " <<  huf.frequen << " ";
     return output;  // for multiple << operators.
}
//***************************end*********************************//

//*Overloading < operator to sort by frequency least to greatest*//
bool operator < ( const Huffman & lhs, const Huffman & rhs)
  {
    return rhs.frequen < lhs.frequen;
  }
//***************************end*********************************//
