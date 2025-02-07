#include<iostream>
#include<string>
using namespace std;

/* tic-tac-toe 
   1) make an array map of 3*3
   2) 2 players x and 0
   3) users enter values
   4) values are assigned
   5) values are positioned on the array map*/

 /* [0] |0,0 |0,1 |0,2 |
    [1] |1,0 |1,1 |1,2 |
    [2] |2,0 |2,1 |2,2 |*/


const int Rows = 3;
const int Cols = 3;

void runGame();
void initializeGameBoard(string gameBoard[Rows][Cols]);
void printCurrentBoard(string[Rows][Cols]);
void getUserInput(bool Xturn, string gameBoard[Rows][Cols]);
void cellAlreadyOccupied(int row, int col, string gameBoard[Rows][Cols]);
void getWinner(string gameBoard[Rows][Cols]);
void isBoardFull(string gameBoard[Rows][Cols]);

int main()
{  
    runGame();
	return 0;
}

void runGame()
{
    string winner = "";
    bool xTurn = true; // starts wint X's turn
    int theRow = 0;
    int theCol = 0;
    string gameBoard[Rows][Cols];

    initializeGameBoard(gameBoard);
    // initial print 

    string gameBoard[Rows][Cols];
    while (winner == "")
    {
        if (xTurn)
        {
            cout << "it is X's turn" << endl;
        }
        else
        {
            cout << " it is O's turn" << endl;
        }
        getUserInput(xTurn, gameBoard);
        cout << endl;
        printCurrentBoard(gameBoard);
       /* winner = getWinner(gameBoard);*/



        
    }


}
void initializeGameBoard(string gameBoard[Rows][Cols])
{
    

}
void printCurrentBoard(string gameBoard[Rows][Cols])
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << gameBoard[i][j];
            if (j < 2)
            {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < 2)
        {
            cout << " - - - - - " << endl;
        }

    }
}
void getUserInput(bool Xturn, string gameBoard[Rows][Cols])
{

}
void cellAlreadyOccupied(int row, int col, string gameBoard[Rows][Cols])
{

}
void getWinner(string[Rows][Cols])
{

}
void isBoardFull(string gameBoard[Rows][Cols])
{

}



