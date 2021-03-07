//============================================================================
// Name        : FigureSkatingScores.cpp
// Author      : Robin Holm
// Description : Task 7. Tar 9 värden som input, tar bort det högsta och lägsta,
//				och beräknar genomsnittet av de återstående 7 värden.
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

float score;
float mini;
float maxi;

void calculateAverage();

int main() {
	char answer;
		do{
			calculateAverage();
			std::cout << std::fixed << std::showpoint;
			std::cout << std::setprecision(1);
			std::cout << score << std::endl;
			cout << "Re-run application? (y/n): ";
			cin >> answer;
		}
		while (answer != 'n');
		return 0;
}

// Tar emot input och beräknar genomsnitt av de mellersta 7 värden.
void calculateAverage() {
	score = 0;
	mini = 0;
	maxi = 0;
	float sum = 0;
	float firstpoint = 0;;
	for(int i = 0; i < 9; i++) {
		float datapoint;
		cout << "Provide data point: ";
		cin >> datapoint;
		sum += datapoint;
		if(firstpoint == 0) {
			firstpoint = datapoint;
			maxi = datapoint;
			mini = datapoint;
		} else {
			if(datapoint > maxi){
				maxi = datapoint;
			}
			if(datapoint < mini) {
				mini = datapoint;
			}
		}
	}
	sum -= maxi;
	sum -= mini;
	score = sum / 7;
}
