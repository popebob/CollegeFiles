//SearchList  class will hold the words in the WORDSKIP file in alphabetical order.   Minimum operations required for this class include:
//1.	constructor make an empty list
//2.	insert_inorder (word) returns void or integer return value
//3.	is_entry (word) returns bool,  TRUE if word string is in the list, FALSE otherwise.  
//(Implementation Notes: Use a binary search to locate the word  in this list, or you can use the STL find function if your list is implemented as a STL container.)
#include <iostream>
#include <cctype>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;


class SearchList
{
    public:
		SearchList();
		SearchList(const string);
		bool is_entry(string key);
	private:
		bool search(int first, int last, string key);
		string returntolower(const string data);
		vector <string> skiplist;
	    int counter;
};

SearchList::SearchList()
{
	cout<<"File not found, using default file name SKIPLIST\n\n";
	string fname = "SKIPLIST";
	ifstream fin;
	fin.open(fname.c_str(), ios::in);
	//cout<<"Preforming Data Read and converting to all lower case\n";
	string temp;
	while (!fin.eof())
		{
			fin>>temp;
			skiplist.push_back(returntolower(temp));
			//cout<<endl<<returntolower(temp)<<endl;			
		}
	//cout<<"end data read, begin sort"<<endl;
	sort(skiplist.begin(), skiplist.end());
	//cout<<"end sort"<<endl;
	//cout<<"end constructor"<<endl<<endl;
}

SearchList::SearchList (const string fname) 
{
    ifstream fin;
	fin.open(fname.c_str(), ios::in);
	//cout<<"Preforming Data Read and converting to all lower case\n";
	string temp;
	while (!fin.eof())
		{
			fin>>temp;
			skiplist.push_back(returntolower(temp));
			//cout<<endl<<returntolower(temp)<<endl;			
		}
	//cout<<"end data read, begin sort"<<endl;
	sort(skiplist.begin(), skiplist.end());
	//cout<<"end sort"<<endl;
	//cout<<"end constructor"<<endl<<endl;
}
string SearchList::returntolower(const string data)
{
	string temp=data;
	for (unsigned int i=0; i<data.length(); i++)
		temp[i]=tolower(data[i]);
    return temp;
}

bool SearchList::is_entry(string key)
{
	int first = 0;
	int last = skiplist.size()-1;
	string lowerkey;
	lowerkey=returntolower(key);
	//cout<<"is entry function word searched  "<<key;
	return search(first, last, lowerkey);
}

bool SearchList::search(int first, int last, string key)
{
	int mid; 
    while ( (first <= last) )
    {
		mid = (first + last)/2;
        if (key == skiplist[mid])
        {
			return true;
        }
        else if (key < skiplist[mid])
        {
            last = mid - 1;
        }
        else if (key > skiplist[mid])    
		{
            first = mid + 1;
        }
	}
	//cout<<"not found"<<endl;
	return false;    
}
