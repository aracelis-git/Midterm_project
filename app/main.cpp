/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      main.cpp
 * @brief     Runs the tic-tac-toe game with Q-learning
 */

#include <iostream>
#include <Eigen/Dense>
#include <vector>
#include <game.h>
#include <gameBoard.h>
//#include <qLearning.h>

using std::cout;  using std::endl;

int main() {
	cout << "Please wait while the computer trains for tic-tac-toe *Not "
        "Implemented*" << endl;

  // O = 1 | X = 2
  game letsplay;
  letsplay.playingGame();

  return 0;

}
