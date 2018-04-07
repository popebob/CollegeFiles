//Cody Adams Assignment 1B

#include <iostream.h>;		//include files
#include <conio.h>;

int main()	//main function
{ 	char string1[6]; 	//declare the string array to store the number
	clrscr();		//clear any previous output
	cout << "Please enter a five-digit number.." << endl; 	//prompt for input
	cin >> string1;		//store input
	for (int i = 0; string1[i] != '\0'; i++)     //step through the array
		cout << string1[i] << "   ";		//print the current array element
	return 0;	//end program
}