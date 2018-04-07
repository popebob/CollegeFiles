/***********
Cody Adams
CSC375-01 prog04
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
prog04-02.cpp  --  UI source
Version 2 -- Without Weighted Union/Path Compression
***********/

#define ROOT -1

#include <iomanip>
#include <iostream>
#include <stack>
#include "ufs.h"

using namespace std;

//****************************int_main()**************************//
int main(int argc, char *argv[])
{
    int rows = atoi( argv[2] );
    int columns = atoi( argv[3] );
    int totalsize = rows * columns;
    if ( totalsize ==1 )
    {
       cout << endl << "   INPUT ERROR: 1x1 is not a maze!!" << endl;
       return 0;
    }
    srand( atoi(argv[1]) );
    Gentree* gt = new Gentree( totalsize );
    gt->MakeMaze( gt, rows, columns );          
    gt->PRINT( rows, columns );
    return 0;
}
//****************************end*********************************//
