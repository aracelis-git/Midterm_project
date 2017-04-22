/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      ticTacToe.cpp
 * @brief     Class Implementation of the Tic-Tac-Toe Object
 *
 */

#include <iostream>
#include <Eigen/Dense>
#include <vector>
#include "../include/gameBoard.h"

using namespace std;

gameBoard::gameBoard() :  a(0) {
	array2 = { "_", "_", "_", "_", "_", "_", "_", "_", "_" };
  for (auto const &element: array2) {
  	cout << element << ' ';
  	a += 1;
  	if (a == 3) {
  		a = 0;
  		cout << endl;
  	}
  }
}

gameBoard::~gameBoard() { }

void gameBoard::UpdateBoard(vector<int> &boardvalue, int turn, int position)
{
	if (fmod(turn,2)==1) {
		array2[position-1] = "X";
		boardvalue[position-1] = 2;
	} else {
		array2[position-1] = "O";
		boardvalue[position-1] = 1;
	}
}

void gameBoard::PrintBoard()
{
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
}

