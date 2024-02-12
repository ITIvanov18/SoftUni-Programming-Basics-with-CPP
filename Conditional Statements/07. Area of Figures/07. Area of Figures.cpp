// 07. Area of Figures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const double pi = 3.1415926535;

int main()
{
	string figureType;
	cin >> figureType;
	double area = 0;

	if (figureType == "square") {
		double a;
		cin >> a;
		area = a * a;
	}
	else if (figureType == "rectangle") {
		double a, b;
		cin >> a >> b;
		area = a * b;
	}
	else if (figureType == "circle") {
		double r;
		cin >> r;
		area = pi * r * r;
	}
	else if (figureType == "triangle") {
		double a, ha;
		cin >> a >> ha;
		area = (a * ha)/2;
	}

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << area << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
