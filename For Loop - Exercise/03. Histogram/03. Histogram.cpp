// 03. Histogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0;

	for (int i = 0; i < n; i++) {
		int currentNum;
		cin >> currentNum;
		if (currentNum < 200) {
			counter1++;
		}
		else if (currentNum < 400) {
			counter2++;
		}
		else if (currentNum < 600) {
			counter3++;
		}
		else if (currentNum < 800) {
			counter4++;
		}
		else {
			counter5++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << (double(counter1) / n) * 100.0 << "%" << endl;
	cout << (double(counter2) / n) * 100.0 << "%" << endl;
	cout << (double(counter3) / n) * 100.0 << "%" << endl;
	cout << (double(counter4) / n) * 100.0 << "%" << endl;
	cout << (double(counter5) / n) * 100.0 << "%" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
