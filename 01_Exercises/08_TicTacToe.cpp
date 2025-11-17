#include <iostream>
#include <cstdlib>
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
    bool isValidMove(int row, int col)
    {
        return (row >= 0 && row < 3 && col >= 0 && col < 3 && array[row][col] == ' ');
    }
    void makeMove(int row, int col,char symbol)
    {
        if(isValidMove( row, col)){
            array[row][col] = symbol;
            filledCells++;
        }
        else {
            cout << "Ungültiger Zug!"<< endl;
        }
    }

    bool checkWin(char symbol)
    {
        // Reihen und Spalten prüfen
        for(int i = 0; i < 3; i++)
        {
            if ((array[i][0] == symbol && array[i][1] == symbol && array[i][2] == symbol) ||
                (array[0][i] == symbol && array[1][i] == symbol && array[2][i] == symbol)) {
                return true;
            }
        }

        // Diagonalen prüfen
        if ((array[0][0] == symbol && array[1][1] == symbol && array[2][2] == symbol) ||
            (array[0][2] == symbol && array[1][1] == symbol && array[2][0] == symbol)) {
            return true;
        }

        return false;
    }
    bool isDraw()
    {
        return filledCells == 9;
    }

        
    
   
};
 
        
int main() 
{
    system("clear");
    Board game;
    char currentPlayer = 'X';
    int row, col;

    while (true) {
        game.drawBoard();
        cout << "Spieler " << currentPlayer << ", wähle Reihe (1-3): ";
        cin >> row;
        cout << "Spieler " << currentPlayer << ", wähle Spalte (1-3): ";
        cin >> col;

        row--; col--; // Index anpassen

        if (game.isValidMove(row, col)) {
            game.makeMove(row, col, currentPlayer);

            if (game.checkWin(currentPlayer)) {
                game.drawBoard();
                cout << "Spieler " << currentPlayer << " hat gewonnen!" << endl;
                break;
            } else if (game.isDraw()) {
                game.drawBoard();
                cout << "Unentschieden!" << endl;
                break;
            }

            // Spieler wechseln
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } 
        else 
        {
            cout << "Ungültiger Zug! Bitte erneut versuchen." << endl;
        }
    }                  
    return 0;
}