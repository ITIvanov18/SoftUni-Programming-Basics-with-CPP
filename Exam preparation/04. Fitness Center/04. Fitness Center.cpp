// 04. Fitness Center.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int people;
	cin >> people;
	cin.ignore();

	int back = 0, chest = 0, legs = 0, abs = 0, shake = 0, bar = 0;
	for (int i = 0; i < people; i++) {
		string input;
		getline(cin >> ws, input);

		if (input == "Back") {
			back++;
		}
		else if (input == "Chest") {
			chest++;
		}
		else if (input == "Legs") {
			legs++;
		}
		else if (input == "Abs") {
			abs++;
		}
		else if (input == "Protein shake") {
			shake++;
		}
		else if (input == "Protein bar") {
			bar++;
		}
	}

	cout << back << " - back" << endl;
	cout << chest << " - chest" << endl;
	cout << legs << " - legs" << endl;
	cout << abs << " - abs" << endl;
	cout << shake << " - protein shake" << endl;
	cout << bar << " - protein bar" << endl;

	cout.setf(ios::fixed);
	cout.precision(2);

	double workoutsPercentage = 100.0 * (back + chest + legs + abs) / people;
	cout << workoutsPercentage << "% - work out" << endl;

	double proteinPercentage = 100.0 * (shake + bar) / people;
	cout << proteinPercentage << "% - protein" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu