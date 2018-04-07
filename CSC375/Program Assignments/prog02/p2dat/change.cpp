/***********
Cody Adams
CSC375-01 prog02
Winter 2009
Dev-C++ 4.9.9.2
Compiled on Windows 7 x64 Build 7000
change.cpp  --  change class source file
***********/

using namespace std;

#include <list>
#include <iostream>
#include <iomanip>
#include <cmath>
#include "change.h"

/******************Overloading << operator**********************
ostream & operator << ( ostream & output, const change & changelist )
{
     output << "count: " <<  changelist.count << ", value: " << changelist.value;
     return output;  // for multiple << operators.
}
***************************end*********************************/

//****************Iterative Changing Function******************//
void makechange(float cash, list<change> & result, list<float> & summary)
{
     change temp;
     temp.count = 0;
     temp.value = 0;
     while ( cash >= 10000 )
     {
           temp.count++;
           temp.value = 100;
           cash = cash - 10000;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);     
     while ( cash >= 5000 )
     {
           temp.count++;
           temp.value = 50;
           cash = cash - 5000;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     while ( cash >= 2000 )
     {
           temp.count++;
           temp.value = 20;
           cash = cash - 2000;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     while ( cash >= 1000 )
     {
           temp.count++;
           temp.value = 10;
           cash = cash - 1000;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     while ( cash >= 500 )
     {
           temp.count++;
           temp.value = 5;
           cash = cash - 500;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     while ( cash >= 100 )
     {
           temp.count++;
           temp.value = 1;
           cash = cash - 100;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     while ( cash >= 50 )
     {
           temp.count++;
           temp.value = .50;
           cash = cash - 50;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     while ( cash >= 25 )
     {
           temp.count++;
           temp.value = .25;
           cash = cash - 25;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     while ( cash >= 10 )
     {
           temp.count++;
           temp.value = .10;
           cash = cash - 10;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     while ( cash >= 5 )
     {
           temp.count++;
           temp.value = .05;
           cash = cash - 5;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     while ( cash >= 1 )
     {
           temp.count++;
           temp.value = .01;
           cash = cash - 1;
           result.push_back(temp);
           summary.push_back ( temp.value );
     }
     display(temp, cash);
     cout << endl;  
     return;
}
//****************************end*********************************//

//*****************Incremental Display Function*******************//
void display( change & temp, float & cash )
{
     if (temp.value != 0)
     {
        cout << "$";
        if ( temp.value < 1 )       //to output change (mostly .10) correctly
        {
             cout.setf(ios::fixed); //show all zeroes to the right per precision
             cout.precision(2);     //show 2 places to the right of decimal
        }
        cout << temp.value;
        cout << "(" << temp.count << ")" ;
        temp.count = 0;
        temp.value = 0;
        if ( cash != 0 )
           cout << "+";
        cout.unsetf(ios::fixed); // prevents e-notation
        cout.precision(7);      //weird things at 8, limits input to 999999
        
     }
}
//****************************end*********************************//

//************************Print function**************************//
void print( list<float> summary )
{
	 int amount = 0, x100 = 0, x50 = 0, x20 = 0, x10 = 0, x5 = 0, x1 = 0;
     int x050 = 0, x025 = 0, x010 = 0, x05 = 0, x01 = 0, total = 0; 
     list<float>::iterator iter = summary.begin();
     for (list<float>::iterator iter = summary.begin(); iter != summary.end(); ++iter)
     {
         total++;
         amount = int( ceil( ( 100 * ( *iter ) ) ) ); //cast, floor() didnt work
         switch ( amount )
         {
                case 1:
                     x01++;
                     break;
                case 5:
                     x05++;
                     break;
                case 10:
                     x010++;
                     break;
                case 25:
                     x025++;
                     break;
                case 50:
                     x050++;
                     break;
                case 100:
                     x1++;
                     break;
                case 500:
                     x5++;
                     break;
                case 1000:
                     x10++;
                     break;
                case 2000:
                     x20++;
                     break;
                case 5000:
                     x50++;
                     break;
                case 10000:
                     x100++;
                     break;
                
         }
      }           
      cout << endl << "Total pieces of change: " << total << endl; 
      cout << endl << "Change usage:" << endl;     
      cout << x100 << " x $100" << endl;
      cout << x50 << " x $50" << endl;
      cout << x20 << " x $20" << endl;
      cout << x10 << " x $10" << endl;
      cout << x1 << " x $1" << endl;
      cout << x050 << " x $0.50" << endl;
      cout << x025 << " x $0.25" << endl;
      cout << x010 << " x $0.10" << endl;
      cout << x05 << " x $0.05" << endl;
      cout << x01 << " x .$01" << endl;   
            
}
//****************************end*********************************//
