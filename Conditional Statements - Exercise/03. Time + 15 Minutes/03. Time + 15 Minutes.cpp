// 03. Time + 15 Minutes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int hours, minutes;
	cin >> hours >> minutes;

	int timeInMinutes = hours * 60 + minutes;
	int timePlus15 = timeInMinutes + 15;

	int finalHours = timePlus15 / 60;
	int finalMinutes = timePlus15 % 60;

	if (finalHours >= 24) {
		finalHours -= 24;
	}

	if (finalMinutes < 10) {
		cout << finalHours << ":0" << finalMinutes << endl;
	}
	else {
		cout << finalHours << ":" << finalMinutes << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

