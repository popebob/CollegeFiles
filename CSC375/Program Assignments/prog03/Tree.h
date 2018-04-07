/***********
Cody Adams
CSC375-01 prog03
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
Tree.h  --  Generic encoding tree header file
***********/

struct node
{
        Huffman huf;            //use data member as null for internal nodes
        node * left;            //pointer to left child
        node * right;           //pointer to right child
        //overloading comparison operators
        inline bool operator () ( node * lhs, node * rhs )
        {
              return lhs->huf < rhs->huf;
        }
};

//********************Function prototypes************************//
node * buildTree( list<Huffman> );
node * newNode( Huffman );
void encodeTree( node * Node, string code, vector<string> & codeVect, vector<char> & charVect );
//****************************end*********************************//
