// 01. Dishwasher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
	int detergentBottles;
	cin >> detergentBottles;
	int detergentQuantity = detergentBottles * 750;

	int platesCount = 0;
	int potsCount = 0;
	int timesFilled = 0;

	string input;

	while (cin >> input && input != "End") {
		int dishes = stoi(input);
		timesFilled++;

		if (timesFilled % 3 == 0) {
			potsCount += dishes;
		} else {
			platesCount += dishes;
		}
	}

	int totalDetergentNeeded = platesCount * 5 + potsCount * 15;
	int leftoverDetergent = detergentQuantity - totalDetergentNeeded;

	if (leftoverDetergent >= 0) {
		cout << "Detergent was enough!" << endl;
		cout << platesCount << " dishes and " << potsCount << " pots were washed." << endl;
		cout << "Leftover detergent " << leftoverDetergent << " ml." << endl;
	}
	else {
		cout << "Not enough detergent, " << -leftoverDetergent << " ml. more necessary!" << endl;
	}

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

