//============================================================================
// Name        : SumofThreeDigitNumber.cpp
// Author      : Robin Holm
// Description : App som beräknar summan av tre givna siffror.
//============================================================================

#include <iostream>
using namespace std;

void calculateDigits();
int main() {
	char answer;
	do{
		calculateDigits();
		cout << "Re-run application? (y/n): ";
		cin >> answer;
	}
	while (answer != 'n');
	return 0;
}

// Funktion som tar en input på tre siffror, separerar och adderar dem.
void calculateDigits(){
	int digits, dig1, dig2;
	cout << "Enter a three-digit number: ";
	cin >> digits;
	dig1 = digits % 10;
	digits /= 10;
	dig2 = digits % 10;
	digits /= 10;
	cout << "Sum: " << digits << " + " << dig2 << " + "
		 << dig1 << " = " << digits + dig2 + dig1 << endl;
}
