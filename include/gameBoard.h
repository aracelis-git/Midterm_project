/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      ticTacToe.h
 * @brief     Header for the Game Board Class
 */



#ifndef gameBoard_H
#define gameBoard_H

#include <Eigen/Dense>
#include <vector>


class gameBoard {

private:
	int a;
	std::string player;
	std::vector<std::string> array2;

public:
	gameBoard( );
	~gameBoard();
	void UpdateBoard(std::vector<int> &boardValue, int turn, int position);
	void PrintBoard();
	std::vector<int>& GetWinCond();
};

#endif


