/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      game.h
 * @brief     Header for the game Class
 */



#ifndef INCLUDE_GAME_H_
#define INCLUDE_GAME_H_

#include <Eigen/Dense>
#include <vector>
#include <string>
#include "../include/gameBoard.h"

class game {
 private:
  int position;
  int inGame;
  int turn;
  std::string player;
  std::vector<int> boardValue;
  std::vector<int> winning;
  std::vector<int> winCheck;
  gameBoard board;
  Eigen::Array<double, 24, 1> winCond;
  Eigen::Array3d winArray;

 public:
  game();
  ~game();
  bool checkWinner();
  void playingGame();
  void CheckInput();
};

#endif  // INCLUDE_GAME_H_

