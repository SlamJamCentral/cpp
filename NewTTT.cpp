#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include<cmath>

//* * * * * * * * * * * * * * * * *
//    <array name>[row][column]   *
//    this is the board:          *
//                                *
//                columns         *
//                [0 1 2]         *
//    r    [0]    7 8 9           *
//    o    [1]    4 5 6           *
//    W    [2]    1 2 3           *
//* * * * * * * * * * * * * * * * *

using namespace std;

int rounds();
void drawBoard(char board2[3][3]);
void xInput(short x);
void oInput(short o);
//void boardOutput(char XnO[3][3]);
void testBoard(char board3[3][3]);

int main(){
  short x, o;
  char board[3][3] = {{'e', 'e', 'e'}, {'e', 'e', 'e'}, {'e', 'e', 'e'}};
  int rounds = rounds();

  for(x = 1; x <= rounds; x++){
    bool g = true;
    while(g != false){
      drawBoard(board);
      xInput(x);
      drawBoard();
      oInput(o);
      testBoard();
    }
  }
}

int rounds(){
  int rnds;
  do{
    cout << "How many rounds do you want to play for?";
    cin >> rnds;
  }while(rnds <= 0);
  return rnds;
}

void drawBoard(char board[3][3]){
  cout << "\n " << endl;
  cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
  cout << "-----------" << endl;
  cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
  cout << "-----------" << endl;
  cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
  cout << "\n " << endl; 
}





/*
int main(){
  srand(time(0));
  short input;
  char board[3][3] = {{'e', 'e', 'e'}, {'e', 'e', 'e'}, {'e', 'e', 'e'}};
  victor = 0;

  while(matchActive != false){
    boardOutput(board);
    cout << "What move would you like to make?\n";
    cin >> input;

    moveAuthentication = false;
    do{
    if(input == 'e' && board[0] != 'x' && board[0] != 'o'){
      board[0] = 1;
      moveAuthentication = true;
    }
    else if(input == 2 && board[1] != 1 && board[1] != 2){
      board[1] = 1;
      moveAuthentication = true;
    }
    else if(input == 3 && board[2] != 1 && board[2] != 2){
      board[2] = 1;
      moveAuthentication = true;
    }
    else if(input == 4 && board[3] != 1 && board[3] != 2){
      board[3] = 1;
      moveAuthentication = true;
    }
    else if(input == 5 && board[4] != 1 && board[4] != 2){
      board[4] = 1;
      moveAuthentication = true;
    }
    else if(input == 6 && board[5] != 1 && board[5] != 2){
      board[5] = 1;
      moveAuthentication = true;
    }
    else if(input == 7 && board[6] != 1 && board[6] != 2){
      board[6] = 1;
      moveAuthentication = true;
    }
    else if(input == 8 && board[7] != 1 && board[7] != 2){
      board[7] = 1;
      moveAuthentication = true;
    }
    else if(input == 9 && board[8] != 1 && board[8] != 2){
      board[8] = 1;
      moveAuthentication = true;
    }
    else{
      cout << "\nSomething went wrong, try again." << endl;
      moveAuthentication = false;
    }
    }while(moveAuthentication != true);

    input = rand();
    input %= 9;

    moveAuthentication = false;
    do{
    if(input == 1 && board[0] != 1 && board[0] != 2){
      board[0] = 2;
      moveAuthentication = true;
    }
    else if(input == 2 && board[1] != 1 && board[1] != 2){
      board[1] = 2;
      moveAuthentication = true;
    }
    else if(input == 3 && board[2] != 1 && board[2] != 2){
      board[2] = 2;
      moveAuthentication = true;
    }
    else if(input == 4 && board[3] != 1 && board[3] != 2){
      board[3] = 2;
      moveAuthentication = true;
    }
    else if(input == 5 && board[4] != 1 && board[4] != 2){
      board[4] = 2;
      moveAuthentication = true;
    }
    else if(input == 6 && board[5] != 1 && board[5] != 2){
      board[5] = 2;
      moveAuthentication = true;
    }
    else if(input == 7 && board[6] != 1 && board[6] != 2){
      board[6] = 2;
      moveAuthentication = true;
    }
    else if(input == 8 && board[7] != 1 && board[7] != 2){
      board[7] = 2;
      moveAuthentication = true;
    }
    else if(input == 9 && board[8] != 1 && board[8] != 2){
      board[8] = 2;
      moveAuthentication = true;
    }
    else{
      moveAuthentication = false;
    }
    }while(moveAuthentication != true);

    endGame(board);
    if(victor == 1){
      boardOutput(board);
      cout << "\nPlayer One wins! Good game!";
      matchActive = false;
    }
    if(victor == 2){
      boardOutput(board);
      cout << "\nPlayer Two wins! Good game!";
      matchActive = false;
    }
  }
  return 0;
}

int testBoard(short board[9]){
  if(board[0][0] == 1 && board[1] == 1 && board[2] == 1)
    main(1);
  if(board[3] == 1 && board[4] == 1 && board[5] == 1)
    main(1);
  if(board[6] == 1 && board[7] == 1 && board[8] == 1)
    main(1);
  if(board[0] == 1 && board[3] == 1 && board[6] == 1)
    main(1);
  if(board[1] == 1 && board[4] == 1 && board[7] == 1)
    main(1);
  if(board[2] == 1 && board[5] == 1 && board[8] == 1)
    main(1);
  if(board[0] == 1 && board[4] == 1 && board[8] == 1)
    main(1);
  if(board[6] == 1 && board[4] == 1 && board[2] == 1)
    main(1);

  if(board[0] == 2 && board[1] == 2 && board[2] == 2)
    main(2);
  if(board[3] == 2 && board[4] == 2 && board[5] == 2)
    main(2);
  if(board[6] == 2 && board[7] == 2 && board[8] == 2)
    main(2);
  if(board[0] == 2 && board[3] == 2 && board[6] == 2)
    main(2);
  if(board[1] == 2 && board[4] == 2 && board[7] == 2)
    main(2);
  if(board[2] == 2 && board[5] == 2 && board[8] == 2)
    main(2);
  if(board[0] == 2 && board[4] == 2 && board[8] == 2)
    main(2);
  if(board[6] == 2 && board[4] == 2 && board[2] == 2)
    main(2);
}

int boardOutput(short XnO[9]){
  cout << "\n " << endl;
  cout << XnO[0] << " | " << XnO[1] << " | " << XnO[2] << endl;
  cout << "-----------" << endl;
  cout << XnO[3] << " | " << XnO[4] << " | " << XnO[5] << endl;
  cout << "-----------" << endl;
  cout << XnO[6] << " | " << XnO[7] << " | " << XnO[8] << endl;
  cout << "\n(Anything with a zero is an empty space)" << endl;
}
*/