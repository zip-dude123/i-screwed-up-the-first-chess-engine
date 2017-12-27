#include "Board.h"
#include <string>

//constructs a new board with pieces in the starting position
//layout_[0][0] corresponds to (a,1)
//white pieces positive, black negative
//0 = empty, 1 = pawn, 2 = knight, 3 = bishop, 5 = rook, 9 = queen, 10 = king
Board::Board(){
  //game is not done
  isDone_ = false;

  //initialize empty squares
  for (int i = 0; i < 8; i++) {
    for (int j = 2; j < 6; j++) {
      layout_[i][j]=0;
    }
  }
  //initialize pawns
  for (int i =0; i < 8; i++){
     layout_[i][1]=1;
     layout_[i][6]=-1;
   }
  //initialize white pieces
  layout_[0][0]=5;
  layout_[1][0]=2;
  layout_[2][0]=3;
  layout_[3][0]=9;
  layout_[4][0]=10;
  layout_[5][0]=3;
  layout_[6][0]=2;
  layout_[7][0]=5;

  //ionitialize black pieces
  layout_[0][7]=-5;
  layout_[1][7]=-2;
  layout_[2][7]=-3;
  layout_[3][7]=-9;
  layout_[4][7]=-10;
  layout_[5][7]=-3;
  layout_[6][7]=-2;
  layout_[7][7]=-5;

}

Board::isDone() {return isDone_;}

Board::moveMade(std::string move){
  
}

//the hard part lul
std::string Board::makeMove(){
  for (Move m : getMoves()){

  }
}

int Board::makeMove(Move m){

}

std::vector<Move> Board::getMoves(){

}
