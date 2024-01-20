// 05. Small Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	string product; cin >> product;
	string city; cin >> city;
	double quantity; cin >> quantity;
	double totalCost = 0.0;

	if (city == "Sofia") {
		if (product == "coffee") {
			totalCost = 0.5 * quantity;
		} else if (product == "water") {
			totalCost = 0.8 * quantity;
		} else if (product == "beer") {
			totalCost = 1.2 * quantity;
		} else if (product == "sweets") {
			totalCost = 1.45 * quantity;
		} else if (product == "peanuts") {
			totalCost = 1.6 * quantity;
		}
	} 
	else if (city == "Plovdiv") {
		if (product == "coffee") {
			totalCost = 0.4 * quantity;
		} else if (product == "water") {
			totalCost = 0.7 * quantity;
		} else if (product == "beer") {
			totalCost = 1.15 * quantity;
		} else if (product == "sweets") {
			totalCost = 1.3 * quantity;
		} else if (product == "peanuts") {
			totalCost = 1.5 * quantity;
		}
	} 
	else if (city == "Varna") {
		if (product == "coffee") {
			totalCost = 0.45 * quantity;
		} else if (product == "water") {
			totalCost = 0.7 * quantity;
		} else if (product == "beer") {
			totalCost = 1.10 * quantity;
		} else if (product == "sweets") {
			totalCost = 1.35 * quantity;
		} else if (product == "peanuts") {
			totalCost = 1.55 * quantity;
		}
	}

	cout << totalCost << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
