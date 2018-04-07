/***********
Cody Adams
CSC375-01 prog02
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
change.h  --  change class header file
***********/

using namespace std;

class change
{
      //friend ostream &operator<<(ostream &, const change &);    //overloading <<

      public:
            float value;                                        //value of item
            int count;                                          //occurances
  };



//********************Function prototypes************************//
void print( list<float> summary );
void makechange( float cash, list<change> & result, list<float> & summary );
void display( change & temp, float & cash );
//****************************end*********************************//
