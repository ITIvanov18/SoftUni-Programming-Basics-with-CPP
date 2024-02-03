// 06. Max Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string command;
    int input, maxNumber = INT_MIN;

    while (cin >> input && command != "Stop") {
        if (input > maxNumber) {
            maxNumber = input;
        }
    }
    cout << maxNumber << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
