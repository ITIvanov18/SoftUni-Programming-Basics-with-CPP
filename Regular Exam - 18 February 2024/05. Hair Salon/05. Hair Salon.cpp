// 05. Hair Salon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

const int mensHaircut = 15;
const int ladiesHaircut = 20;
const int kidsHaircut = 10;
const int touchUp = 20;
const int fullColor = 30;

int main()
{
	int dailyTarget, totalProfit = 0;
	cin >> dailyTarget;
	string input = "";

	while (cin >> input && input != "closed") {
		int currentProfit = 0;

		if (input == "haircut") {
			string haircutType;
			cin >> haircutType;
			if (haircutType == "mens") {
				currentProfit += mensHaircut;
			}
			else if (haircutType == "ladies") {
				currentProfit += ladiesHaircut;
			}
			else if (haircutType == "kids") {
				currentProfit += kidsHaircut;
			}
		}

		if (input == "color") {
			string serviceType;
			getline(cin.ignore(), serviceType);
			if (serviceType == "touch up") {
				currentProfit += touchUp;
			}
			else if (serviceType == "full color") {
				currentProfit += fullColor;
			}
		}

		totalProfit += currentProfit;

		if (totalProfit >= dailyTarget) {
			break;
		}
	}
	
	if (dailyTarget <= totalProfit) {
		cout << "You have reached your target for the day!" << endl;
	}
	else {
		cout << "Target not reached! You need " << dailyTarget - totalProfit << "lv. more." << endl;
	}

	cout << "Earned money: " << totalProfit << "lv." << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
