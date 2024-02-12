// 04. Train The Trainers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int juries;
	cin >> juries;
	cin.ignore();

	double allGradesSum = 0; //сума от оценките на всички презентации
	int totalGradesCounter = 0; //брой получени оценки

	string presentationName;
	getline(cin, presentationName);

	cout.setf(ios::fixed);
	cout.precision(2);

	while (presentationName != "Finish") {

		double sum = 0;
		for (int jury = 1; jury <= juries; jury++) {
			double grade;
			cin >> grade;

			sum += grade;
			allGradesSum += grade;
			totalGradesCounter++;
		}

		double averageGradePerPresentation = sum / juries;
		cout << presentationName << " - " << averageGradePerPresentation << "." << endl;

		cin.ignore();
		getline(cin, presentationName);
	}

	double average = allGradesSum / totalGradesCounter;
	cout << "Student's final assessment is " << average << "." << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
