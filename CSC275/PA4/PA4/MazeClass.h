#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <cctype>
#include "stdafx.h"

using namespace std;


class MazeClass 
{
public:
	// constructors
	MazeClass ();
 	// This constructor, prompts the user to enter the name of a data
	// file, then invokes getData with the input external file name,
	// to load the contents of the input data file into the private 
	// vector names (see below)

	// Function prototypes
	void ReadMaze(char* fname);
	
	void PrintMaze();

	void FindExit(int row, int col);

	void PrintExit();

	void RecordPath(int x, int y);

 private:
	//Stack-adapted vectors used to store the exit path   
	stack < int, vector<int> > xpath;
	stack < int, vector<int> > ypath;
	//Two-Dimensional array used to store the unsolved maze
	int maze[12][12];
	//Two-Dimensional array used to store the unsolved maze
	bool success;
	//Error-catching variable to prevent unwanted results when mistyping a filename
	bool readsuccess;
};