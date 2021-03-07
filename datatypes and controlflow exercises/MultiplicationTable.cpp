//============================================================================
// Name        : MultiplicationTable.cpp
// Author      : Robin Holm
// Description : Task 4. App som skapar en tabell som visar tre
//				tiomultiplikationer för varje värde mellan 1-15, med undantag
//				från värden 4-13 enligt exemplet i instruktionerna.
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << endl;
		cout << "	Multiplication table" << endl;
		cout << "===================================" << endl;
		cout << setw(5) << "n" << setw(10) << "10*n" << setw(10)
				<< "100*n" << setw(10) << "1000*n" << endl
				<< "-----------------------------------" << endl;
		for (int x = 1; x <= 3; ++x) {
			cout << setw(5) << x << setw(10) << 10 * x << setw(10)
					<< 100 * x << setw(10) << 1000 * x << endl;
		}
		for (int x = 0; x < 2; ++x) {
				cout << setw(5) << "." << setw(10) << "." << setw(10)
						<< "." << setw(10) << "." << endl;
			}
		for (int x = 14; x <= 15; ++x) {
			cout << setw(5) << x << setw(10) << 10 * x << setw(10)
					<< 100 * x << setw(10) << 1000 * x << endl;
		}
}
