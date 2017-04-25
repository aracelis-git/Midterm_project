/**
 * @author    Aldrin I. Racelis
 * @copyright Aldrin Racelis (c)2017
 * @file      qLearning.cpp
 * @brief     Class Implementation of the Q-Learning Object
 */

#include "../include/qLearning.h"
#include <Eigen/Dense>
#include <algorithm>
#include <vector>
#include <iostream>
#include <random>

using std::vector;  using std::max;

qLearning::qLearning() :
  gamma(.75),
  numGames(0),
  numStates(1),
  player(2),
  turn(1) {
  state = { 1, 0, 0, 0, 0, 0, 0, 0, 0 };
  rtable = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  qtable = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };
  availmoves = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  boardvalue = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  winCheck = {1, 2, 3};
  winCond <<  0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 3, 6, 1, 4, 7, 2, 5, 8, 2, 4, 6, 0,
                4, 8;
  winArray <<  0, 0, 0;
  winning = {0, 0, 0 };
  //rtable = { 1 };
  CheckTable();
  //Learning();
}

qLearning::~qLearning() { }

void qLearning::Learning() {
	//nextAction = nextMove();
	if (fmod(turn, 2) == 1) {
	  player = 2;
	} else {
	  player = 1;
	}
 // UpdateState(nextAction, player);
  turn += 1;
	if (CheckTable()) {
    AddToTable();
	} else {
    GetQState();
	}
}

bool qLearning::CheckTable() {
	// search returns last if no match is found
	std::cout << std::endl;
	//int i = std::search(rtable.begin(), rtable.end(), state.begin(), state.end());
	//std::cout << rtable.at(std::search(rtable.begin(), rtable.end(), state.begin(), state.end())) << std::endl;
	return std::search(rtable.begin(), rtable.end(), state.begin(), state.end())
	                     != rtable.end();
}

void qLearning::AddToTable() {
	int i = 0;
  numStates += 1;
  newstate = state;
  newstate.insert(newstate.begin(),numStates);
  for (auto const &element : newstate) {
    rtable.push_back(element);
    if (i == 0) {
      qtable.push_back(numStates);
    } else {
    	qtable.push_back(0);
    }
  }
  for (auto const &element : rtable) {
    std::cout << element << ' ';
  }
  std::cout << std::endl;
}

void qLearning::UpdateState(int action, int player) {
  // Player O: 1 | Player X: 2
  if (CheckWinner()) {
    if (player == 1) {
      state[action+1] = 100;
    } else {
      state[action+1] = -100;
    }
  } else if (player == 1) {
    state[action+1] = -1;
    boardvalue[action-1] = 1;
  } else {
    state[action+1] = -2;
    boardvalue[action-1] = 2;
  }
}

/*void qLearning::UpdateQTable(int stateNum, int action) {
 // updated after action
 // Q(state, action) = R(state, action) + Gamma * Max[Q(next state, all actions)]

}

int qLearning::NextMove() {
  int nextAction;
  int numChoices = availmoves.size();
  int actionindex;
  randomChoice = rand() % numChoices;
  if (max_element(qstate.begin(), qstate.end()) == 0) {
    nextAction = availmoves[randomChoice];
  } else if (randomChoice >= 35) {
    nextAction = maxQ;
  } else { randomChoice < 35
    nextAction = availmoves[randomChoice];
  }
  actionindex = std::find(std::begin(availmoves), std::end(availmoves),
                            nextAction);
  availmoves.erase[actionindex];
  return nextAction;
}
*/
bool qLearning::CheckWinner() {
  int i, j;
  if (fmod(turn, 2) == 1) {
    winning = {1, 1, 1};
  } else {
    winning = {2, 2, 2};
  }
  for (i = 0; i <= 21; i += 3) {
    winArray = winCond.segment<3>(i);
    for (int k=0; k < 3; ++k) {
      j = winArray[k];
      winCheck[k] = boardvalue.at(j);
    }

    if ( winCheck == winning ) {
        return false;
    }
  }
  return true;
}

void qLearning::GetQState() {
  //int index = std::search(rtable.begin(), rtable.end(), state.begin(),
  //          state.end());
  for (int i = 0; i < 9; i++) {
 //   nowQstate[i] = qtable[i+index];
  }
}


