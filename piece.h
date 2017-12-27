#ifndef CHESSENGINE_PIECES_H
#define CHESSENGINE_PIECES_H

using namespace std;

class piece {
public:
  piece(int x, int y, int team);
  virtual int makeMove(int x, int y);


protected:
  int x_;
  int y_;
  int team_;
}

class queen:public piece {
public:

}
