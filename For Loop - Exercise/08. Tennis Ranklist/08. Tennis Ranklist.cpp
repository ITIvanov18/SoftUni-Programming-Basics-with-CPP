// 08. Tennis Ranklist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int tournamentsCount, ranklistPoints;
	cin >> tournamentsCount >> ranklistPoints;
	int winRate = 0;

	int finalPoints = 0;
	for (int i = 0; i < tournamentsCount; i++) {
		string tournamentStage;
		cin >> tournamentStage;

		if (tournamentStage == "W") {
			finalPoints += 2000;
			winRate++;
		}
		else if (tournamentStage == "F") {
			finalPoints += 1200;
		}
		else if (tournamentStage == "SF") {
			finalPoints += 720;
		}
	}

	finalPoints += ranklistPoints;
	cout << "Final points: " << finalPoints << endl;

	int average = (finalPoints - ranklistPoints) / tournamentsCount;
	cout << "Average points: " << average << endl;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << (double(winRate) / tournamentsCount) * 100 << "%" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

