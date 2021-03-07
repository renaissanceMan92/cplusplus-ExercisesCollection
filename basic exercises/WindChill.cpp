//============================================================================
// Name        : WindChill.cpp
// Author      : Robin Holm
// Description : App för att beräkna effektiv temperatur.
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

void calculateTemp();
int main() {
	char answer;
	do{
		calculateTemp();
		cout << "Re-run application? (y/n): ";
		cin >> answer;
	}
	while (answer != 'n');
	return 0;
}

// Funktion som tar temperatur och vindhastighet som input
// och beräknar effektiv temperatur.
void calculateTemp(){
	double effectivetemp, temp, windspeed;
	cout << "Input temperature (°C): ";
	cin >> temp;
	cout << "Input wind speed: (m/s): ";
	cin >> windspeed;
	effectivetemp = 13.126667 + 0.6215 * temp - 13.924748
		 * pow(windspeed, 0.16) + 0.4875195 * temp * pow(windspeed, 0.16);
	cout << temp << "°C and " << windspeed
		 << " m/s gives the perceived temperature " << round(effectivetemp)
		 << "°C." << endl;
}
