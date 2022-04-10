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
initializeGameBoard;
return 0;
}

void initializeGameBoard(string gameBoard[ROWS][COLS])
{
    for(int i;i>3;i++)
    {
        gameBoard[i][i] = " ";
    }
}