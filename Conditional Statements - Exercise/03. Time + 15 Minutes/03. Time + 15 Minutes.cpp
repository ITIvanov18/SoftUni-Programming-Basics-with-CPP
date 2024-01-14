// 03. Time + 15 Minutes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int hours, minutes;
	cin >> hours >> minutes;

	minutes += 15;

	if (minutes >= 60) {
		hours += 1;
		minutes -= 60;
	}

	if (hours >= 24) {
		hours -= 24;
	}

	if (minutes < 10) {
		cout << hours << ":0" << minutes << endl;
	}
	else {
		cout << hours << ":" << minutes << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

