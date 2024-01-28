// 02. Half Sum Element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		int currentNumber;
		cin >> currentNumber;

		sum += currentNumber;

		if (currentNumber > max) {
			max = currentNumber;
		}
	}

	int diff = abs(sum - 2 * max);
	if (diff == 0) {
		cout << "Yes" << endl;
		cout << "Sum = " << max << endl;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << diff << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
