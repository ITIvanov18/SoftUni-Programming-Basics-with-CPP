// 01. Dishwasher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int detergentQuantity;
    cin >> detergentQuantity;

    int dishesCount = 0;
    int potsCount = 0;
    int timesFilled = 0;

    string input;
    while (cin >> input && input != "End") {
        int dishes;
        cin >> dishes;

        if (timesFilled % 3 == 2) {
            potsCount += dishes;
        }
        else {
            dishesCount += dishes;
        }

        timesFilled++;
    }

    int totalDetergentNeeded = dishesCount * 5 + potsCount * 15;
    int leftoverDetergent = detergentQuantity - totalDetergentNeeded;

    if (leftoverDetergent >= 0) {
        cout << "Detergent was enough!" << endl;
        cout << dishesCount << " dishes and " << potsCount << " pots were washed." << endl;
        cout << "Leftover detergent " << leftoverDetergent << " ml." << endl;
    }
    else {
        cout << "Not enough detergent, " << -leftoverDetergent << " ml. more necessary!" << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

