/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      qLearning.h
 * @brief     Header for the Q Learning Class
 */

#ifndef INCLUDE_QLEARNING_H_
#define INCLUDE_QLEARNING_H_

#include <Eigen/Dense>
#include <random>
#include <vector>
#include <iostream>

class qLearning {
 private:
  float gamma;
  int numGames;
  int numStates;
  int player;
  int turn;
  int randomChoice;
  bool test;
  std::vector<int> rtable;
  std::vector<double> nowQstate;
  std::vector<int> state;
  std::vector<int> newstate;
  std::vector<int> availmoves;
  std::vector<int> boardvalue;
  std::vector<int> winning;
  // Eigen::Array<double,9,1> state;
  // Eigen::Array<double, 9, Eigen::Dynamic> rtable;
  //Eigen::Array<double, Eigen::Dynamic, Eigen::Dynamic> v1;
  //Eigen::Array<double, 9, Eigen::Dynamic> qtable;
  std::vector<int> winCheck;
  Eigen::Array<double, 24, 1> winCond;
  Eigen::Array3d winArray;

 public:
  qLearning();
  ~qLearning();
  void UpdateQTable();
  void Learning();
  bool CheckTable();
  bool CheckWinner();
  void AddToTable();
  int NextMove();
  void GetQState();
  //void UpdateQTable();
  void UpdateState(int action, int player);
  std::vector<double> qtable;
};

#endif // INCLUDE_QLEARNING_H_



