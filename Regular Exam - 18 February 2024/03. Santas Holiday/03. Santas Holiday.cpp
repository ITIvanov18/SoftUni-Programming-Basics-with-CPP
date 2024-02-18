// 03. Santas Holiday.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int roomForOne = 18;
	const int apartment = 25;
	const int presidentAp = 35;

	int days;
	string typeOfRoom = "";
	string rating = "";

	cin >> days;
	getline(cin.ignore(), typeOfRoom);
	cin >> rating;
	int nights = days - 1;
	double startingPrice = 0;
	double discountAmount = 0;

	if (typeOfRoom == "room for one person") {
		startingPrice = nights * roomForOne;
	}
	else if (typeOfRoom == "apartment") {
		startingPrice = nights * apartment;

		if (days < 10) {
			discountAmount = 30 * startingPrice / 100;
		}
		else if (10 <= days  && days <= 15) {
			discountAmount = 35 * startingPrice / 100;
		}
		else {
			discountAmount = 50 * startingPrice / 100;
		}
	}
	else if (typeOfRoom == "president apartment") {
		startingPrice = nights * presidentAp;

		if (days < 10) {
			discountAmount = 10 * startingPrice / 100;
		}
		else if (10 <= days && days <= 15) {
			discountAmount = 15 * startingPrice / 100;
		}
		else {
			discountAmount = 20 * startingPrice / 100;
		}
	}

	double finalPrice = startingPrice - discountAmount;

	if (rating == "positive") {
		finalPrice *= 1.25;
	}
	else if (rating == "negative") {
		finalPrice *= 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << finalPrice << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
