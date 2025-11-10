#include <iostream>
 // https://www.geeksforgeeks.org/cpp/tic-tac-toe-game-in-cpp/
using namespace std;
class Board{
private:
    char array[3][3];
    int filledCells;
public: 
    Board() : filledCells(0) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                array[i][j] = ' ';
            }
        }
    }


void drawBoard() const {
        cout << "-------------" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "| ";
            for (int j = 0; j < 3; j++) {
                cout << array[i][j] << " | ";
            }
            cout << endl << "-------------" << endl;
        }
    }



    void PlayerInput(char symbol)
    {  
        int row ;
        int col;
        drawBoard();
        cout << "Wähle ein Reihe:  "<< endl;
        cin >> row;
        
        cout << "Wähle eine Spalte: " << endl;
        cin >> col;
        //An den Index anpassen
        row--; col--;
        int *pRow = &row;
        int *pCol = &col;


    }
    bool isValidMove(int *pRow, int *pCol)
    {
        return (*pRow >= 0 && *pRow < 3 && *pCol >= 0 && *pCol < 3 && array[*pRow][*pCol] == ' ');
    }
    void makeMove(int *pRow, int *pCol,char symbol)
    {
        if(isValidMove( pRow, pCol)){
            array[*pRow][*pCol] = symbol;
            filledCells++;
        }
        else {
            cout << "Ungültiger Zug!"<< endl;
        }
    }
   
};
 int main(int *pRow,int *pCol, char symbol)
    {
        Board game;
        //game.PlayerInput('X');
        //game.makeMove(pRow, pCol, symbol);
    
                        
    return 0;
    }