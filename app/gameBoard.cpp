/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      ticTacToe.cpp
 * @brief     Class Implementation of the Tic-Tac-Toe Object
 */

#include "../include/gameBoard.h"
#include <Eigen/Dense>
#include <iostream>
#include <vector>

using std::cout;  using std::vector;
using std::endl;

/**
 * @brief Initializes a game board with every new game. Creates an empty board
 * and prints it to the screen.
 */
gameBoard::gameBoard() :  a(0) {
  array2 = { "_", "_", "_", "_", "_", "_", "_", "_", "_" };
  PrintBoard();
}

gameBoard::~gameBoard() { }


/**
 * @brief Updates the state of the board with the current player's next move.
 * @param the state of the board in regards to Xs and Os
 * @param the turn number in the game
 * @param the position of the users desired move
 */
void gameBoard::UpdateBoard(vector<int> &boardvalue, int turn, int position) {
  if (fmod(turn, 2) == 1) {
    array2[position-1] = "X";
    boardvalue[position-1] = 2;
  } else {
    array2[position-1] = "O";
    boardvalue[position-1] = 1;
  }
}

/**
 * @brief Prints the current state of the board to the screen.
 */
void gameBoard::PrintBoard() {
  cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
  cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
  for (auto const &element : array2) {
    cout << element << ' ';
    a += 1;
    if (a == 3) {
      a = 0;
      cout << endl;
    }
  }
  cout << endl;
}

