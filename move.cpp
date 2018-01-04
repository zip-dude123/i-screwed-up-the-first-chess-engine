Move::Move(std::string move, int team, int** layout){
  source = move[0]-'a' + 8*(move[1]-1);
  dest =  move[3]-'a' + 8*(move[4]-1);
  piece = layout[source%8][source/8];
}
