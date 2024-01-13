// 02. Radians to Degrees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	const double PI = 3.14;
	double radians;
	cin >> radians;

	double degrees = radians * 180 / PI;

	cout << round(degrees) << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

