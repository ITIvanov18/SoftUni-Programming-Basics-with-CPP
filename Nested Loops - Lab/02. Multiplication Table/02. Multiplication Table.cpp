// 02. Multiplication Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	for (int first = 1; first <= 10; first++)
	{
		for (int second = 1; second <= 10; second++)
		{
			int result = first * second;
			cout << first << " * " << second << " = " << result << endl;
		}
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
