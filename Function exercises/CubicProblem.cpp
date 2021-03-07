//============================================================================
// Name        : CubicProblem.cpp
// Author      : Robin Holm
// Description : Task 1. Calculate and present the volume of a cube of a certain size.
//============================================================================

#include <iostream>
#include <cctype> // toupper
using namespace std;

void getSide(double &side);
double cubeVolume(double &side);
void printVolume(double &side);


int main() {

	double side;
	char answer = 'Y';
	cout << "Cubes" << endl;
	cout << "=====" << endl << endl;
	do {
		getSide(side);
		printVolume(side);
		cout << endl << "One more time (Y/N)? ";
		cin >> answer;
	} while (toupper(answer) == 'Y');
	return 0;

}

void getSide(double &side) {

	cout << "Enter the side length of a cube to be computed: ";
	cin >> side;

}

double cubeVolume(double &side) {

	return side * side * side;

}

void printVolume(double &side) {

	cout << "Volume of the cube is: " << cubeVolume(side) << " volume units" << endl;

}
