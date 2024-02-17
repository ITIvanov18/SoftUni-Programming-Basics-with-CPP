// 05. Club.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double targetProfit;
	cin >> targetProfit;

	double profit = 0;
	bool targetIsReached = false;

	string input;
	while (getline(cin.ignore(), input) && input != "Party!") {
		int count;
		cin >> count;

		int baseOrderPrice = input.length() * count;
		double actualOrderPrice = baseOrderPrice;

		if (baseOrderPrice % 2 != 0) {
			actualOrderPrice -= 0.25 * actualOrderPrice;
		}

		profit += actualOrderPrice;
		if (profit >= targetProfit) {
			targetIsReached = true;
			break;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (targetIsReached) {
		cout << "Target acquired." << endl;
	}
	else {
		cout << "We need " << targetProfit - profit << " leva more." << endl;
	}

	cout << "Club income - " << profit << " leva." << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
