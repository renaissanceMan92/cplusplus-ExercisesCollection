//============================================================================
// Name        : OverAndOverAgain.cpp
// Author      : Robin Holm
// Description : Task 1. A program that reads a number of integers until a
//				 non-integer is found and puts them into a dynamic array.
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int i = 0;
	int input;
	int* arr = new int[50];

	cout << "Enter integer numbers to store: " << endl;

	while(cin >> input){
		arr[i] = input;
		i++;
	}

	cout << "You entered " << i << " numbers: ";
	for (int x = 0; x < i; x++) cout << arr[x] << " ";

	delete[] arr;

	return 0;

}
