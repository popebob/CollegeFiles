//Cody Adams Assign #1A

#include <iostream.h>;		//include files
#include <conio.h>;

int main()	//main function
	{
	clrscr();
	int num1, num2, num3, num4, num5, largest, smallest;		//variable declaration
	smallest = 0;
	largest = 0;
	cout << "Please enter 5 integers," << endl;
	cout << "and I will tell you the largest and smallest in the group" << endl;
	cin >>  num1 >> num2 >> num3 >> num4 >> num5;
	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
		{largest = num1;};
	if (num2 > num2 && num2 > num3 && num2 > num4 && num2 > num5)
		{largest = num2;};
	if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
		{largest = num3;};
	if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
		{largest = num4;};
	if (num5 > num1 && num5 > num2 && num5 >num3 && num5 > num4)
		{largest = num5;};
	cout << "The largest of the numbers you entered is: "<< largest << endl;
	if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
		{smallest = num1;};
	if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
		{smallest = num2;};
	if (num3 < num2 && num3 < num1 && num3 < num4 && num3 < num5)
		{smallest = num3;};
	if (num4 < num2 && num4 < num3 && num4 < num1 && num4 < num5)
		{smallest = num4;};
	if (num5 < num2 && num5 < num3 && num5 < num4 && num5 < num1)
		{smallest = num5;};
	cout << "The smallest of the numbers you entered is: "<< smallest;
	return 0;
	};

