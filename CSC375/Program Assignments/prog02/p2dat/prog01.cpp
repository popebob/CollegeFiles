/***********
Cody Adams
CSC375-01 prog01
Winter 2009
Dev-C++ 4.9.9.2
***********/

#include <cstdlib>
#include <iostream>
#include <sys/time.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//********************Function prototypes************************//
int maxSubSum1(const vector<float> & a);                
int maxSubSum2(const vector<float> & a);    
int maxSubSum3(const vector<float> & a);
int maxSubSum4(const vector<float> & a);
int maxSumRec(const vector<float> & a, float left, float right);
int max3(float maxLeftSum, float maxRightSum, float maxCombinedSum);
//****************************end*********************************//


int main(int argc, char *argv[])
{
    double dBegin, dEnd, dTime;  // variables for run-time reporting
    double line;                 // used to facilitate push to vector
    vector<float> a;             // vector contain all values from text file
    ifstream infile;
    infile.open ( argv[2] );     // open file
    if ( ( infile.is_open() ) && ( argc > 2 ) )    // file opened, valid number
    {                                              // of parameters
       cout << "Processing input file: " << argv[2] << ".  Please wait..." << endl;
       while ( ! infile.eof() )        // read values
       {
          infile >> line;
          a.push_back (line);          // fill vector
       }
    }
    else                                            // file not opened or
    {                                               // not enough parameters
         if (argc == 3)            // bad file specified
            cout << "Unable to open file: " << argv[2] << ".  Quitting...";
         else                      // not enough parameters 
             cout << "ERROR" << endl << "Invalid run-time parameter(s).  " <<
                    "You typed:" << endl << "prog01 " << argv[1] << argv[2];
         return 0;                                   // quit
    }
    cout << "You have selected the Maximum Subsequence Sum algorithm on the order of ";
    switch ( atoi(argv[1]) )   // evaluate the char parameter as integer
    {
           case 1:
           {
                cout << "n^3" << endl;
                dEnd = 0.0;
                dTime = 0.0;
                dBegin = clock();                   // start timing
                cout << "The Maximum Subsequence Sum from that sample is : " 
                     << maxSubSum1(a) << endl;
                dEnd = clock();                     // end timing
                dTime = dEnd - dBegin;              // time elapsed in miliseconds
                cout << "Runtime (in sec.):  " << (dTime/1000);
                break;
           }
           case 2 :
                cout << "n^2" << endl;
                dEnd = 0.0;
                dTime = 0.0;
                dBegin = clock();                 // start timing
                cout << "The Maximum Subsequence Sum from that sample is : " 
                     << maxSubSum2(a) << endl;
                dEnd = clock();                  // end timing
                dTime = dEnd - dBegin;           // time elapsed in miliseconds
                cout << "Runtime (in sec.):  " << (dTime/1000);
                break;
           case 3 :
                cout << "n log(n)" << endl;
                dEnd = 0.0;
                dTime = 0.0;
                dBegin = clock();                 // start timing
                cout << "The Maximum Subsequence Sum from that sample is : " 
                     << maxSubSum3(a) << endl;
                dEnd = clock();                  // end timing
                dTime = dEnd - dBegin;           // time elapsed in miliseconds
                cout << "Runtime (in sec.):  " << (dTime/1000);
                break;
           case 4 :
                cout << "n" << endl;
                dEnd = 0.0;
                dTime = 0.0;
                dBegin = clock();                 // start timing
                cout << "The Maximum Subsequence Sum from that sample is : " 
                     << maxSubSum4(a) << endl;
                dEnd = clock();                  // end timing
                dTime = dEnd - dBegin;           // time elapsed in miliseconds
                cout << "Runtime (in sec.):  " << (dTime/1000);
                break;
           default :
                   cout << "ERROR" << endl << "Invalid run-time parameter(s)." << endl <<
                   "Please see: prog01 [c] [file]" << endl << 
                   "[c]:     1:n^3      2:n^2      5:n log(n)     4:n" << endl ;
    }
    return 0;
}
//****************************end*********************************//

//************************Cubic algorithm************************//
int maxSubSum1(const vector<float> & a)
{
  int maxSum = 0;

  for (int i = 0; i < a.size(); i++)
    for (int j = i; j < a.size(); j++)
    {
      int thisSum = 0;

      for (int k = i; k <= j; k++)
        thisSum += a[k];

      if (thisSum > maxSum)
        maxSum   = thisSum;
    }
  return maxSum;
}
//****************************end*********************************//

//*********************Quadratic algorithm***********************//
int maxSubSum2(const vector<float> & a)
{
  int maxSum = 0;

  for (int i = 0; i < a.size(); i++)
  {
    int thisSum = 0;
    for (int j = i; j < a.size(); j++)
    {
      thisSum += a[j];

      if (thisSum > maxSum)
        maxSum = thisSum;
    }
  }
  return maxSum;
}
//****************************end*********************************//

//***********************Linear algorithm*************************//
int maxSubSum4(const vector<float> & a)
{
    int maxSum = 0, thisSum = 0;

    for (int j = 0; j < a.size(); j++)
    {
        thisSum += a[j];

        if (thisSum > maxSum)
            maxSum = thisSum;
        else if (thisSum < 0)
            thisSum = 0;
    }

    return maxSum;
}
//****************************end*********************************//

//*********************O(n log n) algorithm***********************//
int maxSubSum3(const vector<float> & a) 
{     
        return maxSumRec(a, 0, a.size() - 1);
}
  int maxSumRec(const vector<float> & a, float left, float right) 
{
  if (left == right)  // Base case
    if (a[left] > 0)
      return a[left];
    else
      return 0;

  int center = (left + right) / 2;
  int maxLeftSum  = maxSumRec(a,left,center);
  int maxRightSum = maxSumRec(a,center+1,right);

  int maxLeftBorderSum = 0, leftBorderSum = 0;
  for (int i = center; i >= left; i--)
  {
    leftBorderSum += a[i];
    if (leftBorderSum > maxLeftBorderSum)
        maxLeftBorderSum = leftBorderSum;
  }
  int maxRightBorderSum = 0, rightBorderSum = 0;
  for (int j = center + 1; j <= right; j++)
  {
    rightBorderSum += a[j];
    if (rightBorderSum > maxRightBorderSum)
            maxRightBorderSum = rightBorderSum;
  }
   // find the max of the 3 parameters.
  return max3(maxLeftSum, maxRightSum, maxLeftBorderSum + maxRightBorderSum);
         	
}
//****************************end*********************************//

//************hand-coded: find max of three parameters************//
int max3(float maxLeftSum, float maxRightSum, float maxCombinedSum)
{
 if ( maxLeftSum > maxRightSum )                // A > B 
    if (maxLeftSum > maxCombinedSum )           // A > C
       return maxLeftSum;                       // A is greatest
    else if ( maxCombinedSum > maxRightSum )    // C > A, C > B
            return maxRightSum;                 // C is greatest
         else                                   // C > A, B > C
            return maxCombinedSum;              // B is greatest
 else if ( maxRightSum > maxCombinedSum)        // B > A, B > C
         return maxRightSum;                    // B is greatest
       else                                     // B > A, C < B   
         return maxCombinedSum;                 // C is greatest
 }                        
//****************************end*********************************//
