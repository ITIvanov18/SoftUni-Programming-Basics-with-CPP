// 03. Sum Prime Non Prime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;

	int primeNumbersSum = 0;
	int nonPrimeNumbersSum = 0;

	while (input != "stop") {

		int number = stoi(input);

		if (number < 0) {
			cout << "Number is negative." << endl;
		} else {

			//проверка дали числото е съставно или сложно
			int count = 0; //брой делители
			for (int i = 1; i <= number; i++) {
				if (number % i == 0) {
					count++;
				}
			}

			if (count == 2) {
				//number е просто число
				primeNumbersSum += number;
			} else {
				//number е съставно число
				nonPrimeNumbersSum += number;
			}
		}

		cin >> input;
	}

	cout << "Sum of all prime numbers is: " << primeNumbersSum << endl;
	cout << "Sum of all non prime numbers is: " << nonPrimeNumbersSum << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
