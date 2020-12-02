
#include <iostream>
#include "Game.h"
#include "IO.h"
using namespace std;



int main() {

 const int SIZE = 3;
 int row, col;

 char board[SIZE][SIZE] = {{' ', ' ', ' '},
                           {' ', ' ', ' '},
                           {' ', ' ', ' '}};

 bool winX , winO , draw ;

 PrintBoard(board,SIZE);

 do {
     cout << "Enter X" << endl;
     do{
         /*do {
             cout << "Enter number row 0 1 2 = ";
             cin >> row;
         } while (row < 0 || row > 2);*/
         row = InputCoordinate();
         /*do {
             cout << "Enter number col 0 1 2 = ";
             cin >> col;
         } while (col < 0 || col > 2);*/
         col = InputCoordinate();
     } while (board[row][col] != ' ');
     board[row][col] = 'X';
     PrintBoard(board,SIZE);
     winX = WinX(board);
     if(winX) break;

     cout << "Enter O" << endl;
     do{
         /*do {
             cout << "Enter number row 0 1 2 = ";
             cin >> row;
         } while (row < 0 || row > 2);*/
         row = InputCoordinate();
         /*do {
             cout << "Enter number col 0 1 2 = ";
             cin >> col;
         } while (col < 0 || col > 2);*/
         col = InputCoordinate();
     } while (board[row][col] != ' ');
     board[row][col] = 'O';
     PrintBoard(board,SIZE);
     winO = WinO(board);
     if(winO) break;

     draw = Draw(board, SIZE);

 } while (!draw);


}
