#include "piece.h"
#include <iostream>
#include <string>
#include "Board.h"

int main{
  std::string input;
  Board b = Board::Board();
  while(b.getWinner()==-1){
    cin >> input;
    cout << b.moveMade(input) << endl;
    cout << b.makeMove();
  }
  cout << "Game Over!" << endl;
  b.printWinner();
  return 0;
}
