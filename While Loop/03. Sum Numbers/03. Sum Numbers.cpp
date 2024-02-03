// 03. Sum Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int target, currentSum = 0;
	cin >> target;
	int currentNumber;

	while (currentSum != target && currentSum <= target) {
		cin >> currentNumber;
		currentSum += currentNumber;
	}

	cout << currentSum << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
