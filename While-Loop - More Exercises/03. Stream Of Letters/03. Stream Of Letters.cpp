// 03. Stream Of Letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_WORDS = 100;
    string words[MAX_WORDS];
    int wordCount = 0;
    string currentWord = "";
    bool found_c = false, found_o = false, found_n = false;
    char ch;

    while (cin >> ch) {
        if (ch == 'E') {
            cin >> ch;
            if (ch == 'n') {
                cin >> ch;
                if (ch == 'd') {
                    break;
                }
            }
        }

        if (ch == 'c' && !found_c) {
            found_c = true;
            continue;
        }
        if (ch == 'o' && found_c && !found_o) {
            found_o = true;
            continue;
        }
        if (ch == 'n' && found_c && found_o && !found_n) {
            found_n = true;
            continue;
        }
        if (found_c && found_o && found_n) {
            if (!currentWord.empty()) {
                words[wordCount++] = currentWord;
                currentWord = "";
            }
            found_c = found_o = found_n = false;
        }
        else if (isalpha(ch)) {
            currentWord += ch;
        }
    }

    for (int i = 0; i < wordCount; ++i) {
        cout << words[i] << " ";
    }

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu