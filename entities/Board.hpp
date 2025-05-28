#pragma once
#include "Square.hpp"

// board class definition
class Board {

    // private by default
    Square* grid[8][8];  // 8x8 grid of pointers to Squares

public:
    Board();  // constructor sets up initial board
    ~Board(); // destructor to clean up memory

    Square* getSquareAt(int row, int col);
    void movePiece(int fromRow, int fromCol, int toRow, int toCol);
    void printBoard();  // simple terminal representation
};
