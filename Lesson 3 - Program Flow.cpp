// Lesson 3 - Program Flow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int add(int x, int y) {
	return x + y;
}

int fac(int x) {

	int facSum = 1;

	for (int count = x; count > 0; count--)
		facSum = facSum * count;

	return facSum;
}

bool Positive(int x) {
	if (x >= 0)
		return true;
	else
		return false;
}

int main() {

	int total = 0;

	int x;

	cout << "Please enter a number.";
	bool isPositive = Positive(5);
	if (isPositive)
		cout << "\nThe number you entered is positive or equal to 0";
	else
		cout << "\nThe number you entered is negative.";
	isPositive = Positive(-5);
	if (isPositive)
		cout << "\nThe number you entered is positive or equal to 0";
	else
		cout << "\nThe number you entered is negative.";

	cout << "Please enter numbers, will finish if sum of factorals exceeds 2000" << "\n";

	while (total <= 2000) {
		cin >> x;
		total = add(fac(x), total);
	}

	cout << "The total is " << total << "\n";

	if (total > 3000)
		cout << "you overshot by a lot!" << "\n";
	else {
		cout << "You just went over" << "\n";
		cout << "Only over by " << total - 2000 << "\n";
	}

	cout << "enter a number to exit" << "\n";

	cin >> x;

	return 0;
}