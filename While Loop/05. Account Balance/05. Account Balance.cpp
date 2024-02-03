// 05. Account Balance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double accountBalance = 0;
	double deposit;
	string command;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (cin >> deposit && command != "NoMoreMoney") {
		if (deposit < 0) {
			cout << "Invalid operation!" << endl;
			break;
		}

		accountBalance += deposit;
		cout << "Increase: " << deposit << endl;
	}

	cout << "Total: " << accountBalance << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
