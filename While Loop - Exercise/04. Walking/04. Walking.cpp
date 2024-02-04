// 04. Walking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int goal = 10000;

	int totalSteps = 0;
	bool isGoalReached = false;

	string input;
	while (getline(cin, input) && input != "Going home") {
		int currentSteps = stoi(input);

		totalSteps += currentSteps;
		if (totalSteps >= goal) {
			isGoalReached = true;
			break;
		}
	}

	if (isGoalReached == false) {
		int stepsToHome;
		cin >> stepsToHome;

		totalSteps += stepsToHome;
		if (totalSteps >= goal) {
			isGoalReached = true;
		}
	}

	if (isGoalReached) {
		cout << "Goal reached! Good job!" << endl;
	} else {
		cout << goal - totalSteps << " more steps to reach goal." << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu