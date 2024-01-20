// 08. Cinema Ticket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	string weekDay;
	cin >> weekDay;
	int ticketPrice = 0;

	if (weekDay == "Monday" || weekDay == "Tuesday" || weekDay == "Friday") {
		ticketPrice = 12;
	} else if (weekDay == "Wednesday" || weekDay == "Thursday") {
		ticketPrice = 14;
	} else if (weekDay == "Saturday" || weekDay == "Sunday") {
		ticketPrice = 16;
	}

	cout << ticketPrice << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
