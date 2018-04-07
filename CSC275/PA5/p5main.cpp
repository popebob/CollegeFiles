// p5main.cpp : Defines the entry point for the console application.
/*
Cody Adams
CSC 275
04/08/07
Program Assignment 5
Binary Search Template
*/

#include "stdafx.h"
#include "BankAccount.cpp"
#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

/*  INCLUDE YOUR BinSearch TEMPLATE CLASS HEADER AND CODE HERE 
	Searches the vector of names for the string argument
	Returns the location of the match within the list if the key
	value is located, otherwise returns -1

	Cody Adams
	CSC 275
	04/08/07
	Program Assignment 5
	Binary Search Template
	----------------------------------------------------------------------------------------------
	Parameters:
	1.	the array to be sorted
	2.	starting index within array
	3.	index of last element in array
	4.	a key item to search for within the array
	5.	a Boolean flag to indicate if the key value was located,  this must be a reference parameter.
	6.	and if located the index within the array where it was found, also a reference parameter.
*/

template<class T>
int BinSearch(T * array, int start, int end, T & key , bool & found, int & location)
{
	unsigned int n = end - start;
	T temp;
	for (unsigned int i = 0; i < n; ++i) 
	{
		unsigned int k = i;
			for (unsigned int j = i + 1; j < n; ++j) 
			{
				if (array[j] < array[k])
				{
					temp = array[k];
					array[k] = array[j];
					array[j] = temp;
				}
			}
	}
	int first = start,
		last = end,
		middle;
	location = -1;
	found = false;
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (array[middle] == key)
		{
			found = true;
			location = middle;
		}
		else if (array[middle] > key)
			last = middle -1;
		else
			first = middle +1;
	}
	return location;
}

/*	END OF  BinSearch HERE                                */


  void testIntSearch ();
  void testStringSearch ();
  void testRecSearch ( );

//************************************************************************************
int main( )
{  
   string line;
   // Test Search template on an array of integers
   cout << "\n\n**************  Testing Binary Search Template with an array of INTEGERS\n";
   testIntSearch ();

   cout << "\n\n**************  Testing Binary Search Template with an array of objects of type BankAccount\n";
   testRecSearch ( );

   // Get rid of the end of line character left over from reading last search key
   cin.ignore ( 1000,'\n');

   cout << "\n\n**************  Testing Binary Search Template with an array of STRING \n";
   testStringSearch ();
   return 0;
}// end main

void testIntSearch ()
{ // precondition: none
  // postcondition: Procedure intialized an array of integers in ascending order, then prompts
  //                the user for a key value to search for.  Tests the Binary Search template with integers

	const ARRAY_SIZE = 10;

    int intList [ARRAY_SIZE];
    const int finalIndex = ARRAY_SIZE - 1;

    int i;
    for (i = 0; i < ARRAY_SIZE; i++)
        intList[i] = 3*i;

    cout << "\n\nInteger Array contains:\n";
    for (i = 0; i < ARRAY_SIZE; i++)
        cout << intList[i] << " ";
    cout << endl;

    int key, location;
    bool found = false;

    cout << "\nEnter number to be located: ";
    cin >> key;

    BinSearch(intList, 0, finalIndex, key, found, location);

    if (found)
        cout << key << " is in index location "
             << location << endl;
    else
        cout << key << " is not in the array." << endl;

    return;
	}// end testIntSearch

 ///////////////////////////////////////////////////////////////////////
 void testStringSearch ()
 {  // Preconditions: File names.txt contains names in ascending order and 
		//               is located within the current folder.
	// Postconditions: Opens file names.txt, loads an array with these names, prompts the user to enter a 
	//                 key, then tests the Binary Search template with the array of names and the key. 
	//                  Closes file before exit.
	string names [30] ;
	string aName;
	bool found = false;
	int location;

	// Test the binary search template using an array of BankAccounts
	ifstream inf;
	// Input text file contained in same directory as this program
	inf.open( "names.txt");
	if (inf.fail())
		{
		cerr << "**************  ERROR: Can not open file names.txt for input"<<endl;
		return ;  //failure return
		}

	// Load BankAccount array from data file
	int count = 0;  // will hold the number of records read in, also used as a subscript
	while (!inf.eof() )
	{
		//inf >> names [count];
		getline (inf,names [count]); 
		count++;
	}

	cout << "\n\nThe array of names contains:\n";
	// Show what is stored in the array of customers
	for (int index = 0; index < count; index ++)
		cout << names[index]<< endl;

	// Prompt user to enter a search key value
	cout << "\nWhat Name do you wish to search for? ";
		getline (cin,aName);  

	//Search for the input name
	BinSearch(names,  0,  count - 1, aName ,  found,  location);

	if (found)
	{
		cout << "\nLocated name: " << aName << ", at position: "<<  location << endl;

	}
	else  cout << "\nThat NAME is NOT located in Names List"<< endl;

	inf.close();
	return;
 }
  
 ///////////////////////////////////////////////////////////////////////

void testRecSearch ( )
 {  // Preconditions:  opens and reads file data into an array of records.
    // Postconditions:  Created an array of BankAccount records, displayed them to the user,  asked for a search
    //                 key, then tested the Binary Search template with the array of BankAccounts. 
   //                  Closes file before exit.

	// Test the binary search template using an array of BankAccounts
	BankAccount Customers [25] ; 
	ifstream inf;
	// Input text file contained in same directory as this program
	inf.open( "indat.txt");
	if (inf.fail())
		{
		cerr << "**************  ERROR: Can not open file: for input"<<endl;
		return ;  //failure return
		}

	// Load BankAccount array from data file
	double balance;
	double iRate;
	BankAccount anAccount;
	int count = 0;

	while (! inf.eof() )
	{
		inf >> balance >> iRate;
		anAccount = BankAccount(balance, iRate);
		Customers[count] = anAccount;
		count++;
	}
	// Show what is stored in the array of customers
	for (int index = 0; index < count; index ++)
		Customers[index].output();

	// Prompt user to enter a search key value
	int key; 
	bool found = false;
	int location;
	BankAccount searchRec;
	cout << "\nWhat ID do you wish to search for? ";
	cin >> key;

	//Create a BankAccount with the key input as ID, then search for that record
	searchRec.setID(key);
	BinSearch(Customers,  0,  count - 1, searchRec,  found,  location);

	if (found)
	{
		cout << "Located account: " << key << ", Contains following data: "<< endl;
		Customers[location].output();
	}
	else  cout << "Key value not located in Customers"<< endl;

	inf.close();
	return;
	}

