// 07. Shopping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double budget;
	int GPU, CPU, RAM;
	cin >> budget >> GPU >> CPU >> RAM;
	const double GPU_PRICE = 250;
	double gpuCosts = GPU * GPU_PRICE;

	double cpuPrice = 0.35 * gpuCosts;
	double cpuCosts = CPU * cpuPrice;

	double ramPrice = 0.1 * gpuCosts;
	double ramCosts = RAM * ramPrice;

	double totalCosts = gpuCosts + cpuCosts + ramCosts;

	if (GPU > CPU) {
		totalCosts -= 0.15 * totalCosts; // Apply 15% discount
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= totalCosts) {
		cout << "You have " << budget - totalCosts << " leva left!" << endl;
	}
	else {
		cout << "Not enough money! You need " << totalCosts - budget << " leva more!" << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
