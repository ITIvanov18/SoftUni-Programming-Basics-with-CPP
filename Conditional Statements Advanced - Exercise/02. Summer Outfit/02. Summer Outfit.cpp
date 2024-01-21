// 02. Summer Outfit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int temperature;
	string timeOfDay, outfit, shoes;
	cin >> temperature >> timeOfDay;

	if (10 <= temperature && temperature <= 18) {
		if (timeOfDay == "Morning") {
			outfit = "Sweatshirt";
			shoes = "Sneakers";
		} else if (timeOfDay == "Afternoon") {
			outfit = "Shirt";
			shoes = "Moccasins";
		} else if (timeOfDay == "Evening") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}
	else if (temperature <= 24) {
		if (timeOfDay == "Morning") {
			outfit = "Shirt";
			shoes = "Moccasins";
		} else if (timeOfDay == "Afternoon") {
			outfit = "T-Shirt";
			shoes = "Sandals";
		} else if (timeOfDay == "Evening") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}
	else if (25 <= temperature && temperature <= 42) {
		if (timeOfDay == "Morning") {
			outfit = "T-Shirt";
			shoes = "Sandals";
		} else if (timeOfDay == "Afternoon") {
			outfit = "Swim Suit";
			shoes = "Barefoot";
		} else if (timeOfDay == "Evening") {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}

	cout << "It's " << temperature << " degrees, get your " << outfit
		<< " and " << shoes << "." << endl;
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
