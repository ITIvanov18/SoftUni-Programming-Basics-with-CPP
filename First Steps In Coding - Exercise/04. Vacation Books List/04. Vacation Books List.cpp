// 04. Vacation Books List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int total;
	cin >> total;

	int perDay;
	cin >> perDay;

	int days;
	cin >> days;
	int hours = total / perDay;
	int result = hours / days;

	cout << result << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

