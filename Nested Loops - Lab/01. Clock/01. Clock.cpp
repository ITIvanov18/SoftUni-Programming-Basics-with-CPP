// 01. Clock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	for (int hour = 0; hour <= 23; hour++) 
	{
		for (int minute = 0; minute <= 59; minute++)
		{
			if (minute < 10) {
				cout << hour << ":0" << minute << endl;
			}
			else {
				cout << hour << ":" << minute << endl;
			}
		}
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
