//Cody Adams Exercise #15

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;
#include <fstream.h>;
#include <math.h>;

int triple(int, int, int);

int main()	//main function
	{
	clrscr();
	int side1, side2, hypotenuse, status, done;
	done = 0;
	while (!done)
	{
	cout << "Please enter the two sides and hypotenuse of a triangle" << endl;
	cin >>  side1 >> side2 >> hypotenuse;
	if (side1 == -1)
		done = 1;
	if (side2  == -1)
		done = 1;
	if (hypotenuse == -1)
		done = 1;
	status = triple(side1, side2, hypotenuse);
	if (status)
		cout << "The numbers form a pythagorean triple" << endl;
	else
		cout << "The numbers do not form a pythagorean triple" << endl;
	}
	}

int triple(int side1,int side2,int hypotenuse)
	{
	if (pow(side1,2)+pow(side2,2) == pow(hypotenuse,2))
		return 1;
	else
		return 0;
	}