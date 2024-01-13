// 05. Number 100-200.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num < 100) {
		cout << "Less than 100" << endl;
	}
	else if (num <= 200) {
		cout << "Between 100 and 200" << endl;
	}
	else {
		cout << "Greater than 200" << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

