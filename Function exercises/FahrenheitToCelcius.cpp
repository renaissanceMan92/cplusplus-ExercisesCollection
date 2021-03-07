//============================================================================
// Name        : FahrenheitToCelcius.cpp
// Author      : Robin Holm
// Description : Task 2. Application that converts user input from fahrenheit
//				 to celsius and displays it with one decimal point.
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

bool fahrenheitToCelsius(double &celsius, double fahrenheit);

int main()
{

	double celsius, fahrenheit = 0;
	char answer = 'Y';
	cout << "Temperature conversion" << endl;
	cout << "===========" << endl;

	do {

		cout << "Enter temperature in fahrenheit: ";
		cin >> fahrenheit;
		cout << "Boolean value returned by the conversion is: "  << std::boolalpha
				<< fahrenheitToCelsius(celsius, fahrenheit) << endl;
		cout << fixed << showpoint;
		cout << setprecision(1)  << celsius << " degrees celsius." << endl;
		cout << endl << "One more time (Y/N)? ";
		cin >> answer;

	} while (toupper(answer) == 'Y');

	return 0;

}

bool fahrenheitToCelsius(double &celsius, double fahrenheit) {

	celsius = (fahrenheit -32) / 1.8;

	if (celsius > 0) {
		return true;
	} else {
		return false;
	}

}
