// 03. Animal Type.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

    string animal;
    cin >> animal;

    if (animal == "dog") {
        cout << "mammal" << endl;
    }
    else if (animal == "crocodile" || animal == "tortoise" || animal == "snake") {
        cout << "reptile" << endl;
    }
    else {
        cout << "unknown" << endl;
    }


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
