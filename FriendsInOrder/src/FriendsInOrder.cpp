//============================================================================
// Name        : FriendsInOrder.cpp
// Author      : Robin Holm
// Description : Task 5. App for taking five names as input and printing them
//				in alphabetical order.
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

const int BUFLEN = 100;
void sort(char *friendList[], int n);
void print(char *friendList[], int n);
void terminate(char *friendList[], int n);
const int AMOUNT = 5;

int main() {

	char*friends[AMOUNT];
	char buff[BUFLEN] = {""};
	int count = 0;

	while(count < AMOUNT) {

		cout << "Name a friend: ";
		cin.getline(buff, BUFLEN);
		friends[count] = new char;
		friends[count] = buff;
		/*
		 *  I found this task impossible to complete as it seems I do not quite understand
		 *   how to use dynamic arrays, chars and pointers together.
		 *   Many many hours were spent here and I always got the same result,
		 *   namely that the latest buff input name was added to all elements
		 *   of the dynamic array. I had to give up eventually.
		 */

		count++;
	}

	sort(friends, count);
	print(friends, count);
	terminate(friends, count);
	return 0;
}

void sort(char *friendList[], int n) {
// WRITE FUNCTION that sorts the strings in the friendList in alphabetical order!
}

void print(char *friendList[], int n) {
// WRITE FUNCTION that prints ‘n’ names from the friendList on screen!
	for (int i = 0; i < n; i++) cout << friendList[i] << endl;
}

void terminate(char *friendList[], int n) {
// WRITE FUNCTION that releases all dynamically allocated memory!
	for (int i = 0; i < n; i++) delete friendList[i];
	delete [] friendList;
}
