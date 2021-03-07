//============================================================================
// Name        : StarPattern.cpp
// Author      : Robin Holm
// Description : Task 5. skapar ett mönster av prickar baserat på endast tre
//				olika print-statements samt en mängd for-loopar.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	for(int x = 0; x < 4; ++x) {
		for(int x = 0; x < 8; ++x) {
			cout << "* ";
			cout << " ";
		}
		cout << endl;
		for(int x = 0; x < 8; ++x) {
			cout << " ";
			cout << "* ";
		}
		cout << endl;
	}
}
