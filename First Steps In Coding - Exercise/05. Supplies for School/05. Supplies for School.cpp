// 05. Supplies for School.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int pens;
	cin >> pens;

	int markers;
	cin >> markers;

	int cleaningAgent;
	cin >> cleaningAgent;

	int discount;
	cin >> discount;

	double total = pens * 5.8 + markers * 7.20 + cleaningAgent * 1.2;
	cout << total - (total * discount / 100);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
