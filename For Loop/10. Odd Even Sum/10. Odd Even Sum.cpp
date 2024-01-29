// 10. Odd Even Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	int odd = 0, even = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		if (i % 2 == 0) {
			even += num;
		} else {
			odd += num;
		}
	}
	int diff = abs(odd - even);
	if (diff == 0) {
		cout << "Yes" << endl;
		cout << "Sum = " << odd;
	} else {
		cout << "No" << endl;
		cout << "Diff = " << diff << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

