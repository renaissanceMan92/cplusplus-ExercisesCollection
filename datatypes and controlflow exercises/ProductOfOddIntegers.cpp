//============================================================================
// Name        : ProductOfOddIntegers.cpp
// Author      : Robin Holm
// Description : Task 3. Applikation som multiplicerar alla ojämna tal mellan
//			     1 och 15 med varandra
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int product = 1;
	for(int count = 1; count <= 15; count++){
	        if (count % 2 != 0)
	        	product *= count;
	    }
	cout << "The product of all odd integers between 1 and 15 is " << product << ".";
}
