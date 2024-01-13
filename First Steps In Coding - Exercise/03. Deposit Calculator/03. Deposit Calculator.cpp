// 03. Deposit Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double deposit;
	cin >> deposit;

	int term;
	cin >> term;

	double interest;
	cin >> interest;
	interest /= 100;

	double sum = deposit + term * ((deposit * interest) / 12);
	cout << sum << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
