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
	std::vector<int> boardValue;
	std::vector<std::string> array2;
	std::vector<int> winning;
	//Eigen::ArrayXd winCond();
	//Eigen::ArrayXd winArray();

public:
	gameBoard( );
	~gameBoard();
	void updateBoard(std::vector<int> &boardValue, int turn, int position);
	void printBoard();
	std::vector<int>& getWinCond();
};

#endif


