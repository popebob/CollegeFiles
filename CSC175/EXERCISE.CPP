#include <iostream.h>;
#include <conio.h>;

int main()
{
	double dblA, dblB, dblC;
	int done, true;
	clrscr();  //clear the screen for new output
	cout << "This program will determine if the three numbers" << endl;
	cout << "you enter can make up the sides of a triangle." << endl;
	cout << "Please enter three numbers, -1 to stop" << endl;
	cin >> dblA >> dblB >> dblC;
	done = 0;
	true = 0;
	if (dblA<0 || dblB<0 || dblC<0)
	{	cout << "Terminated by user";
		return 0;		}
	while (done != 1)
	{	if (dblA+dblB > dblC)
		{	true = 1 ;
			done = 1;	}
		if (dblA+dblC > dblB)
		{	true = 1 ;
			done = 1;	}
		if (dblB+dblC > dblA)
		{	true = 1;
			done = 1;	}
		if (dblA == dblB && dblC)
		{	true = 1;
			done = 1;	}
	}
	if (true == 1)
	{	cout << "These numbers make a triangle";
	}
	else
	{	cout << "These numbers do not a triangle";
	}
	return 0;
};