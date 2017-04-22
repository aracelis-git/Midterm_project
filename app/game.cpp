/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      game.cpp
 * @brief     Class Implementation of the Game Object
 *
 */


#include <iostream>
#include <Eigen/Dense>
#include <vector>
#include "../include/game.h"
#include "gameBoard.cpp"

using namespace std;

game::game() : position(0), inGame(true), turn(0)
{
	boardValue = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	winCheck = {1, 2, 3};
}

game::~game() { }

/**
 * @brief Determines if there is a winner in the game.
 * @param the current state of board
 * @param the winning vector
 *
 */

bool game::checkWinner()
{
	Eigen::ArrayXd winCond(24);
	Eigen::ArrayXd winArray(3);
	winCond <<  0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 3, 6, 1, 4, 7, 2, 5, 8, 2, 4, 6, 0, 4, 8 ;
	winArray <<  0, 0, 0 ;
	int i, j;
	winning = board.getWinCond();
	if (winning.at(0) == 1) {
		player = "Player O";
	} else {
		player = "Player X";
	}
	for (i = 0; i <= 21; i += 3 ) {
	  winArray = winCond.segment<3>(i);
		for ( int k=0; k<3; ++k ) {
			j = winArray[k];
			winCheck[k] = boardValue.at(j);
		}

	  if ( winCheck == winning ) {
	  	cout << player << " is the winner." << endl;
	  	return false;
		}
	}
	return true;
}

void game::playingGame() {
	while (inGame) {
	  	cout << "Please enter a number from 1-9" << endl;
	  	cin >> position;
	  	while (cin.fail() || position < 1 || position > 9 || boardValue[position-1] != 0) {
	  		cout << "Invalid input, please enter an open number from 1-9" << endl;
	  	 	cin.clear();
	  	 	cin.ignore(999,'\n');
	  		cin >> position;
	  	}

	  	board.updateBoard(boardValue, turn, position);


			cout << endl;

			board.printBoard();

	  	turn += 1;

	  	inGame = checkWinner();

	  	if (turn == 9)
	  		inGame = false;
	 }
}
