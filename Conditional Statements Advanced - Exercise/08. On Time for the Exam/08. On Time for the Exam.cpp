// 08. On Time for the Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int examHour, examMinutes, arrivalHour, arrivalMinutes;
	cin >> examHour >> examMinutes >> arrivalHour >> arrivalMinutes;

	int examTime = examHour * 60 + examMinutes;
	int arrivalTime = arrivalHour * 60 + arrivalMinutes;
	int difference = examTime - arrivalTime;


	if (difference < 0) {
		cout << "Late" << endl;
	}
	else if (difference <= 30) {
		cout << "On time" << endl;
	}
	else {
		cout << "Early" << endl;
	}

	if (difference != 0) {
		int absoluteDifference = abs(difference);

		if (absoluteDifference < 60) {
			cout << absoluteDifference << " minutes ";
		} else {
			int hoursDiff = absoluteDifference / 60;
			int minutesDiff = absoluteDifference % 60;

			cout << hoursDiff << ":";

			if(minutesDiff < 10){
				cout << "0";
			}
			cout << minutesDiff << " hours ";
		}

		if (difference < 0) {
			cout << "after";
		} else {
			cout << "before";
		}

		cout << " the start" << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
