// USD to BGN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	double usd;
	cin >> usd;

	const double rate = 1.79549;
	double bgn = usd * rate;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << bgn;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
