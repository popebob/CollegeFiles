//Cody Adams Exercise 13

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;
#include <fstream.h>;

int main()	//main function
	{
	clrscr();
	double sales[4][5], rowtotals[4] = {0.0}, columntotals[4] = {0.0};
	int row, column, index, value;
	for (row = 0; row != 4; row++)
	{	for (column = 0; column != 5; column++)
		{	cout << "Please enter the sales for sales person " << row + 1  << ", " << "Product number " << column + 1 << ":" << endl;
			cin >> sales[row][column];
		}
	}
	cout << "       1      2      3      4      5      Total" << endl;

	for (row = 0; row != 4; row++)
	{       for (int x = 0; x != 5; x++)
			rowtotals[row] = rowtotals[row] + sales[row][x];
			cout << "loop1";
	}
	cout << "not loop";
	for (column = 0; column != 5; column++)
	{       for (int x = 0; x != 4; x++)
			columntotals[column] = columntotals[column] + sales[row][x];
			cout << "loop2";
	}
	for (row = 0; row != 4; row++)
	{       cout << row + 1;
		for (column = 0; column != 5; column++)
			cout << "      " << sales [row][column];
		cout << rowtotals[row] << endl;
	}
	cout << "Totals      ";
	for (column = 0; column != 5; column++)
		cout << columntotals[column] << "      " << endl;
	return 0;
	};

