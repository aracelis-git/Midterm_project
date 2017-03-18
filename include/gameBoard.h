/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      ticTacToe.h
 * @brief     Header for the Tic-Tac-Toe Class
 */



#ifndef ticTacToe_H
#define ticTacToe_H

#include <Eigen/Dense>
#include <vector>


class ticTacToe {

private:
	int position;
	int turn;
	int a;
	std::string player;
	std::vector<int> board;
	std::vector<std::string> array2;
	std::vector<int> winning;
	Eigen::ArrayXd winCond();
	Eigen::ArrayXd winArray();

public:
	ticTacToe( );
	~ticTacToe();
	bool checkWinner(std::vector<int> board, std::vector<int> winning);
	void playingGame();
};

#endif


