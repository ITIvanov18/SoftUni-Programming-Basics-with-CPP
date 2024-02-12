// 07. Moving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int width, length, height;
	cin >> width >> length >> height;
	cin.ignore();

	int freeSpace = width * length * height;
	bool isEnough = true;

	string input;
	while (getline(cin, input) && input != "Done") {
		int spaceAvailable = stoi(input);
		freeSpace -= spaceAvailable;

		if (freeSpace < 0) {
			isEnough = false;
			break;
		}
	}

	if (isEnough) {
		cout << freeSpace <<" Cubic meters left." << endl;
	} else {
		cout << "No more free space! You need " << abs(freeSpace) << " Cubic meters more." << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
