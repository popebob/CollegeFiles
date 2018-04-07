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
     node * Node = new node;          // "new" is like "malloc"
     Node->huf = huf;
     Node->left = NULL;
     Node->right = NULL;
     return (Node);
}
//****************************end*********************************//
 
//***********************void buildTree()*************************//
node * insert( node* Node, Huffman data ) 
{
       if ( Node == NULL )         //tree is empty, NewNode();
       {
                return( newNode( data ) );
       }
       else                      //Recur through tree until a new spot is found
       {
                if ( Node->left == NULL )       //left child does not exist
                {
                   Node->left = insert(Node->right, data);
                }
                else                           //left child exists
                {
                   if ( Node->right == NULL )    //right child does not exist
                   {
                        Node->right = insert(Node->right, data);
                   }
                   else                         //right child exists, tree is full
                   {
                        node * parent = newNode( data );
                        //->left = Node;
                        parent->left = insert(Node->left, data);
                        //return( newNode( data ) );
                   }
                }
       return(Node);            // return the (unchanged) node pointer
       }
}
//****************************end*********************************//

//***********************void buildTree()*************************//
void printTree(node * Node)
{
     if (Node == NULL)
        return;
     printTree(Node->left);
     cout << (Node->data) << " ";
     printTree(Node->right);
}
//****************************end*********************************//

//***********************void buildTree()*************************//
int size(node * Node) 
{
    if (Node == NULL ) 
    {
       return(0);
     }
     else
     {
         return(size(Node->left) + 1 + size(Node->right));
     }
} 
//****************************end*********************************//  

//**************character encoding from tree**********************//
bool encode( node * Node )
{
     string code;
     vector<char> charVect;
     vector<string> strVect;
     if ( Node->left )             //a left child exists
     {
           code += "0";
           encode( Node->left );
     }                             //no left child, this node is a leaf, store
           strVect.push_back( code );
           charVect.push_back( ( * Node ).data );
           
           return true;                  //go back and look for right ones
}
//****************************end*********************************// 

//************recursive encoding table creator********************//
void buildTable( vector<char> & charVect, vector<string> & strVect, char letter, string code )
{
     //strVect.push_back( );
}
//****************************end*********************************//     

//***********************void buildTree()*************************//
void buildTree( list<Huffman> huffList )
{
     int newfreq = 0;
     node * tree;
     
     /*
     stack<Huffman> huffStack;
     for (list<Huffman>::iterator iter = hufflist.begin(); iter != hufflist.end(); ++iter)
     {
         huffStack.push( * iter )
     }
     */
     
     while ( huffList.size() > 1 )
     {
           
           
           hufflist.sort();
     }
     */
     
}
//****************************end*********************************//

/*
//****************************end********************************* //

//*************************void freq()**************************** //
node * tree=NULL;
//****************************end********************************* //

//*************************void freq()**************************** //
node * insert( node * , Huffman , int );
//****************************end********************************* //

//*************************void freq()**************************** //
void preorder( node * );
//****************************end********************************* //

//*************************void freq()**************************** //
void inorder( node * );
//****************************end********************************* //

//*************************void freq()**************************** //
void postorder( node * );
//****************************end********************************* //
*/

