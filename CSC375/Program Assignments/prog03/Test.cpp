/***********
Cody Adams
CSC375-01 prog03
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
TreeTest.cpp  --  Generic encoding tree test source file
***********/

#include <iostream>
#include "Tree.cpp"

using namespace std;

int main()
{
    node * treeRoot = newNode(0);
    int X;
    for ( X = 1; X <= 5; X++)
    {
        insert( treeRoot, X );
    }
    printTree( treeRoot );
    cout << endl << "Encoding...";
    if ( encode( treeRoot ) )
        cout << "done" << endl;
    else
        cout << endl << "Encoding failed..." << endl;
    return 0;
}
    
