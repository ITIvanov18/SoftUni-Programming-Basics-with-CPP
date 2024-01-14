// 06. World Swimming Record.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double recordInSeconds, distance, timePerMeter;
	cin >> recordInSeconds >> distance >> timePerMeter;

	double finishTime = distance * timePerMeter;

	// round - rounds the num to the nearest integer
	// ceiling - rounds the num to the nearest greater integer
	// floor - rounds the num to the nearest lower integer
	int slowEffects = floor(distance / 15);
	finishTime += slowEffects * 12.5;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (finishTime < recordInSeconds) {
		cout << "Yes, he succeeded! The new world record is " 
			<< finishTime << " seconds." << endl;
	}
	else {
		cout << "No, he failed! He was " << finishTime - recordInSeconds 
			<< " seconds slower." << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

