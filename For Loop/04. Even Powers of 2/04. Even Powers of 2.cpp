// 04. Even Powers of 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i <= n; i ++) {
		if (i % 2 == 0) {
		cout << pow(2,i) << endl;
		}
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
