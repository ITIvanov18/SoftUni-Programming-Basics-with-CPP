// 07. Trekking Mania.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int groups;
	cin >> groups;

	int climbersCount = 0;
	int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
	
	for (int i = 0; i < groups; i++) {
		int totalClimbers;
		cin >> totalClimbers;

		if (totalClimbers <= 5) {
			p1 += totalClimbers;
		}
		else if (totalClimbers <= 12) {
			p2 += totalClimbers;
		}
		else if (totalClimbers <= 25) {
			p3 += totalClimbers;
		}
		else if (totalClimbers <= 40) {
			p4 += totalClimbers;
		}
		else {
			p5 += totalClimbers;
		}

		climbersCount += totalClimbers;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << (double(p1)/ climbersCount) * 100 << "%" << endl;
	cout << (double(p2) / climbersCount) * 100 << "%" << endl;
	cout << (double(p3) / climbersCount) * 100 << "%" << endl;
	cout << (double(p4) / climbersCount) * 100 << "%" << endl;
	cout << (double(p5) / climbersCount) * 100 << "%" << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu