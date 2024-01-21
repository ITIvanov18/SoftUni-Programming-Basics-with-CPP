// 01. Cinema.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string projectionType;
	int rows, cols;
	cin >> projectionType >> rows >> cols;
	double ticketPrice = 0.0;


	if (projectionType == "Premiere") {
		ticketPrice = 12;
	}
	else if (projectionType == "Normal") {
		ticketPrice = 7.5;
	}
	else if (projectionType == "Discount") {
		ticketPrice = 5;
	}

	double profit = rows * cols * ticketPrice;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << profit << " leva" << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
