// 03. Stream Of Letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string letter, completeWord, skippedLettersCount, guessWord;

    while (true)
    {
        getline(cin, letter);

        if (letter == "End")
        {
            break;
        }

        if (letter.find_first_of("con") != string::npos)
        {
            skippedLettersCount += letter;
        }
        else if (islower(letter[0]) || isupper(letter[0]))
        {
            guessWord += letter;
        }

        if (skippedLettersCount.find('c') != string::npos &&
            skippedLettersCount.find('o') != string::npos &&
            skippedLettersCount.find('n') != string::npos)
        {
            completeWord += guessWord + " ";
            guessWord.clear();
            skippedLettersCount.clear();
        }

        if (count(skippedLettersCount.begin(), skippedLettersCount.end(), letter[0]) > 1)
        {
            guessWord += letter;
        }
    }

    cout << completeWord << endl;

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu