//============================================================================
// Name        : TaskFour.cpp
// Author      : Robin Holm
// Version     :
// Copyright   : Your copyright notice
// Description : A program that reads all character in a file, takes all
//				upper and lower case characters and putting them in separate
//				files.
//============================================================================

#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main() {

	char data[100];
	ifstream infile;
	ofstream outfilelower, outfileupper;

	infile.open("abcfile.dat");
	infile.read(data, 100);
	cout << data;

	outfilelower.open("lower.txt");
	outfileupper.open("upper.txt");

	for (int i = 0; i < strlen(data); i++) {
		if(islower(data[i])) {
			outfilelower << data[i];
		} else if (isupper(data[i])){
			outfileupper << data[i];
		}
	}

	infile.close();
	outfilelower.close();
	outfileupper.close();
	return 0;

}
