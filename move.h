#ifndef MOVE_H
#define MOVE_H
#include <string>
#include <pair>

class Move {

public:
  /* move constructor: str move is the chess move code:
  * source coords and dest coords separated by space
  * if int team is 0, move is by white (player),
  * if team is 1, move is by black (engine)
  * Team will never be determined by user */
  Move(std::string move, int team, int** layout);

  int piece;
  int source;
  int dest;
  std::string code;
};

#endif
