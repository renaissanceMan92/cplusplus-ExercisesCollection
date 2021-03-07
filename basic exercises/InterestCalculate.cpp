//============================================================================
// Name        : InterestCalculate.cpp
// Author      : Robin Holm
// Description : App för att beräkna ränta på en besparing över x antal år.
//============================================================================

#include <iostream>
using namespace std;

void calculateInterest();
int main() {
	char answer;
	do{
		calculateInterest();
		cout << "Re-run application? (y/n): ";
		cin >> answer;
	}
	while (answer != 'n');
	return 0;
}

// Funktion som tar insättning och antal år, och beräknar det totala
// kapitalet givet en bestämd ränta.
void calculateInterest(){
	double deposit, years;
	cout << "Deposit: ";
	cin >> deposit;
	cout << "Number of years: ";
	cin >> years;
	cout << "Accumulated capital: " << deposit * pow(1.03, years) << " SEK." << endl;
}
