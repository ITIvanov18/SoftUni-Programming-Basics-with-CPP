// 02. Report System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int expectedSum;
	cin >> expectedSum;

	int cashTotal = 0, cardTotal = 0;
	int itemCount = 0;
	bool collectedEnough = false;

	string input;
	while (cin >> input && !collectedEnough) {

		if (input == "End") {
			break;
		}

		int productPrice = stoi(input);

		// Четен подред продукт, очаква се плащане в брой
		if (itemCount % 2 == 0) {
			if (productPrice <= 100) {
				cashTotal += productPrice;
				cout << "Product sold!" << endl;
			}
			else {
				cout << "Error in transaction!" << endl;
			}
		} else {
			// Нечетен подред продукт, очаква се плащане с карта
			if (productPrice >= 10) {
				cardTotal += productPrice;
				cout << "Product sold!" << endl;
			}
			else {
				cout << "Error in transaction!" << endl;
			}
		}
		itemCount++;

		// Проверка за избор на метод на плащане
		if (cashTotal + cardTotal >= expectedSum) {
			double averageCash = cashTotal / 2.0;
			double averageCard = cardTotal / 2.0;

			cout.setf(ios::fixed);
			cout.precision(2);

			cout << "Average CS: " << averageCash << endl;
			cout << "Average CC: " << averageCard << endl;
			collectedEnough = true;
		}
	}

	if (!collectedEnough) {
		cout << "Failed to collect required money for charity." << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu