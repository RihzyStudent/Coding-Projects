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
    cout<<"Program Built Succesfully";
return 0;
}
void runGame(){
    string gameBoard[ROWS][COLS];
    initializeGameBoard(gameBoard);
    printCurrentBoard(gameBoard);
    isBoardFull(gameBoard);

    
}
void initializeGameBoard(string gameBoard[ROWS][COLS])
{
    for (int row=0; row< 3; row++)
    {
        for(int col=0; col<3;col++)
    {
       gameBoard[row][col] = "  ";
    }
    }
}
void printCurrentBoard(string gameBoard[ROWS][COLS])
{
    for (int row=0; row < 3; row++)
    {   
     cout<<'\n'<<"--------"<<'\n';
        for(int col=0;col< 2;col++)
    {
        cout<< gameBoard[row][col];
        cout<<"|";
    }
    }
        cout<<'\n'<<"--------"<<'\n';
}
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS])
{
    if (gameBoard[row][col]=="  ")
    {
        return false;
    }
    else{
    return true;
}}

bool isBoardFull(string gameBoard[ROWS][COLS])
{
  bool check=1;  
  for (int row=0; row< 3; row++)
    {
        for(int col=0; col<3;col++)
    {
       if(gameBoard[row][col] == "  ")
       {
           check=0;
       }
    }
    }
    return check;
}
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS])
{
    
}