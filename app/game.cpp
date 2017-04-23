/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      game.cpp
 * @brief     Class Implementation of the Game Object
 */

#include "../include/game.h"
#include <iostream>
#include <vector>
#include <Eigen/Dense>
#include "gameBoard.cpp"

using std::cout;  using std::cin;

game::game() : position(0), inGame(true), turn(0) {
  boardValue = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  winCheck = {1, 2, 3};
  winCond <<  0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 3, 6, 1, 4, 7, 2, 5, 8, 2, 4, 6, 0,
                4, 8;
  winArray <<  0, 0, 0;
  winning = {0, 0, 0 };
}

game::~game() { }

/**
 * @brief Determines if there is a winner in the game.
 */
bool game::checkWinner() {
  int i, j;
  if (fmod(turn, 2) == 1) {
    player = "Player O";
    winning = {1, 1, 1};
  } else {
    player = "Player X";
    winning = {2, 2, 2};
  }
  for (i = 0; i <= 21; i += 3) {
    winArray = winCond.segment<3>(i);
    for (int k=0; k < 3; ++k) {
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

/**
 * @brief Initiates each step for playing the game. It asks for the input,
 * checks for valid input, updates the board values, prints the board
 * and determines if there is a winner.
 */
void game::playingGame() {
  while (inGame) {
    cout << "Please enter a number from 1-9" << endl;
    cin >> position;

    CheckInput();

    board.UpdateBoard(boardValue, turn, position);
    board.PrintBoard();
    turn += 1;
    inGame = checkWinner();
    if (turn == 9)
      inGame = false;
  }
}

/**
 * @brief Validates the input for choosing the next move.
 */
void game::CheckInput() {
  while (cin.fail() || position < 1 || position > 9 ||
            boardValue[position-1] != 0) {
    cout << "Invalid input, please enter an open number from 1-9" << endl;
    cin.clear();
    cin.ignore(999, '\n');
    cin >> position;
  }
}
