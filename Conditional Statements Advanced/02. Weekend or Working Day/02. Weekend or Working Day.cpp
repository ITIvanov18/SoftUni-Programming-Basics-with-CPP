// 02. Weekend or Working Day.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

    string day;
    cin >> day;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
        cout << "Working day" << endl;
    }
    else if (day == "Saturday" || day == "Sunday") {
        cout << "Weekend" << endl;
    }
    else {
        cout << "Error" << endl;
    }


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
