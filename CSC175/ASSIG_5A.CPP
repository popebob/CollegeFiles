//Cody Adams Assign #5A

/*
#include <iostream>	//include files
#include <conio>
#include <iomanip>
#include <fstream>
*/

#include <iostream>
#include <iomanip>
using namespace std;

int perfect(int);

int main()	//main function
	{
	clrscr();
	int number, factors[1000];
	cin >> number;
	for (number = 3; number != 1000; number++)
		factors = perfect(number);
	for (int x = 0; x != pointer; x++)
		cout << factors[x] << endl;
	return 0;
	};

int perfect(int number)
	{
	int sum = 0, factors[1000] = {0}, pointer = 0;
	for (int x = 2; x != number -1; x++)
	{	if (number % x == 0)
			factors[pointer] = x;
			pointer++;
	}
	for (x = 0; x != pointer; x++)
			sum += factors[x];
		return factors[pointer];
	}