//============================================================================
// Name        : SumOfNumber.cpp
// Author      : Robin Holm
// Description : Task 9. Applikation som beräknar summan av varje siffra hos ett
//			     givet numerärt värde.
//============================================================================

#include <iostream>
using namespace std;

void calculateSumOfDigits();

int main() {
	char answer;
	do{
		calculateSumOfDigits();
		cout << "Re-run application? (y/n): ";
		cin >> answer;
	}
	while (answer != 'n');
	return 0;
}

// Metod som beräknar summan av siffrorna på ett input genom att först
// se till att det möter villkoren, och därefter delas den upp i enskilda siffor
// genom division och modulus, och till sist adderas dessa siffror på varandra.
void calculateSumOfDigits() {
	int sum = 0;
	int number;
	double dbl;
	cout << "Enter a positive integer number: ";
	cin >> dbl;
	if(dbl > 0 && dbl < INT_MAX) {
		number = dbl;
		int length = 1;
		while(number /= 10) {
			length++;
		}
		number = dbl;
		for(int i = 0; i < length; i++){
			int dig = number % 10;
			number /= 10;
			sum += dig;
		}
		cout << "sum: " << sum << "." << endl;
	} else {
		cout << "Error: the number is invalid!" << endl;
	}
}
