// 07. Sum Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;
	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		sum += num;
	}

	cout << sum;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
