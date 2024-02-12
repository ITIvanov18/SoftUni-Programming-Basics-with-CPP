// 08. Lunch Break.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	string seriesName;
	int episodeLength, restDuration;

	getline(cin, seriesName);
	cin >> episodeLength >> restDuration;

	double lunchTime = (1.0 / 8) * restDuration;
	double leisureTime = (1.0 / 4) * restDuration;
	double necessaryTime = episodeLength + lunchTime + leisureTime;

	if (restDuration >= necessaryTime) {
		cout << "You have enough time to watch " << seriesName << " and left with " <<
			ceil(restDuration - necessaryTime) << " minutes free time." << endl;

	} else {

		cout << "You don't have enough time to watch " << seriesName << ", you need " <<
			ceil(necessaryTime - restDuration) << " more minutes." << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

