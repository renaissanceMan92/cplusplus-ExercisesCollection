//============================================================================
// Name        : TaskFive.cpp
// Author      : Robin Holm
// Description : a program for reading a file input stream from an SMS log file,
//				filtering out all messages from a certain number and putting
//				them into a separate file.
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool senderFilter(char *logFileName, char *resultFileName, const char *sender);

int main() {

	char logFileName[100] = "smslog_eng.txt";
	char resultFileName[100] = "filtered_log.txt";
	char sender[50] = "0703-124566";
	cout << "Reading from sms log..." << endl << endl;
	senderFilter(logFileName, resultFileName, sender);
	cout << "Putting filtered content into new log file..." << endl << endl;
	cout << "Finished.";
	return 0;

}

bool senderFilter(char *logFileName, char *resultFileName, const char *sender) {

	ifstream infile;
	ofstream outfile;
	string line[100];

	if(!infile) return false;
	else {

		infile.open(logFileName);
		int count = 0;
		while(getline(infile, line[count])) count++;
		infile.close();

		outfile.open(resultFileName);
		for (int i = 0; i < 100; i++) {
			if (line[i].find(sender) != string::npos && line[i - 1].find("07") == string::npos) {
				 outfile << line[i];
				 outfile << line[i + 1];
				 outfile << line[i + 2];
				 outfile << line[i + 3];
			}
		}
		outfile.close();

		return true;

	}

}
