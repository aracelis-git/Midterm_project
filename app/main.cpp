#include <iostream>
#include <Eigen/Dense>
#include <vector>
#include <game.h>
//#include <ticTacToe.h>
//#include <qLearning.h>

using namespace std;

int main() {
  int a = 0;
  vector<string> array2 = { "_", "_", "_", "_", "_", "_", "_", "_", "_" };
	cout << "Please wait while the computer trains for tic-tac-toe *Not Implemented*" << endl << endl;

  // O = 1 | X = 2
  vector<int> array3 { 1, 2 };
  vector<int> array4 { 1, 2, 3 };

  for (auto const &element: array2) {
  	cout << element << ' ';
  	a += 1;
  	if (a == 3) {
  		a = 0;
  		cout << endl;
  	}
  }



  cout << endl;
  game yay;
  yay.playingGame();

  return 0;

}
