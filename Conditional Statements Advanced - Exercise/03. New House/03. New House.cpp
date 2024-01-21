// 03. New House.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string flowerType;
	int flowerCount, budget;
	cin >> flowerType >> flowerCount >> budget;

	double price = 0;
	double discount = 0;

	if (flowerType == "Roses") {
		price = 5 * flowerCount;
		if (flowerCount > 80) {
			discount = -0.1;
		}
	}
	else if (flowerType == "Dahlias") {
		price = 3.8 * flowerCount;
		if (flowerCount > 90) {
			discount = -0.15;
		}
	}
	else if (flowerType == "Tulips") {
		price = 2.8 * flowerCount;
		if (flowerCount > 80) {
			discount = -0.15;
		}
	}
	else if (flowerType == "Narcissus") {
		price = 3 * flowerCount;
			if (flowerCount < 120) {
				discount = 0.15;
			}
	}
	else if (flowerType == "Gladiolus") {
		price = 2.5 * flowerCount;
		if (flowerCount < 80) {
			discount = 0.2;
		}
	}

	double costs = (1 + discount) * price;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= costs) {
		cout << "Hey, you have a great garden with " << flowerCount << " " << flowerType
			<< " and " << budget - costs << " leva left." << endl;
	} else {
		cout << "Not enough money, you need " << costs - budget << " leva more." << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
