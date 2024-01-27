// 08. Number sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int maxNumber = INT_MIN;
	int minNumber = INT_MAX;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;

		if (value > maxNumber) {
			maxNumber = value;
		}

		if (value < minNumber) {
			minNumber = value;
		}

	}

	cout << "Max number: " << maxNumber << endl;
	cout << "Min number: " << minNumber << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
