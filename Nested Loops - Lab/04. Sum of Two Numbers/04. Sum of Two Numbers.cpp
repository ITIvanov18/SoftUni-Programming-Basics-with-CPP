// 04. Sum of Two Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int startNum, endNum, magicNumber;
	cin >> startNum >> endNum >> magicNumber;


	//Комбинация от две числа: x1 и x2
	//x1 -> [startNum; endNum]
	//x2 -> [startNum; endNum]
	int count = 0; // брой на генерираните комбинации
	for (int x1 = startNum; x1 <= endNum; x1++) {
		for (int x2 = startNum; x2 <= endNum; x2++) {
			count++;
			if (x1 + x2 == magicNumber) {
				cout << "Combination N:" << count << endl << "(" << x1 << " + " 
					 << x2 << " = " << magicNumber << ")" << endl;
				return 0;
			}
		}
	}

	cout << count << " combinations - neither equals " << magicNumber << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
