// 07. Hotel Room.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string month;
	int nights;
	cin >> month >> nights;

	double studioPrice = 0;
	double apartamentPrice = 0;

	if (month == "May" || month == "October") {
		studioPrice = 50;
		apartamentPrice = 65;
		if (nights > 14) {
			studioPrice *= 0.7;
		}
		else if (nights > 7) {
			studioPrice *= 0.95;
		}
	}

	else if (month == "June" || month == "September") {
		studioPrice = 75.20;
		apartamentPrice = 68.70;
		if (nights > 14) {
			studioPrice *= 0.8;
		}
	}

	else if (month == "July" || month == "August") {
		studioPrice = 76;
		apartamentPrice = 77;
	}

	if (nights > 14) {
		apartamentPrice *= 0.9;
	}

	double apartmentCosts = apartamentPrice * nights;
	double studioCosts = studioPrice * nights;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Apartment: " << apartmentCosts << " lv." << endl;
	cout << "Studio: " << studioCosts << " lv." << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
