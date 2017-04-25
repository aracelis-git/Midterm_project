/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      test.cpp
 * @brief     Runs tests for the tic-tac-toe game
 *
 */

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "../include/game.h"
#include "../include/gameBoard.h"

/**
 * @brief  Tests the checkWinner function to see if there is no
 * winner at the start of the game
 */
TEST(ChecksWinner, NoWinnerAtStart) {
  game test;
  EXPECT_EQ(test.CheckWinner(),true);
}

/**
 * @brief  Tests the UpdateBoard function to ensure the board
 * updates correctly
 */
TEST(ChecksUpdateBoard, BoardUpdatesCorrectly) {
  gameBoard test;
  int turn = 0;
  int position = 4;
  std::vector<int> boardValue = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  test.UpdateBoard(boardValue, turn, position);
  EXPECT_EQ(boardValue[3],1);
}
