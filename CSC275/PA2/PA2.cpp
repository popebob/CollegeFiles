/*
	Cody Adams
	CSC 275
	02/22/07
	Program Assignment #2

	P2.cpp : Defines the entry point for the console application.
*/

//Include statement for the sortedVList header class, includes all other neccesary header files
#include "sortedVList.h"

// Functions prototypes to be used by main()
int getMenuChoice();
string getName(string prompt);

int main()
{
	sortedVList names;

	unsigned int choice = 0;
	string name;
	signed int location = 0;

	do 
	{
	choice = getMenuChoice();

	switch (choice) 
	{
		case 1: // 1.	List  names
			names.displaySortedNames( );
			break;
		case 2:  //  2.	Insert Name
			name = getName(" Insert into list ");
			names.insertName (name);
			cout << endl<< name<< ", has successfully been added to the list\n";
			break;
		case 3:  //  3.	Remove Name

			name = getName(" Remove from  list ");

			if (names.removeName(name))
				cout << endl<< name<< ", has successfully been removed from the list\n";
			else
				cout << endl<< name<< ", NOT LOCATED in list, so could not be removed\n";
			break;

		case 4:  // 4.	Search names

				name = getName (" Search for " );
				location = names.search(name);
				if (location < 0)
					cout << "\nSorry the name: " << name << " was not found in the list\n";
				else
					cout << "\nName: " << name << ", was found in the list at location: "<< location
					<< endl;
			break;
		case 5:  //  5.	Exit
				cout << "\nYou selected to exit this program:\nThanks for testing my program!!\n";
			break;
		default:
			cout << endl<<"Sorry invalid choice, You inputed choice"<< choice<< "\nTerminating program\n";
			exit (1);
			break;
		}

	} while (choice != 5);

return 0;
}// end main


string getName(string prompt)
{
	string operName;
	cout << "\nWhat name would you like to "<< prompt << ":";
	cin.ignore();
	getline(cin, operName);
	return operName;
}

int getMenuChoice() 
{
	bool secondPass = false;
	unsigned int choice = 0;
	do
	{
		if (secondPass)  
			cout << endl<<"Invalid option choose between 1-5"<<endl;

		cout << endl<< "MENU OPTIONS:";
		cout << endl<< "1.	List  names";
		cout << endl<< "2.	Insert Name";
		cout << endl<< "3.	Remove Name";
		cout << endl<< "4.	Search names";
		cout << endl<< "5.	Exit";
		secondPass = true;
		cout << endl<< "Please make a selection: ";
		cin >> choice;
	}
	while ((choice <= 1) && (choice >6));

	return choice;
};


sortedVList::sortedVList()
//Function used to initialize the vector array using the class definiton
{
	char  fname[50];
	cout << "Please enter the filename from which to retrieve data: ";
	cin.getline(fname, 50);
	getData(fname); 
}

void sortedVList::getData(char * fname)
// Called during initialization of any sortedVList vector array, accepts a char filename and reads in names from it
{
	char currentrecord[50];
	cout << "Reading file, please wait..." << endl;
	unsigned int count = 0;
	ifstream inputFile;
	inputFile.open(fname);
	if (!inputFile)
	{
		cout << "ERROR: File not found" << endl;
		main();
	}		
	while (!inputFile.fail())
	{
		inputFile.getline(currentrecord, 50);
		sortedVList::names.push_back(currentrecord);
		count++;
		cout << "Reading record: " << count << endl;;
	}
	cout << "File loaded successfully! " << count << " records read" << endl;
	inputFile.close();
	sortList();
}

void sortedVList::sortList()		
//Function to sort the list of names in ascending order, assumes a sortedVList 
//vector array named names exists in the sortedVList class, initialized with names read from a file

{
	unsigned int n = sortedVList::names.size();
	string temp;
	for (unsigned int i = 0; i < n; ++i) 
	{
		unsigned int k = i;
			for (unsigned int j = i + 1; j < n; ++j) 
			{
				if (sortedVList::upperCaseIt(names[j]) < sortedVList::upperCaseIt(names[k]))
				{
					temp = sortedVList::names[k];
					sortedVList::names[k] = sortedVList::names[j];
					sortedVList::names[j] = temp;
				}
			}
	}

}


int sortedVList::search(string key)
	// Searches the vector of names for the string argument
	// Returns the location of the match within the list if the key
	// value is located, otherwise returns -1
{
	sortList();
	int first = 0,
		last = (sortedVList::names.size() - 1),
		middle, 
		position = -1;
	bool found = false;
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (sortedVList::upperCaseIt(names[middle]) == sortedVList::upperCaseIt(key))
		{
			found = true;
			position = middle;
		}
		else if (sortedVList::upperCaseIt(names[middle]) > sortedVList::upperCaseIt(key))
			last = middle -1;
		else
			first = middle +1;
	}
	return position;
}

bool sortedVList::removeName (string name)	
	//If the argument name is in the vector list of names,
	//this function removes the name and returns true, otherwise returns false
{
	vector<string>::iterator iter = names.begin();
	for( unsigned int i = 0; i < sortedVList::names.size(); i++ )
	{	
		if (sortedVList::upperCaseIt(names[i]) == sortedVList::upperCaseIt(name))
		{
			sortedVList::names.erase(iter);
			sortList();
			return true;
		}
		iter++;
	}
	return false;

}

void sortedVList::insertName (string name)
	// Adds the argument name to the list of sortedVList::names, while keeping the
	// order sorted.
{
	sortedVList::names.push_back(name);

}

void sortedVList::displaySortedNames()
	// Outputs to standard output the  list of sortedVList::names, 
	// one name per line.
{
		for( unsigned int i = 0; i < sortedVList::names.size(); i++ )
	{	
        sortList();
		cout << sortedVList::names[i] << endl;
		

	}
}
