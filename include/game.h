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


class game {

private:
	int position;
	int inGame;
	int turn;
	int a;
	std::string player;
	std::vector<int> board;
	std::vector<std::string> array2;
	std::vector<int> winning;
	//Eigen::ArrayXd winCond();
	//Eigen::ArrayXd winArray();

public:
	game( );
	~game();
	bool checkWinner(std::vector<int> board, std::vector<int> winning);
	void playingGame();
};

#endif

