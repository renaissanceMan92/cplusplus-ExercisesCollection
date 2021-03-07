//============================================================================
// Name        : StonePaperScissors.cpp
// Author      : Robin Holm
// Version     :
// Copyright   : Your copyright notice
// Description : Task 4. A game of rock, paper scissors between a player and
//				an AI. The first player to 10 points wins.
//============================================================================

#include <iostream>
using namespace std;

enum Options { STONE, PAPER, SCISSORS };
Options playerTurn, aiTurn;
int humanPoints, aiPoints, choice;

void playGame();
void showAIChoice();
void playHand(int x, int y);

int main() {

	char answer;
	do {

		playGame();
		cout << "Play again?" << endl;
		cin >> answer;

	} while (answer == 'y');
	return 0;

}

void playGame() {

	do {

		srand(time(0));
		cout << "Your turn (input 0, 1 or 2):";
		cin >> choice;
		if (choice == 0) playerTurn = STONE;
		else if (choice == 1) playerTurn = PAPER;
		else if (choice == 2) playerTurn = SCISSORS;
		aiTurn = Options(rand()% 3);

		switch (playerTurn) {
			case STONE:
				cout << "You chose " << "stone" << endl;
				showAIChoice();
				playHand(2, 1);
				break;
			case PAPER:
				cout << "You chose " << "paper" << endl;
				showAIChoice();
				playHand( 0, 2);
				break;
			case SCISSORS:
				cout << "You chose " << "scissors" << endl;
				showAIChoice();
				playHand(1, 0);
				break;
		}

		cout << "Your score: " << humanPoints << endl;
		cout << "Computer score: " << aiPoints << endl << endl;

	} while(humanPoints < 10 && aiPoints < 10);

	if(humanPoints > aiPoints)cout << "You win!" << endl;
	else cout << "The computer won!" << endl;
	humanPoints = 0;
	aiPoints = 0;

}

void playHand(int x, int y) {

	if(aiTurn == x) {
		humanPoints++;
		cout << "You won this round." << endl;
	}
	else if(aiTurn == y) {
		aiPoints++;
		cout << "You lost this round." << endl;
	} else cout << "Draw." << endl;

}

void showAIChoice() {

	switch (aiTurn) {
		case STONE: cout << "Computer chose stone" << endl;
			break;
		case PAPER: cout << "Computer chose paper" << endl;
			break;
		case SCISSORS: cout << "Computer chose scissors" << endl;
	}

}
