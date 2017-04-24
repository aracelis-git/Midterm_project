/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      qLearning.h
 * @brief     Header for the Q Learning Class
 */

#ifndef INCLUDE_QLEARNING_H_
#define INCLUDE_QLEARNING_H_

#include <Eigen/Dense>

class qLearning {
 private:
  Eigen::Array<double,9,dynamic> rtable;
  Eigen::Array<double,9,dynamic> qtable;

};

#endif // INCLUDE_QLEARNING_H_



