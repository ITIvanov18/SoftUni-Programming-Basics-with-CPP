// 06. Number in Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int num;
	cin >> num;

	if (num >= -100 && num <= 100 && num != 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
