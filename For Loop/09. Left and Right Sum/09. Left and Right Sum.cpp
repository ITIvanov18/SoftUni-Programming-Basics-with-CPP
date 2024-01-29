// 09. Left and Right Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int leftSum = 0;
	int rightSum = 0;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		leftSum += num;
	}

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		rightSum += num;
	}

	int diff = abs(leftSum - rightSum);
	if (diff == 0) {
		cout << "Yes, sum = " << leftSum << endl;
	}
	else {
		cout << "No, diff = " << diff << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

