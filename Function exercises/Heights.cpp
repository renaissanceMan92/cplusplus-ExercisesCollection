//============================================================================
// Name        : Heights.cpp
// Author      : Robin Holm
// Description : Task 4. App for calculating the height of a child based on
//				 its gender and the heights of its parents.
//============================================================================

#include <iostream>
using namespace std;

string getGender();
double getHeight(string parent);
int getChildHeight(string gender, double dad, double mom);

int main() {

	char answer;
	cout << "Heights" << endl;
	cout << "=====" << endl << endl;

	do {

		string gender = getGender();
		double mom = getHeight("mother");
		double dad = getHeight("father");
		cout << "The height of the child is "
				<< getChildHeight(gender, mom, dad)
				<< " cm," << endl;
		cout << endl << "One more time (Y/N)? ";
		cin >> answer;

	} while (answer == 'Y' || answer == 'y');

	return 0;

}

int getChildHeight(string gender, double dad, double mom) {

	double childHeight;
	if (gender == "male") {
		childHeight = ( mom * 13 / 12 + dad ) / 2;
	} else {
		childHeight = ( dad * 12 / 13 + mom ) / 2;
	}
	return childHeight;

}

double getHeight(string parent){

	double height;
	cout << "Provide height of " << parent << " (cm):";
	cin >> height;
	return height;

}

string getGender() {

	string gender;
	while(gender != "male" && gender != "female") {
		cout << "Provide gender of child (male/female):";
		cin >> gender;
		 if (gender != "male" && gender != "female") {
				cout << "That gender does not exist! Try again." << endl;
			}
	}
	return gender;

}
