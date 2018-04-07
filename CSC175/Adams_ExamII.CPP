//Cody Adams Exam II Part B Q.4

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;
#include <fstream.h>;
#include <math.h>;

int main()	//main function
	{
	clrscr();
	char Alpha[15] = {"WVTRQMKJIHGEDBA"}, searchstring;
	int found = 0, index = 0, foundcurrent = 0;
	for (int x = 0; x != 5; x++)
	{	cout << "Which of the following do you wish to search for: (search " << x+1 << " of 5)" << endl << "W,V,T,R,Q,M,K,J,I,H,G,E,D,B,A?"<< endl;
		cin >> searchstring;
		for (index = 0; index != 15; index++)
		{       if (Alpha[index] == searchstring)
			{       found++;
				foundcurrent = 1;
				cout << "Alphabet found" << endl;
			}
		}
		if (!foundcurrent)
			cout << "Alphabet not found" << endl;
		foundcurrent = 0;
	}
	cout << "Total number of alphbets found: " << found << endl;
	cout << "Alphabets not found: " << 5 - found << endl;
	return 0;
	};

