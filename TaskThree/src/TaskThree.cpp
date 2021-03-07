//============================================================================
// Name        : TaskThree.cpp
// Author      : Robin Holm
// Description : Application for reading a specific section of a file
//				containing timelog information, and outputing that information
// 				in a specific format.
//============================================================================

#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

struct DataRecord {
	char logger;
	double temp;
	time_t locTime;
};

int main() {

	ifstream infile;
	ofstream outfile;
	DataRecord record[50];
	string timelogs[50];

	infile.open("timelog.dat");
	for(int i = 0; i < 50; i++) infile.read((char *) &record[i], sizeof(DataRecord));
	infile.close();

	outfile.open("A.txt");
	outfile << "Data A" << endl;
	for(int i = 0; i < 50; i++) {
		if(record[i].logger == 'A') {
			outfile << (double)((int)(record[i].temp * 10 + .5))/10
					<< ", " << asctime(localtime(&record[i].locTime)) << endl;
		}
	}
	outfile.close();

	return 0;

}


