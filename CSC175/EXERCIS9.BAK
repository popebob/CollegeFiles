
#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;
#include <fstream.h>;

int main()	//main function
	{
	clrscr();
	ifstream innumsFile("nums.dat");
	long nums[20], odd[20], even[20], x, count1, count2, product, sum;
	count1 = 0;
	count2 = 0;
	product = 1;
	sum = 0;
	for (x=0; x!=20; x++)
	{       innumsFile >> nums[x];
		cout << nums[x]<<endl;
		if (nums[x] % 2 != 0)
		{	odd[count1] = nums[x];
			count1++;	}
		else
		{	even[count2] = nums[x];
			count2++;	}}
	for (x=0; x!=count1; x++)
		product *= odd[x];
	for (x=0; x!=count2; x++)
		sum += even[x];
	if (count1 != 0)
		cout << "The product of all the odd numbers is " << product << endl;
	else
		cout << "There were no odd numbers" << endl;
	if (count2 != 0)
		cout << "The sum of all the even numbers is " << sum;
	else
		cout << "There were no even numbers";
	return 0;
	}

