// Lowest Score Drop
// This program averages test scores after dropping the lowest score.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getScore(int &);

void calcAverage(int, int, int, int, int);

int findLowest (int, int, int, int, int);

int main()
{
	int test1, test2, test3, test4, test5, finished; // 5 user input test scores
	

	// Call getScore once for each test score to be input
	getScore(test1);
	getScore(test2);
	getScore(test3);
	getScore(test4);
	getScore(test5);

	// Call calcAverage to calculate and display the average
	calcAverage(test1, test2, test3, test4, test5);

	//Allows for additional averages to be taken, also allows for average to be seen :-)

	cout << "Press 1 if you wish to take another average, 0 to exit " << endl;
	cin >> finished;
	if ( finished == 1 )
		main();
	return 0;

}// end of main function

void getScore(int & score)	

//Function to validate a user-entered test score and store it to a variable

{	
	score = 0;		//initialization of the variable score
	cout << "Please enter a test score: ";
	cin >> score;
	while  ( score < 0 || score > 100) //input validation
	{
		cout << "You entered: " << score << ".  This is invalid, please try again" << endl;
		cout << "Please enter a test score: ";
		cin >> score;
	}
	cout << "You entered: " << score << ".  This is valid, Thank you!" << endl;
}

void calcAverage(int test1, int test2, int test3, int test4, int test5)

//Function to drop the lowest of the five passed scores and 
//return the average of the remaining scores

{	
	int lowest, average;
	lowest = findLowest(test1, test2, test3, test4, test5);
	average = (((test1 + test2 + test3 + test4 + test5) - lowest) / 4);
	cout << "The low score of " << lowest << " was dropped," << endl;
	cout << "The mean of the remaining score is: " << average << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5) 

//Function to determine the lowest of the five passed scores

{
	int lowscore, scores[5];
	scores[0]=score1;
	scores[1]=score2;
	scores[2]=score3;
	scores[3]=score4;
	scores[4]=score5;
	lowscore = scores[0];
	for (int i = 0 ; i < 5 ; i++ )
	{
		if ( scores[i] < lowscore )
			lowscore = scores[i];
	}
	return lowscore;
}
