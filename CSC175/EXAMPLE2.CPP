//Cody Adams Assign #1A

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;

int main()	//main function
	{
	clrscr();
	int data, temp, dig1, dig2, dig3, dig4;
	cout << "Please enter the four-digit number to be encrypted." << endl;
	cin >> data;
	dig1 = (data / 1000);
	dig2 = (data % 1000) / 100;
	dig3 = (data % 100) / 10;
	dig4 = (data % 10) / 1;
	cout << dig1 << dig2 << dig3 << dig4;
	return 0;
	};

