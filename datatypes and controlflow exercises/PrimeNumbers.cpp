//============================================================================
// Name        : PrimeNumbers.cpp
// Author      : Robin Holm
// Description : Task 8. Hittar och printar varje primtal mellan 2 och 100.
//============================================================================

#include <iostream>
using namespace std;

// Metod som kontrollerar om ett visst tal är ett primtal.
bool ckeckIfPrime(int n) {
    for (int i = 2; i < n; i++) {
    	if (n % i == 0) {
    		return false;
    	}
    }
    return true;
}


int main() {
	// Loopar över alla tal mellan 2 och 100 och printar de som är primtal.
	for(int i = 3; i < 100; i++) {
		if(ckeckIfPrime(i) == true) {
			cout << i << endl;
		}
	}
}
