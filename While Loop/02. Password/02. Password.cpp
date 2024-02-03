// 02. Password.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string username, password;
	cin >> username >> password;
	string enteredPassword;
	cin >> enteredPassword;

	while (enteredPassword != password) {
		cin >> enteredPassword;
	}

	cout << "Welcome " << username << "!" << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
