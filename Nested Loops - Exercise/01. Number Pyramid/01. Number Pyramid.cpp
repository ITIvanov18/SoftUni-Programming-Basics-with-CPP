// 01. Number Pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int current = 1;
	bool isBigger = false;

	for (int rows = 1; rows <= n; rows++) {

		for (int cols = 1; cols <= rows; cols++) {

			if (current > n) {
				isBigger = true;
				break;
			}
			cout << current << " ";
			current++;
		}

		if (isBigger) {
			break;
		}
		cout << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu