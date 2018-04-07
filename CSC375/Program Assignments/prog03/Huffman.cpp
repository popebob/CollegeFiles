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
void frequ( list<Huffman> & huffList, char let)
{
     int makenew = 1;       //default value, character does exist yet, make new
     list<Huffman>::iterator iter = huffList.begin();
     for (list<Huffman>::iterator iter = huffList.begin(); iter != huffList.end(); iter++)
     {
         if ( let == ( *iter ).letter )  //character is in list, increment freq.
         {
              ( *iter ).frequen++;
              makenew = 0;
         }
     }
     
     if ( makenew )        //process based on above decision
     {
        Huffman temp;
        temp.letter = let;
        temp.frequen = 1;
        huffList.push_front(temp);
        return;
     }
}
//****************************end*********************************//

//******************Overloaded << operator************************//
ostream & operator << ( ostream & output, const Huffman & huf )
{
     output << "letter: '" << huf.letter << "', times: " <<  huf.frequen << " ";
     return output;  // for multiple << operators.
}
//***************************end**********************************//

//***Overloaded < operator to sort by frequency least to greatest*//
bool operator < ( const Huffman & lhs, const Huffman & rhs )
  {
    return lhs.frequen < rhs.frequen;  //compare .frequen members
  }
//****************************end*********************************//
