/***********
Cody Adams
CSC375-01 prog02
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
prog02.cpp  --  UI source
***********/

#include <list>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include "link.h"
#include "change.cpp"
#include "llist.cpp"

using namespace std;

//****************************int_main()**************************//
int main(int argc, char *argv[])
{
    LList<change> result;
    LList<float> summary;
    
    result.clear();
    float amount;
    ifstream infile;
    infile.open ( argv[1] );     // open file
    if ( ( infile.is_open() ) && ( argc > 1 ) )    // file opened, valid number
    {                                              // of parameters
       cout << endl << "Processing input file: " << argv[1] << ".  Please wait..." 
               << endl << endl;
       while ( ! infile.eof() )        // read values
       {
          infile >> amount;
          if  ( amount == 0 )          //checking for whitespace
              break;
          cout << "$" << amount << " is: ";
          if ( amount > 999999 )       //preventing accuracy loss in display() 
          {    
             cout << "invalid input; must be in range: {1 to 999999}" << endl;
             cout << "Skipping: " << amount << endl << endl;
          }
          else
          {
              float adjustedamount = floor( amount * 100 );
              makechange(adjustedamount, result, summary);
          }
          amount = 0;              //to allow check for whitespace          
       }
    }
    else                         // file not opened or
    {                            // not enough parameters
         if (argc == 2)                            // bad file specified
            cout << "Unable to open file: " << argv[1] << ".  Quitting...";
         else                                      // not enough parameters 
             cout << "ERROR" << endl << "Invalid run-time parameter(s).  " <<
                  "You typed:" << endl << "prog02 ";
         return 0;                                 // quit
    }
    print( summary );
    return 0;
}
//****************************end*********************************//
