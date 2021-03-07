//============================================================================
// Name        : Discount.cpp
// Author      : Robin Holm
// Description : Task 5. Calculates what a customer will pay
//				 depending on several discount levels.
//============================================================================

#include <iostream>
#include <iomanip>
#include<string>
#include<stdlib.h>
using namespace std;

void print(double sum, double discountKr);
double discount(double sum);
void load(double &sum);

int main() {

	double sum = 0.0, discountKr = 0.0;
	char answer;

	do {

		system("CLS");
		cout << "Discount" << endl;
		cout << "======" << endl << endl;
		load(sum);
		discountKr = sum * discount(sum) / 100;
		sum = sum - discountKr;
		print(sum, discountKr);
		cout << endl << "One more time (Y/N)? ";
		cin >> answer;

	} while (toupper(answer) == 'Y');

	return 0;

}

void print(double sum, double dKr) {

	string dKrString = "...." + to_string((int)round(dKr)) + ".00 kr.";
	string sumString = "..." + to_string((int)round(sum)) + ".00 kr.";

	cout << "----------------------------------" << endl;
	cout << "Discount" << setw(5) << ":" << setw(15) << right << dKrString << endl;
	cout << "Net sum " << setw(5) << ":" << setw(15) << right << sumString << endl;
	cout << "----------------------------------" << endl;

}

void load(double &sum) {

	cout << "Enter the sum: ";
	cin >> sum;

}

double discount(double sum) {

	if (sum > -1 && sum < 500) {
		return 0;
	} else if (sum > 499 && sum < 1000) {
		return 5;
	} else if (sum > 999 && sum < 5000) {
		return 10;
	} else if (sum > 4999) {
		return 15;
	} else {
		cout << "Invalid number." << endl;
		return 0;
	}

}

