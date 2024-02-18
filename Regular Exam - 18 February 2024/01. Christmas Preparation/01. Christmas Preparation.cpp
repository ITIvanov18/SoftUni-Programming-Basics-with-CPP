// 01. Christmas Preparation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const double paper = 5.80;
const double fabric = 7.20;
const double glue = 1.20;

int main()
{
	int paperQuantity, fabricQuantity, discount;
	double glueQuantity;
	cin >> paperQuantity >> fabricQuantity >> glueQuantity >> discount;

	double total = paperQuantity * paper + fabricQuantity * fabric + glueQuantity * glue;
	double discountAmount = total * discount / 100;
	double afterDiscount = total - discountAmount;

	cout.setf(ios::fixed);
	cout.precision(3);

	cout << afterDiscount << endl;
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
