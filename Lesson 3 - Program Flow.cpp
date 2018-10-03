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
	if (x <= 1)
		return facSum;
	facSum = facSum * x * fac(x-1);
	return facSum;
}

bool Positive(int x) {
	if (x >= 0)
		return true;
	else
		return false;
}

void LoopUntilPositive() {
	int x = 1;
	while (x >= 0) {
		cout << "Please enter a number.\n";
		cin >> x;
		bool isPositive = Positive(x);
		if (isPositive)
			cout << "The number you entered is positive or equal to 0\n";
		else
			cout << "The number you entered is negative.\n";
	}
}

int main() {

	int total = 0;

	int x;
	cout << "Enter number to calculate factorial.";
	cin >> x;
	cout << fac(x);
	LoopUntilPositive();

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