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
#include "Tree.h"

using namespace std;

//***********************void buildTree()*************************//
node * newNode(Huffman huf) 
{
     node * Node = new node;      
     Node->huf = huf;
     Node->left = NULL;
     Node->right = NULL;
     return (Node);
}
//****************************end*********************************//

//***********************void buildTree()*************************//
node * buildTree( list<Huffman> huffList )
{
     int newFreq = 0;
     node * Temp2;
     node * Temp1;
     node * Temp3;
     Huffman huffTemp;     
     list<node * >nodeList;
     list<Huffman>::iterator iter1 = huffList.begin();
     while ( huffList.size() != 0 )              //copy huffList into a nodeList
     {
           Temp1 = newNode( huffList.front() );
           nodeList.push_back( Temp1 );
           huffList.pop_front();
     }
     while ( nodeList.size() != 1 )          //more than one element in nodeList
     {
                huffTemp.frequen = 0;
                Temp1 = ( nodeList.front() );       //store least frequent elem
                nodeList.pop_front();
                Temp2 = ( nodeList.front() );       //store next least frequent
                nodeList.pop_front();               
                huffTemp.frequen += ( (Temp1->huf).frequen );    //store new
                huffTemp.frequen += ( (Temp2->huf).frequen );    //frequency
                Temp3 = newNode( huffTemp );        //make parent
                Temp3->left = Temp1;                //point to left child
                Temp3->right = Temp2;               //point to right child        
                nodeList.push_front( Temp3 );       //push to list
                nodeList.sort( node() );            //sort
                
     }
     return Temp3;   
}
//****************************end*********************************// 

//***********************encode printTree()*************************//
void encodeTree( node * Node, string code, vector<string> & codeVect, vector<char> & charVect )
{
     if ( Node->left == NULL )       //at end of branch, output char and code
     {
          charVect.push_back( Node->huf.letter );
          codeVect.push_back(code);
          return;
     }
     encodeTree( Node->left, ( code + "0" ), codeVect, charVect );     
     encodeTree( Node->right, ( code + "1" ), codeVect, charVect );    
}
//****************************end*********************************//
