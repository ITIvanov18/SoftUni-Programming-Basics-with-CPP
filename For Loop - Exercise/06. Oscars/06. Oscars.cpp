// 06. Oscars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const double nominationPoints = 1250.5;
	string actor;
	getline(cin, actor);

	double points;
	int n;
	cin >> points >> n;

	for (int i = 0; i < n && points <= nominationPoints; i++) {
		string jury;
		getline(cin.ignore(), jury);

		double grade;
		cin >> grade;

		points += (grade * jury.length()) / 2;
	}

	cout.setf(ios::fixed);
	cout.precision(1);

	if (points > nominationPoints) {
		cout << "Congratulations, " << actor << " got a nominee for leading role with " 
			<< points << "!" << endl;
	}
	else {
		cout << "Sorry, " << actor << " you need " << nominationPoints - points << " more!" << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
