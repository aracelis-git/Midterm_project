/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      ticTacToe.h
 * @brief     Header for the Game Board Class
 */

#ifndef INCLUDE_GAMEBOARD_H_
#define INCLUDE_GAMEBOARD_H_

#include <Eigen/Dense>
#include <vector>
#include <string>

class gameBoard {
 private:
  int a;
  std::vector<std::string> array2;

 public:
  gameBoard();
  ~gameBoard();
  void UpdateBoard(std::vector<int> &boardValue, int turn, int position);
  void PrintBoard();
};

#endif  // INCLUDE_GAMEBOARD_H_


