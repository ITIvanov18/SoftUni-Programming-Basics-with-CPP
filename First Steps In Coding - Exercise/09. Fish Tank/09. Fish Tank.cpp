// 09. Fish Tank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const double CONVERTION_RATE = 0.001;

int main() {
	int length, width, height;
	double percent;
	cin >> length >> width >> height >> percent;

	double volume = (length * width * height) * CONVERTION_RATE;
	double full = percent / 100;
	double water = volume * (1 - full);

	cout << water;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

