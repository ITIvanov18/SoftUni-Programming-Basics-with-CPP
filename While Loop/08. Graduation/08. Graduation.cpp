// 08. Graduation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string studentName;
	cin >> studentName;

	int currentGrade = 1;
	double totalGrades = 0;
	int totalYearsInSchool = 0;

	while (currentGrade <= 12) {
		double yearlyGrade;
		cin >> yearlyGrade;

		if (yearlyGrade < 4.0) {
			cout << studentName << " has been excluded at " << currentGrade << " grade" << endl;
			return 0;
		}

		totalGrades += yearlyGrade;
		totalYearsInSchool++;

		if (yearlyGrade >= 4.0) {
			currentGrade++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	double averageGrade = totalGrades / totalYearsInSchool;
	cout << studentName << " graduated. Average grade: " << averageGrade << endl;

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
