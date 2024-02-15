// 05. Average Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0, count = 0;

	while (count < n) {
		int number;
		cin >> number;
		sum += number;
		count++;
	}

	double average = double(sum) / n;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << average << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
