// 05. Character Sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int maxSize = 100;

int main() {
    char input[maxSize];
    cin.getline(input, maxSize);

    for (int i = 0; input[i] != '\0'; i++) {
        cout << input[i] << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
