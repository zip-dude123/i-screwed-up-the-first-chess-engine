#include "Board.h"
#include <string>

//constructs a new board with pieces in the starting position
//layout_[0][0] corresponds to (a,1)
//white pieces positive, black negative
//0 = empty, 1 = pawn, 2 = knight, 3 = bishop, 5 = rook, 9 = queen, 10 = king
Board::Board(){
  //game is not done
  status_ = -1;

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

  //initialize black pieces
  layout_[0][7]=-5;
  layout_[1][7]=-2;
  layout_[2][7]=-3;
  layout_[3][7]=-9;
  layout_[4][7]=-10;
  layout_[5][7]=-3;
  layout_[6][7]=-2;
  layout_[7][7]=-5;

}

/*** PUBLIC MEMBER FUNCTIONS ***/

/*Board::isDone() {
  if (status_ == -1) return false;
  else return true;
}*/

bool Board::moveMade(std::string move){
  Move m = Move::Move(move, 0, layout_);

}

//not really that hard
std::string Board::makeMove(){
  int bestmove=0;
  Move best;
  for (Move m : getMoves()){
    int x = evaluate(m);
    if (x>bestmove){
      best = m;
      bestmove = x;
    }
  }
  return best.code;
}

int Board::getWinner(){
  return status_;
}

void Board::PrintWinner(){
  if (status_==1) cout << "Black Wins!"<<endl;
  else if (status_==0) cout << "White Wins!" << endl;
  else cout << "Game in progress.";
}

/***  PRIVATE HELPER FUNCTIONS ****/

//helper function to rearrangethe Board
//according to a given move
int Board::makeMove(Move m){

}


//team is 0 for white and 1 for black
std::vector<Move> Board::getMoves(int team){

}

void Board::updateStatus(){
  bool whiteking=false;
  bool blackking=false;
  for (size_t i = 0; i < 64; i++) {
    if (layout_[i%8][i/8]==10) whiteking == true;
    else if (layout_[i%8][i/8]==-10) blackking == true;
  }
  if (whiteking&&blackking) status_ = -1;
  else if (whiteking) status_ = 0;
  else status_ = 1;
}

int Board::evaluate(Move m){
  //first copy the layout to a temp array
  int[8][8] layout;
  for (size_t i = 0; i < 64; i++) {
    layout[i%8][i/8] = layout_[i%8][i/8];
  }
  //make the move on that new array

  //get all the moves white can make,
  //call evaluate(temp array)

  //return avg case
}

// helper function for evaluate(Move m)
//for now this is pretty basic, just returns
//the difference of point values of all the pieces
//on the bord. improving this would make the engine
//much better
int Board::evaluate(int** layout){
  int whitesum=0;
  int blacksum=0;
  for (size_t i = 0; i < 64; i++) {
    if (layout[i%8][i/8]<0) blacksum+=layout[i%8][i/8];
    else whitesum+=layout[i%8][i/8];
  }
  return whitesum + blacksum;
}
