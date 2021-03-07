//============================================================================
// Name        : TaskTwo.cpp
// Author      : Robin Holm
// Description : A program that calculates the sum, mean value, and largest
//				value, of a series of integers in a file.
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	char output[100];
	int param[100];
	int count = 0;
	ifstream infile;
	infile.open("integers.txt");

	if (! infile) cout << "Failed to open the file!" << endl;
	else {

		while (infile >> output) {
			param[count] = atoi(output);
			count ++;
		}

		int sum = 0;
		for (int i = 0; i < count; i++) sum += param[i];
		cout << "Sum: " << sum << endl;

		double mean = (double)sum / (double)count;
		cout << "Mean value: " << setprecision(2) << fixed << mean << endl;

		int max = param[0];
		for (int i = 0; i < count; i++) {
			if (param[i] > max) max = param[i];
		}
		cout << "Max: " << max << endl;

		infile.close();

	}

	return 0;

}
