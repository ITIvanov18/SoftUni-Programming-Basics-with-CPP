// 06. Building.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int floors, rooms;
	cin >> floors >> rooms;

	for (int floor = floors; floor >= 1; floor--) 
	{
		for (int room = 0; room < rooms; room++)
		{
			if (floor == floors) {
				cout << "L" << floor << room << " ";
			}
			else if (floor % 2 == 0) {
				cout << "O" << floor << room << " ";
			}
			else if (floor % 2 != 0) {
				cout << "A" << floor << room << " ";
			}
		}

		cout << endl;
		//нов ред преди следващия етаж
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
