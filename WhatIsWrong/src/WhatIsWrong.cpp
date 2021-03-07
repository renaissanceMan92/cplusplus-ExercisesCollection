//============================================================================
// Name        : WhatIsWrong.cpp
// Author      : Robin Holm
// Description : Task 2. App simulating a coin flip, with a fixed error
//				that lead to failed randomness.
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;

enum Coin {Tails, Heads};

/*
 * rand() is technically not entirely random: given the same starting value, it will
 * always produce the same sequence. The issue in this program is that the
 * method for setting the starting value using an input, srand(), is placed inside
 * the for loop and thus executes with every iteration, giving rand() the same
 * start value each time (since the time() function does not change within
 * the short time span of the loop execution). That is why either heads or tails
 * is rolled ten times every time - srand() gives it the same value each time.
 *
 * The solution is to place srand() outside the loop, as I have done below.
 * In this logic, each new iteration of rand() builds on the random integer produced
 * in the previous loop, instead of repeatedly using the identical
 * value produced by srand(). */

int main() {

	int frequency0 = 0, frequency1 = 0;
	srand(time(0)); // Put srand() here to get randomness.
	Coin face;

	for (int counter = 1; counter <= 10; ++counter)
	{

		face = Coin(rand()% 2);
	    switch (face)
	    {
	      	case Tails: ++frequency0;
	      	  break;
	      	case Heads: ++frequency1;
	      	  break;
	    }
	}

	cout << "Tails were rolled " << frequency0 << " times" << endl;
	cout << "Heads were rolled " << frequency1 << " times" << endl;

	cin.get();
	return 0;
}
