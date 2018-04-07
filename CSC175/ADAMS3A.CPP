#include <iostream.h>;
#include <conio.h>;
#include <fstream.h>;
#include <iomanip.h>;

int main()
	{      //All inputs and outputs are in inches (square inches for area)
	clrscr();
	int length, width, perimeter, area;	//variable declaration
	float pricewood, pricecanvas, woodcost, canvascost, totalcost;
	ifstream inFile("AdamsIn.dat");	     //open stream to data file
	inFile >> pricewood >> pricecanvas >> length >> width;
	perimeter = (length * 2) + (width * 2);  //determine perimeter to use to find woodcost
	woodcost = perimeter * pricewood;     //find woodcost
	area = length * width;		//determine area to use to find canvascost
	canvascost = (area / 12) * pricecanvas;    // find canvascost in feet (inches/12)
	totalcost = canvascost + woodcost;    //find totalcost
	ofstream outFile("AdamsOut.dat");
	outFile << "Buy " << setprecision(2) << perimeter / 12 << " feet and " << perimeter % 12 << " inches of wood" << endl << "The canvas has dimensions of: " << length << " x " << width << endl << "The cost of wood is: $" << woodcost << endl << "The cost of canvas is: $" << canvascost << endl << "Total cost is: $" << totalcost << endl;
	return 0;
	};