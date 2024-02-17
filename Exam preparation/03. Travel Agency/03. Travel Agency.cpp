// 03. Travel Agency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string location, packageType, hasVipDiscount;
	int daysToStay;
	cin >> location >> packageType >> hasVipDiscount >> daysToStay;

	if (daysToStay < 1) {
		cout << "Days must be positive number!" << endl;
		return 0;
	}
	
	double pricePerDay = 0, vipDiscount = 0;
	if (location == "Bansko" || location == "Borovets") {
		if (packageType == "withEquipment") {
			pricePerDay = 100;
			vipDiscount = 0.1;
		}
		else if (packageType == "noEquipment") {
			pricePerDay = 80;
			vipDiscount = 0.05;
		}
	}

	else if (location == "Varna" || location == "Burgas") {
		if (packageType == "withBreakfast") {
			pricePerDay = 130;
			vipDiscount = 0.12;
		}
		else if (packageType == "noBreakfast") {
			pricePerDay = 100;
			vipDiscount = 0.07;
		}
	}

	if (pricePerDay == 0) {
		cout << "Invalid input!" << endl;
		return 0;
	}

	if (daysToStay > 7) {
		daysToStay--;
	}

	double totalCosts = daysToStay * pricePerDay;
	if (hasVipDiscount == "yes") {
		totalCosts -= vipDiscount * totalCosts;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "The price is " << totalCosts << "lv! Have a nice time!" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

