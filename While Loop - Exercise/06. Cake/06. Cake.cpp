// 06. Cake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int width, length;
	cin >> width >> length;
	cin.ignore();

	int totalPieces = width * length;
	bool isEnough = true;

	string input;
	while (getline(cin, input) && input != "STOP") {
		int piecesLeft = stoi(input);

		totalPieces -= piecesLeft;
		if (totalPieces < 0) {
			isEnough = false;
			break;
		}
	}

	if (isEnough) {
		cout << totalPieces << " pieces are left." << endl;
	}
	else {
		cout << "No more cake left! You need " << abs(totalPieces) << " pieces more." << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
