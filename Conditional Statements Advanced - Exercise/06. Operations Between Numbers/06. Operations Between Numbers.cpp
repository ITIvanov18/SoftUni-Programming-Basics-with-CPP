// 06. Operations Between Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int N1, N2;
	char operation;
	cin >> N1 >> N2 >> operation;

	if ((operation == '/' || operation == '%') && N2 == 0) {
		cout << "Cannot divide " << N1 << " by zero" << endl;
	}

	else {
		if (operation == '/'){
			double divisionResult = (double)N1 / N2;

			cout.setf(ios::fixed);
			cout.precision(2);

			cout << N1 << " / " << N2 << " = " << divisionResult;
		} 

		else {
			int result = 0;
			bool evenOrOdd = true;

			if (operation == '+') {
				result = N1 + N2;
			}
			else if (operation == '-') {
				result = N1 - N2;
			}
			else if (operation == '*') {
				result = N1 * N2;
			}
			else if (operation == '%') {
				result = N1 % N2;
				evenOrOdd = false;
			}
			cout << N1 << " " << operation << " " << N2 << " = " << result;

			if (evenOrOdd) {
				string parity = result % 2 == 0 ? "even" : "odd";
				cout << " - " << parity;
			}

			cout << endl;

		}
	}

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

