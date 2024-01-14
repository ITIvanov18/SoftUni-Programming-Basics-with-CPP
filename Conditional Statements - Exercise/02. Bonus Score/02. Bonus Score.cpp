// 02. Bonus Score.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	double bonusPoints = 0.0;
	if (num <= 100) {
		bonusPoints = 5;
	}
	else if (num > 100 && num < 1000) {
		bonusPoints = 0.2 * num;
	}
	else if (num > 1000) {
		bonusPoints = 0.1 * num;
	}

	if (num % 2 == 0) {
		bonusPoints += 1;
	}
	else if (num % 10 == 5) {
		bonusPoints += 2;
	}

	double total = num + bonusPoints;

	cout << bonusPoints << endl;
	cout << total << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
