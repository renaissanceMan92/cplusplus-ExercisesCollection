//============================================================================
// Name        : ByDefault.cpp
// Author      : Robin Holm
// Description : Task 3. Calculates combinations of x to the power of y.
//============================================================================

#include <iostream>
using namespace std;

int power(int x, int y = 2);

int main() {

	for (int i = 0; i < 10; i++) {
		cout << power(2, i) << " ";
	}
	cout << endl;
	cout << power(3) << " " << endl;
	cout << power(4) << " " << endl;
	cout << power(5)<< " "  << endl;
	return 0;

}

int power(int x, int y) {

	int pow = 1;
	for(int i = 0; i < y; i++) {
		pow *= x;
	}
	return pow;

}
