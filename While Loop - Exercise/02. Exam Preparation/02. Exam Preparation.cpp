// 02. Exam Preparation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int badGradesCounter;
	cin >> badGradesCounter;

	string input, lastProblem;
	int currentBadGrades = 0, gradeSum = 0, problemsCount = 0;

	bool isTimeForRest = false;
	while (getline(cin >> ws, input) && input != "Enough") {
		int grade;
		cin >> grade;

		if (grade <= 4) {
			currentBadGrades++;

			if (currentBadGrades >= badGradesCounter) {
				isTimeForRest = true;
				break;
			}
		}

		gradeSum += grade;
		problemsCount++;
		lastProblem = input;
	}

	if (isTimeForRest == false) {
		cout.setf(ios::fixed);
		cout.precision(2);

		cout << "Average score: " << (double)gradeSum / problemsCount << endl;
		cout << "Number of problems: " << problemsCount << endl;
		cout << "Last problem: " << lastProblem << endl;
	} else {
		cout << "You need a break, " << currentBadGrades << " poor grades." << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
