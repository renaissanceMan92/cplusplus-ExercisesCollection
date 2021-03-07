//============================================================================
// Name        : TravelTime.cpp
// Author      : Robin Holm
// Description : Applikation för att beräkna tiden x det tar för att färdas y i hastigheten z.
//============================================================================

#include <iostream>
using namespace std;

void travelTimeCalculation();

int main() {
	char answer;
	do{
		travelTimeCalculation();
		cout << "Re-run application? (y/n): ";
		cin >> answer;
	}
	while (answer != 'n');
	return 0;
}

// Metod som tar hastighet och avstånd som input och ger tid som output.
void travelTimeCalculation(){
	float distance, speed;
	cout << "Remaining distance (Swedish miles): ";
	cin >> distance;
	cout << "Average speed (km/h): ";
	cin >> speed;
	int time = round(((distance *= 10) / speed)* 60);
	cout << "Remaining travel time: "
		<< time / 60 << " hour(s) and "
		<< time % 60 << " minute(s)." << endl;
}
