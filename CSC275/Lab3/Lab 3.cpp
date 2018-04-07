/*
	Cody Adams
	CSC 275
	02/07/07
	Lab Assignment #3 - Vectors
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	vector <int> numbers;	//declaration of vector to store random generated numbers
	int runs = 0;	//declaration of variable to store number of iterations to run
	cout << "How many random numbers would you like to generate?" << endl; 
	cin >> runs;	//get number of runs from user
	for ( int i = 0; i < runs; i++)		//loop to store the generate number
	{
		int randnum = rand() % 11;
		numbers.push_back(randnum);
		cout << randnum << " was added to the vector.  New size: " << numbers.size() 
			<< " , new capacity: " << numbers.capacity() << endl;
	}
	cout << "The vector is as follows: " << endl;
	for ( i = 0; i < numbers.size(); i++)
		cout << numbers[i] << endl;
	vector <int> occurrences(11);
	for ( i=0; i < 11; i++)
		occurrences[i] = 0;
	int value;
	for ( i=0; i < numbers.size(); i++)
	{
		value = numbers[i];
		occurrences[value]++;
	}
	cout << "Is the rand() function truly random?? See for yourself..." << endl;
	cout << left << setw(11) << "Value: " << setw(18) << "Times generated: " << endl;
	for ( i=0; i < 11; i++)
		cout << left << setw(11) << i << setw(18) << occurrences[i] << endl;
	return 0;
}