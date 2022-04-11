#include <iostream>
#include <string>
using namespace std;
const int ROWS = 3;
const int COLS = 3;
void runGame();
void initializeGameBoard(string gameBoard[ROWS][COLS]);
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]);
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoardFull(string gameBoard[ROWS][COLS]);
int main()
{
    runGame();
return 0;
}
void runGame(){
    string gameBoard[ROWS][COLS];
    initializeGameBoard(gameBoard);
    printCurrentBoard(gameBoard);
    
}
void initializeGameBoard(string gameBoard[ROWS][COLS])
{
    for (int row = 0; row < 3; row++)
    {
        for(int col;col>3;col++)
    {
        gameBoard[row][col] = " ";
    }
    }
}
void printCurrentBoard(string gameBoard[ROWS][COLS])
{
    cout<<"hi"<<'\n';
}