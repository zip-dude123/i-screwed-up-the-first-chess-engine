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

private:
  int makeMove(Move m);
  std::vector<Move> getMoves();
  int numpieces_;
  int blackpieces_;
  int whitepieces_;
  int[8][8] layout_;
  int whitepoints_;
  int blackpoints_;
  bool isDone_;


};

#endif
