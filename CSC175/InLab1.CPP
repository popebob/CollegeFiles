//Cody Adams In-Lab Exercise #1

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;

int main()	//main function
	{
	clrscr();               //clear any previous output
	int count1, count2, num; 	//variable declaration, two counters, one storage variable
	for (count1 = 1; count1 <= 5; count1++)		//Loop five times to get five inputs
	{	cout << endl << "Please enter an integer between 1 and 30 (" << count1 << " of 5)" << endl;		//prompt for input
		cin >> num;		//Store input
		for (count2 =1; count2 <= num; count2++)	//Loop as many times as the number the user entered
			cout << "*";}  		//Print one asterisk for each unit in the number the user entered
	return 0;		//end program
	};

