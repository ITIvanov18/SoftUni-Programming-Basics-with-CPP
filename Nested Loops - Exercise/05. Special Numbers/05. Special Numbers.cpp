// 05. Special Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	//от 1111 до 9999
	for (int thousands = 1; thousands < 9; thousands++) //хилядни
	{
		for (int hundreds = 1; hundreds <= 9; hundreds++) //стотици
		{
			for (int tens = 1; tens <= 9; tens++) //десетици
			{
				for (int units = 1; units <= 9; units++) //единици
				{
					if (n % thousands == 0 && n % hundreds == 0 && n % tens == 0 && n % units == 0) 
					{
						cout << thousands << hundreds << tens << units << " ";
					}
				}
			}
		}
	}

	cout << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
