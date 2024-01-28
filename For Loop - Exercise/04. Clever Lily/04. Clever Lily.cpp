// 04. Clever Lily.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int age, toyPrice;
	double washingMachinePrice;
	cin >> age >> washingMachinePrice >> toyPrice;

	int savings = 0;

	for (int i = 1; i <= age; i += 2) {
		savings += toyPrice;
	}

	for (int i = 2; i <= age; i += 2) {
		savings += i * 5 - 1;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (savings >= washingMachinePrice) {
		cout << "Yes! " << savings - washingMachinePrice << endl;
	}
	else {
		cout << "No! " << washingMachinePrice - savings << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
