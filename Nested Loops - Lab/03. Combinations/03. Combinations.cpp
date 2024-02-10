// 03. Combinations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;

	for (int x1 = 0; x1 <= n; x1++)
	{
		for (int x2 = 0; x2 <= n; x2++)
		{
			for (int x3 = 0; x3 <= n; x3++)
			{
				int sum = x1 + x2 + x3;
				if (sum == n) 
				{
					count++;
				}
			}
		}
	}
	cout << count << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
