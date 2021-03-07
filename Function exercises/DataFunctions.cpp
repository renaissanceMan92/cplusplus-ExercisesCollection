//============================================================================
// Name        : DataFunctions.cpp
// Author      : Robin Holm
// Description : Task 7. App with three modules: calulating if a year is a leap year;
//				 calculating the amount of days in month x; calculating which is the
//				the date of the day after a given date yyyymmdd.
//============================================================================

#include <iostream>
#include <string>
using namespace std;

bool leapYear(int year);
int daysInMonth(int year, int month);
int tomorrow(int date);

int main() {

	char answer;
	do {

		cout << "Press a, b or c to choose module, or press x to quit the application.";
		cin >> answer;

		if (answer == 'a') {
			int year;
			cout << "Enter a year: ";
			cin >> year;
			if (leapYear(year)) {
				cout << "This is a leap year!" << endl;
			} else {
				cout << "This is not a leap year!" << endl;
			}
		} else if (answer == 'b') {
			int year;
			int month;
			cout << "Enter a year: ";
			cin >> year;
			cout << "Enter a month: ";
			cin >> month;
			cout << "The number of days in this month is " << daysInMonth(year, month) << "." << endl;
		} else if (answer == 'c') {
			int date;
			cout << "Enter a date on the form YYYYMMDD: ";
			cin >> date;
			cout << "Tomorrow it is: " << tomorrow(date) << endl;
		}

	} while (answer != 'x');

	return 0;

}

bool leapYear(int year) {

	if (year % 4 == 0) {
	     if (year % 100 == 0) {
	        if (year % 400 == 0)
	        return true;
	        else
	        return false;
	     } else
	     return true;
	} else
	  return false;

}

int daysInMonth(int year, int month) {

	if (month == 10 || month == 4 || month == 6 || month == 9) {
		return 30;
	} else if (month == 1 || month == 3 || month == 5 || month == 7 ||
				month == 8 || month == 11 || month == 12) {
			return 31;
	} else if (month == 2) {
			if (leapYear(year)) {
				return 29;
			} else return 28;
	} else return 0;

}

int tomorrow(int date) {

	int day = date % 100;
	int month = (date / 100) % 100;
	int year = date / 10000;

	if (day == 31 && month == 12) {
		year++;
		month = 1;
		day = 1;
	} else if (day == daysInMonth(year, month)){
		month++;
		day = 1;
	} else {
		day++;
	}
	if (month < 10 && day < 10) {
		return stoi(to_string(year) + to_string(0) + to_string(month) + to_string(0) + to_string(day));
	} else if (month < 10 && day > 9) {
		return stoi(to_string(year) + to_string(0) + to_string(month) + to_string(day));
	} else if (month > 9 && day < 10) {
		return stoi(to_string(year) + to_string(month) + to_string(0) + to_string(day));
	} else {
		return stoi(to_string(year) + to_string(month) + to_string(day));
	}

}
