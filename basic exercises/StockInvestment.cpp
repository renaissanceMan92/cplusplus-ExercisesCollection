//============================================================================
// Name        : StockInvestment.cpp
// Author      : Robin Holm
// Description : App som beräknar värdeförändring på en investering över 4 år.
//============================================================================

#include <iostream>
using namespace std;

void calculateInvestment();
int main() {
	char answer;
	do{
		calculateInvestment();
		cout << "Re-run application? (y/n): ";
		cin >> answer;
	}
	while (answer != 'n');
	return 0;
}

// Funktion som tar investering och 4 års värdeförändring, och beräknar
// den totala värdeförändringen.
void calculateInvestment(){
	double investment, year_one, year_two, year_three, year_four;
	cout << "Initial investment: ";
	cin >> investment;
	cout << "Value change year 1: ";
	cin >> year_one;
	cout << "Value change year 2: ";
	cin >> year_two;
	cout << "Value change year 3: ";
	cin >> year_three;
	cout << "Value change year 4: ";
	cin >> year_four;
	cout << "Current holdings: " << investment * (1 + year_one / 100)
		 * (1 + year_two / 100) * (1 + year_three / 100)
		 * (1 + year_four / 100) << " kr." << endl;
}
