// 08. Basketball Equipment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int fee;
	cin >> fee;

	double shoes = fee - (0.4 * fee);
	double kit = shoes - (0.2 * shoes);
	double basketball = kit / 4;
	double accessories = basketball / 5;


	double total = fee + shoes + kit + basketball + accessories;
	cout << total;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

