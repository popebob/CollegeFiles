//Cody Adams Final Q.No.5

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;
#include <fstream.h>;

int main()	//main function
	{
	clrscr();
	double sales[4][5], grandtotal = 0, rowtotals[4] = {0}, columntotals[4] = {0};
	int row = 0, column = 0, index = 0, value = 0;
	for (row = 0; row != 4; row++)
	{	for (column = 0; column != 5; column++)
		{	cout << "Please enter the sales for sales person " << row + 1  << ", " << "Product number " << column + 1 << ":" << endl;
			cin >> sales[row][column];
		}
	}
	cout << "       1        2        3        4        5        Total" << endl;

	for (row = 0; row != 4; row++)
	{       for (int x = 0; x != 5; x++)
			rowtotals[row] = rowtotals[row] + sales[row][x];
	}
	for (column = 0; column != 5; column++)
	{       for (int x = 0; x != 4; x++)
			columntotals[column] = columntotals[column] + sales[x][column];
	}
	for (row = 0; row != 4; row++)
	{       cout << row + 1;
		for (column = 0; column != 5; column++)
			cout << "      " << sales [row][column];
		cout << " " << rowtotals[row] << endl;
		grandtotal += rowtotals[row];
	}
	cout << "Totals:";
	for (column = 0; column != 5; column++)
		cout << columntotals[column] << "   ";
	cout << grandtotal;
	return 0;
	};

