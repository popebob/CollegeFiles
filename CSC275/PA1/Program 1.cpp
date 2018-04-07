/*
	Cody Adams
	CSC 275
	01/31/07
	Program Assignment #1
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//student structure declaration
struct student
{
	double weightedaverage;
	string name, ID, grade;
	int qz1, qz2, qz3, mid, final;
};

// Function prototypes
void printHeader ();
int readData(student students[], int & count);
void computeWeightedaverage(student & students);
string assignGrade(student students);
int sortByaverage(student students[], int count);
int printReport(student students[], int count);


int main()	//int argc, _TCHAR* argv[])
{
   student students[50];
   int count;
   
   printHeader ();

   readData (students, count );

   // For all students in the class, calculate the weighted average
   // and Assign grades.


   for (int i = 0; i < count; i++)
   {  
	  computeWeightedaverage(students[i]);
      students[i].grade = assignGrade(students[i]);
   }

   sortByaverage(students, count);
   printReport (students, count);

   return 0;
}

//Function to print header information including my name and records heading
void printHeader()
{
	cout << "Cody Adams" << endl << "CSC 275 Program Assignment 1 - Students Record Report" << endl;
}

//Function to read data from text file and assign it to the students array
int readData(student students[], int & count )
{
	cout << "Reading file, please wait..." << endl;
	count = 0;
	ifstream inputFile;
	inputFile.open("d1.txt");
	if (!inputFile)
		cout << "ERROR!";
	while (!inputFile.eof())
	{
		inputFile >> students[count].name >> students[count].ID >> students[count].qz1 >> students[count].qz2 >> students[count].qz3 >> students[count].mid >> students[count].final;
		count++;
		cout << "Reading record: " << count << endl;;
	}
	cout << "File loaded successfully! " << count << " records read" << endl;
	inputFile.close();
	return 0;
}

//Function to compute the weighted average for each students, passed one student at a time
void computeWeightedaverage(student & students)
{
	double qztotal, qzavg, weightedqz, weightedmid, weightedfinal, weightedtotal;
	qztotal = (students.qz1 + students.qz2 + students.qz3);
	qzavg = (qztotal / 90) * 100;
	weightedqz = (qzavg * .2);
	weightedmid = (students.mid * .3);
	weightedfinal = (students.final * .5);
	weightedtotal = (weightedqz + weightedmid + weightedfinal);
	students.weightedaverage = weightedtotal;
}

//Function to assign a letter grade to correspond to the weighted average
string assignGrade(student students)
{
	string grade;
	if (students.weightedaverage <= 100 && students.weightedaverage >= 89.6)
		grade = "A";
	if (students.weightedaverage <= 89.5 && students.weightedaverage >= 79.6)
		grade = "B";
	if (students.weightedaverage <= 79.5 && students.weightedaverage >= 70.6)
		grade = "C";
	if (students.weightedaverage <= 69.5 && students.weightedaverage >= 60.6)
		grade = "D";
	if (students.weightedaverage < 59.5)
		grade = "E";
	return grade;

}

//Function to sort the records by the computed weighted average
int sortByaverage(student students[], int count)
{
	cout << "Sorting, please wait" << endl;
	for(int i = 0; i < count; i++)
	{
		for(int j = 0; j < count-1; j++)
		{
			if(students[j].weightedaverage < students[j+1].weightedaverage)
			{
				student swap = students[j+1];
				students[j+1] = students[j];
				students[j] = swap;
			}
		}
	}
	cout << "Sorting finished!" << endl;
	return 0;
}

//Function to print the sorted records
int printReport(student students[], int count)
{
	cout << endl << endl << "CSC 123, taught by Prof. S.W. Packages" << endl;
	cout << "Student Records Sorted by Their Weighted Course Average" << endl;
	cout << left << setw(20) << "Name" << setw(5) << "ID" << setw(15) << "Quizzes" << setw(5) << "Mid" 
	<< setw(7) << "Final" << setw(8) << fixed << setprecision(2) << "Wt Avg" << setw(7) << "Grade" << endl << endl;
		for(int i = 0; i < count; i++)
		{
			cout << left << setw(20) << students[i].name << setw(7) << students[i].ID << students[i].qz1 << ", " << students[i].qz2
			<< ", "  << setw(5) << students[i].qz3 << setw(5) << students[i].mid << setw(7) << students[i].final
			<< setw(8) << fixed << setprecision(2) << students[i].weightedaverage << setw(7) << students[i].grade << endl;
		}
return 0;
}