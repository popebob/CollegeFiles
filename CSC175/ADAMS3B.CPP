#include <iostream.h>;
#include <conio.h>;
#include <fstream.h>;
#include <iomanip.h>;

int main()
{
	clrscr();
	float nums[20], largest, smallest;
	for (int x = 0; x != 20; x++)
	{	cout << "Please enter a number: (" << x + 1 << " of 20)" << endl;
		cin >> nums[x];
		largest = nums[0];
		smallest = nums[0];
	}
	for (x = 0; x != 20; x++)
	{	if (nums[x] > largest)
			largest = nums[x];
		if (nums[x] < smallest)
			smallest = nums[x];
	}
	cout << "The largest number is: " << largest << endl;
	cout << "The smallest number is: " << smallest << endl;
	cout << "The rest of the numbers are: " << endl;
	for (x = 0; x != 20; x++)
	{	if (nums[x] != smallest)
		{	if (nums[x] != largest)
				cout << nums[x] << endl;}

	}
	return 0;
}