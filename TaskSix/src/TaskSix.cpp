//============================================================================
// Name        : TaskSix.cpp
// Author      : Robin Holm
// Description : A program that reads surface measurements from a file and
//				does calculations on them based on the three measures of
//				roughness.
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	char output[200];
	double param[200];
	int count = 0;
	double sum = 0, max = 0, min = 0, squaresum = 0;
	ifstream infile;

	infile.open("surfacedata.txt");
	while (infile >> output) {

		param[count] = atof(output);
		count ++;

	}

	for (int i = 0; i < count; i++) {

		sum += param[i];
		squaresum += param[i] * param[i];
		if (param[i] > max) max = param[i];
		if (param[i] < min) min = param[i];

	}

	cout << "Rq: " << setprecision(3) << fixed << sqrt(squaresum/count) << endl;
	cout << "Ra: " << setprecision(3) << fixed << sum / count << endl;
	cout << "Max roughness height: " << max - min << endl;
	cout << "Numbers of values: " << count << endl;
	cout << "Done!";

	return 0;
}
