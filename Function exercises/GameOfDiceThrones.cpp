//============================================================================
// Name        : GameOfDiceThrones.cpp
// Author      : Robin Holm
// Description : Task 8. A game of dice between the user and an AI player.
//============================================================================

#include <iostream>
using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);


int main() {

	int humanTotalScore = 0;
	int computerTotalScore = 0;
	string win;

		do {

			humanTotalScore += humanTurn(humanTotalScore);
			cout << "Your total score is " << humanTotalScore << endl << endl;
			if(humanTotalScore > 99) {
				if(win != "machine") {
					win = "man";
				}
			} else {
				computerTotalScore += computerTurn(computerTotalScore);
				cout << "AI total score is " << computerTotalScore << endl << endl;
				if(computerTotalScore > 99) {
					if(win != "man") {
						win = "machine";
					}
				}
			}
		} while (win != "man" && win != "machine");

		if (win == "man") {
			cout << "You win!";
		} else {
			cout << "You lost!";
		}

	return 0;

}

int humanTurn(int humanTotalScore) {

	int random = 0;
	int score = 0;
	char answer;

	cout << "Your turn!" << endl;

	do {

		answer = 'h';
		cout << "Rolling..." << endl;
		random = rand() % (6 + 1 - 1) + 1;
		cout << "You rolled a " << random << endl;

		if(random == 1) {
			cout << "You get zero points." << endl;
			answer = 'x';
		} else {
			score += random;
			cout << "Roll again or hold? (r/h)";
			cin >> answer;
			cout << endl;
		}

	} while (answer == 'r');

	if (answer == 'x') {
		return 0;
	} else {
		return score;
	}

}

int computerTurn(int computerTotalScore) {

	int random = 0;
	int score = 0;
	char answer;

	do {

		answer = 'h';
		cout << "AI is rolling..." << endl;
		random = rand() % (6 + 1 - 1) + 1;
		cout << "AI rolled a " << random << endl;

		if(random == 1) {
			cout << "AI gets zero points." << endl;
			answer = 'x';
		} else {
			score += random;
			cout << "AI score for this turn is " << score << endl;
			if (score > 9) {
				answer = 'h';
			} else {
				answer = 'r';
			}
		}

	} while (answer == 'r');

	if (answer == 'x') {
		return 0;
	} else {
		return score;
	}

}
