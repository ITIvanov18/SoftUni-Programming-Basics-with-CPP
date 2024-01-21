// 05. Journey.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double budget;
	string season;
	cin >> budget >> season;

	string destination, accommodationType;
	double expenses = 0;

	if (budget <= 100) {
		destination = "Bulgaria";
		if (season == "summer") {
			expenses = 0.3 * budget;
		}
		else if (season == "winter") {
			expenses = 0.7 * budget;
		}
	}
	else if (budget <= 1000) {
		destination = "Balkans";
		if (season == "summer") {
			expenses = 0.4 * budget;
		}
		else if (season == "winter") {
			expenses = 0.8 * budget;
		}
	}
	else {
		destination = "Europe";
		accommodationType = "Hotel";
		expenses = 0.9 * budget;
	}

	if (accommodationType.size() == 0) {
		if (season == "summer") {
			accommodationType = "Camp";
		}
		else if (season == "winter") {
			accommodationType = "Hotel";
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Somewhere in " << destination << endl;
	cout << accommodationType << " - " << expenses << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
