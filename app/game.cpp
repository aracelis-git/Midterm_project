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

using namespace std;

game::game() : inGame(true), turn(0), a(0) {
	board = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	array2 = { "_", "_", "_", "_", "_", "_", "_", "_", "_" };
	winCheck = {1, 2, 3};
}

game::~game() { }

/**
 * @brief Determines if there is a winner in the game.
 * @param the current state of board
 * @param the winning vector
 *
 */

bool game::checkWinner(vector<int> board, vector<int> winning) {
	Eigen::ArrayXd winCond(24);
	Eigen::ArrayXd winArray(3);
	winCond <<  0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 3, 6, 1, 4, 6, 2, 5, 8, 2, 4, 6, 0, 4, 8 ;
	winArray <<  0, 0, 0 ;
	int i, j;
	if (winning.at(0) == 1) {
		player = "Player O";
	} else {
		player = "Player X";
	}
	for (i = 0; i <= 21; i += 3 ) {
	  winArray = winCond.segment<3>(i);
		for ( int k=0; k<3; ++k ) {
			j = winArray[k];
			winCheck[k] = board.at(j);
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
	  	while (cin.fail() || position < 1 || position > 9 || board[position-1] != 0) {
	  		cout << "Invalid input, please enter an open number from 1-9" << endl;
	  	 	cin.clear();
	  	 	cin.ignore(999,'\n');
	  		cin >> position;
	  	}

	  	if (fmod(turn,2)==1) {
	  		array2[position-1] = "X";
	  		board[position-1] = 2;
	  		winning = {2, 2, 2};
	  	} else {
	  		array2[position-1] = "O";
	  		board[position-1] = 1;
	  		winning = {1, 1, 1};
	  	}

			cout << endl;
	  	for (auto const &element: array2) {
	  		cout << element << ' ';
	  		a += 1;
	  		if (a == 3) {
	  			a = 0;
	  			cout << endl;
	  		}
	  	}
	  	cout << endl;
	  	turn += 1;

	  	inGame = checkWinner(board,winning);

	  	if (turn == 9)
	  		inGame = false;
	 }
}
