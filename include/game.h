/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      game.h
 * @brief     Header for the game Class
 */



#ifndef game_H
#define game_H

#include <Eigen/Dense>
#include <vector>
#include "../include/gameBoard.h"


class game {

private:
	int position;
	int inGame;
	int turn;
	int* winning_ptr;
	std::string player;
	std::vector<int> boardValue;
	std::vector<int> winning;
	std::vector<int> winCheck;
	gameBoard board;

public:
	game( );
	~game();
	bool checkWinner();
	void playingGame();
};

#endif

