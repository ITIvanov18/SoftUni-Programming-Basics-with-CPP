// 05. Godzilla vs. Kong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double budget, clothing;
	int statisticianCount;
	cin >> budget >> statisticianCount >> clothing;

	double decoration = 0.1 * budget;
	double clothingPrice = statisticianCount * clothing;
	if (statisticianCount > 150) {
		clothingPrice -= clothingPrice * 0.1;
	}

	double totalFilmCost = decoration + clothingPrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalFilmCost > budget) {
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << totalFilmCost - budget << " leva more." << endl;
	}

	if (totalFilmCost <= budget) {
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << budget - totalFilmCost << " leva left." << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
