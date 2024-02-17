// 06. Easter Competition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int participants;
	cin >> participants;

	string leader = "";
	int maxScore = -1;

	for (int i = 0; i < participants; i++) {
		string currentBaker;
		getline(cin >> ws, currentBaker);

		int currentScore = 0;
		string gradeInput;
		while (getline(cin, gradeInput) && gradeInput != "Stop") {
			currentScore += stoi(gradeInput);

		}

		cout << currentBaker << " has " << currentScore << " points." << endl;

		if (currentScore > maxScore) {
			leader = currentBaker;
			maxScore = currentScore;

			cout << currentBaker << " is the new number 1!" << endl;
		}
	}


	cout << leader << " won competition with " << maxScore << " points!" << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
