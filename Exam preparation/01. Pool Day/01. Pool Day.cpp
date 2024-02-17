// 01. Pool Day.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int peopleCount;
	double entranceFee, chaiseLonguePrice, umbrellaPrice;
	cin >> peopleCount >> entranceFee >> chaiseLonguePrice >> umbrellaPrice;

	double totalEntryCost = peopleCount * entranceFee;

	double totalLoungeCost = ceil(0.75 * peopleCount) * chaiseLonguePrice;
	double totalUmbrellaCost = ceil(0.50 * peopleCount) * umbrellaPrice;

	double totalCosts = totalEntryCost + totalLoungeCost + totalUmbrellaCost;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalCosts << " lv." << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

