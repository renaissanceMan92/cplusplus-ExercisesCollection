//============================================================================
// Name        : Fractions.cpp
// Author      : Robin Holm
// Description : Task 6. App for calculating the four
// 				 standard operations on fractions.
//============================================================================

#include <iostream>
using namespace std;

string add(int t1, int n1, int t2, int n2);
string subtract(int t1, int n1, int t2, int n2);
string multiply(int t1, int n1, int t2, int n2);
string divide(int t1, int n1, int t2, int n2);
int gcd(int a, int b);

int main() {

	char answer;
	do {

		string a, b;
		string delimiter = "/";
		int t1, n1, t2, n2;
		char choice;

		cout << "Provide first fraction (t/n): ";
		cin >> a;
		cout << "Provide second fraction (t/n): ";
		cin >> b;

		t1 = stoi(a.substr(0, a.find(delimiter)));
		n1 = stoi(a.substr(a.find(delimiter) + 1));
		t2 = stoi(b.substr(0, b.find(delimiter)));
		n2 = stoi(b.substr(b.find(delimiter) + 1));

		cout << "Choose your operation by entering +, -, * or d: ";
		cin >> choice;
		cout << endl;

		if (choice == '+') {
			cout << "Result: " << add(t1, n1, t2, n2) << endl;
		} else if (choice == '-') {
			cout << "Result: " << subtract(t1, n1, t2, n2) << endl;
		} else if (choice == 'd') {
			cout << "Result: " << divide(t1, n1, t2, n2) << endl;
		} else if (choice == '*') {
			cout << "Result: " << multiply(t1, n1, t2, n2) << endl;
		}

		cout << "Go again? (y/n)";
		cin >> answer;

	} while (answer == 'y');

	return 0;

}

string add(int t1, int n1, int t2, int n2) {

	int t = t1 * n2 + t2 * n1;
	int n = n1 * n2;
	return to_string(t / gcd(t, n)) + "/" + to_string(n / gcd(t, n));

}

string subtract(int t1, int n1, int t2, int n2) {

	int t = t1 * n2 - t2 * n1;
	int n = n1 * n2;
	return to_string(t / gcd(t, n)) + "/" + to_string(n / gcd(t, n));

}

string multiply(int t1, int n1, int t2, int n2) {

	int t = t1 * t2;
	int n = n1 * n2;
	return to_string(t / gcd(t, n)) + "/" + to_string(n / gcd(t, n));

}

string divide(int t1, int n1, int t2, int n2) {

	int t = t1 * n2;
	int n = n1 * t2;
	return to_string(t / gcd(t, n)) + "/" + to_string(n / gcd(t, n));

}

// Identify common divisor to reduce a fraction to its lowest term.
int gcd(int a, int b) {

	if (a < 0) {
		a *= -1;
	}
	if (b < 0) {
		b *= -1;
	}
	if (b == 0) {
	   return a;
    }
    return gcd(b, a % b);

}
