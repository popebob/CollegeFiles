/***********
Cody Adams
CSC375-01 prog03
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
HuffmanTree.h  --  binary tree header file
***********/

class node
{
 public:
        Huffman huf;
        node * left;
        node * right;
}
//********************Function prototypes************************//
void buildTree( list<Huffman> , char );
void push_back (char letter);
//****************************end*********************************//


//int size(struct node* node);
