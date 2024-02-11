// 02. Equal Sums Even Odd Position.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int startNumber, endNumber;
	cin >> startNumber >> endNumber;

	for (int input = startNumber; input <= endNumber; input++) {
		
		int units = input % 10; //единици
		int tens = (input / 10) % 10; //десетици
		int hundreds = (input / 100) % 10; //стотици
		int thousands = (input / 1000) % 10; //хилядни
		int tenThousands = (input / 10000) % 10; //десетохилядни
		int hundredThousands = input / 100000; //стохилядни

		int sumEvenPositions = units + hundreds + tenThousands;
		int sumOddPositions = hundredThousands + thousands + tens;

		if (sumEvenPositions == sumOddPositions) {
			cout << input << " ";
		}

	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
