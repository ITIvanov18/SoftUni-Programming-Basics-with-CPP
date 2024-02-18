// 02. Deer of Santa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int daysAbscent, kilosFood;
	double deerOne, deerTwo, deerThree;
	cin >> daysAbscent >> kilosFood >> deerOne >> deerTwo >> deerThree;

	double foodNeeded = daysAbscent * (deerOne + deerTwo + deerThree);
	double foodLeft = kilosFood - foodNeeded;
	if (foodNeeded < kilosFood) {
		cout << floor(kilosFood - foodNeeded) << " kilos of food left." << endl;
	}
	else {
		cout << ceil(foodNeeded - kilosFood) << " more kilos of food are needed." << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
