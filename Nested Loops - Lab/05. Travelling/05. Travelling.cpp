// 05. Travelling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;

	while (input != "End") {
		string destination = input;
		double requiredBudget;
		cin >> requiredBudget;

		double savedMoney = 0;
		while (savedMoney < requiredBudget) {
			double sum;
			cin >> sum;	
			savedMoney += sum;
		}
		cin >> input;

		cout << "Going to " << destination << "!" << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
