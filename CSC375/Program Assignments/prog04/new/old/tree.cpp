/***********
Cody Adams
CSC375-01 prog03
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
Tree.cpp  --  Generic encoding tree source file
***********/

#include <iostream>
#include <vector>
#include <string>
#include "tree.h"

using namespace std;

//***************************newNode()****************************//
node * newNode() 
{
     node * Node = new node;
     Node->parent = NULL;
     return (Node);
}
//****************************end*********************************//
