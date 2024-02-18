// 06. Multiply Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	if (111 <= number && number <= 999) 
	{
		int units = number % 10; //единици
		int tens = (number / 10) % 10; //десетици
		int hundreds = (number / 100) % 10; //стотици

			for (int i = 1; i <= units; i++) {
				for (int k = 1; k <= tens; k++) {
					for (int n = 1; n <= hundreds; n++) {
						cout << i << " * " << k << " * " << n <<
							" = " << i * k * n << ";" << endl;
					}
				}
			}
	} 
	else 
	{
		return 0;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu