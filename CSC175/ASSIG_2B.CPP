//Cody Adams Assignment 2B

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;

int main()	//main function
{ 	char num[5];	//declare the string array to store the number
	int palindrome,done,nums; //declare a couple flag variables
	clrscr();		//clear any previous output
	nums = 1;
	while (nums <= 10)
	{	cout << "Please enter a five-digit number (" << nums << " of 10)..." << endl; 	//prompt for input
		cin >> num;		//store input
		palindrome = 1;		//initialize palindrome as true
		for (int e = 0; e != 2; e++)     //step through the array, testing if the number is still a palidrome
			if (num[e] != num[4-e]) //checking the mirror digit
				palindrome = 0;
		if (palindrome == 1)
			cout << num << " is a plaindrome" << endl;
		if (palindrome != 1)
			cout << num << " is not a plaindrome" << endl;
		nums++;
	 }
	 cout << "If you would like to test ten more, enter 1, to exit enter 2." << endl;    //prompt if done
	 cin >> done;	//assign to see if the user wants to exit
	 if (done == 1)   //if they want another go, loop to start
		main();
	 return 0;     //otherwise, quit
}