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
#include "../include/ticTacToe.h"

using namespace std;

ticTacToe::ticTacToe() : turn(0), a(0) {
	board = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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

game::~game() { }


