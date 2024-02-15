// 04. Numbers Divided by 3 Without Reminder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	while (i <= 100) {
		i++;
		if (i % 3 == 0) {
			cout << i << endl;
		}
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
