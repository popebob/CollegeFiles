//Cody Adams Assignment 2A

#include <iostream.h>;		//include files
#include <conio.h>;

int main()	    //main function
{       clrscr(); 	//clear any previous output
	float wage,sales;  //variable declaration
	int done;
	done = 0;      //initialization of flag to false
	cout << "Please enter the salesperson's sales" << endl;	//prompt for sales
	cin >> sales;		//assign sales
	wage = 200 + (.09 * sales);		//figure wage using formula
	cout << "The salesperson's wages are $" << wage << endl; 	//display wage
	cout << "If you would like to figure another, enter 1, to exit enter 2." << endl;    //prompt if done
	cin >> done;	//assign to see if the user wants to exit
	if (done == 1)   //if they want another go, loop to start
		main();
	return 0;     //otherwise, quit
}