// 04. Password Guess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string password;
	cin >> password;

	if (password == "s3cr3t!P@ssw0rd") {
		cout << "Welcome" << endl;
	}
	else {
		cout << "Wrong password!" << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
