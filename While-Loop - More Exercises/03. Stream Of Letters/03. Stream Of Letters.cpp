// 03. Stream Of Letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "";
    bool found_c = false, found_o = false, found_n = false;
    char ch;

    while (cin >> ch && word != "End") {
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
            if (word != "") {
                cout << word << " ";
                word = "";
            }
            found_c = found_o = found_n = false;
        }
        if (isalpha(ch)) {
            word += ch;
        }
        else if (!isalpha(ch) && (found_c || found_o || found_n)) {
            found_c = found_o = found_n = false;
        }
    }

    return 0;
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu