//============================================================================
// Name        : SecondLargestValue.cpp
// Author      : Robin Holm
// Description : Task 6. Identifierar det näst högsta av tio input-värden.
//============================================================================

#include <iostream>
using namespace std;

int highest;
int second;

void getLargestValue();

int main() {
	char answer;
		do{
			getLargestValue();
			cout << "The largest value is " << highest
				 << " and the second largest value is " << second << "." << endl;
			cout << "Re-run application? (y/n): ";
			cin >> answer;
		}
		while (answer != 'n');
		return 0;
}

// Metod som identiferar högsta och nästa högsta värdet av tio konsekutiva input.
void getLargestValue(){
	highest = 0;
	second = 0;
	int initvalue;
	for(int i = 0; i < 10; i++) {
		cout << "Provide a value: ";
		cin >> initvalue;
		if(initvalue > highest){
			second = highest;
			highest = initvalue;
		}
		if(initvalue < highest && initvalue > second) {
			second = initvalue;
		}
	}
}
