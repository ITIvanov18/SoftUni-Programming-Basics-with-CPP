// 06. Repainting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int nylon, paint, diluent, hours;
	cin >> nylon >> paint >> diluent >> hours;

	double torbichki = 0.4;

	double materials = (nylon + 2) * 1.5 + (paint + 0.1 * paint) * 14.5 + diluent * 5 + torbichki;
	double labor = 0.3 * materials;
	cout << (materials + labor) * hours;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

