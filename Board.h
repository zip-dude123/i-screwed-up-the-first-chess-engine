#ifndef CHESSENGINE_BOARD_H
#define CHESSENGINE_BOARD_H
#include "move.h"
#include <string>
#include <vector>


class Board {
public:
  Board();
  //int availibleMoves();
  //bool contains();
  //bool isDone();
  std::string makeMove();
  bool moveMade(std::string move);

  // returns 0 if white wins, 1 if black wins.
  // returns -1 if game is not finished.
  int getWinner();

  // function to print the winner to the console
  void printWinner();

private:
  //helper function for the public function makeMove
  //returns
  int makeMove(Move m);

  //helper function for makeMove, returns a vector
  //of all the possible moves given the current layout
  std::vector<Move> getMoves();

  //helper function to determin if either king has fallen.
  void updateStatus();

  //function to evaluate the viability of
  //the current layout
  int evaluate();

  //various properties of the board
  int numpieces_;
  int blackpieces_;
  int whitepieces_;
  int[8][8] layout_;
  int whitepoints_;
  int blackpoints_;

  // status_ is 0 if white wins, 1 if black wins and
  // -1 if game is not done yet
  int status_;


};

#endif
