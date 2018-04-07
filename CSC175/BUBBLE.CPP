//Cody Adams Assign #1A

#include <iostream.h>;		//include files
#include <conio.h>;
#include <iomanip.h>;
#include <fstream.h>;

int main()	//main function
	{
	clrscr();
	int const size = 5;
	int nums[size], temp, flag = 1;
	for (int x = 0; x != size; x++)
	{	cout << "Please enter an integer: (" << x+1 << " of " << size << ")" << endl;
		cin >> nums[x];
	}
	while (flag == 1)
	{       flag = 0;
		for (x = 0; x < size-1; x++)
		{	if (nums[x] > nums[x+1])
			{	temp = nums[x];
				nums[x] = nums[x+1];
				nums[x+1] = temp;
				flag = 1;
	}	} 	}
	cout << "The sorted list is: " << endl;
	for (x = 0; x != size; x++)
		cout << nums[x] << endl;
	return 0;
	};

