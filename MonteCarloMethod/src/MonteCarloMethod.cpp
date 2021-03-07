//============================================================================
// Name        : MonteCarloMethod.cpp
// Author      : Robin Holm
// Description : Task 6. App for testing the Monte Carlo method of confirming
//				the value of pi by way of a simulated arrow throw scenario.
//============================================================================

#include <iostream>
#include <cmath>
# include <iomanip>
using namespace std;

const double R = 100;
struct Coord {
	double x, y;
};

Coord throwArrow();
bool below(Coord coord);
void throwSeries(int n);

int main() {

	srand(time(0));
	cout << "n      pi         rel.fault" << endl;
	cout << "------ ---------- ---------" << endl;
	for (int i = 100; i < 10001; i += 100) throwSeries(i);
	return 0;

}

Coord throwArrow() {

	Coord coord;
	coord.x = rand() % 100;
	coord.y = rand() % 100;
	return coord;
}

bool below(Coord coord) {

	if ((coord.x * coord.x + coord.y * coord.y) < (R * R)) return true;
	else return false;

}

void throwSeries(int n) {

	double b = 0;
	for (int i = 0; i < n; i++) {
		if (below(throwArrow()) == true) b++;
	}
	double pi = (b / n) * 4;
	double relFault = ((pi - M_PI)/M_PI)*100;
	cout << setw(5) << n << setw(12)
		<< setprecision(5) << fixed << pi << setw(8)
		<< setprecision(1) << fixed << relFault << endl;

}


