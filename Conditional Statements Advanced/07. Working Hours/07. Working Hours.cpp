// 07. Working Hours.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int hour; cin >> hour;
	string weekDay; cin >> weekDay;

	if (hour >= 10 && hour <= 18) {
		if (weekDay == "Monday" || weekDay == "Tuesday" || weekDay == "Wednesday" || weekDay == "Thursday" ||
			weekDay == "Friday" || weekDay == "Saturday") {
			cout << "open" << endl;
		} else {
			cout << "closed" << endl;
		}
	} else {
		cout << "closed" << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
