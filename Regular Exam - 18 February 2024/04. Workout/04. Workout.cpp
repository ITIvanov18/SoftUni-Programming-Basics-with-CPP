// 04. Workout.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int daysToWorkout;
	double kmFirstDay;
	cin >> daysToWorkout >> kmFirstDay;
	double currentDistancePassed = kmFirstDay;
	double sum = 0;

	for (int i = 1; i <= daysToWorkout; i++) {
		double K;
		cin >> K;

		currentDistancePassed += K * currentDistancePassed / 100;
		sum += currentDistancePassed;
	}

	sum += kmFirstDay;
		
	if (sum >= 1000) {
		int kmAfterGoalPassed = ceil(sum - 1000);
		cout << "You've done a great job running " << kmAfterGoalPassed << " more kilometers!" << endl;
	}
	else {
		cout << "Sorry Mrs. Ivanova, you need to run " << ceil(1000 - sum) << " more kilometers" << endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
