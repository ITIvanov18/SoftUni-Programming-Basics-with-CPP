// 07. Food Delivery.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int chicken, fish, vegetarian;
	cin >> chicken >> fish >> vegetarian;

	double dostavka = 2.5;
	double food = chicken * 10.35 + fish * 12.4 + vegetarian * 8.15;
	double desert = 0.2 * food;

	double total = food + dostavka + desert;
	cout << total;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

