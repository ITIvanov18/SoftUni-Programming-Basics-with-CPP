// 11. Fruit Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string fruit, weekDay;
	cin >> fruit >> weekDay;
	double quantity;
	cin >> quantity;
	double price = 0.0;

	if (weekDay == "Monday" || weekDay == "Tuesday" || weekDay == "Wednesday"
		|| weekDay == "Thursday" || weekDay == "Friday") {
		if (fruit == "banana") price = 2.50;
		else if (fruit == "apple") price = 1.20;
		else if (fruit == "orange") price = 0.85;
		else if (fruit == "grapefruit") price = 1.45;
		else if (fruit == "kiwi") price = 2.70;
		else if (fruit == "pineapple") price = 5.50;
		else if (fruit == "grapes") price = 3.85;
	}
	else if (weekDay == "Saturday" || weekDay == "Sunday"){
		if (fruit == "banana") price = 2.70;
		else if (fruit == "apple") price = 1.25;
		else if (fruit == "orange") price = 0.90;
		else if (fruit == "grapefruit") price = 1.60;
		else if (fruit == "kiwi") price = 3.00;
		else if (fruit == "pineapple") price = 5.60;
		else if (fruit == "grapes") price = 4.20;
	}


	if (price > 0) {
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << price * quantity << endl;
	} else {
		cout << "error" << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
