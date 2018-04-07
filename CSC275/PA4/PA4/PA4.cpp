/*
	Cody Adams
	CSC 275
	04/01/07
	Program Assignment #4

	Solve the maze
*/

#include <string>
#include "stdafx.h"
#include "MazeClass.h"

using namespace std;

int main()
{
	
	cout << "Cody Adams" << endl << "CSC 275" << endl << "04/01/07" << endl << "Program Assignment #4" << endl;
	MazeClass mazedata;
	return 0;
}

MazeClass::MazeClass ()
{
	char  fname[50];
	cout << "Please enter the filename to load for maze data: ";
	cin.getline(fname, 50);
	cout << endl << "Reading maze data" << endl;
	ReadMaze(fname); 
	if (!readsuccess)
	{
		cout << "ERROR: File not Found" << endl;
		return;
	}
	cout << "Printing maze data" << endl;
	PrintMaze();
	success = false;
	FindExit(1, 0);
	if (success)
	{
		cout << "Exit Route found!  Printing...." << endl;
		PrintExit();
	}
	if (!success)
		cout << "Exit Route not found!  Terminating....";
}

void MazeClass::PrintMaze()
{
	for (int row = 0; row < 12; row++)
	{	
		for (int col = 0; col < 12; col++)
		{
			cout << maze[row][col] << " ";

		}
		cout << endl;
	}
}

void MazeClass::PrintExit()
{
	//cout << "Exit Route: (" << row << ", " << col << ")" << endl;
	cout << xpath.size() << " moves required to solve maze :" << endl;
	int moves = xpath.size();
	for (unsigned int n = moves; n > 0; n--)
	{	
		cout << "Exit Route: (" << xpath.top() << ", " << ypath.top() << ")" << endl;
		xpath.pop();
		ypath.pop();
	}
}

void MazeClass::ReadMaze(char* fname)
{
	int row = 1, col = 1;
	cout << "Reading file, please wait..." << endl;
	ifstream inputFile;
	inputFile.open(fname);
	if (!inputFile)
	{
		inputFile.close();
		readsuccess = false;
		return;
	}
	cout << "Filename accepted!" << endl;
	cout << "Opening file..." << endl;
	for (col = 0; col < 12; col++)
		maze[0][col] = 1;
	for (col = 0; col < 12; col++)
		maze[11][col] = 1;
	for (row = 0; row < 12; row++)
		maze[row][0] = 1;
	for (row = 0; row < 12; row++)
		maze[row][11] = 1;
	
	for (row = 1; row < 11; row++)
	{	
		for (col = 1; col < 11; col++)
		{
			inputFile >> maze[row][col];
			cout << "Reading coordinate: (" << row << ", " << col << ") : " << maze[row][col] << endl;;

		}
	}
	cout << "File loaded successfully! " << endl;
	inputFile.close();
	return;
}

void MazeClass::FindExit(int row, int col)
{
	if ( (row == 10) && (col == 10) )
		success = true;
	else
		success = false;
	if (success)
        return;	
	if (maze[row][col+1] == 0)	//East open, move east
	{
		RecordPath(row, col+1);
		maze[row][col+1] = 2;
		success = false;
		FindExit(row, col+1);
	}
	//Look south for exit route
	if (maze[row+1][col] == 0)	//South open, move south
	{
		RecordPath(row+1, col);
		maze[row+1][col] = 2;
		success = false;
		FindExit(row+1, col);
	}
	//Look west for exit route
	if (maze[row][col-1] == 0)	//West open, move west
	{
		RecordPath(row, col-1);
		maze[row][col-1] = 2;
		success = false;
		FindExit(row, col-1);
	}
	if (maze[row-1][col] == 0)	//North open, move north
	{
		RecordPath(row-1, col);
		maze[row-1][col] = 2;
		success = false;
		FindExit(row-1, col);
	}
	if (!success)
		return;
}

void MazeClass::RecordPath(int x, int y)
{
	xpath.push(x);
	ypath.push(y);
	return;
}