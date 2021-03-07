//============================================================================
// Name        : PowerIncrease.cpp
// Description : Applikation för att beräkna ändringen i
// 				 hörbar decibel givet en given skillnad i ljudkraft.
//============================================================================

#include <iostream>
using namespace std;

void calculateDB();
int main() {
	char answer;
		do{
			calculateDB();
			cout << "One more time? (Y/N): ";
			cin >> answer;
		}
		while (answer != 'N');
	return 0;
}

// Funktion som tar två watt-värden som input och beräknar differensen i decibel.
void calculateDB(){
	float p0, p1;
	cout << "Old sound power: ";
	cin >> p0;
	cout << "New sound power: ";
	cin >> p1;
	cout << "A change from " << p0 << " to " << p1
		 << " corresponds to approximately "
		 << printf("%.1f", log10(p1 / p0) * 10) << " dB." << endl;
}
