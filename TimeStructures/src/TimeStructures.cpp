//============================================================================
// Name        : TimeStructures.cpp
// Author      : Robin Holm
// Description : Task 3. Various time calculations and conversions.
//============================================================================

#include <iostream>
using namespace std;

struct TimeType {
	int hour;
    int min;
};

int toMinutes(TimeType time);
TimeType toTime(int minutes);
TimeType timeDifference(TimeType timeB, TimeType timeC);
TimeType dynamicTimes();

int main() {

	cout << "Demonstration a):" << endl;
	int minutes;
	TimeType timeA = {10, 15};
	minutes = toMinutes(timeA);
	cout << minutes << " minutes" << endl << endl;

	cout << "Demonstration b):" << endl;
	minutes = 124;
	TimeType time = toTime(minutes);
	cout << "Time: " << time.hour << ":" << time.min << endl << endl;

	cout << "Demonstration c):" << endl;
	TimeType timeB = {10, 30}, timeC = {13, 20}, difference;
	difference = timeDifference(timeB, timeC);
	cout <<  "Time difference: " << difference.hour << ":" << difference.min << endl << endl;

	cout << "Demonstration d):" << endl;
	TimeType maxDiff = dynamicTimes();
	cout <<   "Time difference: " << maxDiff.hour << ":" << maxDiff.min << endl << endl;

	return 0;

}

int toMinutes(TimeType time) {

	return (time.hour * 60) + time.min;

}

TimeType toTime(int minutes) {

	TimeType time;
	time.hour = minutes / 60;
	time.min = minutes % 60;
	return time;

}

TimeType timeDifference(TimeType timeB, TimeType timeC) {

	int time = toMinutes(timeB) - toMinutes(timeC);
	if (time < 0) time *= -1;
	return toTime(time);

}

TimeType dynamicTimes() {

	srand(time(0));
	int* p = new int[200];
	for (int i = 0; i < 200; i++) {
		p[i] = rand() % 1000 + 1;
	}
	int max = p[0];
	for (int i = 0; i < 200; i++) {
		if (max < p[i]) max = p[i];
	}
	cout << "Max: " << max << endl;
	int min = p[0];
	for (int i = 0; i < 200; i++) {
		if (min > p[i]) min = p[i];
	}
	cout << "Min: " << min << endl;
	delete [] p;
	return toTime(max - min);

}
