// 07. Name Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string winner = "";
	int maxScore = -1;

	string name;
	while (getline(cin >> ws, name) && name != "Stop") {
		int currentScore = 0;

		for (int i = 0; i < name.length(); i++) {
			int currentGuess;
			cin >> currentGuess;

			if (currentGuess == name[i]) {
				//+10 points
				currentScore += 10;
			}
			else {
				//+2 points
				currentScore += 2;
			}
		}

		if (currentScore >= maxScore) {
			winner = name;
			maxScore = currentScore;
		}
	}

	cout << "The winner is " << winner << " with " << maxScore << " points!" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

