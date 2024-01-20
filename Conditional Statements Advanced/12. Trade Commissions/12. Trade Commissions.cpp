// 12. Trade Commissions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    string city;
    double salesVolume;
    cin >> city;
    cin >> salesVolume;

    double commission = -1;

    if (salesVolume >= 0) {
        if (city == "Sofia") {
            if (salesVolume <= 500) {
                commission = 0.05 * salesVolume;
            } else if (salesVolume <= 1000) {
                commission = 0.07 * salesVolume;
            } else if (salesVolume <= 10000) {
                commission = 0.08 * salesVolume;
            } else {
                commission = 0.12 * salesVolume;
            }
        }
        else if (city == "Varna") {
            if (salesVolume <= 500) {
                commission = 0.045 * salesVolume;
            } else if (salesVolume <= 1000) {
                commission = 0.075 * salesVolume;
            } else if (salesVolume <= 10000) {
                commission = 0.1 * salesVolume;
            } else {
                commission = 0.13 * salesVolume;
            }
        }
        else if (city == "Plovdiv") {
            if (salesVolume <= 500) {
                commission = 0.055 * salesVolume;
            } else if (salesVolume <= 1000) {
                commission = 0.08 * salesVolume;
            } else if (salesVolume <= 10000) {
                commission = 0.12 * salesVolume;
            } else {
                commission = 0.145 * salesVolume;
            }
        }
    }

    if (commission != -1) {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << commission << endl;
    } else {
        cout << "error" << endl;
    }


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
