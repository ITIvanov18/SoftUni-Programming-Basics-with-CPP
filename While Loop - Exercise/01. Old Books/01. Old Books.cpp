// 01. Old Books.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string favouriteBook;
	getline(cin, favouriteBook);

	string input;
	int counter = 0;
	bool isFound = false;
	while (getline(cin, input) && input != "No More Books") {
		if (input == favouriteBook) {
			isFound = true;
			break;
		}
		counter++;
	}

	if (isFound) {
		cout << "You checked " << counter << " books and found it." << endl;
	}
	else {
		cout << "The book you search is not here!" << endl;
		cout << "You checked " << counter << " books." << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
