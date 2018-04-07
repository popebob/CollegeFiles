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
        bool visited = false;   //visited flag with default value
        node * parent;            //pointer to parent
};

//********************Function prototypes************************//
node * newNode();
//****************************end*********************************//
