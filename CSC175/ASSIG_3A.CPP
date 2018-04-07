//Cody Adams Assign #3A

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;
#include <fstream.h>;

int main()	//main function
	{
	clrscr();
	ifstream inFile("painting.dat");
	int length, width, perimeter;
	float pricewood, pricecanvas, woodcost, canvascost;
	inFile >> pricewood >> pricecanvas >> length >> width;
	perimeter = (2 * length) + (2 * width);
	cout << "You need to buy " << perimeter << " units of wood" << endl;
	woodcost = perimeter * pricewood;
	canvascost = perimeter * pricecanvas;
	cout << woodcost << endl << canvascost;
	return 0;
	};

