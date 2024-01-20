// 09. Fruit or Vegetable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string productName;
	cin >> productName;
	
	if (productName == "banana" || productName == "apple" ||
		productName == "kiwi" || productName == "cherry" ||
		productName == "lemon" || productName == "grapes") {
		cout << "fruit" << endl;
	}
	else if (productName == "tomato" || productName == "cucumber" ||
			 productName == "pepper" || productName == "carrot") {
		cout << "vegetable" << endl;
	} else {
		cout << "unknown" << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu