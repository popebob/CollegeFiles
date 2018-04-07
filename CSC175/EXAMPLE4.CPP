//Cody Adams Assign #1A

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;
#include <fstream.h>;

int main()	//main function
	{
	ifstream invalue("retail_value.dat");
	clrscr();
	float prod[5], total;
	int quantity;
	total = 0;
	quantity = 0;
	prod[0] = 2.98;
	prod[1] = 4.50;
	prod[2] = 9.98;
	prod[3] = 4.49;
	prod[4] = 6.87;
	for (int e = 0; e!= 5; e++)
	{       cout << "Please enter the quantity sold of product " << e+1 << endl;
		cin >> quantity;
		prod[e] *= quantity;
	}
	cout << endl;
	for (e = 0; e!= 5; e++)
	{	cout << "Total retail value sold of product " << e+1 << " was $" << setprecision(2) << prod[e] << endl;
		total = total + prod[e];
	}
	cout << "Total value of all products sold was $" << setprecision(2) << total << endl;
	ofstream outvalue("retail_value.dat");
	outvalue<<
	return 0;
	};

