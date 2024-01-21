// 04. Fishing Boat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int budget, fishermen;
	string season;
	cin >> budget >> season >> fishermen;

	double rentPrice = 0;

	if (season == "Spring") {
		rentPrice = 3000;
	}
	else if (season == "Summer" || season == "Autumn") {
		rentPrice = 4200;
	}
	else if (season == "Winter") {
		rentPrice = 2600;
	}

	double discount = 0;

	if (fishermen <= 6) {
		discount = -0.1;
	}
	else if (fishermen <= 11) {
		discount = -0.15;
	}
	else {
		discount = -0.25;
	}

	double totalCosts = (1 + discount) * rentPrice;

	if (fishermen % 2 == 0 && season != "Autumn") {
		totalCosts *= 0.95;
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	if (budget >= totalCosts) {
		cout << "Yes! You have " << budget - totalCosts << " leva left." << endl;
	} else {
		cout << "Not enough money! You need " << totalCosts - budget << " leva." << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
