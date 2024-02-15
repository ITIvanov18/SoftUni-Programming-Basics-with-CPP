// 03. Stream Of Letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string letter, complete_word, skip_letters_count, guess_word;

    while (true)
    {
        getline(cin, letter);

        if (letter == "End")
        {
            break;
        }

        if (letter.find_first_of("con") != string::npos)
        {
            skip_letters_count += letter;
        }
        else if (islower(letter[0]) || isupper(letter[0]))
        {
            guess_word += letter;
        }

        if (skip_letters_count.find('c') != string::npos &&
            skip_letters_count.find('o') != string::npos &&
            skip_letters_count.find('n') != string::npos)
        {
            complete_word += guess_word + " ";
            guess_word.clear();
            skip_letters_count.clear();
        }

        if (count(skip_letters_count.begin(), skip_letters_count.end(), letter[0]) > 1)
        {
            guess_word += letter;
        }
    }

    cout << complete_word << endl;

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu