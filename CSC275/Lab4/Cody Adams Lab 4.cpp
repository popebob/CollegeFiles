// recurLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void sign(int n)
{
  while ( n > 0)
  {
    cout<< "No Smoking Please!!!" << endl;
    n--;
  } // end while
} // end sign

 void signRecur(int n)
{   /*
	This is my recursive function used to diaplay a message.  It takes an integer n
	and immediately decrements it.  If n!=0 (recur state), the void calls itself
	if n=0 (stop state), the function concludes
	*/
	
	n--;
	cout << "This is program uses recursion to display a message...";
    cout << n << " recursions left..." << endl;
	if (n !=0)
		signRecur(n);
	else
		return;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int times;

    system("cls");

	cout << "How many times do you wish to display this sign: ";
	cin >> times;

    sign (times);

    // Call the recursive version of the sign function, displaying a
   // slightly different message
    cout << endl<< endl<< "Recursive version:" << endl;
	signRecur (times);

    cout << endl<< endl<< "Success, you've returned!!"<< endl;
	return 0;
}

