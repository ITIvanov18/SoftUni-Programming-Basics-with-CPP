// 02. Report System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int expectedSum;
    cin >> expectedSum;

    string command;
    int paymentType = 0;
    int cashTotal = 0;
    int cardTotal = 0;
    int cashPaymentsCount = 0;
    int cardPaymentsCount = 0;
    int productPrice;

    while (cin >> command && command != "End") {
        paymentType += 1;
        productPrice = stoi(command);

        if ((productPrice > 100 && paymentType == 1) || 
            (productPrice <= 10 && paymentType == 2)) {
            cout << "Error in transaction!" << endl;
        } else {
            if (productPrice <= 100 && paymentType == 1) {
                cashTotal += productPrice;
                cashPaymentsCount += 1;
                cout << "Product sold!" << endl;
            }
            else if (productPrice > 10 && paymentType == 2) {
                cardTotal += productPrice;
                cardPaymentsCount += 1;
                cout << "Product sold!" << endl;
            }
        }

        int totalPayment = cardTotal + cashTotal;
        if (totalPayment >= expectedSum) {

            cout.setf(ios::fixed);
            cout.precision(2);

            cout << "Average CS: " << double(cashTotal) / cashPaymentsCount << endl;
            cout << "Average CC: " << double(cardTotal) / cardPaymentsCount << endl;
            break;
        }

        if (paymentType == 2) {
            paymentType = 0;
        }
    }

    if (expectedSum > (cashTotal + cardTotal)) {
        cout << "Failed to collect required money for charity." << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu