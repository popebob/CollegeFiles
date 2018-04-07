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
#include "change.cpp"

using namespace std;

//****************************int_main()**************************//
int main(int argc, char *argv[])
{
    double dBegin, dEnd, dTime;  // variables for run-time reporting
    list<change> result;        //list for storing change results
    list<float> summary;        //list for storing total cash doled out
    result.clear();             
    float amount;               //float file to allow work on dat from infile
    ifstream infile;
    infile.open ( argv[1] );     // open file
    dBegin = clock();            // start timing
    if ( ( infile.is_open() ) && ( argc > 1 ) )    // file opened, valid number
    {                                              // of parameters
       cout << endl << "Processing input file: " << argv[1] << ".  Please wait..." 
               << endl << endl;
       while ( ! infile.eof() )        // read values
       {
          infile >> amount;
          if  ( amount == 0 )          //checking for whitespace at end of data
              break;        //not ignored by buffer (possibly platform-specific)
          cout << "$" << amount << " is: ";
          if ( amount > 999999 )       //preventing precision loss in display() 
          {    
             cout << "invalid input; must be in range: {1 to 999999}" << endl;
             cout << "Skipping: " << amount << endl << endl;
          }
          else
          {
              float adjustedamount = floor( amount * 100 ); //adjust for precision
              makechange(adjustedamount, result, summary);  //in change.h/.cpp
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
    dEnd = clock();                     // end timing
    dTime = dEnd - dBegin;              // time elapsed in miliseconds
    cout << "Runtime:  " << (dTime) << endl;
    print( summary );
    return 0;
}
//****************************end*********************************//
