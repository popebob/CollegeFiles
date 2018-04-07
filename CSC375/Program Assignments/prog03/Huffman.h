/***********
Cody Adams
CSC375-01 prog03
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
Huffman.h  --  letter frequency header file
***********/

using namespace std;

class Huffman
{
 public:
        char letter;                   //member for character
        int frequen;                   //member for number of occurances
        //overloading <
        friend bool operator < ( const Huffman &, const Huffman & );
        //overloading <<             
        friend ostream & operator << (ostream &, const Huffman &);
};


//********************Function prototypes************************//
void freq( list<Huffman> & , char );
void push_back (char letter);
//****************************end*********************************//
