// 02. Safari.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const double fuelPrice = 2.10, guidePrice = 100;

	double budget, requiredFuel;
	string dayOfWeek;
	cin >> budget >> requiredFuel >> dayOfWeek;

	double requiredMoney = requiredFuel * fuelPrice + guidePrice;
	if (dayOfWeek == "Saturday") {
		requiredMoney -= 0.1 * requiredMoney;
	}
	else if (dayOfWeek == "Sunday") {
		requiredMoney -= 0.2 * requiredMoney;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= requiredMoney) {
		cout << "Safari time! Money left: " << budget - requiredMoney << " lv.";
	}
	else {
		cout << "Not enough money! Money needed: " << requiredMoney - budget << " lv.";
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
