/***********
Cody Adams
CSC375-01 prog04
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
MakeMaze.cpp  --  MakeMake implementation file
***********/

//#include "MakeMaze.h"
#include "uf.h"

using namespace std;

void MakeMaze(int size, Gentree * gt)
{
    int entrance = 0;
    int exit = size-1;
    //while ( gt->FIND( entrance ) != gt->FIND( exit ) ) 
    while ( gt->size > 1 ) 
    {
          //cell1 = a randomly chosen cell
          //cell2 = a randomly chosen adjacent cell
          if (gt->FIND( cell1 ) != gt->FIND( cell2 )
             gt->UNION(cell1, cell2)
    }
}
