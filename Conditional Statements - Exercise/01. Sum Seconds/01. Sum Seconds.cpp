// 01. Sum Seconds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int timeFirst, timeSecond, timeThird;
	cin >> timeFirst >> timeSecond >> timeThird;

	int totalTime = timeFirst + timeSecond + timeThird;
	int minutes = totalTime / 60;
	int seconds = totalTime % 60;

	if (seconds < 10) {
		cout << minutes << ":0" << seconds << endl;
	}
	else {
		cout << minutes << ":" << seconds << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

