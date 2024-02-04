// 03. Vacation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double requiredMoney, moneyAvailable;
	cin >> requiredMoney >> moneyAvailable;

	string operation;
	double amount;
	int consecutiveSpendOperations = 0, totalDays = 0;
	bool isSuccessful = false;

	while (cin >> operation >> amount) {
		totalDays++;

		if (operation == "save") {
			moneyAvailable += amount;
			consecutiveSpendOperations = 0;

			if (moneyAvailable >= requiredMoney) {
				isSuccessful = true;
				break;
			}
		}

		else if (operation == "spend") {
			if (amount > moneyAvailable) {
				moneyAvailable = 0;
			}
			else {
				moneyAvailable -= amount;
			}

			if (++consecutiveSpendOperations == 5) {
				isSuccessful = false;
				break;
			}
		}

	}

	if (isSuccessful) {
		cout << "You saved the money for " << totalDays << " days." << endl;
	} else {
		cout << "You can't save the money." << endl;
		cout << totalDays << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu