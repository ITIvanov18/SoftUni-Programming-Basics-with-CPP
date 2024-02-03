// 07. Min Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string command;
    int input, minNumber = INT_MAX;

    while (cin >> input) {
        if (input < minNumber) {
            minNumber = input;
        }
    }

    cout << minNumber << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
