/***********
Cody Adams
CSC375-01 prog03
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
HuffmanTree.cpp  --  Huffman encoding tree source file
***********/

#include <stack>
#include "HuffmanTree.h"

using namespace std;
 
//****************************NOTE********************************//
//pop, make node, pop, make node, push back internal node til stack
//size is 1.  buildTree().  Encode withtraversal by going a vector
//creating a character look up chart.
//****************************end*********************************//

//***********************void buildTree()*************************//
void buildTree( list<Huffman> hufflist )
{
     int newfreq = 0;
     stack<Huffman> huffstack;
     while ( huffstack.size() < hufflist.size() )
     {
           new node  
     while ( hufflist.size() > 1 )
     {
           new node.left = new node.huf = hufflist.pop_front();
           new node.right = new node.huf = hufflist.pop_front();
           hufflist.sort();
     }
     
}

//****************************end*********************************//

//*************************void freq()****************************//
node * tree=NULL;
//****************************end*********************************//

//*************************void freq()****************************//
node * insert( node * , Huffman , int );
//****************************end*********************************//

//*************************void freq()****************************//
void preorder( node * );
//****************************end*********************************//

//*************************void freq()****************************//
void inorder( node * );
//****************************end*********************************//

//*************************void freq()****************************//
void postorder( node * );
//****************************end*********************************//

/*
int size(struct node* node) 
{
    if (node==NULL) 
    {
       return(0);
     }
     else
     {
         return(size(node->left) + 1 + size(node->right));
     }
} 
*/
