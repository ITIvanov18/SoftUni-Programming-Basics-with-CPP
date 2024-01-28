// 05. Salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int browserTabs, salary;
	cin >> browserTabs >> salary;
	
	int fees = 0;
	for (int i = 0; i < browserTabs && fees <= salary; i++) {
		string tab;
		cin >> tab;

		if (tab == "Facebook") {
			fees += 150;
		}
		else if (tab == "Instagram") {
			fees += 100;
		}
		else if (tab == "Reddit") {
			fees += 50;
		}
	}

	if (fees < salary) {
		cout << salary - fees << endl;
	}
	else {
		cout << "You have lost your salary." << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

