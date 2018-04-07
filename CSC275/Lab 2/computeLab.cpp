// computeLab.cpp : Defines the entry point for the console application.
//
/*Cody Adams
CSC275 - Homework 2
Due 01/23/07
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


// Define funtion prototypes here for compute and the three average functions
float compute( float, long l = 65536, int i = 5 );
double average( double, double );
double average( double, double, double );
double average( double, double, double, double );

int main(int argc, char* argv[])
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
    cout.precision(4);

   int numI = 25;
   float numF = 3.45;
   long numL = 1.234567;

   double result;
   result = compute ( numF,numI,numL);
	
   cout << "Cody Adams" << endl << "CSC275 - Homework 2" << endl << "Due 01/23/07" << endl;


   // Call compute with three parameters
   cout << endl << "Returned by compute passed 3 parms: " << result << endl ;

   cout << endl << "Returned by compute passed 2 parms: " << compute ( numF,numI) << endl;

   cout << endl << "Returned by compute passed 1 parms: " << compute ( numF ) << endl;

   // Call average three times, with different number of parameters
   result =  average (5.0, 6.0);
   cout << endl<<"Average of numbers 5 & 6 is: " <<result << endl ;

   result =  average (7.5, 6.5, 5.5) ;
   cout << endl<<"Average of numbers 7.5,6.5 & 5.5 is: " << result << endl ;

   result = average (1.0,2.0,3.0,4.0);
   cout << endl<<"Average of numbers 1.0,2.0,3.0,4.0 is: " << result << endl ;
	return 0;
}
//////////////////////////////////////////////
//Define all function bodies here

float compute( float f, long l, int i )
{
	double sum, square;
	sum = i + l + f;
	square = sqrt(sum);
	return square;
}
double average( double num1, double num2 )
{
	double sum, average;
	sum = num1 + num2;
	average = sum / 2;
	return average;
}

double average( double num1, double num2, double num3 )
{
	double sum, average;
	sum = num1 + num2 + num3;
	average = sum / 3;
	return average;
}

double average( double num1, double num2, double num3, double num4 )
{
	double sum, average;
	sum = num1 + num2 + num3 + num4;
	average = sum / 4;
	return average;
}
