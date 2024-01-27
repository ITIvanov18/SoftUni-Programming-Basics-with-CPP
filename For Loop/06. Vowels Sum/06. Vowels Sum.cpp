// 06. Vowels Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    getline(cin, word);

    int sum = 0;

    for (int i = 0; i < word.length(); i++) {
        char letter = word[i];

        if (word[i] == 'a') {
            sum++;
        }
        else if (word[i] == 'e') {
            sum += 2;
        }
        else if (word[i] == 'i') {
            sum += 3;
        }
        else if (word[i] == 'o') {
            sum += 4;
        }
        else if (word[i] == 'u') {
            sum += 5;
        }
    }
    cout << sum;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
